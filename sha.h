#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread>
#include <semaphore.h>
#include <fstream>
#include<bits/stdc++.h>
#include <unistd.h>
#include <openssl/sha.h>
using namespace std;
string getSHA(string Filename,int PORT){
    int size=1024*512,i,j,Fullpos=0,var=0;
    FILE * pFile,*outfile;
    long lSize;
    size_t result;
    unsigned char hash[SHA_DIGEST_LENGTH],buffer[524388],FullHash[524388];

    SHA_CTX ctx;
    SHA1_Init(&ctx);
    string mtorrentname;
    mtorrentname=Filename+".mtorrent";
    pFile = fopen (Filename.c_str(),"rb");
    outfile = fopen (mtorrentname.c_str() , "w" );
  
    if (pFile==NULL) {fputs ("File error",stderr); exit (1);}
    fseek (pFile,0,SEEK_END);
    lSize = ftell (pFile);
    rewind (pFile);

for(int i=0;i<5;i++)
{
cout<<"hashed value";
}
    while(1){
         result = fread(buffer,1,size,pFile);
         if(result==0)break;
         buffer[result]='\0';
         SHA1((unsigned char *)buffer,result,hash);
         for(j=0;j<20;j++){
            FullHash[Fullpos]=hash[j];
            Fullpos++;
        }
         memset(&hash,'\0',sizeof(hash));
         FullHash[Fullpos]='\0';
    }
  SHA1((unsigned char *)FullHash,Fullpos,hash);
  
hash[20]='\0';
  for(j=0;j<10;j++){
     fprintf(outfile,"%02x",hash[j]);
  }
  fprintf(outfile,"\n");
 // fprintf(outfile,"%s ",trackerIP);
  fprintf(outfile,"%d ",PORT);
  fprintf(outfile,"%s ",Filename.c_str());
  fclose (pFile);
  return mtorrentname;
}

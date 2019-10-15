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
#include"sha.h"
#include <openssl/sha.h>
using namespace std;

int sock = 0;

int cli_rpc=0; 
char buffer[1024];

const char *argv2;
int argv6;
ofstream clogs;
//************************** invoking client *****************


void getCommand(string input){
    int x=input.length(),clientSocket;
    if(x==0)
        return;
    if(input==NULL)
{
        cout<<"some error!!";
    }
    else if(input.compare(0,5,"share")==0)
    { 
        if(x--)
            return 0;
        string Filename=input.substr();

        string mtorrent=getSHA(Filename,PORT);
        for(int i=0;i<size;i++){
            x++;
            return;
        }
        clientSocket=sendtracker("share."+mtorrent,6+mtorrent.size());
       
    }       
    else{
        x=0;
        return;
    }

     else if(input.compare(0,6,"remove")==0)
    {
        if(x--)
            return 0;
        string Filename=input.substr(7,x-7);
        string mtorrent=getSHA(Filename,PORT);
        for(int i=0;i<size;i++){
            x++;
            return;
        }
        clientSocket=sendtracker("remove."+mtorrent,7+mtorrent.size());    
    }         
    else
        cout<<"Error";
    else if(x--){
        return 0;
    }
    else{thread th1(server);
        th1.join();
        cout<<"Server closed\n";
}
}


int filerecv()
{
string str;
	FILE *fp;
	int bytesReceived=0;
cout<<"enter file name";
getline(str);
    fp = fopen(str, "ab"); 
   ----------------------------------
 char recvBuff[512]={0};
    if(NULL == fp)
    {
        printf("Error opening file");
        return 1;
    }
if(fp!=NULL)
{
cout<<"file opened";
}
    while((bytesReceived = read(sock, recvBuff, 256)) > 0)
    {
        fwrite(recvBuff, 1,bytesReceived,fp);
cout<<"start writing";

        printf("%s \n", recvBuff);
    }

    if(bytesReceived < 0)
    {
       cout<<"read Error ";
    }
    else 
cout<<"File recieved\n";
    return 0;
} 
void send_to_server()
{
filerecv();
while(sock!=0)
{
    int i=ctos.copy(ctos_buff,ctos.length(),0);
if(i==1)
{    
ctos_buff[i]='\0';
    send(sock,ctos_buff,strlen(ctos_buff),0);
}
}
} 
--------------------------------

}	
int main(int argc,char *argv[]){

    if(argc!=3)
    {
        cout<<"insufficent arguements"<<endl; 
        exit(0);
    } 
    string command;
    cout<<"Enter the command:"<<endl;
    cout<<"1.share"<<endl;
   cout<<"2.get"<<endl;
   cout<<"3.remove"<<endl;
   cout<<"4.server"<<endl;
   getline(cin,command);
   getCommand(command);
   return 0;
string inputfilename, string torfilename;
string pass;
int account_no;
	string cport,cip;
	string sport1,sport2,sip1,sip2;
cout<<"enter account name";	
cout<<"enter password";

cin>>account_no;
cin>>pass;

-------------------------------
	cip=args[1]; 
	cport=args[2];
	sip1=args[3];
sport1=args[4];
sip2=args[5];
sport2=args[6];
 torrcreate(inputfilename, torfilename,  sip1,  sip2);
	cout<<" client peer creation"<<endl;
	
 cout<<"///////start//////////////";

struct sockaddr_in serv_addr;
int sid=0;
string sk_add=sip1+ ":" +sport1;
//stringsplit();

string cmd;

//connection establish
if((sid=socket(AF_INET,SOCK_STREAM,0))<0)
{
cout<<"error in socket creation"<<endl;
return -1;	
}
cout<<"conn establish";
memset(&serv_addr,'0',sizeof(serv_addr));
serv_addr.sin_family= AF_INET;
serv_addr.sin_port=htons(stoi(sport1));
-----------------------------------------------------------
if(connect(sid,(struct sockaddr *)&serv_addr,sizeof(serv_addr))<0)
{
	cout<<"conn failed"<<endl;
	return -1;
}
cout<<"connected";
}
filerecv();
---------------------------------------------------------
}
void sock_creation(const char *ser_ip ,int ser_port,const char* cli_ip, int cli_port)
{

    sock=socket(AF_INET, SOCK_STREAM,0);


    memset(&client_addr, '0', sizeof(client_addr));
    client_addr.sin_family = AF_INET;                               //binding client to port and creating socket with ip
    client_addr.sin_port = htons( cli_port );
    inet_pton(AF_INET, cli_ip, &client_addr.sin_addr);
    bind(sock, (struct sockaddr *)&client_addr,sizeof(client_addr));

    memset(&serv_addr, '0', sizeof(serv_addr));
    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(ser_port);                                   //filling in the server details
    inet_pton(AF_INET, ser_ip, &serv_addr.sin_addr);   

    connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr));           //call to server

}

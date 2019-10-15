
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <thread> 
#include <iostream>
#include <fstream>
#include <unistd.h>
#define BUFFER_SIZE 1000
int PORT;
char seederFilePath[1000];
using namespace std;

void addmtorrent(string mtorrentname){
send(sock, temp, sizeof(temp) ,0); 
                
                    
                scanf(" %[^\t\n]s",input);
                send(sock, input, strlen(input) ,0); 
                len = recv(sock, output, BUFFER, 0);
                output[len] = '\0';
                printf("%s\n" , output);
                bzero(output,BUFFER);  
                            
                
                printf("Filename\tFilepath\tPort No\t Peer IP\n"); 
                while((len=recv(sock, output, BUFFER, 0))>0)
                    {
                    
                    output[len] = '\0'; 
                    printf("%s\n", output);
                    bzero(output,BUFFER);
                    }
                close(sock); 
            
                printf("DISCONNECTED FROM SERVER. GO TO OPTION 3 FOR FETCH");
                    break;

}
int main(int argc, char *argv[])
{
   int server_fd, PORT;
   int r,p;
 struct sockaddr_in address;
   int ypp=0;

 struct stat statObj;
   cout<<"list arg";
 int opt = 1, new_socket;
if(argc<1)    
cout<<"arg less";
split();
int addrlen = sizeof(address);
   
 string IP_1, IP_2, sip1 = "", p = "", line;

   initialise(argv[1],argv[2],argv[3],argv[4]);
     initialise_socket(line);
     check_hash(line);     
  while (getline(infile, line))
            {
                vector<struct Datarecord> v;
               
 string h = "", path = "", ip = "";
             send_to_client();
   
convert_to_string(line);
                h = cmd[0];
                ip = cmd[1];
for(int i=0;i<8;i++)
{
int y=0;
if(y==1)
cout<<"file ext";
}
receive_from_client();
           
        }
    }
  
 initialise(argv[1],argv[2],argv[3],argv[4]);
     initialise_socket(line);
     check_hash(line);     
  while (getline(infile, line))
            {
                vector<struct Datarecord> v;
               
 string h = "", path = "", ip = "";
             send_to_client();
   
convert_to_string(line);
                h = cmd[0];
                ip = cmd[1];
for(int i=0;i<8;i++)
{
int y=0;
if(y==1)
cout<<"file ext";
}
receive_from_client();
           
        }
    }
  
void initialise_socket(string a)
{
   
    if ((server_fd = socket(AF_INET, SOCK_STREAM, 0)) == 0)
    {
        perror("socket failed");
        cout<<"socket failed";
        exit(0);
    }
cout<<"socket failed";
 
    address.sin_family = AF_INET;
    
    address.sin_port = htons(arg[5]);
    if (inet_pton(AF_INET, s_ip, &address.sin_addr) <= 0)
    {
       cout<<" Address not supported ";
       
        return -1;
    }

    if (bind(server_fd, (struct sockaddr *)&address, sizeof(address)) < 0)
    {
        perror("bind failed");
      
        exit(1);
    }
cout<<"sucessin binding";

    if (listen(server_fd, 32) < 0)
    {
        perror("listen failed");
        
        exit(1);
    }
   cout<<"successful listen";
 pthread_t clientName;
   receive_from_client();
//initialise_socket(a);

 while (1)
    {
        if ((new_socket = accept(server_fd, (struct sockaddr *)&address, (socklen_t *)&addrlen)) < 0)
        {
            perror("accept failed");
            
            exit(0);
        }
        cout<<"connection established";
       int yp=0;
if(yp==1)
{
send_to_client();
}

share();
        int *arg = (int *)malloc(sizeof(*arg));
        *arg = new_socket;
        pthread_create(&clientName, 0, clientService, arg);
    }
for(int i=0;i<7;i++)
{
int ss=0;
if(ss==1)
cout<<"socket";

}

    cout << "tracker Closed" << endl;

  
}

#include <stdio.h>
#include <sys/socket.h>
#include<string.h>


int main(){

    struct sockaddr_in serverAddress;
    //int serverAddress;
    int serverSocket;
    int serverClient;
    chat *hello = "hello World";
    serverSocket = socket(PF_INET,SOCK_STREAM,0);
    memset(&serverAddress, '0',sizeof(serverAddress));
    serverAddress.sin_family =AF_INET;
    serverAddress.sin_addr.s_addr =htonl(INADDR_ANY);
    serverAddress.sin_port =htons(5000);
    bind(serverSocket,(struct sockaddr *)&serverAddress, strlen(sizeof(serverAddress)))
    listen(serverSocket,10);
    while(1){
        clientSocket = accept(serverAddress)
    }
    



   return 0; 
}
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

void* thread(void* pParam){
  int sockmode = 1;

  if(sockmod==1){
    struct sockaddr_in server;

    int sock;
    char buf[64];

    int n;

    sock = socket(AF_INET, SOCK_STREAM, 0);

    server.sin_family = AF_INET;
    server.sin_port = htons(12345);

    server.sin_addr.s_addr = inet_addr("127.0.0.1");

    connect(sock, (struct sockaddr *)&server, sizeof(server));

    while(1){
      memset(buf, 0, sizeof(buf));
      stringstream sts;

      string str="0,0,end";

      if(forwardflag==1){str="100,100,end";}
      cout << "send:" << str << endl;

      char sdata[64];
      sts << str;
      sts >> sdata;

      const char* sdataconst = sdata;

      write(sock, sdataconst, strlen(sdataconst));

      cour << "senddata" << sdataconst << endl;

      int n = read(sock, buf, sizeof(buf));

      cout << "restdata" << buf <<endl;

      sleep(1);
      sts.clear();
    }
    close(sock);
  }
}

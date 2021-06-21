from socket import *

SrcIP = "127.0.0.5"
SrcPort = 22222
SrcAddr = (SrcIP, SrcPort)
BUFSIZE = 1024

udpServSock = socket(AF_INET, SOCK_DGRAM)
udpServSock.bind(SrcAddr)

while True:                                     
  data, addr = udpServSock.recvfrom(BUFSIZE) 
  print(data.decode(), addr)

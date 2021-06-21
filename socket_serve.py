from socket import *

SrcIP = "127.0.0.1"
SrcPort = 11111
SrcAddr = (SrcIP,SrcPort)

DstIP = "127.0.0.5"
DstPort = 22222
DstAddr = (DstIP,DstPort)

udpClntSock = socket(AF_INET, SOCK_DGRAM)
udpClntSock.bind(SrcAddr)

data = "send data"
data = data.encode('utf-8')
while True:
    udpClntSock.sendto(data, DstAddr)

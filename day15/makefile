.PHONY:all
all:tcpserver tcpclient
tcpserver:Main.cc
	g++ -o $@ $^  -std=c++11
udpclient:UdpClient.cc
	g++ -o $@ $^  -std=c++11
.PHONY :clean
clean:
	rm -f tcpserver tcpclient

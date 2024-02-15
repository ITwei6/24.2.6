#include "tcpserver.hpp"
#include <iostream>
#include <memory>
#include <cstdio>
int port=8889;
int main()
{
    //定义一个服务器对象
    std::unique_ptr<Tcpserver> tcpsvr(new Tcpserver(port));
    tcpsvr->Init();
    tcpsvr->Run();
}
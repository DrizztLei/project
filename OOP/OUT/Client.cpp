#ifndef CLIENT_CPP
#define CLIENT_CPP

#include "Receiver.cpp"
#include "Command.cpp"
#include "Invoker.cpp"
#include "CommandSet.cpp"

class Client{
public:
    explicit Client(){};
    void Test(){
        Receiver * rece = new Receiver();
        Command * order_ls = new ls(rece);
        Command * order_ps = new ps(rece);
        Command * order_lsblk = new lsblk(rece);
        Invoker * invoker = new Invoker();
        invoker -> setCommand(order_ls);
        invoker -> setCommand(order_ps);
        invoker -> setCommand(order_lsblk);
        invoker -> runCommand();
        delete invoker;
        delete order_ls;
        delete order_ps;
        delete order_lsblk;
        delete rece;

    };
    virtual ~Client(){};
};

int main(int argc , char ** argv){
    Client * client = new Client();
    client -> Test();
    delete client;
    return EXIT_SUCCESS;
}
#endif

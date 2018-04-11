#ifndef COMMANDSET_CPP
#define COMMANDSET_CPP

#include "Command.cpp"

#include <stdio.h>
class ps:public Command
{
public:
    explicit ps(Receiver * rece):Command(rece){
        receiver = rece;
    };
    virtual ~ps(){if(receiver != NULL) delete receiver;}
    void execute(){
        receiver->ps();
    };
private:
};

class ls:public Command
{
public:
    explicit ls(Receiver * rece):Command(rece){};
    virtual ~ls(){
        if(receiver != NULL) delete receiver;
    };
    void execute(){
        receiver->ls();
    };
private:
};

class lsblk:public Command{

public:
    explicit lsblk(Receiver * rece) : Command(rece){};
    virtual ~lsblk(){if(receiver != NULL) delete receiver;};
    void execute(){
        receiver->lsblk();
    };
};

class make:public Command{

public:
    explicit make(Receiver * rece):Command(rece){};
    virtual ~make(){if(receiver != NULL) delete receiver;};
    void execute(){
        receiver->make();
    };
};

#endif

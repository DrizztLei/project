#ifndef RECEIVER_CPP
#define RECEIVER_CPP

//#include "Command.cpp"
//#include "CommandSet.cpp"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <wait.h>

class Receiver{
public:
    explicit Receiver(){};

    void ps(){
        pid_t ps = fork();
        if(ps < 0){
            perror("Error for get the pid failed.\n");
            exit(EXIT_FAILURE);
        }else if(ps > 0){
            waitpid(ps , 0 , 0);
        }else{
            execlp("/bin/ps" , "ps" , NULL);
            exit(EXIT_SUCCESS);
        }
    }

    void ls(){
        pid_t ls = fork();
        if(ls < 0){
            perror("Error for get the pid failed.\n");
            exit(EXIT_FAILURE);
        }else if(ls > 0){
            waitpid(ls , 0 , 0);
        }else{
            execlp("/bin/ls" , "ls" , NULL);
            exit(EXIT_SUCCESS);
        }
    }

    void lsblk(){
        pid_t lsblk = fork();
        if(lsblk < 0){
            perror("Error for get the pid failed.\n");
            exit(EXIT_FAILURE);
        }else if(lsblk > 0){
            waitpid(lsblk , 0 , 0);
        }else{
            execlp("/bin/lsblk" , "lsblk" , NULL);
            exit(EXIT_SUCCESS);
        }
    }

    void make(){
        system("make");
    }
};
#endif

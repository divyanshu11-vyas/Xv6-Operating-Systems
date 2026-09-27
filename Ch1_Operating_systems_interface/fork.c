#include<stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    
    int pid = fork(); //creates a new process by duplicating the currently running process.
    if(pid > 0){

        printf("the child pid id = %d \n", pid);
        pid = wait((int*)0);
        // * 0 means null ptr and means idgaf about child status and retutrn the child pid
        // wait asks the parent to wait for the child to finish
        // When the child terminates, wait() returns the PID of the terminated child.
    }
    else if(pid == 0){
        printf("child exitting..\n");
        exit(0);
        // means that the process has terminated and
        // exit status = 0
    }
    else{

        printf("fork error..\n");
        // No child was created.
    }
return 0;
}


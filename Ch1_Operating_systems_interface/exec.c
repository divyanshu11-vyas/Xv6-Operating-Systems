#include<stdio.h>


int main()
{
    char *argv[3];
    // creating an array of 3 character pointers
    // argv stands for argument vector

    argv[0] = "echo";
    argv[1] = "hello";
    argv[2] = NULL;
    /* the argument ends with nullpointer because exec needs to know 
    argument vector kahan khatam hoga*/

    exec("/bin/echo", argv);
    // /bin/echo/ is the location where the argument is to run
    /*
    this tells the os that 
    Replace my current
    program with the program located at /bin/echo, 
    and give it the arguments stored in argv.
    */ 

    printf("exec error\n");   // only runs if exec fails


    // By convention, argv[0] is the program's own name
return 0;
}
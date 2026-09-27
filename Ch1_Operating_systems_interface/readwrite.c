#include <stdio.h>

int main()
{
    char buf[512];
    int n;
    // It will store how many bytes were actually read.
    for (;;)
    // endless loop
    {
        n = read(0, buf, sizeof buf);
        // read() returns the number of bytes it actually read.

        if (n == 0) // endoffile ( no data to read )
            break;
        if (n < 0)
        {
            fprintf(2, "read error\n"); // it prints "read error" to the file descriptor
            exit(1); // terminates the program
        }


        // now we know that n>0
        // which means we successfully read some data into buf.
        if (write(1, buf, n) != n)
        //checking if it doesnt prints/ writes all n bytes
        {
            fprintf(2, "write error\n");
            exit(1); // terminate program
        }
    }
    return 0;
}

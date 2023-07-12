#include <stdio.h>
#include <unistd.h> 
#include <sys/io.h> 
#include <stdlib.h>
#define PortAddress (0x0378)
int main( int argc, char *argv[] )  {
int number = atoi(argv[1]); 
   if( argc == 2 ) {
        if (ioperm(PortAddress, 1, 1)) 
        {
            printf("ioperm(%x) failed. Are you root?", PortAddress);
            return 1;
        }
        outb(number, PortAddress);
        return 0;
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }
}

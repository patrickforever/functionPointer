#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void print0(void)
{
    printf("0\n");
}
void print1(void)
{
    printf("1\n");
}
void print2(void)
{
    printf("2\n");
}
void (*printFnArray[3])(void) = {print0,print1,print2};
int main()
{
    int i ;
    void (*pFunction)();
    for(i=0;i<3;i++){
        pFunction = printFnArray[i];
        pFunction();
    }
}

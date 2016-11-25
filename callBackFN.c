#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef void (*pFNTest)(int);
void printNumber(int number)
{
    printf("number = %d\n",number);
}
void callBackTest(int number,pFNTest a_pvFnTest)
{
    a_pvFnTest(number);
}
int main()
{
    int i = 100;
    callBackTest(i,printNumber);
    return 0;
}

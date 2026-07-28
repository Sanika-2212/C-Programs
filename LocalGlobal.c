#include <stdio.h>

int no = 11;    // Global Variable (Data)

void fun()
{
    int i= 51;   //Local Variable (Stack)
    printf("Inside fun : %d\n",i);
    printf("Inside fun : %d\n",no);
}

int main()
{
    int i= 21;   //Local Variable (Stack)
    printf("Inside main : %d\n",i);
    printf("Inside main : %d\n",no);

    fun();
    return 0;
}
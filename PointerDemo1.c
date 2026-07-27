#include<stdio.h>

int main()
{
    int no = 11;
    int *p = &no;

    printf("%d\n",no);         //11
    printf("%d\n",&no);        //100
    printf("%d\n",p);         //100
    printf("%d\n",*p);        //11
    printf("%d\n",sixeof(no)); //4
    printf("%d\n",sixeof(p));  //8
    printf("%d\n",sixeof(*p));  //4

    return 0;
}
#include <stdio.h>

extern int a;

int main()
{   int c =4,b=3;
    printf("Execution date and time %s  %s \n",__DATE__,__TIME__);
     printf("Execution date and time %s  %s \n","aaaa","bvvv");
    printf("%d \n",a);
    printf("%d\n",c++ + ++b);
    return 0;
}

/*
Output :
Execution date and time Mar 22 2026  23:55:46 
5 

Extern_Date_time_macros_test.c:10:23: error: lvalue required as increment operand
     printf("%d\n",c++ +++b);
                       ^~

*/
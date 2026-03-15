#include <stdio.h>

int main()
{
    float var1= 3.1415926535897932;
    double var2=3.1415926535897932;
    long double var3 = 3.141592653589793213456;
    printf("%d \n",sizeof(long double));
    printf("%0.16f \n",var1);
    printf("%0.16f \n",var2);
    printf("%0.21Lf \n",var3);
    printf("%llf \n", var3);
    __mingw_printf("%0.21Lf \n", var3);
    return 0;

}

/*
output :
12   --Correct 
3.1415927410125732  // after 92 number are changed --upto 6 point it will be correct for float
3.1415926535897931   // after 793 - number are changes - for double its upto 16 points
-88796093704928900000000000000000000000000000.000000000000000000000  // here long double is not pronted by compiler its garbage value
-88796093704928900000000000000000000000000000.000000  // after using llf its garbage value
3.141592653589793115998  // after using mingw it workd fine--after 19 point - numbers got modifieed

*/
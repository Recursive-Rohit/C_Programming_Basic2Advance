#include <stdio.h>
#include <limits.h>

 int main()
{  
    char test_var='N';
    printf("%c \n",test_var);
  printf("*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* \n");
    char var= 120;
    char var1 = -2;
    printf("%c %c \n", var, var1);
    return 0;
}


//OUTPUT
/*
1. TRADITIONAL ASCII : REQUIRES 7 BITS , HERE 8TH BIT IS ALWAYS 0
2. EXTENDED ASCII : USES 8 BITS

DataTypes_test.c:6:19: warning: initialization makes integer from pointer without a cast [-Wint-conversion]
     char test_var="N";

  The compiler can’t treat "N" as a char because, in C, double quotes signify a String Literal, which is more complex than a single character.
Here is the breakdown of why they are different types:
Memory Layout:
'N' is just the number 78 (its ASCII value). It fits in 1 byte.
"N" is actually two bytes in memory: the letter 'N' followed by a hidden null terminator '\0' to tell C where the string ends.
The Pointer Problem:
When you use "N", the compiler stores those two bytes somewhere in memory and then replaces "N" in your code with the memory address (a pointer) of where it’s stored.
The Conflict:
Your variable char test_var is a tiny 1-byte bucket. You are trying to pour a 64-bit memory address (the pointer) into that 1-byte bucket. The compiler sees you trying to turn a "location in memory" into a "simple number" and flags it as an integer-from-pointer conversion error.
In short, C is very literal: Single quotes for Single characters; Double quotes for Data arrays (strings   

After adding VAR 1 and VAR
output
N 
*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-* 
x �

IMP: EACH NEGATIVE NUMBER IN char IS EQUIVALENT TO SOME POSITIVE NUMVER IN ASCII

*/
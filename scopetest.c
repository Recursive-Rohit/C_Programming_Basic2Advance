#include <stdio.h>
int addofvar(int n)
{   int a;
    if (n==0)
    {
        return 1;
    }
    
    
    printf("the address is %p \n",&a);
    return addofvar(n-1);
    
   
}
int main()
{
int p = addofvar(4);
return 0;
}


/*
Even though a is destroyed when the function exits, you see the same address because of how the Function Stack works.
When addofvar() is called, a "stack frame" is created to hold its local variables. When the function returns, that frame is popped off the stack, and the memory is marked as available.
However, since you are calling the exact same function immediately after it finishes:
The CPU reuses the same stack space it just vacated.
The variable a happens to land in the same offset within that space.
The operating system doesn't bother clearing or reallocating that memory to another process because your program still "owns" that thread's stack.
It’s essentially like a hotel guest checking out and a new guest checking into the same room because it’s the first one available.
Would you like to see how the address changes if you use recursion or nested function calls instead?

After using recursion the output is:
the address is 0061FEEC 
the address is 0061FEBC 
the address is 0061FE8C 
the address is 0061FE5C 
*/
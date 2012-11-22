#include <stdio.h>

// make: gcc -std=c99 gen_bit.h_.c

int main()
{   
    for (int i = 0; i < 256; i++)
    {
        printf("#define b");
        
        for (int b = 7; b >= 0; b--)
        {
            if ( i & (1 << b) )
                printf("1");
            else
                printf("0");
        }
        
        printf(" %i\n",i);
    }
    
    return 0;
}


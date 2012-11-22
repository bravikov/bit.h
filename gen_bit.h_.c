#include <stdio.h>

//        сборка: gcc -std=c99 gen_bit.h_.c
// использование: ./a.out > bit.h

int main()
{   
    printf("#ifndef BIT_H\n");
    printf("#define BIT_H\n\n");
    
    // Без разделения тетрад
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
    
    printf("\n");
    
    // С разделением тетрад
    for (int i = 0; i < 256; i++)
    {
        printf("#define b");
        
        for (int b = 7; b >= 0; b--)
        {
            if ( i & (1 << b) )
                printf("1");
            else
                printf("0");
            
            if (b == 4) printf("_");
        }
        
        printf(" %i\n",i);
    }
    
    printf("\n#endif\n\n");
    
    return 0;
}


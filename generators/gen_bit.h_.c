/* Project site: https://github.com/bravikov/bit.h
 *
 * use: gcc -Wall -std=c99 -o gen gen_bit.h_.c && ./gen > ../bit.h
 */

#include <stdio.h>

void gen(const char * suffix, const int shift);

int main()
{   
    printf( "/* Project site: https://github.com/bravikov/bit.h */\n\n"
            "#ifndef BIT_H_79EC2540_A696_4151_BAAC_6407B520A95C\n"
            "#define BIT_H_79EC2540_A696_4151_BAAC_6407B520A95C\n\n");
    
    gen(""  , 0*8);
    gen("_1", 1*8);
    gen("_2", 2*8);
    gen("_3", 3*8);
    
    printf("#endif /* #ifndef BIT_H_79EC2540_A696_4151_BAAC_6407B520A95C */\n");
    
    return 0;
}

void gen(const char * suffix, const int shift)
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
            
            if (b == 4) printf("_");
        }
        
        printf("%s", suffix);
        
        printf(" %u\n", i << shift);
    }
    printf("\n");
}


/* Project site: https://github.com/bravikov/bit.h
 *
 * use: gcc -Wall -std=c99 -o test test_bit.h_.c && ./test
 */

#include <stdio.h>
#include <stdint.h>
#include "bit.h"

int main()
{
    uint32_t test1 = 0xFFFFFFFF;
    uint32_t test2 = b1111_1111_3 | b1111_1111_2 | b1111_1111_1 | b1111_1111;
    
    printf("Test bit.h ... ");
    if (test1 == test2)
        printf("OK\n");
    else
        printf("fail (%u)\n", test2);
        
    return 0;
}


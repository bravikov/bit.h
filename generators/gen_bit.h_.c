/****************************************************************************
**
** MIT License
**
** Copyright (c) 2018 Dmitry Bravikov
**
** Permission is hereby granted, free of charge, to any person obtaining a
** copy of this software and associated documentation files (the "Software"),
** to deal in the Software without restriction, including without limitation
** the rights to use, copy, modify, merge, publish, distribute, sublicense,
** and/or sell copies of the Software, and to permit persons to whom the
** Software is furnished to do so, subject to the following conditions:
**
** The above copyright notice and this permission notice shall be included
** in all copies or substantial portions of the Software.
**
** THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS
** OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
** FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
** THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
** LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
** FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
** DEALINGS IN THE SOFTWARE.
**
****************************************************************************/

/* Project URL: https://github.com/bravikov/bit.h */

#include "license_generator.h"
#include <stdio.h>

void gen(const char * suffix, const int shift);

int main()
{
    printf("%s\n\n", getLicenceForCFile());

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

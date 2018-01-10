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

int main()
{
    const char * includeGuard =
        "BINARY_CHARACTER_H_46F7E9A6_646E_43F6_AB28_CC00F5081750";

    printf("%s\n\n", getLicenceForCFile());

    printf(
        "/* Project site: https://github.com/bravikov/bit.h */\n\n"
        "#ifndef %s\n"
        "#define %s\n\n",
        includeGuard,
        includeGuard
    );

    char stringNumber[10];
    stringNumber[4] = '_';
    stringNumber[9] = '\0';

    for (int i = 0; i < 256; i++) {
        char * p = stringNumber;

        for (int mask = 0x80; mask != 0; mask >>= 1) {
            if (*p == '_') {
                p++;
            }

            if (i & mask) {
                *p++ = '1';
            }
            else {
                *p++ = '0';
            }
        }

        printf("#define bc%s \"\\x%X\"\n", stringNumber, i);
    }

    printf(
        "\n"
        "#endif /* #ifndef %s */\n",
        includeGuard
    );

    return 0;
}

/* Project site: https://github.com/bravikov/bit.h
 *
 * use: gcc -Wall -std=c99 -o binary_characters gen_binary_characters.c && ./binary_characters > ../binary_character.h
 */

#include <stdio.h>

int main()
{
    const char * includeGuard =
        "BINARY_CHARACTER_H_46F7E9A6_646E_43F6_AB28_CC00F5081750";

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

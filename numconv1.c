#include <stdio.h>
#include "numconv1.h"

int dec_to_int(char str[]) {
    int result = 0;
    int i = 0;

    int is_negative = 0;
    if (str[0] == '-') {
        is_negative = 1;
        i = 1;
    }

    for (; str[i] != '\0'; i++) {
        result = result * 10 + str[i] - '0';
    }

    return is_negative ? -result : result;
}

int bin_to_int(char str[]) {
    int result = 0;
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '0' || str[i] == '1') {
            result = result * 2 + str[i] - '0';
        } else {
            printf("Invalid binary number!\n");
            return -1;
        }
    }

    return result;
}

int hex_to_int(char str[]) {
    int result = 0;
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            result = result * 16 + str[i] - '0';
        } else if (str[i] >= 'A' && str[i] <= 'F') {
            result = result * 16 + str[i] - 'A' + 10;
        } else if (str[i] >= 'a' && str[i] <= 'f') {
            result = result * 16 + str[i] - 'a' + 10;
        } else {
            printf("Invalid hexadecimal number!\n");
            return -1;
        }
    }

    return result;
}

int oct_to_int(char str[]) {
    int result = 0;
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '7') {
            result = result * 8 + str[i] - '0';
        } else {
            printf("Invalid octal number!\n");
            return -1;
        }
    }

    return result;
}

void int_to_dec(int num, char str[]) {
    sprintf(str, "%d", num);  // Brug sprintf til at konvertere integer til streng
}

void int_to_bin(int num, char str[]) {
    int i = 0;
    int mask = 1 << (sizeof(int) * 8 - 1);  // Start med den højeste bit

    while (mask > 0) {
        str[i++] = (num & mask) ? '1' : '0';
        mask >>= 1;
    }

    str[i] = '\0';  // Afslut strengen
}

void int_to_hex(int num, char str[]) {
    sprintf(str, "%X", num);  // Brug sprintf til at formatere tallet som hexadecimal
}

void int_to_oct(int num, char str[]) {
    sprintf(str, "%o", num);  // Brug sprintf til at formatere tallet som octal
}

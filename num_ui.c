#include <stdio.h>
#include "numconv1.h"

void vis_menu() {
    printf("Vælg talsystem:\n");
    printf("1. Decimal\n");
    printf("2. Binær\n");
    printf("3. Hexadecimal\n");
    printf("4. Octal\n");
    printf("Indtast dit valg: ");
}

int main() {
    int valg;
    char input[20];
    int int_result;
    char output[20];

    vis_menu();
    scanf("%d", &valg);

    printf("Indtast et tal: ");
    scanf("%s", input);

    switch(valg) {
        case 1:
            int_result = dec_to_int(input);
            printf("Decimal: %d\n", int_result);
            int_to_bin(int_result, output);
            printf("Binær: %s\n", output);
            int_to_hex(int_result, output);
            printf("Hexadecimal: %s\n", output);
            int_to_oct(int_result, output);
            printf("Octal: %s\n", output);
            break;

        case 2:
            int_result = bin_to_int(input);
            printf("Binær som integer: %d\n", int_result);
            int_to_dec(int_result, output);
            printf("Decimal: %s\n", output);
            int_to_hex(int_result, output);
            printf("Hexadecimal: %s\n", output);
            int_to_oct(int_result, output);
            printf("Octal: %s\n", output);
            break;

        case 3:
            int_result = hex_to_int(input);
            printf("Hexadecimal som integer: %d\n", int_result);
            int_to_dec(int_result, output);
            printf("Decimal: %s\n", output);
            int_to_bin(int_result, output);
            printf("Binær: %s\n", output);
            int_to_oct(int_result, output);
            printf("Octal: %s\n", output);
            break;

        case 4:
            int_result = oct_to_int(input);
            printf("Octal som integer: %d\n", int_result);
            int_to_dec(int_result, output);
            printf("Decimal: %s\n", output);
            int_to_bin(int_result, output);
            printf("Binær: %s\n", output);
            int_to_hex(int_result, output);
            printf("Hexadecimal: %s\n", output);
            break;

        default:
            printf("Ugyldigt valg.\n");
            break;
    }

    return 0;
}

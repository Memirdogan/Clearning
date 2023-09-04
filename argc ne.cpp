#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
    printf("Program adi: %s\n", argv[0]); // Programin adini yazdirma

    if (argc > 1) {
        printf("Verilen parametreler:\n");
        for (int i = 1; i < argc; i++) {
            printf("Parametre %d: %s\n", i, argv[i]);
        }
    } else {
        printf("Parametre verilmedi.\n");
    }

    return 0;
}

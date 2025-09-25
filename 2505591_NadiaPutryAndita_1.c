#include <stdio.h>

int main() {
    int bilangan;

    printf("Masukkan bilangan: ");
    scanf("%d", &bilangan);

    if (bilangan > 0) {
        printf("bilangan positif");
    } else if (bilangan < 0) {
        printf("bilangan negatif\n");
    } else {
        printf("bilangan nol\n");
    }

    return 0;
}

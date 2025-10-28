#include <stdio.h>

int main() {
    int year;
    printf("Name- Pragyan Verma\nSAP ID - 590028276\nCourse- BCA\nBatch- B5");
    printf("\n-----------------\n");
    double population = 100000;
    printf("Year\tPopulation\n");
    for (year = 1; year <= 10; year++) {
        population *= 1.10;
        printf("%d\t%.0f\n", year, population);
    }
    return 0;
}

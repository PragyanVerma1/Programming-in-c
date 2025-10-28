#include <stdio.h>

int main() {
    int a, b, c, d, num;
    int L = 20;
    int found;
    printf("Name- Pragyan Verma\nSAP ID - 590028276\nCourse- BCA\nBatch- B5");
    printf("\n-----------------\n");

    for (num = 1; num <= L * L * L; num++) {
        found = 0;
        for(a = 1; a <= L; a++) {
            for(b = a + 1; b <= L; b++) {
                for(c = a; c <= L; c++) {
                    for(d = c + 1; d <= L; d++) {
                        if ((a*a*a + b*b*b == c*c*c + d*d*d) && (a != c && a != d && b != c && b != d)) {
                            if (!found) {
                                printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", a*a*a + b*b*b, a, b, c, d);
                                found = 1;
                            }
                        }
                    }
                }
            }
        }
    }
    return 0;
}

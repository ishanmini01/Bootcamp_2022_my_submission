#include <stdio.h>
typedef struct complex {
    int real;
    int imag;
} complex;

complex add(complex n1, complex n2);

int main() {
    complex n1, n2, result;

    printf("Enter first complex number: ");
    scanf("%d %d", &n1.real, &n1.imag);
    printf("Enter second complex number: ");
    scanf("%d %d", &n2.real, &n2.imag);

    result = add(n1, n2);

    printf("Result: %d  %d\n", result.real, result.imag);
    return 0;
}

complex add(complex n1, complex n2) {
    complex temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return (temp);
}

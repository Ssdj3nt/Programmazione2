#include <stdio.h>

// Funzione che implementa l'algoritmo di Horner
float horner(float coefficients[], int n, float x) {
    float result = coefficients[0];
    for (int i = 1; i < n; i++) {
        result = result * x + coefficients[i];
    }
    return result;
}

int main() {
    float coefficients[] = {2.0, 3.0, 4.0, 5.0};
    int n = sizeof(coefficients) / sizeof(coefficients[0]);
    float x = 2.0;
    float result = horner(coefficients, n, x);
    printf("Il valore del polinomio al punto %f è %f", x, result);
    return 0;
}

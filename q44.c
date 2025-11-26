#include <stdio.h>

int main() {
    int n, i;
    double sum = 0.0;
    int numerator, denominator;

    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        numerator = 2*i - 1;      
        denominator = 2*i;        
        sum = sum + (double)numerator / denominator;
    }

    printf("Approximate sum: %.1lf", sum);

    return 0;
}

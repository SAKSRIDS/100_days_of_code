#include <stdio.h>
#include <math.h>

int main() {
    int n, num, count = 0;
    int first, last, middle;

    scanf("%d", &n);

    num = n;
    
    while(num > 0) {
        count++;
        num = num / 10;
    }

    if(count == 1) { 
        printf("%d", n);
        return 0;
    }

    last = n % 10;
    first = n / pow(10, count - 1);
    middle = n % (int)pow(10, count - 1) / 10; 

    int swapped = last * pow(10, count - 1) + middle * 10 + first;

    printf("%d", swapped);

    return 0;
}

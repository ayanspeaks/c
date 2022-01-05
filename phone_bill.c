#include <stdio.h>

int main() {
    int n;
    float b;
    printf("Enter the number of calls: ");
    scanf("%d", &n);
    if(n <= 100) b = 0;
    else if(n >= 101 && n <= 300) b = n * 1;
    else if(n >= 301 && n <= 500) b = n * 1.2;
    else b = n * 1.5;
    b += 250;
    printf("Your bill is : %.2f", b);
    return 0;
}

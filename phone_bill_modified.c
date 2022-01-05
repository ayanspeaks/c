#include<stdio.h>

// Prototype Declaration

float get_bill(int);
float calculate_amount(int, float);

int main() {
	int n;
	printf("Enter the number of calls: ");
	scanf("%d", &n);
	printf("%.2f", get_bill(n));
	return 0;
}

float calculate_amount(int n, float m) {
	return n * m;
}

float get_bill(int n) {
	float res = 250;
	
	if(n > 100) {
		if(n < 301) {
			res += calculate_amount(n - 100, 1);
		} else if(n < 501) {
			res += calculate_amount(200, 1) + calculate_amount(n - 300, 1.2);
		} else {
			res += calculate_amount(200, 1) + calculate_amount(200, 1.2) + calculate_amount(n - 500, 1.5);
		}
	}
	
	return res;
}

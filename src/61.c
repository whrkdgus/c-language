#include <stdio.h>
int main() {
	int a = 3, b = 2;
	printf("%d %d\n", ++a, b--);
	a += 1; b -=1;
	printf("%d %d\n", a, b);
	
	return 0;
}
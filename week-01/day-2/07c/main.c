#include <stdio.h>

int main() {
	int g1 = 123;
	int g2 = 345;
	// tell if g1 is bigger than g2
	if (g1 > g2) {
        printf("%d is bigger than %d", g1, g2);
	}
	else {printf("%d is smaller than %d", g1, g2);}
	return 0;
}

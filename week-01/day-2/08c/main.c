#include <stdio.h>

int main() {
	int h1 = 350;
	int h2 = 200;
	int h3 = 200*2;
	// tell if the double of h2 is bigger than h1
	if (h1 < h3) {
        printf("Double %d is bigger than %d", h2, h1);
	}
	else {printf("Double %d is smaller than %d", h2, h1);}
	return 0;
}

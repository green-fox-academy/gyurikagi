#include <stdio.h>

int main() {
	float w = 24;
	int out = 0;
	// if w is even increment out by one
	if (24%2==0) {
        out = out + 1;
        printf("W is even, and incremented out = %d\n", out);
	}
	return 0;
}

#include <stdio.h>
#include <stdint.h>

int main() {
	int a = 654;
	uint64_t b = 654987312;
	// Tell if the reminder of b devided by a is 3
    int c = b%a;
    if (c == 3) {
        printf("remainder is 3");
    }
    else {
        printf("remainder is %d", c);
    }
    return 0;
}

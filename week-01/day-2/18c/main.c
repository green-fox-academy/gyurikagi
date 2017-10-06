#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t number = 254;
	printf("%d is ok", number);

	// if number can't be represented with 8bits
	// print 'longer than 8bits' otherwise print 'ok'
	return 0;
}

#include <stdio.h>
#include <stdint.h>

int main() {
	uint8_t ab = 123;
	uint8_t credits = 100;
	uint8_t is_bonus = 0;	// This means "false"
	if (is_bonus==1) {
        printf("ab should remain the same");
	} else if ((credits < 50) && is_bonus == 0){
	    ab = ab - 2;
        printf("the new value of ab is %d", ab);
	} else {
	    ab = ab + 2;
        printf("the new value of ab is %d", ab);
        }
	// if credits are at least 50,
	// and is_bonus is false decrement ab by 2
	// if credits are smaller than 50,
	// and is_bonus is false decrement ab by 1
	// if is_bonus is true ab should remain the same
	return 0;
}

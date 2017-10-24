#include <stdio.h>

void safe_union(int *a, int l_a, int *b, int l_b, int *result, int l_res) {
    //TODO:
    // Implement this function to create the union of a and b into the array result!

    for (int i =0; i < l_a; i++) {
            result[i] = a[i];}
    for (int j = 0; j < l_b; j++) {
        result[(l_res - l_a + j)] = b[j];
    }
    return *result;
    }


int main(int argc, char** argv) {
    int a[3] = {1,2,3};
    int b[3] = {4,5,6};
    int c[6];
    safe_union(a,3,b,3,c,6);
    int length_of_a = sizeof(a)/ sizeof (a[0]);
    int length_of_b = sizeof(b)/ sizeof (int);
    int length_of_c = sizeof(c)/ sizeof (int);

    printf("length: %d, %d, %d\n", length_of_a, length_of_b, length_of_c);
  //  safe_union(int *a, int length_of_a, int *b, int length_of_b, int *c, int length_of_c);
    for (int i = 0; i<6; i++) {
        printf("%d\n", c[i]);
    }
    return 0;
}

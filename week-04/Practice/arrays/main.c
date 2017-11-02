#include <stdio.h>
#include <stdlib.h>

int print_array(int arr[]){
     for (int i = 0; i <26; i++){
        arr[i] = 97+i;
    }
      for (int i = 0; i <26; i++){
        arr[26 + i] = 65+i;
    } return arr;
}

int point_array(int *arr){
     for (int i = 0; i <26; i++){
        arr[i] = 97+i;
    }
      for (int i = 0; i <26; i++){
        arr[26 + i] = 65+i;
    } return arr;
}
//fill abc string from a to z, print out
//fill and print out abc from a to z, and A to Z in a function
//fill and print out abc from a to z, and A to Z in a function with pointers
int main()
{   int array[26];
    int array2[52];
    int array3[52];

    for (int i = 0; i <26; i++){
        array[i] = 97+i;
        printf("%c, ", array[i] );
    }
    printf("\n");
    print_array(array2);
    for (int i = 0; i <52; i++){
        printf("%c, ", array2[i] );
    }
    printf("\n");
    point_array(array3);
    for (int i = 0; i <52; i++){
        printf("%c, ", array2[i] );
    }

    return 0;
}

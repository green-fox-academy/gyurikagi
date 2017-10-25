#include <stdio.h>

typedef struct  {
    double a;
    double b;
    double c;
} rectangular_cuboid;

double getsurface (rectangular_cuboid a){
    double result = 2*(a.a * a.b + a.a * a.c + a.b * a.c);
    return result;

}

double getvolume (rectangular_cuboid b){
    double result = b.a * b.b * b.c;
    return result;
}
// TODO:
// Write a function called "GetSurface" that takes a RectangularCuboid
// and returns it's surface

// TODO:
// Write a function called "GetVolume" that takes a RectangularCuboid
// and returns it's volume

int main()
{   rectangular_cuboid cub = {3, 4, 5};

    printf("The surface is: %.2f \n", getsurface(cub));
    printf("The volume is: %.2f \n", getvolume(cub));

    return 0;
}

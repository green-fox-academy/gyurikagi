#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} point_t;

// TODO:
// Create a function the constructs a point
// It should take it's x and y coordinate as parameter

point_t get_a_point (){
    point_t a;
    printf("Give the value of x :\n");
    scanf("%d", &(a.x));
    printf("Give the value of y :\n");
    scanf("%d", &(a.y));
    return a;
}

// TODO:
// Create a function that takes 2 Points as a pointer and returns the distance between them

double distance_of_points (point_t c, point_t d){
    double e = pow ((c.x - d.x), 2);
    double f = pow ((c.y - d.y), 2);
    double result = sqrt(e + f);
    return result;
}

int main()
{
    point_t point1, point2;
    point1 = get_a_point ();
    point2 = get_a_point ();
    printf("The distance is %.2f \n", distance_of_points(point1, point2));

    return 0;
}

#include <stdio.h>
#include <math.h>

/* Tiegan Cozzie
 * CSCI 112, Week 2, Classwork
 * August 31, 2022
 */

#define PI 3.14159265

double computeArea(double r){
    double a =PI * pow(r,2);
    return a;
}


int main(void){
    double radius;

    printf("Enter radius of circle: ");
    scanf("%lf", &radius);
    
    double area=computeArea(radius);

    printf("The area of a circle with radius: %.2lf is %.2lf\n",
        radius,area);

    return(0);
}


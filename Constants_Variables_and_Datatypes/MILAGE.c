#include <stdio.h>
int main() 
{
    double distance, fuel;    
    printf("Enter the distance traveled (in miles): ");
    scanf("%lf", &distance);
    printf("Enter the amount of fuel consumed (in gallons): ");
    scanf("%lf", &fuel);
    double mileage = distance / fuel;
    printf("The mileage of the car is %.2lf miles per gallon\n", mileage);
    return 0;
}
#include <stdio.h>
int main()
{
    double dist_in_km;
    printf("Enter the distance between two cities in km :");
    scanf("%Lf",&dist_in_km);
    printf("The distance between the two cities is %Lf km %Lf m %Lf feet %Lf inches",dist_in_km,dist_in_km*1000, dist_in_km*32808.4,dist_in_km*39370.1);
}
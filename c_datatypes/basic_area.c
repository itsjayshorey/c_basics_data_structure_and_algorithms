#include <stdio.h>
int main()
{
    int length;
    int breadth;
    int radius;
    printf("Enter The length of the rectangle");
    scanf("%d",&length);
    printf("Enter the breadth of the rectangle");
    scanf("%d", &breadth);
    printf("Enter the radius of circle");
    scanf("%d",&radius);
    printf("The area of the rectangle is %d\n",length*breadth);
    printf("The perimeter of the rectangle is %d\n",2*(length+breadth));
    printf("The perimeter of the circle is %Lf\n",2*3.14*radius);
    printf("The area of the circle is %Lf\n",3.14*radius*radius);
}
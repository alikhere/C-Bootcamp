#include<stdio.h>
float area(float);
int main()
{
    float x;
    printf("Enter radius of circle: ");
    scanf("%f",&x);
    printf("Area of circle is %f\n",area(x));
    return 0;

}
float area(float r)
{
    float area=3.14*r*r;
    return area;
}
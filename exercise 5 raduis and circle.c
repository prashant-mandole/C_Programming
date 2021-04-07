#include<stdio.h>

int main()
{
    float r,area,diameter,circumference,PI=3.14;
    printf("Enter the radius of a circle = ");
    scanf("%f",&r);
    //area 
    area=PI*r*r;
    printf("the area of a circle =%f\n",area);
    
    //circumference
    circumference=2*PI*r;
    printf("circumference of a circle =%f\n",circumference);
    
    //diameter 
    diameter=2*r;
    printf("diameter of a circle =%f\n",diameter);
    
    
  return 0;  
}
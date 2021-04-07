// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int x,y,z,sum=0,avarage,product;
    printf("enter the three number");
    scanf("%d%d%d",&x,&y,&z);
    printf("You entered number is x=%d y=%d z=%d\n\n",x,y,z);
    //sum
    sum =x+y+z;
    printf("the sum of three number is %d\n\n",sum); 
    //Avrage
    avarage=(x+y+z)/2;
    printf("Average =%d\n\n",avarage);
    //product 
    product=x*y*z;
    printf("product=%d\n",product);
    //samllest 
  
   
   if (x<=y && x<=z);
    printf("smallest %d\n",x);

   if (y<=x && y<=z);
    printf("smallest %d\n",y);
    
     if (z<=y && z<=x);
    printf("smallest %d\n",z);
  
    // largest 
    if(x>=y && x>=z);
    printf("largest %d",x);
    return 0;
}
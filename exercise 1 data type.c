#include<stdio.h>
#include<stdbool.h>
 int main()
{      //integer data type
    short s=25; //size is 2 byte
    int i=500; // size is 4 byte
    long l=1000; // size 8 byte
    
    //float data type
    float f=50; //size is 4 byte 
    double d=100; // size is 8 byte
    
    // character data type 
    char c='p'; // size is 1 byte
    
    // string data type 
    char str[8]="prashant";
    
    //boolen data type 
    bool b=false;
   
   // print value to output 
    printf("s=%d\n",s);
    printf("i=%d\n",i);
    printf("l=%ld\n",l);
    printf("f=%f\n",f);
    printf("d=%f\n",d);
    printf("c=%c\n",c);
    printf("str=%s\n",str);
    printf("b=%d\n",b);
    
    return 0 ; 
}
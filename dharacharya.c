#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a,b,c,root1 , root2,root_part,denom;
    scanf("%f%f%f",&a,&b,&c);
    root_part = sqrt((b * b) - (4*a*c));
    denom = 2*a;
    root1=(-b + root_part)/denom;
    root2=(-b - root_part)/denom;
    if(root_part==0){
        printf("REAL AND UNIQUE");
    }
    else if(root_part<0){
        printf("IMAGINARY");
    }
        else if(root_part<0){
        printf("REAL AND DISTINCT");
    }
    printf("\n %f %f",root1 ,root2);
    return 0;
}
#include <stdio.h>

float avg(int,int,int);

float avg(int x, int y, int z){
    return (x+y+z)/3.0;
}

int main(){
    int x,y,z;
    float a;
    a = avg(2,5,4);
    printf("The average value is %f", a);
    return 0;
}
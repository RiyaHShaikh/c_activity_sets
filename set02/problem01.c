//1.  Write a program to find the area of a triangle.
#include<stdio.h>
void input(float *base, float *height){
    printf("pls enter a value: ");
    scanf("%f",base);
    printf("pls enter a value: ");
    scanf("%f",height);
}

void find_area(float base , float height, float *area){
    *area= 0.5*base*height;
}

void output(float area){
    printf("%f",area);
}

int main(){
    float base,height,area;
    input(&base,&height);
    find_area(base,height,&area);
    output(area);
}


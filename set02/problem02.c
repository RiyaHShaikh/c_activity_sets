// Write a program to find if a triangle is scalene.

// > A triangle is scalene if all the three sides of the triangle are not equal to one another

// ***Function Declarations***
// ```c

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
    int a, b, c;
    a = input_side();
    b = input_side();
    c = input_side();
    int isscalene = check_scalene(a, b, c);
    output(a, b, c, isscalene);
    return 0;
}

int input_side() {
    int side;
    printf("Enter the length of a side of the triangle: ");
    scanf("%d", &side);
    return side;
}

int check_scalene(int a, int b, int c) {
    if (a != b && b != c && a != c) {
        return 1;
    } else {
        return 0; 
    }
}

void output(int a, int b, int c, int isscalene) {
    printf("Triangle with sides %d, %d, %d: ", a, b, c);
    if (isscalene) {
        printf("It is a scalene triangle.\n");
    } else {
        printf("It is not a scalene triangle.\n");
    }
}


#include<stdio.h>  
void swap(int*, int*);  
int main()  
{
    int num1, num2;  
    printf("Enter values for num1 and num2\n");  
    scanf("%d%d", &num1, &num2);  
    printf("\n\nBefore swapping: num1 = %d and num2= %d\n", num1, num2);  
    swap(&num1, &num2);  
    printf("\nAfter swapping: num1 = %d and num2= %d\n", num1, num2);  
    return 0;  
}  
void swap(int *x, int *y)  
{  
    int temp;  
    temp = *x;  
    *x   = *y;  
    *y   = temp;  
}  

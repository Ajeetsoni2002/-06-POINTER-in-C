#include<stdio.h>

void square(int n);

int main()
{

int number =4;
square(number);// there print 16 
printf("number = %d\n",number);// but there not print 16 
// there is not possible to change the value is main function by argument function

// this is only possible by call by reference



        return 0;
}

// call by value
void square(int n){
        n= n*n;
        printf("square = %d\n",n);
}
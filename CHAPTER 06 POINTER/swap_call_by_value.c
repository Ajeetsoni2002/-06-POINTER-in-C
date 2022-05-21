#include<stdio.h> 

void swap(int a, int b);

int main()
{
        int x=3, y=6;
        swap(x,y);
        printf("the value of x is %d\n and the value of y is %d\n",x,y);
        // this function not change the value of x and y 


        return 0;

}
void swap(int a, int b){

        int t=a;

        a=b;
b=t;
printf("the value of a is %d\n and the value of b is %d\n",a,b);
}
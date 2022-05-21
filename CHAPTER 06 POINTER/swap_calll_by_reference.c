#include<stdio.h>
void _swap(int *a, int *b);


int main ()
{
        int x=3,y=6;
_swap(&x,&y);

printf("the value of x is %d\n and the value of y is %d\n",x,y);




        return 0;

}
void _swap(int *a,int *b){

        int t=*a;

        *a= *b;
*b =t;
printf("the value of a is %d\n and the value of b is %d\n ",*a,*b);

        

}
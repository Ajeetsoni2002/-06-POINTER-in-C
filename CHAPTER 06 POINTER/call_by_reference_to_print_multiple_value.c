#include<stdio.h>
void _work(int a, int b, int *sum,int *prod, int *avg );

int main()
{
        int x=3, y=3;
        int sum, prod,avg;

        _work(x,y,&sum,&prod,&avg);

        printf("sum=%d\n , prod=%d\n , avg=%d\n",sum,prod,avg);



        return 0;

}
void _work(int a, int b,int *sum, int *prod, int *avg){

*sum =a+b;
*prod =a*b; 
*avg = (a+b)/3;
}
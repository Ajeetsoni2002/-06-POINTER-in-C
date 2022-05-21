#include<stdio.h>
void _great(int *a, int *b);

int main()
{
        int a,b;
        printf("enter the value of a\n");
        scanf("%d",&a);
        printf("enter the value of b\n");
        scanf("%d",&b);

         _great( &a , &b);




        return 0;
}
void _great(int *a, int *b){

        if(*a> *b){
                printf("a is greater than b");
        }
        else if(*b>*a){
                printf("b is greater than a");
        }else{
                printf("both are equal");
        }
}
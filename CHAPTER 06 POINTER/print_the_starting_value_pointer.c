#include<stdio.h>
int main()
{
int i=5;
int *ptr=&i;
int **pptr=&ptr;
int ***ppptr= &pptr;


// print address 

printf("the address of i is %u\n",&i);
printf("the address of i is %u\n",ptr);

printf("address of ptr is %u\n",&ptr);
printf("address of ptr is %u\n",pptr);


printf("address of pptr is %u\n",&pptr);
printf("address of pptr is %u\n",ppptr);

// print the value 

printf("the value of i is %d\n",***ppptr);
printf("the value of i is %d\n",**pptr);
printf("the value of i is  %d\n",*ptr);

        return 0;

}
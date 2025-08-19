#include<stdio.h>
int main (){
int a;
int b;
printf("enter a number");
scanf("%d",&a);
printf("enter second a number");
scanf("%d",&b);
if(a>b)
    {
        printf("a is greater");

}
else if(a==b)
{
    printf("both equal");
}
else{
    printf("b is greater");
}

}

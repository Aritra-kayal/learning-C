//sum of three numbers
 
 #include<stdio.h>
 #include<conio.h>

 int main(){
    
    int a,b,c;

    printf("enter the value-1(integer) : ");
    scanf("%d",&a);

    printf("enter the value-2(integer) : ");
    scanf("%d",&b);

    printf("enter the value-3(integer) : ");
    scanf("%d",&c);

    int sum=a+b+c;    //formula for sum of three numbers

    printf("the sum of three numbers is : %d\n",sum);
    return 0;
 }
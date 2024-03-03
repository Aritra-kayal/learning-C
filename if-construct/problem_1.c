// Find the biggest between two numbers 

#include<stdio.h>
#include<conio.h>

int main(){
    int val1, val2;
    
    printf("Enter the first value (Integer): ");
    scanf("%d",&val1);

    printf("Enter the second value (Integer): ");
    scanf("%d",&val2);

    if(val1>val2){
        printf("The biggest value is: %d", val1);
    }else{
        printf("The biggest values is: %d", val2);
    }

return 0;

}
#include<stdio.h>

int main(){
    int sum=0, num=0,temp;
    printf("Enter Number: ");
    scanf("%d",&num);
    temp = num;
    while(num){
        int f=1, rem;
        rem = num % 10;

        while(rem >= 1){
            f = f*rem;
            rem--;
        }

        num /=10;
        sum = sum+f;
    }
    
    if(temp == sum)
        printf("%d is Strong Number.",temp);
    else
        printf("%d is not Strong number.",temp);


    return 0;
}
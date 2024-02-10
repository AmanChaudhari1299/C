#include<stdio.h>

void fibo(int n)
{
    int a = 0;
    int b = 1;
    int sum;

    if(n <= 0){
        return;
    }
    else if(n == 1){
        printf("%d", a);
    }
    else if(n == 2){
        printf("%d %d", a,b);
    }
    
    else if(n >= 2){
        
        printf("%d\n%d\n", a, b);

        for(int i = 0; i<(n-2); i++){
            int sum = a+b;
            printf("%d\n", sum);
            a = b;
            b = sum;
        }
    }  
}

int main()
{
    int num;
    printf("Enter the last digit of fibo series: ");
    scanf("%d" , &num);

    printf("Fibo Series:");
    fibo(num);

    return 0;
}
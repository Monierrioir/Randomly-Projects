#include <stdio.h>

int main() {
int num,a;
int r=0;
    printf("Please enter a number 9999-100000:\n");
    scanf("%d",&num);
    if (num>=10000 && num <=99999){
       while(num!=0){
           a=num%10;
          r=r*10+a;
          num=num/10;

       }
        printf("The reverse number is:%d",r);
    }

    else
        printf("Invalid input!");

    return 0;
}

#include <stdio.h>
int main(){
    int num, d, rev=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(num!=0){
        d=num%10;
        num=num/10;
        rev=rev*10+d;
    }
    printf("The reversed number would be: %d \n", rev);
return 0;
}
#include <stdio.h>
int main() {    

    int a;
    printf("enter a number ");
    scanf("%d",&a);
    if(a/3==0){
        printf("fizz");

    }
     else if(a/5==0){
        printf("Buzz");

    }
   else (a/3==a/5
)
{
    printf("FIZZ BUZZ");
}
    return 0;
}
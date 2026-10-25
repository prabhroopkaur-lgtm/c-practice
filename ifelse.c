#include <stdio.h>
int main()
{
    // Write your code here
     char a,b;
    scanf(" %c %c ",&a,&b);
    if(a>=65 && a<=90){
        printf("uppercase\n%d",a+32);
    }
    else if(a>=97 && a<=122){
         printf("lowercase\n%d",a-32);
    }
    
    if(b>=65 && b<=90){
        printf("uppercase\n%d",b+32);
    }
    else if(b>=97 && b<=122){
         printf("lowercase\n%d",b-32);
    }
    return 0;
}
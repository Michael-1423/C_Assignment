#include <stdio.h>

int main()
{
    int a,count=0;
    printf("Enter the number ");
    scanf("%d",&a);
    while(a!=0){
        a=a/10;
        count=count + 1;
    }printf("%d",count);
return 0;
}  
#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=1;
    scanf("%d",&n);
    for(int j=2;j<=sqrt(n);j++)
        {
            if(n%j==0){
            c=0;
            }
        }
    
    if (c==1){
        printf("prime");
    }
    else
    printf("not a prime");
    
    return 0;
}
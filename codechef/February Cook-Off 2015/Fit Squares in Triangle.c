#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int b,s;
        scanf("%d",&b);
        s=b/2;
        b/=2;
        b=b*b;
        b-=s;
        printf("%d\n",b/2);
    }
    return 0;
}

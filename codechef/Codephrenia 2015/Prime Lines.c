#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,min,max,i,c=0,sum=0,j;
        scanf("%d",&n);
        min=(n-1)*n/2+1;
        max=min+n-1;
        for(i=min;i<=max;i++)
        {
            c=0;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    c=1;
                    break;
                }
            }
            if(c==0 && i!=1)
            sum+=i;
        }
        printf("%d\n",sum);
    }
    return 0;
}

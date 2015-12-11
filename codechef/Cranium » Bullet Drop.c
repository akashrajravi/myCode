#include<stdio.h>
#include<math.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    long long int x[n],i;
    float ans=0;
    for(i=0;i<n;i++)
    {
        scanf("%lld",&x[i]);
        if(x[i]<=100)
        printf("%.6f\n",ans);
        else
        {
            printf("%.6f\n",0.005*(x[i]-100));
        }
    }
    return 0;
}

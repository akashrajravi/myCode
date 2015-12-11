#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long long int r,x,y,x0,y0,v;
        scanf("%lld%lld%lld%lld%lld%lld",&r,&x,&y,&x0,&y0,&v);
        float ans,dist;
        dist=sqrt(pow(abs(x-x0),2)+pow(abs(y-y0),2));
        dist=(float)r-dist;
        if(dist>=0)
        {
            dist/=(float)v;
            printf("%.6f\n",dist);
        }
        else
        printf("0.000000\n");
    }
    return 0;
}

#include<stdio.h>
#include<math.h>
#include<limits.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,b,l,ans,x,y,ans1=INT_MAX;
        scanf("%f%f%f",&a,&b,&l);
        x=a*l/(l+b);
        ans=(sqrt(pow((a-x),2)+pow(b,2))+sqrt(pow(x,2)+pow(l,2)));
        if(l!=b)
        {
            y=a*l/(l-b);
            ans1=(sqrt(pow((a-y),2)+pow(b,2))+sqrt(pow(y,2)+pow(l,2)));
        }
        if(ans<ans1)
        printf("%.6f\n",ans);
        else
        printf("%.6f\n",ans1);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int hcf(int a,int b)
{
    while(a!=b)
    {
        if(a%b==0)
        return b;
        else if(b%a==0)
        return a;
        else if(a>b)
        return hcf(a-b,b);
        else if(b>a)
        return hcf(a,b-a);
    }
    return a;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,ans=0,i,a;
        char b[260];
        scanf("%d",&a);
        scanf("%s",b);
        if(a==0)
            printf("%s\n",b);
        else
        {
            n=strlen(b);
            for(i=0;i<n;i++)
            ans=(ans*10+(b[i]-48))%a;
            printf("%d\n",hcf(ans,a));
        }
    }
    return 0;
}

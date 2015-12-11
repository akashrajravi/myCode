#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[201];
        scanf("%s",a);
        int n,i,ans=0,b[59]={0};
        n=strlen(a);
        for(i=0;i<n;i++)
        b[(int)a[i]-65]++;
        for(i=0;i<59;i++)
        {
            if(b[i]%2)
            ans+=b[i]/2+1;
            else
            ans+=b[i]/2;
        }
        printf("%d\n",ans);
    }
    return 0;
}

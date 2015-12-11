#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10001];
        long long int ac,bc,cost=0,i=0,n,temp[10001];
        scanf("%s%d%d",str,&ac,&bc);
        n=strlen(str)-1;
        for(i=0;i<=n;i++)
            temp[i]=0;
        for(i=0;i<=n;i++)
        {
            if(str[i]=='/' && temp[i]==0 && temp[abs(i-n)]==0)
            {
                if(str[abs(n-i)]=='a')
                {
                    cost+=ac;
                    temp[i]=1;
                    temp[abs(i-n)]=1;
                }
                else if(str[abs(n-i)]=='b')
                {
                    cost+=bc;
                    temp[i]=1;
                    temp[abs(i-n)]=1;
                }
                else if(str[abs(n-i)]=='/')
                {
                    if(ac<bc)
                    {
                        cost+=2*ac;
                        temp[i]=1;
                        temp[abs(i-n)]=1;
                    }
                    else
                    {
                        cost+=2*bc;
                        temp[i]=1;
                        temp[abs(i-n)]=1;
                    }
                }
            }
        }
        for(i=0;i<=n;i++)
        printf("%d ",temp[i]);
        if(cost==0)
        printf("-1\n");
        else
        printf("%d\n",cost);
    }
    return 0;
}

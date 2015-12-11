#include<stdio.h>
#include<string.h>
#include<math.h>
int power(int x,int y)
{
    if(x==0)
        return 0;
    else if( y == 0)
        return 1;
    else if (y%2 == 0)
        return power(x, y/2)*power(x, y/2);
    else
        return x*power(x, y/2)*power(x, y/2);

}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int type,n,i;
        char str[1000001];
        scanf("%d %s",&type,&str);
        n=strlen(str);
        //printf("  %d  ",n);
        int b[n],g[n],j=0,k=0,l=0,m=0,ans=0;
        char temp[n+1];
        for(i=0;i<n;i++)
        {
            b[i]=0;
            g[i]=0;
            if(str[i]=='G')
                j++;
            else
                k++;
        }
        if(abs(j-k)==1 || j==k)
        {
            if(j==1 && k==1)
                printf("0\n");
            else
            {
                if(j>k)
                {
                    for(i=0;i<n;i++)
                    {
                        if(i%2==0)
                        temp[i]='G';
                        else
                        temp[i]='B';
                    }
                for(i=0;i<n;i++)
                {
                    if(str[i]!=temp[i])
                    {
                        if(str[i]=='G')
                        {
                            g[l]=i;
                            l++;
                        }
                        else
                        {
                            b[m]=i;
                            m++;
                        }
                    }
                }
                printf("%d  %s",strlen(temp),temp);
                    for(i=0;i<l;i++)
                    ans=ans+power(abs(b[i]-g[i]),type);
                    printf("%d\n",ans);
                }
            else if(k>j)
            {
                for(i=0;i<n;i++)
                {
                    if(i%2==0)
                    temp[i]='B';
                    else
                    temp[i]='G';
                }

                for(i=0;i<n;i++)
                {
                    if(str[i]!=temp[i])
                    {
                        if(str[i]=='G')
                        {
                            g[l]=i;
                            l++;
                        }
                        else
                        {
                            b[m]=i;
                            m++;
                        }
                    }
                }
                printf("%d  %s",strlen(temp),temp);
                    for(i=0;i<l;i++)
                       // printf("%d\t\t%d ",abs(b[i]-g[i]),type);
                        //a=abs(b[i]-g[i]);
                        ans=ans+power(abs(b[i]-g[i]),type);
                       // printf("%d\t",ans);
                    printf("%d\n",ans);
            }
            else
            {
                if(str[0]=='B')
                {
                    for(i=0;i<n;i++)
                    {
                        if(i%2==0)
                        temp[i]='B';
                        else
                        temp[i]='G';
                    }
                }
                else
                {
                    for(i=0;i<n;i++)
                    {
                        if(i%2==0)
                        temp[i]='G';
                        else
                        temp[i]='B';
                    }
                }
                for(i=0;i<n;i++)
                {
                    if(str[i]!=temp[i])
                    {
                        if(str[i]=='G')
                        {
                            g[l]=i;
                            l++;
                        }
                        else
                        {
                            b[m]=i;
                            m++;
                        }
                    }
                }
                printf("%d  %s",strlen(temp),temp);
                    for(i=0;i<l;i++)
                    ans=ans+power(abs(b[i]-g[i]),type);
                    printf("%d\n",ans);
                }
            }
        }
        else
        printf("-1\n");
    }
    return 0;
}

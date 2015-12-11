#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10001];
        int a,b,cost=0,i=0,n,c=1;
        scanf("%s%d%d",str,&a,&b);
        n=strlen(str)-1;
    if(n%2)
    {
        while(i<=n)
        {
            if(str[i]=='/' || str[n]=='/')
            {
                if((str[i]=='a'&&str[n]=='/') || (str[i]=='/'&&str[n]=='a'))
                {
                    cost+=a;
                    i++;
                    n--;
                }
                else if((str[i]=='b'&&str[n]=='/') || (str[i]=='/'&&str[n]=='b'))
                {
                    cost+=b;
                    i++;
                    n--;
                }
                else if(str[i]=='/'&&str[n]=='/')
                {
                    if(a>b)
                    {
                        cost+=2*b;
                        i++;
                        n--;
                    }
                    else
                    {
                        cost+=2*a;
                        i++;
                        n--;
                    }
                }
            }
            else if((str[i]=='a' && str[n]=='a')||(str[i]=='b'&&str[n]=='b'))
            {
                i++;
                n--;
            }
            else if((str[i]=='a' && str[n]=='b')||(str[i]=='b'&&str[n]=='a'))
            {
                c=0;
                i=n;
                i++;
                break;
            }
        }
    }
        if(c==0)
        printf("-1\n");
        else
        printf("%d\n",cost);
    }
    return 0;
}

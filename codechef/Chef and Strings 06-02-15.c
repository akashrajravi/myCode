#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    int q;
    scanf("%s%d",str,&q);
    while(q--)
    {
        int ans=0,i,j,l,r;
        char a[2],b[2];
        scanf("%s%s%d%d",a,b,&l,&r);
        for(i=(l-1);i<(r-1);i++)
        {
            if(str[i]==a[0])
            {
                for(j=i+1;j<r;j++)
                    {
                        if(str[j]==b[0])
                        ans++;
                    }
            }
        }
        printf("%d\n",ans);
    }
    return 0;
}

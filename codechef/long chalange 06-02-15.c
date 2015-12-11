#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int ans1=0,ans2=0,i,n;
        char a[100000];
        scanf("%s",a);
        n=strlen(a);
        char b[n],c[n];
        for(i=0;i<n;i++)
        {
            if(i%2==0)
            {
                b[i]='-';
                c[i]='+';
            }
            else
            {
                b[i]='+';
                c[i]='-';
            }
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=b[i])
            ans1++;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]!=c[i])
                ans2++;
        }
        if(ans1<=ans2)
        printf("%d\n",ans1);
        else
        printf("%d\n",ans2);
    }
    return 0;
}

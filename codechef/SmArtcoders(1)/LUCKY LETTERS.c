#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1000001];
        int n,i,j=0,m,cr=0,r=0,k=0;
        scanf("%s",str);
        n=strlen(str);
        n--;
        while(str[j]!='K')
        {
            cr++;
            j++;
        }
        while(str[n]!='K')
        {
            cr++;
            n--;
        }
        for(i=j;i<=n;i++)
        {
            if(str[i]!='R')
            k++;
            else
            r++;
        }
        if(k>r)
            cr+=k;
        else
        cr+=r;
        printf("%d\n",cr);
    }
    return 0;
}

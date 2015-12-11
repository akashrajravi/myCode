#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[1001];
        int a[26]={0},b[26]={0},i,j,k=0,n;
        scanf("%s",str);
        n=strlen(str);
        if(n%2)
            j=n/2+1;
        else
            j=n/2;
        for(i=0;i<n/2;i++)
        a[(int)str[i]-97]++;
        for(i=j;i<n;i++)
        b[(int)str[i]-97]++;
        for(i=0;i<26;i++)
        {
            if(a[i]!=b[i])
            {
                k=1;
                break;
            }
        }
        if(k==1)
        printf("NO\n");
        else
        printf("YES\n");
    }
    return 0;
}

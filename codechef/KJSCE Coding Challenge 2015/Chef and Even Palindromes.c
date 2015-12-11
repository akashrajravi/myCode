#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,a[26];
        scanf("%d",&n);
        char str[n+1];
        scanf("%s",str);
        for(i=0;i<26;i++)
            a[i]=0;
        for(i=0;i<n;i++)
        a[(int)str[i]-97]++;
        for(i=0;i<26;i++)
        {
            if(a[i]%2)
            {
                printf("%c\n",97+i);
                break;
            }
        }
    }
    return 0;
}

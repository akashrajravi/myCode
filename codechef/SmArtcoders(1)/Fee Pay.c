#include<stdio.h>
#include<string.h>
int main()
{
    char str[100000];
    long long int n,i,sum=0;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='H')
        sum+=(i+1)*100;
        else
        sum-=(i+1)*100;
    }
    printf("%lld\n",sum);
    return 0;
}

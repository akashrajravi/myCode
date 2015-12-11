#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    char str[n];
    scanf("%s",str);
    for(i=0;i<n;i++)
    {
        if(str[i]=='.')
        count++;
    }
    printf("%d\n",count);
    return 0;
}

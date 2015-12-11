#include<stdio.h>
#include<string.h>
int main()
{
    char str[101];
    int ans=0,n,i;
    scanf("%s",str);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        if(((int)str[i]-48)==0 || ((int)str[i]-48)==6 || ((int)str[i]-48)==9)
        ans+=6;
        else if(((int)str[i]-48)==1)
        ans+=2;
        else if(((int)str[i]-48)==2 || ((int)str[i]-48)==3 || ((int)str[i]-48)==5)
        ans+=5;
        else if(((int)str[i]-48)==4)
        ans+=4;
        else if(((int)str[i]-48)==7)
        ans+=3;
        else if(((int)str[i]-48)==8)
        ans+=7;
    }
    printf("%d\n",ans);
    return 0;
}

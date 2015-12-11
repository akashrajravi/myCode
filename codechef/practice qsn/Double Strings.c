#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10];
        scanf("%s",str);
        int l=strlen(str);
        if((str[l-1]%2))
            str[l-1]--;
        printf("%s\n",str);
       /* int n;
        scanf("%d",&n);
        if(n%2)
        printf("%d\n",n-1);
        else
        printf("%d\n",n);*/
    }
    return 0;
}

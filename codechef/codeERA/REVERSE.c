#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[10101];
        int n;
        scanf("%s",str);
        n=strlen(str);
        if((int)str[0]%2==0)
        printf("EVEN\n");
        else
        printf("ODD\n");
    }
    return 0;
}

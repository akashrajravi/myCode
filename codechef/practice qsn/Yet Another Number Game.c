#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        //char a[10];
        int n;
        //scanf("%s",a);
        scanf("%d",&n);
        //n=strlen(a);
        //if((int)a[n-1]%2)
        if(n%2)
        printf("BOB\n");
        else
        printf("ALICE\n");
    }
    return 0;
}

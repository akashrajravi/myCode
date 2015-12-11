#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        char a,b,c;
        scanf("%d",&n);
        if(360%n)
            a='n';
        else
            a='y';
        if(n<=360)
            b='y';
        else
            b='n';
        if(n<=26)
            c='y';
        else
            c='n';
        printf("%c %c %c\n",a,b,c);
    }
    return 0;
}

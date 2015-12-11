#include<stdio.h>
#include<string.h>
int main()
{
    int t,n;
    char str[51];
    scanf("%d ",&t);
    while(t--)
    {
        gets(str);
        n=strlen(str);
        int i,count=0;
        for(i=0;i<n;i++)
        {
            if(str[i]==' ' || i==n-1)
            {
                if(str[i]==' ')
                {
                    printf("%d",count);
                    count=0;
                }
                else
                    printf("%d\n",count+1);
            }
            else
            count++;
        }
        //printf("%d\t",j);
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int n,i,j,l,temp=0,max=0;
        scanf("%ld",&n);
        char str[n+1];
        long int a[n],sum=0;
        for(i=0;i<n;i++)
        {
            a[i]=0;
            scanf("%s",str);
            l=strlen(str);
            for(j=0;j<l;j++)
            a[i]+=(int)str[j]-48;
            if(a[i]>9)
            {
                while(a[i]>9)
                {
                    while(a[i]!=0)
                    {
                        temp+=a[i]%10;
                        a[i]/=10;
                    }
                    a[i]=temp;
                    temp=0;
                }
            }
            temp=0;
        }
        for(i=0;i<n;i++)
        {
            if(a[i]>=max)
            {
                max=a[i];
            }
        }
        if(max==0)
            printf("red\n");
        else if(max==1)
            printf("blue\n");
        else if(max==2)
            printf("pink\n");
        else if(max==3)
            printf("white\n");
        else if(max==4)
            printf("black\n");
        else if(max==5)
            printf("violet\n");
        else if(max==6)
            printf("cyan\n");
        else if(max==7)
            printf("yellow\n");
        else if(max==8)
            printf("green\n");
        else
            printf("brown\n");
    }
    return 0;
}

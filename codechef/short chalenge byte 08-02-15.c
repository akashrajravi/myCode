#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,j,a=0,b=0;
        scanf("%d",&n);
        int time[n];
        for(i=0;i<n;i++)
            scanf("%d",&time[i]);
        i=0;
        j=n-1;
        while(i!=j)
        {
            if(time[i]>time[j])
            {
                time[i]-=time[j];
                printf("i-%d\t",time[i]);
                b++;
                j--;
            }
            else
            {
                if(time[i]==time[j])
                {
                    printf("=-%d\t",time[i]);
                    i++;
                    j--;
                    a++;
                    b++;
                }
                else
                {
                    time[j]-=time[i];
                    printf("j-%d\t",time[j]);
                    a++;
                    i++;
                }
            }
        }
        if((a+b)!=n)
        b++;
        printf("%d %d\n",a,b);
    }
    return 0;
}

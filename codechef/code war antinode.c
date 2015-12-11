#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int a,b,n;
        scanf("%ld%ld%ld",&a,&b,&n);
        if(a+b<n || a-b>n)
        printf("NO\n");
        else if(a==n || b==n || a==1 || b==1)
        printf("YES\n");
        else if(a>n || b>n)
        {
             if(n%a==0 || n%b==0)
            {
                if((n/a)*a==n || ((n/b)*b==n))
                printf("YES\n");
            }
            else if(n%(a-b)!=0 || n%(b-a)
                    !=0)
                printf("NO\n");
            else
            printf("YES\n");
        }
        else
        printf("NO\n");
    }
    return 0;
}

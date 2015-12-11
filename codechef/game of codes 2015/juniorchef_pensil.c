#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        long int s,i,j=0;
        scanf("%ld",&s);
        while(s!=0)
        {
            i=0;
            while((pow(2,i))<=s)
            {
                i++;
               // printf("%ld ",i);
            }
            //printf("%ld  ",(pow(2,i)));
            j+=1;
            s-=(pow(2,i-1));
        }
        printf("%ld\n",j);
    }
    return 0;
}

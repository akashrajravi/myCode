#include<stdio.h>
#define num 1000000
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        float a,b,c,x,y,i,d;
        scanf("%f%f%f",&a,&b,&c);
        if(a>b)
        {
            d=a-b;
            for(i=0;i<num;i++)
            {
                if((d/b)*i==c/b)
                {
                    printf("Yes\n");
                    break;
                    i=num;
                }
                else if((d/b)*i==c/b)
                {
                    printf("No\n");
                    break;
                }

            }
        }
        else if(b>a)
        {
            d=b-a;
            for(i=0;i<num;i++)
            {
                if((d/a)*i==c/a)
                {
                    printf("Yes\n");
                    break;
                    i=num;
                }
                else if((d/a)*i>c/a)
                {
                    printf("No\n");
                    break;
                }
            }
        }
        else
        {
            if(((int)c%(int)a)==0)
            printf("Yes\n");
            else
            printf("No\n");
        }
    }
    return 0;
}

#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000000];
    long int q;
    scanf("%s%ld",str,&q);
    while(q--)
    {
        long int ans=0,i,j=0,k=0,v,w,l,r,n,l1,r1;
        char a[2],b[2];
        scanf("%s%s%ld%ld",a,b,&l,&r);
        n=strlen(str);
        long int x1[n],y1[n];
        for(i=0;i<n;i++)
        {
            if(str[i]==a[0])
            {
                x1[j]=i+1;
                j++;
            }
            else if(str[i]==b[0])
                {
                    y1[k]=i+1;
                    k++;
                }
        }
            for(i=0;i<j;i++)
                if(x1[i]>=l)
                {
                    l1=i+1;
                    break;
                }
            for(i=k-1;i>=0;i--)
                if(y1[i]<=r)
                {
                    r1=i+1;
                  //  printf("%ld",r1);
                    break;
                }
        for(i=j;i>0;i--)
            if(x1[i-1]<y1[r1-1])
            {
                v=i-1;
                //printf("%ld  ",v);
                break;
            }
        for(i=0;i<k;i++)
            if(y1[i]>x1[l1-1])
            {
                w=i;
                break;
            }
        //i=l1-1;
        j=w;
        k=0;
        i=l1-1;
           while(i<=v)
        {
            if(x1[i]<y1[j])
            {
                ans+=(r1-j);
                i++;
            }
            else
                j++;
        }
        printf("%ld\n",ans);
    }
    return 0;
}

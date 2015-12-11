#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        long long int a,b,ans=0,ans1=0,i=1,j,a1,b1;
        scanf("%lld%lld",&a,&b);
        while(i*(i+1)/2<a)
        {
            i++;
        }
        a1=i;
        //if(i%2==0)
        //{
           // j=i-1;
           // ans+=j*(j+1)/2+j/2*(j/2+1)/2;
        // }
        //else
        ans+=i*(i+1)/2+i/2*(i/2+1)/2;
        i=a-i;
        if(i!=0)
        {
            if(i%2)
            ans+=a1;
        }
        i=0;
        while(i*(i+1)/2<b)
        {
            i++;
        }
        a1=i;
        /*if(i%2==0)
        {
            j=i-1;
            ans1+=j*(j+1)/2+j/2*(j/2+1)/2;
        }
        else*/
        ans1+=i*(i+1)/2+i/2*(i/2+1)/2;
        i=b-i;
        if(i!=0)
        {
            if(i%2)
            ans1+=a1;
        }
        printf("%lld\n",ans1-ans);
    }
    return 0;
}

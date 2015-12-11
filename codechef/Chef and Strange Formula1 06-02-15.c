#include<stdio.h>
#include<math.h>
#define max 10000
void factorial(int);
void multiply(int);
int length=0;
int fact[max];


void factorial(int num)
{
    int i;
    for(i=2;i<=num;i++)
        multiply(i);
}
void multiply(int num)
{
    long i,rem=0;
    int j;
    int arr[max];
    for(i=0;i<=length;i++)
        arr[i]=fact[i];

    for(i=0;i<=length;i++)
    {
        fact[i]=((arr[i]*num)+rem)%10;
        rem=((arr[i]*num)+rem)/10;
    }

 if(rem!=0)
 {
     while(rem!=0)
     {
         fact[i]=rem%10;
         rem=rem/10;
         i++;
     }
 }

    length=i-1;
}
int main()
{
    long long int n,m,p,i;
    long long int x=0;
    scanf("%lld%lld",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%lld",p);
        fact[0]=1;
        factorial(p+1);
        for(i=length;i>=0;i--)
        x+=(fact[i]+pow(10,length-i));
        x=x+p*p;
    }
    printf("%lld\n",x);
    return 0;

}

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char a[51],b[51],o[2];
    long long int l,la,lb,carry,k,i,j,mult;
    scanf("%s%s%s",a,o,b);
    la=strlen(a);
    lb=strlen(b);
    l=la+lb+1;
    long long int arr[l];
    for(i=0;i<l;i++)
        arr[i]=0;
    if(o[0]=='*')
    {
        for(i=la-1;i>=0;i--)
        {
            k=i;
            carry=0;
            for(j=lb-1;j>=0;j--)
            {
                mult=(((int)a[i]-48)*((int)b[j]-48));
                if((mult+carry+arr[k])>9)
                {
                    a[k]=(mult+a[k]+carry)%10;
                    carry=(mult+a[k]+carry)/10;
                    k++;
                }
                else
                {
                    arr[k]+=mult+carry;
                    k++;
                }
            }
            if(carry>0)
            {
                arr[k]=carry;
                k++;
            }
        }
        for(i=k-1;i>=0;i--
        )
        printf("%lld",arr[i]);
        printf("\n");
    }
    return 0;
}

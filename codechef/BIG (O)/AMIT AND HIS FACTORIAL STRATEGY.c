#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, arr[5000000]={0}, i, j, carry, k, temp;
        scanf("%d", &n);
        arr[1] = 1;
        j = 1;
        for(i=2; i<=n; i++)
        {
            carry = 0;
            for(k=1; k<=j; k++)
            {
                temp = arr[k]*i + carry;
                carry = temp/10;
                arr[k] = temp%10;
            }
            while(carry)
            {
                arr[++j] = carry%10;
                carry /= 10;
            }
	}
		printf("%d\n",j);
    }
	return 0;
}

#include <stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, arr[500]={0}, i, j, carry, k, temp;
        scanf("%d", &n);
        arr[1] = 1;
        j = 1;
        for(i=2; i<=n; i++) {
		carry = 0;
		for(k=1; k<=j; k++) {
			temp = arr[k]*i + carry;
			carry = temp/10;
			arr[k] = temp%10;
			//printf("%d %d %d\n", i, temp, arr[k]);
		}
		while(carry) {
			arr[++j] = carry%10;
			carry /= 10;
		}
	}
	for(i=j; i>=1; i--)
		printf("%d", arr[i]);
		printf("\n");
    }
	return 0;
}

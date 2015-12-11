#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char str[100001];
        int i=1,cnt=0;
        scanf("%s",str);
        while(str[i]!='\0')
           {
                if(str[i]==str[i-1])
                cnt++;
                i++;
           }
        printf("%d\n",cnt);
        /*for(i=n-1;i>0;i--)
        {
            if(str[i]==str[i-1])
                cnt1++;
        }*/
        //cout<<min(cnt,cnt1)<<endl;
    }
    return 0;
}

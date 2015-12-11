#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100000
char * multiply(char a[],char b[]){
    static char mul[MAX];
    char c[MAX];
    char temp[MAX];
    int la,lb;
    int i,j,k=0,x=0,y;
    long int r=0;
    long sum = 0;
    la=strlen(a)-1;
        lb=strlen(b)-1;

        for(i=0;i<=la;i++){
                a[i] = a[i] - 48;
        }

        for(i=0;i<=lb;i++){
                b[i] = b[i] - 48;
        }

    for(i=lb;i>=0;i--){
         r=0;
         for(j=la;j>=0;j--){
             temp[k++] = (b[i]*a[j] + r)%10;
             r = (b[i]*a[j]+r)/10;
         }
         temp[k++] = r;
         x++;
         for(y = 0;y<x;y++){
             temp[k++] = 0;
         }
    }

    k=0;
    r=0;
    for(i=0;i<la+lb+2;i++){
         sum =0;
         y=0;
         for(j=1;j<=lb+1;j++){
             if(i <= la+j){
                 sum = sum + temp[y+i];
             }
             y += j + la + 1;
         }
         c[k++] = (sum+r) %10;
         r = (sum+r)/10;
    }
    c[k] = r;
    j=0;
    for(i=k-1;i>=0;i--){
         mul[j++]=c[i] + 48;
    }
    mul[j]='\0';
    return mul;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--)
    {
        char a[MAX];
    char b[MAX];
    char *c,d[MAX];
    int n,i,ans=0,temp=0,temp1=0;
    scanf("%s%s",a,b);
    c = multiply(a,b);
    n=strlen(c);
    strcpy(d,c);
    for(i=0;i<n;i++)
        ans+=(int)d[i]-48;
    if(ans>9)
    {
        while(ans!=0)
        {
            temp+=ans%10;
            ans/=10;
            if(temp>9)
            {
                temp1+=temp%10;
                temp/=10;
            }
        }

    }
    printf("%d\n",ans);
    }
    return 0;
}

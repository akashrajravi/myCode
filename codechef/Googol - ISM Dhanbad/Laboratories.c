#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=1,i,j,k=0,t,b[500];
    char a[n][101],temp[101],str[n][101];
    for(i=0;i<n;i++)
         scanf("%s",a[i]);
    for(i=0;i<n-1;i++)
    {
        num=1;
        for(j=i+1;j<n;j++)
        {
             if((strcmp(a[i],a[j])==0) && a[j][0]!='0')
                {
                    num++;
                    a[j][0]='0';
                }
        }
        if(a[i][0]!='0')
        {
            strcpy(str[k],a[i]);
            b[k]=num;
            k++;
        }
    }
    if(a[i][0]!='0')
    {
        strcpy(str[k],a[i]);
            b[k]=1;

    }
    else
        k--;
    for(i=0;i<k;i++)
       for(j=i+1;j<=k;j++){
          if(strcmp(str[i],str[j])>0)
          {
            strcpy(temp,str[i]);
            strcpy(str[i],str[j]);
            strcpy(str[j],temp);
            t=b[i];
            b[i]=b[j];
            b[j]=t;
          }
    }
    for(i=0;i<=k;i++)
    {
       printf("%s %d\n",str[i],b[i]);
    }
    return 0;
}

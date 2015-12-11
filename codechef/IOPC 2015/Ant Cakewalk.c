#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int a,b,l,arr[3],i,j,temp;
        float ans,big;
        scanf("%d%d%d",&a,&b,&l);
        arr[0]=a;
        arr[1]=b;
        arr[2]=l;
        for(i=0;i<3;i++)
        {
            for(j=i;j<3;j++)
                if(arr[i]<arr[j])
            {
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
        for(i=0;i<3;i++)
            printf("%d ",arr[i]);
        big=(float)arr[0]/2;
        ans=(sqrt(pow(big,2)+pow(arr[1],2))+sqrt(pow(big,2)+pow(arr[2],2)));
        printf("%.6f\n",ans);
    }
    return 0;
}

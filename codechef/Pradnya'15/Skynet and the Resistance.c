#include <stdio.h>
int main()
{
   int ornl[1000001],i,pos;
    int m,n,cnt=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {

        scanf("%d",&pos);
        ornl[pos]=1;
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&pos);
        if(ornl[pos]==1)
        {
            ornl[pos]++;
            cnt++;
        }
    }
   printf("%d\n",cnt);
return 0;
}

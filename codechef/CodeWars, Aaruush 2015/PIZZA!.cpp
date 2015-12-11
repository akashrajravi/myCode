# include<bits/stdc++.h>
using namespace std;

/*void knapsack(int n, float speed[], float position[], float capacity) {
   float x[20], tp = 0;
   int i, j, u;
   u = capacity;

   for (i = 0; i < n; i++)
      x[i] = 0.0;

   for (i = 0; i < n; i++) {
      if (speed[i] > u)
         break;
      else {
         x[i] = 1.0;
         tp = tp + position[i];
         u = u - speed[i];
      }
   }

   if (i < n)
      x[i] = u / speed[i];

   tp = tp + (x[i] * position[i]);

   printf("\nThe result vector is:- ");
   for (i = 0; i < n; i++)
      printf("%f\t", x[i]);

   printf("\nMaximum position is:- %f", tp);

}*/
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int num,i,j,n,k,ti;
        cin>>num;
        double speed[num],position[num], capacity,rat[num],temp;
        for (i = 0; i < num; i++)
        cin>>speed[i]>>position[i];
        for (i = 0; i < num; i++)
        rat[i] = position[i] / speed[i];
        for (i = 0; i < num; i++)
        {
            for (j = i + 1; j < num; j++)
            {
                if (rat[i] < rat[j])
                {
                    temp = rat[j];
                    rat[j] = rat[i];
                    rat[i] = temp;

                    temp = speed[j];
                    speed[j] = speed[i];
                    speed[i] = temp;

                    temp = position[j];
                    position[j] = position[i];
                    position[i] = temp;
                }
            }
        }
    }
   return(0);
}

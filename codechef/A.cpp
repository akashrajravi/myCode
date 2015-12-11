#include<iostream>
using namespace std;
bool checkPalindrom(int num)
 {
  int n = num;
  int dig, rev = 0;
  while (num > 0) {
    dig = num % 10;
    rev = rev * 10 + dig;
    num  /= 10;
  }
  return (n == rev);
}
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int num,lim,x;
        long long ans=0;
        cin >>x>> lim;
        for (num =x; num <= lim; num++)
        {
            if (checkPalindrom(num))
            ans+=num;
        }
        cout<<ans<<endl;
    }
  return 0;
}



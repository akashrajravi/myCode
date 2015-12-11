#include <iostream>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <cstdlib>
using namespace std;

bool isVowel(char c){
	if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')
		return true;
	if(c=='A' || c=='E' || c=='I' || c=='O' || c=='U' || c == 'Y')
		return true;
	return false;
}

string convert(string s){
	string s1,s2;
	int l = s.size();
	if(l==0)
		return "";
	if(isVowel(s[0]))
		return s+"way";

	int i = 0;
	for(;i<l-1 && !isVowel(s[i]);i++)
		s1 += s[i];
	for (;i<l;i++)
		s2+=s[i];
	s2=s2+s1+"ay";
	return s2;
}

int main(){
	string s="";
	while(1){
		bool check = false;
		if(s!=""){
			cout<<convert(s);
			check = true;
		}

		cin>>s;
		if(s=="done")
			break;
		if(check)
		cout<<" ";
	}
}

#include <iostream>
#include <string>
using std::string;
using namespace std;

//declaring functions
bool Vowel(char ch);
string convert(string pigStr);
string pigLatinString(string pigStr);

int main () {
string str="sd";
int n;
cin>>str;
	while(str.compare("done") != 0)
{

	cout << pigLatinString(str) <<" ";
cin>>str;}

	return 0;
}

bool Vowel(char ch)  //Checking fo vowels
{
	ch=tolower(ch);
	switch (ch)
	{
	case 'a': case 'e':
	case 'i': case 'o':
	case 'u': case 'y': return true;
	default: return false;
	};
}//end Vowel

string convert(string pigStr) //Making the conversion

{
	string::size_type len=pigStr.length();

	string convertStr;

	convertStr=pigStr.substr(1,len-1)+pigStr[0];   //substr -- Return part of a string

	return convertStr;
}

string pigLatinString(string pigStr) //Generates the output

{
	string::size_type len;

	bool foundVowel;

	string::size_type counter;

	if (Vowel(pigStr[0]))

		pigStr=pigStr+"way";

	else
	{
		//didn't start with a vowel

		pigStr = pigStr;
		pigStr=convert(pigStr);
		len=pigStr.length();
		foundVowel=false;

	for (counter = 1; counter<len-1; counter++)

	if (Vowel(pigStr[0]))

		{
			foundVowel=true;
			break;
		}

	else

			pigStr=convert(pigStr);

	if (!foundVowel)

		pigStr=pigStr+"ay";

	else

		pigStr = pigStr + "ay";
	}
	return pigStr;

}

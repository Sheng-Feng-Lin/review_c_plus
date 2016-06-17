#include <iostream>
#include <string>

using namespace std;

#define u16 unsigned int

void swap(char *s, char *t);
u16 String_length(string &s);
void reverse(string &s); 

int main()
{
	string s = "abcdefg";

	cout << "length = " << s.length() << endl;
		
	cout << "string length = " << String_length(s) << endl;
	
	reverse(s);

	return 0;
}

void swap (char *s, char *t)
{
	char *temp = 0; 
	*temp = *s;
	*s = *t;
	*t = *temp;
}

u16 String_length(string &s)
{
	u16 count = 0;

	while(s[count++] != '\0');	
		
	return count-1;
}

void reverse(string &s)
{
	u16 i = 0;
	for(i = 0 ; i < String_length(s)/2; i++)
		swap(s[i], s[String_length(s)-i-1]);
	
	cout << "Reverse is : " << s << endl;
}


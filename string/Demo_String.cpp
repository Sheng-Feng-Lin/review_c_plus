#include <iostream>
#include "Demo_String.h"

using namespace std;

Demo_String::Demo_String(const char *s)
{
	int i = 0;
	this -> s = new char[10];
	do{
		*(this->s+i) = *s;
		i++;
	}while(*(s++) != '\0');
	
}

void Demo_String::String_Print()
{
	cout << "String is " << this -> s << endl;
}

u16 Demo_String::String_Length()
{
	u16 count = 0;
	while(this->s[count++] != '\0');	
	return count - 1;
}

void Demo_String::String_Reverse()
{
	u16 i = 0;
	char temp;
	for(i = 0; i < String_Length()/2; i++){
		temp = s[i];
		s[i] = s[(String_Length())-i-1];
		s[(String_Length())-i-1] = temp;
	}
	cout << "String Reverse is " << s << endl;
	
}

/*int main()
{
	Demo_String str("123456");
	str.Print_String();
	cout << "Length is " << str.String_Length() << endl;
	str.String_Reverse();

	return 0;
}*/

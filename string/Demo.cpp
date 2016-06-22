#include <iostream>
#include "Demo_String.h"

using namespace std;

int main()
{
	Demo_String s("abcedfgh");
	s.String_Print();
	cout << "Length is " << s.String_Length() << endl;
	s.String_Reverse();
	return 0;


}

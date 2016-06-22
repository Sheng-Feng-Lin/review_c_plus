#define u16 unsigned int

class Demo_String
{

public:
	Demo_String(const char *);
	void String_Print();
	u16 String_Length();
	void String_Reverse();

private:
	char *s;
};


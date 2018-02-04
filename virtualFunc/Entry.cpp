#include <Windows.h>
#include <iostream>

class CUsers {
public:
	CUsers() {}
	virtual void GetNickName() = 0;
	virtual ~CUsers() {};
};

class CP45H3 : public CUsers {
public:
	CP45H3() {}
	void GetNickName() { printf("P45H3\n"); }
	~CP45H3() {}
};

class CGOVARD : public CUsers {
public:
	CGOVARD() {}
	void GetNickName() { printf("GOVARD\n"); }
	~CGOVARD() {}
};

int main() { 
	SetConsoleTitle(" ");
	CUsers* g_p45h3 = new CP45H3;
	CUsers* g_govard = new CGOVARD;
	
	g_p45h3->GetNickName();
	g_govard->GetNickName();

	delete g_p45h3;
	delete g_govard;

	return 0;
}
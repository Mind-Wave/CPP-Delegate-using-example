#pragma once
class Delegate
{
private:

	typedef void(*VoidPointerFunction)();//function pointer prototype

	VoidPointerFunction _vpFuntion;//local function pointer

	Delegate();
	
public:
	
	Delegate(const Delegate & func);//Copy function pointer constructor

	Delegate(Delegate && func);//Transfer function pointer constructor

	Delegate(VoidPointerFunction vpFuntion);//Set function pointer constructor

	virtual ~Delegate();

	void operator = (const Delegate & func);//= operator overload to copy function pointer from existing Delegate object

	void operator = (VoidPointerFunction vpFuntion);//= operator overload to set function pointer

	void operator () ();//() operator overload to call function
};


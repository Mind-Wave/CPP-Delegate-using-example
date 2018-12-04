#include "Delegate.h"



Delegate::Delegate()
{
	this->_vpFuntion = nullptr;
}

Delegate::Delegate(Delegate && func)
{
	this->_vpFuntion = func._vpFuntion;
	func._vpFuntion = nullptr;
}

Delegate::Delegate(VoidPointerFunction vpFuntion)
{
	this->_vpFuntion = vpFuntion;
}

Delegate::Delegate(const Delegate & func)
{
	this->_vpFuntion = func._vpFuntion;
}

Delegate::~Delegate()
{
	this->_vpFuntion = nullptr;
}

void Delegate::operator=(const Delegate & func)
{
	this->_vpFuntion = func._vpFuntion;
}

void Delegate::operator=(VoidPointerFunction vpFuntion)
{
	this->_vpFuntion = vpFuntion;
}

void Delegate::operator()()
{
	this->_vpFuntion();
}

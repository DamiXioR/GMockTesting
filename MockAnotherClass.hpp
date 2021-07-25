#pragma once
#include "AnotherClass.hpp"

class MockAnotherClass : public AnotherClass{
public:
	virtual ~MockAnotherClass(){};
	MOCK_METHOD(bool,isResultNeeded,(),(const));
};

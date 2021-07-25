#pragma once
#include "ElseClass.hpp"

class MockElseClass : public ElseClass{
public:
	virtual ~MockElseClass(){};
	MOCK_METHOD(int,getResult,(),(const));

};
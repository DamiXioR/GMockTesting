#pragma once
#include "ElseClass.hpp"

class MockElseClass : public ElseClass{
public:
	virtual ~MockElseClass(){};
	MOCK_METHOD(int,getResult,(),(const));
	MOCK_CONST_METHOD1(showText,void(std::string text));
};
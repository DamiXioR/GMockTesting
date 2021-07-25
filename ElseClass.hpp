#pragma once
#include <string>

class ElseClass {
public:
	virtual ~ElseClass(){};
	virtual int getResult() const = 0;
	virtual void showText(std::string text) const = 0;

};
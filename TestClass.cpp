#include "TestClass.hpp"

int TestClass::ifResultNeededGetResult(AnotherClass& anotherClass, ElseClass& elseClass) {
	
	bool checker = anotherClass.isResultNeeded();
	if(checker){
		auto controller = elseClass.getResult();
		int securityPass{0};

		if(controller > 0) {
			securityPass = 1;
		} else if (controller < 0) {
			securityPass = -1;
		} else {
			securityPass = 0;
		}
		return securityPass;
	} 
	
	return 777;
}	

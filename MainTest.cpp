#include <gtest/gtest.h>
#include <gmock/gmock.h>

#include "MockAnotherClass.hpp"
#include "MockElseClass.hpp"
#include "TestClass.hpp"

using namespace ::testing;

TEST(TestingClass, ShouldWork){
	NiceMock<MockAnotherClass> anotherClass;
	NiceMock<MockElseClass> elseClass;
	
	TestClass sut;

	bool checker{true};
	//int number{-100};
	EXPECT_CALL(anotherClass, isResultNeeded()).WillOnce(Return(checker));
	//ON_CALL(elseClass, getResult()).WillByDefault(Return(number));
	EXPECT_EQ(sut.ifResultNeededGetResult(anotherClass, elseClass),0);

	//BARDZO WAŻNE, jeśli nie dodamy EXPECT_CALL dla danej funkcji, to dla int zwróci 0, a dla bool zwróci false
	//żeby sprawdzić, jakie zwraca wartości defaultowe najlepiej zamienić NiceMock na StrictMock i zobaczyć warningi

}

int main(int argc, char** argv){

	::testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();
}



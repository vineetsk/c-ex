#include "basics.h"
#include "gtest/gtest.h"

class TestBasics : public testing::Test{

	virtual void SetUp(void){
	}
	
	virtual void TearDown(void){
	}
};

TEST_F(TestBasics, frameworkUsage){
	EXPECT_TRUE(true);
	EXPECT_EQ(1,1);
}

TEST_F(TestBasics, sizeOfChar){
	int size = sizeof(char);
	EXPECT_EQ(1, size);
}

TEST_F(TestBasics, sizeOfInt){
	int size = sizeof(int);
	EXPECT_EQ(4, size);
}

TEST_F(TestBasics, sizeOfAnyPointer){
	int sizeVoidPointer = sizeof (void*);
	EXPECT_EQ(4, sizeVoidPointer);
	
	EXPECT_TRUE(basics_isSizeEqForAnyPointer());
}

TEST_F(TestBasics, sizeOfStruct){
	int size = sizeof(PairOfIntAndChar);
	EXPECT_NE(3, size);
}
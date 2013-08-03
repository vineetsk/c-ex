#include "basics.h"
#include "gtest/gtest.h"

class TestBasics : public testing::Test{

	virtual void SetUp(void){
	}
	
	virtual void TearDown(void){
	}
};

TEST_F(TestBasics, googleTestMacroUsage){
	EXPECT_TRUE(true);
	EXPECT_FALSE(false);
	
	EXPECT_EQ(1,1);
	EXPECT_NE(0,1);
	
	EXPECT_LT(1,2);
	EXPECT_GT(2,1);
	
	EXPECT_LE(2,2);
	EXPECT_GE(2,2);
	
	EXPECT_STREQ("same", "same");
	EXPECT_STRCASEEQ("same", "SaMe");
	
	EXPECT_STRNE("same", "not same");
	EXPECT_STRCASENE("same", "Not Same");
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
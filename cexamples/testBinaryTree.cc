#include "binaryTree.h"
#include "gtest/gtest.h"
extern "C"{
	
}
class TestBinaryTree : public testing::Test{

	virtual void SetUp(void){
	}
	
	virtual void TearDown(void){
	}
};

TEST_F(TestBinaryTree, googleTestMacroUsage){
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

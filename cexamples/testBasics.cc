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
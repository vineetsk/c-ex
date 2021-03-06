#include "basics.h"
#include "gtest/gtest.h"
extern "C"{
	bool basics_isSizeEqForAnyPointer();
}
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

TEST_F(TestBasics, DISABLED_test){
	EXPECT_TRUE(false);
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

TEST_F(TestBasics, sizeOfPackedStruct){
	int size = sizeof(PairOfIntAndChar);
	EXPECT_EQ(5, size);
}

TEST_F(TestBasics, sizeOfNonPackedStruct){
	int size = sizeof(PairOfIntAndCharNonPacked);
	EXPECT_EQ(8, size);
}

TEST_F(TestBasics, sizeOfUnion){
	int size = sizeof(UnionOfIntAndChar);
	EXPECT_EQ(4, size);
}

TEST_F(TestBasics, overlap){
	UnionOfIntAndChar u;
	u.i = 0xaabbccdd;
	EXPECT_EQ(0xdd, u.c);
	
	u.c = 0x10;
	EXPECT_EQ(0xaabbcc10, u.i);
}

TEST_F(TestBasics, external_sizeOf_Char){
	EXPECT_EQ(1, external_sizeof(char));
}

TEST_F(TestBasics, external_sizeOf_Int){
	EXPECT_EQ(4, external_sizeof(int));
}

TEST_F(TestBasics, external_sizeOf_Struct){
	EXPECT_EQ(8, external_sizeof(PairOfIntAndCharNonPacked));
}

TEST_F(TestBasics, external_sizeOf_PackedStruct){
	int size = external_sizeof(PairOfIntAndChar);
	EXPECT_EQ(5, size);
}

#if 0 /* TODO */
TEST_F(TestBasics, DISABLED_xternal_sizeOf_4){
	int size = external_sizeof(4);
	EXPECT_EQ(4, size);
}
#endif


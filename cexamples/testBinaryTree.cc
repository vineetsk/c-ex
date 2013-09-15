#include "gtest/gtest.h"
extern "C"{
#include "BinaryTree.h"
}
class TestBinaryNode : public testing::Test{

	virtual void SetUp(void){
	}
	
	virtual void TearDown(void){
	}
};

TEST_F(TestBinaryNode, googleTestMacroUsage){
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

/***
	1. A special designated node called as root of the tree.
	2. Other nodes are sub trees of the root.
	3. A tree node is one which has left child and/or right child.
	4. A leaf is a node which does not have any child. 
	5. A binary tree can be empty.
	6. The value of a node is greater than or equal to the values of any descendants in its left branch, 
	   and less than or equal to the value of any descendant on its right branch.
***/

TEST_F(TestBinaryNode, createBinTree){
	BinaryNode* binTree = newBinaryNode(10);
	EXPECT_EQ(10, btree_getData(binTree));
}

TEST_F(TestBinaryNode, DISABLED_whenRootValuesIsTenAndChildValueIsElevenThenChildValueIsStoredAsLeftChild){
	BinaryNode* binTree = newBinaryNode(10);
	BinaryNode* next = newBinaryNode(10);
	EXPECT_EQ(10, btree_getData(binTree));
}
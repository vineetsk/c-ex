#include "gtest/gtest.h"
extern "C"{
#include "BinaryTree.h"
}
class TestBinaryNode : public testing::Test{
	public:
		BinaryNode* rootNode;
		const int nodeValue = 10;
	private:
	virtual void SetUp(void){
		rootNode = newBinaryNode(nodeValue);
	}
	
	virtual void TearDown(void){
		free(rootNode);
		commit();
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

TEST_F(TestBinaryNode, whenCheckedDataThenItIsANodeData){
	EXPECT_EQ(nodeValue, rootNode->data);
}

TEST_F(TestBinaryNode, whenCreatedNewNodeThenItsChildrenAreNull){
	EXPECT_EQ(NULL, rootNode->pLeftChild);
	EXPECT_EQ(NULL, rootNode->pRightChild);
}

TEST_F(TestBinaryNode, whenRootValuesIsLessThanNewNodeThenNewNodeIsStoredAsLeftChildOfRoot){
	BinaryNode* nextNode = newBinaryNode(nodeValue + 1);
	EXPECT_EQ(nextNode, rootNode->pLeftChild);
	free(nextNode);
}

TEST_F(TestBinaryNode, whenRootValuesGreaterThanNewNodeThenNewNodeIsStoredAsRightChildOfRoot){
	BinaryNode* nextNode = newBinaryNode(nodeValue - 1);
	EXPECT_EQ(nextNode, rootNode->pRightChild);
	free(nextNode);
}
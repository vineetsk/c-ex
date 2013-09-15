#ifndef __BinaryNode_H
#define __BinaryNode_H
typedef struct BinNode{
	int data;
	struct BinNode* pLeftChild;
	struct BinNode* pRightChild;
}BinaryNode;

BinaryNode* newBinaryNode(int data);
void commit(void);
#endif

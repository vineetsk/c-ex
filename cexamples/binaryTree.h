#ifndef __BinaryNode_H
#define __BinaryNode_H
typedef struct _Tag{
	int data;
}BinaryNode;

BinaryNode* newBinaryNode(int data);
int btree_getData(BinaryNode* pbTree);
#endif

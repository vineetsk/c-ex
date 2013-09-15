#include "BinaryTree.h"
#include <stdlib.h>

BinaryNode* newBinaryNode(int data){
	BinaryNode* btree = (BinaryNode*)malloc(sizeof(BinaryNode));
	btree->data = data;
	return btree;
}

int btree_getData(BinaryNode* pbTree){
	return pbTree->data;
}
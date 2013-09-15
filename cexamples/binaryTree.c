#include "BinaryTree.h"
#include <stdlib.h>
static BinaryNode* currentNode = NULL;

void commit(void){
	currentNode = NULL;
}

BinaryNode* newBinaryNode(int data){
	BinaryNode* btree = (BinaryNode*)calloc(1, sizeof(BinaryNode));
	btree->data = data;
	if(NULL == currentNode){
		currentNode = btree;
	}
	else{
		currentNode->pLeftChild = btree;
		if(currentNode->data > data){
			currentNode->pRightChild = btree;
		}
	}
	return btree;
}

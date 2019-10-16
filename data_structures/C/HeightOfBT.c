/*Problem Statement:Height of a binary tree is defined as the maximum number of edges encountered on any path from the root node till a leaf node.Find height of the BTree */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
struct TreeNode {
	int x;
	struct TreeNode* L;
	struct TreeNode* R;
};
struct TreeNode* insert( struct TreeNode* root, int x ) {
	if(root == NULL) {
		struct TreeNode* node = (struct TreeNode*)malloc(sizeof(struct TreeNode));
		node->x = x;
		node->L = NULL;
		node->R= NULL;
		return node;
	} 
	else {
		struct TreeNode* cur;if(x <= root->x) {
		cur = insert(root->L, x);
		root->L = cur;
	}
       	else 
	{
		cur = insert(root->R, x);
		root->R = cur;
	}
	return root;
	}
}
int height(struct TreeNode* root){
	if(!root)
	return 0;

else if(!root->L && !root->R)
	return 0;

return (1+ (height(root->L)>height(root->R)?height(root->L):height(root->R)) );
}
int main() {

	struct TreeNode* root = NULL;
	int t;
	int x;
	scanf("%d", &t);
	while(t-- > 0) {
		scanf("%d", &x);
		root = insert(root, x);
	}
	printf("%d",height(root));
return 0;
}

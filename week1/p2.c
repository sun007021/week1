//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//
//typedef struct Node {
//	int data;
//	struct Node* left;
//	struct Node* right;
//}Node;
//
//
//Node* createNode(int e) {
//	Node* node = malloc(sizeof(Node));
//	if (node == NULL) {
//		return NULL;
//	}
//	node->data = e;
//	node->left = NULL;
//	node->right = NULL;
//	return node;
//}
//
//void insertNode(Node* root, int parent, int left, int right) {
//	if (root->data == parent) {
//		if (left != 0 && !root->left) {
//			root->left = createNode(left);
//		}
//		if (right != 0 && !root->right)
//		{
//			root->right = createNode(right);
//		}
//	}
//	else {
//		if (root->left != NULL) {
//			insertNode(root->left, parent, left, right);
//		}
//		if (root->right != NULL) {
//			insertNode(root->right, parent, left, right);
//		}
//	}
//}
//
//void search(Node* root, char* path) {
//	int len = strlen(path);
//	printf(" %d", root->data);
//	for (int i = 0; i < len; i++) {
//		if (path[i] == 'R') {
//			root = root->right;
//		}
//		else {
//			root = root->left;
//		}
//		printf(" %d", root->data);
//	}
//	printf("\n");
//}
//
//void freeAll(Node* root) {
//	if (!root) return;
//	freeAll(root->left);
//	freeAll(root->right);
//	free(root);
//}
//int main() {
//	Node* root;
//	int n;
//	scanf("%d", &n);
//
//	int v, lc, rc;
//	scanf("%d %d %d", &v, &lc, &rc); //root
//	root = createNode(v);
//	insertNode(root, v, lc, rc);
//	for (int i = 0; i < n-1; i++) {
//		int v, lc, rc;
//		scanf("%d %d %d", &v, &lc, &rc);
//		insertNode(root, v, lc, rc);
//	}
//
//	scanf("%d", &n); //Å½»ö È½¼ö
//	char path[100];
//	for (int i = 0; i < n; i++) {
//		scanf("%s", path);
//		search(root, path);
//	}
//
//	freeAll(root);
//	return 0;
//}
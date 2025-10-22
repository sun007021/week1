//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	struct Node* next;
//	int key;
//}Node;
//
//Node* createNode(int key) {
//	Node* node = malloc(sizeof(Node));
//	if (!node) {
//		return;
//	}
//	node->key = key;
//	node->next = NULL;
//	return node;
//}
//Node* partition(Node* head,  int k) {
//	Node* p = head;
//	for (int i = 1; i < k && p != NULL; i++) {
//		p = p->next;
//	}
//	Node* L2 = p->next;
//	p->next = NULL;
//	return L2;
//}
//
//Node* merge(Node* L1, Node* L2) {
//	Node dummy;
//	Node* tail = &dummy;
//	dummy.next = NULL;
//
//	while (L1 && L2) {
//		if (L1->key <= L2->key) {
//			tail->next = L1;
//			L1 = L1->next;
//		}
//		else {
//			tail->next = L2;
//			L2 = L2->next;
//		}
//		tail = tail->next;
//	}
//	tail->next = (L1) ? L1 : L2;
//	return dummy.next;
//}
//Node* mergeSort(Node* head, int n) {
//	if (n <= 1) return head;
//	Node* L1 = head;
//	Node* L2 = partition(head, (n / 2));
//	L1 =mergeSort(L1, n / 2);
//	L2 = mergeSort(L2, n - n / 2);
//	return merge(L1, L2);
//}
//
//void print(Node* head) {
//	while (head) {
//		printf(" %d", head->key);
//		head = head->next;
//	}
//	printf("\n");
//}
//
//void freeAll(Node* head) {
//	while (head) {
//		Node* node = head->next;
//		free(head);
//		head = node;
//	}
//}
//int main() {
//	int n;
//	int k;
//	scanf("%d", &n);
//	
//	scanf("%d", &k);
//	Node* head = createNode(k);
//	Node* prevNode = head;
//	for (int i = 0; i < n-1; i++) {
//		scanf("%d", &k);
//		Node* node = createNode(k);
//		node->next = NULL;
//		prevNode->next = node;
//		prevNode = node;
//	}
//
//	Node *node = mergeSort(head, n);
//
//	print(node);
//	freeAll(node);
//	return 0;
//}
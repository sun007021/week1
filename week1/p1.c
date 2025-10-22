//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//typedef struct Node {
//	char elem;
//	struct Node* prev;
//	struct Node* next;
//}Node;
//
//typedef struct DList {
//	Node* header;
//	Node* trailer;
//	int size;
//}DList;
//
//Node* createNode(char e) {
//	Node* node = malloc(sizeof(Node));
//	if (node == NULL) {
//		return NULL;
//	}
//	node->elem = e;
//	node->prev = NULL;
//	node->next = NULL;
//	return node;
//}
//
//DList* initList() {
//	DList* list = malloc(sizeof(DList));
//	if (list == NULL) {
//		return NULL;
//	}
//
//	Node* header = createNode('0');
//	Node* trailer = createNode('0');
//	list->header = header;
//	list->trailer = trailer;
//	header->next = trailer;
//	header->prev = NULL;
//	trailer->next = NULL;
//	trailer->prev = header;
//	list->size = 0;
//	return list;
//}
//void add(DList* list, int r, char e) {
//	Node* startNode = list->header;
//	for (int i = 0; i < r-1; i++) {
//		startNode = startNode->next;
//	}
//	Node* newNode = createNode(e);
//	newNode->next = startNode->next;
//	startNode->next->prev = newNode;
//	newNode->prev = startNode;
//	startNode->next = newNode;
//	list->size++;
//}
//
//void delete(DList* list, int r) {
//	Node* node = list->header;
//	for (int i = 0; i < r; i++) {
//		node = node->next;
//	}
//	node->next->prev = node->prev;
//	node->prev->next = node->next;
//	free(node);
//	list->size--;
//}
//
//char get(DList* list, int r) {
//	Node* node = list->header;
//	for (int i = 0; i < r; i++) {
//		node = node->next;
//	}
//	return node->elem;
//}
//
//void print(DList* list) {
//	Node* node = list->header->next;
//	for (int i = 0; i < list->size; i++) {
//		printf("%c", node->elem);
//		node = node->next;
//	}
//	printf("\n");
//}
//
//void freeAll(DList* list) {
//	int listSize = list->size;
//	for (int i = 0; i < listSize; i++) {
//		delete(list, 1);
//	}
//	free(list->header);
//	free(list->trailer);
//	free(list);
//}
//int main() {
//
//	DList* list = initList();
//	int n, r;
//	char e;
//	scanf("%d", &n);
//
//	for (int i = 0; i < n; i++) {
//		char command;
//		scanf(" %c", &command);
//		if (command == 'A') {
//			scanf("%d %c", &r, &e);
//			if (r > list->size + 1) {
//				printf("invalid position\n");
//				continue;
//			}
//			add(list, r, e);
//		}
//		else if (command == 'D') {
//			scanf("%d", &r);
//			if (r > list->size) {
//				printf("invalid position\n");
//				continue;
//			}
//			delete(list, r);
//		}
//		else if (command == 'G') {
//			scanf("%d", &r);
//			if (r > list->size) {
//				printf("invalid position\n");
//				continue;
//			}
//			printf("%c\n",get(list, r));
//		}
//		else {
//			print(list);
//		}
//	}
//
//	freeAll(list);
//	return 0;
//}
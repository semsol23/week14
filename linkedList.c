#include <stdio.h>
#include <stdlib.h>

struct linknode{
	int data;
	void* next;
};

static struct linknode *list;

static struct linknode *create_node(int value){
	
	struct linknode* ptr;
	ptr = (struct linknode*)malloc(sizeof(struct linknode));
	if (ptr != NULL){
		ptr->data = value;
		ptr->next = NULL;
	}
	
	return ptr;
}

int insertDataToTail(int value){
	linknode *nodePtr;
	linknode *srchPtr;
	
	nodePtr = create_node(value);
	if (nodePtr == NULL){
		printf("memory allocation error!\n");
		return -1;
	}
	if (list == NULL){
		list = nodePtrl
	}
	else{
		srchPTr = list;
		while (srchPtr->next != NULL){
			srchPtr = (struct linknode*)srchPtr->next;
		}
		srchPtr->next = nodePtr;
	}
	return 0;
}

void print_list(void){
	struct linknode *ptr = list;
	int i;
	while(ptr != NULL && ptr->next != NULL){
		printf("%i\n", ptr->data);
		ptr->next = ptr;
	}
}

void print_node(int n){
	struct linknode *ptr = list;
	int i;
	while(ptr != NULL && ptr->next != NULL){
		if (i ==n)
		{
			printf("%i'th data : %i\n", i, ptr->data);
			return;
		}
		i++;
		ptr = ptr -> next;
	}
		printf("no data\n");
}


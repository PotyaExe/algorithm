#include <stdio.h>
#include <stdlib.h>

typedef struct NODE {
	struct NODE *left;
	int value;
	struct NODE *right;
} NODE;

void addNode(NODE **p, int data);
NODE *myAllocNode(int data);
int myDeleteNode(NODE **p, int data);
NODE **mySearchNode(NODE **p, int data);
NODE **mySearchMaxNodeinLeftPart(NODE **p);
void preorder(NODE *p);
void inorder(NODE *p);
void postorder(NODE *p);


int main(void)
{
	NODE *root;
	int data;

	printf("\nNow You can make Binary Tree with inserting data!\n");
	printf("And you will finish making bTree if you input 0 or negative integer!\n");

	printf("\nInput data : ");
	scanf("%d", &data);
	while ( data > 0 ) {
		addNode(&root, data);
		printf("Input data : ");
		scanf("%d", &data);
	}
	//printf("\nYou've finished making bTree, so now we show you the data with 3 orders\n");

	printf("preorder : ");
	preorder(root);
	printf("\ninorder : ");
	inorder(root);
	printf("\npostorder : ");
	postorder(root);
	
	printf("\n\nNext, you can search the data you want to delete!\n");
	printf("Input data : ");
	scanf("%d", &data);

	if (myDeleteNode(&root, data)) {
		printf("preorder : ");
		preorder(root);
		printf("\ninorder : ");
		inorder(root);
		printf("\npostorder : ");
		postorder(root);
		printf("\n");
	}
	
	return 0;
}
 
void addNode(NODE **p, int data)
{
	while (*p != NULL) {
		if ( data > (*p)->value ) {
			p = &(*p)->right;
		} else {
			p = &(*p)->left;
		}
	}

	*p = myAllocNode(data);
}

NODE *myAllocNode(int data)
{
	NODE *p = (NODE *)malloc(sizeof(NODE));
	
	p->value = data;
	p->left = p->right = NULL;
	
	return p;
}

int myDeleteNode(NODE **p, int data)
{
	NODE **pDelete;
	NODE *q;
	NODE **pMaxNode;
	NODE *tmp;
	
	pDelete = mySearchNode(p, data);
	if (pDelete != NULL) {
		q = *pDelete;
		if ( (*pDelete)->left == NULL && (*pDelete)->right == NULL ) {
		  
			*pDelete = NULL;
			//printf("\nThis is the leef you want to delete!\n"); 

		} else if ( (*pDelete)->left == NULL || (*pDelete)->right == NULL) {

		       if ((*pDelete)->left == NULL) {
			        *pDelete = (*pDelete)->right;
			} else {
			        *pDelete = (*pDelete)->left;
			}
			//printf("\nThis is not the leef pattern 1 you want to delete!\n"); 
		
		} else {
			//You cna write program here!

		}
		free(q);
		return 1;	 // Deleting Node has done.
	} else {
		printf("\nWe can not find the data you want to delete!\nSo we don't show you the data again!\nBye!\n\n");
		return 0;
	}
}

NODE **mySearchNode(NODE **p, int data)
{
	while (*p != NULL) {
    		if ((*p)->value == data){
      			return p;
    		} else if ((*p)->value > data) {
      			p = &(*p)->left;
    		} else { // p->value < data
      			p = &(*p)->right;
    		}
  	}
	return NULL;
}

NODE **mySearchMaxNodeinLeftPart(NODE **p)
{
	while ((*p)->right != NULL) {
    		p = &(*p)->right;
    	}
	return p;
}

void preorder(NODE *p)
{
	if ( p != NULL) {
		printf("%d ", p->value);
		preorder( p->left );
		preorder( p->right );
	}
}

void inorder(NODE *p)
{
	if ( p != NULL) {
		inorder( p->left );
		printf("%d ", p->value);
		inorder( p->right );
	}
}

void postorder(NODE *p)
{
	if ( p != NULL) {
		postorder( p->left );
		postorder( p->right );
		printf("%d ", p->value);
	}
}


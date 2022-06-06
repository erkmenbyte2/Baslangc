#include <stdio.h>
#include <stdlib.h>

struct node {
	
	int data;
	struct node * next;
};
struct node * temp=NULL;
struct node * top = NULL;


void push(int veri) {
	//oluşturma
	struct node * elaman= (struct node *)malloc(sizeof(struct node));
	elaman->data=veri;
	
	if(top==NULL) {
		top=elaman;
		top->next;
	}
	else {
		elaman->next=top;
		top=elaman;
	}
}
void pop()
{
	if(top==NULL)
	printf("Bu bos");
	else 
	{
		printf("%d elamanı stactekn çıkarıldı \n",top->data);
		temp=top->data;
		free(top);
		top=temp;
	}
}
void print() {
	if(top==NULL) {
	
	printf("Bu bos");
    }
	else 
	{
		temp=top;
		while(temp!=NULL) {
			temp=temp->next;
			printf("%d",temp->data);
			
		}
	}

}
int main() {
	
	push(5);
	
	return 0;
}

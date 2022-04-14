#include <stdio.h>
#include <stdlib.h>

struct node {
    int ele;
    struct node *next;
};


void print_linked_list(struct node *p) {
  printf("\n");

  int index = 0;

  while (p->next != NULL) {
      printf("%d",p->ele);
      
    
    p = p->next;
    index ++;
  }

  printf("\n\n");
}


struct node create_linked_list( )
{

  struct node *head = malloc(sizeof(struct node));
  struct node *prev = malloc(sizeof(struct node));

  char ch;


  printf("Press x to exit\n");       


  while(1)
  {

    struct node *_node = malloc(sizeof(struct node));

    printf("ele");
    scanf("%d", &_node->ele);

    prev->next = _node;
    _node->next = NULL;

    prev = _node;

    if( head->next == NULL)
      head = _node;

    scanf("%c",&ch);

    if(ch=='x'|| ch=='X'){
      print_linked_list(head);

      return *head;

    }
  }  
}

void delete_node(struct node *p){
    int index = 0;
    int node_ele = 6;
    struct node *del_node;
    while(p->next!=NULL){
        if(index==node_ele-2){
            del_node=p->next;
            p->next=p->next->next;
            free(del_node);
        }
    p = p->next;
    index ++;
    }
}


int main() {
  int n;
  printf("enter the no. of linked list elements");
  scanf("%d",&n);
  printf("enter linked list");
  struct node list= create_linked_list();
  delete_node(&list);
  print_linked_list(&list);
}


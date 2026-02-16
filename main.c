#include "linked_list.h"

#include <stdio.h>

int main()
{
	node_int* root = create_list_node(1);

	list_insert(&root, 3, LIST_END);
	list_insert(&root, 4, 1);
  list_insert(&root, 2, LIST_END);
	list_insert(&root, 5, LIST_END);
	print_list(root);
  
  node_int* middle = list_middle(root);
  printf("Middle: %d\n", middle->data);

	root = list_reverse(root);
	print_list(root);

	node_int* root2 = create_list_node(1);

	list_insert(&root2, 3, LIST_END);
	list_insert(&root2, 4, 1);
  list_insert(&root2, 2, LIST_END);
	list_insert(&root2, 5, LIST_END);
	print_list(root2);

  node_int* linked_num1 = number_to_list(6769); 
  print_list(linked_num1);
  node_int* linked_num2 = number_to_list(6769); 
  print_list(linked_num2);

  node_int* linked_sum = add_linked_numbers(linked_num1, linked_num2);
  print_list(linked_sum);
}

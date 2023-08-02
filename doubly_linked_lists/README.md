# Doubly Linked Lists

## Introduction

A doubly linked list is a type of linked list data structure that extends the capabilities of a singly linked list by providing each node with two pointers instead of one. These pointers, traditionally named "prev" and "next," allow the list to be traversed in both forward and backward directions. Each node in a doubly linked list contains three parts: data, a pointer to the next node, and a pointer to the previous node.

#### How to Use Doubly Linked Lists?

Doubly linked lists are useful when you need to traverse a list in both directions, either forward or backward. The presence of the "prev" pointers makes it easier to perform operations like reverse traversals, insertions, and deletions.

Here's a simple step-by-step guide on how to use doubly linked lists:

Define a structure for the doubly linked list node, which includes data and two pointers: "prev" and "next."

```
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

```

Perform various operations on the list using the provided functions. Common operations include adding nodes at the beginning or end of the list, printing the elements, finding the number of elements, deleting nodes, and so on.

#### [1. Function that prints all the elements of a doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/0-print_dlistint.c)

*Function Signature:*

```
size_t print_dlistint(const dlistint_t *h);
```

*Description:*

This function is used to print all the elements of a doubly linked list starting from the head node and moving towards the tail of the list. It iterates through the list using the "next" pointers, printing the data in each node until it reaches the end.

#### [2. Function that returns the number of elements in a doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/1-dlistint_len.c)

*Function Signature:*

```
size_t dlistint_len(const dlistint_t *h);
```

*Description:*

The countElements function calculates and returns the total number of nodes in the doubly linked list. It iterates through the entire list using the "next" pointers, incrementing a counter for each node encountered until it reaches the end.

#### [3. Function that adds a new node at the beginning of a doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/2-add_dnodeint.c)

*Function Signature:*

```
dlistint_t *add_dnodeint(dlistint_t **head, const int n);

```
*Description:*

This function is used to insert a new node at the beginning of the doubly linked list. It takes a pointer to the head pointer (to update the head) and the data for the new node. The function creates a new node, sets its data, and updates the pointers of the new node and the previous head accordingly.

#### [4. Function that adds a new node at the end of a doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/3-add_dnodeint_end.c)

*Function Signature:*


```
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
```
*Description:*

The function is used to append a new node at the end of the doubly linked list. It takes a pointer to the head pointer and the data for the new node. The function creates a new node, sets its data, and appends it to the end of the list by updating the next pointer of the last node and the previous pointer of the new node.

#### [5. Function that frees a doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/4-free_dlistint.c)

*Function Signature:*

```
void free_dlistint(dlistint_t *head);
```
*Description:*

The function is used to deallocate the memory used by all the nodes in the doubly linked list. It takes a pointer to the head pointer (to update the head to NULL after freeing all nodes) and traverses the list. For each node, it frees the memory occupied by the node.

#### [6. Function that returns the nth node in the doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/5-get_dnodeint.c)

*Function Signature:*
```
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
```
*Description:*

The function takes the head pointer of the doubly linked list and the index of the desired node. It traverses the list until it reaches the node at the specified index and returns a pointer to that node. If the index is out of range, the function returns NULL.

#### [7. Function that returns the sum of all the data in the doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/6-sum_dlistint.c)

*Function Signature:*

```
int sum_dlistint(dlistint_t *head);
```
*Description:*

The function calculates and returns the sum of all the data values present in the doubly linked list. It traverses the entire list using the "next" pointers, accumulating the data values in a sum variable.

#### [8. Function that inserts a new node at a given position in the doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/7-insert_dnodeint.c)

*Function Signature:*

```
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);
```
*Description:*

The function is used to insert a new node with the given data at a specific index in the doubly linked list. It takes a pointer to the head pointer, the data for the new node, and the index where the new node should be inserted. The function traverses the list to find the node at the specified index and inserts the new node before it.

#### [9. Function that deletes the node at a given index in the doubly linked list](https://github.com/izabela9/holbertonschool-low_level_programming/blob/main/doubly_linked_lists/8-delete_dnodeint.c)

*Function Signature:*

```
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
```
*Description:*

The function is used to remove the node at a specific index in the doubly linked list. It takes a pointer to the head pointer, and the index of the node to be deleted. The function traverses the list to find the node at the specified index and removes it by updating the previous and next pointers of adjacent nodes.

### Conclusion

Doubly linked lists are a versatile data structure that allows bidirectional traversal and manipulation of elements. By using the provided functions, you can efficiently manage and work with doubly linked lists in your C/C++ programs.

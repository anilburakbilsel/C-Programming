#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct listitem {
	struct listitem *next;		// pointer to next item
	int data;					// some data
} LISTITEM;


int main() {
	LISTITEM *listhead, *temp;


	// first indicate that the list has nothing in it by setting it to null
	listhead = NULL;

	// now populate the list
	for (int i = 0; i < 3; i++) {
		temp = malloc(sizeof(LISTITEM));			// allocate some memory for the new list item
		temp->data = i;								// set the list item's data to the loop count so that we can see where it is in the list
		temp->next = listhead;						// this will insert at the FRONT of the list
		listhead = temp;							// and set the list head to the newly created list item
	}
	
	printf("now we are here\n");
	printf("list head data %d\n", listhead->data);
	printf("list temp data %d\n", temp->data);
	printf("address temp data %d\n", &temp);
	printf("address listhead data %d\n", &listhead);
	printf("value temp data %d\n", temp);
	printf("value listhead data %d\n", listhead);
	printf("now we are done\n");

	// now let's see what we got
	temp = listhead;								// initialize our temporary variable to the head of the list
	while (temp != NULL) {							// keep going until we've reach the end
		printf("list item: current is %p; next is %p; data is %d\n", temp, temp->next, temp->data);
		temp = temp->next;							// move to the next item in the list					
	}
	
	return 0;
}
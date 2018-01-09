// DL Deletion Operation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

//delete first item
struct node* deleteFirst()
{
	//save reference to first link
	struct node *tempLink = head;

	//if only one link
	if (head->next == NULL)
	{
		last = NULL;
	}
	else
	{
		head->next->prev = NULL;
	}

	head = head->next;

	//return the deleted link
	return tempLink;
}




int main()
{
    return 0;
}


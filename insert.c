#include "mylist.h"
#include <stdio.h>
#include <stdlib.h>

void insert(void) {
	struct ContactPoint newNode = null;
	newNode = (struct ContactPoint *) malloc(sizeof(struct ContactPoint));

	/*
		input the node's info
	*/
	newNode->schoolnumber = "20";
	newNode->name = "20";
	newNode->zip = "20";
	newNode->address = "20";

	if(start == null) {
		start = newNode;
		last = newNode;
	}
	else {
		last->next = newNode;
		last = newNode;
	}
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "mylib.h"

struct ContactPoint * start;
struct ContactPoint * last;

int main() {
	int choice;

	start = last = null;

	for(;;) {
		choice = menuSelect();

		swicth(choice) {
			case 1: insert(); break;
			case 2: delete(); break;
			case 3: display(); break;
			case 4: search(); break;
			case 5: quit(); exit(0)break;
		}
	}
	return 0;
}

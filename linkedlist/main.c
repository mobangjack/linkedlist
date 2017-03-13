/**
* Copyright (c) 2011-2016, Jack Mo (mobangjack@foxmail.com).
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

/**
* Copyright (c) 2011-2016, Jack Mo (mobangjack@foxmail.com).
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*      http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#include <stdio.h>

#include "linkedlist.h"

#define SIZE 1000
int main()
{
	LinkedList_t* list = LinkedList_Create();
	if (list == NULL) {
		return -1;
	}
	int arr[SIZE];
	for (int i = 0; i < SIZE; i++) {
		arr[i] = i;
		printf("Adding num.%d: %d ...", i, arr[i]);
		LinkedList_Add(list, &arr[i]);
		printf("Done!\n");
	}
	printf("List Size: %d", LinkedList_Size(list));
	for (int i = 0; i < SIZE; i++) {
		printf("Retriving num.%d: %d\n", i, *(int*)LinkedList_Get(list, i));
	}
	LinkedList_Destroy(list);
	while (getchar() == '\0');
	return 0;
}
#include <stdio.h>

#include "../includes/Storage.h"

void PrintMenu()
{
	printf("1. Add person\n");
	printf("2. ShowAll\n");
	printf("3. SearchByName\n");
	printf("0. Exit\n");
	printf("->");
}

void main()
{
	int choose = -1;

	while (choose != 0)
	{

		PrintMenu();
		scanf("%d", &choose);
		getchar();
		char name[MAX_NAME_LENGTH];
		int age;
		char city[MAX_CITY_LENGTH];
		switch(choose)
		{
		case 1:
			printf("Enter name->");
			scanf("%[^\n]s", name);
			printf("Enter age->");
			scanf("%d", &age);
			printf("Enter city->");
			scanf("%*c%[^\n]s", city);
			AddPerson(name, age, city);
			break;
		case 2:
			ShowAll();
			break;
		case 3:
			printf("Enter needle name->");
			scanf("%[^\n]s", name);
			SearchByName(name);
		}
	}
}


#include <stdio.h>
#include <string.h>

#include "../includes/Storage.h"

#define MAX_PERSONS_COUNT 1000

Person Persons[MAX_PERSONS_COUNT];
int Size = 0;

void AddPerson(const char* name, int age, const char* city)
{
	strcpy(Persons[Size].Name, name);
	Persons[Size].Age = age;
	strcpy(Persons[Size].City, city);

	++Size;
}

void ShowAll()
{
	printf("+------------------------------|---|--------------------+\n");
	printf("|%30s|%3s|%20s|\n","Name","Age","City");
	printf("|------------------------------|---|--------------------|\n");

	for(int i = 0; i < Size; ++i)
	{
		printf("|%30s|%3d|%20s|\n", Persons[i].Name, Persons[i].Age, Persons[i].City);
		printf("|-----------------------------|---|--------------------|\n");
	}
}
void SearchByName(const char* name)
{
	printf("+-----------------------------|---|------------------|\n");
	printf("|%30s|%3s|%20s|\n","Name","Age","City");
	printf("|-----------------------------|---|------------------|\n");

	for(int i = 0; i < Size; ++i)
	{
		if(strstr(Persons[i].Name, name)!=0)
		{
			printf("|%30s|%3d|%20s|\n",Persons[i].Name, Persons[i].Age, Persons[i].City);
			printf("|-----------------------------|---|-------------------|\n");
		}
	}
}

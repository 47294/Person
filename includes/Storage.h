#ifndef STORAGE_H
#define STORAGE_H

#define MAX_NAME_LENGTH 30
#define MAX_CITY_LENGTH 20

typedef struct _Person
{
	char Name[MAX_NAME_LENGTH];
	int Age;
	char City[MAX_CITY_LENGTH];
} Person;
void AddPerson (const char* name, int age, const char* city);
void ShowAll();
void SearchByName(const char* name);

#endif

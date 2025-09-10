#include <stdio.h>
#include <string.h>

struct Student {
	int age;
	char name[30];

	void Student::init(Student *self, int age, const char *name);
	void Student::print(const Student *self);

};

void Student::init(Student *self, int age, const char *name)
{
	self->age = age;
	strcpy(self->name, name);
}

void Student::print(const Student *self)
{
	printf("hello, i'm %s of %d years old", self->name, self->age);
}

int main()
{
	Student a;
	a.init(&a, 18, "John");
	a.print(&a);

	Student b;
	b.init(&b, 18, "Ben");
	b.print(&b);
	
	return 0;
}
#include <stdio.h>
#include <string.h>

typedef struct s_student {
	int age;
	char name[30]; 
} t_student;
void student_init(t_student *self, int age, const char *name)
{
	self->age = age;
	strcpy(self->name, "John");
}
void student_print(t_student *self)
{
	printf("hello, I'm  %s , my age is %d\n", self->name, self->age);
}
int main()
{
	t_student a;
	student_init(&a, 18, "John");
	student_print(&a);

	t_student b;
	student_init(&b, 28, "Ben");
	student_print(&b);
	return 0;
}
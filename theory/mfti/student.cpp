#include <iostream>
#include <cstring>

struct Student {
    int age;
    char name[30];

    void init(int age, const char *name);
    void print() const;
};

void Student::init(int age, const char *name) {
    this->age = age;
    std::strcpy(this->name, name);
}

void Student::print() const {
    std::cout << "Hello, I'm " << name << " and I'm " << age << " years old\n";
}

int main() {
    Student a;
    a.init(18, "John");
    a.print();

    Student b;
    b.init(18, "Ben");
    b.print();

    return 0;
}

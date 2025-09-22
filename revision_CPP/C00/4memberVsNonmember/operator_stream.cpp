#include <iostream>
#include <string>

// Demo: making a class printable with operator<< as a non-member

/** Operator << as a non-member:
 * 1. Operator << cant be a member of the left-hand operand when left operand is std::ostream
 */

class Person
{
    private:
        std::string name;
        int age;
    public:
        Person(const std::string& n, int a) : name(n), age(a) {}
        // provide getters
        const std::string& getName() const { return name; }
        int getAge() const { return age; }
};

// operator<< implemented as a non-member function
std::ostream& operator<<(std::ostream& os, const Person& p)
{
    os << p.getName() << ", age " << p.getAge();
    return os;
}

int main() {
    Person p("Alice", 30);
    std::cout << p << std::endl;
    return 0;
}

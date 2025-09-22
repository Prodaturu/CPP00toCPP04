#include <iostream>
#include <string>

class Pet {
    std::string name;
    static int instanceCount;
public:
    Pet(const std::string& n) : name(n) { ++instanceCount; }
    ~Pet() { --instanceCount; }
    static int getInstanceCount() { return instanceCount; }
    void print() const { std::cout << "Pet: " << name << "\n"; }
};

int Pet::instanceCount = 0;

int main() {
    std::cout << "Instances: " << Pet::getInstanceCount() << "\n";
    Pet a("A");
    std::cout << "Instances: " << Pet::getInstanceCount() << "\n";
    {
        Pet b("B");
        Pet c("C");
        std::cout << "Instances inside block: " << Pet::getInstanceCount() << "\n";
    }
    std::cout << "Instances after block: " << Pet::getInstanceCount() << "\n";
    return 0;
}

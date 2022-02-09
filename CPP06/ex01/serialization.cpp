#include <iostream>

struct Data
{
    std::string     name;
    unsigned int    age;
    float           height;
};

uintptr_t serialize(Data* ptr)
{
    return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
    return reinterpret_cast<Data *>(raw);
}

int main()
{
    Data* test = new Data();
    uintptr_t address;

    test->name = "Pippo";
    test->age = 37;
    test->height = 1.7f;

    std::cout << "name: " << test->name << std::endl;
    std::cout << "age: " << test->age << std::endl;
    std::cout << "height: " << test->height << std::endl;
    std::cout << "Data address: " << test << std::endl;

    address = serialize(test);
    std::cout << "serialization address = " << &address << std::endl;
    Data *copy = deserialize(address);

    std::cout << "Copy address: " << copy << std::endl;
    std::cout << "name: " << copy->name << std::endl;
    std::cout << "age: " << copy->age << std::endl;
    std::cout << "height: " << copy->height << std::endl;
    return 0;
}

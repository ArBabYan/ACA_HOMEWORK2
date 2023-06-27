#include <iostream>


class Animal {
public:
    Animal() {
        std::cout << "Animal constructor" << std::endl;
    }
    virtual ~Animal() {
        std::cout << "Animal destuctor" << std::endl;

    }
};

class Water :virtual public Animal {
public:
    Water() {
        std::cout << "Water constructor" << std::endl;

    }

    ~Water()override {
        std::cout << "Water destructor" << std::endl;

    }
        
};

class Terrestrial :virtual public Animal {
public:
    Terrestrial() {
        std::cout << "Terrestrial constructor" << std::endl;

    }

    ~Terrestrial ()override {
        std::cout << "Terrestrial destructor" << std::endl;

    }
};

class Amphibian :public Water, public Terrestrial {
public:
    Amphibian() {
        std::cout << "Amphibian constructor" << std::endl;

    }

    ~Amphibian()override {
        std::cout << "Amphibian destructor" << std::endl;

    }

};

int main()
{
    Animal* A = new Amphibian;
    delete A;
    
    return 0;
}

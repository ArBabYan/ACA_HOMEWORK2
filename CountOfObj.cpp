#include <iostream>




class Animal {
    static int count;
public:
    Animal() {
        std::cout << "Animal constructor" << std::endl;
        count++;
    }
    virtual ~Animal() {
        std::cout << "Animal destuctor" << std::endl;

    }
    static int CountOfObj() {
        return count;
    }
   

};
int Animal::count;

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

    ~Terrestrial()override {
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
    Animal a, b, c, d, e, f;
    Terrestrial g, h, i, j, k, l;
    int cnt;
    cnt = Animal::CountOfObj();
    std::cout << "Count of obj = " << cnt << std::endl;
}


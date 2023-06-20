#include <iostream>



class Animal {
public:
	bool heart;
	bool brain;
	bool blood;
	int cell;
	int  eyes;
	bool move;
	bool sound;
	bool breahting;

	

	virtual void NameOfAnimal() {
		std::cout << "I'm an animal" << std::endl;
	}
	virtual void WayOfMoveing() {
		std::cout << "I can move " << std::endl;
	}
};

class Mammal :public Animal {
public:
	int foot;
	int tale;
	int nose;
	bool UnicBirthProcces;
	int tooth;
	int tongue;

	void NameOfAnimal() {
		std::cout << "I'm a mammal" << std::endl;
	}
	void WayOfMoveing() override {
		std::cout << "I'm walking " << std::endl;
	}
};

class Birds :public Animal {
public:
	int wings;
	int beak;
	bool EggBirthProcess;
	int feather;

	void NameOfAnimal() {
		std::cout << "I'm a bird" << std::endl;

	}
	void WayOfMoveing() override {
		std::cout << "I'm flying " << std::endl;
	}
};

class Fish :public Animal {
public:
	int tooth;
	int tale;
	int echolocator;
	int fin;
	bool eggSpawning;

	void NameOfAnimal() {
		std::cout << "I'm a fish" << std::endl;

	}
	void WayOfMoveing() override {
		std::cout << "I'm sweeming " << std::endl;
	}
};

class Dog :public Mammal {
public:
	bool barking = true;
	bool gender;

	void NameOfAnimal() {
		std::cout << "I'm a dog" << std::endl;

	}
	void WayOfMoveing() override final {
		std::cout << "I'm walking " << std::endl;
	}
};

class Cat :public Mammal {
public:
	bool gender;
	bool catNoise;

	void NameOfAnimal() {
		std::cout << "I'm a cat" << std::endl;

	}
	void WayOfMoveing() override final {
		std::cout << "I'm walking " << std::endl;
	}
};

class Ara :public Birds {
public:
	bool Repeating;
	int color;

	void NameOfAnimal() {
		std::cout << "I'm an ara" << std::endl;

	}
	void WayOfMoveing() override final {
		std::cout << "I'm flying " << std::endl;
	}
};

class Eagle :public Birds {
public:
	bool Hunting;
	bool GreateVision;

	void NameOfAnimal() {
		std::cout << "I'm an eagle" << std::endl;

	}
	void WayOfMoveing() override final {
		std::cout << "I'm flying " << std::endl;
	}
};

class Salmon :public Fish {
public:
	bool LivesInRiver;
	bool DiesAfterEggSpawning;


	void NameOfAnimal() {
		std::cout << "I'm a salmov" << std::endl;

	}
	void WayOfMoveing() override final {
		std::cout << "I'm sweeming " << std::endl;
	}
};

class SlopeFish :public Fish {
public:
	bool Poisonous;
	bool StrickesElecro;

	void NameOfAnimal() {
		std::cout << "I'm a slopyfish" << std::endl;

	}
	void WayOfMoveing() override final {
		std::cout << "I'm sweeming " << std::endl;
	}
};




int main()
{
	Animal animal;
	Mammal mammal;
	Birds bird;
	Fish fish;
	Dog dog;
	Cat cat;
	Ara ara;
	Eagle eagle;
	Salmon salmon;
	SlopeFish slopeFish;

	animal.NameOfAnimal();
	animal.WayOfMoveing();

	mammal.NameOfAnimal();
	mammal.WayOfMoveing();

	bird.NameOfAnimal();
	bird.WayOfMoveing();

	fish.NameOfAnimal();
	fish.WayOfMoveing();

	dog.NameOfAnimal();
	dog.WayOfMoveing();

	cat.NameOfAnimal();
	cat.WayOfMoveing();

	ara.NameOfAnimal();
	ara.WayOfMoveing();

	eagle.NameOfAnimal();
	eagle.WayOfMoveing();

	salmon.NameOfAnimal();
	salmon.WayOfMoveing();

	slopeFish.NameOfAnimal();
	slopeFish.WayOfMoveing();

	return 0;

}

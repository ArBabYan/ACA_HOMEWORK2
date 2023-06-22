

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


	virtual void NameOfAnimal() = 0;
	virtual void WayOfMoveing() = 0;
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

	Animal* mammal = new Mammal();
	Animal* birds = new Birds();
	Animal* fish = new Fish();
	Animal* dog = new Dog();
	Animal* cat = new Cat();
	Animal* ara = new Ara();
	Animal* eagle = new Eagle();
	Animal* salmon = new Salmon();
	Animal* slopefiish = new SlopeFish();



	mammal->NameOfAnimal();
	mammal->WayOfMoveing();
	birds->NameOfAnimal();
	birds->WayOfMoveing();
	fish->NameOfAnimal();
	fish->WayOfMoveing();
	dog->NameOfAnimal();
	dog->WayOfMoveing();
	cat->NameOfAnimal();
	cat->WayOfMoveing();
	ara->NameOfAnimal();
	ara->WayOfMoveing();
	eagle->NameOfAnimal();
	eagle->WayOfMoveing();
	salmon->NameOfAnimal();
	salmon->WayOfMoveing();
	slopefiish->NameOfAnimal();
	slopefiish->WayOfMoveing();


	delete mammal;
	delete birds;
	delete fish;
	delete dog;
	delete cat;
	delete ara;
	delete eagle;
	delete salmon;
	delete slopefiish;


}


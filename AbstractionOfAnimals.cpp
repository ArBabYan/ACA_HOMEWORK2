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
};

class Mammal :public Animal {
public:
	int foot;
	int tale;
	int nose;
	bool UnicBirthProcces;
	int tooth;
	int tongue;
};

class Birds :public Animal {
public:
	int wings;
	int beak;
	bool EggBirthProcess;
	int feather;
};

class Fish :public Animal {
public:
	int tooth;
	int tale;
	int echolocator;
	int fin;
	bool eggSpawning;
};

class Dog :public Mammal {
public:
	bool barking = true;
	bool gender;
};

class Cat :public Mammal {
public:
	bool gender;
	bool catNoise;
};

class Ara :public Birds {
public:
	bool Repeating;
	int color;
};

class Eagle :public Birds {
public:
	bool Hunting;
	bool GreateVision;
};

class Salmon :public Fish {
public:
	bool LivesInRiver;
	bool DiesAfterEggSpawning;
};

class SlopeFish :public Fish {
public:
	bool Poisonous;
	bool StrickesElecro;
};



int main()
{
	

}

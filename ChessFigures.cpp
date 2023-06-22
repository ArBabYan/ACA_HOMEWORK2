#include <iostream>

class ChessFigure {
public:
	std::string name;
	std::string color;
	ChessFigure() {

	}
	virtual void Move() = 0;

	virtual ~ChessFigure() {
	}
};

class King : public ChessFigure {
public:
	King(std::string FigureColor) {
		name = "King";
		color = FigureColor;
	}

	void Move()override {
		std::cout << "King move" << std::endl << std::endl;
	}
	~King()override {
	}
};

class Queen : public ChessFigure {
public:
	Queen(std::string FigureColor) {
		name = "Queen";
		color = FigureColor;
	}

	void Move()override {
		std::cout << "Queen move" << std::endl << std::endl;
	}
	~Queen()override {
	}
};

class Rook : public ChessFigure {
public:
	Rook(std::string FigureColor) {
		name = "Rook";
		color = FigureColor;
	}

	void Move()override {
		std::cout << "Rook move" << std::endl << std::endl;
	}
	~Rook() override {
	}
};

class Horse : public ChessFigure {
public:
	Horse(std::string FigureColor) {
		name = "Horse";
		color = FigureColor;
	}

	void Move()override {
	}
	~Horse()override {
	}
};

class Bishop : public ChessFigure {
public:
	Bishop(std::string FigureColor) {
		name = "Bishop";
		color = FigureColor;
	}

	void Move()override {
		std::cout << "Bishop move" << std::endl << std::endl;
	}
	~Bishop()override {
	}
};

class Pawn : public ChessFigure {
public:
	Pawn(std::string FigureColor) {
		name = "Pawn";
		color = FigureColor;
	}

	void Move()override {
		std::cout << "Pawn move" << std::endl << std::endl;
	}
	~Pawn()override {
	}
};




int main()
{

	ChessFigure* King1 = new King("White");
	ChessFigure* Queen1 = new Queen("White");
	ChessFigure* Rook1 = new Rook("White");







	King1->Move();
	Queen1->Move();
	Rook1->Move();

	delete King1;
	delete Queen1;
	delete Rook1;
}

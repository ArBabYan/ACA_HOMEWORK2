#include <iostream>

class ChessFigure {
public:
    std::string name;
    std::string color;

    virtual void Move() = 0;
};

class King : public ChessFigure {
public:
    King(std::string FigureColor) {
        name = "King";
        color = FigureColor;
    }

    void Move()override {
        std::cout << "King move"<< std::endl<<std::endl;
    }
};

class Queen: public ChessFigure {
public:
    Queen(std::string FigureColor) {
        name = "Queen";
        color = FigureColor;
    }

    void Move()override {
        std::cout << "Queen move" << std::endl << std::endl;
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
};

class Horse : public ChessFigure {
public:
    Horse(std::string FigureColor) {
        name = "Horse";
        color = FigureColor;
    }

    void Move()override {
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

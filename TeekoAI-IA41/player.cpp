#include "player.h"

//Player::Player() : name(name), ia(ia)
//{

//}


Player::Player(QString name, bool ia, int id) : name(name), ia(ia), id(id), played(), pion_on_board(), previous_index(-1)
{

}

// -------------------------------------------
// ---------------- OPERATORS ----------------
// -------------------------------------------

Player& Player::operator=(const Player& pl)
{
    if ( this == &pl)	return *this;
        this->name 	= pl.name;
        this->ia    = pl.ia;
        return *this;
}


bool Player::operator== (Player &rhs)
{
    if (rhs.isIA() == this->isIA() && rhs.getName() == this->getName())
        return true;
    return false;
}



Move Player::chooseMove()
{}

// -------------------------------------------
// ----------------- SETTERS -----------------
// -------------------------------------------

void Player::setName(QString name)
{
    this->name = name;
}


void Player::setIA(bool ia)
{
    this->ia = ia;
}

void Player::setID(int id)
{
    this->id = id;
}

void Player::setPlayed(bool b)
{
    this->played = b;
}

void Player::incrementPionOnBoard()
{
    this->pion_on_board++;
}


void Player::setChosePionToMove(bool b)
{
    this->chose_pion_to_move = b;
}


void Player::setPreviousIndex(int i)
{
    this->previous_index = i;
}

// -------------------------------------------
// ----------------- GETTERS -----------------
// -------------------------------------------

QString Player::getName()
{
    std::cout << this->name.toStdString() << std::endl;
    return this->name;

}

bool Player::isIA()
{
    return this->ia;
}


int Player::getID()
{
    return this->id;
}

bool Player::hasPlayed()
{
    return this->played;
}

int Player::pionOnBoard()
{
    return this->pion_on_board;
}

bool Player::chosePionToMove()
{
    return this->chose_pion_to_move;
}

int Player::getPreviousIndex()
{
    return this->previous_index;
}

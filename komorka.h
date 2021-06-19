#pragma once
#include <string>
///@file

class Cell
{
public:

    virtual std::string pobierzString() = 0;
    virtual void ustaw(std::string Wartosc) = 0;
    virtual bool obliczalna() = 0;
};

class intCell : public Cell
{
    int Wartosc = 0;

public:
    
    std::string pobierzString();
    void ustaw(std::string Wartosc);
    bool obliczalna();
};
class stringCell : public Cell
{
    std::string Wartosc = "_";
    public:
    stringCell();
    std::string pobierzString();
    void ustaw(std::string Wartosc);
    bool obliczalna();
};
#pragma once
#include <string>
///@file

class Cell
{
public:
    virtual int pobierzWartosc() = 0;
    virtual std::string pobierzString() = 0;
    virtual void ustaw(int Wartosc) = 0;
    virtual void ustaw(std::string Wartosc) = 0;
    virtual bool obliczalna() = 0;
};

class intCell : public Cell
{
    int Wartosc = 0;

public:
    int pobierzWartosc();
    std::string pobierzString();
    void ustaw(int Wartosc);
    void ustaw(std::string Wartosc);
    bool obliczalna();
};
class stringCell : public Cell
{
    std::string Wartosc = "";
    public:
    int pobierzWartosc();
    std::string pobierzString();
    void ustaw(int Wartosc);
    void ustaw(std::string Wartosc);
    bool obliczalna();
};
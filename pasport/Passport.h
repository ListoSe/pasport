
#include <string>
#include "Date.h"

class Passport {
    std::string _fathersName;
    std::string _living;
protected:
    std::string _serial;
    int _number;
    std::string _name;
    std::string _surname;
    Date _birthday;
    std::string _birthdayPlace;
    Date _given;
public:
    Passport(const std::string& serial, int number, const std::string& name, const std::string& surname, const Date& bday, const std::string& bplace, const Date& given, const std::string& fname = "", const std::string& living = "")
    {
        _serial = serial;
        _number = number;
        _name = name;
        _surname = surname;
        _birthday = bday;
        _birthdayPlace = bplace;
        _given = given;

        _fathersName = fname;
        _living = living;
    }
};


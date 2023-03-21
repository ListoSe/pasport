
#include <vector>
#include "Passport.h"

class ForeignPassport : public Passport {
    struct Viza {
        std::string country;
        Date since;
        Date until;
    };
    std::vector<Viza> _vizas;
public:
    ForeignPassport(const std::string& serial, int number, const std::string& name, const std::string& surname, const Date& bday, const std::string& bplace, const Date& given) : Passport(serial, number, name, surname, bday, bplace, given) {}

    void AddViza(const Viza& viza)
    {
        _vizas.emplace_back(viza);
    }
};



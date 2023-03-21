#include <iostream>
#include "ForeignPassport.h"

int main() {
    ForeignPassport a("asd", 123, "P", "A", Date(), "Pla", Date());
    a.AddViza({ "PL", Date(), Date() + 200 });
    // it will be fine....
    return 0;
}

/**
 * Pair Test Driver
 * Created by: Jake Carlson
 * Date: 2017-02-08
 *
 * This drives basic testing of a templated pair class
 */

// includes
#include <iostream>
#include <string>
#include <vector>
#include "pair.h"

// main driver
int main (int argc, char* argv[])
{
    // test with matching types
    Pair<int, int> int_pair;
    int_pair.make_pair(1, 2);
    // print data payload
    std::cout << "int_pair.first: " << int_pair.get_first()
    << " | int_pair.second: " << int_pair.get_second() << std::endl;

    // test with mixed types
    std::string name = "Alice";
    std::vector<int> grades = {90, 74, 82, 96, 100};
    Pair<std::string, std::vector<int>> name_grade_pair(name, grades);
    // print data payload
    std::cout << "Name: " << name_grade_pair.get_first() << std::endl;
    for (int i = 0; i < 5; i++)
    {
        std::cout << "Test grade " << i + 1 << ": "
        << name_grade_pair.get_second()[i] << std::endl;
    }

    return 0;
}

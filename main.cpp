
#include "exercise3/file_reader.hpp"
#include <iostream>

int main() {

    file_reader reader;

    {
        auto data = reader.read("data/data.txt");
        if (data) {
            std::cout << data.value() << std::endl;
        } else {
            std::cout << "fail" << std::endl;
        }
    }

    {
        auto data = reader.read("data/data.txt");
        if (data) {
            std::cout << data.value() << std::endl;
        } else {
            std::cout << "fail" << std::endl;
        }
    }

    // TODO read the data.txt file and do something with it. I.e. print content.
    //  You may also try to split the content into a vector of individual lines.

}

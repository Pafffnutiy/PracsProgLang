// // В файле записаны 4 числа типа int32_t. Поменять местами первое и третье число.

#include <iostream>
#include <fstream>

int main()
{
    int32_t num1{1}, num3;
    std::fstream file("file.txt", std::fstream::binary | std::fstream::in | std::fstream::out);

    file.write(reinterpret_cast<char*>(&num1), 4);
    ++num1;
    file.write(reinterpret_cast<char*>(&num1), 4);
    ++num1;
    file.write(reinterpret_cast<char*>(&num1), 4);
    ++num1;
    file.write(reinterpret_cast<char*>(&num1), 4);

    file.close();

    file.open("file.txt", std::fstream::binary | std::fstream::in | std::fstream::out);

    if (!file.is_open()) return 1;

    file.read(reinterpret_cast<char*>(&num1), 4);
    file.seekg(4, std::fstream::cur);
    file.read(reinterpret_cast<char*>(&num3), 4);

    file.seekp(0, std::fstream::beg);

    file.write(reinterpret_cast<char*>(&num3), 4);
    file.seekp(4, std::fstream::cur);
    file.write(reinterpret_cast<char*>(&num1), 4);

    file.close();

    return 0;
}

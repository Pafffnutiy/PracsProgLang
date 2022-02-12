#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
//#include <cstdint>

struct Polynom {
    std::size_t deg;
    std::vector<double> coefs;

    Polynom() = default;                                        //конструктор по умолчанию

    Polynom(std::size_t d)
        :deg{ d }
    {
        for (std::size_t i{ 0 }; i < deg + 1; ++i)               // конструктор по степени полинома
            coefs.push_back(0);
    }

    Polynom(std::vector<double> v)                                 //Конструктор по коэффициентам
        :coefs{ v }
    {
        deg = v.size() - 1;
    }

    Polynom(std::size_t d, bool)                        //конструктор для полинома (x+1)^d
        : deg(d)
    {
        if (deg == 0) {
            std::vector<double> v = { 1 };
            coefs = v;
        }
        else if (deg == 1) {
            std::vector<double> v = { 1, 1 };
            coefs = v;
        }
        else if (deg == 2) {
            std::vector<double> v = { 1, 2, 1 };
            coefs = v;
        }
        else {
            Polynom P1(1, true);
            Polynom P_temp(d - 1, true);
            coefs = (P1 * P_temp).coefs;
        }
    }


    Polynom(const Polynom& P)
        :deg{ P.deg }, coefs{ P.coefs }                           //Конструткор копирования
    {}

    Polynom operator*(const Polynom& P) const//умножение полинома на полином
    {
        Polynom res(this->deg + P.deg);
        for (size_t i = 0; i < this->coefs.size(); ++i)
        {
            for (size_t j = 0; j < P.coefs.size(); ++j)
            {
                res.coefs[i + j] += this->coefs[i] * P.coefs[j];
            }
        }

        return res;
    }

    Polynom operator+(const Polynom& P) const          //Сложение полиномов 
    {
        if (this->deg > P.deg) {
            Polynom res(*this);
            for (std::size_t i{ 0 }; i < P.deg + 1; ++i)
            {
                res.coefs[i] += P.coefs[i];
            }
            return res;
        }
        else {
            Polynom res(P);
            for (std::size_t i{ 0 }; i < this->deg + 1; ++i)
            {
                res.coefs[i] += this->coefs[i];
            }
            return res;
        }
    }

    Polynom operator-(const Polynom& P) const //разность полиномов 
    {
        if (this->deg > P.deg) {
            Polynom res(*this);
            for (std::size_t i{ 0 }; i < P.deg + 1; ++i)
            {
                res.coefs[i] = this->coefs[i] - P.coefs[i];
            }
            return res;
        }
        else {
            Polynom res(P);
            for (std::size_t i{ 0 }; i < this->deg + 1; ++i)
            {
                res.coefs[i] = this->coefs[i] - P.coefs[i];
            }
            return res;
        }
    }

    Polynom operator+(int x) const   //Полином + число
    {
        Polynom res(*this);
        res.coefs[0] += x;
        return res;
    }

    Polynom operator*(double num) const //умножение справа на число
    {
        Polynom Res(*this);
        for (std::size_t i{ 0 }; i < this->coefs.size(); ++i)
        {
            Res.coefs[i] *= num;
        }
        return Res;
    }

    Polynom(const Polynom& P, bool) //конструктор для полинома P(x+1)
    {
        Polynom result(0);
        for (size_t i = 0; i < P.coefs.size(); ++i)
        {
            Polynom P_temp(i, true);
            result = result + P_temp * (P.coefs[i]);
        }
        deg = result.deg;
        coefs = result.coefs;
    }


    Polynom Reverse() const
    {
        Polynom New(*this);
        std::reverse(begin(New.coefs), end(New.coefs));                //Если потребуется иметь полином с коэффициентами от x^n до x^0.
        return New;
    }

    Polynom Derivative() const
    {
        Polynom Res(this->deg - 1);
        for (std::size_t i{ 0 }; i < Res.coefs.size(); ++i)
        {
            Res.coefs[i] = this->coefs[i + 1] * (i + 1);
        }
        return Res;
    }

};

Polynom operator+(int x, const Polynom& P) //число + Полином
{
    return P + x;
}

Polynom operator*(int num, const Polynom& P) //умножение слева на число
{
    Polynom res(P);
    for (std::size_t i{ 0 }; i < P.coefs.size(); ++i)
    {
        res.coefs[i] *= num;
    }
    return res;
}



int main()
{
    /*Polynom P({ 1,2,3 });
    Polynom Q({ -5, 2 });

    Polynom D(3*P*Q);

    for (std::size_t i{ 0 }; i < D.coefs.size(); ++i)
    {
        std::cout << D.coefs[i]<<' ';
    }

    std::cout << '\n';

    Polynom K(D.Reverse());

    for (std::size_t i{ 0 }; i < D.coefs.size(); ++i)
    {
        std::cout << K.coefs[i] << ' ';
    }*/

    /*std::string str;
    getline(std::cin, str);
    std::string numb;
    std::vector<double> vec;

    for (std::size_t i{ 0 }; i < str.size(); ++i)
    {
        if (str[i] != ' ')
        {
            numb += str[i];
        }
        else {
            vec.push_back(stod(numb));
            numb = " ";
        }

    }

    vec.push_back(stod(numb));

    Polynom P(vec);
    Polynom Q(P.Derivative());

    for (std::size_t i{ 0 }; i < Q.coefs.size(); ++i)
        std::cout << Q.coefs[i] << ' ';*/

    /*std::vector<double> vec = { 5, 1, 2, 3, 4, 5, 6, 0 };
    Polynom P1(vec);
    Polynom P2(P1, true);
    Polynom result(P2 - P1);
    /*for (std::size_t i{ 0 }; i < P1.coefs.size(); ++i)
        std::cout << P1.coefs[i] << ' ';
    std::cout << '\n';
    for (std::size_t i{ 0 }; i < P2.coefs.size(); ++i)
        std::cout << P2.coefs[i] << ' ';
    std::cout << '\n';

    result.coefs.pop_back();
    result.coefs.pop_back();
    for (std::size_t i{ 0 }; i < result.coefs.size(); ++i)
        std::cout << result.coefs[i] << ' ';
    */

    std::string str;
    getline(std::cin,str);

    std::stringstream in;
    in << str;
    double temp, a;
    std::size_t it{ 1 };
    std::vector<double> vec;
    while (in >> temp)
    {
        if (it != 2)
        {
            vec.push_back(temp);
            ++it;
        }
        else { a = temp; vec[0] *= a; ++it; }
    }    
    std::vector<double> vec1({ -a,1.0 });

    Polynom P(vec);

    Polynom Q(vec1);

    Polynom F(Q * P);

    for (std::size_t i{ 0 }; i < F.coefs.size(); ++i)
    {
        std::cout << F.coefs[i] << " ";
    }


    return 0;
}


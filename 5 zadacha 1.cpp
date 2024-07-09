#include <iostream>
#include <string>

//Класс фигура

class Figure
{
protected:
    int value = 0;
    std::string name;
public:
    Figure() : Figure(0, "Фигура") {};

    Figure(int value1, std::string name1) {
        value = value1;
        name = name1;
    }

    int get_value()
    {
        return value;
    };
    std::string get_name()
    {
        return name;
    };


};
//Класс треугольник

class Triangle :public Figure
{

public:
    Triangle() :Figure(3, "Треугольник") {};

};

//Класс четырехугольник

class Quadrangle : public Figure
{
public:
    Quadrangle() :Figure(4, "Четырехугольник") {};

};

//Функция для печати

void print(Figure& Fig)
{
    std::cout << Fig.get_name() << ":" << Fig.get_value() << std::endl;
}
int main()

{
    setlocale(LC_ALL, "rus");
    system("chcp 1251");

    Figure figure;
    print(figure);

    Triangle triangle;
    print(triangle);

    Quadrangle quadrangle;
    print(quadrangle);

}

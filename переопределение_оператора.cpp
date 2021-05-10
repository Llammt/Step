// vector.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

class Math_vector {
public:
    Math_vector(int x_x1, int x_x2, int y_y1, int y_y2);
    Math_vector& operator= (const Math_vector& c);
private:
    int x1, x2, y1, y2;

};
Math_vector::Math_vector(int x_x1, int x_x2, int y_y1, int y_y2)
{
    x1 = x_x1;
    x2 = x_x2;
    y1 = y_y1;
    y2 = y_y2;
}
//переопределение оператора присваивания
Math_vector& Math_vector::operator= (const Math_vector& c) {
    x1 = c.x1;
    x2 = c.x2;
    y1 = c.y1;
    y2 = c.y2;
    return *this;
}

int main()
{
    
}


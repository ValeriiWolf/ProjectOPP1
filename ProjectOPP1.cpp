#include <iostream>
#include <cstdint>

class Power
{
public:
    Power(float a, float b) : af(a), bf(b) {}
    void setPower(float aa, float bb) { af = aa, bf = bb; }
    float calculate(float a, float b) { return pow(af, bf); }
    void print() { std::cout << calculate(af,bf)<<std::endl; }
private:
    float af = 1.1;
    float bf = 2.1;
};

class RGBA
{
public:
    RGBA(int red, int green, int blue, int alpha) : m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {}
    void print() { std::cout << "m_red " << static_cast <int> (m_red) <<' ' << "m_green " << static_cast <int> (m_green) << ' ' << "m_blue " << static_cast <int> (m_blue) << ' ' << "m_alpha " << static_cast <int> (m_alpha) << std::endl; }
private:
    std::uint8_t m_red = 0;
    std::uint8_t m_green = 0;
    std::uint8_t m_blue = 0;
    std::uint8_t m_alpha = 255;
};

const size_t A_size = 10;

class Stack
{
public:
    //Stack() : af(), bf() {}
    void reset() {
        for (size_t i = 0; i <= A_size; i++)
        {
            Array[i] = 0;
        }
        ArrStec = 0;
    }
    bool push(int data) {
        
        if (ArrStec <= A_size) {
            Array[ArrStec++] = data;
            return true;
        }
        else {
            return false;
        }
    }
    int pop() {
        if (ArrStec != 0) {
            return Array[ArrStec--];
        }
        else {
            std::cout << "Array is empty" << std::endl;
        }
    }
    void print()	//  Функция для печати int массива
    {
        std::cout << "( ";
        for (size_t i = 0; i < ArrStec; i++)
        {
            std::cout << Array[i] << " ";
        }
        std::cout << ")"<< std::endl;
    }
private:
    int Array[A_size]{};
    int ArrStec = 0;
};

void lessons1();
void lessons2();
void lessons3();

int main()
{
    lessons1();
    lessons2();
    lessons3();

    return 0;
}

void lessons1()
{
    Power power(3.71231, 2.41231);
    float aaf;
    float bbf;
    std::cout << "enter 2 float" << std::endl;
    std::cin >> aaf >> bbf;
    power.setPower(aaf, bbf);
    power.print();
}

void lessons2()
{
    int red;
    int green;
    int blue;
    int alpha;
    std::cout << "enter 4 integer >=0 and <256" << std::endl;
    std::cin >> red >> green >> blue >> alpha;
    RGBA rgba(red, green, blue, alpha);
    rgba.print();
}

void lessons3()
{
    Stack stack;
    stack.reset();
    stack.print();

    stack.push(3);
    stack.push(7);
    stack.push(5);
    stack.print();

    stack.pop();
    stack.print();

    stack.pop();
    stack.pop();
    stack.print();
}

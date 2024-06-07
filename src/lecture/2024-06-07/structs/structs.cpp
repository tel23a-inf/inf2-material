#include<iostream>
#include<string>
#include<format>

struct Complex {
    double real;
    double img;
};

Complex add(Complex c1, Complex c2) {
    Complex result = {
        c1.real + c2.real,
        c1.img + c2.img
    };
    return result;
}

Complex operator+(Complex c1, Complex c2) {
    return add(c1, c2);
}

Complex mult(Complex c1, Complex c2) {
    Complex result = {
        c1.real * c2.real - c1.img * c2.img,
        c1.real * c2.img + c2.real * c1.img
    };
    return result;
}

Complex operator*(Complex left, Complex right) {
    return mult(left, right);
}

std::string str(Complex c) {
    return std::format("{} + {}j", c.real, c.img);
}

std::ostream & operator<<(std::ostream &left, Complex c) {
    left << str(c);
    return left;
}

int main() {

    Complex c1 = { 3, 4 }; // c1 := 3 + 4i
    Complex c2 = { 2.5, -4.75 };
    //Complex c3 = add(c1,c2);
    Complex c3 = c1 + c2;
    Complex c4 = add(c3,c1);

    std::cout << "c3 == " << str(c3) <<  std::endl;
    std::cout << "c4 == " << c4 <<  std::endl;
    std::cout << "c3 * c4 == " << c3 * c4 <<  std::endl;
    
    return 0;
}
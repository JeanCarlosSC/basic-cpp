#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int addition(int a, int b){
    return a + b;
}

int substraction(int a, int b){
    return a - b;
}

int product(int a, int b){
    return a * b;
}

double division(double a, double b){
    return a / b;
}

double power(int base, int power){
    double result = 1;
    
    for(int i = 0; i < power; i++){
        result = result * base;
    }

    return result;
}

int mod(int a, int b){
    return a % b;
}



int main(){
    int value1, value2;
    
    cout << "This program shows the result of different operations between two given integers" << endl;
    
    cout << "Enter value 1: ";
    cin >> value1;
    cout << "Enter value 2: ";
    cin >> value2;

    printf("%i  +  %i = %i\n", value1, value2, addition(value1,value2));
    printf("%i  -  %i = %i\n", value1, value2, substraction(value1,value2));
    printf("%i  x  %i = %i\n", value1, value2, product(value1,value2));
    printf("%i  /  %i = %f\n", value1, value2, division(value1,value2));
    printf("%i  ^  %i = %.0f\n", value1, value2, power(value1,value2));
    printf("%i mod %i = %i\n", value1, value2, mod(value1,value2));
}
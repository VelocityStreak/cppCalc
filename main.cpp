#include <iostream>
#include "windows.h"
#include <cmath>

float rnum;
float rnum2;
float answer;

long double trigonometry;

long  double trigTodegree;

long double result;

void add() {

    std::cout << "Please enter your first number to add: " << std::endl;
    std::cin >> rnum;

    std::cout << "Please enter your second number to add to the first: " << std::endl;
    std::cin >> rnum2;

    std::cout << "You answer is: " << rnum + rnum2 << std::endl;

    //Sleep(8000);
}

void sub() {

    std::cout << "Please enter your first number to subtract: " << std::endl;
    std::cin >> rnum;

    std::cout << "Please enter your second number to subtract to the first: " << std::endl;
    std::cin >> rnum2;

    std::cout << "Your answer is: " << rnum - rnum2 << std::endl;

    //Sleep(8000);
}

void div() {

    std::cout << "Enter the number you want to divide: " << std::endl;
    std::cin >> rnum;

    std::cout << "Enter what you want to divide by" << std::endl;
    std::cin >> rnum2;

    std::cout << "You answer is: " << rnum / rnum2 << std::endl;

    //Sleep(8000);
}

void multi() {

    std::cout << "Enter the number you want to multiply: " << std::endl;
    std::cin >> rnum;

    std::cout << "Enter the number you want to multiply by...: " << std::endl;
    std::cin >> rnum2;

    std::cout << "You answer is: " << rnum * rnum2 << std::endl;

    //Sleep(8000);
}

void sin() {
    std::cout << "What would you like to sin?" << std::endl;

    std::cin >> trigonometry;

    std::cout << "Sin(" << trigonometry << ") " << "equals: " << sin(trigonometry) << std::endl;
    result = sin(trigonometry * 3.14159 / 180);
    std::cout << "In Degrees: " << result << std::endl;
}

void cos() {
    std::cout << "What would you like to cosine?" << std::endl;

    std::cin >> trigonometry;

    std::cout << "Cos(" << trigonometry << ") " << "equals: " << cos(trigonometry) << std::endl;
    result = cos(trigonometry * 3.14159 / 180);
    std::cout << "In Degrees: " << result << std::endl;
}

void tan() {
    std::cout << "What would you like to tan?" << std::endl;

    std::cin >> trigonometry;

    std::cout << "Tan(" << trigonometry << ") " << "equals: " << tan(trigonometry) << std::endl;
    result = tan(trigonometry * 3.14159 / 180);
    std::cout << "In Degrees: " << result << std::endl;
}

int main() {

    int select;
    bool operationComplete;

    std::cout << "==========| Hi welcome to my calc! |==========" << std::endl;

    std::cout << "Please choose from the list: [0] add " << std::endl;
    std::cout << "Please choose from the list: [1] subtract " << std::endl;
    std::cout << "Please choose from the list: [2] divide " << std::endl;
    std::cout << "Please choose from the list: [3] mutliply " << std::endl;

    std::cout << "==========| Advanced Features |==========" << std::endl;

    std::cout << "Please choose from the list: [4] sin " << std::endl;
    std::cout << "Please choose from the list: [5] cos " << std::endl;
    std::cout << "Please choose from the list: [6] tan " << std::endl;

    std::cin >> select;

    switch (select) {
    case 0:
        add();
        break;
    case 1:
        sub();
        break;
    case 2:
        div();
        break;
    case 3:
        multi();
        break;
    case 4:
        sin();
        break;
    case 5:
        cos();
        break;
    case 6:
        tan();
        break;
    default:
        std::cout << "Invalid Selection" << std::endl;
    }
    /*
    std::cout << "Do you want to run the program again? Enter yes for yes no for no [lower case]" << std::endl;

    std::string askRun;

    std::cin >> askRun;

    if(askRun == "yes"){

        std::cout << "Opening calc.exe";
        system("cd C:\\Users\\mm\\Documents\\CPP RPG");
        Sleep(2000);
        system("Launcher.bat");
        Sleep(1000);
    }
    */
    std::cout << "this is a work in progress, to use calc again pls relaunch <3 | Program made by VelocityStreak" << std::endl;
    Sleep(10000);
    return 0;
}

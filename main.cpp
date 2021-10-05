#include <iostream>
#include "windows.h"

float rnum;
float rnum2;
float answer;

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

int main() {

    int select;
    bool operationComplete;

    std::cout << "==========| Hi welcome to my calc! |==========" << std::endl;

    std::cout << "Please choose from the list: [0] add " << std::endl;
    std::cout << "Please choose from the list: [1] subtract " << std::endl;
    std::cout << "Please choose from the list: [2] divide " << std::endl;
    std::cout << "Please choose from the list: [3] mutliply " << std::endl;

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
    Sleep(5000);
    return 0;
}

#include <iostream>
#include <string>
#include <conio.h>

std::string name = "";
int age;
std::string answer = "";

int main()
{
    // Getting information
    std::cout << "Hello, what is your name?\n";
    std::cin >> name;
    std::cout << "\nOkay " << name << ", how old are you?\n";
    std::cin >> age;
    std::cout << "\nNow for the most important question of all...\n";
    _getch();
    std::cout << "Do you drink coffee?\n";
    std::cin >> answer;



    // Printing information
    std::cout << "\nYour name is " << name << "\n";
    std::cout << "You are " << age << " years old\n";
    if (answer == "y" || answer == "yes" || answer == "Yes") {
        std::cout << "Seems you like coffee\n";
    }
    else if (answer == "n" || answer == "no" || answer == "No") {
        std::cout << "Oh, you don't like coffee\n";
    }
}
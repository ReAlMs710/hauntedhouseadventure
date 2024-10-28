// Neil Kumaran
// Haunted House
// 10/19/24
// Alblas
#include <iostream>
#include <string>
#include <limits>

#define RESET "\033[0m"
#define CYAN "\033[36m"   // for choices
#define YELLOW "\033[33m" // for story text
#define RED "\033[31m"    // for endings

void clearInputBuffer()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

void printEnding(const std::string &ending)
{
    std::cout << RED << ending << RESET << std::endl;
}

int main()
{
    std::cout << R"(
    _    _                 _           _   _    _                      
    | |  | |               | |         | | | |  | |                     
    | |__| | __ _ _   _ _ _| |_ ___  __| | | |__| | ___  _   _ ___  ___ 
    |  __  |/ _` | | | | '_ \ __/ _ \/ _` | |  __  |/ _ \| | | / __|/ _ \
    | |  | | (_| | |_| | | | ||  __/ (_| | | |  | | (_) | |_| \__ \  __/
    |_|  |_|\__,_|\__,_|_| |_|\__\___|\__,_| |_|  |_|\___/\__,_|___/\___|
    )" << std::endl;

    char choice;

    std::cout << CYAN << "Do you enter the haunted house?\n";
    std::cout << "1. No\n2. Yes\n" << RESET;
    std::cin >> choice;
    clearInputBuffer();  

    switch (choice)
    {
    case '1':
        printEnding("End Program");
        return 0;
    case '2':
        
        break;
    default:
        printEnding("Invalid choice. End Program.");
        return 0;
    }


    std::cout << YELLOW << "The haunted house is in OBlock, and King Von immediately pushes you down a staircase.\n\n";
    std::cout << "Do you try to fight King Von or do you run?\n" << RESET;
    std::cout << CYAN << "1. Fight Von\n2. Run away\n" << RESET;
    std::cin >> choice;
    clearInputBuffer();

    switch (choice)
    {
    case '1':
        printEnding("Von pulls out his switch and beats you up until you can't remember anything. End Program.");
        return 0;
    case '2':
        break;
    default:
        printEnding("Invalid choice. End Program.");
        return 0;
    }

    return 0;
}

// Neil Kumaran
// Haunted House
// 10/19/24
// Alblas
#include <iostream>
#include <string>
#include <limits>

// this will help define all of the colors because i hate typing it in manually n i forget
// itll tell you what each means
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
    std::string choice;

    std::cout << CYAN << "Do you enter the haunted house?\n";
    std::cout << "1. No\n2. Yes\n"
              << RESET;
    std::getline(std::cin, choice);

    if (choice == "1" || choice == "No")
    {
        printEnding("End Program");
        return 0;
    }
    else if (choice != "2" && choice != "Yes")
    {
        printEnding("Invalid choice. End Program.");
        return 0;
    }

    std::cout << YELLOW << "The haunted house is in OBlock, and King Von immediately pushes you down a staircase\n\n";
    std::cout << "Do you try to fight King Von or do you run?\n"
              << RESET;
    std::cout << CYAN << "1. Fight Von\n2. Run away\n"
              << RESET;
    std::getline(std::cin, choice);

    if (choice == "1" || choice == "Fight Von")
    {
        printEnding("Von pulls out his switch (as in nintendo switch of course) and beats you up until you can't remember anything (von would never end a life 😇). End Program");
        return 0;
    }
    else if (choice != "2" && choice != "Run away")
    {
        printEnding("Invalid choice. End Program.");
        return 0;
    }

    std::cout << YELLOW << "Von tries to hit you with his switch (as in nintendo switch) but cannot because you get too far away and has to reload his switch (with a new controller because the old one has stick drift of course)\n\n";
    std::cout << "You run into Michelle Obama, and in a moment of surprise, you BROKE, feeling a sudden FEIN of excitement.\n";
    std::cout << "(There is def not a secret option over here)\n"
              << RESET;
    std::cout << CYAN << "1. Ask Michelle Obama why she made school lunches taste bad\n";
    std::cout << "2. Ask Michelle Obama for a switch (as in a nintendo switch)\n"
              << RESET;
    std::getline(std::cin, choice);

    if (choice == "broke fein")
    {
        printEnding("SECRET BROKE FEIN ENDING");
        std::cout << YELLOW << "Flight Reacts thinks you are a chicken and eats you. Because he is so happy, he gets on 2K24, gets really mad, and then starts singing Broke Fein into his microphone, destroying the ears of everybody, including King Von. So you technically did win against Von, but you had to sacrifice\n"
                  << RESET;
        return 0;
    }
    else if (choice == "1")
    {
        printEnding("Michelle Obama makes you eat soggy carrots with dry chicken breast, you die almost instantly as it has no flavor");
        return 0;
    }
    else if (choice == "2")
    {
        std::cout << YELLOW << "Michelle Obama gives you a nintendo switch, however it has stick drift\n"
                  << RESET;
    }
    else
    {
        printEnding("Invalid choice. End Program.");
        return 0;
    }

    std::cout << YELLOW << "You now have Chief Keef's switch (as in Nintendo Switch) and you ran into T-Roy (King Vons bestie)\n"
              << RESET;
    std::cout << CYAN << "1. Try to convince T-Roy to betray King Von\n";
    std::cout << "2. Make T-roy forget everything with Chief Keef's Nintendo Switch\n"
              << RESET;
    std::getline(std::cin, choice);

    if (choice == "1")
    {
        printEnding("T-Roy says \"NAH ON FOENEM GRAVE I COULD NEVA DO THAT TO MY BABY BOY KING VON ON EVERYTHING MAN FREE DA GUYZ\" and he makes you forget everything with his nintendo switch (because nobody would ever hurt anybody) - End Program");
        return 0;
    }
    else if (choice != "2")
    {
        printEnding("Invalid choice. End Program.");
        return 0;
    }

    std::cout << YELLOW << "You get more controllers for your nintendo switch, but you pass on the opportunity to recruit T-Roy\n\n";
    std::cout << "You run into King Von again, this time you have to fight\n"
              << RESET;
    std::cout << CYAN << "1. Try to talk to von to resolve the issue\n";
    std::cout << "2. Try and fight king von\n"
              << RESET;
    std::getline(std::cin, choice);

    if (choice == "1")
    {
        std::cout << YELLOW << "Von is very understanding and you guys become friends forever. However, he DID say that Fortnite sucks.\n";
        std::cout << "He also said that Thick of It by KSI is a bad song.\n"
                  << RESET;
        std::cout << CYAN << "Do you Nintendo switch him?\n";
        std::cout << "1. Yes\n2. No\n"
                  << RESET;
        std::getline(std::cin, choice);

        if (choice == "1" || choice == "Yes")
        {
            printEnding("ANYTHING FOR MY GOAT KSI ENDING");
            std::cout << YELLOW << "He forgets everything, and nobody gets in trouble or disrespects my goat KSI. BUT you do lose a friend, but is he even a friend if he doesnt like KSI???\n"
                      << RESET;
        }
        else if (choice == "2" || choice == "No")
        {
            printEnding("KRASHOUT KING VON ENDING");
            std::cout << YELLOW << "He never plays a KSI song and destroys your console when you play fortnite, you are stuck in this state forever.\n"
                      << RESET;
        }
        else
        {
            printEnding("Invalid choice. End Program.");
        }
    }
    else if (choice == "2")
    {
        printEnding("TALK TUAH PODCAST ENDING");
        std::cout << YELLOW << "YOU WIN!!!!! However, you are forgetting things very fast, you might fall asleep soon. Von did a lot of damage to you, however, something happens. YOU GRAB YOUR PHONE AND LISTEN TO THE TALK TUAH PODCAST, AND THEN YOU SURVIVE BECAUSE ITS BEAUTIFUL\n"
                  << RESET;
    }
    else
    {
        printEnding("Invalid choice. End Program.");
    }

    return 0;
}

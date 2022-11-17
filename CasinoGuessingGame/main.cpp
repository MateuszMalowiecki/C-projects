#include <iostream>

int INITIAL_AMOUNT = 10000;
int main() 
{
    int amount = INITIAL_AMOUNT;
    std::cout << "Welcome to casino guessing number game. " << std::endl;
    while (true) 
    {
        int bet;
        std::cout << "You have now " << amount << " number of money. Please make a bet." << std::endl;
        std::cin >> bet;
        while (bet > amount) 
        {
            std::cout << "You only have " << amount << " money. Please give correct bet" << std::endl;
            std::cin >> bet;
        }
        int correctNumber = rand() % 10;
        int guessedNumber;
        std::cout << "Please give a number between 0 and 9" << std::endl;
        std::cin >> guessedNumber;
        if (guessedNumber == correctNumber)
        {
            int bettingPrice = bet * 10;
            std::cout << "Your guess was correct. You won: " << bettingPrice << " money" << std::endl;
            amount += bettingPrice;
        }
        else 
        {
            std::cout << "Sorry. The correct answer was: " << correctNumber << ". You lost " << bet << " money" << std::endl;
            amount -= bet;
        }
        if (amount == 0) 
        {
            std::cout << "Game over, you lost all your money" << std::endl;
            break;
        }
    }
    return 0;
}
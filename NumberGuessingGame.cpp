#include<iostream>
#include<cstdlib>
#include<ctime>

int main() {
    int num, guess, tries = 0;

    srand(time(NULL));
    num = (rand() % 100) + 1;
    std::cout<<"***************NUMBER GUESSING GAME***************\n";

    do {
        std::cout << "Enter your guess from (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess < num) {
            std::cout << "Too Low\n";
        }
        else if (guess > num) {
            std::cout << "Too High\n";
        }
        else {
            std::cout << "Correct guess!\n";
            std::cout << "No. of tries = " << tries << "\n";
        }
    } while (num != guess);
    std::cout<<"**************************************************";
    return 0;
}

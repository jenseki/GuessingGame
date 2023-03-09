/* I am reviewing C++ starting with this project.
It's been about 5 years since I last used C++! And now that I'm
job hunting again (and the job market is not in a great state), 
I thought this would be a perfect time to review.
Source: https://www.geeksforgeeks.org/number-guessing-game-in-cpp-using-rand-function/
*/


#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
    std::cout << "\n\t\t\tWelcome to the Guessing Game!" << std::endl;
    std::cout << "You have to guess a number between 1 and 100."
                "You'll have limited choices based on the "
                "level you choose. Good luck!"
                << std::endl;

    while(true){
        std::cout << "\nEnter difficulty level: \n";
        std::cout << "1 for easy\t";
        std::cout << "2 for medium\t";
        std::cout << "3 for hard\t";
        std::cout << "0 to end game\n" << std::endl;

        // selecting difficulty
        int difficultyChoice;
        std::cout << "Enter the number: ";
        std::cin >> difficultyChoice;

        // generate secret number
        srand(time(0));
        int secretNumber = 1 + (rand() % 100);
        int playerChoice;

        // Easy difficulty
        if(difficultyChoice == 1){
            std::cout << "\nYou have 10 chances to find the "
                        "secret number between 1 and 100.";
            int choicesLeft = 10;
            for(int i = 1; i <= 10; i++){
                // prompt player
                std::cout << "\n\nEnter the number: ";
                std::cin >> playerChoice;

                // compare playerChoice to secretNumber
                if(playerChoice == secretNumber){
                    std::cout << "Well played! YoU wOn! "
                                << playerChoice
                                << " is the secret number" << std::endl;
                    std::cout << "\t\t\t Thanks for playing."
                                << endl;
                    break;
                }
                else{
                    std::cout << "Nope, " << playerChoice
                                << " is not the correct number\n";
                }
            }
        }

        // Medium difficulty
        else if(difficultyChoice == 2){

        }

        // Hard difficulty
        else if(difficultyChoice == 3){

        }
    }
}
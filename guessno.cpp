#include <iostream>
#include <cstdlib>  
#include <ctime>    // For time() 
#include <cmath>    

using namespace std;

void playGame() {
    srand(time(NULL));  // Seed the random number generator
    int num = rand() % 100 + 1;  // (1 to 100)
    int attempts;
    int score = 100;

cout<<"                             NUMBER GUESSING GAME                            "<<endl;
cout<<"                                Guess & Score                            "<<endl;
    // dIFFICULTY MODE
    cout << "Select Difficulty Level:\n\n";
    cout << "1. Easy (7 attempts)\n";
    cout << "2. Medium (5 attempts)\n";
    cout << "3. Hard (3 attempts)\n\n";
    cout << "Enter your choice (1, 2, or 3): ";
    
    int choice;
    cin >> choice;

    switch (choice) {
        case 1: 
            attempts = 7;
            cout << "You chose Easy mode. You have 7 attempts.\n";
            break;
        case 2:
            attempts = 5;
            cout << "You chose Medium mode. You have 5 attempts.\n";
            break;
        case 3:
            attempts = 3;
            cout << "You chose Hard mode. You have 3 attempts.\n";
            break;
        default:
            cout << "Invalid choice. Defaulting to Easy mode with 7 attempts.\n";
            attempts = 7;
    }

    cout << "Guess the number in the range (1-100). You have " << attempts << " attempts.\n\n";

    for (int i = 0; i < attempts; i++) {
        cout << "Enter your guess: ";
        int guess;
        cin >> guess;

        if (guess == num) {
            if (i == 0) {  // Guessed on the first try
                cout << "Incredible! You guessed it on the first try! Your score: " << score << "\n";
            } else {
                cout << "Congratulations! You guessed the number '" << num << "' correctly!\n";
                cout << "Your score: " << score << "\n";
            }
            return;
        }
         else
          if (guess > num)
        {
            cout << "Your guess is too high. (" << attempts - i - 1 << " attempts left)\n";
        } else
        {
            cout << "Your guess is too low. (" << attempts - i - 1 << " attempts left)\n\n";
        }
        // Offer a hint option if they haven’t guessed yet
        if (i < attempts - 1) {
            char hintOption;
            cout <<"\nWould you like to have a hint? This will reduce your score by 50%. (y/n): ";
            cin >> hintOption;
            if (hintOption == 'y' || hintOption == 'Y') {
                score /= 2;
                cout << "Hint: The number is " << (num % 2 == 0 ? "even." : "odd.") << "\n\n";
            }
        }

        score =score - 10;  // Deduct 10 points for each incorrect attempt
    }

    // If the loop ends without a correct guess, the player loses
    cout << "You failed to guess the number!! The correct number was: " << num << ".\n";
    cout << "Your score: " << score << "\n";
}

int main() {
    char playAgain;
    do {
        playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    } while (playAgain == 'y' || playAgain == 'Y');

    cout << "Thank you for playing!\n";
    return 0;
}

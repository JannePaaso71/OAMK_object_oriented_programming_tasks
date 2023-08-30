#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int guess = 0;
    std::srand(time(0));
    int randomNumber = std::rand() % 21;

    while(true) {
        cout<<"Giveme a guess number: ";
        cin>>guess;
        if(guess==randomNumber) {
            cout<<"You gave me the correct answer!\n";
            return false;
        }
        if(guess<randomNumber) {
            cout<<"Your answer is less than the correct number. Please, try again.\n";
        }
        if(guess>randomNumber) {
            cout<<"Your answer is more than the correct number. Please, try again.\n";
        }
    };
    return 0;
}

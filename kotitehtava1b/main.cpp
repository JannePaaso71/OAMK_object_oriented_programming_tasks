#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int game(int maxnum);

int main() {
    int largestNumber= 0;
    cout<<"What is the largest value of the guessed number?: ";
    cin>>largestNumber;
    int times = game(largestNumber);
    cout<<"You tried "<<times<<" times"<<endl;
    return 0;
}

int game(int maxnum) {
    std::srand(time(0));
    int randomNumber = std::rand() % maxnum;
    randomNumber+=1;

    for(int i=1; ; i++) {
        int guess= 0;
        cout<<"Give me a number: ";
        cin>>guess;
        if(guess==randomNumber) {
            cout<<"You gave me the correct answer!\n";
            return i;
        }
        if(guess<randomNumber) {
            cout<<"Your answer is less than the correct number. Please, try again.\n";
        }
        if(guess>randomNumber) {
            cout<<"Your answer is more than the correct number. Please, try again.\n";
        }
    };
}

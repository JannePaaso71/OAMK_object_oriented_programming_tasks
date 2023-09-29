#include <iostream>
#include "game.h"
#include <cstdlib>
#include <ctime>

using namespace std;

Game::Game(int a)
{
    maxNumber = a;
    cout<<"GAME CONSTRUCTOR: object initialized with "<<a<<" as a maximum value"<<endl;
}

Game::~Game()
{
    cout<<"object cleared from stack memory"<<endl;
}

void Game::play()
{
    std::srand(time(0));
    int randomNumber = std::rand() % maxNumber+1;
    //randomNumber+=1;
    for(int i=1; ;i++){
        cout<<"Give your guess between 1-"<<maxNumber<<endl;
        cin>>playerGuess;
        numOfGuesses+=1;
        if(randomNumber>playerGuess) {
            cout<<"Your guess is too small"<<endl;
            //playerGuess+=1;
        }
        if(randomNumber<playerGuess) {
            cout<<"Your guess is too big"<<endl;
            //playerGuess+=1;
        }
        if(randomNumber==playerGuess){
            cout<<"You guess is right = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
            break;
        }
    }
}

void Game::printGameResult()
{
    cout<<"You guessed the right answer = "<<randomNumber<<" with "<<numOfGuesses<<" guesses"<<endl;
}


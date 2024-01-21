#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
   srand(time(0));//seeding the randomnumber with currenttime to make it different everytime
    string playerChoice;
    cout<<"Enter your choice.(r for rock, p for paper, s for scissors):";
    cin>>playerChoice;
  if(playerChoice!="r"&&playerChoice!="p"&&playerChoice!="s"){
    cout<<"Invalid choice. Please enter r, p, or s.";
    return 0;
  }
  if(playerChoice=="r"){
    playerChoice="rock";
  }else if(playerChoice=="s"){
    playerChoice="scissors";
  }else if(playerChoice=="p"){
    playerChoice="paper";
  }

    string possibilities[]={"rock","paper","scissors"};
    string compChoice=possibilities[rand()%3];
    cout<<"\nPlayer chose "<<playerChoice<<", computer chose "<<compChoice<< ".\n";

    if(playerChoice==compChoice){
        cout<<"It's a tie!\n";
    }else if(playerChoice=="rock"){
        if(compChoice=="scissors"){
            cout<<"Player wins!\n";
        }else{
            cout<<"computer wins!\n";
        }
    }else if(playerChoice=="paper"){
        if(compChoice=="rock"){
            cout<<"Player wins!\n";
        }else{
            cout<<"computer wins!\n";
        }
    }else if(playerChoice=="scissors"){
        if(compChoice=="paper"){
            cout<<"Player wins!\n";
        }else{
            cout<<"computer wins!\n";
        }
    }

    return 0;
}

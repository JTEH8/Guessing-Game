
//Guessing Game
#include <iostream>
using namespace std;
//Main Method
int main() {
  //Set Playing as true
  bool isPlaying = true;
  //Start Text
  cout << "This is a Guessing Game" << endl;
  //Loop that runs while playing
  while(isPlaying == true)
  {
  //Defining variables
  char play = 'y';
  int input = 0;
  int count = 0;
  //Creating a random number
  srand(time(NULL));
  int num = rand()% 101;
  //Prompt text
  cout << "Guess a number between 0 and 100" << endl;
  //Reading in initial guess.
  cin >> input;
  //As long as guess isn't the number
  while(input !=num)
    {
  //If guess is too high
  if(input > num)
      {
  cout << "Your guess was too high. Try again." << endl;
  cin >> input;
  count++;
      }
  //If guess is too low
  if(input < num)
      {
  cout << "Your guess was too low. Try again." << endl;
  cin >> input;
  count++;
      }
    }
  //If guess is correct
  if(input == num)
      {
  count++;
  cout << "Your guess was correct! That took you " << count << " guesses. Do you want to play again? (Type y/n to respond)" << endl;
  //Read in input to continue or end play
  cin >> play;
      }
  if(play == 'y')
        {
      isPlaying = true;
        }
  else
        {
      //Goodbye message
      cout << "Thanks for playing!" << endl;
      //End play
      isPlaying = false;
        }
  }
return 0;
}
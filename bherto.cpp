#include <iostream>

int main() {

  char userResponse;
  float numDoubler;

  std::cout << "  WELCOME TO THE NUMBER DOUBLER. YOU CAN TYPE ANY TYPE OF NUMBER AND PRESS ENTER TO SEE THE DOUBLE OF THE NUMBER YOU TYPED.\n";
  std::cout << "----------------------------------------------------------------------------------------------------------------------------\n";
  std::cout << "Do you want continue? (Y for yes or N for no) : ";
  std::cin >> userResponse;

  if (userResponse == 'Y') {

    std::cout << "----------------------------------------------------\n";
    std::cout << "Ok, type in the number you want to find double of : ";
    std::cin >> numDoubler;

    std::cout << "-----------------------------------------------------------------------\n";
    std::cout << "The double of " << numDoubler << " is : " << numDoubler + numDoubler << "\n";
    std::cout << "--------------------------------------------------------\n";
    std::cout << "       Thank you for using NUMBER DOUBLER.\n";
  }
  else if (userResponse == 'N') {

    std::cout << "Ok, see you next time!\n";

  }
  else {

    std::cout << "You can only type (Y or N) to continue. To run again type ./bherto.cpp\n";

  }
}

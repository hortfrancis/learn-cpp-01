#include <iostream>
#include <string>

int main()
{
  std::string choice;

  std::cout << "You are standing outside a dark cave.\n";
  std::cout << "Do you enter? ";

  std::getline(std::cin, choice);

  if (choice == "yes" || choice == "Yes")
  {
    std::cout << "You step into the darkness.\n";
  }
  else if (choice == "no" || choice == "No")
  {
    std::cout << "You decide to go home.\n";
  }
  else
  {
    std::cout << "You hesitate, unsure what to do.\n";
  }

  return 0;
}
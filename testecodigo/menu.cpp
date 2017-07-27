#include "menu.h"

Menu::Menu(std::string text1 , std::string text2 , std::string text3)
{
  std::cout << "--------------------------MENU--------------------------" << std::endl;
  std::cout << "1------------------------------------------------" << text1 << std::endl;
  std::cout << "2------------------------------------------------" << text2 << std::endl;
  std::cout << "3------------------------------------------------" << text3 << std::endl;
}

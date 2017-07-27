#include <iostream>
#include "menu.h"
#include <stdio.h>
#include <stdlib.h>

void fflush()
{
  int ch;
  while ( (ch = fgetc (stdin)) != EOF && ch != '\n'){}
}

int main()
{
  while(1)
  {
    std::string text1 , text2 , text3;
    std::cout << "Hello World" << std::endl;
    std::cout << "Digite a primeira opção do seu menu" << std::endl;
    std::cin >> text1;
    fflush();
    std::cout << "Digite a segunda opção do seu menu"  << std::endl;
    std::cin >> text2;
    fflush();
    std::cout << "Digite a terceira opção do seu menu" << std::endl;
    std::cin >> text3;
    fflush();

    Menu menu1(text1 , text2 , text3);
  }
  return 0;
}

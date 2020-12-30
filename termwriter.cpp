#include "termwriter.hpp"
#include <iostream>

int main() {

  std::cout << "\e[0;32m";
  Termwriter::type("Termwriter");
  std::cout << "\033[0m\n\n";
  std::cout << "Help\tFor \e[0;34mTermwriter version 0.0.1\033[0m\tLast change: 2020 Dec 30\n\n";
  std::cout << "\t\tTermwriter - Type with ASCII in the terminal\n\n";
  std::cout << "Usage:\tTermwriter::type(<message>);\n\n";
  std::cout << "For issues, please see:" << std::endl;
  std::cout << "https://github.com/Alex0Blackwell/termwriter/issues" << std::endl;

  return 0;
}

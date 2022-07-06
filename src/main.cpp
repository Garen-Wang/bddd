#include <iostream>

#include "parser/driver.h"

int main() {
  std::cout << "input test file: >";
  std::string filename;
  std::cin >> filename;
  Driver driver;
  int res = driver.parse(filename);
  // std::ofstream ofs("ast.out");
  // driver.comp_unit->Debug(ofs, 0);
  std::cout << "res: " << res << std::endl;
  return 0;
}

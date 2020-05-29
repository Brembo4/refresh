#include <iostream>
#include <string>

class Account {
  //attributes
  public:
  std::string name;
  double balance {0};
  //methods
  void withdraw(double);
  void deposit(double);
};

int main() {
  Account *brembo {nullptr};
  brembo = new Account();
  //first way, dereferencing, then using dot operator:
  (*brembo).name = "brembo";
  (*brembo).balance = 100.0;
  std::cout << (*brembo).name << " " << (*brembo).balance << std::endl;
  std::cout << "-----------------------------" << std::endl;
  //second way, using member of pointer operator (arrow operator)
  brembo->name = "broucques";
  brembo->balance = 50.0;
  std::cout << brembo->name << " " << brembo->balance << std::endl;
  delete brembo;
  return 0;
}
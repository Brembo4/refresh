#include <iostream>
#include <string>

class Account {
  //attributes
  public:
  std::string name;
  double balance {0};
  //methods
  void withdraw(double amount) {
    balance -= amount;
  }
  void deposit(double amount) {
    balance += amount;
  }
};

int main() {
  Account broucques; //object : instance of class Account labeled broucques (l-value)
  Account *brembo {nullptr}; //pointer to an account obj
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
  std::cout << "-----------------------------" << std::endl;
  std::cout << "withdrawing $20.00" << std::endl;
  brembo->withdraw(20.00);
  std::cout << "balance is now $" << brembo->balance << std::endl;
  std::cout << "-----------------------------" << std::endl;
  std::cout << "depositing $50.00" << std::endl;
  brembo->deposit(50.00);
  std::cout << "balance is now $" << brembo->balance << std::endl;
  delete brembo;
  return 0;
}// fine :( :( :( :( :( :( :( :( :( :( :( :(
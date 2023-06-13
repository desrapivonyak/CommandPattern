#include <iostream>
#include "Command.hpp"
#include "Customer.hpp"
#include "Bank.hpp"

int main() {
  BankUser* account = new BankUser();
  Command* command = new Command(account);
  Customer customer;
  customer.addCommands(command);
  customer.executeCommand();

  delete account;
  delete command;

  return 0;
}
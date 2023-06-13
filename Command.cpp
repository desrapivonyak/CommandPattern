#include "Command.hpp"

Command::Command(BankUser* user) : m_user(user) {};

void Command::pay() {
  std::cout << "Do payment." << std::endl;
  m_user->paymentProcess();
}
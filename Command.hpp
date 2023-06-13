#pragma once
#include "CommandInterface.hpp"
#include "Bank.hpp"
#include <iostream>

class Command : public ICommand {
public:
  Command(BankUser*);
  void pay() override;
private:
  BankUser* m_user;
};
#pragma once
#include "Command.hpp"
#include <vector>
#include <iostream>

class Customer {
public:
  void addCommands(Command*);
  void executeCommand();
private:
  std::vector<Command*> commands;
};
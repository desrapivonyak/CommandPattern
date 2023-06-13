#include "Customer.hpp"

void Customer::addCommands(Command* command) {
  commands.push_back(command);
}

void Customer::executeCommand() {
  std::cout << "Executing command." << std::endl;
  for(auto com : commands) {
    com->pay();
  }
}
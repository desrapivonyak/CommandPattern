#pragma once

class ICommand {
public:
  virtual void pay() = 0;
  virtual ~ICommand() {};
};
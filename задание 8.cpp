#include <iostream>

class Employer {
 public:
  virtual void Print() = 0;
};

class President : public Employer {
 public:
  void Print() { std::cout << "I am the President of the United States and I'll provide peace and succes to my great country!" << std::endl; }
};

class Manager : public Employer {
 public:
  void Print() { std::cout << "I am a manager and I will make billions for my company!" << std::endl; }
};

class Worker : public Employer {
 public:
  void Print() { std::cout << "I am a welder and I make great money!" << std::endl; }
};

int main() {
  President JoeBiden;
  Manager Salesman;
  Worker Welder;

  JoeBiden.Print();
  Salesman.Print();
  Welder.Print();

  return 0;
}

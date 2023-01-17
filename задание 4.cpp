#include <iostream>
#include <string>

class Passport {
public:
  Passport(const std::string& name, const std::string& birthdate, const std::string& issuingAuthority)
    : name_(name), birthdate_(birthdate), issuingAuthority_(issuingAuthority) {}

  std::string getName() const { return name_; }
  std::string getBirthdate() const { return birthdate_; }
  std::string getIssuingAuthority() const { return issuingAuthority_; }

private:
  std::string name_;
  std::string birthdate_;
  std::string issuingAuthority_;
};

class ForeignPassport : public Passport {
public:
  ForeignPassport(const std::string& name, const std::string& birthdate, const std::string& issuingAuthority,
                  const std::string& passportNumber, const std::string& visaData)
    : Passport(name, birthdate, issuingAuthority), passportNumber_(passportNumber), visaData_(visaData) {}

  std::string getPassportNumber() const { return passportNumber_; }
  std::string getVisaData() const { return visaData_; }

private:
  std::string passportNumber_;
  std::string visaData_;
};

int main() {
  Passport p("John Smith", "01/01/1970", "Ministry of Internal Affairs");
  std::cout << "Name: " << p.getName() << std::endl;
  std::cout << "Birthdate: " << p.getBirthdate() << std::endl;
  std::cout << "Issuing authority: " << p.getIssuingAuthority() << std::endl;

  ForeignPassport fp("Jane Smith", "01/01/1980", "Ministry of Internal Affairs", "123456789", "Valid until 01/01/2022");
  std::cout << "Name: " << fp.getName() << std::endl;
  std::cout << "Birthdate: " << fp.getBirthdate() << std::endl;
  std::cout << "Issuing authority: " << fp.getIssuingAuthority() << std::endl;
  std::cout << "Passport number: " << fp.getPassportNumber() << std::endl;
  std::cout << "Visa data: " << fp.getVisaData() << std::endl;

  return 0;
}

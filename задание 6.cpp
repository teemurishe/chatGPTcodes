#include <iostream>

class Directory {
public:
  Directory(const char* company_name, const char* owner, const char* phone, const char* address,
            const char* business);

  char* GetCompanyName() const;
  char* GetOwner() const;
  char* GetPhone() const;
  char* GetAddress() const;
  char* GetBusiness() const;

private:
  char company_name_[256];
  char owner_[256];
  char phone_[256];
  char address_[256];
  char business_[256];
};

Directory::Directory(const char* company_name, const char* owner, const char* phone,
                     const char* address, const char* business) {
  strcpy(company_name_, company_name);
  strcpy(owner_, owner);
  strcpy(phone_, phone);
  strcpy(address_, address);
  strcpy(business_, business);
}

char* Directory::GetCompanyName() const { return company_name_; }
char* Directory::GetOwner() const { return owner_; }
char* Directory::GetPhone() const { return phone_; }
char* Directory::GetAddress() const { return address_; }
char* Directory::GetBusiness() const { return business_; }

int main() {
  Directory directory("ACME Corporation", "John Smith", "555-555-1212", "123 Main Street", "Manufacturing");

  std::cout << "Company Name: " << directory.GetCompanyName() << std::endl;
  std::cout << "Owner: " << directory.GetOwner() << std::endl;
  std::cout << "Phone: " << directory.GetPhone() << std::endl;
  std::cout << "Address: " << directory.GetAddress() << std::endl;
  std::cout << "Business: " << directory.GetBusiness() << std::endl;

  return 0;
}

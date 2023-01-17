#include <iostream>
#include <string>

class NewYearLetter {
  public: NewYearLetter(const std::string & friend_name,
    const std::string & country, const std::string & city, const std::string & street, const std::string & house, const std::string & flat, const std::string & post_code, const std::string & phone);
                

  std::string GetFriendName() const;
  std::string GetAddress() const;
  std::string GetPhone() const;

  private: std::string friend_name_;
  std::string country_;
  std::string city_;
  std::string street_;
  std::string house_;
  std::string flat_;
  std::string post_code_;
  std::string phone_;
};

NewYearLetter::NewYearLetter(const std::string & friend_name, const std::string & country, const std::string & city, const std::string & street, const std::string & house, const std::string & flat, const std::string & post_code, const std::string & phone): friend_name_(friend_name),
  country_(country),
  city_(city),
  street_(street),
  house_(house),
  flat_(flat),
  post_code_(post_code),
  phone_(phone) {}

std::string NewYearLetter::GetFriendName() const {
  return friend_name_;
}

std::string NewYearLetter::GetAddress() const {
  return country_ + ", " + city_ + ", " + street_ + ", " + house_ + ", "+ flat_ + ", " + post_code_;
}

std::string NewYearLetter::GetPhone() const {
  return phone_;
}

int main() {
  NewYearLetter letter1("Jane Doe", "USA", "New York", "5th Avenue", "123", "123456", "123456", "555-555-1212");
  NewYearLetter letter2("John Doe", "USA", "Chicago", "8th avenue", "321", "000856", "478-367-9286");
  NewYearLetter letter3("Ohio Dude", "Ohio", "Columbus", "666th vaneue", "666", "666666", "666-666-6666");

  std::cout << "Letter 1:" << std::endl;
  std::cout << "To: " << letter1.GetFriendName() << std::endl;
  std::cout << "Address: " << letter1.GetAddress() << std::endl;
  std::cout << "Phone: " << letter1.GetPhone() << std::endl;

  std::cout << "Letter 2:" << std::endl;
  std::cout << "To: " << letter2.GetFriendName() << std::endl;
  std::cout << "Address: " << letter2.GetAddress() << std::endl;
  std::cout << "Phone: "  << letter2.GetPhone() << std::endl;
  
  std::cout << "Letter 3:" << std::endl;
  std::cout << "To: " << letter3.GetFriendName() << std::endl;
  std::cout << "Address: " << letter3.GetAddress() << std::endl;
  std::cout << "Phone: " << letter3.GetPhone() << std::endl;
  return 0;
}
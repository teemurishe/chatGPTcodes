#include <iostream>
#include <string>

class Student {
public:
  // Конструктор по умолчанию
  Student() : name_(""), id_(0), course_(0) {}

  // Конструктор, который принимает значения имени, номера и курса в качестве аргументов
  Student(const std::string& name, int id, int course) : name_(name), id_(id), course_(course) {}

  // Функции установки значений членов данных
  void setName(const std::string& name) { name_ = name; }
  void setId(int id) { id_ = id; }
  void setCourse(int course) { course_ = course; }

  // Функции получения значений членов данных
  std::string getName() const { return name_; }
  int getId() const { return id_; }
  int getCourse() const { return course_; }

private:
  std::string name_;
  int id_;
  int course_;
};

class Aspirant : public Student {
public:
  // Конструктор по умолчанию
Aspirant() : Student(), researchTopic_("") {}

// Конструктор, который принимает значения имени, номера, курса и темы исследования в качестве аргументов
Aspirant(const std::string& name, int id, int course, const std::string& researchTopic) : Student(name, id, course), researchTopic_(researchTopic) {}

// Функция установки темы исследования
void setResearchTopic(const std::string& researchTopic) { researchTopic_ = researchTopic; }

// Функция получения темы исследования
std::string getResearchTopic() const { return researchTopic_; }

private:
std::string researchTopic_;
};

int main() {
// Создаем объект студента с именем "John", номером 12345 и курсом 3
Student s("John", 12345, 3);

// Создаем объект аспиранта с именем "Jane", номером 54321, курсом 5 и темой исследования "Machine Learning"
Aspirant a("Jane", 54321, 5, "Machine Learning");

// Изменяем имя студента
s.setName("John Smith");
// Изменяем номер студента
s.setId(67890);
// Изменяем курс студента
s.setCourse(4);

// Изменяем тему исследования аспиранта
a.setResearchTopic("Deep Learning");

// Выводим информацию о студенте на экран
std::cout << "Student name: " << s.getName() << std::endl;
std::cout << "Student id: " << s.getId() << std::endl;
std::cout << "Student course: " << s.getCourse() << std::endl;

// Выводим информацию об аспиранте на экран
std::cout << "Aspirant name: " << a.getName() << std::endl;
std::cout << "Aspirant id: " << a.getId() << std::endl;
std::cout << "Aspirant course: " << a.getCourse() << std::endl;
std::cout << "Aspirant research topic: " << a.getResearchTopic() << std::endl;

return 0;
}
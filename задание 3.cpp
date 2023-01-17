#include <iostream>
#include <vector>

int main() {
  // Создаем вектор из 10 элементов
  std::vector<int> squares(10);

  // Заполняем его квадратами целых чисел
  for (int i = 0; i < 10; i++) {
    squares[i] = i * i;
  }

  // Выводим вектор в выходной поток
  for (int i = 0; i < 10; i++) {
    std::cout << squares[i] << " ";
  }
  std::cout << std::endl;

  return 0;
}

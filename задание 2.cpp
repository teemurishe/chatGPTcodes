#include <iostream>
#include <fstream>
#include <string>
#include <filesystem>

namespace fs = std::filesystem;

// Функция создания файла с указанным именем в указанном каталоге
void createFile(const fs::path& path) {
  std::ofstream file(path);
  if (file.is_open()) {
    std::cout << "File " << path << " created successfully." << std::endl;
  } else {
    std::cout << "Error creating file " << path << "." << std::endl;
  }
  file.close();
}

// Функция удаления файла с указанным именем из указанного каталога
void deleteFile(const fs::path& path) {
  if (fs::remove(path)) {
    std::cout << "File " << path << " deleted successfully." << std::endl;
} else {
std::cout << "Error deleting file " << path << "." << std::endl;
}
}

// Функция переименования файла с указанным именем в указанном каталоге
void renameFile(const fs::path& oldPath, const fs::path& newPath) {
if (fs::rename(oldPath, newPath)) {
std::cout << "File " << oldPath << " renamed to " << newPath << "." << std::endl;
} else {
std::cout << "Error renaming file " << oldPath << "." << std::endl;
}
}

// Функция перемещения файла с указанным именем из указанного каталога в другой каталог
void moveFile(const fs::path& oldPath, const fs::path& destination) {
if (fs::rename(oldPath, destination / oldPath.filename())) {
std::cout << "File " << oldPath << " moved to " << destination << "." << std::endl;
} else {
std::cout << "Error moving file " << oldPath << "." << std::endl;
}
}

// Функция вывода содержимого файла с указанным именем на экран
void printFile(const fs::path& path) {
std::ifstream file(path);
if (file.is_open()) {
std::string line;
while (std::getline(file, line)) {
std::cout << line << std::endl;
}
} else {
std::cout << "Error opening file " << path << "." << std::endl;
}
file.close();
}

int main() {
std::string filename, destination;
int choice;
std::cout << "Welcome to Simple File Manager." << std::endl;
while (true) {
std::cout << "Enter the number of the action you want to perform:" << std::endl;
std::cout << "1. Create a new file in the current directory" << std::endl;
std::cout << "2. Delete a file from the current directory" << std::endl;
std::cout << "3. Rename a file in the current directory" << std::endl;
std::cout << "4. Move a file from the current directory to a specified directory" << std::endl;
std::cout << "5. Print the contents of a file from the current directory" << std::endl;
std::cout << "6. Quit" << std::endl;
std::cin >> choice;
switch (choice) {
case 1:
std::cout << "Enter the name of the file you want to create: ";
std::cin >> filename;
createFile(filename);
break;
case 2:
std::cout << "Enter the name of the file you want to delete: ";
std::cin >> filename;
deleteFile(filename);
break;
case 3:
std::cout << "Enter the name of the file you want to rename: ";
std::cin >> filename;
std::cout << "Enter the new name of the file: ";
std::cin >> destination;
renameFile(filename, destination);
break;
case 4:
std::cout << "Enter the name of the file you want to move: ";
std::cin >> filename;
std::cout << "Enter the name of the destination directory: ";
std::cin >> destination;
moveFile(filename, destination);
break;
case 5:
std::cout << "Enter the name of the file you want to print: ";
std::cin >> filename;
printFile(filename);
break;
case 6:
std::cout << "Exiting Simple File Manager." << std::endl;
return 0;
default:
std::cout << "Invalid choice. Please try again." << std::endl;
break;
}
}
return 0;
}
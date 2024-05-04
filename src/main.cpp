#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
  const std::filesystem::path current_dir = std::filesystem::current_path();

  std::cout << current_dir;
}

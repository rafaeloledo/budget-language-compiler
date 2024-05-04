#include <iostream>
#include <filesystem>

int main(int argc, char *argv[]) {
  const std::filesystem::path current_dir = std::filesystem::current_path();

  const std::filesystem::path build_script_path = current_dir / "tools\\build_asm.cmd";

  std::cout << build_script_path;
}

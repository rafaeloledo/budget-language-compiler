#include <exception>
#include <filesystem>
#include <iostream>
#include <string>

void call_cmd(const std::filesystem::path& p) {
  std::string str = p.string();
  const char* s = str.c_str();
  std::system(s);
}

int main(int argc, char* argv[]) {
  const std::filesystem::path path = std::filesystem::current_path() / "tools\\build_asm.cmd";

  try {
    call_cmd(path);
  } catch (const std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  return 0;
}

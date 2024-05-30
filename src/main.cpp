#include <exception>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

void call_cmd(const std::filesystem::path& p) {
  std::string str = p.string();
  const char* s = str.c_str();
  std::system(s);
}

int main(int argc, char* argv[]) {
  std::cout << "Executing...\n";
  std::string contents;
  {
    std::stringstream contents_stream;
    if (argv[1] == nullptr) {
      std::cerr << "No file specified\n";
      return 1;
    }
    std::fstream input(argv[1], std::ios::in);
    /* contents_stream << input.rdbuf(); */
    /* contents = contents_stream.str(); */
  }

  /* std::cout << contents << "\n"; */

  const std::filesystem::path path =
      std::filesystem::current_path() / "tools\\build_asm.cmd";

  try {
    call_cmd(path);
  } catch (const std::exception& e) {
    std::cerr << e.what() << "\n";
  }

  return 0;
}

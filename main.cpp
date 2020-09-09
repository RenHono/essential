#include <iostream>
#include <string>

using namespace std;

int main() {

  string user_name;
  string last_name;

  std::cout << "Hello, World!" << std::endl;
  std::cout << "please input your username: " << std::endl;

  cin >> user_name;

  std::cout << "please input your lastname: " << std::endl;

  cin >> last_name;

  cout << "your name is " << user_name << " " << last_name << endl;


  return 0;
}

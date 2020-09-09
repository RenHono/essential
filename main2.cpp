//
// Created by renhono on 2020/9/9.
//

#include <iostream>
#include <string>
#include <chrono>

#include <unistd.h>

using namespace std;

int rex(int x1, int x2) {

  return x1 + x2;
}

int main() {

  const int line_size = 8;
  string a_str;
  int cnt = 1;

  cout << "测试" << endl;

  while (1) {

    auto start = std::chrono::system_clock::now();

    cout << cnt
         << (cnt % line_size ? ' ' : '\n');

    cnt++;

    auto end = std::chrono::system_clock::now();
    auto duration = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    cout << duration.count() << "ms" << endl;
    cout << std::chrono::microseconds::period::num << endl;
    cout << std::chrono::microseconds::period::den << endl;

// print timediff
    std::cout
        << (double) (duration.count()) * std::chrono::microseconds::period::num
            / std::chrono::microseconds::period::den
        << "s" << std::endl;

    sleep(1);
  }

  return 0;
}

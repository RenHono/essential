//
// Created by renhono on 2020/9/9.
//

#include <iostream>
#include <string>
#include <zconf.h>

using namespace std;

void progress_bar() {
  int all_block_num = 1000;
  for (int i = 0; i < all_block_num; i++) {
    if (i < all_block_num - 1) {
      printf("\r读取中[%.2lf%%]:", i * 100.0 / (all_block_num - 1));
    }
    else {
      printf("\r读取完成[%.2lf%%]:", i * 100.0 / (all_block_num - 1));
    }
    int show_num = i * 20 / all_block_num;
    for (int j = 1; j <= show_num; j++) {
      std::cout << "█";
//          std::cout << "#";
      usleep(100);
    }

    fflush(stdout);
  }
  std::cout << std::endl;

}

int main() {

  string start_in_str;

  cout << "[START!!!] " << endl;

  cout << "开始测试" << endl;

  while (1) {
    cout << "是否进入测试？ Y/N" << endl;
    cin >> start_in_str;
    if (start_in_str == "y" || start_in_str == "Y") {
      cout << "正在进入测试" << endl;
      progress_bar();
    }
    else {
      cout << "你再想想！！！" << endl;
      continue;
    }

    while (1) {

    }
  }

  return 0;
}

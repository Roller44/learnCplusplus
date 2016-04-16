#include <iostream>
#include "Sales_item.h"
int main()
{
    Sales_item item1, item2;
    std::cin >> item1 >> item2;
    // 先检查 item1 和 item2 是否表示相同的书
    if (item1.isbn() == item2.isbn()) {
        std::cout << item1 +item2 << std::endl;
        return 0;
    } else {
        std::cerr << "Data must refer to same ISBN" << std::endl;
        return -1;// 表示失败
    }
}

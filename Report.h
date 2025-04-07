#ifndef Report_h
#define Report_h
#include"Sale.h"
class Report : public Bookdata // 定义Report类，继承自Bookdata类
{
public:
    void displaythebook(); // 显示图书相关信息的函数
    void displaythebookWhole(); // 显示图书批发价的函数
    void displaythebookre(); // 显示图书零售价的函数
    void displaythesumofbook(); // 显示图书总数的函数
    void displaythebook_value(); // 显示图书库存总价值的函数
};
#endif
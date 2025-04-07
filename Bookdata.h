#ifndef Bookdata_h
#define Bookdata_h
#include"Titleinfo.h"
class Bookdata : public Titleinfo // 定义Bookdata类，继承自Titleinfo类
{
private:
    static int sumbook; // 静态成员变量，表示图书总数
public:
    Bookdata operator =(const Bookdata& p1); // 重载赋值运算符的函数
    void displaythebook(); // 显示图书相关信息的函数
    void displaythebookWhole(); // 显示图书批发价的函数
    void displaythebookre(); // 显示图书零售价的函数
    void displaythesumofbook(); // 显示图书总数的函数
    void displaythebook_value(); // 显示图书库存总价值的函数
    void displaythebook_sell(); // 显示图书销售信息的函数
    void displaythebook_sell2(); // 显示图书销售信息的函数
    void setTitle(char*, int); // 设置图书标题的函数
    void setisbn(char*, int); // 设置图书ISBN号的函数
    void setanthor(char*, int); // 设置图书作者的函数
    void setpublisher(char*, int); // 设置图书出版商的函数
    void setdateadded(char*, int); // 设置图书添加日期的函数
    void setqty(int); // 设置图书库存数量的函数
    void setwholesale(int); // 设置图书批发价的函数
    void setretail(int); // 设置图书零售价的函数
    char* gettitle(); // 获取图书标题的函数
    char* getisbn(); // 获取图书ISBN号的函数
    char* getauthor(); // 获取图书作者的函数
    char* getpublisher(); // 获取图书出版商的函数
    char* getdateadded(); // 获取图书添加日期的函数
    int getsumbook(); // 获取图书总数的函数
    void putx(int a); // 将图书库存数量加上a的函数
    void sell_list(); // 显示销售清单的函数
    void delete_itself(); // 删除图书信息的函数
};
#endif
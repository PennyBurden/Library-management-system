#ifndef Management_h
#define Management_h
#include"Report.h"
class Management : public Bookdata // 定义Management类，继承自Bookdata类
{
public:
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
};
#endif
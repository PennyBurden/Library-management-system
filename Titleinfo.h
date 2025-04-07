#ifndef Titleinfo_h
#define Titleinfo_h
class Titleinfo // 定义Titleinfo类
{
protected: // protected访问修饰符，表示这些成员变量可以在派生类中被访问
    char isbn[14]; // ISBN号，长度为14个字符
    char booktitle[51]; // 书名，长度为51个字符
    char author[31]; // 作者，长度为31个字符
    char publisher[31]; // 出版商，长度为31个字符
    char dateAdded[11]; // 添加日期，长度为11个字符
    int qtyOnHand; // 库存数量
    double wholesale; // 批发价
    double retail; // 零售价
public:
    int feedbackqty(); // 返回库存数量的函数
    double feedbackwhole(); // 返回批发价的函数
    double feedbackre(); // 返回零售价的函数
    Titleinfo operator =(const Titleinfo& p1); // 重载赋值运算符的函数
};
#endif

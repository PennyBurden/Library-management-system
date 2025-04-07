#ifndef Sale_h
#define Sale_h
#include"Bookdata.h"
class Sale : public Bookdata // 定义Sale类，继承自Bookdata类
{
public:
    void sell_list(); // 显示销售清单的函数
};
#endif

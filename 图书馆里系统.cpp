#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>//最后要把一开始所有的new空间都要删除一下
#include <stdlib.h>//购买书的时候会自动检测库存量是否为0
#include <ctime>// 为了前台销售模块里的show time
#include <iomanip>//for the nice output
#include <cstring>//各个返回的模块可能有问题
#include <fstream>//changgebook的输出最后要修改一下
#include <string>//为了stoi
#include <algorithm>//为了使用sort对其进行排序，默认使用operator<进行排序，最后输出排序后的数组元素
#include"Management.h"
using namespace std;
int sumbook;
double rax;
int Bookdata::sumbook;

Titleinfo Titleinfo::operator =(const Titleinfo& p1)
{
    strcpy(this->author, p1.author);
    strcpy(this->booktitle, p1.booktitle);
    strcpy(this->dateAdded, p1.dateAdded);
    strcpy(this->isbn, p1.isbn);
    strcpy(this->publisher, p1.publisher);
    this->qtyOnHand = p1.qtyOnHand;
    this->wholesale = p1.wholesale;
    this->retail = p1.retail;
    return *this;
}

double Titleinfo::feedbackre()
{
    return retail;
}
double Titleinfo::feedbackwhole()
{
    return wholesale;
}
int Titleinfo::feedbackqty()
{
    return qtyOnHand;
}

void Bookdata::putx(int a)
{
    sumbook = a;
}
Bookdata Bookdata::operator=(const Bookdata& p1)
{
    strcpy(this->author, p1.author);
    strcpy(this->booktitle, p1.booktitle);
    strcpy(this->dateAdded, p1.dateAdded);
    strcpy(this->isbn, p1.isbn);
    strcpy(this->publisher, p1.publisher);
    this->qtyOnHand = p1.qtyOnHand;
    this->wholesale = p1.wholesale;
    this->retail = p1.retail;
    return *this;
}

char* Bookdata::getauthor()
{
    return author;
}
char* Bookdata::getisbn()
{
    return isbn;
}
char* Bookdata::getdateadded()
{
    return dateAdded;
}
char* Bookdata::gettitle()
{
    return booktitle;

}
char* Bookdata::getpublisher()
{
    return publisher;
}
void Bookdata::displaythebook_sell()
{

    cout << "   书名   " << booktitle << "        " << " 零售RMB: " << setprecision(2) << retail;
    cout << "     总共RMB: ";
}
void Bookdata::displaythebook_sell2()
{
    cout
        << setw(14) << isbn
        << setw(15) << booktitle
        << setw(15) << retail
        ;
}
void Bookdata::setTitle(char* a, int b)
{
    strcpy(booktitle, a);
}
void Bookdata::setisbn(char* a, int b)
{
    strcpy(isbn, a);
}
void Bookdata::setanthor(char* a, int b)
{
    strcpy(author, a);
}
void Bookdata::setpublisher(char* a, int b)
{
    strcpy(publisher, a);
}
void Bookdata::setdateadded(char* a, int b)
{
    strcpy(dateAdded, a);
}
void Bookdata::setqty(int a)
{
    qtyOnHand = a;
}
void Bookdata::setwholesale(int a)
{
    wholesale = a;
}
void Bookdata::setretail(int a)
{
    retail = a;
}
void Bookdata::displaythesumofbook()
{
    cout << "书名：" << booktitle << endl;
    cout << "库存量：" << qtyOnHand << endl;
}
void Bookdata::displaythebook()
{
    if (booktitle[0] != NULL)
    {
        std::cout << "ISBN号：" << isbn << endl;
        std::cout << "书  名：" << booktitle << endl;
        cout << "作  者：" << author << endl;
        cout << "出版社：" << publisher << endl;
        cout << "进书日期：" << dateAdded << endl;
        cout << "库存量：" << qtyOnHand << endl;
        cout << "批发价：" << wholesale << endl;
        cout << "零售价：" << retail << endl;
    }
}
void Bookdata::displaythebook_value()
{
    if (booktitle[0] != NULL)
    {
        cout << "书名：" << booktitle << endl;
        cout << "库存量：" << qtyOnHand << endl;
        cout << "批发价：" << wholesale << endl;
        cout << "批发价总额：" << qtyOnHand * wholesale << endl;
    }

}
void Bookdata::displaythebookWhole()
{
    if (booktitle[0] != NULL)
    {
        cout << "书名：" << booktitle << endl;
        cout << "批发价：" << wholesale << endl;
        cout << "库存量：" << qtyOnHand << endl;
    }
}
void Bookdata::displaythebookre()
{
    if (booktitle[0] != NULL)
    {
        cout << "书名：" << booktitle << endl;
        cout << "零售价：" << retail << endl;
        cout << "库存量：" << qtyOnHand << endl;
    }
}
void Bookdata::delete_itself()
{
    booktitle[0] = '/0';
}
void Bookdata::sell_list()
{
    cout << "书名:" << booktitle << endl;
    cout << "ISBN:" << isbn << endl;
    cout << "零售价格：" << retail << endl;
    cout << "还剩的数量：" << qtyOnHand << endl;
}
void Sale::sell_list()
{
    cout << "书名:" << booktitle << endl;
    cout << "ISBN:" << isbn << endl;
    cout << "零售价格：" << retail << endl;
    cout << "还剩的数量：" << qtyOnHand << endl;
}

char* Management::getauthor()
{
    return author;
}
char* Management::getisbn()
{
    return isbn;
}
char* Management::getdateadded()
{
    return dateAdded;
}
char* Management::gettitle()
{
    return booktitle;

}
char* Management::getpublisher()
{
    return publisher;
}
void Management::setTitle(char* a, int b)
{
    strcpy(booktitle, a);
}
void Management::setisbn(char* a, int b)
{
    strcpy(isbn, a);
}
void Management::setanthor(char* a, int b)
{
    strcpy(author, a);
}
void Management::setpublisher(char* a, int b)
{
    strcpy(publisher, a);
}
void Management::setdateadded(char* a, int b)
{
    strcpy(dateAdded, a);
}
void Management::setqty(int a)
{
    qtyOnHand = a;
}
void Management::setwholesale(int a)
{
    wholesale = a;
}
void Management::setretail(int a)
{
    retail = a;
}

void Report::displaythesumofbook()
{
    cout << "书名：" << booktitle << endl;
    cout << "库存量：" << qtyOnHand << endl;
}
void Report::displaythebook()
{
    if (booktitle[0] != NULL)
    {
        std::cout << "ISBN号：" << isbn << endl;
        std::cout << "书  名：" << booktitle << endl;
        cout << "作  者：" << author << endl;
        cout << "出版社：" << publisher << endl;
        cout << "进书日期：" << dateAdded << endl;
        cout << "库存量：" << qtyOnHand << endl;
        cout << "批发价：" << wholesale << endl;
        cout << "零售价：" << retail << endl;
    }
}
void Report::displaythebook_value()
{
    if (booktitle[0] != NULL)
    {
        cout << "书名：" << booktitle << endl;
        cout << "库存量：" << qtyOnHand << endl;
        cout << "批发价：" << wholesale << endl;
        cout << "批发价总额：" << qtyOnHand * wholesale << endl;
    }

}
void Report::displaythebookWhole()
{
    if (booktitle[0] != NULL)
    {
        cout << "书名：" << booktitle << endl;
        cout << "批发价：" << wholesale << endl;
        cout << "库存量：" << qtyOnHand << endl;
    }
}
void Report::displaythebookre()
{
    if (booktitle[0] != NULL)
    {
        cout << "书名：" << booktitle << endl;
        cout << "零售价：" << retail << endl;
        cout << "库存量：" << qtyOnHand << endl;
    }
}
void mainshow()//最主要的函数，集大成者
{
    void getmoneypart();
    void bookbaobiao();
    void bookmanagement();
    int choice;
    cout << "---欢迎来到图书管理系统---" << endl;
    cout << "Fivestar图书管理系统" << endl << "    主菜单    " << endl;
    cout << "  1.收银模块" << endl;
    cout << "  2.书库管理模块" << endl;
    cout << "  3.报表模块" << endl;
    cout << "  4.退出系统" << endl;
    cout << "  请输入选择(1~4):" << endl;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "只有1，2，3，4可供选择，请重新输入" << endl;
            cin >> choice;
        }
        else
        {
            break;
        }
    }
    switch (choice)
    {
    case 1:getmoneypart(); break;
    case 2:bookmanagement(); break;
    case 3:bookbaobiao(); break;
    case 4:exit(0); break;
    default:;
    }
}
void getmoneypart()//收银系统
{
    bool compare_two1(char* a, char* b);
    void bookmanagement();
    bool compare_two(char* a, char* b);
    bool check_the_booknum(int);
    void savebookschangebooks(Bookdata books[], int num_books);
    void Bookmanagement();
    void fuzzySearchaboutisbn2(Sale * read, int data_size, char query[], int num);
    void fuzzySearchaboutisbn3(Sale * read, int data_size, char query[], int num);
    Sale* read;
    int choice;
    int temp;
    int check = 0;
    double sum_sell_money = 0.0;
    int the_book_id[100];
    fstream p1, p2;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Sale);
    p1.seekg(0, ios::beg);
    read = new Sale[numObjs];
    p1.read((char*)read, fileSize);
    int num[100];
    int i, j, the_bought_number;
    int k = 0;
    int t = 0;
    int choiceee;
    time_t now = time(0);
    tm* localTime = localtime(&now);  // 将当前时间转换为本地时间结构体
    char id[100][14];
    char k1[3];
    double money1 = 0, money2 = 0, money3 = 0;
    cout << "你想看一下导购清单吗(请输入你的选择）？" << endl;
    cout << "1.想             2.不想" << endl;
    cin >> choiceee;
    the_bought_number = 0;
    while (1)
    {
        if (choiceee != 1 && choiceee != 2)
        {
            cout << "输入的信息有误，请重新输入" << endl;
            cin >> choiceee;
        }
        else
        {
            break;
        }
    }
    if (choiceee == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].sell_list();
            cout << endl;
        }
    }
    while (1)
    {
        cout << "请输入你要购买的第" << k + 1 << "本书的ISBN号：" << endl;
        cin >> id[k];
        cout << "请输入你要购买的第" << k + 1 << "本的数量" << endl;
        cin >> num[k];

        temp = num[k];

        the_bought_number++;
        for (i = 0; i < sumbook; i++)
        {

            if (compare_two(read[i].getisbn(), id[k]))
            {
                check = 1;
                if (read[i].feedbackqty() == 0 || read[i].feedbackqty() - temp < 0)
                {
                    temp = 0;
                    cout << "库存量不足，请重新输入" << endl;
                    num[k] = 0;
                    cout << "这是你刚刚购买的书本的信息：" << endl;
                    cout << "数量：0  ";
                    the_book_id[t] = i;
                    t++;
                    read[i].displaythebook_sell();
                    cout << num[k] * read[i].feedbackre() << endl;
                    break;

                }
                temp = read[i].feedbackqty();
                temp = temp - num[k];
                while (check_the_booknum(temp))
                {
                    cout << "抱歉，书库的库存没有这么多书了,请重新输入" << endl;
                    cin >> num[k];
                    temp = read[i].feedbackqty() - num[k];
                }

                cout << "这是你刚刚购买的书本的信息：" << endl;
                cout << "数量：  " << num[k];
                the_book_id[t] = i;
                t++;
                read[i].displaythebook_sell();

                read[i].setqty(temp);
                cout << setprecision(3) << num[k] * read[i].feedbackre() << endl;

            }

        }

        k++;
        // cout << setprecision(1) << num[k] * read[i].feedbackre();
        cout << "是否还购买了其他书？(yes or no)" << endl;
        cin >> k1;
        if (k1[0] == 'y' || k1[0] == 'Y')
        {
            continue;
        }
        else if (k1[0] == 'n' || k1[0] == 'N')
        {
            break;
        }
    }
    savebookschangebooks(read, sumbook);
    cout << "前台销售模块" << endl;
    cout << "日期: " << localTime->tm_year + 1900
        << "年" << localTime->tm_mon + 1
        << "月" << localTime->tm_mday
        << "日" << endl;  // 日数
    cout << setw(5) << "数量"
        << setw(14) << "ISBN号"
        << setw(15) << "书名"
        << setw(15) << "单价"
        << setw(15) << "金额"
        << endl;
    for (i = 0; i < the_bought_number; i++)
    {
        cout << "    " << num[i];
        read[the_book_id[i]].displaythebook_sell2();
        cout << setw(15) << num[i] * read[the_book_id[i]].feedbackre() << endl;
        sum_sell_money = num[i] * read[the_book_id[i]].feedbackre() + sum_sell_money;
    }

    cout << "------------------------------------" << endl;
    cout << "销售合计：RMB：" << setprecision(3) << sum_sell_money << endl;
    cout << "零售税： RMB：" << setprecision(2) << sum_sell_money * rax << endl;
    cout << "应付总额：RMB：" << setprecision(3) << sum_sell_money + (sum_sell_money * rax) << endl;
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    //打不开文件不会让程序结束。
    cin >> choice;
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void bookmanagement()//图书管理系统
{
    void changerax();
    void lookingforbook();
    void changeonebookinfomation();
    void addbook();
    void removebook();
    int choice;
    cout << "  lfl图书管理系统 " << endl << "   图书管理模块" << endl
        << "1.查找某本书的信息" << endl
        << "2.增加书" << endl
        << "3.修改书的信息 " << endl
        << "4.删除书 " << endl
        << "5.改变税率" << endl
        << "6.返回到主菜单 " << endl

        << "请输入你的选择（1～6）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice < 1 || choice >6)
        {
            cout << "输错了，只有1～6，请重新输入" << endl;
            cin >> choice;
        }
        else {
            break;
        }
    }
    switch (choice) {
    case 1:lookingforbook(); break;
    case 2:addbook(); break;
    case 3:changeonebookinfomation(); break;
    case 4:removebook(); break;
    case 5:changerax(); break;
    case 6:mainshow(); break;

    default:
        break;
    }
}
void bookbaobiao()//报表系统
{
    void sort_by_the_date();
    void Pifajia();
    void Lingshoujia();
    void Thesumofbook();
    void Library_List();
    void sort_by_the_sum_ofthebookvalue();
    int choice;
    cout << "lfl图书管理系统" << endl;
    cout << "   报表模块  " << endl
        << "1.书库列表" << endl
        << "2.批发价列表" << endl
        << "3.零售价列表" << endl
        << "4.按书的数量列表" << endl
        << "5.按书的价值额列表" << endl
        << "6.按进书日期列表" << endl
        << "7.返回到主菜单" << endl
        << "输入选择（1～7）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice < 1 || choice >7)
        {
            cout << "输错了，只有1～7，请重新输入" << endl;
            cin >> choice;
        }
        else {
            break;
        }
    }
    switch (choice)
    {
    case 1:Library_List(); break;
    case 2:Pifajia(); break;
    case 3:Lingshoujia(); break;
    case 4:Thesumofbook(); break;
    case 5:sort_by_the_sum_ofthebookvalue(); break;
    case 6:sort_by_the_date(); break;
    case 7:mainshow();
    default:
        break;
    }

}

void savebooks(Management books[], int num_books)
{
    void mainshow();
    void bookmanagement();
    fstream p1;
    int choice;
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary | ios::app);
    if (!p1)
    {
        cout << "抱歉，打不开文件" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        //打不开文件不会让程序结束。
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    p1.seekp(0L, ios::end);
    p1.write((char*)(books), sizeof(Management) * num_books);
    p1.clear();
    p1.close();
}
void savebooks(Bookdata books[], int num_books)
{
    void mainshow();
    void bookmanagement();
    fstream p1;
    int choice;
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary | ios::app);
    if (!p1)
    {
        cout << "抱歉，打不开文件" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        //打不开文件不会让程序结束。
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    p1.seekp(0L, ios::end);
    p1.write((char*)(books), sizeof(Bookdata) * num_books);
    p1.clear();
    p1.close();
}
void savebookschangebooks(Management books[], int num_books)
{
    void mainshow();
    void bookmanagement();
    fstream p1;
    int choice;
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    if (!p1)
    {
        cout << "抱歉，打不开文件" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        //打不开文件不会让程序结束。
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    p1.write((char*)(books), sizeof(Management) * num_books);
    p1.clear();
    p1.close();
}
void savebookschangebooks(Bookdata books[], int num_books)
{
    void mainshow();
    void bookmanagement();
    fstream p1;
    int choice;
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    if (!p1)
    {
        cout << "抱歉，打不开文件" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        //打不开文件不会让程序结束。
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    p1.write((char*)(books), sizeof(Bookdata) * num_books);
    p1.clear();
    p1.close();
}
bool is_valid_date(const string& date)
{
    if (date.length() != 10) { // 检验日期字符串是否为10个字符
        return false;
    }
    if (date[4] != '-' || date[7] != '-') { // 检验日期字符串中的分隔符是否正确
        return false;
    }
    int year = stoi(date.substr(0, 4)); // 提取年份
    int month = stoi(date.substr(5, 2)); // 提取月份
    int day = stoi(date.substr(8, 2)); // 提取日期
    if (month < 1 || month > 12) { // 检验月份是否合法
        return false;
    }
    if (day < 1 || day > 31) { // 检验日期是否合法
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) { // 检验小月的日期是否合法
        return false;
    }
    if (month == 2) { // 如果是2月
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { // 如果是闰年
            if (day > 29) { // 检验2月份的日期是否合法
                return false;
            }
        }
        else { // 如果不是闰年
            if (day > 28) { // 检验2月份的日期是否合法
                return false;
            }
        }
    }
    // 检查日期是否存在于日历中
    time_t now = time(0);
    tm* ltm = localtime(&now);
    ltm->tm_year = year - 1900;
    ltm->tm_mon = month - 1;
    ltm->tm_mday = day;
    mktime(ltm);
    return (ltm->tm_year == year - 1900 && ltm->tm_mon == month - 1 && ltm->tm_mday == day);
}
bool compare_dates(Bookdata& book1, Bookdata& book2)
{
    return book1.getdateadded() < book2.getdateadded();
}
bool compare_dates1(Bookdata& book1, Bookdata& book2)
{
    if (strcmp(book1.getdateadded(), book2.getdateadded()) < 0)
        return 1;
    else
        return 0;
}
bool isEmpty(Bookdata* a1)
{
    if (sizeof(a1) == 0)
    {
        return 0;
    }
    else
        return 1;
}
void deleteBook2(int index, Bookdata* read)
{
    fstream  p2;
    Bookdata* f1;
    f1 = new Bookdata[sumbook - 1];
    int i;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    void savebookschangebooks(Bookdata books[], int num_books);
    if (index < 0 || index >= sumbook)
    {
        cout << "无效的书籍索引。请输入有效的索引.\n";
        return;
    }
    cout << "你确定要删除这本书吗(Y/N)（大小写均可以）\n";
    char confirm;
    cin >> confirm;

    if (confirm != 'Y' && confirm != 'y') {
        cout << "取消删除.\n";
        return;
    }
    if (index == sumbook - 1)
    {
        // 如果要删除的书籍是最后一本书，直接将书籍数量减一
        sumbook--;
        for (i = 0; i < sumbook; i++)
        {
            f1[i] = read[i];
        }
        savebookschangebooks(f1, sumbook);
        p2 << sumbook;
    }
    else
    {
        // 否则，将要删除的书籍信息交换到数组的最后一位
        // 然后将书籍数量减一
        swap(read[index], read[sumbook - 1]);
        sumbook--;
        for (i = 0; i < sumbook; i++)
        {
            f1[i] = read[i];
        }
        savebookschangebooks(f1, sumbook);
        p2 << sumbook;
    }

    cout << "恭喜删除成功\n";
}
void fuzzySearchabouttitle(Bookdata* read, int data_size, char query[])
{
    bool found = false;
    int k = 0;
    // 遍历数据集中的每个字符串
    for (int i = 0; i < data_size; i++)
    {
        // 如果字符串中包含查询字符串，就将其输出
        if (strstr(read[i].gettitle(), query) != nullptr)
        {
            cout << "第";
            cout << k + 1;
            cout << "本的";
            cout << "书本的信息如下：" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "实在非常抱歉，没有找到相关书本的信息..." << endl;
    }
}
void fuzzySearchaboutauthor(Bookdata* read, int data_size, char query[])
{
    bool found = false;
    int k = 0;
    // 遍历数据集中的每个字符串
    for (int i = 0; i < data_size; i++)
    {
        // 如果字符串中包含查询字符串，就将其输出
        if (strstr(read[i].getauthor(), query) != nullptr)
        {
            cout << "第";
            cout << k + 1;
            cout << "本的";
            cout << "书本的信息如下：" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "实在非常抱歉，没有找到相关书本的信息..." << endl;
    }
}
void fuzzySearchaboutpublisher(Bookdata* read, int data_size, char query[])
{
    bool found = false;
    int k = 0;
    // 遍历数据集中的每个字符串
    for (int i = 0; i < data_size; i++)
    {
        // 如果字符串中包含查询字符串，就将其输出
        if (strstr(read[i].getpublisher(), query) != nullptr)
        {
            cout << "第";
            cout << k + 1;
            cout << "本的";
            cout << "书本的信息如下：" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "实在非常抱歉，没有找到相关书本的信息..." << endl;
    }
}
void fuzzySearchaboutisbn(Bookdata* read, int data_size, char query[])
{

    bool found = false;
    int k = 0;
    // 遍历数据集中的每个字符串
    for (int i = 0; i < data_size; i++)
    {
        // 如果字符串中包含查询字符串，就将其输出
        if (strstr(read[i].getisbn(), query) != nullptr)
        {
            cout << "第";
            cout << k + 1;
            cout << "本的";
            cout << "书本的信息如下：" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "实在非常抱歉，没有找到相关书本的信息..." << endl;
    }
}
void fuzzySearchaboutisbn2(Sale* read, int data_size, char query[], int num)
{

    bool found = false;
    int k = 0;
    // 遍历数据集中的每个字符串
    for (int i = 0; i < data_size; i++)
    {
        // 如果字符串中包含查询字符串，就将其输出
        if (strstr(read[i].getisbn(), query) != nullptr)
        {
            cout << "数量" << num;
            cout << "书名：   " << read[i].gettitle() << "        " << setprecision(1) << "单价：    " << read[i].feedbackre();
            cout << "        " << "RMB: ";
            cout << num * read[i].feedbackre();
            found = true;
            break;
        }

        if (!found)
        {
            cout << "实在非常抱歉，没有找到相关书本的信息..." << endl;
            cout << "请重新输入ISBN" << endl;
            cin >> query;
            i--;
            continue;
        }
    }
}
void fuzzySearchaboutisbn3(Sale* read, int data_size, char query[], int num)
{

    bool found = false;
    int k = 0;
    // 遍历数据集中的每个字符串
    for (int i = 0; i < data_size; i++)
    {
        // 如果字符串中包含查询字符串，就将其输出
        if (strcmp(read[i].getisbn(), query) == 0)
        {
            cout << "这是你刚刚购买的书本的信息：" << endl;
            cout << num;
            cout << "      " << read[i].gettitle() << "        " << setprecision(1) << " RMB:      " << read[i].feedbackre();
            cout << "        " << "RMB: ";
            cout << num * read[i].feedbackre();
            found = true;
            break;
        }

        if (!found)
        {
            cout << "实在非常抱歉，没有找到相关书本的信息..." << endl;
            cout << "请重新输入ISBN" << endl;
            cin >> query;
            i--;
            continue;
        }
    }
}
void lookingforbytitle(char* a)
{
    void mainshow();
    void bookmanagement();
    int length;
    char book_title[100];//如果书名长度超过31会进行报错重新输入,因为书名就没有超过31个字符串的长度
    Bookdata* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Bookdata);
    p1.seekg(0, ios::beg);
    read = new Bookdata[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    strcpy(book_title, a);
    length = strlen(book_title);
    while (1)
    {
        if (length > 51 || length < 0)
        {
            cout << "书名只有长度0~51，输入的不符合规则，请重新输入" << endl;
            cin >> book_title;
            continue;
        }
        else
        {
            break;
        }
    }
    fuzzySearchabouttitle(read, sumbook, book_title);
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    delete[]read;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void lookingforbyauthor(char* a)
{
    void mainshow();
    void bookmanagement();
    int length;
    char authorinfo[100];//如果作者的名长度超过31会进行报错重新输入
    Bookdata* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Bookdata);
    p1.seekg(0, ios::beg);
    read = new Bookdata[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    strcpy(authorinfo, a);
    length = strlen(authorinfo);
    while (1)
    {
        if (length > 31 || length < 0)
        {
            cout << "书名只有长度0~31，输入的不符合规则，请重新输入" << endl;
            cin >> authorinfo;
            continue;
        }
        else
        {
            break;
        }
    }
    fuzzySearchaboutauthor(read, sumbook, authorinfo);
    delete[]read;
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void lookingforbypublisher(char* a)
{
    void mainshow();
    void bookmanagement();
    int length;
    char publisherinfo[100];//如果出版社的名长度超过31会进行报错重新输入
    Bookdata* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Bookdata);
    p1.seekg(0, ios::beg);
    read = new Bookdata[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    strcpy(publisherinfo, a);
    length = strlen(publisherinfo);
    while (1)
    {
        if (length > 31 || length < 0)
        {
            cout << "书名只有长度0~31，输入的不符合规则，请重新输入" << endl;
            cin >> publisherinfo;
            continue;
        }
        else
        {
            break;
        }
    }
    fuzzySearchaboutauthor(read, sumbook, publisherinfo);
    delete[]read;
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void lookingforbook()
{
    char choice[20];
    char thesearchinfomation[50];
    void lookingforbytitle(char*);
    void lookingforbyauthor(char*);
    void lookingforbypublisher(char*);
    cout << "1.按书名查找(带有模糊查找功能)" << endl
        << "2.按作者的名字进行查找(带有模糊查找功能)" << endl
        << "3.按出版社进行查找(带有模糊查找功能)" << endl
        << "请输入你的选择（1~3）";
    while (1)
    {
        if (strlen(choice) != 1)
        {
            cout << "请重新输入" << endl;
            cin >> choice;
            continue;
        }
        else
        {
            if (choice[0] == '1' || choice[0] == '2' || choice[0] == '3')
            {
                break;
            }
        }
    }
    cout << "请输入你需要寻找的关键信息" << endl;
    cin >> thesearchinfomation;
    switch (choice[0])
    {
    case'1':lookingforbytitle(thesearchinfomation); break;
    case'2':lookingforbyauthor(thesearchinfomation); break;
    case'3':lookingforbypublisher(thesearchinfomation); break;
    default:
        break;
    }

}
void changerax()
{
    int choice;

    ifstream p1("C:\\Users\\lufang\\Desktop\\图书管理系统\\税率.txt");


    p1 >> rax;
    p1.close();


    //p1.seekp(0L, ios::beg);
    cout << "现在的税率是" << rax << endl;
    cout << "您想修改为多少？" << endl;
    cin >> rax;
    ofstream p2("C:\\Users\\lufang\\Desktop\\图书管理系统\\税率.txt");
    p2 << rax;
    p2.close();
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void changeonebookinfomation()
{
    void savebookschangebooks(Management books[], int num_books);
    void Library_List();
    void mainshow();
    void bookmanagement();
    Management* read;
    fstream p1, p2;
    int choice;
    int watch_all;
    int length;
    int i;
    int numObjs;
    int bookchange_number;
    int* change_id;
    int qty;
    double wholesale;
    double resale;
    char isbn1[14];
    char booktitle[51];
    char author[30];
    char publisher[31];
    char dateadded[11];
    char check[20];
    if (sumbook == 0)
    {
        cout << "书库里面目前没有书。" << endl
            << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Management);
    p1.seekg(0, ios::beg);
    read = new Management[numObjs];
    p1.read((char*)read, fileSize);

    cout << "你想要看一下所有书的信息吗？ （想的话请输入1，输入其他数字就不显示）" << endl;
    cin >> watch_all;
    if (watch_all == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebook();
            cout << endl;
        }
        watch_all = 0;
    }
    cout << " 请问你想要修改几本书？(最多只支持修改100本,不能超过100本和库存量）" << endl;
    cin >> bookchange_number;
    while (1)
    {
        if (bookchange_number < 0 || bookchange_number>100 || bookchange_number > sumbook)
        {
            cout << "修改书本的数量不符合规定，请重新输入." << endl;
            cin >> bookchange_number;
        }
        else
        {
            break;
        }
    }
    change_id = new int[bookchange_number + 1];
    cout << "请输入你想要修改的本书的序号" << endl;
    for (i = 0; i < bookchange_number; i++)
    {
        cin >> change_id[i];
    }
    for (i = 0; i < bookchange_number; i++)
    {
        cout << "书本的原始信息是：" << endl;
        read[change_id[i] - 1].displaythebook();
        cout << endl;
        cout << "请输入想修改后书的ISBN号" << endl;
        cin >> isbn1;
        length = strlen(isbn1);
        read[change_id[i] - 1].setisbn(isbn1, length);
        cout << "请输入想修改后书的名字" << endl;
        cin >> booktitle;
        length = strlen(booktitle);
        read[change_id[i] - 1].setTitle(booktitle, length);
        cout << "请输入想修改后的书的作者" << endl;
        cin >> author;
        length = strlen(author);
        read[change_id[i] - 1].setanthor(author, length);
        cout << "请输出修改后的书的出版商" << endl;
        cin >> publisher;
        length = strlen(publisher);
        read[change_id[i] - 1].setpublisher(publisher, length);
        cout << "请输入书的进书的日期(日期的格式为2023-05-01）" << endl;
        cin >> dateadded;
        while (1)
        {
            if (is_valid_date(dateadded) != 1)
            {
                cout << "请重新输入日期（格式为2023-00-00）" << endl;
                cin >> dateadded;
                continue;
            }
            else
            {
                break;
            }

        }
        length = strlen(dateadded);
        read[change_id[i] - 1].setdateadded(dateadded, length);
        cout << "请输入修改后的书的库存量" << endl;
        cin >> qty;
        read[change_id[i] - 1].setqty(qty);
        cout << "请输入修改后的书的批发价" << endl;
        cin >> wholesale;
        read[change_id[i] - 1].setwholesale(wholesale);
        cout << "请输入修改后的书的零售价" << endl;
        cin >> resale;
        read[change_id[i] - 1].setretail(resale);
    }
    savebookschangebooks(read, sumbook);
    cout << "恭喜修改成功！" << endl;
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;

        }
        else
        {
            break;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void Lingshoujia()
{
    void mainshow();
    void bookbaobiao();
    void swap(Report & p1, Report & p2);
    Report* read;
    int choice;
    int count_line = 0;
    double* summoney;
    fstream p1, p2;
    int choice2;
    int i, j;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    summoney = new double[sumbook + 1];
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Report);
    p1.seekg(0, ios::beg);
    read = new Report[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookbaobiao();
        default:;
        }
    }
    cout << "你想升序排序(输入1）还是降序排序（输入2）来看图书的零售价列表" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "只有1和2，请你重新进行输入" << endl;
            cin >> choice2;
            continue;
        }
        else
        {
            break;
        }
    }
    if (choice2 == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (read[i].feedbackre() < read[j].feedbackre())
                {
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            summoney[i] = read[i].feedbackqty() * read[i].feedbackre();
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebookre();
            cout << "总的零售价为" << summoney[i] << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    if (choice2 == 2)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (read[i].feedbackre() > read[j].feedbackre())
                {
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            summoney[i] = read[i].feedbackqty() * read[i].feedbackre();
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebookre();
            cout << "总的零售价为";
            cout << summoney[i];
            cout << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    p1.close();
    p2.close();
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookbaobiao();
    default:;
    }
}
void Pifajia()
{
    void mainshow();
    void bookbaobiao();
    void swap(Report & p1, Report & p2);
    Report* read;
    int choice;
    double* summoney;
    fstream p1, p2;
    int choice2;
    int count_line = 0;
    int i, j;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    summoney = new double[sumbook + 1];
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Report);
    p1.seekg(0, ios::beg);
    read = new Report[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookbaobiao();
        default:;
        }
    }

    cout << "你想升序排序(输入1）还是降序排序（输入2）来看图书的批发价列表" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "只有1和2，请你重新进行输入" << endl;
            cin >> choice2;
            continue;
        }
        else
        {
            break;
        }
    }
    if (choice2 == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (read[i].feedbackwhole() < read[j].feedbackwhole())
                {
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            summoney[i] = read[i].feedbackqty() * read[i].feedbackwhole();
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebookWhole();
            cout << "总批发价金额为" << summoney[i] << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    if (choice2 == 2)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (read[i].feedbackwhole() > read[j].feedbackwhole())
                {
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            summoney[i] = read[i].feedbackqty() * read[i].feedbackwhole();
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebookWhole();
            cout << "总批发价的金额为" << summoney[i] << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    p1.close();
    p2.close();
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookbaobiao();
    default:;
    }
}
void removebook()
{
    void swap(int& a, int& b);
    void savebookschangebooks(Management books[], int num_books);
    void Library_List();
    void mainshow();
    void bookmanagement();
    Management* read;
    Management* change;
    fstream p1, p2;
    int choice;
    int watch_all;
    int length;
    int i, j;
    int numObjs;
    int bookchange_number;
    int* change_id;
    int qty;
    double wholesale;
    double resale;

    char booktitle[51];
    booktitle[0] = NULL;
    if (sumbook == 0)
    {
        cout << "书库里面目前没有书。" << endl
            << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Management);
    p1.seekg(0, ios::beg);
    read = new Management[numObjs];
    p1.read((char*)read, fileSize);

    cout << "你想要看一下所有书的信息吗？ （想的话请输入1，输入其他数字就不显示）" << endl;
    cin >> watch_all;
    if (watch_all == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            read[i].displaythebook();
            cout << endl;
        }
        watch_all = 0;
    }
    cout << " 请问你想要删除几本书？(最多只支持删除100本,不能超过100本和库存量）";
    cin >> bookchange_number;
    change = new Management[sumbook - bookchange_number + 1];
    while (1)
    {
        if (bookchange_number < 0 || bookchange_number>100 || bookchange_number > sumbook)
        {
            cout << "删除书本的数量不符合规定，请重新输入." << endl;
            cin >> bookchange_number;
        }
        else
        {
            break;
        }
    }
    change_id = new int[bookchange_number + 1];
    cout << "请输入你想要删除的本书的序号" << endl;
    for (i = 0; i < bookchange_number; i++)
    {
        cin >> change_id[i];
    }
    cout << "你确定要删除这本书吗(Y/N)（大小写均可以）\n";
    char confirm;
    cin >> confirm;

    if (confirm != 'Y' && confirm != 'y')
    {
        cout << "取消删除.\n";
        return;
    }
    int t = 0;
    for (i = 0; i < bookchange_number; i++)
    {
        cout << "这书本的原始信息是：" << endl;
        read[change_id[i] - 1].displaythebook();
        cout << endl;

    }
    for (i = 0; i < sumbook - bookchange_number; i++)
    {
        for (j = 0; j < sumbook - bookchange_number; j++)
        {
            if (change_id[i] < change_id[j])
            {
                swap(change_id[i], change_id[j]);
            }
        }
    }
    int g = 0;
    int kk = 0;
    for (i = 0; i < sumbook; i++)
    {
        if (i == change_id[g] - 1)
        {
            kk = g;
            g++;
        }
        if (i != change_id[kk] - 1)
        {
            change[t] = read[i];
            t++;
        }

    }
    delete[]read;
    int e = sumbook - bookchange_number;
    sumbook = sumbook - bookchange_number;
    savebookschangebooks(change, e);
    ofstream p3("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt");
    p3 << sumbook;
    p3.close();
    delete[]change;
    cout << "恭喜删除成功！" << endl;
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;

        }
        else
        {
            break;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }

}
bool compare_two(char* a, char* b)
{
    if (strcmp(a, b) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool compare_two1(char* a, char* b)
{
    if (strcmp(a, b) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool check_the_booknum(int temp)
{
    if (temp < 0)
        return true;
    else
        return false;
}
void addbook()
{
    void savebooks(Management books[], int num_books);
    fstream  p2;
    Management* book;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    // p2 >> sumbook;
    int numkind;
    int i, length;
    cout << "你想要增加几种书 " << endl;
    cin >> numkind;
    book = new Management[numkind + 1];
    sumbook = sumbook + numkind;
    //cout << sumbook;
    p2 << sumbook;
    int choice;

    char isbn1[14];
    char booktitle[51];
    char author[30];
    char publisher[31];
    char dateadded[11];
    int qtyOnHand1;
    double wholesale1;
    double retail1;
    //cout << "读取到的书的总量是" << sumbook << endl;;
    for (i = 0; i < numkind; i++)
    {
        cout << "请输入加入第";
        cout << i + 1;
        cout << "本的信息：" << endl;
        cout << "请输入书的ISBN号" << endl;
        cin >> isbn1;
        length = strlen(isbn1);
        book[i].setisbn(isbn1, length);
        cout << "请输入书的名字" << endl;
        cin >> booktitle;
        length = strlen(booktitle);
        book[i].setTitle(booktitle, length);
        cout << "请输入书的作者" << endl;
        cin >> author;
        length = strlen(author);
        book[i].setanthor(author, length);
        cout << "请输出书的出版商" << endl;
        cin >> publisher;
        length = strlen(publisher);
        book[i].setpublisher(publisher, length);
        cout << "请输入书的进书的日期(日期的格式为2023-05-01）" << endl;
        cin >> dateadded;
        while (1)
        {
            if (is_valid_date(dateadded) != 1)
            {
                cout << "请重新输入日期（格式为2023-00-00）" << endl;
                cin >> dateadded;
                continue;
            }
            else
            {
                break;
            }

        }
        book[i].setdateadded(dateadded, length);
        cout << "请输入加入书库的书本的数量" << endl;
        cin >> qtyOnHand1;
        book[i].setqty(qtyOnHand1);
        cout << "请输入书本的批发价" << endl;
        cin >> wholesale1;
        book[i].setwholesale(wholesale1);
        cout << "请输入书本的零售价" << endl;
        cin >> retail1;
        book[i].setretail(retail1);
        cout << endl;
    }
    savebooks(book, numkind);
    p2.close();
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    delete[]book;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
        else
        {
            break;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void Thesumofbook()
{
    void mainshow();
    void bookbaobiao();
    void swap(Report & p1, Report & p2);
    Report* read;
    int choice;
    fstream p1, p2;
    int choice2;
    int count_line = 0;
    int i, j;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Report);
    p1.seekg(0, ios::beg);
    read = new Report[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookbaobiao();
        default:;
        }
    }
    cout << "你想升序排序(输入1）还是降序排序（输入2）来看图书的批发价列表" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "只有1和2，请你重新进行输入" << endl;
            cin >> choice2;
            continue;
        }
        else
        {
            break;
        }
    }
    if (choice2 == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (read[i].feedbackqty() < read[j].feedbackqty())
                {
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythesumofbook();
            cout << endl;
            count_line += 4;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    if (choice2 == 2)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (read[i].feedbackqty() > read[j].feedbackqty())
                {
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythesumofbook();
            cout << endl;
            count_line += 4;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    p1.close();
    p2.close();
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookbaobiao();
    default:;
    }
}
void sort_by_the_sum_ofthebookvalue()
{
    double* a;
    void mainshow();
    void bookbaobiao();
    void swap(Report & p1, Report & p2);
    void swap(double& a1, double& a2);
    Report* read;
    int choice;
    int count_line = 0;
    fstream p1, p2;
    int choice2;
    int i, j;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    a = new double[sumbook + 1];
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Report);
    p1.seekg(0, ios::beg);
    read = new Report[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookbaobiao();
        default:;
        }
    }
    for (i = 0; i < sumbook; i++)
    {
        a[i] = read[i].feedbackqty() * read[i].feedbackwhole();
    }
    cout << "你想升序排序(输入1）还是降序排序（输入2）来看图书的批发价列表" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "只有1和2，请你重新进行输入" << endl;
            cin >> choice2;
            continue;
        }
        else
        {
            break;
        }
    }
    if (choice2 == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (a[i] < a[j])
                {
                    swap(a[i], a[j]);
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    if (choice2 == 2)
    {
        for (i = 0; i < sumbook; i++)
        {
            for (j = 0; j < sumbook; j++)
            {
                if (a[i] > a[j])
                {
                    swap(a[i], a[j]);
                    swap(read[i], read[j]);
                }
            }
        }
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    delete[]a;
    p1.close();
    p2.close();
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookbaobiao();
    default:;
    }
}
void swap(double& a, double& b)
{
    double temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int& a, int& b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(Report& a1, Report& a2)
{
    Report temp;
    temp = a1;
    a1 = a2;
    a2 = temp;
}
void swap(Bookdata& a1, Bookdata& a2)
{
    Bookdata temp;
    temp = a1;
    a1 = a2;
    a2 = temp;
}
void sort_by_the_date()
{
    int str_to_int(string str);
    void swap(int& a, int& b);
    void swap(Bookdata & p1, Bookdata & p2);
    void mainshow();
    void bookbaobiao();
    void swap(Report & p1, Report & p2);
    void swap(double& a1, double& a2);
    Report* read;

    int count_line = 0;
    char dateadded[20];
    int choice;
    fstream p1, p2;
    int choice2;
    int i, j;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Report);
    p1.seekg(0, ios::beg);
    read = new Report[numObjs + 1];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookbaobiao();
        default:;
        }
    }

    cout << "你想从新到旧排序(输入1）还是从旧到新排序（输入2）来看图书的批发价列表" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "只有1和2，请你重新进行输入" << endl;
            cin >> choice2;
            continue;
        }
        else
        {
            break;
        }
    }
    if (choice2 == 1)
    {
        sort(read + 0, read + sumbook, compare_dates1);
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    if (choice2 == 2)
    {
        sort(read, read + sumbook, compare_dates);
        for (i = 0; i < sumbook; i++)
        {
            cout << "第";
            cout << i + 1;
            cout << "本" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "已显示满50行，按任意键继续..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }

    }

    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    delete[]read;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;

        }
        else
        {
            break;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookbaobiao();
    default:;
    }
}
void Library_List()
{
    void bookbaobiao();
    Report* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    int count_line = 0;
    p2.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Report);
    p1.seekg(0, ios::beg);
    read = new Report[numObjs];
    p1.read((char*)read, fileSize);
    if (sumbook == 0)
    {
        cout << "书库中还没有书" << endl;
        cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "只有1和2和3，请重新输入一个" << endl;
                cin >> choice;
            }
        }
        switch (choice)
        {
        case 1: exit(0); break;
        case 2:mainshow();
        case 3:bookmanagement();
        default:;
        }
    }
    for (i = 0; i < sumbook; i++)
    {
        cout << "第";
        cout << i + 1;
        cout << "本" << endl;
        read[i].displaythebook();
        cout << endl;
        count_line += 10;
        if (count_line == 50)
        {
            cout << "已显示满50行，按任意键继续..." << endl;
            count_line = 0;
            system("pause");
            system("cls");
        }
    }
    p1.close();
    p1.clear();
    delete[]read;
    cout << "你想结束程序（请按1）还是返回主菜单（请按2）还是想回到图书管理的界面（请按3）" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "只有1和2和3，请重新输入一个" << endl;
            cin >> choice;
        }
    }
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookbaobiao();
    default:;
    }
}
void setsumbook()
{
    int length;
    fstream p1;
    p1.open("C:\\Users\\lufang\\Desktop\\图书管理系统\\存放sumbook数量的文件.txt", ios::in | ios::out);
    p1 >> sumbook;
    /* cout << ch << endl;
     cout << length << endl;*/
     //cout << sumbook;
    p1.close();
}
void setrax()
{
    ifstream p1("C:\\Users\\lufang\\Desktop\\图书管理系统\\税率.txt");
    p1 >> rax;
    p1.close();
}
int str_to_int(string str)
{
    int result = 0;
    int sign = 1;
    int i = 0;
    if (str[0] == '-')
    {
        sign = -1;
        i++;
    }
    for (; i < str.length(); i++) {
        result = result * 10 + (str[i] - '0');
    }
    return sign * result;
}

int main()
{
    setrax();
    setsumbook();
    mainshow();
}
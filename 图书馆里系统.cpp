#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>//���Ҫ��һ��ʼ���е�new�ռ䶼Ҫɾ��һ��
#include <stdlib.h>//�������ʱ����Զ���������Ƿ�Ϊ0
#include <ctime>// Ϊ��ǰ̨����ģ�����show time
#include <iomanip>//for the nice output
#include <cstring>//�������ص�ģ�����������
#include <fstream>//changgebook��������Ҫ�޸�һ��
#include <string>//Ϊ��stoi
#include <algorithm>//Ϊ��ʹ��sort�����������Ĭ��ʹ��operator<������������������������Ԫ��
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

    cout << "   ����   " << booktitle << "        " << " ����RMB: " << setprecision(2) << retail;
    cout << "     �ܹ�RMB: ";
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
    cout << "������" << booktitle << endl;
    cout << "�������" << qtyOnHand << endl;
}
void Bookdata::displaythebook()
{
    if (booktitle[0] != NULL)
    {
        std::cout << "ISBN�ţ�" << isbn << endl;
        std::cout << "��  ����" << booktitle << endl;
        cout << "��  �ߣ�" << author << endl;
        cout << "�����磺" << publisher << endl;
        cout << "�������ڣ�" << dateAdded << endl;
        cout << "�������" << qtyOnHand << endl;
        cout << "�����ۣ�" << wholesale << endl;
        cout << "���ۼۣ�" << retail << endl;
    }
}
void Bookdata::displaythebook_value()
{
    if (booktitle[0] != NULL)
    {
        cout << "������" << booktitle << endl;
        cout << "�������" << qtyOnHand << endl;
        cout << "�����ۣ�" << wholesale << endl;
        cout << "�������ܶ" << qtyOnHand * wholesale << endl;
    }

}
void Bookdata::displaythebookWhole()
{
    if (booktitle[0] != NULL)
    {
        cout << "������" << booktitle << endl;
        cout << "�����ۣ�" << wholesale << endl;
        cout << "�������" << qtyOnHand << endl;
    }
}
void Bookdata::displaythebookre()
{
    if (booktitle[0] != NULL)
    {
        cout << "������" << booktitle << endl;
        cout << "���ۼۣ�" << retail << endl;
        cout << "�������" << qtyOnHand << endl;
    }
}
void Bookdata::delete_itself()
{
    booktitle[0] = '/0';
}
void Bookdata::sell_list()
{
    cout << "����:" << booktitle << endl;
    cout << "ISBN:" << isbn << endl;
    cout << "���ۼ۸�" << retail << endl;
    cout << "��ʣ��������" << qtyOnHand << endl;
}
void Sale::sell_list()
{
    cout << "����:" << booktitle << endl;
    cout << "ISBN:" << isbn << endl;
    cout << "���ۼ۸�" << retail << endl;
    cout << "��ʣ��������" << qtyOnHand << endl;
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
    cout << "������" << booktitle << endl;
    cout << "�������" << qtyOnHand << endl;
}
void Report::displaythebook()
{
    if (booktitle[0] != NULL)
    {
        std::cout << "ISBN�ţ�" << isbn << endl;
        std::cout << "��  ����" << booktitle << endl;
        cout << "��  �ߣ�" << author << endl;
        cout << "�����磺" << publisher << endl;
        cout << "�������ڣ�" << dateAdded << endl;
        cout << "�������" << qtyOnHand << endl;
        cout << "�����ۣ�" << wholesale << endl;
        cout << "���ۼۣ�" << retail << endl;
    }
}
void Report::displaythebook_value()
{
    if (booktitle[0] != NULL)
    {
        cout << "������" << booktitle << endl;
        cout << "�������" << qtyOnHand << endl;
        cout << "�����ۣ�" << wholesale << endl;
        cout << "�������ܶ" << qtyOnHand * wholesale << endl;
    }

}
void Report::displaythebookWhole()
{
    if (booktitle[0] != NULL)
    {
        cout << "������" << booktitle << endl;
        cout << "�����ۣ�" << wholesale << endl;
        cout << "�������" << qtyOnHand << endl;
    }
}
void Report::displaythebookre()
{
    if (booktitle[0] != NULL)
    {
        cout << "������" << booktitle << endl;
        cout << "���ۼۣ�" << retail << endl;
        cout << "�������" << qtyOnHand << endl;
    }
}
void mainshow()//����Ҫ�ĺ������������
{
    void getmoneypart();
    void bookbaobiao();
    void bookmanagement();
    int choice;
    cout << "---��ӭ����ͼ�����ϵͳ---" << endl;
    cout << "Fivestarͼ�����ϵͳ" << endl << "    ���˵�    " << endl;
    cout << "  1.����ģ��" << endl;
    cout << "  2.������ģ��" << endl;
    cout << "  3.����ģ��" << endl;
    cout << "  4.�˳�ϵͳ" << endl;
    cout << "  ������ѡ��(1~4):" << endl;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3 && choice != 4)
        {
            cout << "ֻ��1��2��3��4�ɹ�ѡ������������" << endl;
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
void getmoneypart()//����ϵͳ
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
    tm* localTime = localtime(&now);  // ����ǰʱ��ת��Ϊ����ʱ��ṹ��
    char id[100][14];
    char k1[3];
    double money1 = 0, money2 = 0, money3 = 0;
    cout << "���뿴һ�µ����嵥��(���������ѡ�񣩣�" << endl;
    cout << "1.��             2.����" << endl;
    cin >> choiceee;
    the_bought_number = 0;
    while (1)
    {
        if (choiceee != 1 && choiceee != 2)
        {
            cout << "�������Ϣ��������������" << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].sell_list();
            cout << endl;
        }
    }
    while (1)
    {
        cout << "��������Ҫ����ĵ�" << k + 1 << "�����ISBN�ţ�" << endl;
        cin >> id[k];
        cout << "��������Ҫ����ĵ�" << k + 1 << "��������" << endl;
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
                    cout << "��������㣬����������" << endl;
                    num[k] = 0;
                    cout << "������ոչ�����鱾����Ϣ��" << endl;
                    cout << "������0  ";
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
                    cout << "��Ǹ�����Ŀ��û����ô������,����������" << endl;
                    cin >> num[k];
                    temp = read[i].feedbackqty() - num[k];
                }

                cout << "������ոչ�����鱾����Ϣ��" << endl;
                cout << "������  " << num[k];
                the_book_id[t] = i;
                t++;
                read[i].displaythebook_sell();

                read[i].setqty(temp);
                cout << setprecision(3) << num[k] * read[i].feedbackre() << endl;

            }

        }

        k++;
        // cout << setprecision(1) << num[k] * read[i].feedbackre();
        cout << "�Ƿ񻹹����������飿(yes or no)" << endl;
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
    cout << "ǰ̨����ģ��" << endl;
    cout << "����: " << localTime->tm_year + 1900
        << "��" << localTime->tm_mon + 1
        << "��" << localTime->tm_mday
        << "��" << endl;  // ����
    cout << setw(5) << "����"
        << setw(14) << "ISBN��"
        << setw(15) << "����"
        << setw(15) << "����"
        << setw(15) << "���"
        << endl;
    for (i = 0; i < the_bought_number; i++)
    {
        cout << "    " << num[i];
        read[the_book_id[i]].displaythebook_sell2();
        cout << setw(15) << num[i] * read[the_book_id[i]].feedbackre() << endl;
        sum_sell_money = num[i] * read[the_book_id[i]].feedbackre() + sum_sell_money;
    }

    cout << "------------------------------------" << endl;
    cout << "���ۺϼƣ�RMB��" << setprecision(3) << sum_sell_money << endl;
    cout << "����˰�� RMB��" << setprecision(2) << sum_sell_money * rax << endl;
    cout << "Ӧ���ܶRMB��" << setprecision(3) << sum_sell_money + (sum_sell_money * rax) << endl;
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    //�򲻿��ļ������ó��������
    cin >> choice;
    switch (choice)
    {
    case 1: exit(0); break;
    case 2:mainshow();
    case 3:bookmanagement();
    default:;
    }
}
void bookmanagement()//ͼ�����ϵͳ
{
    void changerax();
    void lookingforbook();
    void changeonebookinfomation();
    void addbook();
    void removebook();
    int choice;
    cout << "  lflͼ�����ϵͳ " << endl << "   ͼ�����ģ��" << endl
        << "1.����ĳ�������Ϣ" << endl
        << "2.������" << endl
        << "3.�޸������Ϣ " << endl
        << "4.ɾ���� " << endl
        << "5.�ı�˰��" << endl
        << "6.���ص����˵� " << endl

        << "���������ѡ��1��6��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice < 1 || choice >6)
        {
            cout << "����ˣ�ֻ��1��6������������" << endl;
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
void bookbaobiao()//����ϵͳ
{
    void sort_by_the_date();
    void Pifajia();
    void Lingshoujia();
    void Thesumofbook();
    void Library_List();
    void sort_by_the_sum_ofthebookvalue();
    int choice;
    cout << "lflͼ�����ϵͳ" << endl;
    cout << "   ����ģ��  " << endl
        << "1.����б�" << endl
        << "2.�������б�" << endl
        << "3.���ۼ��б�" << endl
        << "4.����������б�" << endl
        << "5.����ļ�ֵ���б�" << endl
        << "6.�����������б�" << endl
        << "7.���ص����˵�" << endl
        << "����ѡ��1��7��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice < 1 || choice >7)
        {
            cout << "����ˣ�ֻ��1��7������������" << endl;
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
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary | ios::app);
    if (!p1)
    {
        cout << "��Ǹ���򲻿��ļ�" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        //�򲻿��ļ������ó��������
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary | ios::app);
    if (!p1)
    {
        cout << "��Ǹ���򲻿��ļ�" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        //�򲻿��ļ������ó��������
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    if (!p1)
    {
        cout << "��Ǹ���򲻿��ļ�" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        //�򲻿��ļ������ó��������
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    if (!p1)
    {
        cout << "��Ǹ���򲻿��ļ�" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        //�򲻿��ļ������ó��������
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    if (date.length() != 10) { // ���������ַ����Ƿ�Ϊ10���ַ�
        return false;
    }
    if (date[4] != '-' || date[7] != '-') { // ���������ַ����еķָ����Ƿ���ȷ
        return false;
    }
    int year = stoi(date.substr(0, 4)); // ��ȡ���
    int month = stoi(date.substr(5, 2)); // ��ȡ�·�
    int day = stoi(date.substr(8, 2)); // ��ȡ����
    if (month < 1 || month > 12) { // �����·��Ƿ�Ϸ�
        return false;
    }
    if (day < 1 || day > 31) { // ���������Ƿ�Ϸ�
        return false;
    }
    if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30) { // ����С�µ������Ƿ�Ϸ�
        return false;
    }
    if (month == 2) { // �����2��
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) { // ���������
            if (day > 29) { // ����2�·ݵ������Ƿ�Ϸ�
                return false;
            }
        }
        else { // �����������
            if (day > 28) { // ����2�·ݵ������Ƿ�Ϸ�
                return false;
            }
        }
    }
    // ��������Ƿ������������
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    void savebookschangebooks(Bookdata books[], int num_books);
    if (index < 0 || index >= sumbook)
    {
        cout << "��Ч���鼮��������������Ч������.\n";
        return;
    }
    cout << "��ȷ��Ҫɾ���Ȿ����(Y/N)����Сд�����ԣ�\n";
    char confirm;
    cin >> confirm;

    if (confirm != 'Y' && confirm != 'y') {
        cout << "ȡ��ɾ��.\n";
        return;
    }
    if (index == sumbook - 1)
    {
        // ���Ҫɾ�����鼮�����һ���飬ֱ�ӽ��鼮������һ
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
        // ���򣬽�Ҫɾ�����鼮��Ϣ��������������һλ
        // Ȼ���鼮������һ
        swap(read[index], read[sumbook - 1]);
        sumbook--;
        for (i = 0; i < sumbook; i++)
        {
            f1[i] = read[i];
        }
        savebookschangebooks(f1, sumbook);
        p2 << sumbook;
    }

    cout << "��ϲɾ���ɹ�\n";
}
void fuzzySearchabouttitle(Bookdata* read, int data_size, char query[])
{
    bool found = false;
    int k = 0;
    // �������ݼ��е�ÿ���ַ���
    for (int i = 0; i < data_size; i++)
    {
        // ����ַ����а�����ѯ�ַ������ͽ������
        if (strstr(read[i].gettitle(), query) != nullptr)
        {
            cout << "��";
            cout << k + 1;
            cout << "����";
            cout << "�鱾����Ϣ���£�" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "ʵ�ڷǳ���Ǹ��û���ҵ�����鱾����Ϣ..." << endl;
    }
}
void fuzzySearchaboutauthor(Bookdata* read, int data_size, char query[])
{
    bool found = false;
    int k = 0;
    // �������ݼ��е�ÿ���ַ���
    for (int i = 0; i < data_size; i++)
    {
        // ����ַ����а�����ѯ�ַ������ͽ������
        if (strstr(read[i].getauthor(), query) != nullptr)
        {
            cout << "��";
            cout << k + 1;
            cout << "����";
            cout << "�鱾����Ϣ���£�" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "ʵ�ڷǳ���Ǹ��û���ҵ�����鱾����Ϣ..." << endl;
    }
}
void fuzzySearchaboutpublisher(Bookdata* read, int data_size, char query[])
{
    bool found = false;
    int k = 0;
    // �������ݼ��е�ÿ���ַ���
    for (int i = 0; i < data_size; i++)
    {
        // ����ַ����а�����ѯ�ַ������ͽ������
        if (strstr(read[i].getpublisher(), query) != nullptr)
        {
            cout << "��";
            cout << k + 1;
            cout << "����";
            cout << "�鱾����Ϣ���£�" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "ʵ�ڷǳ���Ǹ��û���ҵ�����鱾����Ϣ..." << endl;
    }
}
void fuzzySearchaboutisbn(Bookdata* read, int data_size, char query[])
{

    bool found = false;
    int k = 0;
    // �������ݼ��е�ÿ���ַ���
    for (int i = 0; i < data_size; i++)
    {
        // ����ַ����а�����ѯ�ַ������ͽ������
        if (strstr(read[i].getisbn(), query) != nullptr)
        {
            cout << "��";
            cout << k + 1;
            cout << "����";
            cout << "�鱾����Ϣ���£�" << endl;
            read[i].displaythebook();
            cout << endl;
            found = true;
            k++;
        }
    }

    if (!found)
    {
        cout << "ʵ�ڷǳ���Ǹ��û���ҵ�����鱾����Ϣ..." << endl;
    }
}
void fuzzySearchaboutisbn2(Sale* read, int data_size, char query[], int num)
{

    bool found = false;
    int k = 0;
    // �������ݼ��е�ÿ���ַ���
    for (int i = 0; i < data_size; i++)
    {
        // ����ַ����а�����ѯ�ַ������ͽ������
        if (strstr(read[i].getisbn(), query) != nullptr)
        {
            cout << "����" << num;
            cout << "������   " << read[i].gettitle() << "        " << setprecision(1) << "���ۣ�    " << read[i].feedbackre();
            cout << "        " << "RMB: ";
            cout << num * read[i].feedbackre();
            found = true;
            break;
        }

        if (!found)
        {
            cout << "ʵ�ڷǳ���Ǹ��û���ҵ�����鱾����Ϣ..." << endl;
            cout << "����������ISBN" << endl;
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
    // �������ݼ��е�ÿ���ַ���
    for (int i = 0; i < data_size; i++)
    {
        // ����ַ����а�����ѯ�ַ������ͽ������
        if (strcmp(read[i].getisbn(), query) == 0)
        {
            cout << "������ոչ�����鱾����Ϣ��" << endl;
            cout << num;
            cout << "      " << read[i].gettitle() << "        " << setprecision(1) << " RMB:      " << read[i].feedbackre();
            cout << "        " << "RMB: ";
            cout << num * read[i].feedbackre();
            found = true;
            break;
        }

        if (!found)
        {
            cout << "ʵ�ڷǳ���Ǹ��û���ҵ�����鱾����Ϣ..." << endl;
            cout << "����������ISBN" << endl;
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
    char book_title[100];//����������ȳ���31����б�����������,��Ϊ������û�г���31���ַ����ĳ���
    Bookdata* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
            cout << "����ֻ�г���0~51������Ĳ����Ϲ�������������" << endl;
            cin >> book_title;
            continue;
        }
        else
        {
            break;
        }
    }
    fuzzySearchabouttitle(read, sumbook, book_title);
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
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
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    char authorinfo[100];//������ߵ������ȳ���31����б�����������
    Bookdata* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
            cout << "����ֻ�г���0~31������Ĳ����Ϲ�������������" << endl;
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
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    char publisherinfo[100];//���������������ȳ���31����б�����������
    Bookdata* read;
    int choice;
    fstream p1, p2;
    int i;
    int numObjs;
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
            cout << "����ֻ�г���0~31������Ĳ����Ϲ�������������" << endl;
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
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    cout << "1.����������(����ģ�����ҹ���)" << endl
        << "2.�����ߵ����ֽ��в���(����ģ�����ҹ���)" << endl
        << "3.����������в���(����ģ�����ҹ���)" << endl
        << "���������ѡ��1~3��";
    while (1)
    {
        if (strlen(choice) != 1)
        {
            cout << "����������" << endl;
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
    cout << "����������ҪѰ�ҵĹؼ���Ϣ" << endl;
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

    ifstream p1("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\˰��.txt");


    p1 >> rax;
    p1.close();


    //p1.seekp(0L, ios::beg);
    cout << "���ڵ�˰����" << rax << endl;
    cout << "�����޸�Ϊ���٣�" << endl;
    cin >> rax;
    ofstream p2("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\˰��.txt");
    p2 << rax;
    p2.close();
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
        cout << "�������Ŀǰû���顣" << endl
            << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Management);
    p1.seekg(0, ios::beg);
    read = new Management[numObjs];
    p1.read((char*)read, fileSize);

    cout << "����Ҫ��һ�����������Ϣ�� ����Ļ�������1�������������־Ͳ���ʾ��" << endl;
    cin >> watch_all;
    if (watch_all == 1)
    {
        for (i = 0; i < sumbook; i++)
        {
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebook();
            cout << endl;
        }
        watch_all = 0;
    }
    cout << " ��������Ҫ�޸ļ����飿(���ֻ֧���޸�100��,���ܳ���100���Ϳ������" << endl;
    cin >> bookchange_number;
    while (1)
    {
        if (bookchange_number < 0 || bookchange_number>100 || bookchange_number > sumbook)
        {
            cout << "�޸��鱾�����������Ϲ涨������������." << endl;
            cin >> bookchange_number;
        }
        else
        {
            break;
        }
    }
    change_id = new int[bookchange_number + 1];
    cout << "����������Ҫ�޸ĵı�������" << endl;
    for (i = 0; i < bookchange_number; i++)
    {
        cin >> change_id[i];
    }
    for (i = 0; i < bookchange_number; i++)
    {
        cout << "�鱾��ԭʼ��Ϣ�ǣ�" << endl;
        read[change_id[i] - 1].displaythebook();
        cout << endl;
        cout << "���������޸ĺ����ISBN��" << endl;
        cin >> isbn1;
        length = strlen(isbn1);
        read[change_id[i] - 1].setisbn(isbn1, length);
        cout << "���������޸ĺ��������" << endl;
        cin >> booktitle;
        length = strlen(booktitle);
        read[change_id[i] - 1].setTitle(booktitle, length);
        cout << "���������޸ĺ���������" << endl;
        cin >> author;
        length = strlen(author);
        read[change_id[i] - 1].setanthor(author, length);
        cout << "������޸ĺ����ĳ�����" << endl;
        cin >> publisher;
        length = strlen(publisher);
        read[change_id[i] - 1].setpublisher(publisher, length);
        cout << "��������Ľ��������(���ڵĸ�ʽΪ2023-05-01��" << endl;
        cin >> dateadded;
        while (1)
        {
            if (is_valid_date(dateadded) != 1)
            {
                cout << "�������������ڣ���ʽΪ2023-00-00��" << endl;
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
        cout << "�������޸ĺ����Ŀ����" << endl;
        cin >> qty;
        read[change_id[i] - 1].setqty(qty);
        cout << "�������޸ĺ�����������" << endl;
        cin >> wholesale;
        read[change_id[i] - 1].setwholesale(wholesale);
        cout << "�������޸ĺ��������ۼ�" << endl;
        cin >> resale;
        read[change_id[i] - 1].setretail(resale);
    }
    savebookschangebooks(read, sumbook);
    cout << "��ϲ�޸ĳɹ���" << endl;
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    cout << "������������(����1�����ǽ�����������2������ͼ������ۼ��б�" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "ֻ��1��2���������½�������" << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebookre();
            cout << "�ܵ����ۼ�Ϊ" << summoney[i] << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebookre();
            cout << "�ܵ����ۼ�Ϊ";
            cout << summoney[i];
            cout << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    p1.close();
    p2.close();
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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

    cout << "������������(����1�����ǽ�����������2������ͼ����������б�" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "ֻ��1��2���������½�������" << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebookWhole();
            cout << "�������۽��Ϊ" << summoney[i] << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebookWhole();
            cout << "�������۵Ľ��Ϊ" << summoney[i] << endl;
            cout << endl;
            count_line += 5;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    p1.close();
    p2.close();
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
        cout << "�������Ŀǰû���顣" << endl
            << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
    //p1.seekg(0L, ios::beg);
    p2 >> sumbook;
    p1.seekg(0, ios::end);
    int fileSize = p1.tellg();
    numObjs = fileSize / sizeof(Management);
    p1.seekg(0, ios::beg);
    read = new Management[numObjs];
    p1.read((char*)read, fileSize);

    cout << "����Ҫ��һ�����������Ϣ�� ����Ļ�������1�������������־Ͳ���ʾ��" << endl;
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
    cout << " ��������Ҫɾ�������飿(���ֻ֧��ɾ��100��,���ܳ���100���Ϳ������";
    cin >> bookchange_number;
    change = new Management[sumbook - bookchange_number + 1];
    while (1)
    {
        if (bookchange_number < 0 || bookchange_number>100 || bookchange_number > sumbook)
        {
            cout << "ɾ���鱾�����������Ϲ涨������������." << endl;
            cin >> bookchange_number;
        }
        else
        {
            break;
        }
    }
    change_id = new int[bookchange_number + 1];
    cout << "����������Ҫɾ���ı�������" << endl;
    for (i = 0; i < bookchange_number; i++)
    {
        cin >> change_id[i];
    }
    cout << "��ȷ��Ҫɾ���Ȿ����(Y/N)����Сд�����ԣ�\n";
    char confirm;
    cin >> confirm;

    if (confirm != 'Y' && confirm != 'y')
    {
        cout << "ȡ��ɾ��.\n";
        return;
    }
    int t = 0;
    for (i = 0; i < bookchange_number; i++)
    {
        cout << "���鱾��ԭʼ��Ϣ�ǣ�" << endl;
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
    ofstream p3("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt");
    p3 << sumbook;
    p3.close();
    delete[]change;
    cout << "��ϲɾ���ɹ���" << endl;
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    // p2 >> sumbook;
    int numkind;
    int i, length;
    cout << "����Ҫ���Ӽ����� " << endl;
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
    //cout << "��ȡ�������������" << sumbook << endl;;
    for (i = 0; i < numkind; i++)
    {
        cout << "����������";
        cout << i + 1;
        cout << "������Ϣ��" << endl;
        cout << "���������ISBN��" << endl;
        cin >> isbn1;
        length = strlen(isbn1);
        book[i].setisbn(isbn1, length);
        cout << "�������������" << endl;
        cin >> booktitle;
        length = strlen(booktitle);
        book[i].setTitle(booktitle, length);
        cout << "�������������" << endl;
        cin >> author;
        length = strlen(author);
        book[i].setanthor(author, length);
        cout << "�������ĳ�����" << endl;
        cin >> publisher;
        length = strlen(publisher);
        book[i].setpublisher(publisher, length);
        cout << "��������Ľ��������(���ڵĸ�ʽΪ2023-05-01��" << endl;
        cin >> dateadded;
        while (1)
        {
            if (is_valid_date(dateadded) != 1)
            {
                cout << "�������������ڣ���ʽΪ2023-00-00��" << endl;
                cin >> dateadded;
                continue;
            }
            else
            {
                break;
            }

        }
        book[i].setdateadded(dateadded, length);
        cout << "��������������鱾������" << endl;
        cin >> qtyOnHand1;
        book[i].setqty(qtyOnHand1);
        cout << "�������鱾��������" << endl;
        cin >> wholesale1;
        book[i].setwholesale(wholesale1);
        cout << "�������鱾�����ۼ�" << endl;
        cin >> retail1;
        book[i].setretail(retail1);
        cout << endl;
    }
    savebooks(book, numkind);
    p2.close();
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    delete[]book;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    cout << "������������(����1�����ǽ�����������2������ͼ����������б�" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "ֻ��1��2���������½�������" << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythesumofbook();
            cout << endl;
            count_line += 4;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythesumofbook();
            cout << endl;
            count_line += 4;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }
    }
    delete[]read;
    p1.close();
    p2.close();
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
    cout << "������������(����1�����ǽ�����������2������ͼ����������б�" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "ֻ��1��2���������½�������" << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
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
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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

    cout << "������µ�������(����1�����ǴӾɵ�����������2������ͼ����������б�" << endl;
    cin >> choice2;
    while (1)
    {
        if (choice2 != 1 && choice2 != 2)
        {
            cout << "ֻ��1��2���������½�������" << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
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
            cout << "��";
            cout << i + 1;
            cout << "��" << endl;
            read[i].displaythebook();
            cout << endl;
            count_line += 10;
            if (count_line == 50)
            {

                cout << "����ʾ��50�У������������..." << endl;
                count_line = 0;
                system("pause");
                system("cls");

            }
        }

    }

    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    delete[]read;
    cin >> choice;
    while (1)
    {
        if (choice != 1 && choice != 2 && choice != 3)
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p2.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\bookinfomation.dat", ios::in | ios::out | ios::binary);
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
        cout << "����л�û����" << endl;
        cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
        cin >> choice;
        while (1)
        {
            if (choice == 1 || choice == 2 || choice == 3)
            {
                break;
            }
            else
            {
                cout << "ֻ��1��2��3������������һ��" << endl;
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
        cout << "��";
        cout << i + 1;
        cout << "��" << endl;
        read[i].displaythebook();
        cout << endl;
        count_line += 10;
        if (count_line == 50)
        {
            cout << "����ʾ��50�У������������..." << endl;
            count_line = 0;
            system("pause");
            system("cls");
        }
    }
    p1.close();
    p1.clear();
    delete[]read;
    cout << "������������밴1�����Ƿ������˵����밴2��������ص�ͼ�����Ľ��棨�밴3��" << endl;
    cin >> choice;
    while (1)
    {
        if (choice == 1 || choice == 2 || choice == 3)
        {
            break;
        }
        else
        {
            cout << "ֻ��1��2��3������������һ��" << endl;
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
    p1.open("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\���sumbook�������ļ�.txt", ios::in | ios::out);
    p1 >> sumbook;
    /* cout << ch << endl;
     cout << length << endl;*/
     //cout << sumbook;
    p1.close();
}
void setrax()
{
    ifstream p1("C:\\Users\\lufang\\Desktop\\ͼ�����ϵͳ\\˰��.txt");
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
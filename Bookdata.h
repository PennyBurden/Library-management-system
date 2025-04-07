#ifndef Bookdata_h
#define Bookdata_h
#include"Titleinfo.h"
class Bookdata : public Titleinfo // ����Bookdata�࣬�̳���Titleinfo��
{
private:
    static int sumbook; // ��̬��Ա��������ʾͼ������
public:
    Bookdata operator =(const Bookdata& p1); // ���ظ�ֵ������ĺ���
    void displaythebook(); // ��ʾͼ�������Ϣ�ĺ���
    void displaythebookWhole(); // ��ʾͼ�������۵ĺ���
    void displaythebookre(); // ��ʾͼ�����ۼ۵ĺ���
    void displaythesumofbook(); // ��ʾͼ�������ĺ���
    void displaythebook_value(); // ��ʾͼ�����ܼ�ֵ�ĺ���
    void displaythebook_sell(); // ��ʾͼ��������Ϣ�ĺ���
    void displaythebook_sell2(); // ��ʾͼ��������Ϣ�ĺ���
    void setTitle(char*, int); // ����ͼ�����ĺ���
    void setisbn(char*, int); // ����ͼ��ISBN�ŵĺ���
    void setanthor(char*, int); // ����ͼ�����ߵĺ���
    void setpublisher(char*, int); // ����ͼ������̵ĺ���
    void setdateadded(char*, int); // ����ͼ��������ڵĺ���
    void setqty(int); // ����ͼ���������ĺ���
    void setwholesale(int); // ����ͼ�������۵ĺ���
    void setretail(int); // ����ͼ�����ۼ۵ĺ���
    char* gettitle(); // ��ȡͼ�����ĺ���
    char* getisbn(); // ��ȡͼ��ISBN�ŵĺ���
    char* getauthor(); // ��ȡͼ�����ߵĺ���
    char* getpublisher(); // ��ȡͼ������̵ĺ���
    char* getdateadded(); // ��ȡͼ��������ڵĺ���
    int getsumbook(); // ��ȡͼ�������ĺ���
    void putx(int a); // ��ͼ������������a�ĺ���
    void sell_list(); // ��ʾ�����嵥�ĺ���
    void delete_itself(); // ɾ��ͼ����Ϣ�ĺ���
};
#endif
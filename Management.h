#ifndef Management_h
#define Management_h
#include"Report.h"
class Management : public Bookdata // ����Management�࣬�̳���Bookdata��
{
public:
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
};
#endif
#ifndef Report_h
#define Report_h
#include"Sale.h"
class Report : public Bookdata // ����Report�࣬�̳���Bookdata��
{
public:
    void displaythebook(); // ��ʾͼ�������Ϣ�ĺ���
    void displaythebookWhole(); // ��ʾͼ�������۵ĺ���
    void displaythebookre(); // ��ʾͼ�����ۼ۵ĺ���
    void displaythesumofbook(); // ��ʾͼ�������ĺ���
    void displaythebook_value(); // ��ʾͼ�����ܼ�ֵ�ĺ���
};
#endif
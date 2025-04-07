#ifndef Titleinfo_h
#define Titleinfo_h
class Titleinfo // ����Titleinfo��
{
protected: // protected�������η�����ʾ��Щ��Ա�����������������б�����
    char isbn[14]; // ISBN�ţ�����Ϊ14���ַ�
    char booktitle[51]; // ����������Ϊ51���ַ�
    char author[31]; // ���ߣ�����Ϊ31���ַ�
    char publisher[31]; // �����̣�����Ϊ31���ַ�
    char dateAdded[11]; // ������ڣ�����Ϊ11���ַ�
    int qtyOnHand; // �������
    double wholesale; // ������
    double retail; // ���ۼ�
public:
    int feedbackqty(); // ���ؿ�������ĺ���
    double feedbackwhole(); // ���������۵ĺ���
    double feedbackre(); // �������ۼ۵ĺ���
    Titleinfo operator =(const Titleinfo& p1); // ���ظ�ֵ������ĺ���
};
#endif

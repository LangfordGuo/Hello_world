//��Ŀ����
//�����ַ������һ�����ʵĳ��ȣ������Կո������
//�������� :
//һ���ַ������ǿգ�����С��5000��

//������� :
//����N�����һ�����ʵĳ��ȡ�

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //cout << "��Ϊ����ѵ���⣺�����ַ������һ�����ʵĳ��ȣ������Կո����" << endl;
    //cout << "please enter a world��" << endl;
    char words[5000];// ��������Ĭ��ȫ��0
    cin.getline(words, 5000);
    //cout << "������ľ����ǣ�" << words << endl;
    // ����ʵ��
    // �������ĳ���
    int lenth_of_words = strlen(words); // �˴�ֻ�����ɼ����ȣ�\0 �����ᱻ�����ȥ
    //cout << "������ӵĳ�����:" << lenth_of_words << endl;
    //���һ����ĸ��ɶ��
    //cout << "���һ����ĸ��:" << words[lenth_of_words - 1] << endl; // �������飬���һλ��ʵΪ\0
    //�ж����һ�����ʣ�Ҳ�����ҵ����һ���ո񣬽����ַ�����ȡ
    //���Ͻ���Ҫ���ǵ�ֻ��һ�����ʵ����
    //cout << "ĩβΪ" << words[lenth_of_words -1 ] << "��ĸ" << endl; //�������飬������0��ʼ�������һλ��ʵΪ\0�������ӡ
    int count = 0;
    for (int i = lenth_of_words; i > 0; i--)// i�ĳ�ʼֵΪ����ɼ����ȡ��������飬���һλ��ʵΪ\0
    {
        if (words[i - 1] != ' ') //��������ط��Ὣ\0��Ϊ���һ���ַ�������
        {
            count++;
            //cout << "���������Ϊ" << count << endl;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
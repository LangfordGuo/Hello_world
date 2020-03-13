//题目描述
//计算字符串最后一个单词的长度，单词以空格隔开。
//输入描述 :
//一行字符串，非空，长度小于5000。

//输出描述 :
//整数N，最后一个单词的长度。

#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //cout << "华为机试训练题：计算字符串最后一个单词的长度，单词以空格隔开" << endl;
    //cout << "please enter a world：" << endl;
    char words[5000];// 数组后面的默认全是0
    cin.getline(words, 5000);
    //cout << "你输入的句子是：" << words << endl;
    // 功能实现
    // 计算语句的长度
    int lenth_of_words = strlen(words); // 此处只会计算可见长度，\0 并不会被计算进去
    //cout << "输入句子的长度是:" << lenth_of_words << endl;
    //最后一个字母是啥？
    //cout << "最后一个字母是:" << words[lenth_of_words - 1] << endl; // 对于数组，最后一位其实为\0
    //判断最后一个单词，也就是找到最后一个空格，进行字符串截取
    //不严谨，要考虑到只有一个单词的情况
    //cout << "末尾为" << words[lenth_of_words -1 ] << "字母" << endl; //对于数组，计数从0开始算起，最后一位其实为\0，不会打印
    int count = 0;
    for (int i = lenth_of_words; i > 0; i--)// i的初始值为数组可见长度。对于数组，最后一位其实为\0
    {
        if (words[i - 1] != ' ') //但是这个地方会将\0作为最后一个字符来计算
        {
            count++;
            //cout << "计数器结果为" << count << endl;
        }
        else
        {
            break;
        }
    }
    cout << count << endl;
    return 0;
}
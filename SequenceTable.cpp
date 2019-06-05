//
// Created by zfy on 2019/6/5.
//
#include <iostream>
using namespace std;

 /**********线性表的顺序存储实现——顺序表**********/
#define maxlen 100

class SeqTable{
public:
    SeqTable();    //初始化函数
    int length() const;  //返回顺序表长度,不修改成员数据，用const
    bool get_content(const int index,double &temp) const;  //按照序号取相应的元素
    int locate(const double temp) const;   //搜索元素对应的序号
    bool insert(const int index, const double temp);   //插入新的元素
    bool del_content(const int index);   //删除相应序号对应的元素
private:
    double data[maxlen];    //数组实现顺序表
    int count;              //元素个数
};

//具体函数实现
SeqTable::SeqTable() {
    count = 0;
}

int SeqTable::length() const {
    return count;
}

bool SeqTable::get_content(const int index, double &temp) const {
    if(index <= 0 || index > count) return false;
    temp = data[index-1];
    return true;
}

int SeqTable::locate(const double temp) const {
    for(int i=0; i<length(); i++){
        if(data[i] == temp) return (i+1);
    }
    return -1;
}

bool SeqTable::insert(const int index, const double temp) {
    if(count == maxlen) return false;  //顺序表满
    if(index < 1 || index > length()+1) return false; //插入位置错误
    for(int i=count-1; i>index-1; i--){
        data[i+1] = data[i];      //依次向后移动，为插入数据的位置腾出空间
    }
    data[index-1] = temp;  //插入
    count++;
    return true;
}
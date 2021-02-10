//
// Created by zfy on 2019/6/5.
//
#include <iostream>
using namespace std;

 /**********���Ա��˳��洢ʵ�֡���˳���**********/
#define maxlen 100

class SeqTable{
public:
    SeqTable();    //��ʼ������
    int length() const;  //����˳�����,���޸ĳ�Ա���ݣ���const
    bool get_content(int index,double &temp) const;  //�������ȡ��Ӧ��Ԫ��
    int locate(double temp) const;   //����Ԫ�ض�Ӧ�����
    bool insert(int index,double temp);   //�����µ�Ԫ��
    bool del_content(int index);   //ɾ����Ӧ��Ŷ�Ӧ��Ԫ��
    void destroy();
private:
    int *data;              //��̬����
    //double data[maxlen];  //��̬����
    int count;              //Ԫ�ظ���
    int len;                //���ڶ�̬�����ʼ��
};

//���庯��ʵ��
SeqTable::SeqTable() {
    count = 0;
    data = new int[len];
}

int SeqTable::length() const {
    return count;
}

bool SeqTable::get_content(int index, double &temp) const {
    if(index <= 0 || index > count) return false;
    //cout<<"������"<<endl;
    temp = data[index-1];
    return true;
}

int SeqTable::locate(double temp) const {
    for(int i=0; i<length(); i++){
        if(data[i] == temp) return (i+1);
    }
    return -1;
}
bool SeqTable::insert(int index,double temp) {
    if(count == maxlen) return false;  //˳�����
    if(index < 1 || index > length()+1) return false; //����λ�ô���
    for(int i=count-1; i>=index-1; i--){
        data[i+1] = data[i];      //��������ƶ���Ϊ�������ݵ�λ���ڳ��ռ�
    }
    data[index-1] = temp;  //����
    count++;
    return true;
}

bool SeqTable::del_content(int index) {
    if(length() == 0) return false;  //�ձ�
    if(index<1 || index>length()) return false;  //ɾ��Ԫ�ز�����
    for(int i=index+1; i<length(); i++){
        data[i-2] = data[i-1];            //������ǰ�ƶ�
    }
    count--;
    return true;
}
void SeqTable::destroy() {
    delete data;
    count = 0;
}

int main(){
    SeqTable T;
    for(int i=1; i<=100; i++){
        T.insert(i,i);
    }
    double temp=4;
/*
    for(int i=1; i<=100; i++){
        T.get_content(i,temp);
        cout<<temp<<endl;
    }
    cout<<T.locate(35)<<endl;
    for(int i=1; i<=99; i++){
        T.get_content(i,temp);
        cout<<temp<<endl;
    }
*/
    T.destroy();
    cout<<temp<<endl;
    cout<<T.length()<<endl;
    cout<<T.get_content(2,temp)<<endl;
    cout<<temp;
}
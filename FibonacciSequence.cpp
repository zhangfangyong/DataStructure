#include <iostream>
using namespace std;

/****************斐波那契数列求解****************/

//递归求解
int Recursive_FS(int input){
    if(input == 0 or input == 1) return input;
    else return Recursive_FS(input -1) + Recursive_FS(input-2);
}

//非递归求解
int N_Recursive_FS(int input){
    int t1 = 1,t2 = 1,t3 = 0;
    if(input <= 2) t3 = 1;
    else for (int i = 3; i <= input; i++) {
            t3 = t1 + t2;
            t1 = t2;
            t2 = t3;
         }
    return t3;
}

int main() {
    int output,n_output;
    int input = 40 ;
    output = Recursive_FS(input);
    n_output = N_Recursive_FS(input);
    cout<<"递归答案："<<output<<endl;
    cout<<"非递归答案："<<n_output;
}
//#include "iostream"
//using namespace std;
//
//void read(int num[],int len);
//int* addBinaryIntegers(int* num1,int* num2,int* num3,int len);
//
//int main() {
//    int num1[10]{1,0,1,0,0,0,0,1,1,1};
//    int num2[10]{0,1,1,0,1,1,1,0,1,0};
//    int num3[10]{};
//    int len = 10;
//    read(num1,len);
//    read(num2,len);
//    read(addBinaryIntegers(num1,num2,num3,len),len);
//    return 0;
//}
//
//void read(int num[],int len) {
//    for (int i = 0; i < len; ++i) {
//        cout<<num[i];
//    }
//    cout<<endl;
//}
//
//int* addBinaryIntegers(int* num1,int* num2,int* num3,int len) {
////    int num3[10]; 你不能在你要实现的函数里面创建，因为在调用结束之后，编译器将其自动清零，真的绷不住了
//    int bring = 0;
//    while (len>0) {
//        len--;
//        int now = num1[len] + num2[len] + bring;
//        num3[len] = now%2;
//        bring = now/2;
//    }
//    return num3;
//}
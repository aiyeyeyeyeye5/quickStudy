//#include "iostream"
//#include "vector"
//#include "algorithm"
//using namespace std;
//
//void searchTwoNumber(vector<int> seq,int len,int target);
//int main() {
//    vector<int> seq{0,2,3,4,6,7,8,10,13,15};
//    //照顾C++新手的说，vector就是数组，不用在意，跟数组一样用就行
//    sort(seq.begin(),seq.end());
//    searchTwoNumber(seq,seq.size(),11);
//    return 0;
//}
//void searchTwoNumber(vector<int> seq,int len,int target) {
//    for (int i = 0; i < len; ++i) {
//        int l = 0,r = len;
//        int key = target - seq[i];
//        while(l < r) {
//            int mid = (l+r+1)/2;
//            if (seq[mid] <= key) {
//                l = mid;
//            } else {
//                r = mid - 1;
//            }
//        }
//        if (seq[l] == key) {
//            cout<<i<<" "<<r<<endl;
//            return;
//        }
//    }
//    cout<<-1<<endl;
//    return;
//}
#include<iostream>
#include<queue>

using namespace std;

int main(){
        deque<int> d;

        d.push_front(12);
        d.push_back(7);
        cout << d.back()<<endl;
        cout << d.front();
        // cout>>d.pop_back();
        return 0;
}

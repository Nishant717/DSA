                            // array
/*#include <iostream>
#include <array>
using namespace std;
int main()
{
    array<int, 4> a = {1, 2, 3, 4};
    cout<<"size : "<<a.size()<<endl;
    cout << "element at 2nd index : " << a.at(2) << endl;
    cout << "front element : " << a.front() << endl;
    cout << "last element : " << a.back() << endl;
}*/
                            // vector
/*#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int i;
    vector<int> v;
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"capacity : "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"element at index 1 : "<<v.at(1)<<endl;
    for(i=2;i<=9;i++)
    {
        v.push_back(i);
    }
    cout<<"element at index 7 : "<<v.at(7)<<endl;
    cout<<"front : "<<v.front()<<endl;
    cout<<"back : "<<v.back()<<endl;
    v.pop_back();
    cout<<"after pop : "<<endl;
    for(int i:v)
    {
        cout<<i<<" "<<endl;
    }
    cout<<" empty or not : "<<v.empty()<<endl;
}*/
                                // deque
/*#include<iostream>
#include<deque>
using namespace std;
int main()
{
    deque<int> d;
    d.push_back(1);f
    d.push_front(2);
   // cout<<"capacity : "<<d.capacity()<<endl;          throw error
   cout<<"element at index 1 is : "<<d.at(1)<<endl;
   cout<<" before erase : "<<d.size()<<endl;
   d.erase(d.begin(),d.begin()+1);
   cout<<"after erase : "<<d.size()<<endl;
}*/
                            // stack
/*#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;
    s.push("nishant");
    s.push("yadav");
    cout<<"top element : "<<s.top()<<endl;
    s.pop();
    cout<<"now the top element is : "<<s.top()<<endl;
    s.pop();
    cout<<"empty or not : "<<s.empty()<<endl;
}*/
                        // queue
/*#include <iostream>
#include <queue>
using namespace std;
int main()
{
    queue<string> q;
    q.push("nishant");
    q.push("yadav");
    q.push("code");
    cout<<"size before : "<<q.size()<<endl;
    cout << "top element : " << q.front() << endl;
    q.pop();
    cout<<"size after : "<<q.size()<<endl;
    cout << "top element : " << q.front() << endl;
   
}*/
                        //algorithm
#include<iostream>
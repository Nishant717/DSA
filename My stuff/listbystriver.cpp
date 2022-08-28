#include <iostream>
#include <list>
using namespace std;
// we can use push_front,emplace_back...which is not avaliable in vector
int main()
{
    list<int> ls;
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(6);
    for (auto it : ls)
    {
        cout << it << " ";
    }
    cout << endl;
    //rest of function are same like vector
}
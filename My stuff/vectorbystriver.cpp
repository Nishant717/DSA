#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, i;
    vector<int> v1(5, 100);
    cout << v1.size() << endl;
    for (i = 0; i < v1.size(); i++)
    {
        cout << v1[i] << " "; // way to print vector
    }
    cout << endl;
    cout << " value at index 2 is : " << v1.at(2) << endl;
    vector<int> v2(v1);
    cout << " value at index 2 is : " << v2.at(2) << endl;
    vector<int> v3;
    n = v3.size();
    cout << "enter element for v3 vector : " << endl;
    for (i = 0; i < 9; i++)
    {
        v3.push_back(i);
    }

    vector<int>::iterator it = v3.begin();
    it++;
    cout << *(it) << " " << endl;
    // another way to print vector
    for (auto it = v3.begin(); it != v3.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    // way to erase something in vector
    v3.erase(v3.begin());
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    v3.erase(v3.begin() + 2);
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    v3.erase(v3.begin() + 5, v3.begin() + 6); // this will erase the range starting will be erased but end will not
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    // way to insert element in vector
    cout << "insert : " << endl;
    v3.insert(v3.begin() + 2, 3);
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    v3.insert(v3.begin() + 2, 3, 10); // way to insert multiple element in wvctor
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    //way to swap thr vector
    cout<<"after swaping : "<<endl;
    v1.swap(v3);
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    //way to clear vector
    cout<<"after clearing : "<<endl;
    v3.clear();
    for (auto it : v3)
    {
        cout << it << " ";
    }
    cout << endl;
    cout<<v3.empty();//if true it will return 1 if false return 0 
}

#include<iostream>
#include<vector>
using namespace std;

void display(vector<int>& v)
{
    int n=v.size();
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main()
{
vector <int> v1;
int element;
for(int i=0;i<5;i++)
{
    cout<<"enter the element"<<endl;
cin>>element;
v1.push_back(element);
}
display(v1);
//iterrators
vector<int>::iterator i1;
i1=v1.begin();
v1.insert(i1,555);
display(v1);
    return 0;
}
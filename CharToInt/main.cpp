#include <iostream>

using namespace std;

int square (int);
int main()
{
    int x='a';
    int y='b';
    int w='c';
    int q='d';
    int r='e';
    int f='f';
    cout<<square(x)<<endl;
    cout<<square(y)<<endl;
    cout<<square(w)<<endl;
    cout<<square(q)<<endl;
    cout<<square(r)<<endl;
    cout<<square(f)<<endl;
    return 0;
}

int square(int d){
    return d*d;
}

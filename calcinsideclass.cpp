#include<iostream>
using namespace std;
class cube{
    public:
    int height = 4;
    int width = 6;
    int length = 7;

int volume(){
    int v;
     v=height*width*length;
    return v;
}};
int main(){
    cube cube1;
    int vol=cube1.volume();
    cout<< "Volume : "<<vol <<endl;
}

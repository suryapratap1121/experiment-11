#include<iostream>
using namespace std;
class cube{
    private:
    int height = 4;
    int width = 5;
    int length = 7;
public:
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

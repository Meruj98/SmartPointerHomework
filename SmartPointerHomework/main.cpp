//
//  main.cpp
//  SmartPointerHomework
//
//  Created by Meruj on 15.01.21.
//

#include <iostream>


using namespace std;


template <typename T>
class SmartPointer {
    private:
    T* pointer;
    public:
    SmartPointer(T* p){
        pointer = p;
        cout<<"Your value:"<<*pointer<<endl;
    }
    ~SmartPointer(){
        cout<<"Removing:"<<*pointer<<endl;
        delete pointer;
    }
};

int main(int argc, const char * argv[]) {
    // insert code here...
    int n = 20;
    char ch = 'B';
    SmartPointer <int> smartPointer(new int(n));
    SmartPointer<char> smartPointerChar(new char(ch));
    return  0;
}

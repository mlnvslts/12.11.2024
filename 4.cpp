#include <iostream>
using namespace std;

int main() {
    float u = 0.5;
    float v = 0.9;
    float w = 1;
    
    int k = 30;
    
    float s = 200;
    float t = 120;
    float f = 240;
    
    float p = 0.02;
    float q = 0.1;
    float r = 0.2;
    float t2 = 0.3;
    
    int days = 0;
    float inDay = (u+v+w)*k;
    float allFeed = s+t+f;
    float inDay2 = inDay;
    float allFeed2 = allFeed;
    while (allFeed >= inDay) {
        
        float inDay2 = (u+v+w)*k;
        float allFeed2 = s+t+f;
    
        allFeed = allFeed - inDay;
        
        k=k*p;
        s=s*q;
        t=t*r;
        f=f*t2;
        ++days;
    }
    
    cout << "Через" << days << "дней" << endl;
}
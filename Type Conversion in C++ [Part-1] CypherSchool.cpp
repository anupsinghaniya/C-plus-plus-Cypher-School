// #include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Time {
public:
    int hour;
    int min;

    Time(int m) {
        hour = m / 60;
        min = m % 60;
    }

    void display() {
        std::cout << hour << " " << min << std::endl;
    }
};

int main() {
    int min_from_midnight = 330;

    Time t(min_from_midnight);
    t.display();

    return 0;
}

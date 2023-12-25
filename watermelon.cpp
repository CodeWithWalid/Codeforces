#include <iostream>
using namespace std;

int main()
{
    int watermelon_weight;
    cin >> watermelon_weight;

    if(1 <=watermelon_weight && watermelon_weight <= 100){
        if(watermelon_weight > 2 && watermelon_weight % 2 == 0){
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}

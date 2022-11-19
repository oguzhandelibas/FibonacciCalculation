#include <iostream>
#include <map>
using namespace std;


//Calculates fast but uses a lot of memory
std::map<int, long> _memo =  { { 0, 0 }, { 1, 1 } };

long FastFib(int n)
{
    if (_memo.count(n))
        return _memo[n];

    int value = FastFib(n - 1) + FastFib(n - 2);
    _memo[n] = value;

    return value;
}

//Calculates slowly but consumes little memory
int SlowFib(int n)
{
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else
        return (SlowFib(n - 1) + SlowFib(n - 2));
}

void MemoryFriendlyCalculation()
{
    for (int i = 46; i <= 100; i++) {
        std::cout << "("<< i <<")" << " " << SlowFib(i) << endl;
    }
}

void FastCalculation()
{
    for (int i = 0; i <= 100; i++) {
        std::cout << "(" << i << ")" << " " << FastFib(i) << endl;
    }

}

int main()
{
    FastCalculation();
    //MemoryFriendlyCalculation();
    return 0;
}

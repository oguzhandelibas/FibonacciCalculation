# Performance-vs-Space
 Performance or Space. Which is the best option for your optimization. In this project I created a two path using Fibonacci Calculation for this situation

## Memory Friendly Calculation

https://github.com/oguzhandelibas/Performance-vs-Space/assets/64430254/c2033efe-bc21-48be-b585-aceecccbc20f

```C++
int SlowFib(int n)
{
    if (n == 1) return 1;
    else if (n == 2) return 1;
    else
        return (SlowFib(n - 1) + SlowFib(n - 2));
}

void MemoryFriendlyCalculation()
{
    for (int i = 1; i <= 40; i++) {
        std::cout << "("<< i <<")" << " " << SlowFib(i) << endl;
    }
}
```

## Fast Calculation

https://github.com/oguzhandelibas/Performance-vs-Space/assets/64430254/f117606f-74e9-4223-8023-2f8de51faf83

```C++
long FastFib(int n)
{
    if (_memo.count(n))
        return _memo[n];

    int value = FastFib(n - 1) + FastFib(n - 2);
    _memo[n] = value;

    return value;
}

void FastCalculation()
{
    for (int i = 1; i <= 40; i++) {
        std::cout << "(" << i << ")" << " " << FastFib(i) << endl;
    }
}
```

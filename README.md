# Performance-vs-Space
 Performance or Space. Which is the best option for your optimization. In this project I created a two path using Fibonacci Calculation for this situation

## Memory Friendly Calculation - 4802ms

![WindowsTerminal_pngRmw8pXh](https://github.com/oguzhandelibas/Performance-vs-Space/assets/64430254/9731a411-1b5d-42b5-829e-aee93b64b904)

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

## Fast Calculation - 8ms

![WindowsTerminal_sfbNbprULm](https://github.com/oguzhandelibas/Performance-vs-Space/assets/64430254/02258636-d269-4d2c-b15f-f4ff0f8b5f6f)

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

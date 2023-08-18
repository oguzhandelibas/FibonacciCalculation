# Performance-vs-Space
 Performance or Space. Which is the best option for your optimization. In this project I created a two path using Fibonacci Calculation for this situation

## Memory Friendly Calculation

![WindowsTerminal_mbBkaOwniY](https://github.com/oguzhandelibas/Performance-vs-Space/assets/64430254/a3a89533-0c8c-44d5-95ce-494e26cede88)

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

#include <iostream>
using namespace std;

int main()
{
    int N;
    scanf("%d", &N);
    int a, b;
    for(int i = 0; i < N; i++)
    {
        scanf("%d %d", &a, &b);
        cout << a + b << '\n';
    }
    
    return 0;
}
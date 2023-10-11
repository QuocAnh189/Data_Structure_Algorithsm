#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

struct Stack
{
    int n;
    int a[10000];
};

typedef struct Stack STACK;
void InitialStack(STACK &);
int EmptyStack(STACK);
void AddItem(STACK &, int x);
int PopStack(STACK &);
void OutputStack(STACK);
void GetItem(STACK);

int main()
{
    STACK s;
    InitialStack(s);
    int n, x;
    cin >> n;
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        x = rand() % 400;
        AddItem(s, x);
    }
    cout << "Mang ban dau la: ";
    OutputStack(s);
    cout << "\nLay tung phan tu trong mang ra: ";
    GetItem(s);
    return 1;
}

void InitialStack(STACK &st)
{
    st.n = 0;
}

int EmptyStack(STACK st)
{
    if (st.n == 0)
        return 1;
    return 0;
}

void AddItem(STACK &st, int x)
{
    st.a[st.n] = x;
    st.n++;
}

void OutputStack(Stack st)
{
    for (int i = 0; i < st.n; i++)
    {
        cout << st.a[i] << setw(5);
    }
}

int PopStack(STACK &st)
{
    int x = st.a[st.n - 1];
    st.n--;
    return x;
}

void GetItem(STACK st)
{
    while (st.n != 0)
    {
        int kq = PopStack(st);
        cout << kq << setw(5);
    }
}
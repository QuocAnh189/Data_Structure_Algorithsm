#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

struct Queue
{
    int n;
    int a[100];
};
typedef struct Queue QUEUE;

void InitQueue(QUEUE &);
int Empty(QUEUE);
int IsFull(QUEUE);
void AddQueue(QUEUE &, int);
int PoPQueue(QUEUE &);
void OutPutQueue(QUEUE);
void Change(QUEUE &);

int main()
{
    QUEUE A;
    int n, x;
    cin >> n;
    InitQueue(A);
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        x = rand() % 300;
        AddQueue(A, x);
    }
    cout << "Mang ban dau la: ";
    OutPutQueue(A);
    cout << "\nMang lay phan tu vao truoc ra truoc la: ";
    Change(A);
    return 1;
}

void InitQueue(QUEUE &Q)
{
    Q.n = 0;
}

int Empty(QUEUE Q)
{
    if (Q.n == 0)
        return 1;
    return 0;
}

int IsFull(QUEUE Q)
{
    if (Q.n = 100)
        return 1;
    return 0;
}

void AddQueue(QUEUE &Q, int x)
{
    Q.a[Q.n] = x;
    Q.n++;
}

int PoPQueue(QUEUE &Q)
{
    int x = Q.a[0];
    for (int i = 0; i < Q.n - 1; i++)
    {
        Q.a[i] = Q.a[i + 1];
    }
    Q.n--;
    return x;
}

void OutPutQueue(QUEUE Q)
{
    for (int i = 0; i < Q.n; i++)
    {
        cout << Q.a[i] << setw(5);
    }
}

void Change(QUEUE &Q)
{
    while (Q.n != 0)
    {
        int kq = PoPQueue(Q);
        cout << kq << setw(5);
    }
}
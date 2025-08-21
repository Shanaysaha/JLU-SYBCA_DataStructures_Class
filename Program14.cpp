#include <iostream>
using namespace std;
int const size = 10;
void push(int stack[], int &pointer, int element){}
void pop(int stack[], int &pointer, int element){}
int main()
    {
        int stack[size];
        int pointer = -1;
    }
void push(int stack[], int &pointer, int element)
{
    if (pointer == size - 1)
    {
        cout << "Stack is full";
    }
    else
    {
        pointer++;
        stack[pointer] = element;
    }
}
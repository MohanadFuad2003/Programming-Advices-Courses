#pragma once

#include <iostream>
using namespace std;

template <class T>
class clsDynamicArray
{
protected:
    int _Size = 0;
    T* _TempArray;

public:
    T* OriginalArray;

    clsDynamicArray(int Size = 0)
    {
        if (Size < 0)
            Size = 0;

        _Size = Size;
        OriginalArray = new T[_Size];
    }

    ~clsDynamicArray()
    {
        delete[] OriginalArray;
    }

    bool SetItem(int index, T Value)
    {
        if (index >= _Size || index < 0)
            return false;

        OriginalArray[index] = Value;
        return true;
    }

    int Size()
    {
        return _Size;
    }

    bool IsEmpty()
    {
        return (_Size == 0);
    }

    void PrintList()
    {
        for (int i = 0; i < _Size; i++)
        {
            cout << OriginalArray[i] << " ";
        }
        cout << "\n";
    }

    void Resize(int NewSize)
    {
        if (NewSize < 0)
            NewSize = 0;

        _TempArray = new T[NewSize];

        if (NewSize < _Size)
            _Size = NewSize;

        for (int i = 0; i < _Size; i++)
        {
            _TempArray[i] = OriginalArray[i];
        }

        _Size = NewSize;

        delete[] OriginalArray;
        OriginalArray = _TempArray;
    }

    T GetItem(int index)
    {
        return OriginalArray[index];
    }

    void Reverse()
    {
        for (int i = 0; i < _Size / 2; i++)
        {
            T temp = OriginalArray[i];
            OriginalArray[i] = OriginalArray[_Size - i - 1];
            OriginalArray[_Size - i - 1] = temp;
        }
    }

    void Clear() {
        Resize(0);
    }

    bool DeleteItemAt(int index)
    {
        if (index >= _Size || index < 0)
            return false;

        for (int i = index; i < _Size - 1; i++)
        {
            OriginalArray[i] = OriginalArray[i + 1];
        }

        Resize(_Size - 1);
        return true;
    }

    void DeleteFirstItem()
    {
        DeleteItemAt(0);
    }

    void DeleteLastItem()
    {
        DeleteItemAt(_Size - 1);
    }

    int Find(T Value)
    {
        for (int i = 0; i < _Size; i++)
        {
            if (OriginalArray[i] == Value)
                return i;
        }
        return -1;
    }

    bool DeleteItem(T Value)
    {
        int index = Find(Value);
        if (index == -1)
            return false;

        return DeleteItemAt(index);
    }

    bool InsertAt(int index, T value)
    {
        if (index > _Size || index < 0)
        {
            cout << "\n No Insert At End" << endl;
            return false;
        }

        Resize(_Size + 1);

        for (int i = _Size - 1; i > index; i--)
        {
            OriginalArray[i] = OriginalArray[i - 1];
        }

        OriginalArray[index] = value;
        return true;
    }

    void InsertAtBeginning(T value)
    {
        InsertAt(0, value);
    }

    bool InsertBefore(int index, T value)
    {
        if (index < 1)
            return InsertAt(0, value);
        else
            return InsertAt(index - 1, value);
    }

    bool InsertAfter(int index, T value)
    {
        if (index >= _Size - 1)
            return InsertAtEnd(value);
        else
            return InsertAt(index + 1, value);
    }

    bool InsertAtEnd(T value)
    {
        return InsertAt(_Size, value);
    }
};

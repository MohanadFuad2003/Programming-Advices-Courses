#pragma once

#include <iostream>
#include "MyQueueArr.h"
using namespace std;
template <class T>

class  clsMyStackArr :public   clsMyQueueArr <T>
{

public:

	void push(T Item)
	{
		clsMyQueueArr <T>::_MyList.InsertAtBeginning(Item);
	}

	T Top()
	{
		return clsMyQueueArr <T>::front();

	}

	T Bottom()
	{
		return clsMyQueueArr <T>::back();

	}

};


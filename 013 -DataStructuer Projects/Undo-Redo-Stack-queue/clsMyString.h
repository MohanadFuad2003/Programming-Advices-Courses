#pragma once
#include <iostream>
#include<stack>
#include <queue>
using namespace std;
class clsMyString
{
	string _Value;
	stack<string> UndoStack;
	stack<string> RedoStack;
public : 


	clsMyString() { // "" , MOHAMMAD  , Ali  , Tareq 
		_Value = "";
		UndoStack.push(_Value);
	}

	string GetValue() {
		return _Value;
	}

	void SetValue(string value) {
		this->_Value = value;
		UndoStack.push(_Value);
	}

	void Undo() {
		if (UndoStack.size() <= 1) { // value = Mohammad
			return;
		}
		RedoStack.push(UndoStack.top());  // Tareq , Ali , Mohammad
		UndoStack.pop();
		_Value = UndoStack.top();  // ""
	}

	void Redo() {
		if (RedoStack.empty()) {

			return; 
		}
		UndoStack.push(RedoStack.top());
		_Value = RedoStack.top();
		RedoStack.pop();
	}

};


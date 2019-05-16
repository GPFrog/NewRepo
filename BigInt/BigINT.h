#pragma once
#include <iostream>
#include <string>
class BigINT
{
private:
	int capacity;
	int* value;
	int flag;
public:
	BigINT()
	{
		capacity = 32;
		value = new int[capacity];
		flag = 0;
	}
	BigINT(int cap)
	{
		capacity = cap;
		value = new int[capacity];
		flag = 0;
	}
	BigINT(int* bigInt, int f)
	{
		capacity = f + 1;
		flag = f;
		value = new int[capacity];
		value = bigInt;
	}
	void setValue(std::string num);
	void showBigInt();
	void resize();
	friend std::istream& operator>>(std::istream& is, BigINT& bigInt)
	{
		std::string temp;
		is >> temp;
		std::cout << temp << std::endl;

		int cnt = 0;
		while (cnt < temp.size())
		{
			bigInt.setValue(temp.substr(cnt, 8));
			cnt += 8;
		}

		return is;
	}
	friend std::ostream& operator<<(std::ostream& os, BigINT& bigInt)
	{
		for (int i = 0; i < bigInt.flag; i++)
		{
			std::cout << bigInt.value[i];
		}
		return os;
	}

	friend BigINT operator+(const BigINT& left, const BigINT& right)
	{	
		int i;
		int* temp;
		if (left.flag >= right.flag)
		{
			temp = new int[left.flag];
			for (i = 0; i < right.flag; i++)
			{
				temp[left.flag - (i+1)] = left.value[i] + right.value[i];
			}
			for (i; i < left.flag; i++)
			{
				temp[left.flag - (i+1)] = left.value[i];
			}
		}
		else
		{
			temp = new int[right.flag + 1];
			for (i = 0; i < left.flag; i++)
			{
				temp[right.flag - (i+1)] = left.value[i] + right.value[i];
			}
			for (i; i < right.flag; i++)
			{
				temp[right.flag - (i+1)] = right.value[i];
			}
		}
		for (int j = 0; j < i + 1; j++)
		{
			if (temp[j] >= 100000000)
			{
				temp[j] -= 100000000;
				temp[j + 1] += 1;
			}
		}
		return BigINT(temp, i);
	}
};

void BigINT::setValue(std::string num)
{
	if (capacity < flag)
	{
		resize();
	}
	std::cout << "넘어온 문자열 : " << num << std::endl;
	std::cout << "숫자로 변환 : " << stoi(num) << std::endl;
	int temp = stoi(num);
	value[flag] = temp;
	flag++;
}

void BigINT::showBigInt()
{
	for (int i = 0; i < flag; i++)
	{
		std::cout << value[i];
	}
	std::cout << std::endl;
}

void BigINT::resize()
{
	int* temp = new int[capacity * 2];
	for (int i = 0; i < flag; i++)
	{
		temp[i] = value[i];
	}
	delete value;
	capacity *= 2;
	value = temp;
}
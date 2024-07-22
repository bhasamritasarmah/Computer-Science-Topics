#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

string DecimalToBinaryConversion(int num)
{
	string binaryStr = "";

	while (num > 0)
	{
		int rem = num % 2;
		binaryStr = to_string(rem) + binaryStr;

		num /= 2;
	}

	return binaryStr;
}

void ConvertTo24BitBinary(string& binaryStr)
{
	while (binaryStr.size() < 24)
		binaryStr = '0' + binaryStr;
}

int BinaryToDecimalConversion(string binaryStr)
{
	int num = 0;

	int size = binaryStr.size();
	for (int i = size - 1; i >= 0; i--)
	{
		int exp = size - i - 1;
		
		if (binaryStr[i] == '1')
			num += static_cast<int>(pow(2, exp));
		else
			continue;
	}

	return num;
}

vector<int> BinaryToRGBConversion(string binaryStr)
{
	vector<int> rgbVec;

	ConvertTo24BitBinary(binaryStr);

	rgbVec.push_back(BinaryToDecimalConversion(binaryStr.substr(0, 8)));
	rgbVec.push_back(BinaryToDecimalConversion(binaryStr.substr(8, 8)));
	rgbVec.push_back(BinaryToDecimalConversion(binaryStr.substr(16, 8)));

	return rgbVec;
}

vector<int> NumberToRGBValues(int num)
{
	string binaryStr = DecimalToBinaryConversion(num);
	vector<int> rgbVec = BinaryToRGBConversion(binaryStr);

	return rgbVec;
}

int main()
{
	string onceMore;
	do
	{
		int num;
		cout << "Enter the number: ";
		cin >> num;

		vector<int> rgbVec = NumberToRGBValues(num);

		cout << "The corresponding RGB values are -" << endl;
		cout << "R value: " << rgbVec[0] << endl;
		cout << "G value: " << rgbVec[1] << endl;
		cout << "B value: " << rgbVec[2] << endl;

		cout << "\n\n\nDo you want to run the program once more? ";
		cin >> onceMore;
		transform(onceMore.begin(), onceMore.end(), onceMore.begin(), [](unsigned char c) { return std::tolower(c); });
	}while (onceMore == "yes" || onceMore == "y");

	return 0;
}
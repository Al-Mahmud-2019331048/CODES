#include<bits/stdc++.h>
using namespace std;

vector<int> decimal_to_binary(int n)
{
	vector<int>v;
	for (int i = 0; n>0; ++i)
	{
		v.push_back(n%2);
		n=n/2;
	}
	reverse(v.begin(),v.end());
	return v;
}

vector<int> decimal_to_octal(int n)
{
	vector<int>v;
	for (int i = 0; n>0; ++i)
	{
		v.push_back(n%8);
		n=n/8;
	}
	reverse(v.begin(),v.end());

	return v;
}

string decimal_to_hexa(int n)
{
	string s="";
	for (int i = 0; n>0; ++i)
	{
		int temp=n%16;
		if(temp<10)
			s+=(temp+48);
		else
			s+=(temp+55);
		n=n/16;
	}
	reverse(s.begin(),s.end());
	return s;
}

int binary_to_decimal(string s)
{
	int last_digit,dec=0;
	int base=1; //2^0
	for (int i = s.size()-1; i >= 0; --i)
	{
		last_digit=s[i]-'0';
		dec+=(last_digit*base);
		base*=2;  //2 er power 1 kore barano
	}
	return dec;
}

int binary_to_octal(string s)
{
	int last_digit,oct=0;
	int base=1; //2^0
	for (int i = s.size()-1; i >= 0; --i)
	{
		last_digit=s[i]-'0';
		oct+=(last_digit*base);
		base*=8;  //2 er power 1 kore barano
	}
	return oct;
}

int binary_to_hexa(string s)
{
	int last_digit,hex=0;
	int base=1; //2^0
	for (int i = s.size()-1; i >= 0; --i)
	{
		if(s[i]>='A' && s[i]<='F')
			last_digit=(s[i]-55);
		else last_digit=s[i]-'0';
		hex+=(last_digit*base);
		base*=16;  //2 er power 1 kore barano
	}
	return hex;
}


int main()
{
	
	cout<<decimal_to_hexa(2746);

	return 0;
}
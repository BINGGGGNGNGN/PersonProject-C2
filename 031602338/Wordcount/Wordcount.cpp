#include "pch.h"
#include<fstream>
#include <iostream>
#include<string>
#include<stdio.h>

#include"wordcount1.h"
#include"wordcount1.cpp"
#include "charcount1.h"
#include "charcount1.cpp"
#include"linecount.h"
#include "linecount.cpp"
#include"frequent_words_count.h"
#include"frequent_words_count.cpp"
using namespace std;


int main(int argc,const char* argv[])
{
	int i;
	string filename;
	for (i = 1; i < argc; i++)
	{
	    filename = argv[i];
        int count1=characters_number(filename);
	    int count2=words_number( filename);
	    int count3=lines_number(filename);
        ofstream out("result.txt",ios::in|ios::out);
        out.seekp(0, ios::end);
        out << "characters:" << count1 << endl<<"words:"<<count2<<endl<<"lines:"<<count3<<endl;
        out.clear();
		frequent_words(filename);
	}
	
	return 0;

}

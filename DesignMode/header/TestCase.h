#include <iostream>
#include <string>
#include <gtest/gtest.h>


#ifndef FileName_H_
#define FileName_H_
#include "GameRules.h"


#endif


#define DEBUG_INFO(...) cout<< __VA_ARGS__ <<endl;

using namespace std;

class myTest:public ::testing::Test
{
public:
	myTest(){}
	virtual ~myTest(){}
protected:
	virtual void SetUp()
	{
		cout<<"*********Begin Running Test!*********"<<endl;
	}
	virtual void TearDown()
	{
		cout<<"*********Finished Running Test!*********"<<endl;
	}

};

/*
 * TestCase.cpp
 *
 *  Created on: Aug 11, 2018
 *      Author: zzb152
 */

#include "../header/TestCase.h"
#include "../header/Client.h"


TEST_F(myTest, test_S1_1)
{
	DEBUG_INFO("[-------------------Begin TestCase 1-------------------]");


	HandSetSoft *soft = new HandSetGame();
	HandSetBrand *brand = new HandSetBrandM();
	brand->SetHandSetSoft(soft);
	brand->Run();


	soft = new HandSetAddressList();
	brand = new HandSetBrandN();
	brand->SetHandSetSoft(soft);
	brand->Run();

	ASSERT_EQ(1, 1);


	DEBUG_INFO("[--------------------End TestCase 1--------------------]");
}


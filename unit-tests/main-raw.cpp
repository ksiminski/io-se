

#include <iostream>
 

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl; 



#define BOOST_TEST_MODULE Unit test
#include <boost/test/included/unit_test.hpp>  

#include <string>

// --log_level=test_suite
// --log_level=all

std::string A2R (int n) // 1234 → MCCXXXIV
{
	std::string result;
	return result;
}

int R2A (const std::string & s)  // MCCXXXIV → 1234
{
	return 0;
}

BOOST_AUTO_TEST_SUITE (arabic_to_roman)

BOOST_AUTO_TEST_CASE(single_characters)  
{
  BOOST_CHECK(A2R(1) == "I");	
  BOOST_CHECK(A2R(5) == "V");
  BOOST_CHECK(A2R(10) == "X");
  BOOST_CHECK(A2R(50) == "L");
  BOOST_CHECK(A2R(100) == "C");
  BOOST_CHECK(A2R(500) == "D");
  BOOST_CHECK(A2R(1000) == "M");
}

/*
BOOST_AUTO_TEST_CASE(repeated_characters)  
{
  BOOST_CHECK(A2R(2) == "II");	
  BOOST_CHECK(A2R(3) == "III");	
  BOOST_CHECK(A2R(20) == "XX");
  BOOST_CHECK(A2R(30) == "XXX");
  BOOST_CHECK(A2R(200) == "CC");
  BOOST_CHECK(A2R(2000) == "MM");
}
BOOST_AUTO_TEST_CASE(subtraction)  
{
  BOOST_CHECK(A2R(9) == "IX");	
  BOOST_CHECK(A2R(90) == "XC");	
  BOOST_CHECK(A2R(900) == "CM");
}

BOOST_AUTO_TEST_CASE(varia)  
{
  BOOST_CHECK(A2R(2023) == "MMXXIII");	
  BOOST_CHECK(A2R(1990) == "MCMXC");	
  BOOST_CHECK(A2R(1999) == "MCMXCIX");
  BOOST_CHECK(A2R(45) == "XLV");
  BOOST_CHECK(A2R(44) == "XLIV");
  BOOST_CHECK(A2R(3844) == "MMMDCCCXLIV");
}
*/
BOOST_AUTO_TEST_SUITE_END()
 

/*
BOOST_AUTO_TEST_SUITE (roman_to_arabic)
BOOST_AUTO_TEST_CASE(all) 
{
	for (int i = 0; i < 5000; i++)
	{
		BOOST_TEST(R2A(A2R(i)) == i, std::to_string(i));
	}
}
BOOST_AUTO_TEST_SUITE_END()
*/
 

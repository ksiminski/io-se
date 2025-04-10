
#include <iostream>
#include <string>

#define BOOST_TEST_MODULE Testowanie biblioteki
#include <boost/test/included/unit_test.hpp>  

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl; 

// --log_level=test_suite
// --log_level=all

std::string a2rz (int n)
{
    std::string wynik("");

    while (n >= 1000)
    {
       wynik.push_back('M');
       n -= 1000;
    }
    while (n >= 500)
    {
       wynik.push_back('D');
       n -= 500;
    }
    while (n >= 100)
    {
       wynik.push_back('C');
       n -= 100;
    }
    while (n >= 50)
    {
       wynik.push_back('L');
       n -= 50;
    }
    while (n >= 10)
    {
       wynik.push_back('X');
       n -= 10;
    }
    while (n >= 5)
    {
       wynik.push_back('V');
       n -= 5;
    }
    while (n >= 1)
    {
       wynik.push_back('I');
       n -= 1;
    }

/*
    switch(n)
    {
       case 1   : return "I";
       case 5   : return "V";
       case 10   : return "X";
       case 50   : return "L";
       case 100   : return "C";
       case 500   : return "D";
       case 1000   : return "M";
    }
    */
    return wynik; 
}

int rz2a (const std::string & s)
{
    return 0;
}

BOOST_AUTO_TEST_SUITE (arabskie_rzymskie)

BOOST_AUTO_TEST_CASE(pojedyncze_znaki)  
{
  BOOST_CHECK(a2rz(1) == "I");	
  BOOST_CHECK(a2rz(5) == "V");
  BOOST_CHECK(a2rz(10) == "X");
  BOOST_CHECK(a2rz(50) == "L");
  BOOST_CHECK(a2rz(100) == "C");
  BOOST_CHECK(a2rz(500) == "D");
  BOOST_CHECK(a2rz(1000) == "M");
}

BOOST_AUTO_TEST_CASE(wielokrotny_ten_sam_znak)  
{
  BOOST_CHECK(a2rz(2) == "II");	
  BOOST_CHECK(a2rz(3) == "III");	
  BOOST_CHECK(a2rz(20) == "XX");
  BOOST_CHECK(a2rz(30) == "XXX");
  BOOST_CHECK(a2rz(200) == "CC");
  BOOST_CHECK(a2rz(2000) == "MM");
}
BOOST_AUTO_TEST_CASE(bez_odejmowania)  
{
  BOOST_CHECK(a2rz(22) == "XXII");	
  BOOST_CHECK(a2rz(132) == "CXXXII");	
  BOOST_CHECK(a2rz(2007) == "MMVII");
  BOOST_CHECK(a2rz(533) == "DXXXIII");
  BOOST_CHECK(a2rz(202) == "CCII");
  BOOST_CHECK(a2rz(2025) == "MMXXV");
}
BOOST_AUTO_TEST_CASE(odejmowanie)  
{
  BOOST_CHECK(a2rz(9) == "IX");	
  BOOST_CHECK(a2rz(90) == "XC");	
  BOOST_CHECK(a2rz(900) == "CM");
}
BOOST_AUTO_TEST_CASE(rozne)  
{
  BOOST_CHECK(a2rz(2023) == "MMXXIII");	
  BOOST_CHECK(a2rz(1990) == "MCMXC");	
  BOOST_CHECK(a2rz(1999) == "MCMXCIX");
  BOOST_CHECK(a2rz(45) == "XLV");
  BOOST_CHECK(a2rz(44) == "XLIV");
  BOOST_CHECK(a2rz(3844) == "MMMDCCCXLIV");
}
BOOST_AUTO_TEST_SUITE_END()
 

/*
BOOST_AUTO_TEST_SUITE (rzymskie_arabskie)
BOOST_AUTO_TEST_CASE(wszystkie) 
{
	for (int i = 0; i < 5000; i++)
	{
		BOOST_TEST(rz2a(a2rz(i)) == i, std::to_string(i));
	}
}
BOOST_AUTO_TEST_SUITE_END()
*/
 

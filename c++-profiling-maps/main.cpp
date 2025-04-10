
#include <iostream>
#include <map>
#include <unordered_map>


int main ()
{
 
   std::unordered_map<int, int> hash_map;
   std::map          <int, int> red_black_tree;

   for  (int i = 0; i < 1'000'000; i++)
   {
      hash_map[i]++;
      red_black_tree[i]++;
   }
   std::cout << hash_map.size() << std::endl;   
   std::cout << red_black_tree.size() << std::endl;   
   
   return 0;	
} 



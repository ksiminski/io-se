
#include <iostream> 
#include <typeinfo>

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl; 

class animal
{
public:
   virtual void breathe () {}
};

class dog : public animal 
{
public:
   void bark () const 
   {
      std::cout << "woof!" << std::endl;
   } 
};

class cat : public animal 
{
public:
   void meow() const 
   {
      std::cout << "meow!" << std::endl;
   }
};

class pig : public animal 
{
public:
   void oink() const 
   {
      std::cout << "oink!" << std::endl;
   }
};

class sparrow : public animal 
{
public:
   void tweet() const 
   {
      std::cout << "tweet!" << std::endl;
   }
};

void voice (const animal & z)
{
   if (const dog * pDog = dynamic_cast<const dog *> (& z))
      pDog->bark();
   else if (const cat * pCat = dynamic_cast<const cat *> (& z))
      pCat->meow();
   else if (const pig * pPig = dynamic_cast<const pig *> (& z))
      pPig->oink();
   else if (const sparrow * pSparrow = dynamic_cast<const sparrow *> (& z))
      pSparrow->tweet();
}

int main ()
{
   dog Rex;
   cat Cattie;
   pig Piggy;
   sparrow Twitty;

   voice(Rex);
   voice(Cattie);   
   voice(Piggy);
   voice(Twitty);
      
   return 0; 
}




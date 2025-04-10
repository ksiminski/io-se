
#include <iostream> 
#include <typeinfo>

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl; 

class animal
{
public:
   virtual void breathe () {}
   virtual void speak () const = 0;
};

class dog : public animal 
{
protected:
   void bark () const 
   {
      std::cout << "woof!" << std::endl;
   } 
public:   
   virtual void speak() const
   {
      bark();
   }
};

class cat : public animal 
{
protected:
   void meow() const 
   {
      std::cout << "meow!" << std::endl;
   }
public:
   virtual void speak() const
   {
      meow();
   }
};

class pig : public animal 
{
protected:
   void oink() const 
   {
      std::cout << "oink!" << std::endl;
   }
public:
   virtual void speak() const
   {
      oink();
   }
};

class sparrow : public animal 
{
protected:
   void tweet() const 
   {
      std::cout << "tweet!" << std::endl;
   }
public:
   virtual void speak() const
   {
      tweet();
   }
};

void voice (const animal & z)
{
   z.speak();
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


 


#include <iostream> 
#include <typeinfo>

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl; 

class zwierze
{
public:
   virtual void oddychaj () {}
   virtual void odezwij_sie () const = 0;
};

class pies : public zwierze 
{
protected:
   void szczekaj () const 
   {
      std::cout << "hau!" << std::endl;
   } 
public:   
   virtual void odezwij_sie() const
   {
      szczekaj();
   }
};

class kot : public zwierze 
{
protected:
   void miaucz() const 
   {
      std::cout << "miau!" << std::endl;
   }
public:
   virtual void odezwij_sie() const
   {
      miaucz();
   }
};

class swinia : public zwierze 
{
protected:
   void chrumkaj() const 
   {
      std::cout << "chrum!" << std::endl;
   }
public:
   virtual void odezwij_sie() const
   {
      chrumkaj();
   }
};

class wrobel : public zwierze 
{
protected:
   void cwierkaj() const 
   {
      std::cout << "cwir!" << std::endl;
   }
public:
   virtual void odezwij_sie() const
   {
      cwierkaj();
   }
};

void daj_glos (const zwierze & z)
{
   z.odezwij_sie();
}

int main ()
{
   pies Reksio;
   kot Mruczek;
   swinia Prosiaczek;
   wrobel Elemelek;

   daj_glos(Reksio);
   daj_glos(Mruczek);   
   daj_glos(Prosiaczek);
   daj_glos(Elemelek);
   
   return 0; 
}


 

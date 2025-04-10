
#include <iostream> 
#include <typeinfo>

#define debug(x)   std::cerr << __FILE__ << " (" << __LINE__ << ") " << #x << " == " << x << std::endl; 

class zwierze
{
public:
   virtual void oddychaj () {}
};

class pies : public zwierze 
{
public:
   void szczekaj () const 
   {
      std::cout << "hau!" << std::endl;
   } 
};

class kot : public zwierze 
{
public:
   void miaucz() const 
   {
      std::cout << "miau!" << std::endl;
   }
};

class swinia : public zwierze 
{
public:
   void chrumkaj() const 
   {
      std::cout << "chrum!" << std::endl;
   }
};

class wrobel : public zwierze 
{
public:
   void cwierkaj() const 
   {
      std::cout << "cwir!" << std::endl;
   }
};

void daj_glos (const zwierze & z)
{
   if (const pies * pPies = dynamic_cast<const pies *> (& z))
      pPies->szczekaj();
   else if (const kot * pKot = dynamic_cast<const kot *> (& z))
      pKot->miaucz();
   else if (const swinia * pSwinia = dynamic_cast<const swinia *> (& z))
      pSwinia->chrumkaj();
   else if (const wrobel * pWrobel = dynamic_cast<const wrobel *> (& z))
      pWrobel->cwierkaj();
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



 

#include <iostream>                                                          /*	Açýklamalarý yaz sonrada \t ' leri düzenle   vede girdirdiðin 5 haneli sayýyý kontrol ettir   */
#include <fstream>															/*ekle eklemelisin     ----------UNUTMA--------------*/
#include <cmath>
#include <math.h>
#include <Windows.h>
#include <cstring>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;
class Sinif1{
	private:
 string islemno;
 void setislemno(char islemno1);                                                         /*yapýcaðým deðerleri private ve protected aldým, bende deðiþken sadece islemler var*/
	protected:		
	string getislemno();
	void faktoriyel(long double sayi1);
	void sinus(long double sayi1);
	void cosinus(long double sayi1);
	void tanjant(long double sayi1);
	void cotanjant(long double sayi1);            
	void arcsinus(long double sayi1);
	void arccosinus(long double sayi1);
	void arctanjant(long double sayi1);
	void arccotanjant(long double sayi1);
	void mutlak(long double sayi1);
	void logaritma(long double sayi1,long double sayi2);
	void fonksiyon_asiri(long double sayi1,long double sayi2);
	void fonksiyon_asiri(int sayi7,int sayi8);
	void kokalma(long double sayi1,long double sayi2);
	void uzeriislem(long double sayi1,long double sayi2);
	void toplama(long double sayi1,long double sayi2);
	void cikarma(long double sayi1,long double sayi2);
	void carpma(long double sayi1,long double sayi2);
	void bolme(long double sayi1,long double sayi2);
	
	void listeleme();
	void arama();
			
};
void Sinif1::setislemno(char islemno1){
	islemno=islemno1;
}
void Sinif1::listeleme(){
	
			system("cls");
			cout<<setw(6)<<"|Islem No|"<<left<<setw(10)<<"     |                        Islem                                |   "<<left<<setw(8)<<"        |Islem Turu|\n";
		string bilgiler;
		string okunan;
		
			ifstream dosya_oku("Islemler.txt");
			while (!dosya_oku.eof()) {
				
				getline(dosya_oku,okunan);
				
				//eslesme = okunan.substr(0,5);
				//if(eslesme = adamin_girdigi_islem_no){
				bilgiler = okunan;
				cout <<okunan<<endl;
					//	cout << left <<setw(18 - (islem.length()))  << "\t" << left << setw(16 - (islemturu1.length())) << islemturu << "\t" << islemno<< endl;
					}
					
					dosya_oku.close();

					system("pause");
			cout<<bilgiler<<endl;
}


void Sinif1::arama(){
	
		system("cls");
				string islem_ara_no;
				string islem_ara_okunan;
				string islem_ara_eslesen;
				
				int islem_ara_uzunluk;
				
				
				do{
				cout<<"LUTFEN ISLEMIN NOSU OLAN 5 HANELI ISLEM NO'YU GIRINIZ=";
				cin>>islem_ara_no;
				islem_ara_uzunluk = islem_ara_no.size();
				
					if(islem_ara_uzunluk != 5){  //GIRILEN NO 5 HANEYE ESIT DEGILSE HATA VER.
							system("cls");
						cout <<"HATA ! : LUTFEN 5 HANELI ISLEM NO'YU GIRINIZ !"<<endl<<endl;
					}
					
				}while(islem_ara_uzunluk!=5); //GIRILEN NO 5 HANE OLANA KADAR DONGUYU DEVAM ETTIR.
						system("cls");
				
					ifstream dosya_ara("Islemler.txt");
						while(!dosya_ara.eof()){
							getline(dosya_ara,islem_ara_okunan);
							islem_ara_eslesen=islem_ara_okunan.substr(0,5);
							
							 if(islem_ara_no == islem_ara_eslesen){
							 	cout<<setw(6)<<"|Islem No|"<<left<<setw(10)<<"     |                        Islem                                |   "<<left<<setw(8)<<"        |Islem Turu|\n";
							 	cout <<islem_ara_okunan<<endl;
							 	system("pause");
							 }
						}
						dosya_ara.close();
		
}




string Sinif1::getislemno(){
	return islemno;
}
void Sinif1::mutlak(long double sayi1){system("cls");
	double sonuc;
	double sonuc1=-1;
	string islem_arasana_no;
				string islem_arasana_okunan;
				string islem_arasana_eslesen;
	
	do
	{system("cls");
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno;
}
while(islemno.size()!=5);
	system("cls");
		if(sayi1>0){
			sonuc=sayi1;
			system("cls");
	ofstream dosya66("Islemler.txt",ios::app);
	cout<<"Mutlak Degeri = "<<sonuc;
	dosya66.setf(ios::left);
	string islemno1=islemno;
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya66<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<" 'in Mutlak Degeri ="<<sonuc<<setw(46)<<right<<"TEK "<<endl;
	dosya66.close();
	cout <<"\n\n";
	system("pause");
		}
		else if(sayi1<0){
			
			sonuc1=sonuc1*sayi1;
			system("cls");
	ofstream dosya67("Islemler.txt",ios::app);
	cout<<"Mutlak Degeri = "<<sonuc1<<"";
	dosya67.setf(ios::left);
	string islemno1=islemno;
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya67<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<" 'in Mutlak Degeri ="<<sonuc1<<setw(46)<<right<<"TEK "<<endl;
	dosya67.close();
	cout <<"\n\n";
	system("pause");
		}
		else{
			system("cls");
	ofstream dosya68("Islemler.txt",ios::app);
	cout<<"Sayi 0'dir ";
	dosya68.setf(ios::left);
	string islemno1=islemno;
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya68<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<" Sayi 0'a = dir."<<setw(52)<<right<<"TEK "<<endl;
	dosya68.close();
	cout <<"\n\n";
	system("pause");
		}
		}
void Sinif1::faktoriyel(long double sayi1)
{	system("cls"); 
long double sonuc=1;
		for(long double i=sayi1;i>1;i--){
		sonuc=sonuc*i;
		
	}
	//cout<<"Faktoriyeli Alinacak Sayiyi Giriniz =";cin>>sayi1;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
		
	
	//islemno.substr(0,5)! deðilse yap
	system("cls");
	ofstream dosya("Islemler.txt",ios::app);
	cout<<"Cevap ="<<sonuc;
	dosya.setf(ios::left);
	string islemno1=islemno;
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<" 'in Faktoriyeli ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
	
	
		dosya.close();
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::sinus(long double sayi1)
{system("cls"); 
	//cout<<"Sinusu Alinacak Dereceyi Giriniz =";cin>>sayi1;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	system("cls");
	double PI=3.14159265;
	double sonuc;
	sonuc=sin(sayi1*PI/180);
	ofstream dosya2("Islemler.txt",ios::app);
	dosya2.setf(ios::left);
	string islemno1=islemno;
//	dosya2<<setw(10)<<islemno<<"\t"<<sayi1<<"*in Sinus Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya2<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"*in Sinus Degeri ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya2.close();
	cout<<"sin"<<sayi1<<"* ="<<sonuc;
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::arcsinus(long double sayi1)
{system("cls"); 
	//cout<<"Arcinusu Alinacak Dereceyi Giriniz =";cin>>sayi1;
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	system("cls");
	double PI=3.14159265;
	double sonuc;
	sonuc=asin(sayi1)*180.0/PI;
	ofstream dosya3("Islemler.txt",ios::app);
	dosya3.setf(ios::left);
	string islemno1=islemno;
	//dosya3<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Arcsinus Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya3<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<" Arcsinus Degeri ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya3.close();
	cout<<"sin"<<sayi1<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::cosinus(long double sayi1)
{system("cls"); 
	//cout<<"Cosinusu Alinacak Dereceyi Giriniz =";cin>>sayi1;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	system("cls");
	double PI=3.14159265;
	ofstream dosya4("Islemler.txt",ios::app);
	dosya4.setf(ios::left);
	string islemno1=islemno;
	long double sonuc;
	sonuc=cos ( sayi1 * PI / 180.0 );
	//dosya4<<setw(10)<<islemno<<"\t"<<sayi1<<"*in Cosinus Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya4<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"in Cosinus Degeri ="<<setw(12)<<left<<setw(45)<<sonuc<<right<<"TEK "<<endl;
		dosya4.close();
	cout<<"cos"<<sayi1<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::arccosinus(long double sayi1)
{system("cls"); 
	//cout<<"Arccosinusu Alinacak Dereceyi Giriniz =";cin>>sayi1;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	system("cls");
		double PI=3.14159265;	
		double sonuc;
		sonuc=acos (sayi1) * 180.0 / PI;
		ofstream dosya5("Islemler.txt",ios::app);
		dosya5.setf(ios::left);
	string islemno1=islemno;
			dosya5<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"Arccosinus Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
			dosya5.close();
		cout<<"arccos"<<sayi1<<"*  ="<<sonuc;
		cout <<"\n\n";
	system("pause");
}
void Sinif1::tanjant(long double sayi1)
{system("cls"); 
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	double PI=3.14159265;
	double sonuc;
	sonuc=tan(sayi1*PI/180.0);
	ofstream dosya6("Islemler.txt",ios::app);
	dosya6.setf(ios::left);
	string islemno1=islemno;
	//dosya6<<setw(10)<<islemno<<"\t"<<sayi1<<"*'in Tanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya6<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"in Tanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya6.close();
	cout<<"tan"<<sayi1<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::arctanjant(long double sayi1)
{system("cls"); 
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	//cout<<"Arctanjant Alinacak Dereceyi Giriniz =";cin>>sayi1;
	double PI=3.14159265;	
		double sonuc;
		sonuc=atan (sayi1) * 180 / PI;
		ofstream dosya7("Islemler.txt",ios::app);
		dosya7.setf(ios::left);
	string islemno1=islemno;
	//	dosya7<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Arctanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
		dosya7<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"Arctanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
			dosya7.close();
	cout<<"arctan"<<sayi1<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::cotanjant(long double sayi1)
{system("cls"); 
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	double PI=3.14159265;
	double sonuc;
	sonuc=1/(tan(sayi1*PI/180.0));
	ofstream dosya8("Islemler.txt",ios::app);
	dosya8.setf(ios::left);
	string islemno1=islemno;
	//dosya8<<setw(10)<<islemno<<"\t"<<sayi1<<"*'in Cotanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t           TEK "<<endl;
	dosya8<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<" Cotanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya8.close();
	cout<<"tan"<<sayi1<<"*  ="<<sonuc;
	cout <<"\n";
	system("pause");	
}
void Sinif1::arccotanjant(long double sayi1)
{system("cls"); 

	//cout<<"Arccotanjant Alinacak Dereceyi Giriniz =";cin>>sayi1;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	double PI=3.14159265;	
		double sonuc,sonuc1,sonuc2;
		sonuc1=acos (sayi1) * 180.0 / PI;
		sonuc2=asin(sayi1)*180.0/PI;
		sonuc=sonuc1/sonuc2;
		ofstream dosya9("Islemler.txt",ios::app);
		dosya9.setf(ios::left);
	string islemno1=islemno;
		//dosya9<<setw(10)<<islemno<<"\t"<<sayi1<<"*'in Arccotanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t   TEK "<<endl;
		dosya9<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"Arcotanjant Degeri="<<setw(12)<<left<<setw(45)<<sonuc<<right<<"TEK "<<endl;
			dosya9.close();
	cout<<"arccot"<<sayi1<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");	
}
void Sinif1::toplama(long double sayi1,long double sayi2)
{system("cls");
	//cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	ofstream dosya11("Islemler.txt",ios::app);
	dosya11.setf(ios::left);
	string islemno1=islemno;
	cout<<sayi1<<"+"<<sayi2<<"="<<sayi1+sayi2;
      dosya11<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"                 +"<<setw(12)<<right<<sayi2<<" = "<<left<<setw(31)<<sayi1+sayi2<<"CIFT "<<endl;
		dosya11.close();
	cout <<"\n\n";
	system("pause");	
	
}
void Sinif1::cikarma(long double sayi1,long double sayi2)
{system("cls"); 
   //cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	ofstream dosya12("Islemler.txt",ios::app);
	dosya12.setf(ios::left);
	string islemno1=islemno;
	cout<<sayi1<<"-"<<sayi2<<"="<<sayi1-sayi2;
	dosya12<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"                 -"<<setw(12)<<right<<sayi2<<" = "<<left<<setw(31)<<sayi1-sayi2<<"CIFT "<<endl;
		dosya12.close();	
		cout <<"\n\n";
	system("pause");	

}
void Sinif1::carpma(long double sayi1,long double sayi2)
{system("cls"); 
  //cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<sayi1<<"*"<<sayi2<<"="<<sayi1*sayi2;
	ofstream dosya13("Islemler.txt",ios::app);
	dosya13.setf(ios::left);
	string islemno1=islemno;
	dosya13<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"                 *"<<setw(12)<<right<<sayi2<<" = "<<left<<setw(31)<<sayi1*sayi2<<"CIFT "<<endl;
		dosya13.close();
	cout <<"\n\n";
	system("pause");
}
void Sinif1::bolme(long double sayi1,long double sayi2)
{system("cls");
   //cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<sayi1<<"/"<<sayi2<<"="<<sayi1/sayi2;	
	ofstream dosya14("Islemler.txt",ios::app);
	dosya14.setf(ios::left);
	string islemno1=islemno;
	dosya14<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"                 /"<<setw(12)<<right<<sayi2<<" = "<<left<<setw(31)<<sayi1/sayi2<<"CIFT "<<endl;
		dosya14.close();
	cout <<"\n\n";
	system("pause");
}
void Sinif1::logaritma(long double sayi1,long double sayi2)
{system("cls");    
//cout<<"1.Sayiyi Giriniz(Taban) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Yukari) =";cin>>sayi2;
do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<"Tabani ="<<sayi2<<" ve Yukarisi="<<sayi1<<" olan Logaritmik Islemin Cevabi = "<<log(sayi1)/log(sayi2);
	ofstream dosya15("Islemler.txt",ios::app);
	dosya15.setf(ios::left);
	string islemno1=islemno;
	//dosya15<<setw(10)<<islemno<<"\t"<<"Log"<<sayi1<<" Tabaninda "<<sayi2<<" = "<<setw(30)<<log(sayi1)/log(sayi2)<<setw(15)<<"\t\t\t  CIFT "<<endl;
	dosya15<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"         Tabaninda"<<setw(12)<<right<<sayi2<<" = "<<left<<setw(31)<<log(sayi1)/log(sayi2)<<"CIFT "<<endl;
		dosya15.close();
		cout <<"\n\n";
	system("pause");
}
void Sinif1::fonksiyon_asiri(int sayi7,int sayi8)
{	system("cls");
	//cout<<"1.Sayiyi Giriniz(Modu Alinacak Sayi) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Alinacagi Mod) =";cin>>sayi2;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<sayi7<<" mod "<<sayi8<<" = "<<sayi7%sayi8;
	ofstream dosya17("Islemler.txt",ios::app);
	dosya17.setf(ios::left);
	string islemno1=islemno;	
	//dosya17<<setw(10)<<islemno<<"\t"<<sayi1<<" Mod "<<sayi2<<" = "<<setw(30)<<sayi1%sayi2<<setw(15)<<"\t\t\t           CIFT "<<endl;
	dosya17<<setw(17)<<islemno<<left<<setw(12)<<sayi7<<"               mod"<<setw(12)<<right<<sayi8<<" = "<<left<<setw(31)<<sayi7%sayi8<<"CIFT "<<endl;	
		dosya17.close();
	cout <<"\n\n";
	system("pause");
}
void Sinif1::fonksiyon_asiri(long double sayi1,long double sayi2)
{system("cls");
	//cout<<"1.Sayiyi Giriniz(Yuzdesi Alinacak Sayi ) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Alinacak Yuzde Degeri) =";cin>>sayi2;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<sayi1<<" sayisinin %"<<sayi2<<"'i  ="<<(sayi1*sayi2)/100;	
	ofstream dosya16("Islemler.txt",ios::app);
	dosya16.setf(ios::left);
	string islemno1=islemno;
	//dosya16<<setw(10)<<islemno<<"\t"<<sayi1<<" Sayisinin %"<<sayi2<<"'i = "<<setw(30)<<(sayi1*sayi2)/100<<setw(15)<<"\t\t\t\t\t   CIFT "<<endl;
	dosya16<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"       sayisinin %"<<setw(12)<<right<<sayi2<<"'i  ="<<left<<setw(29)<<(sayi1*sayi2)/100<<"CIFT "<<endl;	
		dosya16.close();
	cout <<"\n\n";
	system("pause");
}

void Sinif1::kokalma(long double sayi1,long double sayi2)
{	system("cls");
	//cout<<"1.Sayiyi Giriniz(Koku Alinacak Sayi) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Kok Derecesi) =";cin>>sayi2;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<"Cevap = "<<pow(sayi1,1/sayi2);
	ofstream dosya18("Islemler.txt",ios::app);
	dosya18.setf(ios::left);
	string islemno1=islemno;	
	//dosya18<<setw(10)<<islemno<<"\t"<<sayi1<<" kok icerisinde "<<sayi2<<" kok derecesi olan islem = "<<setw(30)<<pow(sayi1,1/sayi2)<<setw(5)<<"  CIFT "<<endl;
	dosya18<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"    kok icerisinde "<<setw(12)<<right<<sayi2<<".dereceden = "<<left<<setw(20)<<pow(sayi1,1/sayi2)<<"CIFT "<<endl;	
		dosya18.close();	
	cout <<"\n\n";
	system("pause");
}
void Sinif1::uzeriislem(long double sayi1,long double sayi2)
{	system("cls");
//	cout<<"1.Sayiyi Giriniz(Alti) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Uzerisi) =";cin>>sayi2;
	do
	{
		cout<<"LUTFEN 5 HANELI ISLEM NO GIRINIZ=";cin>>islemno; /*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	}while(islemno.size()!=5);
	
	system("cls");
	cout<<"Cevap = "<<pow(sayi1,sayi2);	
	ofstream dosya19("Islemler.txt",ios::app);
	dosya19.setf(ios::left);
	string islemno1=islemno;
	//dosya19<<setw(10)<<islemno<<"\t"<<sayi1<<" uzeri "<<sayi2<<" = "<<setw(30)<<pow(sayi1,sayi2)<<setw(15)<<"\t\t\t\t   CIFT "<<endl;
	dosya19<<setw(17)<<islemno<<left<<setw(12)<<sayi1<<"            uzeri "<<setw(12)<<right<<sayi2<<" = "<<left<<setw(31)<<pow(sayi1,sayi2)<<"CIFT "<<endl;	
		dosya19.close();
	cout <<"\n\n";
	system("pause");
}



class Sinif2{
	protected:	
	void silme();
	void guncelleme();
};
void Sinif2::silme(){
		system("cls");
				string islem_sil_no;
				string islem_sil_okunan;
				string islem_sil_eslesen;
				do      								/*kontrol ettirmek için 5 haneli mi deðil mi diye (string diye size yapýldý)*/
	{
		cout<<"LUTFEN ISLEMIN NOSU OLAN 5 HANELI ISLEM NO'YU GIRINIZ=";
				cin>>islem_sil_no;
				system("cls");
				
					if(islem_sil_no.size()!=5){
							cout <<"HATA : LUTFEN 5 HANELI ISLEM NO'YU GIRINIZ !\n\n";
					}
					
	}while(islem_sil_no.size()!=5); 
	system("cls"); 
		
						ifstream dosya_sil("Islemler.txt");
							while(!dosya_sil.eof()){
								getline(dosya_sil,islem_sil_okunan);
								islem_sil_eslesen = islem_sil_okunan.substr(0,5);
									if(islem_sil_eslesen != islem_sil_no){
										if(islem_sil_okunan!=""){	
											ofstream dosya_sil_yaz("Yeni islem.txt",ios::app);
											dosya_sil_yaz <<islem_sil_okunan<<endl;
											dosya_sil_yaz.close();
										}
									}	
								}
								
							cout<<"Silme Islemi Tamamlandi.\n";
							dosya_sil.close();
							remove("Islemler.txt");
							cout<<"Islemler Duzeltildi.\n";
							system("pause");
							system("del Islemler.txt");
							rename("Yeni islem.txt","Islemler.txt");
							
							
							
			
}
void Sinif2::guncelleme(){
	string islem_guncelle_okunan;
	string islem_guncelle_eslesen;
	string islem_guncelle_no;
	
x:		system("cls");
		do
	{
		cout <<"GUNCELLENECEK ISLEMIN NO'SUNU GIRINIZ : ";
		cin>>islem_guncelle_no;
	}while(islem_guncelle_no.size()!=5);
		ifstream dosya_guncelle("Islemler.txt");
							while(!dosya_guncelle.eof()){
								getline(dosya_guncelle,islem_guncelle_okunan);
								islem_guncelle_eslesen = islem_guncelle_okunan.substr(0,5);
								
									if(islem_guncelle_eslesen != islem_guncelle_no){
										if(islem_guncelle_okunan!=""){
										ofstream dosya_guncelle_yaz("Yeni islem G.txt",ios::app);
											dosya_guncelle_yaz <<islem_guncelle_okunan<<endl;
												dosya_guncelle_yaz.close();			
											}
									}	
								}
								

							dosya_guncelle.close();
							remove("Islemler.txt");
						long  double sayi3;
						long  double sayi4;
							int sayi5;
							int sayi6;
							int secim6,secim7,secim8,secim9,secim10;
	cout<<"1-)TEKLI ISLEMLER\n"<<endl;
	cout<<"2-)IKILI ISLEMLER\n"<<endl;
	cout<<"0-)CIKIS YAP\n"<<endl;
	cout<<"SECIMINIZ = ";cin>>secim6;
	switch(secim6){
		case 1:{
		system("cls");
		cout<<"TEKLI ISLEMLER"<<endl<<endl<<endl;
			cout<<"1-)Faktoriyel Islemi\n";
			cout<<"2-)Derece Girip Sinus Degerini Bulma\n";
			cout<<"3-)Derece Girip Kosinus Degerini Bulma\n";
			cout<<"4-)Derece Girip Tanjant Degerini Bulma\n";
			cout<<"5-)Derece Girip Kotanjant Degerini Bulma\n";
			cout<<"6-)Deger Girip Arcsin Derecesini Bulma\n";
			cout<<"7-)Deger Girip Arccos Derecesini Bulma\n";
			cout<<"8-)Deger Girip Arctan Derecesini Bulma\n";
			cout<<"9-)Deger Girip Arccot Derecesini Bulma\n";
			cout<<"10-)Mutlak Deger Alma\n";
			cout<<"YAPMAK ISTEDIGINIZ ISLEMI GIRINIZ =";cin>>secim7;
			switch(secim7){
				case 1:{
				system("cls");
				cout<<"Faktoriyeli Alinacak Sayiyi Giriniz=";cin>>sayi3;
				cout<<"\n\n";
				system("cls"); 
long double sonuc=1.0;
		for(long double i=sayi3;i>1;i--){
		sonuc=sonuc*i;
		
	}
	system("cls");
	ofstream dosya30("Yeni islem G.txt",ios::app);
	dosya30.setf(ios::left);
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya30<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<" 'in Faktoriyeli ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya30.close();
		cout<<"Cevap ="<<sonuc;
	cout <<"\n\n";
	system("pause");break;}
	//
	case 2:	{system("cls");
			cout<<"Sinusu Alinacak Dereceyi Giriniz =";cin>>sayi3;
			cout<<"\n\n";
	system("cls");
	double PI=3.14159265;
	double sonuc;
	sonuc=sin(sayi3*PI/180);
	ofstream dosya31("Yeni islem G.txt",ios::app);
	dosya31.setf(ios::left);
//	dosya2<<setw(10)<<islemno<<"\t"<<sayi1<<"*in Sinus Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya31<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"*in Sinus Degeri ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya31.close();
	cout<<"sin"<<sayi3<<"* ="<<sonuc;
	cout <<"\n\n";
	system("pause");break;}
	//
	case 3:{
		system("cls");
			cout<<"Cosinusu Alinacak Dereceyi Giriniz =";cin>>sayi3;
	long double PI=3.14159265;
	long double sonuc;
	sonuc=cos ( sayi3 * PI / 180.0 );
	ofstream dosya32("Yeni islem G.txt",ios::app);
	dosya32.setf(ios::left);
	//dosya4<<setw(10)<<islemno<<"\t"<<sayi1<<"*in Cosinus Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya32<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"in Cosinus Degeri ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya32.close();
	cout<<"cos"<<sayi3<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");
	break; }
	//
	case 4:{

system("cls");
	cout<<"Tanjanti Alinacak Dereceyi Giriniz =";cin>>sayi3;
			cout<<"\n\n";
	double PI=3.14159265;
	double sonuc;
	sonuc=tan(sayi3*PI/180.0);
	ofstream dosya33("Yeni islem G.txt",ios::app);
	dosya33.setf(ios::left);
	//dosya6<<setw(10)<<islemno<<"\t"<<sayi1<<"*'in Tanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya33<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"in Tanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya33.close();
	cout<<"tan"<<sayi3<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");break;}
	//
	case 5:{
		
	system("cls");
	cout<<"Cotanjanti Alinacak Dereceyi Giriniz =";cin>>sayi3;
			cout<<"\n\n";
	double PI=3.14159265;
	double sonuc;
	sonuc=1/(tan(sayi3*PI/180.0));
	ofstream dosya34("Yeni islem G.txt",ios::app);
	dosya34.setf(ios::left);
	//dosya8<<setw(10)<<islemno<<"\t"<<sayi1<<"*'in Cotanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t           TEK "<<endl;
	dosya34<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<" Cotanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya34.close();
	cout<<"tan"<<sayi3<<"*  ="<<sonuc;
	cout <<"\n";
	system("pause");break;}
	//
	case 6:{
		system("cls");
		cout<<"Arcinusu Alinacak Sayiyi Giriniz =";cin>>sayi3;
				cout<<"\n\n";
	double PI=3.14159265;
	double sonuc;
	sonuc=asin(sayi3)*180.0/PI;
	ofstream dosya35("Yeni islem G.txt",ios::app);
	dosya35.setf(ios::left);
	//dosya3<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Arcsinus Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya35<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<" Arcsinus Degeri ="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
		dosya35.close();
	cout<<"sin"<<sayi3<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");break;}
	//
	case 7:{
	system("cls");
	cout<<"Arccos Alinacak Sayiyi Giriniz =";cin>>sayi3;
				cout<<"\n\n";
		double PI=3.14159265;	
		double sonuc;
		sonuc=acos (sayi3) * 180.0 / PI;
		ofstream dosya36("Yeni islem G.txt",ios::app);
		dosya36.setf(ios::left);
			dosya36<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"Arccosinus Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
			dosya36.close();
		cout<<"arccos"<<sayi3<<"*  ="<<sonuc;
		cout <<"\n\n";
	system("pause");break;}
	//
	case 8:{
	
	cout<<"Arctan Alinacak Sayiyi Giriniz =";cin>>sayi3;
				cout<<"\n\n";
	system("cls");
	//cout<<"Arctanjant Alinacak Dereceyi Giriniz =";cin>>sayi1;
	double PI=3.14159265;	
		double sonuc;
		sonuc=atan (sayi3) * 180 / PI;
		ofstream dosya37("Yeni islem G.txt",ios::app);
		dosya37.setf(ios::left);
	//	dosya7<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Arctanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
		dosya37<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"Arctanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
			dosya37.close();
	cout<<"arctan"<<sayi3<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");break;}
	
	case 9:{system("cls");
	cout<<"Arccot Alinacak Sayiyi Giriniz =";cin>>sayi3;
				cout<<"\n\n";
	double PI=3.14159265;	
		double sonuc,sonuc1,sonuc2;
		sonuc1=acos (sayi3) * 180.0 / PI;
		sonuc2=asin(sayi3)*180.0/PI;
		sonuc=sonuc1/sonuc2;
		ofstream dosya38("Yeni islem G.txt",ios::app);
		dosya38.setf(ios::left);	
		//dosya9<<setw(10)<<islemno<<"\t"<<sayi1<<"*'in Arccotanjant Degeri ="<<setw(30)<<sonuc<<setw(15)<<"\t\t   TEK "<<endl;
		dosya38<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"Arcotanjant Degeri="<<setw(12)<<left<<setw(46)<<sonuc<<right<<"TEK "<<endl;
			dosya38.close();
			system("cls");
	cout<<"arccot"<<sayi3<<"*  ="<<sonuc;
	cout <<"\n\n";
	system("pause");
		break;
	}
	case 10:{system("cls");
		cout<<"Mutlak Degeri Alinacak Sayiyi Giriniz =";cin>>sayi3;
				cout<<"\n\n";
	system("cls");
		double sonuc;
	double sonuc1=-1;
		if(sayi3>0){
			sonuc=sayi3;
			system("cls");
	ofstream dosya75("Yeni islem G.txt",ios::app);	
	dosya75.setf(ios::left);
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya75<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<" 'in Mutlak Degeri ="<<sonuc<<setw(46)<<right<<"TEK "<<endl;
	dosya75.close();
	cout<<"Mutlak Degeri = "<<sonuc;
	cout <<"\n\n";
	system("pause");
		}
		else if(sayi3<0){
			
			sonuc1=sonuc1*sayi3;
			system("cls");
	ofstream dosya76("Yeni islem G.txt",ios::app);
	dosya76.setf(ios::left);
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya76<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<" 'in Mutlak Degeri ="<<sonuc1<<setw(46)<<right<<"TEK "<<endl;
	dosya76.close();
	cout<<"Mutlak Degeri = "<<sonuc1;
	cout <<"\n\n";
	system("pause");
		}
		else{
			system("cls");
	ofstream dosya77("Yeni islem G.txt",ios::app);
	dosya77.setf(ios::left);
//	dosya<<setw(10)<<islemno<<"\t"<<sayi1<<"'in Faktoriyeli ="<<setw(30)<<sonuc<<setw(15)<<"\t\t\t   TEK "<<endl;
	dosya77<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<" Sayi 0'a = dir."<<setw(52)<<right<<"TEK "<<endl;
	dosya77.close();
		cout<<"Sayi 0'dir ";
	cout <<"\n\n";
	system("pause");
		}
		break;
	}
	default:{
		cout<<"Yanlis Girdiniz !!!";
		system("pause");
		system("cls");
		break;
	}
}
break;
}
	case 2:{
		system("cls");
			cout<<"CIFTLI ISLEMLER"<<endl<<endl<<endl;
			cout<<"1-)Toplama,Cikartma,Carpma,Bolme Islemleri\n";
			cout<<"2-)Logaritma 1.sayi uzeri 2.sayi Islemi\n";
			cout<<"3-)Yuzde Islemi\n";
			cout<<"4-)Mod Alma Islemi\n";
			cout<<"5-)Kok Alma Islemi\n";
			cout<<"6-)1.sayi uzeri 2.sayi Islemi\n";
			cout<<"Yapmak Istediiginiz Islemin Sayisini Giriniz  =";cin>>secim8;
			switch(secim8){
				case 1:{system("cls");
					cout<<"1-)Toplama Islemi\n";
					cout<<"2-)Cikarma Islemi\n";
					cout<<"3-)Carpma Islemi\n";
					cout<<"4-)Bolme Islemi\n";
					cout<<"Yapmak Istediginiz Islemi Giriniz =";cin>>secim9;
					switch(secim9){
						case 1:{
						system("cls");
						cout<<"1.Sayiyi Giriniz =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi4;cout<<"\n\n";
						system("cls");
	ofstream dosya39("Yeni islem G.txt",ios::app);
	dosya39.setf(ios::left);
      dosya39<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"                 +"<<setw(12)<<right<<sayi4<<" = "<<left<<setw(30)<<sayi3+sayi4<<"CIFT "<<endl;
		dosya39.close();
		cout<<sayi3<<"+"<<sayi4<<"="<<sayi3+sayi4;
	cout <<"\n\n";
	system("pause");
							break;
						}
						case 2:{
						
system("cls");
							cout<<"1.Sayiyi Giriniz =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi4;cout<<"\n\n";
	ofstream dosya40("Yeni islem G.txt",ios::app);
	dosya40.setf(ios::left);
	dosya40<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"                 -"<<setw(12)<<right<<sayi4<<" = "<<left<<setw(30)<<sayi3-sayi4<<"CIFT "<<endl;
		dosya40.close();
		cout<<sayi3<<"-"<<sayi4<<"="<<sayi3/sayi4;	
		cout <<"\n\n";
					
							break;
						}
						case 3:{
							system("cls");
							cout<<"1.Sayiyi Giriniz =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi4;cout<<"\n\n";
	ofstream dosya41("Yeni islem G.txt",ios::app);
	dosya41.setf(ios::left);
	
	dosya41<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"                 *"<<setw(12)<<right<<sayi4<<" = "<<left<<setw(30)<<sayi3*sayi4<<"CIFT "<<endl;
		dosya41.close();
			cout<<sayi3<<"*"<<sayi4<<"="<<sayi3*sayi4;
		cout <<"\n\n";
							
							break;
						}
						case 4:{
							system("cls");
							cout<<"1.Sayiyi Giriniz =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi4;cout<<"\n\n";
	ofstream dosya42("Yeni islem G.txt",ios::app);
	dosya42.setf(ios::left);
	
	dosya42<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"                 /"<<setw(12)<<right<<sayi4<<" = "<<left<<setw(30)<<sayi3/sayi4<<"CIFT "<<endl;
		dosya42.close();
			cout<<sayi3<<"/"<<sayi4<<"="<<sayi3/sayi4;
		cout <<"\n\n";
					
							
							break;
						}
						default:{
							cout<<"Yanlis Giris Yaptiniz!!!!"<<endl;
							system("pause");
							break;
						}
							
					}
					
					break;
				}
				case 2:{
				system("cls");
	cout<<"1.Sayiyi Giriniz(Taban) =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz(Yukari) =";cin>>sayi4; 			
	ofstream dosya43("Yeni islem G.txt",ios::app);
	dosya43.setf(ios::left);
	//dosya15<<setw(10)<<islemno<<"\t"<<"Log"<<sayi1<<" Tabaninda "<<sayi2<<" = "<<setw(30)<<log(sayi1)/log(sayi2)<<setw(15)<<"\t\t\t  CIFT "<<endl;
	dosya43<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"         Tabaninda"<<setw(12)<<right<<sayi4<<" = "<<left<<setw(30)<<log(sayi3)/log(sayi4)<<"CIFT "<<endl;
		dosya43.close();
		cout<<"Tabani ="<<sayi3<<" ve Yukarisi="<<sayi4<<" olan Logaritmik Islemin Cevabi = "<<log(sayi3)/log(sayi4);
		cout <<"\n\n";
	system("pause");
					
					break;
				}
				case 3:{system("cls");
				cout<<"1.Sayiyi Giriniz(Yuzdesi Alinacak Sayi ) =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz(Alinacak Yuzde Degeri) =";cin>>sayi4;
				
	ofstream dosya44("Yeni islem G.txt",ios::app);
	dosya44.setf(ios::left);
	//dosya16<<setw(10)<<islemno<<"\t"<<sayi1<<" Sayisinin %"<<sayi2<<"'i = "<<setw(30)<<(sayi1*sayi2)/100<<setw(15)<<"\t\t\t\t\t   CIFT "<<endl;
	dosya44<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"       sayisinin %"<<setw(12)<<right<<sayi4<<"'i  ="<<left<<setw(28)<<(sayi3*sayi4)/100<<"CIFT "<<endl;	
		dosya44.close();
			cout<<sayi3<<" sayisinin %"<<sayi4<<"'i  ="<<(sayi3*sayi4)/100;
	cout <<"\n\n";
	system("pause");	
					break;
				}
				case 4:{system("cls");
					cout<<"1.Sayiyi Giriniz(Modu Alinacak Sayi) =";cin>>sayi5;cout<<endl;cout<<"2.Sayiyi Giriniz(Alinacagi Mod) =";cin>>sayi6;
	ofstream dosya45("Yeni islem G.txt",ios::app);
	dosya45.setf(ios::left);	
	//dosya17<<setw(10)<<islemno<<"\t"<<sayi1<<" Mod "<<sayi2<<" = "<<setw(30)<<sayi1%sayi2<<setw(15)<<"\t\t\t           CIFT "<<endl;
	dosya45<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi5<<"               mod"<<setw(12)<<right<<sayi6<<" = "<<left<<setw(30)<<sayi5%sayi6<<"CIFT "<<endl;	
		dosya45.close();
			cout<<sayi5<<" mod "<<sayi6<<" = "<<sayi5%sayi6;
	cout <<"\n\n";
	system("pause");
					break;
				}
				case 5:{system("cls");
				cout<<"1.Sayiyi Giriniz(Koku Alinacak Sayi) =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz(Kok Derecesi) =";cin>>sayi4;
				system("cls");
	
	ofstream dosya46("Yeni islem G.txt",ios::app);
	dosya46.setf(ios::left);	
	//dosya18<<setw(10)<<islemno<<"\t"<<sayi1<<" kok icerisinde "<<sayi2<<" kok derecesi olan islem = "<<setw(30)<<pow(sayi1,1/sayi2)<<setw(5)<<"  CIFT "<<endl;
	dosya46<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"    kok icerisinde "<<setw(12)<<right<<sayi4<<".dereceden = "<<left<<setw(20)<<pow(sayi3,1/sayi4)<<"CIFT "<<endl;	
		dosya46.close();
			cout<<"Cevap = "<<pow(sayi3,1/sayi4);
	cout <<"\n\n";
	system("pause");
					break;
				}
				case 6:{system("cls");
				cout<<"1.Sayiyi Giriniz(Alti) =";cin>>sayi3;cout<<endl;cout<<"2.Sayiyi Giriniz(Uzerisi) =";cin>>sayi4;
				system("cls");
	
	ofstream dosya47("Yeni islem G.txt",ios::app);
	dosya47.setf(ios::left);
	//dosya19<<setw(10)<<islemno<<"\t"<<sayi1<<" uzeri "<<sayi2<<" = "<<setw(30)<<pow(sayi1,sayi2)<<setw(15)<<"\t\t\t\t   CIFT "<<endl;
	dosya47<<setw(17)<<islem_guncelle_no<<left<<setw(12)<<sayi3<<"            uzeri "<<setw(12)<<right<<sayi4<<" = "<<left<<setw(30)<<pow(sayi3,sayi4)<<"CIFT "<<endl;	
		dosya47.close();
		cout<<"Cevap = "<<pow(sayi3,sayi4);	
	cout <<"\n\n";
	system("pause");
					break;
				}
			default:{
							cout<<"Yanlis Giris Yaptiniz!!!!"<<endl;
							system("pause");
							break;}
							
							}
							
						break;}
						
		default:{
							cout<<"Yanlis Giris Yaptiniz!!!!"<<endl;
							cout<<"Girdiginiz Islem No'su Silinmistir Tekrar Islem Yapiniz"<<endl;
							system("pause");
							break;}
							
							
							}
		rename("Yeni islem G.txt","Islemler.txt");
							cout<<"Guncelleme Islemi Tamamlandi.\n";
							cout<<"Islemler Degistirildi.\n";
							system("pause");
		
			
}

class AnaFonksiyon:protected Sinif1,protected Sinif2
{
	private:
long 	double sayi1;
long 	double sayi2;
int sayi7,sayi8;
		string secim,secim1,secim3,secim4,secim5;
		public:
AnaFonksiyon();
~AnaFonksiyon();
		
};

AnaFonksiyon::AnaFonksiyon()
{
system("color 71");

	do{
		system("cls");
		cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************\a"<<endl;
	cout<<"*******************                                                                     ********************"<<endl;
	cout<<"*******************     H E S A P    **************************     M A K I N E S I     ********************"<<endl;
	cout<<"*******************                                                                     ********************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"********IKILI ISLEMLER = TOPLAMA-CIKARMA-CARPMA-BOLME-LOGARITMA-YUZDE-MOD-KOKLU-X UZERI Y-e UZERI X*********"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
			cout<<"*******************                                                                     ********************"<<endl;
	cout<<"*********TEKLI ISLEMLER  =  FAKTORIYEL-SINUS-KOSINUS-TANJANT-KOTANJANT-ARCLAR ******************************"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
		cout<<"*********    PROGRAM BASLAMADAN ONCEKI BILGILER      PI=3.14159265 KABUL EDILDI.        ********************"<<endl;
		cout<<"*******************                                                                     ********************"<<endl;
			cout<<"*******************                                                                     ********************"<<endl;
			cout<<"*********   (SIN COS GIBI, CEVABI ILE ISLEM YAPILAMIYACAK SEYLERLE ISLEM YAPILAMAZ.)    ********************"<<endl;
					cout<<"*******************                                                                     ********************"<<endl;
			cout<<"*******************                                                                     ********************"<<endl;
	
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************"<<endl;
	cout<<"************************************************************************************************************\n"<<endl;
	cout<<"LUTFEN ISLEM YAPTIRMAK ISTEDIGINIZ TURU GIRINIZ\n\n";
	cout<<"1-)TEKLI ISLEMLER\n"<<endl;
	cout<<"2-)IKILI ISLEMLER\n"<<endl;
	cout<<"3-)TUM YAPILANLARI EKRANA CIKART\n"<<endl;
	cout<<"4-)ISLEM SILDIRME\n"<<endl;
	cout<<"5-)ISLEM ARATMA\n"<<endl;
	cout<<"6-)ISLEM DUZENLEME\n"<<endl;
	cout<<"0-)CIKIS YAP\n"<<endl;
	
	
	cout<<"SECIMINIZ = ";cin>>secim;
	if(secim=="1"){
		
		do{
			system("cls");
			cout<<"TEKLI ISLEMLER"<<endl<<endl<<endl;
			cout<<"1-)Faktoriyel Islemi\n";
			cout<<"2-)Derece Girip Sinus Degerini Bulma\n";
			cout<<"3-)Derece Girip Kosinus Degerini Bulma\n";
			cout<<"4-)Derece Girip Tanjant Degerini Bulma\n";
			cout<<"5-)Derece Girip Kotanjant Degerini Bulma\n";
			cout<<"6-)Deger Girip Arcsin Derecesini Bulma\n";
			cout<<"7-)Deger Girip Arccos Derecesini Bulma\n";
			cout<<"8-)Deger Girip Arctan Derecesini Bulma\n";
			cout<<"9-)Deger Girip Arccot Derecesini Bulma\n";
			cout<<"10-)Mutlak Deger Islemi\n";
			cout<<"0-)GERI\n";
			cout<<"Yapmak Istediginiz Islemin Sayisini Giriniz  =";
			cin>>secim4;
			if(secim4=="1")
			{ system("cls");
			
			
				cout<<"Faktoriyeli Alinacak Sayiyi Giriniz =";cin>>sayi1;
					cout <<"\n\n";
			  faktoriyel(sayi1);
			}
			else if(secim4=="2")
			{ system("cls"); 
			
			cout<<"Sinusu Alinacak Dereceyi Giriniz =";cin>>sayi1;
			cout<<"\n\n";
				sinus(sayi1);
			}
			else if(secim4=="3")
			{ system("cls"); 
			
			cout<<"Cosinusu Alinacak Dereceyi Giriniz =";cin>>sayi1;
			cout<<"\n\n";
			
				cosinus(sayi1);
			}
			else if(secim4=="4")
			{
				 system("cls"); 
			
			cout<<"Tanjanti Alinacak Dereceyi Giriniz =";cin>>sayi1;
			cout<<"\n\n";
				tanjant(sayi1);
			}
			else if(secim4=="5")
			{
			 system("cls"); 
			
			cout<<"Cotanjanti Alinacak Dereceyi Giriniz =";cin>>sayi1;
			cout<<"\n\n";
				cotanjant(sayi1);
			}
			else if(secim4=="6")
			{ system("cls");
			
			cout<<"Arcinusu Alinacak Sayiyi Giriniz =";cin>>sayi1;
				cout<<"\n\n";
				arcsinus(sayi1);
			}
			else if(secim4=="7")
			{system("cls");
			
			cout<<"Arccos Alinacak Sayiyi Giriniz =";cin>>sayi1;
				cout<<"\n\n";
				arccosinus(sayi1);
			}
			else if(secim4=="8")
			{system("cls");
			
			cout<<"Arctan Alinacak Sayiyi Giriniz =";cin>>sayi1;
				cout<<"\n\n";
				arctanjant(sayi1);
			}
			else if(secim4=="9")
			{system("cls");
			
			cout<<"Arccot Alinacak Sayiyi Giriniz =";cin>>sayi1;
				cout<<"\n\n";
				arccotanjant(sayi1);
			}
			else if(secim4=="10"){
				system("cls");
				cout<<"Mutlak Degeri Alinacak Sayiyi Giriniz =";cin>>sayi1;
				cout<<"\n\n";
				mutlak(sayi1);
			}
			if((secim4!="1")&&(secim4!="2")&&(secim4!="3")&&(secim4!="4")&&(secim4!="5")&&(secim4!="6")&&(secim4!="7")&&(secim4!="8")&&(secim4!="9")&&(secim4!="10")&&(secim4!="0")){
				system("cls");
				cout<<"HATALI GIRIS\n\a";
				system("pause");
				
			}
			}  while(secim4!="0");
			
	}/*ÝLK MENU SECIM SONRASI*/
	if(secim=="2"){
		
			do{
			system("cls");
			cout<<"CIFTLI ISLEMLER"<<endl<<endl<<endl;
			cout<<"1-)Toplama,Cikartma,Carpma,Bolme Islemleri\n";
			cout<<"2-)Logaritma 1.sayi uzeri 2.sayi Islemi\n";
			cout<<"3-)Yuzde Islemi\n";
			cout<<"4-)Mod Alma Islemi\n";
			cout<<"5-)Kok Alma Islemi\n";
			cout<<"6-)1.sayi uzeri 2.sayi Islemi\n";
			cout<<"0-)GERI\n";
			cout<<"Yapmak Istediiginiz Islemin Sayisini Giriniz  =";
			cin>>secim3;
			
			if(secim3=="1"){
				//do{
					system("cls");
					cout<<"1-)Toplama Islemi\n";
					cout<<"2-)Cikarma Islemi\n";
					cout<<"3-)Carpma Islemi\n";
					cout<<"4-)Bolme Islemi\n";
					cout<<"Yapmak Istediginiz Islemi Giriniz =";cin>>secim5;
					
					if(secim5=="1"){system("cls");
						cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
				
						toplama(sayi1,sayi2);
				
					}
					else if(secim5=="2"){system("cls");

						cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
						cikarma(sayi1,sayi2);
						
					}
					else if(secim5=="3"){system("cls");
							
						cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
						carpma(sayi1,sayi2);
						
					}
					else if(secim5=="4"){system("cls");
							
						cout<<"1.Sayiyi Giriniz =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz =";cin>>sayi2;
						bolme(sayi1,sayi2);
					}
					if((secim5!="1")&&(secim5!="2")&&(secim5!="3")&&(secim5!="4")&&(secim5!="0")){
				system("cls");
				cout<<"HATALI GIRIS\n\a";
				system("pause");
				}
			//}while (secim5!="0");
			}
			
			else if(secim3=="2"){system("cls");
					
						cout<<"1.Sayiyi Giriniz(Taban) =";cin>>sayi2;cout<<endl;cout<<"2.Sayiyi Giriniz(Yukari) =";cin>>sayi1; 
				logaritma(sayi1,sayi2);
			}
			else if(secim3=="3"){system("cls");
					
					cout<<"1.Sayiyi Giriniz(Yuzdesi Alinacak Sayi ) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Alinacak Yuzde Degeri) =";cin>>sayi2;
				fonksiyon_asiri(sayi1,sayi2);
			}
			else if(secim3=="4"){system("cls");
						cout<<"1.Sayiyi Giriniz(Modu Alinacak Sayi) =";cin>>sayi7;cout<<endl;cout<<"2.Sayiyi Giriniz(Alinacagi Mod) =";cin>>sayi8;
				fonksiyon_asiri(sayi7,sayi8);
			}
			else if(secim3=="5"){system("cls");
					
					cout<<"1.Sayiyi Giriniz(Koku Alinacak Sayi) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Kok Derecesi) =";cin>>sayi2;
				kokalma(sayi1,sayi2);
			}
			else if(secim3=="6"){system("cls");
					
					cout<<"1.Sayiyi Giriniz(Alti) =";cin>>sayi1;cout<<endl;cout<<"2.Sayiyi Giriniz(Uzerisi) =";cin>>sayi2;
				uzeriislem(sayi1,sayi2);
			}
			if((secim3!="1")&&(secim3!="2")&&(secim3!="3")&&(secim3!="4")&&(secim3!="5")&&(secim3!="6")&&(secim3!="0")){
				system("cls");
				cout<<"HATALI GIRIS\n\a";
				system("pause");
			}
		}while(secim3!="0");
		
	
		} 
		if(secim=="3")
		{
			listeleme();
			}
			
			if(secim=="4"){
				silme();			
			}	
			if(secim=="5"){
			
				arama();			
			}
			if(secim=="6"){
				guncelleme();
			}
		
	

if ((secim != "1") && (secim != "2") && (secim != "3") &&(secim!="4")&&(secim!="5")&&(secim!="6")&&(secim != "0")) {
			system("cls");
			cout << "HATALI GIRIS\n\a";
			system("pause");	}
		
	}while (secim != "0");
	
		
	
	system("cls");
	cout << "PROGRAMDAN CIKILDI.\n";
	system("pause");
}
AnaFonksiyon::~AnaFonksiyon()
{
	system("cls");
	cout<<"--IYI GUNLER DILERIZ--"<<endl;
	cout<<"(YIKICI FONKSIYON CALISTI)"<<endl;
}

int main()
{
AnaFonksiyon I;
	system("color F4");	
	return 0;
}

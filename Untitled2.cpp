#include <iostream>
using namespace std;
int main()
{
	float vize1,vize2,vize3,vize4,vize5,vize6,vize7,vize8;
	float final1,final2,final3,final4,final5,final6,final7,final8;
	float proje,quiz,kanaat,lab,odev;
	float toplam,dortluk;
	int secim;

a0:	
	cout<<"Duzce Universitesi 2018-2019 Bahar Yariyili Bilgisayar Muhendisligi Not Ortalama Hesaplama Programi\n"<<endl;
	cout<<"Lutfen notlarinizi sirasiyla giriniz..."<<endl;
a1:
	cout<<"\nTurk Dili Vize Notunuz : "<<endl;
	cin>>vize1;
	if ((vize1>=0)&&(vize1<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a1;
	}
a2:
	cout<<"\nInkilap Vize Notunuz : "<<endl;
	cin>>vize2;
	if ((vize2>=0)&&(vize2<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a2;
	}
a3:
	cout<<"\nIngilizce Vize Notunuz : "<<endl;
	cin>>vize3;
	if ((vize3>=0)&&(vize3<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a3;
	}
a4:
	cout<<"\nIs Guvenligi Vize Notunuz : "<<endl;
	cin>>vize4;
	if ((vize4>=0)&&(vize4<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a4;
	}
a5:
	cout<<"\nMatematik Vize Notunuz : "<<endl;
	cin>>vize5;
	if ((vize5>=0)&&(vize5<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a5;
	}
a6:
	cout<<"\nFizik Vize Notunuz : "<<endl;
	cin>>vize6;
	if ((vize6>=0)&&(vize6<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a6;
	}
a7:
	cout<<"\nAlgoritma Vize Notunuz : "<<endl;
	cin>>vize7;
	if ((vize7>=0)&&(vize7<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a7;
	}
a8:
	cout<<"\nElektrik Vize Notunuz : "<<endl;
	cin>>vize8;
	if ((vize8>=0)&&(vize8<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a8;
	}

a9:	
	cout<<"\nTurk Dili Final Notunuz : "<<endl;
	cin>>final1;
	if ((final1>=0)&&(final1<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a9;
	}
a10:
	cout<<"\nInkiliap Final Notunuz : "<<endl;
	cin>>final2;
	if ((final2>=0)&&(final2<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a10;
	}
a11:
	cout<<"\nIngilizce Final Notunuz : "<<endl;
	cin>>final3;
	if ((final3>=0)&&(final3<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a11;
	}
a12:
	cout<<"\nIs Guvenligi Final Notunuz : "<<endl;
	cin>>final4;
	if ((final4>=0)&&(final4<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a12;
	}
a13:
	cout<<"\nMatematik Final Notunuz : "<<endl;
	cin>>final5;
	if ((final5>=0)&&(final5<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a13;
	}
a14:
	cout<<"\nFizik Final Notunuz : "<<endl;
	cin>>final6;
	if ((final6>=0)&&(final6<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a14;
	}
a15:
    cout<<"\nAlgoritma Final Notunuz : "<<endl;
	cin>>final7;
	if ((final7>=0)&&(final7<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a15;
	}
a16:
	cout<<"\nElektrik Final Notunuz : "<<endl;
	cin>>final8;
	if ((final8>=0)&&(final8<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a16;
	}
	
a17:
	cout<<"\nAlgoritma Proje Notunuz : "<<endl;
	cin>>proje;
	if ((proje>=0)&&(proje<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a17;
	}
a18:
	cout<<"\nAlgoritma Quiz Notunuz : "<<endl;
	cin>>quiz;
	if ((quiz>=0)&&(quiz<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a18;
	}
a19:
	cout<<"\nAlgoritma Kanaat Notunuz : "<<endl;
	cin>>kanaat;
	if ((kanaat>=0)&&(kanaat<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a19;
	}
	
a20:
	cout<<"\nElektrik Lab Notunuz : "<<endl;
	cin>>lab;
	if ((lab>=0)&&(lab<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a20;
	}
a21:
	cout<<"\nElektrik Odev Notunuz : "<<endl;
	cin>>odev;
	if ((odev>=0)&&(odev<=100))
	{
	}
	else
	{
		cout<<"\nYanlis not degeri girdiniz. Tekrar Deneyiniz."<<endl;
		goto a21;
	}
	
	//T�m notlar al�nd� �imdi matematiksel hesaplamalarla ortalamay� bulma zaman�...
	
	vize1=vize1*2.666666667/100;
	vize2=vize2*2.666666667/100;
	vize3=vize3*2.666666667/100;
	vize4=vize4*4/100;
	vize5=vize5*6.666666668/100;
	vize6=vize6*6.666666668/100;
	vize7=vize7*5/100;
	vize8=vize8*6/100;
	
	final1=final1*4/100;
	final2=final2*4/100;
	final3=final3*4/100;
	final4=final4*6/100;
	final5=final5*10/100;
	final6=final6*10/100;
	final7=final7*6.666666668/100;
	final8=final8*8/100;
	
	proje=proje*2.50000000005/100;
	quiz=quiz*1.6666666667/100;
	kanaat=kanaat*0.83333333335/100;
	
	lab=lab*4/100;
	odev=odev*2/100;
	
	toplam=vize1+vize2+vize3+vize4+vize5+vize6+vize7+vize8+final1+final2+final3+final4+final5+final6+final7+final8+proje+quiz+kanaat+lab+odev;
	cout<<"\nToplam Notunuz ;\n"<<endl;
	
	cout<<"\n100 Uzerinden = "<<toplam<<endl;
	dortluk=toplam*4/100;
	cout<<"\n4 Uzerinden = "<<dortluk<<endl;
	cout<<endl;
	
	cout<<"\n...MUHITTIN CETIN BASARILAR DILER...\n"<<endl;
	
	cout<<"Yeni islem yapmak istiyorsaniz 1'e basin.";
	cin>>secim;
	
	
	if(secim==1)
	{
		goto a0;
	}
	
	else
	{
	}
	
	return 0;
}

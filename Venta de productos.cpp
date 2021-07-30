#include <iostream>
#include <string.h>
#include <stdio.h>
#include <conio.h>
using namespace std;

int main ()
{
    int rti=10;
	string articulos[10];
	float precio[10];
	float total,subt=0,iva,dest;

cout<<"**************VENTAS DE PRODUCTOS**************\n\n";	
	for(int c=0;c<rti;c++)
	{	
	    cout<<"INGRESE EL NOMBRE Y EL PRECIO DEL PRODUCTO #"<<(c+1)<<":\n";
        cout<<"Producto a comprar:\n "; 
		getline(cin,articulos[c]);
		cout<<"Precio:\n "; 
		cin>>precio[c];
		cin.ignore();
		cout<<endl;
    }
    
  cout<<"***********VALOR A PAGAR***********\n\n";
    for(int c=0;c<rti;c++)
    {
    	subt=subt+precio[c];
    	iva=subt*0.12;	
	    dest=subt*0.10;
    	total=subt+iva-dest;
	}
	for(int c=0;c<rti;c++)
	{
		cout<<c+1<<".-     "<<articulos[c]<<"\t\t"<<precio[c]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<subt<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dest<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
cout<<"****************GRACIAS POR ELEGIRNOS****************";
getch ();
return 0;
}
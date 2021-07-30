# Programa de facturacion.

## Nombre del autor : 

Luis Abrahan Quñonez Caicedo :alien:

![](https://avatars.githubusercontent.com/u/86172240?v=4)

### Nombres de los archivos. :black_nib:

  ####  Ventas de productos.cpp
  
  #### Ventas.jpg
  
# Descriccion :black_nib:

**Ventas de producto . cpp**

Este archivo cuenta con la funcion de elaborar una factura de 10 productos de compras ingresadas por el usuario. En el cual muestra el subtotal,  el incremento del iva y un descuento del 10% y la suma de todo esto que es el total a pagar.
Para ello primero se declararon las variables que son:  
int rti=10, 
string articulos[10].
float precio[10].
float total,subt=0,iva,dest.
Para poder ingresar el precio y el nombre de los productos se utilizo el ciclo "for" y el comando cout<< para mostrar el mensaje por pantalla pidiendole al usuario que ingrese el nombre y el precio del producto, cin>>articulo, precio para almacenar el nombre y el precio ingresado.
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
    
Se realizo otro ciclo for para calcular el iva, subtotal, descuento, total:

      for(int c=0;c<rti;c++)
     {
    	subt=subt+precio[c];
    	iva=subt*0.12;	
	    dest=subt*0.10;
    	total=subt+iva-dest;
	}
  
Y  por ultimo se creo un ciclo for para generar la factura.

     for(int c=0;c<rti;c++)
	{
		cout<<c+1<<".-     "<<articulos[c]<<"\t\t"<<precio[c]<<endl;
	}
	cout<<"\t SUBTOTAL \t"<<subt<<endl;
	cout<<"\t IVA 12% + \t"<<iva<<endl;
	cout<<"\t DESCUENTO 10% \t"<<dest<<endl;
	cout<<"\t TOTAL \t\t\n"<<total<<endl;
  
**Ventas.jpg** :black_nib:

En este archivo esta el diagrama de flujo del programa principal, donde esta estructurado paso a paso cada parte de la codificacion en c++, utilizando su respectivo simbolo  y codigo.

### Descarga de archivos. :black_nib:

Pasos para descargar los archivos.  

1 . Click en "code".

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/1.jpeg)

2 . Click en Download ZIP.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/2.jpeg)

3 . Una vez descargado el archivo dar click en "extraer aquí".

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/3.jpeg)

4 . Estos son los archivos extraídos.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/descarga.jpeg)


### Copilacion del programa.  :black_nib:

Proceso para copilar.

 1. Click  en el icono de copilar.
 
![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/copilar.jpeg)

2 . Click en el iconode ejecutar.

![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar0.jpeg)

3 . Mostrar programa por pantalla.

               3 .1 .  Ingresar arcticulo y sus precios.
               
   ![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar5.jpeg)
   
            3 .2 . Mostrar por pantalla resultado.
            
			 Nota: estas incluido subtotal, total, iva.
       
  ![](https://raw.githubusercontent.com/LuisAbrahanQuinonezCaicedo/Imagenes/main/ejecutar6.jpeg)

### End :fire:

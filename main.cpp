/**********************************************************************************************************
Name: Inventario de tienda

Author: Andrés Fernando Jerez Medina - 2190416 
Date:23/11/2020

Purpose: Parcial 1 - Ejercicio 1

Use: Crear un programa que almacene el inventario de una tienda, permitir ingresar nuevos productos
y crear facturas de venta para el usuario.

**********************************************************************************************************/
#include <stdio.h>
#include <iostream> 
#include <iomanip> 
#include "libreria1.h"             //Importo las librerías necesarias para el programa
#include <fstream>
#include <cstdlib>
using namespace std;

int main() {

  char nuevoprod,eleccion;          //Declaración de las variables que ingresará el usuario
  int venta;
  string newlacnombre,newlactipo,newlacdist,newcarnombre,newcartipo,newcardist,newdulnombre,newdultipo,newduldist,newbebnombre,newbebtipo,newbebdist;
  float newlacprecio,newlacref,newcarprecio,newcarref,newdulprecio,newdulref,newbebprecio,newbebref; 

  cout<<"Buen día, este programa le mostrará el inventario de una tienda y le dará la opción de agregar productos o hacer sus compras de los ya existentes"<<endl;
  cout<<endl;

  lacteos queso = {"Queso salado","Quesos","Colanta",200,5000,100};
  lacteos leche = {"Leche litro","Leche","Colanta",1,3000,101};
  lacteos yogurt = {"Litro de yogurt","Yogurt","Colanta",1,5000,102};
  lacteos cremaleche = {"Crema de leche","Crema de leche","Colanta",1,2000,103};  //Declaración de los objetos
  carnes pechuga = {"Pechuga","Pollo","Kike's",1,14000,200};
  carnes lomo = {"Lomo","Carne de res","Carfrisan",1,16000,201};
  carnes costilla = {"Costilla","Carne de res","Carfrisan",1,18000,202};
  carnes molida = {"Carne molida","Carne de res","Carfrisan",1,1300,203};
  dulces menta = {"Menta","Menta","Colombina s.a",100,4000,300};
  dulces bonbonbum = {"Bonbonbum","Golosina","Colombina s.a",100,30000,301};
  dulces gomas = {"Gomas","Golosina","Colombina s.a",100,10000,302};
  dulces choco= {"Chocolatina","Chocolate","Jet",100,60000,303};
  bebidas cerveza = {"Poker","Alcohólica","Bavaria",30,60000,400};
  bebidas gaseosa = {"Gaeosa","Gaseosa","Postobón",30,45000,401};
  bebidas gatorade = {"Gatorade","Energizante","Quaker Oats",30,90000,402};
  bebidas jugo = {"Jugo","Natural","Hit",30,50000,403};
  
  pechuga.precioporlibra(14000);
  lomo.precioporlibra(16000);
  costilla.precioporlibra(18000);               //Uso de las funciones
  molida.precioporlibra(1300);
  menta.preciounidad(4000);
  bonbonbum.preciounidad(30000);
  gomas.preciounidad(10000);
  choco.preciounidad(60000);
  cerveza.preciounibebida(60000);
  gaseosa.preciounibebida(60000);
  gatorade.preciounibebida(60000);
  jugo.preciounibebida(60000);
  

//Inventario
  cout<<"-------------------------------------------------------------------------------------------------------------------------------------------"<<endl;
  cout<<setw(85)<<"INVENTARIO DE LA TIENDA LA ECONOMÍA"<<endl;
  cout<<endl;
  cout<<"Nombre"<<setw(20)<<"Tipo"<<setw(28)<<"Distribuidora"<<setw(20)<<"Precio"<<setw(38)<<"Precio por unidad/libra"<<setw(20)<<"Ref"<<endl;
  cout<<endl;
  cout<<"1."<<queso.nombre1<<setw(15)<<queso.clase1<<setw(22)<<queso.distribuidora1<<setw(20)<<"$"<<queso.precio1<<setw(22)<<"$"<<queso.precio1<<setw(31)<<queso.referencia1<<endl;
  cout<<"2."<<leche.nombre1<<setw(15)<<leche.clase1<<setw(22)<<leche.distribuidora1<<setw(21)<<"$"<<leche.precio1<<setw(22)<<"$"<<leche.precio1<<setw(31)<<leche.referencia1<<endl;
  cout<<"3."<<yogurt.nombre1<<setw(12)<<yogurt.clase1<<setw(21)<<yogurt.distribuidora1<<setw(21)<<"$"<<yogurt.precio1<<setw(22)<<"$"<<yogurt.precio1<<setw(31)<<yogurt.referencia1<<endl;
  cout<<"4."<<cremaleche.nombre1<<setw(17)<<cremaleche.clase1<<setw(17)<<cremaleche.distribuidora1<<setw(21)<<"$"<<cremaleche.precio1<<setw(22)<<"$"<<cremaleche.precio1<<setw(31)<<cremaleche.referencia1<<endl;

  cout<<"5."<<pechuga.nombre2<<setw(19)<<pechuga.tipo2<<setw(22)<<pechuga.distribuidora2<<setw(21)<<"$"<<pechuga.precio2<<setw(21)<<"$"<<pechuga.precio_libra<<setw(31)<<pechuga.referencia2<<endl;
  cout<<"6."<<lomo.nombre2<<setw(25)<<lomo.tipo2<<setw(20)<<lomo.distribuidora2<<setw(20)<<"$"<<lomo.precio2<<setw(21)<<"$"<<lomo.precio_libra<<setw(31)<<lomo.referencia2<<endl;
  cout<<"7."<<costilla.nombre2<<setw(21)<<costilla.tipo2<<setw(20)<<costilla.distribuidora2<<setw(20)<<"$"<<costilla.precio2<<setw(21)<<"$"<<costilla.precio_libra<<setw(31)<<costilla.referencia2<<endl;
  cout<<"8."<<molida.nombre2<<setw(17)<<molida.tipo2<<setw(20)<<molida.distribuidora2<<setw(20)<<"$"<<molida.precio2<<setw(23)<<"$"<<molida.precio_libra<<setw(31)<<molida.referencia2<<endl;

  cout<<"9."<<menta.nombre3<<setw(20)<<menta.tipo3<<setw(26)<<menta.distribuidora3<<setw(18)<<"$"<<menta.precio3<<setw(24)<<"$"<<menta.precio_unidad<<setw(31)<<menta.referencia3<<endl;
  cout<<"10."<<bonbonbum.nombre3<<setw(16)<<bonbonbum.tipo3<<setw(25)<<bonbonbum.distribuidora3<<setw(18)<<"$"<<bonbonbum.precio3<<setw(22)<<"$"<<bonbonbum.precio_unidad<<setw(31)<<bonbonbum.referencia3<<endl;
  cout<<"11."<<gomas.nombre3<<setw(20)<<gomas.tipo3<<setw(25)<<gomas.distribuidora3<<setw(18)<<"$"<<gomas.precio3<<setw(22)<<"$"<<gomas.precio_unidad<<setw(31)<<gomas.referencia3<<endl;
  cout<<"12."<<choco.nombre3<<setw(15)<<choco.tipo3<<setw(18)<<choco.distribuidora3<<setw(24)<<"$"<<choco.precio3<<setw(22)<<"$"<<choco.precio_unidad<<setw(31)<<choco.referencia3<<endl;

  cout<<"13."<<cerveza.nombre4<<setw(22)<<cerveza.tipo4<<setw(21)<<cerveza.distribuidora4<<setw(21)<<"$"<<cerveza.precio4<<setw(21)<<"$"<<cerveza.preciouni_bebida<<setw(31)<<cerveza.referencia4<<endl;
  cout<<"14."<<gaseosa.nombre4<<setw(19)<<gaseosa.tipo4<<setw(23)<<gaseosa.distribuidora4<<setw(21)<<"$"<<gaseosa.precio4<<setw(21)<<"$"<<gaseosa.preciouni_bebida<<setw(31)<<gaseosa.referencia4<<endl;
  cout<<"15."<<gatorade.nombre4<<setw(20)<<gatorade.tipo4<<setw(20)<<gatorade.distribuidora4<<setw(20)<<"$"<<gatorade.precio4<<setw(21)<<"$"<<gatorade.preciouni_bebida<<setw(31)<<gatorade.referencia4<<endl;
  cout<<"16."<<jugo.nombre4<<setw(21)<<jugo.tipo4<<setw(19)<<jugo.distribuidora4<<setw(24)<<"$"<<jugo.precio4<<setw(21)<<"$"<<jugo.preciouni_bebida<<setw(31)<<jugo.referencia4<<endl;

  cout<<endl;
  cout<<"-------------------------------------------------------------------------------------------------------------------------------------------"<<endl;

  
  while(nuevoprod!='0'){    

  cout<<"Si quiere ingresar un nuevo producto ingrese la letra n (presione 0 para salir).\nSi quiere realizar una venta ingrese la letra v (presione 0 para salir).  "<<endl;           //Opciones para ingresar o vender producto
  cin>>nuevoprod;
  cout<<endl;

  if(nuevoprod=='0'){
    break;
  }

  if(nuevoprod=='n'){     //Ingresarlo

  cout<<"Escoja el tipo de producto que desea ingresar"<<endl;
  cout<<"a.Lacteo"<<endl;
  cout<<"b.Carne"<<endl;
  cout<<"c.Dulce"<<endl;
  cout<<"d.Bebida"<<endl;
  cin>>eleccion;

  switch(eleccion){     //Tipo de producto e ingresar sus atributos

    case'a':
    {
      cout<<"Usted eligió lacteo, ingrese el nombre del producto: ";
      cin>>newlacnombre;
      cout<<"Ingrese la clase de prodcucto: ";
      cin>>newlactipo;
      cout<<"Ingrese el nombre de la distribuidora: ";
      cin>>newlacdist;
      cout<<"Ingrese el precio: ";
      cin>>newlacprecio;
      cout<<"Ingrese la referencia: ";
      cin>>newlacref;
      cout<<endl;
      cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      cout<<"Nombre del producto: "<<newlacnombre<<endl;
      cout<<"Distribuidora: "<<newlacdist<<endl;
      cout<<"Precio: "<<newlacprecio<<endl;
      cout<<"Referencia: "<<newlacref<<endl;
      cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      break;
      }
    
    case'b':
    {
      cout<<"Usted eligió carne, ingrese el nombre del producto: ";
      cin>>newcarnombre;
      cout<<"Ingrese la clase de producto: ";
      cin>>newcartipo;
      cout<<"Ingrese el nombre de la distribuidora: ";
      cin>>newcardist;
      cout<<"Ingrese el precio: ";
      cin>>newcarprecio;
      cout<<"Ingrese la referencia: ";
      cin>>newcarref;
      cout<<endl;
      cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      cout<<"Nombre del producto: "<<newcarnombre<<endl;
      cout<<"Distribuidora: "<<newcardist<<endl;
      cout<<"Precio: "<<newcarprecio<<endl;
      cout<<"Referencia: "<<newcarref<<endl;
      cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      break;
    }

    case'c':
    {
      cout<<"Usted eligió dulce, ingrese el nombre del producto: ";
      cin>>newdulnombre;
      cout<<"Ingrese la clase de producto: ";
      cin>>newdultipo;
      cout<<"Ingrese el nombre de la distribuidora: ";
      cin>>newduldist;
      cout<<"Ingrese el precio: ";
      cin>>newdulprecio;
      cout<<"Ingrese la referencia: ";
      cin>>newdulref;
      cout<<endl;
      cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      cout<<"Nombre del producto: "<<newdulnombre<<endl;
      cout<<"Distribuidora: "<<newduldist<<endl;
      cout<<"Precio: "<<newdulprecio<<endl;
      cout<<"Referencia: "<<newdulref<<endl;
      cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      break;
    }

    case'd':
    {
      cout<<"Usted eligió bebida, ingrese el nombre del producto: ";
      cin>>newbebnombre;
      cout<<"Ingrese la clase de producto : ";
      cin>>newbebtipo;
      cout<<"Ingrese el nombre de la distribuidora: ";
      cin>>newbebdist;
      cout<<"Ingrese el precio: ";
      cin>>newbebprecio;
      cout<<"Ingrese la referencia: ";
      cin>>newbebref;
      cout<<endl;
      cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      cout<<"Nombre del producto: "<<newbebnombre<<endl;
      cout<<"Distribuidora: "<<newbebdist<<endl;
      cout<<"Precio: "<<newbebprecio<<endl;
      cout<<"Referencia: "<<newbebref<<endl;
      cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n";
      break;
    }

    default:    //Ninguno de los casos coincide
    {
      cout<<"Ingrese un valor válido porfavor";
      break;
    }

    }
  }else if(nuevoprod=='v'){    //Vender producto

    cout<<"Escriba el número del producto a vender, según la tabla. Si desea vender un producto nuevo, siga el orden desde el 16 en adelante. \n(17 para nuevo lacteo, 18 para nueva carne, 19 para nuevo dulce, 20 para nueva bebida)   (Debe haber ingresado un nuevo producto)"<<endl;  //Número del prodcuto
    cin>>venta;
    cout<<endl;
    
    switch(venta){   //Todas las opciones, se imprime la respectiva factura para cada caso

      case 1:
      {
        cout<<"Usted eligió "<<queso.nombre1<<endl;    
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file;
        file.open("factura1.txt");
        file<<"***********************************************************************\n";
        file<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file<<"NIT: 12584332218\n\n";
        file<<"Su pedido:"<<setw(20)<<queso.nombre1;
        file<<"\nDistribuidora:"<<setw(12)<<queso.distribuidora1;
        file<<"\nNo. Referencia:"<<setw(13)<<queso.referencia1;
        file<<"\nPrecio:"<<setw(20)<<"$"<<queso.precio1;
        file<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file<<"Dirección: Av. Boulevar 27\n";
        file<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file<<"***********************************************************************";
        file.close();
        break;
      }

      case 2:
      {
        cout<<"Usted eligió "<<leche.nombre1<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file1;
        file1.open("factura2.txt");
        file1<<"***********************************************************************\n";
        file1<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file1<<"NIT: 12584332218\n\n";
        file1<<"Su pedido:"<<setw(20)<<leche.nombre1;
        file1<<"\nDistribuidora:"<<setw(15)<<leche.distribuidora1;
        file1<<"\nNo. Referencia:"<<setw(13)<<leche.referencia1;
        file1<<"\nPrecio:"<<setw(20)<<"$"<<leche.precio1;
        file1<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file1<<"Dirección: Av. Boulevar 27\n";
        file1<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file1<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file1<<"***********************************************************************";
        file1.close();
        break;
      }

      case 3:
      {
        cout<<"Usted eligió "<<yogurt.nombre1<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file2;
        file2.open("factura3.txt");
        file2<<"***********************************************************************\n";
        file2<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file2<<"NIT: 12584332218\n\n";
        file2<<"Su pedido:"<<setw(20)<<yogurt.nombre1;
        file2<<"\nDistribuidora:"<<setw(15)<<yogurt.distribuidora1;
        file2<<"\nNo. Referencia:"<<setw(13)<<yogurt.referencia1;
        file2<<"\nPrecio:"<<setw(20)<<"$"<<yogurt.precio1;
        file2<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file2<<"Dirección: Av. Boulevar 27\n";
        file2<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file2<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file2<<"***********************************************************************";
        file2.close();
        break;
      }

      case 4:
      {
        cout<<"Usted eligió "<<cremaleche.nombre1<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file3;
        file3.open("factura4.txt");
        file3<<"***********************************************************************\n";
        file3<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file3<<"NIT: 12584332218\n\n";
        file3<<"Su pedido:"<<setw(20)<<cremaleche.nombre1;
        file3<<"\nDistribuidora:"<<setw(15)<<cremaleche.distribuidora1;
        file3<<"\nNo. Referencia:"<<setw(13)<<cremaleche.referencia1;
        file3<<"\nPrecio:"<<setw(20)<<"$"<<cremaleche.precio1;
        file3<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file3<<"Dirección: Av. Boulevar 27\n";
        file3<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file3<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file3<<"***********************************************************************";
        file3.close();
        break;
      }

      case 5:
      {
        cout<<"Usted eligió "<<pechuga.nombre2<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file4;
        file4.open("factura5.txt");
        file4<<"***********************************************************************\n";
        file4<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file4<<"NIT: 12584332218\n\n";
        file4<<"Su pedido:"<<setw(20)<<pechuga.nombre2;
        file4<<"\nDistribuidora:"<<setw(15)<<pechuga.distribuidora2;
        file4<<"\nNo. Referencia:"<<setw(13)<<pechuga.referencia2;
        file4<<"\nPrecio:"<<setw(20)<<"$"<<pechuga.precio_libra;
        file4<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file4<<"Dirección: Av. Boulevar 27\n";
        file4<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file4<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file4<<"***********************************************************************";
        file4.close();
        break;
      }

      case 6:
      {
        cout<<"Usted eligió "<<lomo.nombre2<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file5;
        file5.open("factura6.txt");
        file5<<"***********************************************************************\n";
        file5<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file5<<"NIT: 12584332218\n\n";
        file5<<"Su pedido:"<<setw(20)<<lomo.nombre2;
        file5<<"\nDistribuidora:"<<setw(15)<<lomo.distribuidora2;
        file5<<"\nNo. Referencia:"<<setw(13)<<lomo.referencia2;
        file5<<"\nPrecio:"<<setw(20)<<"$"<<lomo.precio_libra;
        file5<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file5<<"Dirección: Av. Boulevar 27\n";
        file5<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file5<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file5<<"***********************************************************************";
        file5.close();
        break;
      }

      case 7:
      {
        cout<<"Usted eligió "<<costilla.nombre2<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file6;
        file6.open("factura7.txt");
        file6<<"***********************************************************************\n";
        file6<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file6<<"NIT: 12584332218\n\n";
        file6<<"Su pedido:"<<setw(20)<<costilla.nombre2;
        file6<<"\nDistribuidora:"<<setw(15)<<costilla.distribuidora2;
        file6<<"\nNo. Referencia:"<<setw(13)<<costilla.referencia2;
        file6<<"\nPrecio:"<<setw(20)<<"$"<<costilla.precio_libra;
        file6<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file6<<"Dirección: Av. Boulevar 27\n";
        file6<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file6<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file6<<"***********************************************************************";
        file6.close();
        break;
      }

      case 8:
      {
        cout<<"Usted eligió "<<molida.nombre2<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file7;
        file7.open("factura8.txt");
        file7<<"***********************************************************************\n";
        file7<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file7<<"NIT: 12584332218\n\n";
        file7<<"Su pedido:"<<setw(20)<<molida.nombre2;
        file7<<"\nDistribuidora:"<<setw(15)<<molida.distribuidora2;
        file7<<"\nNo. Referencia:"<<setw(13)<<molida.referencia2;
        file7<<"\nPrecio:"<<setw(20)<<"$"<<molida.precio_libra;
        file7<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file7<<"Dirección: Av. Boulevar 27\n";
        file7<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file7<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file7<<"***********************************************************************";
        file7.close();
        break;
      }

      case 9:
      {
        cout<<"Usted eligió "<<menta.nombre3<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file8;
        file8.open("factura9.txt");
        file8<<"***********************************************************************\n";
        file8<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file8<<"NIT: 12584332218\n\n";
        file8<<"Su pedido:"<<setw(20)<<menta.nombre3;
        file8<<"\nDistribuidora:"<<setw(15)<<menta.distribuidora3;
        file8<<"\nNo. Referencia:"<<setw(13)<<menta.referencia3;
        file8<<"\nPrecio:"<<setw(20)<<"$"<<menta.precio_unidad;
        file8<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file8<<"Dirección: Av. Boulevar 27\n";
        file8<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file8<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file8<<"***********************************************************************";
        file8.close();
        break;
      }

      case 10:
      {
        cout<<"Usted eligió "<<bonbonbum.nombre3<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file9;
        file9.open("factura10.txt");
        file9<<"***********************************************************************\n";
        file9<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file9<<"NIT: 12584332218\n\n";
        file9<<"Su pedido:"<<setw(20)<<bonbonbum.nombre3;
        file9<<"\nDistribuidora:"<<setw(15)<<bonbonbum.distribuidora3;
        file9<<"\nNo. Referencia:"<<setw(13)<<bonbonbum.referencia3;
        file9<<"\nPrecio:"<<setw(20)<<"$"<<bonbonbum.precio_unidad;
        file9<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file9<<"Dirección: Av. Boulevar 27\n";
        file9<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file9<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file9<<"***********************************************************************";
        file9.close();
        break;
      }

      case 11:
      {
        cout<<"Usted eligió "<<gomas.nombre3<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file10;
        file10.open("factura11.txt");
        file10<<"***********************************************************************\n";
        file10<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file10<<"NIT: 12584332218\n\n";
        file10<<"Su pedido:"<<setw(20)<<gomas.nombre3;
        file10<<"\nDistribuidora:"<<setw(15)<<gomas.distribuidora3;
        file10<<"\nNo. Referencia:"<<setw(13)<<gomas.referencia3;
        file10<<"\nPrecio:"<<setw(20)<<"$"<<gomas.precio_unidad;
        file10<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file10<<"Dirección: Av. Boulevar 27\n";
        file10<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file10<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file10<<"***********************************************************************";
        file10.close();
        break;
      }

      case 12:
      {
        cout<<"Usted eligió "<<choco.nombre3<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file11;
        file11.open("factura12.txt");
        file11<<"***********************************************************************\n";
        file11<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file11<<"NIT: 12584332218\n\n";
        file11<<"Su pedido:"<<setw(20)<<choco.nombre3;
        file11<<"\nDistribuidora:"<<setw(15)<<choco.distribuidora3;
        file11<<"\nNo. Referencia:"<<setw(13)<<choco.referencia3;
        file11<<"\nPrecio:"<<setw(20)<<"$"<<choco.precio_unidad;
        file11<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file11<<"Dirección: Av. Boulevar 27\n";
        file11<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file11<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file11<<"***********************************************************************";
        file11.close();
        break;
      }

      case 13:
      {
        cout<<"Usted eligió "<<cerveza.nombre4<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file12;
        file12.open("factura13.txt");
        file12<<"***********************************************************************\n";
        file12<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file12<<"NIT: 12584332218\n\n";
        file12<<"Su pedido:"<<setw(20)<<cerveza.nombre4;
        file12<<"\nDistribuidora:"<<setw(15)<<cerveza.distribuidora4;
        file12<<"\nNo. Referencia:"<<setw(13)<<cerveza.referencia4;
        file12<<"\nPrecio:"<<setw(20)<<"$"<<cerveza.preciouni_bebida;
        file12<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file12<<"Dirección: Av. Boulevar 27\n";
        file12<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file12<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file12<<"***********************************************************************";
        file12.close();
        break;
      }

      case 14:
      {
        cout<<"Usted eligió "<<gaseosa.nombre4<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file13;
        file13.open("factura14.txt");
        file13<<"***********************************************************************\n";
        file13<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file13<<"NIT: 12584332218\n\n";
        file13<<"Su pedido:"<<setw(20)<<gaseosa.nombre4;
        file13<<"\nDistribuidora:"<<setw(15)<<gaseosa.distribuidora4;
        file13<<"\nNo. Referencia:"<<setw(13)<<gaseosa.referencia4;
        file13<<"\nPrecio:"<<setw(20)<<"$"<<gaseosa.preciouni_bebida;
        file13<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file13<<"Dirección: Av. Boulevar 27\n";
        file13<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file13<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file13<<"***********************************************************************";
        file13.close();
        break;
      }

      case 15:
      {
        cout<<"Usted eligió "<<gatorade.nombre4<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file14;
        file14.open("factura15.txt");
        file14<<"***********************************************************************\n";
        file14<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file14<<"NIT: 12584332218\n\n";
        file14<<"Su pedido:"<<setw(20)<<gatorade.nombre4;
        file14<<"\nDistribuidora:"<<setw(15)<<gatorade.distribuidora4;
        file14<<"\nNo. Referencia:"<<setw(13)<<gatorade.referencia4;
        file14<<"\nPrecio:"<<setw(20)<<"$"<<gatorade.preciouni_bebida;
        file14<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file14<<"Dirección: Av. Boulevar 27\n";
        file14<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file14<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file14<<"***********************************************************************";
        file14.close();
        break;
      }

      case 16:
      {
        cout<<"Usted eligió "<<jugo.nombre4<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file15;
        file15.open("factura16.txt");
        file15<<"***********************************************************************\n";
        file15<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file15<<"NIT: 12584332218\n\n";
        file15<<"Su pedido:"<<setw(20)<<jugo.nombre4;
        file15<<"\nDistribuidora:"<<setw(15)<<jugo.distribuidora4;
        file15<<"\nNo. Referencia:"<<setw(13)<<jugo.referencia4;
        file15<<"\nPrecio:"<<setw(20)<<"$"<<jugo.preciouni_bebida;
        file15<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file15<<"Dirección: Av. Boulevar 27\n";
        file15<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file15<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file15<<"***********************************************************************";
        file15.close();
        break;
      }

      case 17:
      {
        cout<<"Usted eligió "<<newlacnombre<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file16;
        file16.open("factura17.txt");
        file16<<"***********************************************************************\n";
        file16<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file16<<"NIT: 12584332218\n\n";
        file16<<"Su pedido:"<<setw(20)<<newlacnombre;
        file16<<"\nDistribuidora:"<<setw(15)<<newlacdist;
        file16<<"\nNo. Referencia:"<<setw(13)<<newlacref;
        file16<<"\nPrecio:"<<setw(20)<<"$"<<newlacprecio;
        file16<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file16<<"Dirección: Av. Boulevar 27\n";
        file16<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file16<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file16<<"***********************************************************************";
        file16.close();
        break;
      }

      case 18:
      {
        cout<<"Usted eligió "<<newcarnombre<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file17;
        file17.open("factura18.txt");
        file17<<"***********************************************************************\n";
        file17<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file17<<"NIT: 12584332218\n\n";
        file17<<"Su pedido:"<<setw(20)<<newcarnombre;
        file17<<"\nDistribuidora:"<<setw(15)<<newcardist;
        file17<<"\nNo. Referencia:"<<setw(13)<<newcarref;
        file17<<"\nPrecio:"<<setw(20)<<"$"<<newcarprecio;
        file17<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file17<<"Dirección: Av. Boulevar 27\n";
        file17<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file17<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file17<<"***********************************************************************";
        file17.close();
        break;
      }

      case 19:
      {
        cout<<"Usted eligió "<<newdulnombre<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file18;
        file18.open("factura19.txt");
        file18<<"***********************************************************************\n";
        file18<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file18<<"NIT: 12584332218\n\n";
        file18<<"Su pedido:"<<setw(20)<<newdulnombre;
        file18<<"\nDistribuidora:"<<setw(15)<<newduldist;
        file18<<"\nNo. Referencia:"<<setw(13)<<newdulref;
        file18<<"\nPrecio:"<<setw(20)<<"$"<<newdulprecio;
        file18<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file18<<"Dirección: Av. Boulevar 27\n";
        file18<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file18<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file18<<"***********************************************************************";
        file18.close();
        break;
      }

      case 20:
      {
        cout<<"Usted eligió "<<newbebnombre<<endl;
        cout<<"Se generará su factura en un instante"<<endl;
        ofstream file19;
        file19.open("factura20.txt");
        file19<<"***********************************************************************\n";
        file19<<"Tienda La economía  -  Fecha:24/11/2020\n\n";
        file19<<"NIT: 12584332218\n\n";
        file19<<"Su pedido:"<<setw(20)<<newbebnombre;
        file19<<"\nDistribuidora:"<<setw(15)<<newbebdist;
        file19<<"\nNo. Referencia:"<<setw(13)<<newbebref;
        file19<<"\nPrecio:"<<setw(20)<<"$"<<newbebprecio;
        file19<<"\n\nGracias por confiar en nosotros, esperamos le haya agradado el servicio\n\n";
        file19<<"Dirección: Av. Boulevar 27\n";
        file19<<"Horario de atención:8:00-12:00 ; 14:00-18:00\n\n";
        file19<<"Línea telefónica: Nacional +57 18000587963\nCelular +57 3145692300\n";
        file19<<"***********************************************************************";
        file19.close();
        break;
      }
      

    }
    
    }

  else{       //No se ingresó un valor válido 
    cout<<"Caractér inválido. Porfavor ingrese un caracter válido";  
  }

  cout<<endl;
  cout<<endl;

  }

  cout<<"El programa ha finalizado, gracias por usarlo";  //Mensaje final
}
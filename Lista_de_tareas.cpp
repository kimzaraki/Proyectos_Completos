#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<fstream>
#include <ctime>
#include <time.h>

using namespace std;
string linea,texto,cadena,cadena2,cadena3,cadena4,cadena5,cadena6;

int main(){
	
	
	
int opc,opc2, resp; 
char titulo[30],descrip[30],fecha[8],hora[10],buscar[30];
string usuario,usuario2, contra, nuevo;
cout<<"\t\t\t--------LISTA DE TAREAS------\n\n\t"<<endl;
	
cout<<"\t\t\t\tBienvenido\n\n\t"<<endl;		

 time_t t = time(NULL);
  struct tm tiempoLocal = *localtime(&t);
  // El lugar en donde se pondrá la fecha y hora 
  char fechaHora[70];
  char *formato = "%Y-%m-%d %H:%M:%S";
  
  int bytesEscritos =
      strftime(fechaHora, sizeof fechaHora, formato, &tiempoLocal);
  if (bytesEscritos != 0) {
    // Si no hay error, los bytesEscritos no son 0
    cout<<"Fecha y hora: "<< fechaHora<<"\n\n";
  }
menu:
cout<<"\n1.Iniciar sesion\n\n";
cout<<"\n2.Registrarse\n\n ";
cout<<"\n3.Salir\n\n ";

cout<<"\nOpcion elegida: \n";cin>>opc;

switch (opc){
	//aqui estan los resultados de las opciones que el usuario elegira
	case 1:
		cout<<"\nUsuario: \n";		cin>>usuario;
		
		cout<<"\nContraseña \n";	cin>>contra;
		//----------------------------------------------------- una separacion para no confundirme
		
		
	if (usuario!= "kimberly" && contra!="1234"){
			cout<<"\nFavor de escribir los datos correctos\n";		
	cout<<"\nUsuario: ";cin>>usuario;
		cout<<"\nContrasena: ";cin>>contra;
	}
	else{
				cout<<"\nBIENVENIDO DE NUEVO, "<<usuario<<"\n";
				goto menu2;
	}

		break;
		
	case 2:			
		
cout<<"\nEscriba un nombre de usuario: \n";		cin>>usuario2;
		
cout<<"\nEscriba una contraseña \n";	cin>>nuevo;
		//----------------------------------------------------- una separacion para no confundirme
								cout<<"\n.............................................................\n";

						cout<<"\nRegistrado con exito\n\n";

				cout<<"\tBIENVENIDO, "<<usuario2<<"\n";
				goto menu2;
				break;
				case 3:
			cout<<"Saliendo del sistema\n\n";
			cout<<"......................................................\n\n";

				return 0;
					break;
	}
			
	
												


//menu 2.0
do{
menu2:
cout<<"\n1.Agregar tarea \n";
cout<<"\n2.Regresar al inicio\n ";

cout<<"\nOpcion seleccionada \n";cin>>opc2;

switch (opc2){
	//aqui estan los resultados de las opciones que el usuario elegira
	case 1:
		cout<<"Titulo de tarea\n"; cin>>titulo;
		//cin.getline(titulo, 30);//este get hace que pueda escribir unba cadena con espacios sin problemas

				cout<<"Descripcion\n"; cin>>descrip;
//cin.getline(descrip, 30);

cout<<"\tFecha:\n\n"; 

cout<<"\nFavor de escribir fecha con los siguientes parametros---- dia/mes/año: \n "; 
cout<<"\nSi aun no tiene fecha favor de escribir '-': \n "; 
cin>>fecha;

//cin.getline(fecha, 8);
cout<<"\tHora:\n"; 
cout<<"\nFavor de escribir hora con los siguientes parametros---- hora:minutos am/pm  \n "; 
cout<<"\nSi aun no tiene hora favor de escribir '-': \n "; cin>>hora;

//cin.getline(hora, 10);

cout<<"TAREA GUARDADA\n\n"; 
cout<<"......................................\n\n"; 


		break;
	case 2:		
	 	goto menu;
		//	cout<<"Titulo de tarea: "<<titulo<<" Descripcion: "<< descrip<<" Fecha: "<<fecha<<" Hora: "<<hora;
			
			break;

					}
					
			ifstream archivo("guardado3.txt");
	while (getline(archivo,linea)){
		texto=texto+linea+"\n";
	}
	archivo.close();
//guardar en txt	
			ofstream archivo2("guardado3.txt");
			archivo2<< texto<<"Titulo: "<<titulo<< " Descripcion: "<< descrip<<" Fecha: "<<fecha<<"  Hora: "<<hora;						
}while(resp!=2);





}

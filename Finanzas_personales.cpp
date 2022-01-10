#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<fstream>
#include <ctime>
#include <time.h>

	using namespace std;
string linea,texto,cadena,cadena2;

int main(){	
	int saldo_inicial=1000,opc,opc2,saldo_categoria=0,saldo_categoria_new=0,dato,opc3;
	char nom[30];
	string usuario, nuevo,contra,usuario2;
cout<<"\t\t\t--------GESTOR DE GASTOS------\t\t\t"<<endl;
	cout<<"Usted cuenta con $"<<saldo_inicial<<"\n\n";
	
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
/*	time_t current_time;//aqui se saca la hora local y se guarda
   struct tm * time_info;
   char timeString[9];
 
   time(&current_time);
   time_info = localtime(&current_time);
 
   strftime(timeString, sizeof(timeString), "%H:%M:%S", time_info);
   puts(timeString);
*/
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
			
	
menu2:
//menu del cajero
cout<<"\n1.Gastos \n";
cout<<"\n2.Ingresos\n ";
cout<<"\n3.Salir\n";
cout<<"\nOpcion: \n";cin>>opc;

			
switch (opc){
	//aqui estan los resultados de las opciones que el usuario elegira
	case 1:
		cout<<"\nAgregar transacciones: \n";
			
		cout<<"\n Categorias \n";
				opciones:

		cout<<"\n1.Transporte \n";
		cout<<"\n2.Rutina\n ";
		cout<<"\n3.Familia\n";
		cout<<"\n4.Alimentaion\n";
		cout<<"\n5.Educacion\n";
		cout<<"\n6.Regalos\n";
		cout<<"\n7.Amigos\n";
		cout<<"\n8.Crear categoria \n";
				cout<<"\nSeleccion: \n";cin>>opc2;	

			cadena="Gastos: ";


switch (opc2){
	case 1:
	
			cout<<"Gasto: "; cin>>dato;
		
		saldo_inicial=saldo_inicial-dato;
		

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
		//cout<<"\nDesea seguir registrando gastos? 1.SI, 2.NO \n"; cin>>resp;
				
		cadena2="Gasto de transporte: ";
	goto menu2;
	

		break;
		case 2:
			cout<<"\nGasto: "; cin>>dato;
		saldo_inicial=saldo_inicial-dato;

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
		
				cadena2="Gasto de rutina: ";


	goto menu2;
			break;
			case 3:
				cout<<"\nGasto: "; cin>>dato;
		saldo_inicial=saldo_inicial-dato;

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
		
				cadena2="Gasto de familia: ";
	goto menu2;

	

				break;
				case 4:
					cout<<"\nGasto: "; cin>>dato;
		saldo_inicial=saldo_inicial-dato;

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
		
				cadena2="Gasto de alimentacion: ";
	goto menu2;

					break;
					case 5:
						cout<<"\nGasto: "; cin>>dato;
		saldo_inicial=saldo_inicial-dato;

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
		
				cadena2="Gasto de educacion: ";


	goto menu2;
						break;
						case 6:
							cout<<"\nGasto: "; cin>>dato;
		saldo_inicial=saldo_inicial-dato;

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
		
				cadena2="Gasto de regalos: ";

	goto menu2;
								break;
							case 7:
								cout<<"\nGasto: "; cin>>dato;
	saldo_inicial=saldo_inicial-dato;

		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
						cadena2="Gasto de amigos: ";


	goto menu2;
	
								break;
								
								case 8:
	cout<<"\nNombre de la categoria: \n"; cin>>nom;
	cout<<"\nGasto: ";cin>>dato;
	saldo_inicial=saldo_inicial-dato;
//system("pause");
		cout<<"\nSaldo restante: $"<<saldo_inicial<<"\n";
					cadena2="Gasto de ", nom,": ";


	goto menu2;									
		break;
	}
		case 2:		
		cout<<"\nAgregar transacciones: \n";	
		cout<<"\n Categorias \n";
		
		opciones2:
		cout<<"\n1.Interes \n";
		cout<<"\n2.Regalo\n ";
		cout<<"\n3.Salario\n";
		cout<<"\n4.Otros\n";		
		cout<<"\n5.Crear categoria \n"; 
		cout<<"\nSeleccion:\n ";cin>>opc3;	
		
					cadena="Ingresos ";

			switch (opc3){
	case 1:
		cout<<"Ingreso: \n"; cin>>dato;
		saldo_inicial=saldo_inicial+dato;
		cout<<"\nSaldo restante: \n$"<<saldo_inicial<<"\n";
				cadena2="Ingreso de interes: ";

	goto menu2;

		break;
		case 2:
			cout<<"\nIngreso: "; cin>>dato;
			saldo_inicial=saldo_inicial+dato;
		cout<<"\nSaldo restante: \n$"<<saldo_inicial<<"\n";
						cadena2="Ingreso de regalo: ";

	goto menu2;

	
			break;
			case 3:
				cout<<"\nIngreso: "; cin>>dato;
			saldo_inicial=saldo_inicial+dato;
		cout<<"\nSaldo restante: \n$"<<saldo_inicial<<"\n";
						cadena2="Ingreso de salario: ";
	goto menu2;

	
				break;
				case 4:
					cout<<"\nIngreso: "; cin>>dato;
			saldo_inicial=saldo_inicial+dato;
		cout<<"\nSaldo restante: \n$"<<saldo_inicial<<"\n";
						cadena2="Ingreso de otros: ";
	goto menu2;

	
					break;
					
								case 5:
									
	cout<<"\nNombre de la categoria: \n"; 
	cin>>nom;
	cout<<"\nIngreso: ";cin>>dato;
		saldo_inicial=saldo_inicial+dato;
		cout<<"\nSaldo restante: \n$"<<saldo_inicial<<"\n";
						cadena2="Ingreso de categoria nueva: ";
	goto menu2;	
	
									break;
							}
		case 3:
		cout<<"\nNos vemos\n";
		break;		
				
	}
	
ifstream archivo("guardado2.txt");
	while (getline(archivo,linea)){
		texto=texto+linea+"\n";
	}
	archivo.close();
//guardar en txt	
			ofstream archivo2("guardado2.txt");
			archivo2<< texto<<cadena<<"\n"<< cadena2<< dato<<" Saldo restante: "<<saldo_inicial<<" Fecha y Hora: "<<fechaHora;
	
}



	


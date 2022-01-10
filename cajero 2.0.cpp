#include<iostream>
#include <stdio.h>
#include <stdlib.h>
#include<cstdlib>
#include<fstream>


using namespace std;
string linea,texto,cadena;
int main(){
	
	
	
	
int saldo_inicial=1000, opc,opc1, nip, resp, movimi,recarga=0,z,inte,retiro; //aqui simnulo que en mi tarjeta hay 1000 pesos
float saldo_actual=0,x,y,donar;
char num[]={1234567890},nuevo[4];
string usuario,contra, nueva,usuario2;
int agrego,estatus=0,intentos=0;
cout<<"\t--------CAJERO AUTOMATICO------"<<endl;	
cout<<"\n1.Iniciar sesion\n\n";
cout<<"\n2.Registrarse\n\n ";
cout<<"\n3.Salir\n\n ";

cout<<"\nOpcion elegida: \n";cin>>opc1;

switch(opc1){
	case 1:
		while(intentos=1){
cout<<"Usuario: \n"; cin>>usuario;

//cout<<cadena;
	cout<<"NIP:\n"; cin>>contra;
	

intentos++;
	if (usuario!= "kimberly" && contra!="1234"){
			cout<<"\nFavor de escribir los datos correctos\n";		
	cout<<"Usuario: ";cin>>usuario;
		cout<<"NIP: ";cin>>contra;
		intentos++;
		intentos=intentos++;
cout<<"intentos totales: \n"<<intentos;
}
	else{
				cout<<"\nBIENVENIDO USUARIO\n";
				goto menu;
	}
	if (intentos>3){
			cout<<"\nNo se puede acceder, su cuenta ha sido bloqueada por 24 horas. \n";
	exit(-1);
	}
	}
	break;
	case 2:cout<<"\nEscriba un nombre de usuario: \n";		cin>>usuario2;
					
cout<<"\nEscriba una contraseña \n";	cin>>nuevo;
			

		cin.getline(nuevo, 4);
		//----------------------------------------------------- una separacion para no confundirme
								cout<<"\n.............................................................\n";

						cout<<"\nRegistrado con exito\n\n";

				cout<<"\tBIENVENIDO\n";
				goto menu;
				break;
}






do{
menu:
cout<<"\n1.Ingresar dinero \n";
cout<<"\n2.Retirar dinero\n ";
cout<<"\n3.Consultar saldo\n ";
cout<<"\n4.Recargar telefono \n";
cout<<"\n5.Donar \n";
cout<<"\n6.Cambiar NIP\n";
cout<<"\n¿Que tramite desea realizar? \n";cin>>opc;

switch (opc){
	//aqui estan los resultados de las opciones que el usuario elegira
	case 1:

		cout<<"\nDigite cantidad a ingresar: \n";		cin>>agrego;
		

		saldo_actual=saldo_inicial+agrego;
		cout<<"\nSu saldo actual es de \n"<<saldo_actual;
				
		movimi++;
		break;
		case 2:			
			cout<<"\nDigite la cantidad que desea retirar:\n ";cin>>retiro;
			movimi++;
		
			if (retiro>saldo_inicial and retiro>saldo_actual){
				cout<<"\nFondos insuficientes \n";				
			}
			else{
				saldo_actual=(saldo_inicial+agrego-retiro);
				cout<<"\nDinero en cuenta:\n "<<saldo_actual;
			}
			break;
			case 3:
				saldo_actual=(saldo_inicial+agrego)-retiro;
				cout<<"\nSu saldo es de \n"<<saldo_actual;
				movimi++;
				break;
				
				case 4:
						cout<<"\nCantidad a recargar: \n";cin>>recarga;
				cout<<"\nDigite numero de telefono a recargar: \n";cin>>num;
							
				if(recarga<50){
					cout<<"\nNo se puede realizar recarga menor a $50";
						}
					if(recarga>=50){
						saldo_actual=saldo_actual-recarga;
												cout<<"\nRecarga completad con exito al numero: "<<num;
						cout <<"\nSaldo actual:\n "<< saldo_actual;
					}
						movimi++;	
					break;
					case 5:
						cout<<"\nBienvenido a la donacion: ";
						cout<<"\nQue cantidad desea donar? \n";						cin>>donar;
						if(donar<1){
							cout<<"\nFavor de donar una cantidad mayor a $0, no sea pasado:\n";cin>>donar;
						}
						if(donar>=1){
							cout<<"\nSu donacion ha sido recibido, gracias.\n";
							cout<<"\nSu saldo actual es:\n "<<saldo_actual-donar;
						}
						movimi++;
						break;
						
						case 6:
							cout<<"\nEscriba  nueva contraseña: "; cin>>nueva;
							nueva=contra;
							cout<<"\nNip guardado y actualizado\n";
							movimi++;
							break;
					}
					cout<<"\n Desea seguir realizando movimientos? 1.SI 2.NO\n " ;
					cin>>resp;
					
		
ifstream archivo("guardado.txt");
	while (getline(archivo,linea)){
		texto=texto+linea+"\n";
	}
	archivo.close();
//guardar en txt
	ofstream archivo2("guardado.txt");
	
	
	archivo2<< texto<< "Ingresado: "<<agrego <<","<<"Retirado: "<<retiro<<","<<"Saldo: "<<saldo_actual<<","<<"Cantidad a recargar: "<<recarga<<","<<"Donar: "<<donar<<","<<"Movimientos: "<<movimi;

	
					
									
}while(resp!=2);
cout<<"Cantidad de movimientos realizados: "<<movimi<<"\n\n";







return 0;
}

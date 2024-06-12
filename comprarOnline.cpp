#include<iostream>
#include<vector>
using namespace std;

int main(){
int accion, productoParaAgregar, totalPagar=0, pago, confirmacion, cuotas;
bool ultimo=false;
vector<string> productos = {"Mouse","Teclado","Monitor"};
vector<int> precios = {10000, 12000, 50000};
vector<string> carrito;
vector<int> precioProductos;
cout << "¿Que desea hacer?"<<endl<<"1.Ver la lista de productos disponibles junto con sus precios."<<endl
<<"2.Agregar productos al carrito de compras."<<endl<<"3.Ver el carrito de compras y el total de la compra."<<endl
<<"4.Realizar el pago."<<endl<<"5.Salir"<<endl; cin>>accion; cout<<endl;
while(accion!=5){
if(accion==1){
   cout << "Los productos disponibles son: "<<endl;
   for(int i=0;i<3;i++){
       cout << productos[i]<<" $" << precios[i]<<endl;
   }
}
if(accion==2){
  cout << "¿Que producto quiere agregar?"<<endl<<"1.Mouse"<<endl<<"2.Teclado"<<endl<<"3.Monitor"<<endl<<"4.Volver"<<endl;
  cin >> productoParaAgregar; cout<<endl;
  while(productoParaAgregar!=4){
        if(productoParaAgregar==1){
            carrito.push_back("Mouse");
            precioProductos.push_back(10000);
            cout << "Usted ha agregado un Mouse al carrito"<<endl;
        }else if(productoParaAgregar==2){
            carrito.push_back("Teclado");
            precioProductos.push_back(12000);
            cout << "Usted ha agregado un Teclado al carrito"<<endl;
        }else if(productoParaAgregar==3){
            carrito.push_back("Monitor");
            precioProductos.push_back(50000);
            cout << "Usted ha agregado un Monitor al carrito"<<endl;
        }else{
            cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<< "¿Que producto quiere agregar?"<<endl<<"1.Mouse"<<endl<<"2.Teclado"<<endl<<"3.Monitor"<<endl<<"4.Volver"<<endl;
            cin>>productoParaAgregar; cout<<endl;
        }
      cout <<endl<< "¿Que producto quiere agregar?"<<endl<<"1.Mouse."<<endl<<"2.Teclado"<<endl<<"3.Monitor"<<endl<<"4.Volver"<<endl;
      cin >> productoParaAgregar; cout<<endl;
     }
  }
if(accion==3){
   for (int i=0;i<carrito.size();i++) {
    cout << carrito[i] << " $" << precioProductos[i]<<endl;
    totalPagar+=precioProductos[i];
}cout <<"El total a pagar es: $"<<totalPagar<<endl;
}
if(accion==4){
   cout<<"Con que desea pagar el total? $"<<totalPagar<<endl<<"1.Debito"<<endl<<"2.Efectivo"<<endl<<"3.Cuotas"<<endl<<"4.Volver"<<endl;
   cin>>pago; cout<<endl;
   while(pago!=4){
        if(pago==1){
           cout<<"Usted va a comprar: ";
           for(string elementos : carrito){
               cout << elementos<< " ";
           } cout << "por $"<<totalPagar<< " y pagar con Debito"<<endl;
           cout << "Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
           cin>>confirmacion; cout<<endl;
           while(confirmacion!=0){
           if(confirmacion==1){
              ultimo=true;
              break;
           }else{
           cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
           cin >> confirmacion; cout<<endl;
           }
           }break;
        }else if(pago==2){
                 cout<<"Usted va a comprar: ";
                 for(string elementos : carrito){
                     cout << elementos<< " ";
                 } cout << "por $"<<totalPagar<< " y pagar con Debito"<<endl;
                 cout << "Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                 cin>>confirmacion; cout<<endl;
                 while(confirmacion!=0){
                 if(confirmacion==1){
                 ultimo=true;
                 break;
                 }else{
                 cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                 cin >> confirmacion; cout<<endl;
                 }
                 }break;
         } else if(pago==3){
                   cout<<"En cuantas cuotas queres pagar?"<<endl<<"1.3 cuotas, 20% de recargo"<<endl<<"2.6 cuotas, 45% de recargo"<<endl<<"3.12 cuotas, 75% de recargo"<<endl<<"4.Volver"<<endl;
                   cin>>cuotas; cout<<endl;
                   while(cuotas!=4){
                         if(cuotas==1){
                       cout<<"Usted va a comprar: ";
                       for(string elementos : carrito){
                           cout << elementos<< " ";
                       } cout << "por $"<<totalPagar+((totalPagar*20)/100)<< " y pagar en 3 cuotas de "<<(totalPagar+((totalPagar*20)/100))/3<<endl;
                       cout << "Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                       cin>>confirmacion; cout<<endl;
                       while(confirmacion!=0){
                       if(confirmacion==1){
                       ultimo=true;
                       break;
                       }else{
                       cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                       cin >> confirmacion; cout<<endl;
                       }
                       }break;
                          }else if(cuotas==2){
                                   cout<<"Usted va a comprar: ";
                       for(string elementos : carrito){
                           cout << elementos<< " ";
                       } cout << "por $"<<totalPagar+((totalPagar*45)/100)<< " y pagar en 6 cuotas de "<<(totalPagar+((totalPagar*45)/100))/6<<endl;
                       cout << "Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                       cin>>confirmacion; cout<<endl;
                       while(confirmacion!=0){
                       if(confirmacion==1){
                       ultimo=true;
                       break;
                       }else{
                       cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                       cin >> confirmacion; cout<<endl;
                       }
                       }break;
                         }else if(cuotas==3){
                       cout<<"Usted va a comprar: ";
                       for(string elementos : carrito){
                           cout << elementos<< " ";
                       } cout << "por $"<<totalPagar+((totalPagar*75)/100)<< " y pagar en 12 cuotas de "<<(totalPagar+((totalPagar*75)/100))/6<<endl;
                       cout << "Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                       cin>>confirmacion; cout<<endl;
                       while(confirmacion!=0){
                       if(confirmacion==1){
                       ultimo=true;
                       break;
                       }else{
                       cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"Confirmar pago:"<<endl<<"0 para cancelar"<<endl<<"1 para confirmar"<<endl;
                       cin >> confirmacion; cout<<endl;
                       }
                       }break;
                         }else{
                         cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"En cuantas cuotas queres pagar"<<endl<<"1.3 cuotas, 20% de recargo"<<endl<<"2.6 cuotas, 45% de recargo"<<endl<<"3.12 cuotas, 75% de recargo"<<endl<<"4.Volver"<<endl;
                         }
                   }break;
         }else{
            cout <<"ERROR. Ingrese un valor valido"<<endl<<endl<<"Con que desea pagar el total? $"<<totalPagar<<endl<<"1.Debito"<<endl<<"2.Efectivo"<<endl<<"3.Cuotas"<<endl<<"4.Volver"<<endl;
            cin>>pago; cout<<endl;
        }
     }
  }else{
cout <<"¿Que desea hacer?"<<endl<<"1.Ver la lista de productos disponibles junto con sus precios."<<endl
<<"2.Agregar productos al carrito de compras."<<endl<<"3.Ver el carrito de compras y el total de la compra."<<endl
<<"4.Realizar el pago."<<endl<<"5.Salir"<<endl; cin>>accion; cout<<endl;
  }
if(ultimo){
   cout << "Pago realizado con exito, gracias por comprar con nosotros";
   break;
}
}
return 0;
}

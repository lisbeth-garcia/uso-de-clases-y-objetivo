//Garcia lopez lisbeth  Ingresar y mostrar los datos por pantalla

	
class Persona{
	
	private:
		
		string nombres, apellidos,cedula;
		int aa,ma,da,an,mn,dn,a,m,d;
		float peso, estatura,imc;
		
		
	public:
	
  Persona(){
		}
  void ingresar()
		{
			
			cout<<"Ingrese los datos"<<endl;
			
			cout<<"Degite su numero de cedula: \n";getline(cin,cedula); 
			
			cout<<"Escriba sus nombres:  ";getline(cin,nombres);//
			cout<<"Escriba sus apellidos:  ";getline(cin,apellidos);
			cout<<"Digite su peso: ";
	                cin>>peso;
			cout<<"Digite su estatura: ";
	                cin>>estatura;
			cout<<"Ingres la fecha de nacimiento (a-m-d): "; 
                        cin>>an>>mn>>dn;
            
		}

	void mostrar()
		
		{
		
	    cout<<"-----------------------------------------------------"<<endl;	
		cout<<"|CEDULA"<<"\t";
		cout<<"  |NOMBRES"<<"\t"; 
		cout<<"  |APELLIDOS"<<"\t";
		cout<<"  |PESO"<<"\t";
		cout<<"  |ESTATURA"<<"\t";
		cout<<"  |AA:"<<"\t";
		cout<<"  |MM:"<<"\t";
		cout<<"  |DD:"<<endl;
               
		cout<<"|"<<cedula<<"\t";
		cout<<"  |"<<nombres<<"\t";
		cout<<"  |"<<apellidos<<"\t";
		cout<<"|"<<peso<<"\t";
		cout<<"|"<<estatura<<"\t";
		cout<<"  |"<<an<<"\t";
		cout<<"  |"<<mn<<"\t";
		cout<<"  |"<<dn<<endl;
		
		}

//Pierina Mejia Hurtado Calcular edad
        void caledad(int aa,int ma,int da) 
  
  {
  	if(da>dn)
{
	d=da-dn;
}else{
	da=da+30;
	ma=ma-1;
	d=da-dn;
}
if(ma>mn)
{
	m=ma-mn;
}else{
	ma=ma+12;
	aa=aa-1;
	m=ma-mn;
}

a=aa-an;
   } 
	 void mostraed()
   {
   	cout<<"Su edad es : "<<a<<" Años "<<m<<" MESES "<<d<<" DIAS "<<endl;
   	
   }
	
//Cajiao Casierra Fernando Guardado de archivo txt.
	void guardar(){
 	ofstream ar;
 	ar.open("registro.txt",ios::out);
 	if (ar.fail()){
 		cout<<"EEEEEERRRROOOOOORRR";
 		exit(1);
	 }
	    ar<<"CEDULA: "<<cedula<<endl;
		ar<<"NOMBRES: "<<nombres<<endl;
		ar<<"APELLIDOS: "<<apellidos<<endl;
		ar<<"PESO: "<<peso<<endl;
		ar<<"ESTATURA:"<<estatura<<endl;
		ar<<"AA: "<<an<<endl;
		ar<<"MM: "<<mn<<endl;
		ar<<"DD: "<<dn<<endl; 
		cout<<"Guardado con Exito";
		ar.close();
 }

//Carlos Mero  Recuperar los datos desde el archivo txt.
	void rym()
 {
 	ifstream ar;
 	string texto;
 	ar.open("registro.txt",ios::in);
 	if(ar.fail()){
 		cout<<"No se abre";
 		exit(1);
 		
	 }
	 while(!ar.eof()){
	 	getline(ar,texto);
	 	cout<<texto<<endl;
	 	
	 }
	 ar.close();
  }	
};

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

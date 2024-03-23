#include <iostream>
using namespace std;

main(){
	
	int fil=0, col=0,**pm_notas;
	
	cout<<"ingrese la catidad de estudiantes: ";
	cin>>fil;
	
	cout<<"ingrese la cantidad de notaspor estudiante: ";
	cin>>col;
	
	pm_notas=new int *[fil];
	for (int i=0; i<fil;i++){
		pm_notas[i]= new int[col];
		
	}
	
	
	for(int i=0;i<fil;i++){
		
		for(int ii=0;ii<col;ii++){
			
			cout<<"estudiante"<<i<<"nota:  "<<ii<<": ";
			cin>>*(*(pm_notas+1)+ii);
		}
		cout<<"___________________________"<<endl;
	}
	cout<<"-------------mostrar notas--------"<<endl;
	
		for(int i=0;i<fil;i++){
		
		for(int ii=0;ii<col;ii++){
			
			cout<<"estudiante"<<i<<"nota:  "<<ii<<": ";
			cout<<*(*(pm_notas+1)+ii)<<endl;
		}
		cout<<"___________________________"<<endl;
	}
	system("pausa");
}


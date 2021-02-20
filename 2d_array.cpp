  
#include<iostream>


using namespace std;
					
int main(){			
	string dic[10][3] = {{"car","mashin","mechine"},{"blue","tsenher","siniy"},{"yellow","shar","zheltyy"}};
	int count = 0;
	while(1){
		if(dic[count][0] == "\0"){
			break;
		}
		count++;
	}
	//we have obtained how many words we do have
	cout<<"English\t\tMongolian\t\tRussian\n";
	cout<<"--------------------------------------------------\n";
	for(int i = 0; i<count; i++){
		for(int j = 0; j<3; j++){
			cout<<dic[i][j]<<"\t\t\t";
		}
		cout<<endl;
	}
		//------------------------insterting elements to my array----------------
	string eng,mon,rus;
	cout<<"Engllish: ";
	cin>>eng;
	cout<<"Mongolian:";
	cin>>mon;
	cout<<"Russian: ";
	cin>>rus;
	dic[count][0] = eng;
	dic[count][1] = mon;
	dic[count][2] = rus;
	count++;
	cout<<"English\t\tMongolian\t\tRussian\n";
	cout<<"--------------------------------------------------\n";
	//----------------printing elements---------------------
	for(int i = 0; i<count; i++){
		for(int j = 0; j<3; j++){
			cout<<dic[i][j]<<"\t\t";
		}
		cout<<endl;
	}
	
	//------------------------deleteing elements from my array----------------
	string del;
	int indexToDel;
	cout<<"which element you want to delete ?";
	cin>>del;
	//-----------if there is anything same as user given---------------
	for(int i = 0; i<count; i++){
		if(del == dic[i][0]){
			indexToDel = i;
		}
	}
	//-----------deleting operation--------------------------
	for(int i = indexToDel; i<count; i++){
		dic[i][0] = dic[i+1][0];
		dic[i][1] = dic[i+1][1];
	}
	count--;
	//----------------printing------------------
	for(int i = 0; i<count; i++){
		for(int j = 0; j<3; j++){
			cout<<dic[i][j]<<"\t\t\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}

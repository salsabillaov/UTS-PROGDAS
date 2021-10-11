/* Refila Dyah Ghizanda Wardoyo */
/* Kategori Umur Manusia */

#include <iostream>

using namespace std;

int main()
{

//Data

    string name;
	int umur;

    //Entry

    cout<< "KATEGORI UMUR PADA MANUSIA"<< endl;
    cout<< "    "<<endl;


    //Data Input


    cout<<"Nama = ";
    getline(cin,name);

    start:
	cout<<"Umur = ";
	cin>>umur;
	cout<< "    "<<endl;


	//Declaration

	if(umur>=60 && umur<=100){
		cout<<"\nTermasuk Kategori Lansia";
        cout<< "    "<<endl;

	}else if(umur>=30 && umur<=59){
		cout<<"Termasuk Kategori Dewasa";
		cout<< "    "<<endl;

	}else if(umur>=18 && umur<=29){
		cout<<"Termasuk Kategori Pemuda";
		cout<< "    "<<endl;

	}else if(umur>=12 && umur<=17){
		cout<<"Termasuk Kategori Remaja";
		cout<< "    "<<endl;

	}else if(umur>=6 && umur<=11){
		cout<<"Termasuk Kategori Anak-anak";
		cout<< "    "<<endl;

    }else if(umur>=3 && umur<=5){
		cout<<"Anda Termasuk Kategori Balita";
		cout<< "    "<<endl;

    }else if(umur>=1 && umur<=2){
		cout<<"Termasuk Kategori Batita";
		cout<< "    "<<endl;

    }else if(umur>=0 && umur<=0){
		cout<<"Termasuk Kategori Bayi";
		cout<< "    "<<endl;


	}else {
		cout<<"Umur Yang Dimasukkan Salah"<<endl;
		goto start;
	}

    return 0;
}

#include <iostream> 

#include <string> 

#include <fstream>



using namespace std; 



class Book

{

public:

	int idBook;

    string nameBook;

    string author;

    int idGenre;

    string genre;

};



class Selling: public Book

{

public:	

    int numbSold;

    float price1book;





void show() 

{ 

int n = 0 ;

ifstream input_file("list.txt");

char letter;

while (! input_file.eof()){

	letter = input_file.get();

	if(letter ==';'){

		n++;

	}

}



int i;

ifstream fin("list.txt");

Selling object[n];

for( i=0;i<n;i++) { 

	fin>>object[i].idBook; 

	fin>>object[i].nameBook;

	fin>>object[i].author;

	fin>>object[i].idGenre;

	fin>>object[i].genre;

	fin>>object[i].numbSold;

	fin>>object[i].price1book;

	fin.ignore(1);



	cout<< object[i].idBook<<" ";

	cout<< object[i].nameBook<<" ";

	cout<< object[i].author<<" ";

	cout<< object[i].idGenre<<" ";

	cout<< object[i].genre<<" ";

	cout<< object[i].numbSold<<" ";

	cout<< object[i].price1book<<" "<<endl;

} 

  }

  

void find(int option) 

{ 

int n=0;

ifstream input_file("list.txt");

char letter;

while (! input_file.eof()){

	letter = input_file.get();

	if(letter ==';'){

		n++;

	}

}



int i;

ifstream fin("list.txt");

Selling object[n];

for( i=0;i<n;i++) { 

	fin>>object[i].idBook; 

	fin>>object[i].nameBook;

	fin>>object[i].author;

	fin>>object[i].idGenre;

	fin>>object[i].genre;

	fin>>object[i].numbSold;

	fin>>object[i].price1book;

	fin.ignore(1);

if(object[i].idGenre==option){

	cout<< object[i].idBook<<" ";

	cout<< object[i].nameBook<<" ";

	cout<< object[i].author<<" ";

	cout<< object[i].idGenre<<" ";

	cout<< object[i].genre<<" ";

	cout<< object[i].numbSold<<" ";

	cout<< object[i].price1book<<" "<<endl;

} 

  }

  }

  



void sell() 

{ 

int n=0;

int id;

ifstream input_file("list.txt");

char letter;

while (! input_file.eof()){

	letter = input_file.get();

	if(letter ==';'){

		n++;

	}

}

int i;

ifstream fin("list.txt");

Selling object[n];

cout<<"Enter id of book that you want to sell"<<endl;

cin>>id;

for( i=0;i<n;i++){ 

	fin>>object[i].idBook;

    fin>>object[i].nameBook;

	fin>>object[i].author;

	fin>>object[i].idGenre;

	fin>>object[i].genre;

	fin>>object[i].numbSold;

	fin>>object[i].price1book;

	fin.ignore(1);



ofstream fout("list.txt", ios_base::trunc|ios_base::app);

if(object[i].idBook<id){	

	fout<<object[i].idBook<<" ";

	fout<<object[i].nameBook<<" ";

	fout<<object[i].author<<" ";

	fout<<object[i].idGenre<<" ";

	fout<<object[i].genre<<" ";

	fout<<object[i].numbSold<<" ";

	fout<<object[i].price1book<<";"<<endl;

}

else if(object[i].idBook==id){

	object[i].numbSold=object[i].numbSold+1;	

	fout<<object[i].idBook<<" ";

	fout<<object[i].nameBook<<" ";

	fout<<object[i].author<<" ";

	fout<<object[i].idGenre<<" ";

	fout<<object[i].genre<<" ";

	fout<<object[i].numbSold<<" ";

	fout<<object[i].price1book<<";"<<endl;

}

else if(object[i].idBook>id) {

	fout<<object[i].idBook<<" ";

	fout<<object[i].nameBook<<" ";

	fout<<object[i].author<<" ";

	fout<<object[i].idGenre<<" ";

	fout<<object[i].genre<<" ";

	fout<<object[i].numbSold<<" ";

	fout<<object[i].price1book<<";"<<endl;

}

	fout.close();

	}

	cout<<"Sold!"<<endl;

}





void add()

{	

	Selling object;

	ofstream fout("list.txt", ios_base::app);

	fout<<endl;

	cout<<endl;

	cout<<"Enter id of new book: "<<endl;

	cin>>object.idBook;

	fout<<object.idBook<<" ";

	cout<<"Enter the name of new book: "<<endl;

	cin>>object.nameBook;

	fout<<object.nameBook<<" ";

	cout<<"Enter the author of new book: "<<endl;

	cin>>object.author;

	fout<<object.author<<" ";

	cout<<"Enter id of the genre: "<<endl;

	cin>>object.idGenre;

	fout<<object.idGenre<<" ";

	cout<<"Enter the genre of new book: "<<endl;

	cin>>object.genre;

	fout<<object.genre<<" ";

	cout<<"Enter the number of sold books: "<<endl;

	cin>>object.numbSold;

	fout<<object.numbSold<<" ";

	cout<<"Enter the price of one new book: "<<endl;

	cin>>object.price1book;

	fout<<object.price1book<<";";

	cout<<endl;

	cout<<"Added!"<<endl;

	fout.close();

}



void deleteBook()

{

    int deleteId;

    int answer;

	cout<<"Enter id of book that you want to delete: "<<endl;

	cin>>deleteId;

	cout<<"Do you want to delete all books starting with id "<<deleteId<<"? (yes - 1/no - 0)"<<endl;

	cin>>answer;

if(answer == 1){

	int n = 0 ;

	ifstream input_file("list.txt");

	char letter;

	while (! input_file.eof()){

	letter = input_file.get();

	if(letter ==';'){

		n++;

	}

}

	input_file.close();



	int i;

	ifstream fin("list.txt");



	Selling object[n];

	for( i=0;i<n;i++){ 

		fin>>object[i].idBook;

			if(deleteId == object[i].idBook){

				continue;

    		}



		object[i].idBook;

		fin>>object[i].nameBook;

		fin>>object[i].author;

		fin>>object[i].idGenre;

		fin>>object[i].genre;

		fin>>object[i].numbSold;

		fin>>object[i].price1book;

		fin.ignore(1);

	}

fin.close();



int temp = n-1;

ofstream fout("list.txt");



for( int j = 0;j < temp; j++){

	fout<<object[j].idBook<<" ";

	fout<<object[j].nameBook<<" ";

	fout<<object[j].author<<" ";

	fout<<object[j].idGenre<<" ";

	fout<<object[j].genre<<" ";

	fout<<object[j].numbSold<<" ";

	fout<<object[j].price1book<<";"<<endl;

} 	

	cout<<"Deleted!"<<endl;

fout.close();	 

}

}

};





  int main()

{

	   ifstream fin("list.txt");

	   int n=0;

       char press,input;

 do{

     

       cout<<"Press 1 to see all books"<<endl;

       cout<<"Press 2 to find a book by genre"<<endl;

       cout<<"Press 3 to sell a book"<<endl;

       cout<<"Press 4 to add a book to list"<<endl;

       cout<<"Press 5 to delete a book from list"<<endl;

       cin>>press;



       switch(press)

       {

       case '1':

              {

              	     Selling obj[n];

                     obj[n].show();

                     break;

              }

       case '2':

              {

              	     int option;

        cout<<endl;

        cout<<"Press 1 to view all classic books"<<endl;

	    cout<<"Press 2 to view all cooking books"<<endl;

	    cout<<"Press 3 to view all detective books"<<endl;

	    cout<<"Press 4 to view all adventure books"<<endl;

	    cout<<"Press 5 to view all fantasy books"<<endl;

	    cin>>option;

                     Selling obj[n];

					 obj[n].find(option);

                     break;

              }  

	    case '3':

              {

                     Selling obj;

					 obj.sell();

                     break;

              }  

	    case '4':

              {

                     Selling obj;

                     obj.add();

                     break;

              }   

        case '5':

              {

                     Selling obj;

					 obj.deleteBook();

                     break;

              }  

       }

       cout<<"Press c to continue and f to finish"<<endl;

       cin>>input;

       }

       while(input=='c');

       

    return 0;

}
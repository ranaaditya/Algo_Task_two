#include<iostream>
#include<string>
#include<stack>
using namespace std;

//main logic to  parse the given string...

  void  parse(string str, int &x) {
	stack<char>st;
	char ch;
	int l = str.length();

if(l<=106) {      
	for (int j = 0; j < l; ++j) {
		ch = str.at(j);
		if (j == 0 && ch == '>')
		   {x=0;
	      	return;
		}
		if (j == l-1 && ch == '<')
		{x=0;
		    return;
		}
		if (ch == '<') {
			st.push(ch);
		}
    //finding the  end pair matching for the tag  ... 
		if (ch == '>') {
			if (!st.empty()) {
				st.pop();
				x += 2;
			}
		}
	}
} else cout<<"overflow the input,try again later";
}
void parser() {
	int t;
	int max_size=0;          //0<max_size<=5*106

	cout << "enter the number of test cases :";
	cin >> t;
	int array[t];
	for(int k=0;k<t;k++){
	array[k]=0;
	}
	cin.ignore();

	for (int i = 0; i < t; ++i) {
  //to check if the given input matches the constraint given in the problem.... 
	    if(max_size<=530){
		string chtr;
		
		getline(cin, chtr);
		if(chtr.length()<=106){
	
			parse(chtr,array[i]);
		}
		max_size+=chtr.length();
		chtr.clear();

	}
	}


// for displaying the results ..
	for (int i = 0; i < t; i++) {
		cout << array[i] << endl;
	}
}

//main function start here...
int main() {
	parser();     //calling the parser ...
	return 0;

}

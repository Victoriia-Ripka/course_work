//учимось працювати з гітхабом(не виходить)

//21:59 ось так ось
//22:02

#include <iostream>
#include <map>
#include <vector>
#include <deque>
#include <string>
#include <cstdlib>
using namespace std;

typedef deque<string> Prefix;
map<Prefix, vector<string>> statetab;

enum{
	NPREF = 2,     //number of prefixes  //1 for total fun 
	NHASH = 10000,  //4093, /*size of state hash table array*/
	MAXGEN = 10000 //maximum words generated
};
char NONWORD[] = "/n"; /*cannot appear as a word*/

// add: add word to suffix list, update prefix
void add(Prefix& prefix, const string& s){
	if (prefix.size() == NPREF){
		statetab[prefix].push_back(s);
		prefix.pop_front();
	}
	prefix.push_back(s);
}

// build: read input words, build state table
void build(Prefix& prefix, istream& in) {
	string buf;
	while (in >> buf)
		add(prefix, buf);
}

//generate: produce output, one word
void generate(int nwords) {
	Prefix prefix;
	int i;
	for (i=0; i<NPREF; i++) //reset initial prefix
		add(prefix, NONWORD);
	for (i=0; i<nwords; i++){
		vector<string>& suf = statetab[prefix];
		const string& w = suf[rand() % suf.size()];
		if (w == NONWORD)
			break;
		cout << w << " ";
		prefix.pop_front(); // advance
		prefix.push_back(w);
	}
}



///   21:51 кам кам кам
int main() {
	//set random seed to try to generate different texts every time
	srand(time(0));
	cout << "Тяжко";
	//Кам від Віталіка <3
	int nwords = MAXGEN; 
	Prefix prefix; // current input prefix
	for (int i=0; i<NPREF; i++) //set up initial prefix
		add(prefix, NONWORD);
	build(prefix, cin);
	add(prefix, NONWORD);
	generate(nwords);
	return 0;
}
// cum cum cum
#pragma optimize(2)
#include<iostream>
#include<ctime>
#include<cstdio>
#include<fstream>
#include<string>
#include<cstdlib>
#include<map>
#include<utility>
#include<vector>
#define wys 100000000
using std::string ;
using std::ifstream ;
using std::ofstream ;
using std::vector ;
using std::pair ;
using std::map ;
using std::ios ;
using std::cout ;
using std::endl ;
using std::cin ;
using std::make_pair ;
string s ;
const string edit = "start notepad ";
//part 1 int 
enum classsample{
	___int64 = 1,
	___int128 = 2,
	___intu64 = 3,
	___intu128 = 4,
	___int = 5,
	___intu32 =6,
	___int32 = 7
};
struct namesample{
	string n;
	int line;int num;
	classsample typev ;
	bool operator<(const namesample& b)const{
		if(this->line == b.line)return this->num<b.num ;
		else return this->line<b.line ;
	}
};
struct valuesample{
	int down;
	int up;
	int value ;
};
int tot ;
map<string,namesample> __inttos ;
map<namesample,valuesample> __intvalues;
//part 1 finish

//part 2 struct
map<string,vector<pair<namesample,valuesample> > > structs ;
//part 2 finish

//part 3 format
vector<int> linenums ;
map<pair<int,int>, pair<string,bool> > format ;
int formatsize = 0;
//part 3 finish

//main part start 
int random(int l,int r){
	int p = ((rand()*rand())%wys*rand()%wys)%wys ;
	p=p%l+r ;
	return p;
}
void hackermainwork(string s){
	return ;
}
void hackout(){
	for(int i=0;i<formatsize;++i){
		for(int j=0;j<linenums[i];++j){
			string q = format[make_pair(i,j)].first ;bool pd = format[make_pair(i,j)].second ;
			if(pd==true){
				namesample templll = __inttos[q] ;
				int templ = __intvalues[templll].down,tempr = __intvalues[templll].up ;
				int randvalue = random(templ,tempr) ;
			}
		}
	}
	return ;
}
//main part finish
int main(int argc, char const *argv[]){
	srand(time(NULL)) ;
	srand((rand()*rand())%wys) ;
	redo:system("title Hacker reader  -  easy hack!") ;
	if(argc==1){
		system("mkdir C:\\Users\\cjoier\\AppData\\Roaming\\hack") ;
		ofstream fout("C:\\Users\\cjoier\\AppData\\Roaming\\hack\\unnamed.hack",ios::out) ;
		fout<<"@ Welcome!"<<endl
			<<"@ Remember to save your file!"<<endl
			<<"@ start it!"<<endl;
		fout.close() ;
		system((edit+"C:\\Users\\cjoier\\AppData\\Roaming\\hack\\unnamed.hack").c_str()) ;
		printf("Press any key to continue...") ;
		getchar() ;
		system("del C:\\Users\\cjoier\\AppData\\Roaming\\hack\\unnamed.hack") ;
		return 0;
	}
	ifstream fin(argv[1],ios::in) ;
	while(getline(fin,s))
		cout<<s<<endl;
	abc:cout<<endl<<"What to do?"<<endl;
	cin>>s;
	if(s=="go"){
		while(getline(fin,s))
			if(s.find("@")==string::npos)
				hackermainwork(s);
		hackout() ;
		return 0;
	}
	if(s=="edit")system((edit+argv[1]).c_str()) ;
	if(s=="reread"){
		s="qaq" ;
		system("cls") ;
		goto redo;
	}
	goto abc;
}

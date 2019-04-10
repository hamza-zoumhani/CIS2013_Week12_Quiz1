#include <string>

using namespace std;

class Game{
	
	private:
		string name;
		int score;
		
	public:
		Game{
			set_name("Unknown");
			set_score("0");
		}
		
		Game(string n, int s){
			set_name(n);
			set_score(s);
		}
		
		
		
		string get_name{ return name;}
		int get_score{ return score;}
		
		void set_name(string n){name=n;}
		void set_score(int s){score=s;}
		
};
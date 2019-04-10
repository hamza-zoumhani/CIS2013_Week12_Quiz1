#include <string>

using namespace std;

class mine_sweeper{
	
	private:
		int x=0;
		int board_size[x];
		int board_rows[x];
		int board_columns[x];
		int selected_squares;
		int bomb_squares;
		
	public:
		void print_board(){
			cout << "Enter board size: ";
			cin >> x;
			for(int i=0; i<x; i++){
				board_rows[
};
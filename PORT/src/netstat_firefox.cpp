#include<netstat_firefox.h>
#include <client.h>
#include <server.h>



void getFIREFOX_Table() //piping two process to perform pipe operation and capture the output of the command
{
	        char out[500];
		strcpy(out,"netstat -tanp | grep -i Firefox >> firefoxFile.txt");
                system(out);
		sl<<"INFO : firefox File Created"<<endl;
}

string storeFIREFOX_Table() //read each records from file and return a appended string seperated by |
{
	sl<<"INFO :In StoreFIREFOX_Table"<<endl;
	getFIREFOX_Table();
	fstream fs;
	string totalData;
	fs.open("firefoxFile.txt",ios::in|ios::out);
	if(!fs)
	{
		sl<<"ERROR : No such File"<<endl;
	}
	else
	{
		string line;
		while(getline(fs,line)) //reading each line and appending 
		{
		
				totalData+=line+"|";
			
		}
	}
	fs.close();
	sl<<"INFO :Ended StoreFIREFOX_Table"<<endl;
	return totalData;
}

void firefoxdriver(string firefoxData)  //main driver function responsible for execution
{
	        cl<<"INFO : In firefoxDriver "<<endl;
                char cmd[100];
	        strcpy(cmd, "netstat -tanp | grep -i Firefox");
                system(cmd);

                // cout << firefoxData << endl;

		cl<<"INFO : Ended firefoxDriver "<<endl;
                exit(0);
		
}


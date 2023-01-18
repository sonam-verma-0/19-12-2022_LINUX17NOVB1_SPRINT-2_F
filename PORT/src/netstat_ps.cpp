#include<netstat_ps.h>
#include <client.h>
#include <server.h>


void getPS_Table() //Capture the output of command into a file
{
                char out[500];
	        strcpy(out,"netstat -s >> psFile.txt");
                system(out);	
		sl<<"INFO : PS File Created"<<endl;
	
}

string storePS_Table() //Read each record from a file and return an appended string seperated by |
{
	sl<<"INFO :In StorePSTable"<<endl;
	getPS_Table();
	fstream fs;
	string totalData;
	fs.open("psFile.txt",ios::in|ios::out);
	if(!fs)
	{
		sl<<"ERROR : No such File"<<endl;
	}
	else
	{
		
		string line;
		while(getline(fs,line))		//reading the records and appending
		{
			
				totalData=line;
			
		}
	}
	fs.close();
	sl<<"INFO :Ended StorePSTable"<<endl;
	return totalData;
}
void PSdriver(string psData) //main driver function responsible for execution
{
	        cl<<"INFO :In PSdriver"<<endl;
                char cmd[100];
                strcpy(cmd,"netstat -s");
                system(cmd);
      

                // cout << psData << endl;
		
		cl<<"INFO :Ended PSdriver Execution"<<endl;
                exit(0);

}


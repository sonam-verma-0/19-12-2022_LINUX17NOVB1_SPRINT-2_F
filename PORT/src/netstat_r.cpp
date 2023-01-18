#include<netstat_r.h>
#include <client.h>
#include <server.h>


void getRoutingTable() //Capture the output of the commands in a file
{
char out[500];
strcpy(out,"netstat -r >> rtFile.txt");
system(out);
sl<<"INFO : RT File Created"<<endl;
	
}

string storeRoutingTable() //read each records from file and return a appended string

{
	sl<<"INFO :In Store Routing Table"<<endl;
	getRoutingTable();
	fstream fs;
	string totalData;
        
	fs.open("rtFile.txt",ios::in|ios::out);
	if(!fs)
	{
		sl<<"ERROR : No such File"<<endl;
	}
	else
	{
		
		string line;
		while(getline(fs,line))			//reading each line from the file and appending it
		{
			
				totalData=line;
			
		}
	}
	fs.close();
        sl<<"INFO :Ended Store Routing Table"<<endl;
	return totalData;
} 

 void RTdriver(string rtData)  //main driver function responsible for execution
{

       cl<<"INFO : In RTdriver"<<endl;
       char cmd[500];
       strcpy(cmd,"netstat -r");
       system(cmd);
      

      // cout << rtData << endl;
       cl<<"INFO : Finished Executions"<<endl;
       exit(0);



}



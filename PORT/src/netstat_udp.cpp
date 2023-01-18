#include<netstat_udp.h>
#include<client.h>
#include <server.h>


void getUDP_Table() //Capture the output of the commands in a file
{
                char out[500];
	        strcpy(out,"netstat -un >> udpFile.txt");
                system(out);
		sl<<"INFO : UDP File Created"<<endl;
		
	
}

string storeUDP_Table()  //read each records from file and return a appended string seperated by |
{
	sl<<"INFO :In StoreUDPTable"<<endl;
	getUDP_Table();
	fstream fs;
	string totalData;
	fs.open("udpFile.txt",ios::in|ios::out);
	if(!fs)
	{
		sl<<"ERROR : No such File"<<endl;
	}
	else
	{
		string line;
		while(getline(fs,line)) //reading the records and appending
		{
			
				totalData=line;
			
		}
	}
	fs.close();
        sl<<"INFO :Ended StoreUDPTable"<<endl;
	return totalData;
}
void UDPdriver(string udpData)			//main driver function responsible for execution
{
	                cl<<"INFO :In UDPdriver Execution"<<endl;
                        char cmd[100];
	                strcpy(cmd,"netstat -un");
                        system(cmd);
      

                        // cout << updData << endl;

			cl<<"INFO :Ended UDPdriver Execution"<<endl;
                        exit(0);

}


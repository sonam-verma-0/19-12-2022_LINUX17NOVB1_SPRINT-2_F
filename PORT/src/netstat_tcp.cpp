#include<netstat_tcp.h>
#include <client.h>
#include <server.h>


void getTCP_Table() //Capture the output of command into a file
{
                char out[500];
	        strcpy(out,"netstat -tn >> tcpFile.txt");
                system(out);	
		sl<<"INFO : TCP File Created"<<endl;
	
}

string storeTCP_Table() //Read each record from a file and return an appended string seperated by |
{
	sl<<"INFO :In StoreTCPTable"<<endl;
	getTCP_Table();
	fstream fs;
	string totalData;
	fs.open("tcpFile.txt",ios::in|ios::out);
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
	sl<<"INFO :Ended StoreTCPTable"<<endl;
	return totalData;
}
void TCPdriver(string tcpData) //main driver function responsible for execution
{
	        cl<<"INFO :In TCPdriver"<<endl;
                char cmd[100];
                strcpy(cmd,"netstat -tn");
                system(cmd);
      

                // cout << tcpData << endl;
		
		cl<<"INFO :Ended TCPdriver Execution"<<endl;
                exit(0);

}


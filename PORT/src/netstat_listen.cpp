#include<netstat_listen.h>
#include <client.h>
#include <server.h>

void getListen() //piping two process to perform pipe operation and capture the output of command
{
                char out[500];
	        strcpy(out,"netstat -tanp | grep -i LISTEN >> listen_File.txt");
                system(out);
                strcpy(out,"netstat -tanp | grep -i ESTABLISHED >> listen_File.txt");
                system(out);	
		sl<<"INFO : Listen File Created"<<endl;
}

string storeListen()  //read each records from file and return a appended string seperated by |
{
	sl<<"INFO :In StoreListen"<<endl;
	getListen();
	fstream fs;
	string totalData;
	fs.open("listen_File.txt",ios::in|ios::out);
	if(!fs)
	{
		sl<<"ERROR : No such File"<<endl;
	}
	else
	{
		string line;				//reading each record to append it
		while(getline(fs,line))
		{
				totalData=line;
		}
	}
	fs.close();
        sl<<"INFO :Ended StoreListen"<<endl;
	return totalData;
}
void listendriver(string listenData) //main driver dunc responsible for execution
{
	                cl<<"INFO : In listenDriver "<<endl;
                        char cmd[100];
	                strcpy(cmd, "netstat -tanp | grep -i LISTEN");
                        printf("LISTEN STATE- ");
                        system(cmd);

                        strcpy(cmd, "netstat -tanp | grep -i ESTABLISHED");
                        printf("ESTABLISHED STATE - ");
                        system(cmd);
                       
        
                        // cout << listenData << endl;
			cl<<"INFO : Ended listenDriver execution "<<endl;
                        exit(0);

		
}


#include<client.h>
#include<netstat_ps.h>
#include<netstat_r.h>
#include<netstat_tcp.h>
#include<netstat_udp.h>
#include<netstat_listen.h>
#include<netstat_firefox.h>
#include<iostream>
#include<fstream>


int main()
{
       
	
	Client c;	//creating client class object
	c.createSock();			//calling different functions.
	c.connectServer(); 
	cout<<"\n";				//menu driven 
	cout<<"------------WELCOME To PortScanner Implementation using Netstat-----------"<<endl;
	cout<<"\n";
	cout<<"\t\tFollowing are the commands given :"<<endl;
	cout<<"\t\t1.Protocol Statistics (netstat -s)"<<endl;
        cout<<"\t\t2.Routing Table Information (netstat -r)"<<endl;
	cout<<"\t\t3.Active TCP socket  connections (netstat -tn)"<<endl;
	cout<<"\t\t4.Active UDP socket connections (netstat -un)"<<endl;
        cout<<"\t\t5.All Internet connections which are using Firefox (netstat -tanp | grep -i firefox)"<<endl;
	cout<<"\t\t6.All Internet connections where the state is LISTEN / ESTABLISHED for UDP / TCP "<<endl;
        cout<<"\t\t7.Exit "<<endl;
	cout<<"\n";
	cout<<"---------------------------------------------------------------------------"<<endl;
	cout<<"Enter your choice :";
	int choice;
	cin>>choice;
	string temp;

	switch(choice) //switching on the input 
	{
                case 1:
			temp="PS";
			c.send_recv(temp);
			c.closeSock();	
			break;
		case 2:
			temp="RT";
			c.send_recv(temp);
			c.closeSock();	
			break;
		case 3:
			temp="TCP";
			c.send_recv(temp);
			c.closeSock();
			break;
		case 4:
			temp="UDP";
			c.send_recv(temp);
			c.closeSock();
			break;
		case 5:
			temp="Firefox";
			c.send_recv(temp);
			c.closeSock();
			break;
		case 6:
			temp="Listen";
			c.send_recv(temp);
			c.closeSock();
			break;
		case 7:
			temp="exit";
			exit(EXIT_SUCCESS);
			break;
		default:
			cout<<"Invalid Choice"<<endl;
			exit(EXIT_FAILURE);

	}
	cl.close(); //closing global logFile
        
}


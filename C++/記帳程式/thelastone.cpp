#include <iostream>
#include <stdio.h>
#include <cstring>
#include <stdlib.h>
#include <fstream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void writein(string r,string v,int t)
{
	ofstream in;
	in.open("money.txt",ios::out | ios::app);
	if (!in.is_open()) 
	 	{
        	cout << "Failed to open file.\n";
        	in.close();
     	} 
	 else 
	 	{
        	in << r << "/" << v <<" "<< t <<"\n";
        	in.close();
        }
        
    
        
}

void strchrn(char *dest, const char *src, char b,char e) 
{ 
   char *m = strchr(src, b) + 5 ;//.�bstrchr�]�^���w�r�Ŧ�A�Ϋ��V���r��
   char *n = strchr(src, e) + 7;
   int len = strlen(m) - strlen(n);
   
  
   strncpy(dest, m, len);//�ƻsm�����e��dest���A���׬�len
   dest[len] = '\0';//'\0'���@�Ӫš]null�^�r�� 
   
 }
 
void datemoneysearch(char date[100])
{
	fstream xx;
	char buffer[100];
	char dest[30];
	int t,sum=0;	
		xx.open("money.txt",ios::in);
		if (!xx.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	xx.close();
	     	} 
		 while (! xx.eof()) 
		 	{
	        	xx.getline(buffer,sizeof(buffer));
	        	if(date[0]==buffer[0] && date[1]==buffer[1] && date[2]==buffer[2] && date[3]==buffer[3])
	        	{
	        		
	        		strchrn(dest, buffer,'/', '\0');
	        		printf("%s\n", dest);
	        		ofstream ofs;
	   				ofs.open("moneyaccount.txt");
	   				if (!ofs.is_open()) 
					   {
	        			cout << "Failed to open file.\n";
	        			ofs.close();
	    				} 
					else {
	        		ofs << dest << "\n";//�N�P�Ǫ����Z�g�Jmoneyaccount.txt�ɸ� 
	        		ofs.close();
	        		ifstream fin("moneyaccount.txt");//�N�P�Ǫ����Z�qmoneyaccount.txt�ɸ� Ū�X 
	    			
	    			fin >> t;
	    			sum=sum+t;
	    			
	    			
	    			}
	    			
	        	}
	        }
	        cout << date<<"����X:"<< sum<<"\n";
	        	xx.close();
	
	
	
}

void fewdaysmoneysearch(char date[100],int day)
{
	fstream xx;
	char buffer[100];
	char dest[30];
	char com[3];
	int t,sum=0;	
	com[0]=date[3];
		xx.open("money.txt",ios::in);
		if (!xx.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	xx.close();
	     	} 
		 while (! xx.eof()) 
		 	{
	        	xx.getline(buffer,sizeof(buffer));
	        	date[3]=com[0];
				
					for(int i=0;i<day;i++)
	        		{
	        			
	        			date[3]=date[3]+i;
	        			if(date[3]==10)
							{
								date[3]=0;
								date[2]=date[2]+1;
							}
							
	        			
		        		if( date[0]==buffer[0] && date[1]==buffer[1] && date[2]==buffer[2] && date[3]==buffer[3])
		        			{
		        				
				        		strchrn(dest, buffer,'/', '\0');
				        		printf("%s\n", dest);
				        		ofstream ofs;
				   				ofs.open("moneyaccount.txt");
				   				if (!ofs.is_open()) 
								   {
				        			cout << "Failed to open file.\n";
				        			ofs.close();
				    				} 
								else {
				        		ofs << dest << "\n";//�N�P�Ǫ����Z�g�Jmoneyaccount.txt�ɸ� 
				        		ofs.close();
				        		ifstream fin("moneyaccount.txt");//�N�P�Ǫ����Z�qmoneyaccount.txt�ɸ� Ū�X 
				    			
				    			fin >> t;
				    			sum=sum+t;
				    			
		    			
		    					}
		    			
		        			}
	        		}
				
				
	    	}
	        cout << "�`��X:"<< sum<<"\n";
	        	xx.close();
	
	
	
}

void specificmoneysearch(char date[100],char item[10])
{
	fstream xx;
	char buffer[100];
	char dest[30];
	int t,sum=0;	
		xx.open("money.txt",ios::in);
		if (!xx.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	xx.close();
	     	} 
		 while (! xx.eof()) 
		 	{
	        	xx.getline(buffer,sizeof(buffer));
	        	
	        	if(date[0]==buffer[0] && date[1]==buffer[1] && date[2]==buffer[2] && date[3]==buffer[3] && item[0]==buffer[5] && item[1]==buffer[6])
	        	{
	        		
	        		strchrn(dest, buffer,'/', '\0');
	        		printf("%s\n", dest);
	        		ofstream ofs;
	   				ofs.open("moneyaccount.txt");
	   				if (!ofs.is_open()) 
					   {
	        			cout << "Failed to open file.\n";
	        			ofs.close();
	    				} 
					else {
	        		ofs << dest << "\n";//�N�P�Ǫ����Z�g�Jmoneyaccount.txt�ɸ� 
	        		ofs.close();
	        		ifstream fin("moneyaccount.txt");//�N�P�Ǫ����Z�qmoneyaccount.txt�ɸ� Ū�X 
	    			
	    			fin >> t;
	    			sum=sum+t;
	    			
	    			
	    			}
	    			
	        	}
	        }
	        cout << date<<"����X:"<< sum<<"\n";
	        	xx.close();
}

void itemmoneysearch(char item[10])
{
	fstream xx;
	char buffer[100];
	char dest[30];
	int t,sum=0;	
		xx.open("money.txt",ios::in);
		if (!xx.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	xx.close();
	     	} 
		 while (! xx.eof()) 
		 	{
	        	xx.getline(buffer,sizeof(buffer));
	        	
	        	if(item[0]==buffer[5] && item[1]==buffer[6])
	        	{
	        		
	        		strchrn(dest, buffer,'/', '\0');
	        		printf("%s\n", dest);
	        		ofstream ofs;
	   				ofs.open("moneyaccount.txt");
	   				if (!ofs.is_open()) 
					   {
	        			cout << "Failed to open file.\n";
	        			ofs.close();
	    				} 
					else {
	        		ofs << dest << "\n";//�N�P�Ǫ����Z�g�Jmoneyaccount.txt�ɸ� 
	        		ofs.close();
	        		ifstream fin("moneyaccount.txt");//�N�P�Ǫ����Z�qmoneyaccount.txt�ɸ� Ū�X 
	    			
	    			fin >> t;
	    			sum=sum+t;
	    			
	    			
	    			}
	    			
	        	}
	        }
	        cout << item <<"����X:"<< sum<<"\n";
	        	xx.close();
	
}

void inputbudget(int budget)
{
	ofstream in;
	in.open("balance.txt",ios::out);
	if (!in.is_open()) 
	 	{
        	cout << "Failed to open file.\n";
        	in.close();
     	} 
	 else 
	 	{
        	in << budget <<"\n";
        	in.close();
        }
        
	
}

void addtobalance(int t)
{
	fstream xx;
	int n;	
		xx.open("balance.txt",ios::in | ios::out);
		if (!xx.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	xx.close();
	     	} 
		 while (! xx.eof()) 
		 	{
	        	ifstream fin("balance.txt"); 
	    		fin >> n;
	    		n=n+t;
	    		xx <<  n <<"\n";
        		xx.close();
	    }
	
}

void percentsetting(int percent)
{
	fstream xx;	
		xx.open("balance.txt",ios::out | ios::app);
		if (!xx.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	xx.close();
	     	} 
		else
			{
			
		    	xx<< percent <<"\n";
	        	xx.close();
        	}
	    
}

void percentwarning(int numb)
{
	int warn=0;
	int x=0;
	int y=0;
    ifstream vin("balance.txt");//�N�w��+���J�qbalance.txt�ɸ� Ū�X 
	vin >> x;
	vin.seekg(-2,vin.cur);//�N�]�w%�Ʊqbalance.txt�ɸ� Ū�X 
	vin >> y;
	warn=(x*y)/100 ;
		fstream xx;
		char buffer[100];
		char dest[30];
		int t,sum=0;	
			xx.open("money.txt",ios::in);
			if (!xx.is_open()) 
			 	{
		        	cout << "Failed to open file.\n";
		        	xx.close();
		     	} 
			 while (! xx.eof()) 
			 	{
		        	xx.getline(buffer,sizeof(buffer));
		        	
		        		
		        		strchrn(dest, buffer,'/', '\0');
		        		
		        		ofstream ofs;
		   				ofs.open("moneyaccount.txt");
		   				if (!ofs.is_open()) 
						   {
		        			cout << "Failed to open file.\n";
		        			ofs.close();
		    				} 
						else {
		        		ofs << dest << "\n";//�N���B�g�Jmoneyaccount.txt�ɸ� 
		        		ofs.close();
		        		ifstream gin("moneyaccount.txt");//�N���B�qmoneyaccount.txt�ɸ� Ū�X 
		    			gin >> t;
		    			sum=sum+t;
		    			
		    			 if((x-sum)<warn)
					       	{
					        	printf("�֨S���o!!!\n");
					        	printf("�֨S���o!!!\n");
					        	printf("�֨S���o!!!\n");
							}
					    			
		    			}
		    			
		        }
		       
		       	xx.close();
		
}

void accountbalance(int sad)
{
	
	
	
    
	
		fstream xx;
		char buffer[100];
		char dest[30];
		int y;
		int t,sum=0;	
			xx.open("money.txt",ios::in);
			if (!xx.is_open()) 
			 	{
		        	cout << "Failed to open file.\n";
		        	xx.close();
		     	} 
			 while (! xx.eof()) 
			 	{
		        	xx.getline(buffer,sizeof(buffer));
		        	
		        		
		        		strchrn(dest, buffer,'/', '\0');
		        		printf("%s\n", dest);
		        		ofstream ofs;
		   				ofs.open("moneyaccount.txt");
		   				if (!ofs.is_open()) 
						   {
		        			cout << "Failed to open file.\n";
		        			ofs.close();
		    				} 
						else {
		        		ofs << dest << "\n";//�N���B�g�Jmoneyaccount.txt�ɸ� 
		        		ofs.close();
		        		ifstream bin("moneyaccount.txt");//�N���B�qmoneyaccount.txt�ɸ� Ū�X 
		    			bin >> t;
		    			sum=sum+t;
		    			y=sad-sum;
		    			cout<<"�Ѿl���B:"<<y<<"\n";
		    			
		    			}
		    			
		        }
		   
		    
				
		       	xx.close();
		
}



int main()
{
		char check[500];
		char y[500];
		fstream che;
		che.open("money.txt",ios::in);
		if (!che.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	che.close();
	     	} 
		 else 
		 	{
	        	che.getline(check,sizeof(check)); 
	        	y[0]=check[0];
	        	che.getline(check,sizeof(check)); 
				if(y[0]==check[0])
				{
					ofstream upp;
					upp.open("money.txt",ios::out | ios::app);
					if (!upp.is_open()) 
		 			{
	        			cout << "Failed to open file.\n";
	     			} 
		 			else 
		 			{
				        upp << "���" << "/" <<"�~��"<<" "<<"��X���B"<<"\n";
				        	
				        upp.close();
				    }
			}
				
	        che.close();
	    }
		
	     
	     
	
		
	    string r,v,g; 	
		int f,t,z;
		char buffer[500];
		
		printf("��ܪA�ȶ��� 1�O�b 2�d�b 3�]�w�w��Pĵ�i 4�p��l�B\n");
		cin>>z;
		
	if(z==1){
		printf("��J��X���\n");
		cin>>r;
		printf("1���� 2���~ 3��q 4���q 5��`�}�P 6�T�� 7���J 0��L\n");
		printf("��J��X���ءA�п�J�N��\n");
		cin>>f;
		
		if(f==0){
		printf("��J�s����X�~��\n");
		cin>>v;
		printf("��J��X���B\n");
		cin>>t;
	}
		else{
		printf("��J��X���B\n");
		cin>>t;
		if(f==7){
			addtobalance(t);
		}
	}
		switch(f)
		{
			case 1:
				g="����";
				break;
			case 2:
				g="���~";
				break;
			case 3:
				g="��q";
				break;
			case 4:
				g="���q";
				break;
			case 5:
				g="��`�}�P";
				break;
			case 6:
				g="�T��";
				break;
			case 7:
				g="���J";
				break;
			
			
		}
		if(f==0){
		writein(r,v,t);}
		else if(f==1){
		writein(r,g,t);}
		else if(f==2){
		writein(r,g,t);}
		else if(f==3){
		writein(r,g,t);}
		else if(f==4){
		writein(r,g,t);}
		else if(f==5){
		writein(r,g,t);}
		else if(f==6){
		writein(r,g,t);}
		
		
	}
	else if(z==2){
		int i;	
		char date[100];
		char item[10];
		int day;
		printf("1���d�� 2�h��d�� 3���جd�� 4�����d��\n");
		printf("�п�J�Q�n�A�Ȥ��N��\n");
		cin>>i;
	    switch(i)
		{
			case 1:
				printf("�п�J�d�ߤ��???\n");
				
				cin>>date;
			    datemoneysearch(date);
			    break;
			case 2:
				printf("�п�J���d�ߤ�������???\n");			
				cin>>date;
				printf("�п�J�d�ߤѼ�???\n"); 
				
				cin>>day;
			    fewdaysmoneysearch(date,day);
			    break;
			case 3:
				printf("�п�J���d�߸�ƪ����???\n");
				
				cin>>date;
				printf("�п�J���d�߸�ƪ��~��???\n");
				
				cin>>item;
			    specificmoneysearch(date,item);
			    break;
			case 4:
				printf("�п�J���d�߸�ƪ��~��???\n");
				
				cin>>item;
			    itemmoneysearch(item);
			    break;
	    
		}
	    
    
}
	else if(z==3){
		printf("�п�� 1�]�w�w�� 2�]�w�l�B�Ѧh��%�ɭn�����z???\n");
		int w;
		cin>>w;
		if(w==1)
		{
			printf("�п�J�z�o�Ӥ몺�w��???\n");
			int budget;
			cin>>budget;
			inputbudget(budget);
			printf("�Y�z���s�W���J�i�b�O�b�B���7(���J)���a��s�W\n");
		}
		else if(w==2)
		{
			printf("�г]�w�C��X%�nĵ�i�z�֨S���F???\n");//�n��J�Ʀr 
			int percent;
			cin>>percent;
			percentsetting(percent);
			
		}
		
		
		
		
		
}
	else if(z==4){
		fstream qq;
		int sad;	
		qq.open("balance.txt",ios::in);
		if (!qq.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	qq.close();
	     	} 
		
	        ifstream din("balance.txt");//�qbalance.txt�ɸ� Ū�X 
	    	din >> sad;
	    	
	    
		accountbalance(sad);
		
		
}
	fstream draw;
	int numb;	
		draw.open("balance.txt",ios::in);
		if (!draw.is_open()) 
		 	{
	        	cout << "Failed to open file.\n";
	        	draw.close();
	     	} 
		
	       	ifstream ein("balance.txt");//�qbalance.txt�ɸ� Ū�X 
	    	ein >> numb;
	    		
	    	
	percentwarning(numb);




	
	
	
	
	system("pause");
	return 0;
}

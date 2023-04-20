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
   char *m = strchr(src, b) + 5 ;//.在strchr（）給定字符串，及指向的字符
   char *n = strchr(src, e) + 7;
   int len = strlen(m) - strlen(n);
   
  
   strncpy(dest, m, len);//複製m的內容到dest中，長度為len
   dest[len] = '\0';//'\0'為一個空（null）字元 
   
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
	        		ofs << dest << "\n";//將同學的成績寫入moneyaccount.txt檔裡 
	        		ofs.close();
	        		ifstream fin("moneyaccount.txt");//將同學的成績從moneyaccount.txt檔裡 讀出 
	    			
	    			fin >> t;
	    			sum=sum+t;
	    			
	    			
	    			}
	    			
	        	}
	        }
	        cout << date<<"的支出:"<< sum<<"\n";
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
				        		ofs << dest << "\n";//將同學的成績寫入moneyaccount.txt檔裡 
				        		ofs.close();
				        		ifstream fin("moneyaccount.txt");//將同學的成績從moneyaccount.txt檔裡 讀出 
				    			
				    			fin >> t;
				    			sum=sum+t;
				    			
		    			
		    					}
		    			
		        			}
	        		}
				
				
	    	}
	        cout << "總支出:"<< sum<<"\n";
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
	        		ofs << dest << "\n";//將同學的成績寫入moneyaccount.txt檔裡 
	        		ofs.close();
	        		ifstream fin("moneyaccount.txt");//將同學的成績從moneyaccount.txt檔裡 讀出 
	    			
	    			fin >> t;
	    			sum=sum+t;
	    			
	    			
	    			}
	    			
	        	}
	        }
	        cout << date<<"的支出:"<< sum<<"\n";
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
	        		ofs << dest << "\n";//將同學的成績寫入moneyaccount.txt檔裡 
	        		ofs.close();
	        		ifstream fin("moneyaccount.txt");//將同學的成績從moneyaccount.txt檔裡 讀出 
	    			
	    			fin >> t;
	    			sum=sum+t;
	    			
	    			
	    			}
	    			
	        	}
	        }
	        cout << item <<"的支出:"<< sum<<"\n";
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
    ifstream vin("balance.txt");//將預算+收入從balance.txt檔裡 讀出 
	vin >> x;
	vin.seekg(-2,vin.cur);//將設定%數從balance.txt檔裡 讀出 
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
		        		ofs << dest << "\n";//將金額寫入moneyaccount.txt檔裡 
		        		ofs.close();
		        		ifstream gin("moneyaccount.txt");//將金額從moneyaccount.txt檔裡 讀出 
		    			gin >> t;
		    			sum=sum+t;
		    			
		    			 if((x-sum)<warn)
					       	{
					        	printf("快沒錢囉!!!\n");
					        	printf("快沒錢囉!!!\n");
					        	printf("快沒錢囉!!!\n");
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
		        		ofs << dest << "\n";//將金額寫入moneyaccount.txt檔裡 
		        		ofs.close();
		        		ifstream bin("moneyaccount.txt");//將金額從moneyaccount.txt檔裡 讀出 
		    			bin >> t;
		    			sum=sum+t;
		    			y=sad-sum;
		    			cout<<"剩餘金額:"<<y<<"\n";
		    			
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
				        upp << "日期" << "/" <<"品項"<<" "<<"支出金額"<<"\n";
				        	
				        upp.close();
				    }
			}
				
	        che.close();
	    }
		
	     
	     
	
		
	    string r,v,g; 	
		int f,t,z;
		char buffer[500];
		
		printf("選擇服務項目 1記帳 2查帳 3設定預算與警告 4計算餘額\n");
		cin>>z;
		
	if(z==1){
		printf("輸入支出日期\n");
		cin>>r;
		printf("1食物 2飲品 3交通 4水電 5日常開銷 6娛樂 7收入 0其他\n");
		printf("輸入支出項目，請輸入代號\n");
		cin>>f;
		
		if(f==0){
		printf("輸入新的支出品項\n");
		cin>>v;
		printf("輸入支出金額\n");
		cin>>t;
	}
		else{
		printf("輸入支出金額\n");
		cin>>t;
		if(f==7){
			addtobalance(t);
		}
	}
		switch(f)
		{
			case 1:
				g="食物";
				break;
			case 2:
				g="飲品";
				break;
			case 3:
				g="交通";
				break;
			case 4:
				g="水電";
				break;
			case 5:
				g="日常開銷";
				break;
			case 6:
				g="娛樂";
				break;
			case 7:
				g="收入";
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
		printf("1單日查詢 2多日查詢 3項目查詢 4分類查詢\n");
		printf("請輸入想要服務之代號\n");
		cin>>i;
	    switch(i)
		{
			case 1:
				printf("請輸入查詢日期???\n");
				
				cin>>date;
			    datemoneysearch(date);
			    break;
			case 2:
				printf("請輸入欲查詢之首日日期???\n");			
				cin>>date;
				printf("請輸入查詢天數???\n"); 
				
				cin>>day;
			    fewdaysmoneysearch(date,day);
			    break;
			case 3:
				printf("請輸入欲查詢資料的日期???\n");
				
				cin>>date;
				printf("請輸入欲查詢資料的品項???\n");
				
				cin>>item;
			    specificmoneysearch(date,item);
			    break;
			case 4:
				printf("請輸入欲查詢資料的品項???\n");
				
				cin>>item;
			    itemmoneysearch(item);
			    break;
	    
		}
	    
    
}
	else if(z==3){
		printf("請選擇 1設定預算 2設定餘額剩多少%時要提醒您???\n");
		int w;
		cin>>w;
		if(w==1)
		{
			printf("請輸入您這個月的預算???\n");
			int budget;
			cin>>budget;
			inputbudget(budget);
			printf("若您有新增收入可在記帳處選擇7(收入)的地方新增\n");
		}
		else if(w==2)
		{
			printf("請設定低於幾%要警告您快沒錢了???\n");//要輸入數字 
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
		
	        ifstream din("balance.txt");//從balance.txt檔裡 讀出 
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
		
	       	ifstream ein("balance.txt");//從balance.txt檔裡 讀出 
	    	ein >> numb;
	    		
	    	
	percentwarning(numb);




	
	
	
	
	system("pause");
	return 0;
}

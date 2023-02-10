#include <iostream>
#include <string>
#include <cstring>
#include <fstream>
#include<windows.h>

using namespace std;

	COORD coord={0,0};
	
void gotoxy(int x,int y)
	{
		coord.X=x;
		coord.Y=y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
	}
void header()
	{
	gotoxy(24,2);	cout<<"*******************************************";
	gotoxy(24,3);	cout<<"* Automated Student Identification System *";
	gotoxy(24,4);	cout<<"*******************************************";
	gotoxy(30,6);	cout<<"Welcome to the CSU,Carig Campus"<<endl;
	cout<<"\t======================================================================="<<endl;
	}
int main()
{
start:
system("cls");
	int chc;
	double paid;
	double bal;
	double tuition;
	double amount;
	char rp;
	string id_no;
	bool found=true;
	
	ofstream outFile;
	ifstream inFile;
		
header();
	cout<<"\tID Number		:	 ";
	cin>>id_no;

	fstream files(("ID/"+id_no+" 0.txt").c_str());
	
	if(!files.good())
	{
ret1:
		found = false; 
		cout<<"\t-----------------------------------------------------------------------"<<endl;
		cout<<"\t\t\t[1] - Register"<<endl;
		cout<<"\t\t\t[2] - Re-Enter Id Number"<<endl;
		cout<<"\t\t\t[3] - End"<<endl;
		cout<<"\t-----------------------------------------------------------------------"<<endl;
		cout<<"\tEnter Choice		:	 ";
		cin>>chc;
		cout<<"\t-----------------------------------------------------------------------"<<endl;
		
		switch(chc)
		{
			case 1:
				{
					string id,x;
					string name;
					string addr;
					string cp;
					string email;
					string age;
					string dob;
					string pob;
					string civ_stat;
					string gender;
					string citizenship;
					string language;
					string religion;
					string father;
					string foccupation;
					string mother;
					string moccupation;
					string depart;
					string prog;
				
					system("cls");
					header();
					cout<<"\tID Number		:	 ";
					cin>>id_no;
					getline(cin,x);
					cout<<"\t-----------------------------------------------------------------------"<<endl;
					cout<<"\t\tPersonal Information"<<endl;
					cout<<"\t-----------------------------------------------------------------------"<<endl;
					cout<<"\tName			:	";
					getline(cin,name);
					cout<<"\tAddress			:	";
					getline(cin,addr);
					cout<<"\tContact Number		:	";
					getline(cin,cp);
					cout<<"\tE-Mail Address		:	";
					getline(cin,email);
					cout<<"\tAge			:	";
					getline(cin,age);
					cout<<"\tDate of Birth		:	";
					getline(cin,dob);
					cout<<"\tPlace of Birth		:	";
					getline(cin,pob);
					cout<<"\tCivil Status		:	";
					getline(cin,civ_stat);
					cout<<"\tGender			:	";
					getline(cin,gender);
					cout<<"\tCitizenship		:	";
					getline(cin,citizenship);
					cout<<"\tLanguage		:	";
					getline(cin,language);
					cout<<"\tReligion		:	";
					getline(cin,religion);
					cout<<"\tFather			:	";
					getline(cin,father);
					cout<<"\tOccupation		:	";
					getline(cin,foccupation);
					cout<<"\tMother			:	";
					getline(cin,mother);
					cout<<"\tOccupation		:	";
					getline(cin,moccupation);
					cout<<"\t-----------------------------------------------------------------------"<<endl;
					cout<<"\t\tSchool Data"<<endl;
					cout<<"\t-----------------------------------------------------------------------"<<endl;
					cout<<"\tDepartment		:	";
					getline(cin,depart);
					cout<<"\tProgram			:	";
					getline(cin,prog);
					

					outFile.open(("ID/"+id_no+" 0.txt").c_str());
					outFile<<"\t-----------------------------------------------------------------------"<<endl;
					outFile<<"\tName			:	"<<name<<endl;
					outFile<<"\tAddress			:	"<<addr<<endl;
					outFile<<"\tContact Number		:	"<<cp<<endl;
					outFile<<"\tE-Mail Address		:	"<<email<<endl;
					outFile<<"\t-----------------------------------------------------------------------"<<endl;
					outFile.close();
					
					outFile.open(("ID/"+id_no+" 1.txt").c_str());
					outFile<<"\t\tPersonal Information"<<endl;
					outFile<<"\t-----------------------------------------------------------------------"<<endl;
					outFile<<"\tAge			:	"<<age<<" years old"<<endl;
					outFile<<"\tDate of Birth		:	"<<dob<<endl;
					outFile<<"\tCivil Status		:	"<<civ_stat<<endl;
					outFile<<"\tGender			:	"<<gender<<endl;
					outFile<<"\tCitizenship		:	"<<citizenship<<endl;
					outFile<<"\tLanguage		:	"<<language<<endl;
					outFile<<"\tReligion		:	"<<religion<<endl;
					outFile<<"\tFather			:	"<<father<<endl;
					outFile<<"\tOccupation		:	"<<foccupation<<endl;
					outFile<<"\tMother			:	"<<mother<<endl;
					outFile<<"\tOccupation		:	"<<moccupation<<endl;
					outFile<<"\t-----------------------------------------------------------------------"<<endl;
					outFile.close();
					
					outFile.open(("ID/"+id_no+" 2.txt").c_str());
					outFile<<"\t-----------------------------------------------------------------------"<<endl;
					outFile<<"\tName			:	"<<name<<endl;
					outFile<<"\tDepartment		:	"<<depart<<endl;
					outFile<<"\tProgram			:	"<<prog<<endl;
					outFile<<"\t-----------------------------------------------------------------------"<<endl;
					outFile.close();
					
					outFile.open(("ID/"+id_no+" 3.txt").c_str());
					outFile<<"3650"<<endl;
					outFile<<"0"<<endl;
					outFile<<"3650"<<endl;
					outFile.close();
					cout<<"\t----------------------------------END----------------------------------"<<endl;
					goto start;
				}
			break;
			case 2:
				{
					system("cls");
					goto start;	
				}
			break;
			case 3:
				{
					goto end;
				}
			break;
			default:
				{
					cout<<endl<<"\t-----------------------------Invalid Input-----------------------------";
					system("cls");
					header();
					goto ret1;
				}
			break;
		}
	}
	else
	{
						
				ret2:	
						inFile.open(("ID/"+id_no+" 0.txt").c_str());
						string file;
						
						while(getline(inFile,file))
						{
							cout<<file<<endl;
						}
						
						cout<<"\t\t[1] - Personal Information"<<endl;
						cout<<"\t\t[2] - School Data"<<endl;
						cout<<"\t\t[3] - Account"<<endl;
						cout<<"\t\t[4] - Re-Enter ID Number"<<endl;
						cout<<"\t-----------------------------------------------------------------------"<<endl;
						cout<<"\tEnter Choice		:	 ";
						cin>>chc;
						cout<<"\t-----------------------------------------------------------------------"<<endl;
							switch(chc)
							{
								case 1:
									{
								ret3:
										ofstream outFile;
										ifstream inFile;									
										
										inFile.open(("ID/"+id_no+" 1.txt").c_str());
										string file;
						
										while(getline(inFile,file))
										{
										cout<<file<<endl;
										}
										cout<<"\t\t\t[1] - Re-Enter ID Number"<<endl;
										cout<<"\t\t\t[2] - Return"<<endl;
										cout<<"\t-----------------------------------------------------------------------"<<endl;
										cout<<"\tEnter Choice		:	 ";
										cin>>chc;
										cout<<"\t-----------------------------------------------------------------------"<<endl;
										if(chc==1)
											{
												goto start;
											}
										else if(chc==2)
											{
												system("cls");
												header();
												goto ret2;
											}
										else
											{
												cout<<endl<<"\t-----------------------------Invalid Input-----------------------------";
												system("cls");
												header();
												goto ret3;
											}
									}
								break;
								case 2:
									{
										ofstream outFile;
										ifstream inFile;
														
										inFile.open(("ID/"+id_no+" 2.txt").c_str());
										string file;
						
										while(getline(inFile,file))
										{
										cout<<file<<endl;
										}
									}
									goto ret3;									
								break;
								case 3:
									{
								ret4:	
										ofstream outFile;
										ifstream inFile;
										
										inFile.open(("ID/"+id_no+" 3.txt").c_str());
										inFile>>tuition;
										inFile>>paid;
										inFile>>bal;
										inFile.close();
										
										cout<<"\t\tAccount"<<endl;
										cout<<"\t-----------------------------------------------------------------------"<<endl;
										cout<<"\tTuition			:	"<<tuition<<endl;
										cout<<"\tTuition Paid		:	"<<paid<<endl;
										cout<<"\tBalance			:	"<<bal<<endl;	
										cout<<"\tAccount Status		:	";
											if(paid>1000)
											{
												cout<<"Officially Enrolled"<<endl;
											}
											else
											{
												cout<<"Unenrolled"<<endl;
											}
										cout<<"\t-----------------------------------------------------------------------"<<endl;														
								ret6:
										cout<<"\t\t\t[1] - Pay Tuition"<<endl;
										cout<<"\t\t\t[2] - Re-Enter ID Number"<<endl;
										cout<<"\t\t\t[3] - Return"<<endl;
										cout<<"\t-----------------------------------------------------------------------"<<endl;
										cout<<"\tEnter Choice		:	";
										cin>>chc;
										cout<<"\t-----------------------------------------------------------------------"<<endl;
										if(chc==1)
										{
										ret5:
											ofstream outFile;
											ifstream inFile;
											
											cout<<"\tAmount			:	";
											cin>>amount;
											
											if(paid<=bal&&bal>=amount)
											{
												system("cls");
												paid=amount+paid;
												bal>=0;
												bal=tuition-paid;
												
												outFile.open(("ID/"+id_no+" 3.txt").c_str());
												outFile<<tuition<< endl;
												outFile<<paid<<endl;
												outFile<<bal<<endl;
												outFile.close();
												header();
												goto ret2;
											}
											else
											{
												system("cls");
												header();
												cout<<endl<<"\t-----------------------------Invalid Input-----------------------------"<<endl;
												cout<<"\tBalance			:	"<<bal<<endl;	
												cout<<"\t-----------------------------------------------------------------------"<<endl;
												goto ret5;
											}
								
										}
										else if(chc==2)
										{
											goto start;
										}
										else if(chc==3)
										{
											system("cls");
											header();
											goto ret2;
										}
										else
										{
											cout<<endl<<"\t-----------------------------Invalid Input-----------------------------";
											system("cls");
											header();
											goto ret6;
										}
										
									}
								break;
								case 4:
									{
										system("cls");
										goto start;
									}
								break;
								default:
									{
										cout<<endl<<"\t-----------------------------Invalid Input-----------------------------";
										goto ret2;
									}
								break;
							}
					}
end:
cout<<endl<<"\t----------------------------------END----------------------------------"<<endl;
return 0;
}


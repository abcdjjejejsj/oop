// Concepts Of First Unit
 #include<iostream>
 #include<cstring>
 using namespace std;
 int i,n;
 class PIS
 {
 static int cnt;
 int ht,wt,pn;
 char *name,*add,*dln;
 public:
 PIS()
 {
 ht=165;
 wt=60;
 pn=100;
 name= new char;
 add= new char;
 dln=new char;
 strcpy(name, "VVV");
 //strcpy(name,"VVV");
 strcpy(add,"Nashik");
 strcpy(dln,"dl1000");
 }
 static void discnt()
 {
 cout<<"\n total Record="<<cnt;
 }
 /*PIS(int h,int w)
 {
 ht=h;
 wt=w;
 }
 */
 //s2(s)
 /*PIS(PIS &ss)
 {
 ss.ht=ht;
 ss.wt=wt;
 }
 */
void Update();
 friend void search();
 void Delete();
 void accept()
 {
 cnt++;
 cout<<"\n Enter the name ,add,dln,ht,wt,pn";
 cin>>name>>add>>dln>>ht>>wt>>pn;
 }
 void display();
 ~PIS()
 {
 delete name;
 delete dln;
 delete add;
 cout<<"\n PIS";
 }
 }s[100];  //end of class

 int PIS::cnt;
 void search()
 {
 int pp,f=0;
 cout<<"\n enter the Pn";
 cin>>pp;
 for(i=0;i<n;i++)
 {
 if(pp==s[i].pn)
 {
 f=1;
 cout<<"\n Record found";
 break;
 }
 }
 if(f==0)
 cout<<"\nRecord not found";
 } 
void PIS::Update()
 {
 int pp,f=0;
 cout<<"\n enter the Pn modify";
 cin>>pp;
 for(i=0;i<n;i++)
 {
 if(pp==s[i].pn)
{
 f=1;
 cout<<"\n Record found";
 cout<<"\n Enter the new details";
 s[i].accept();
 break;
 }
 }
 if(f==0)
 cout<<"\nRecord not found";
 } 
void PIS::Delete()
 {
 int pp,f=0;
 cout<<"\n enter the Pn delete";
 cin>>pp;
 for(i=0;i<n;i++)
 {
 if(pp==s[i].pn)
 {
 f=1;
 cout<<"\n Record found";
 do
 {
 s[i]=s[i+1];
 i++;
 }while(i<n-1);
 /*
 s[0]  1   a
 s[1]  2  b
 s[2] 3  c
 s[3] 4   d
 */
 n--;
 break;
 }
 }
 if(f==0)
 cout<<"\nRecord not found";
 } 
inline void PIS:: display()
{
 cout<<"\n"<<name<<"\t"<<add<<"\t"<<dln<<"\t"<<ht<<"\t"<<wt<<"\t"<<pn;
 }
 int main()
 {
 int ch;
 cout<<"\n Enter the n";
 cin>>n;
 do
 {
 cout<<"\n 1.accept\n2.Dsiplay\n3.Search\n Update\n5.Delete\n6.Display count";
 cout<<"\n Enter ur choice";
 cin>>ch;
 switch(ch)
 {
 case 1:
 for(i=0;i<n;i++)
 s[i].accept();
 break;
 case  2:
 for(i=0;i<100;i++)
 s[i].display();
 break;
 case 3:
 search();
 break;
 case 4:
 s[i].Update();
 break;
 case 5:
 s[i].Delete();
 break;
 case 6:
 PIS::discnt();
 break;
 }}while(ch!=0);
 return 0;
 }

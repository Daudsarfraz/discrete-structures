#include<iostream>
using namespace std;

int main(){
	string prepositionType,p;

    cout<<"Enter preposition type: ";
    cin>>prepositionType;
    cout<<"Enter preposition: ";
    cin>>p;
    
    if(prepositionType=="implication"){
		if(p[0]!='~' && p[3]!='~'){
			cout<<"converse: "<<p[3]<<"->"<<p[0]<<endl;
			cout<<"inverse: "<<"~"<<p[0]<<"->"<<"~"<<p[3]<<endl;
			cout<<"contrapositive: "<<"~"<<p[3]<<"->"<<"~"<<p[0]<<endl;
		}else if(p[0]=='~' && p[4]!='~'){
			cout<<"converse: "<<p[4]<<"->"<<"~"<<p[1]<<endl;
			cout<<"inverse: "<<p[1]<<"->"<<"~"<<p[4]<<endl;
			cout<<"contrapositive: "<<"~"<<p[4]<<"->"<<p[1]<<endl;
		}else if(p[0]!='~' && p[3]=='~'){
			cout<<"converse: "<<"~"<<p[4]<<"->"<<p[0]<<endl;
			cout<<"inverse: "<<"~"<<p[0]<<"->"<<p[4]<<endl;
			cout<<"contrapositive: "<<p[4]<<"->"<<"~"<<p[0]<<endl;
		}else if(p[0]=='~' && p[4]=='~'){
			cout<<"converse: "<<"~"<<p[5]<<"->"<<"~"<<p[1]<<endl;
			cout<<"inverse: "<<p[1]<<"->"<<p[5]<<endl;
			cout<<"contrapositive: "<<p[5]<<"->"<<p[1]<<endl;
		}
	}
	else if(prepositionType=="converse")
	{
		if(p[0]!='~' && p[3]!='~'){
			cout<<"implication: "<<p[3]<<"->"<<p[0]<<endl;
			cout<<"inverse: "<<"~"<<p[3]<<"->"<<"~"<<p[0]<<endl;
			cout<<"contrapositive: "<<"~"<<p[0]<<"->"<<"~"<<p[3]<<endl;
		}else if(p[0]=='~' && p[4]!='~'){
			cout<<"implication: "<<p[4]<<"->"<<"~"<<p[1]<<endl;
			cout<<"inverse: "<<p[1]<<"->"<<"~"<<p[4]<<endl;
			cout<<"contrapositive: "<<"~"<<p[4]<<"->"<<p[1]<<endl;
		}else if(p[0]!='~' && p[3]=='~'){
			cout<<"implication: "<<"~"<<p[4]<<"->"<<p[0]<<endl;
			cout<<"inverse: "<<p[4]<<"->"<<"~"<<p[0]<<endl;
			cout<<"contrapositive: "<<"~"<<p[0]<<"->"<<p[4]<<endl;
		}else if(p[0]=='~' && p[4]=='~'){
			cout<<"implication: "<<"~"<<p[5]<<"->"<<"~"<<p[1]<<endl;
			cout<<"inverse: "<<p[5]<<"->"<<p[1]<<endl;
			cout<<"contrapositive: "<<p[1]<<"->"<<p[5]<<endl;
		}
	}
	else if(prepositionType=="inverse")
	{
		if(p[0]!='~' && p[3]!='~'){
			cout<<"implication: "<<"~"<<p[0]<<"->"<<"~"<<p[3]<<endl;
			cout<<"converse: "<<"~"<<p[3]<<"->"<<"~"<<p[0]<<endl;
			cout<<"contrapositive: "<<p[3]<<"->"<<p[0]<<endl;
		}else if(p[0]=='~' && p[4]!='~'){
			cout<<"implication: "<<p[1]<<"->"<<"~"<<p[4]<<endl;
			cout<<"converse: "<<"~"<<p[4]<<"->"<<p[1]<<endl;
			cout<<"contrapositive: "<<p[4]<<"->"<<"~"<<p[1]<<endl;
		}else if(p[0]!='~' && p[3]=='~'){
			cout<<"implication: "<<"~"<<p[0]<<"->"<<p[4]<<endl;
			cout<<"converse: "<<p[4]<<"->"<<"~"<<p[0]<<endl;
			cout<<"contrapositive: "<<"~"<<p[4]<<"->"<<p[0]<<endl;
		}else if(p[0]=='~' && p[4]=='~'){
			cout<<"implication: "<<p[1]<<"->"<<p[5]<<endl;
			cout<<"converse: "<<p[5]<<"->"<<p[1]<<endl;
			cout<<"contrapositive: "<<"~"<<p[5]<<"->"<<"~"<<p[1]<<endl;
		}
	}
	else if(prepositionType=="contrapositive")
	{
		if(p[0]!='~' && p[3]!='~'){
			cout<<"implication: "<<"~"<<p[3]<<"->"<<"~"<<p[0]<<endl;
			cout<<"converse: "<<"~"<<p[0]<<"->"<<"~"<<p[3]<<endl;
			cout<<"inverse: "<<p[3]<<"->"<<p[0]<<endl;
		}else if(p[0]=='~' && p[4]!='~'){
			cout<<"implication: "<<"~"<<p[4]<<"->"<<p[1]<<endl;
			cout<<"converse: "<<p[1]<<"->"<<"~"<<p[4]<<endl;
			cout<<"inverse: "<<p[4]<<"->"<<"~"<<p[1]<<endl;
		}else if(p[0]!='~' && p[3]=='~'){
			cout<<"implication: "<<p[4]<<"->"<<"~"<<p[0]<<endl;
			cout<<"converse: "<<"~"<<p[0]<<"->"<<p[4]<<endl;
			cout<<"inverse: "<<"~"<<p[4]<<"->"<<p[0]<<endl;
		}else if(p[0]=='~' && p[4]=='~'){
			cout<<"implication: "<<p[5]<<"->"<<p[1]<<endl;
			cout<<"converse: "<<p[1]<<"->"<<p[5]<<endl;
			cout<<"inverse: "<<"~"<<p[5]<<"->"<<"~"<<p[1]<<endl;
		}
	}
    return 0;
}

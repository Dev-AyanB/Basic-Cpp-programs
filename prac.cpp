#include<iostream>
#include<stack>

using namespace std;

bool isoperator(char c){
	if( c=='*'||c=='+'||c=='-'||c=='/'||c=='^'){
		return true;
	}
	else{
		return false;
	}
	
}

int precedance(char c){
	
	if(c=='^'){
		return 3;
	}
	else if(c=='*'||c=='/'){
		return 2;
	}
	else if(c=='+'|| c=='-'){
		return 1;
	}
	else{
		return -1;
	}
}

string convert(stack <char> st, string infix){
	
	string postfix;
	
	for(int i=0;i<=infix.length();i++){
		if((infix[i]>='a'&& infix[i]<='z') || (infix[i]>='A' && infix[i]<='Z')){
		
			postfix+=infix[i];
		}
		else if(infix[i]=='('){
			
			st.push(infix[i]);
			
		}
		else if(infix[i]==')'){
			
			while((st.top()!='(' )&& (!st.empty())){
				
				postfix+=st.top();
				st.pop();		
			}
			if(st.top()=='('){
				st.pop();
			}
		}
		else if(isoperator(infix[i])){
			 if(st.empty()){
			 	
			 	st.push(infix[i]);
			 }
			 else
			 {
			 	
			 	if(precedance(infix[i])>precedance(st.top())){
			 		st.push(infix[i]);
				 }
				 else if(precedance(infix[i])==precedance(st.top())){
				 	st.push(infix[i]);
				 }
				 else
				 {
				 	while((!st.empty())&&(precedance(infix[i])<precedance(st.top())))
					 {
				 		postfix=st.top();
				 		st.pop();	
					 }
					 st.push(infix[i]);
				 }
			 	
			 }
		}
	}
	while(!st.empty()){
		postfix=st.top();
		st.pop();
	}
	
	return postfix;
	
}


int main(){
	
	string exp,postfix;
	stack <char> s;
	
	cout<<"Enter the expression : ";
	cin>>exp;
	
	postfix=convert(s,exp);
	cout<<"\nPOSTFIX EXPRESSION : "<<postfix;
	
	
	
}
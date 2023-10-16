stack<int> s;
    vector<int> ans;

    if(myStack.empty()){
        s.push(x);
        return s;
    }
    else{
        while(!myStack.empty()){
            ans.push_back(myStack.top());
            myStack.pop();
        }
        s.push(x);
        for(int i=ans.size()-1; i>=0; i--){
            s.push(ans[i]);
        }
    }
    return s;
//Pairs
void explainPair(){
    pair<int,int> p ={1,3};
    cout<<p.first<<" "<<p.second;
    pair<int,pair<int,int>> p ={1,{3,4}};
    cout<p.first <<" " <<p.second.second<<" "<<p.second.first;
    pair<int,int> arr[]={{1,2},{2,5},{5,2}};
    cout<<arr[1].second;
}
//Vector
void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector<pair<int,int>>vec;
    vec.push_back({1,2});
    vec.emplace_back(1,2);
    vector<int> v(5,100);
    vector<int> v(5);
    vector<int> v1(5,20);
    vector<int> v2(v1);

    vector<int>::iterator it=v.begin();

    it++;
    cout<<*(it)<<" ";

    it=it+2;
    cout<<*(it)<<" ";
    vector<int>::iterator it=v.end();
    vector<int>::iterator it=v.rend();//Never asked
    vector<int>::iterator it=v.rbegin();

    cout<<v[0]<<" "<<v.at(0);
    cout<<v.back()<<" ";

    for(vector<int::iterator it=v.begin();it != v.end();it++){
        cout<<*(it)<<" ";

        
    }
    for(auto it: v){
        cout<<it<<" ";
    }
    //{10,20,12,23}
    v.erase(v.begin()+1);
    //{10,20,12,23,35}
    v.erase(v.begin()+2;v.begin()+4);// //{10,20,35}{start,end}

    //Insert Function
    vector<int>v(2,100);//{100,100}
    v.insert(v.begin(),300);//{300,100,100}
    v.insert(v.begin()+1,2,10);//{300,10,10,100,100}

    vector<int> copy(2,50);//{50,50}
    v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}//Not Requiredmuch
    
    //{10,20}
    cout<<v.size(); //2

    //{10,20}
    v.pop_back(); //{10}

    //v1 ->{10,20}
    //v2 ->{30,40}
    v1.swap(v2);//v1->{30,40} v2->{10,20}
    v.clear();//erases the entire vector
    cout<<v.empty();
}

void explainList(){
    list<int> ls;
    ls.push_back(2);//{2}
    ls.emplace_back(4);//{2,4}

    ls.push_front(5);//{5,2,4}
    ls.emplace_front();//{2,4}

    //rest functions same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap

}

void explainDeque(){
    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2); //{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front;//{3,4,1,2}

    dq.pop_back(); //{3,4,1}
    dq.pop_front();//{4,1}
    dq.back();
    dq.front();

    //rest function same as vector
    //begin,end,rbegin,rend,clear,insert,size,swap
}
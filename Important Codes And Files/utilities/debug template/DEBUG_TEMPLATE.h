void err(istream_iterator<string> it)
{
    cout<<endl;
}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args)
{
    cout << *it << " = " << a << " ";
    err(++it, args...);
}

template<class T1, class T2>
ostream &operator <<(ostream &os, pair<T1,T2>&p)
{
    os<<"{"<<p.first<<", "<<p.second<<"} ";
    return os;
}
template <class T>
ostream &operator <<(ostream &os, vector<T>&v)
{
    os<<"[ ";
    for(int i=0; i<v.size(); i++)
    {
        os<<v[i]<<" " ;
    }
    os<<" ]";
    return os;
}
template <class T>
ostream &operator <<(ostream &os, deque<T>&v)
{
    os<<"[ ";
    for(int i=0; i<v.size(); i++)
    {
        os<<v[i]<<" " ;
    }
    os<<" ]";
    return os;
}
template <class T>
ostream &operator <<(ostream &os, set<T>&v)
{
    os<<"[ ";
    for(T i:v)
    {
        os<<i<<" ";
    }
    os<<" ]";
    return os;
}
template <class T>
ostream &operator <<(ostream &os, multiset<T>&v)
{
    os<<"[ ";
    for(T i:v)
    {
        os<<i<<" ";
    }
    os<<" ]";
    return os;
}
template <class T1, class T2>
ostream &operator <<(ostream &os, map<T1,T2>&v)
{
    for(auto i:v)
    {
        os<<"Key : "<<i.first<<" , Value : "<<i.second<<endl;
    }
    return os;
}
template <class T1, class T2>
ostream &operator <<(ostream &os, unordered_map<T1,T2>&v)
{
    for(auto i:v)
    {
        os<<"Key : "<<i.first<<" , Value : "<<i.second<<endl;
    }
    return os;
}

#define HERE cout<<"here - "<<__LINE__<<"\n";
#define debug(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

//__int128

//#include <ext/pb_ds/assoc_container.hpp>
//using namespace __gnu_pbds;
//typedef tree<int,null_type,less<int >,rb_tree_tag,tree_order_statistics_node_update>indexed_set;

//order_of_key
//find_by_order

//this memsets by 2e9
//memset(x,127,sizeof x);

//this memsets by 1e9
//memset(x,63,sizeof x);



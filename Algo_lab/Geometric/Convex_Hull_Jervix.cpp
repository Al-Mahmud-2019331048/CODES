#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
};

int orientation(Point p,Point q,Point r){
    int area=(q.y-p.y)*(r.x-q.x) - (q.x-p.x)*(r.y-q.y);
    if(area==0) return 0;  //colliner

    return (area>0)? 1:2;  //1-clockwise, 2-counterclockwise
}


//O(n*n)
void convexHull(Point points[],int n){
    if(n<3) return;

    vector<Point> Hull;  //result vector

    int p,l=0,q;
    
    //find the leftmost point
    for(int i=0;i<n;i++){
        if(points[i].x < points[l].x)
            l=i;
    }

    p=l;

    do{
        Hull.push_back(points[p]);

        q=(p+1)%n;

        //if a point is more counterclockwise than q, set q=that point
        for(int i=0;i<n;i++){
            if(orientation(points[p],points[i],points[q])==2)
                q=i;
        }

        // Now q is the most counterclockwise with respect to p
        // Set p as q for next iteration, so that q is added to result 'hull'
        p=q;
    } while(p!=l);

    //printing result
    cout<<"Points int the Hull are :"<<endl;
    for(auto p: Hull)
        cout<<p.x<<" "<<p.y<<endl;
}


int main()
{
    Point points[]={{0, 3}, {2, 2}, {1, 1}, {2, 1},
                      {3, 0}, {0, 0}, {3, 3}};

    int n = sizeof(points)/sizeof(points[0]);
    convexHull(points, n);

    return 0;
}
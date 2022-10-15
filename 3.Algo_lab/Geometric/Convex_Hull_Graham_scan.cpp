#include<bits/stdc++.h>
using namespace std;

struct Point
{
    int x,y;
};

Point p0;

Point nextToTop(stack<Point>&st){
    Point p=st.top();
    st.pop();
    Point ret=st.top();
    st.push(p);
    return ret;
}

int distSq(Point p1,Point p2){
    return (p1.x-p2.x)*(p1.x-p2.x)-(p1.y-p2.y)*(p1.y-p2.y);
}

int orientation(Point p,Point q,Point r){
    int area=(q.y-p.y)*(r.x-q.x) - (q.x-p.x)*(r.y-q.y);
    if(area==0) return 0;  //colliner

    return (area>0)? 1:2;  //1-clockwise, 2-counterclockwise
}

int compare(const void *vp1,const void *vp2){
    Point *p1=(Point *)vp1;
    Point *p2=(Point *)vp2;

    int o=orientation(p0,*p1,*p2);
    if(o==0)
        return (distSq(p0,*p2) >= distSq(p0,*p1)) ? -1:1;
    return (o==2)?-1:1;
}


//O(n*nlogn)
void convexHull(Point points[],int n){

    // Find the bottommost point
   int ymin=points[0].y,min=0;
   for(int i=1;i<n;i++){
        int y=points[i].y;
        //Pick the bottom-most or choose the left most point in case of tie
        if(y<ymin || (ymin==y and points[i].x<points[min].x))
            ymin=points[i].y,min=i;
   }
   swap(points[0],points[min]);

    p0=points[0];
    qsort(&points[1],n-1,sizeof(Point),compare);

    int m=1;
    for(int i=0;i<n;i++){
        while(i<n-1 and orientation(p0,points[i],points[i+1])==0)
            i++;
        points[m]=points[i];
        m++;
    }

    if(m<3) return;

    stack<Point>st;

    st.push(points[0]);
    st.push(points[1]);
    st.push(points[2]);

    for(int i=3;i<m;i++){
        while(st.size()>1 and orientation(nextToTop(st),st.top(),points[i])!=2)
            st.pop();
        st.push(points[i]);
    }

    while(!st.empty()){
        Point p=st.top();
        cout<<p.x<<","<<p.y<<endl;
        st.pop();
    }
   
}


int main()
{
    Point points[]={{0, 3}, {2, 2}, {1, 1}, {2, 1},
                      {3, 0}, {0, 0}, {3, 3}};

    int n = sizeof(points)/sizeof(points[0]);
    convexHull(points, n);

    return 0;
}
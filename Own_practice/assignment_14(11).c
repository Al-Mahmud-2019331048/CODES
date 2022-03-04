#include<stdio.h>
struct info{
int house_no;int road_no;char street_name[45];char village[90];char upzilla[90];
};
struct address{
struct info data;char police_station[38];int post_office;char district[20];char country[30];
};
struct joining_date{
int day;char month[30];int year;
};
struct student {
 int reg;char name[90];char session[30];struct address k;int age;int weight;int height;char result[5];int cgpa;
}s1,*pv=&s1;
struct teacher{int id;char name[90]; char designation[90];char dept_name[56];struct address k;int age; int weight;int height;int salary;struct joining_date
date;}t1,*pc=&t1;
struct officer{
int id;char name[90];char designation[90];char office_name[20];struct address k;int age;int weight;int height;int salary;struct joining_date date;
}f1,*pf=&f1;
struct staff{
int id;char name[90];char designation[68];char office_name[89];struct address k;int age;int weight;int height;int  salary;struct joining_date date;
}g1,*pg=&g1;
int main(){
int m,i,x,y;
printf("Enter the Query number: ");
scanf("%d",&m);
  for(i=1;i<=m;i++)
    //printf("Enter x & y: ");
    {
        scanf("%d%d",&x,&y);
        if(x==1){
         s1.reg=y;
scanf("%s %s %s",s1.session,s1.name,s1.k.district);scanf("%d",&s1.age);scanf("%d",&s1.weight);scanf("%d",&s1.height);scanf("%s",s1.result);scanf("%d",&s1.cgpa);scanf("%d",&s1.k.post_office);
scanf("%d  %d  %s  %s %s %s",&pv->k.data.house_no,&pv->k.data.road_no,pv->k.data.village,pv->k.data.upzilla,s1.k.country,s1.k.police_station);
 printf("reg=%d name=%s session=%s result=%s cgpa=%d age=%d weight=%d height=%d post_office=%d  district=%s\n",s1.reg,s1.name,s1.session,s1.result,s1.cgpa,s1.age,s1.weight,s1.height,s1.k.post_office,s1.k.district);
 printf("country=%s police_station=%s house_no=%d road_no=%d village=%s upzilla=%s",s1.k.country,s1.k.police_station,pv->k.data.house_no,pv->k.data.road_no,pv->k.data.village,pv->k.data.upzilla);


}
 else if(x==2){
t1.id=y;
scanf("%s%s%s%d%s%s",t1.name,t1.designation,t1.dept_name,&t1.salary,t1.k.district,t1.k.country);scanf("%d",&t1.age);scanf("%d",&t1.weight);scanf("%d",&t1.height);scanf("%d",&t1.k.post_office);
scanf("%s%d%d%s%s%d%d%s",t1.k.police_station,&pc->k.data.house_no,&pc->k.data.road_no,pc->k.data.village,pc->k.data.upzilla,&pc->date.day,&pc->date.year,pc->date.month);
 printf("id=%d name=%s designation=%s dept_name=%s salary=%d age=%d weight=%d height=%d post_office=%d  district=%s\n",t1.id,t1.name,t1.designation,t1.dept_name,t1.salary,t1.age,t1.weight,t1.height,t1.k.post_office,t1.k.district);
 printf("country=%s police_station=%s house_no=%d road_no=%d village=%s upzilla=%s day=%d month=%s year=%d",t1.k.country,t1.k.police_station,pc->k.data.house_no,pc->k.data.road_no,pc->k.data.village,pc->k.data.upzilla,pc->date.day,pc->date.month,pc->date.year);
}
else if(x==3){
f1.id=y;
scanf("%s%s%s%d",f1.name,f1.designation,f1.office_name,&f1.salary);scanf("%d",&f1.age);scanf("%d",&f1.weight);scanf("%d",&f1.height);scanf("%d%s%s%s",&f1.k.post_office,f1.k.district,f1.k.country,f1.k.police_station);
scanf("%d%d%s%s%d%d%s%",&pf->k.data.house_no,&pf->k.data.road_no,pf->k.data.village,pf->k.data.upzilla,&pf->date.day,&pf->date.year,pf->date.month);
 printf("id=%d name=%s designation=%s office_name=%s salary=%d age=%d weight=%d height=%d post_office=%d  district=%s\n",f1.id,f1.name,f1.designation,f1.office_name,f1.salary,f1.age,f1.weight,f1.height,f1.k.post_office,f1.k.district);
 printf("country=%s police_station=%s house_no=%d road_no=%d village=%s upzilla=%s day=%d month=%s year=%d",f1.k.country,f1.k.police_station,pf->k.data.house_no,pf->k.data.road_no,pf->k.data.village,pf->k.data.upzilla,pf->date.day,pf->date.month,
        pf->date.year);


}else if(x==4){
   g1.id=y;
scanf("%s%s%s%d",g1.name,g1.designation,g1.office_name,&g1.salary);scanf("%d",&g1.age);scanf("%d",&g1.weight);scanf("%d",&g1.height);scanf("%d%s%s%s",&g1.k.post_office,g1.k.district,g1.k.country,g1.k.police_station);
scanf("%d%d%s%s%d%d%s",&pg->k.data.house_no,&pg->k.data.road_no,pg->k.data.village,pg->k.data.upzilla,&pg->date.day,&pg->date.year,pg->date.month);
 printf("id=%d name=%s designation=%s office_name=%s salary=%d age=%d weight=%d height=%d post_office=%d  district=%s\n",g1.id,g1.name,g1.designation,g1.office_name,g1.salary,g1.age,g1.weight,g1.height,g1.k.post_office,g1.k.district);
 printf("country=%s police_station=%s house_no=%d road_no=%d village=%s upzilla=%s day=%d month=%s year=%d",g1.k.country,g1.k.police_station,pg->k.data.house_no,pg->k.data.road_no,pg->k.data.village,pg->k.data.upzilla,pg->date.day,pg->date.month,pg->date.year);

    }
    else
        break;
    }
    return 0;
}

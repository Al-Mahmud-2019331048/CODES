public class DataType {
    public static void main(String[] args){
        boolean flag=true;  //dynamic initialization
        char ch='x';
        short s=100;
        int num=10;
        long l=10000000;
        float f=10.11f;
        double d=10.5;
        String name="Abdulla Al Mahmud";
        System.out.println("flag="+flag);  //+ operator(, in C)
        System.out.println("ch="+ch);
        System.out.println("s="+s);
        System.out.println("num="+num);
        System.out.println("l="+l);
        System.out.println("f="+f);
        System.out.println("d="+d);
        System.out.println("name="+name);



        System.out.printf("boolean flag=%b\n",flag);  //formate specifier
        System.out.printf("char ch=%c\n",ch);
        System.out.printf("short s=%d\n",s);  //remember %d
        System.out.printf("int num=%d\n",num);
        System.out.printf("long l=%d",l);  //remember %d
        System.out.printf("float f=%.2f\n",f);
        System.out.printf("double d=%f\n",d);  //remember %f not %lf





    }
}
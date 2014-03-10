import java.util.Scanner;
public class Main{

    static boolean tri(long balls){
	double dbl =(Math.sqrt(balls*8+1)-1)/2;
	return (dbl==Math.round(dbl));
    }

    static boolean square(long balls){
	double x=Math.sqrt(balls);
	if(Math.round(x)==x)
	    return true;
	else
	    return false;
    }

    static public int count(long a,long b){
	long cnt=0;
	long sqr_n=0;
	long sqr=-1;
	long tri=-1;
	long tri_n=0;
	for(long i=a;i<b&&(sqr==-1||tri==-1);i++){
	    if(square(i)&&sqr==-1){
		sqr=i;
		sqr_n=(int)Math.sqrt(sqr);
	    }
	    if(Main.tri(i)&&tri==-1){
		tri=i;
		tri_n=(int)(Math.sqrt(i*8+1)-1)/2;
	    }
	}
	if(sqr==-1||tri==-1) return 0;
	while(tri<b){
	    while(tri<sqr-1){
		tri_n++;
		tri+=tri_n;
	    }
	    if(tri<b && tri==sqr-1 && sqr<b) cnt++;
	    sqr_n++;
	    sqr=(sqr_n)*(sqr_n);
	}
	return (int)cnt;
    }

    static public void main(String[] args){
	Scanner s=new Scanner(System.in);
	int cas=0;
	while(true){
	    cas++;
	    long a=s.nextLong();
	    long b=s.nextLong();
	    long score=count(a,b);
	    if(a==0&&b==0)
		break;
	    System.out.println("Case "+cas+": "+score);
	}
    }
}
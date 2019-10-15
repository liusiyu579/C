
public class Test2 {
	public static int fac(int num) {
		int ret=1;
		for(int i=1;i<=num;i++) {
			ret*=i;
		}
		return ret;
	}
	public static int facSum(int num) {
		int sum=0;
		for(int i=1;i<=num;i++) {
			sum+=fac(i);
		}
		return sum;
	}
	public static void main(String[] args) {
		int num=5;
		System.out.println(facSum(num));
	
	}
	
	public static void main1(String[] args) {
		int num=1;
		int sum=0;
		int ret=1;
		int i=0;
		for(num=1;num<=5;num++) {
			ret=1;
			for(i=1;i<=num;i++) {
				ret*=i;
			}
			sum+=ret;
		}
		System.out.println(sum);
	}
}
import java.util.Scanner;
import java.util.Random;
public class Test1 {
	public static void main (String[] args) {
		Scanner scan=new Scanner(System.in);
		Random random=new Random();
		int randNum=random.nextInt(100)+1;
		int num=0;
		while(true) {
			System.out.print("请输入一个数字:");
			num=scan.nextInt();
			if(num>randNum) {
				System.out.println("猜大了");
			}
			else if(num==randNum) {
				System.out.println("猜对了");
				break;
			}
			else {
				System.out.println("猜小了");
			}
		}
    }
}
	
	
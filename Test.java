

public class Test {
	/*
	//输出一个整数的每一位.
	public static void main 2.13 (String[] args) {
		int n=7;
		int i=0;
		for(i=0;i<32;i++) {
			System.out.print((n>>i)&1);
		}
	}
	
	
	//获取一个数二进制序列中所有的偶数位和奇数位， 分别输出二进制序列
	public static void main 2.12 (String[] args) {
		int n=7;
		int i=0;
		int j=0;
		for(i=0;i<32;i+=2) {
			j=(n>>i)&1;
			System.out.print(j);
		}
			System.out.println();
		for(i=1;i<=32;i+=2) {
			j=(n>>i)&1;
			System.out.print(j);
		}
	}
	
	
	
	//写一个函数返回参数二进制中 1 的个数
	public static void main 2.11 (String[] args) {
		int n=7;
		int count=0;
		int i=0;
		for(i=0;i<32;i++) {
			if(((n>>i)&1)==1) {
				count++;
			}
		}
		System.out.println(count);
		
	}
	
	
	//求出0～999之间的所有“水仙花数”并输出。(“水仙花数”是指一个三位数，
	//其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。
	public static void main 2.9 (String[] args) {
		int n=0;
		int i=0;
		int j=0;
		int k=0;
		for(n=0;n<=999;n++) {
			i=n/100;
			j=n/10-i*10;
			k=n%10;
			if(n==i*i*i+j*j*j+k*k*k) {
				System.out.println(n+"是水仙花数");
			}
		}
	}
	
	
	
	
	//编写程序数一下 1到 100 的所有整数中出现多少个数字9
		public static void main 2.8 (String[] args) {
			int i=1;
			int count=0;
			int j=0;
			for(i=1;i<=100;i++) {
					j=i%10;
					if(j==9) {
						count++;
						if(i/10==9) {
							count++;
							break;
						}
					}
					if(i/10==9) {
							count++;
						}
				}
				System.out.println(count);
		}
		
	
	
	
	
	//计算1/1-1/2+1/3-1/4+1/5 …… + 1/99 - 1/100 的值
			public static void main 2.7 (String[] args) {
				int n=1;
				double sum=0;
				int flg=1;
				for(n=1;n<=100;n++) {
					sum=sum+flg*1.0/n;
					flg=-flg;
				}
				System.out.println(sum);
			}
	
		
		//求两个正整数的最大公约数
			public static void main 2.6 (String[] args) {
				int n=64;
				int k=24;
				int i=0;
				i=n%k;
				if(i!=0) {
					n=k;
					k=i;
					i=n/k;
				}
				System.out.println(k);
			}
	
		//输出乘法口诀表
		public static void main 2.5 (String[] args) {
			int i=1;
			int j=1;
			int sum=0;
			for(i=1;i<=9;i++) {
				for(j=1;j<=i;j++) {
					sum=j*i;
					System.out.printf("%d*%d=%d  ",j,i,sum);
				}
				System.out.println();
			}
		}
	
		//输出 1000 - 2000 之间所有的闰年
		public static void main 2.4 (String[] args) {
			int n=1000;
			for(n=1000;n<=2000;n++) {
				if(((n%4)==0)&&((n%100)!=0)||((n%400)==0)) {
					System.out.println(n+"是闰年");
				}
			}
		}
		
		
		// 打印 1 - 100 之间所有的素数
		public static void main 2.3 (String[] args) {
			int n=100;
			int i=2;
			for(n=100;n<=200;n++) {
				for(i=2;i<=n/2;i++) {
					if(n%i==0) {
						break;
					}
					else {
						System.out.println(n+"是素数");
						break;
					}
				}
			}
		}
	
	
		//判定一个数字是否是素数
		public static void main 2.2 (String[] args) {
			int n=102;
			int i=2;
			for(i=2;i<n/2;i++) {   //n^（1/2）怎么表示
				if(n%i==0) {
					System.out.println(n+"不是素数");
					break;
				}
				else {
					System.out.println(n+"是素数");
					break;
				}
			}
		}
	
		//根据年龄, 来打印出当前年龄的人是少年(低于18), 
		//青年(19-28), 中年(29-55), 老年(56以上)
		public static void main 2.1 (String[] args) {
			int n=46;
			if(n<18) {
				System.out.println("是少年");
			}
			else if(n<28) {
				System.out.println("是青年");
			}
			else if(n<55) {
				System.out.println("是中年");
			}
			else {
				System.out.println("是老年");
			}
		}
	
		// 给定三个 int 变量, 求其中的最大值和最小值
	    public static void main 1.2 (String[] args) {
			int a=20;
			int b=10;
			int c=30;
			int tmp=0;
			if(a<b) {
				tmp=b;
				b=a;
				a=tmp;
			}
			if(a<c) {
				tmp=c;
				c=a;
				a=tmp;
			}
			if(b<c) {
				tmp=c;
				c=b;
				b=tmp;
			}
			System.out.println(a);
			System.out.println(c);
		}
		
	
		//给定两个 int 变量, 交换变量的值
		public static void main 1.1(String[] args) {
			int a=10;
			int b=20;
			a=a^b;
			b=a^b;
			a=a^b;
			System.out.println(a);
			System.out.println(b);
		}
		*/
}
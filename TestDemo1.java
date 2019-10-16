public class TestDemo1 {
    public static int forg(int n) {
        if(n==1) {
            return 1;
        } else if(n==2) {
            return 2;
        } else {
            return forg(n-1)+forg(n-2);
        }
}
    public static int forg1(int n) {
        int f1=1;
        int f2=2;
        int f3=0;
        if(n==1) {
            return 1;
        }
        if(n==2) {
            return 2;
        }
        for (int i = 3; i <= n; i++) {
                f3 = f1 + f2;
                f1 = f2;
                f2 = f3;
            }
            return f3;
    }
    public static void main(String[] args) {
        System.out.println(forg(4));
        System.out.println(forg1(4));
    }
}
/**
 * @ClassName TestDemo4
 * @Description TODO
 * @Author lenovo
 * @Date 2019/10/18 17:04
 * @Version 1.0
 **/
public class TestDemo4 {
    public static void main(String[] args) {
        int[] array=new int []{2,5,4,1,3};
        int max=array[0];
        for (int i = 0; i <array.length ; i++) {
            if(max<array[i]) {
                max=array[i];
            }
        }
            System.out.println("最大值"+max);
        }
}

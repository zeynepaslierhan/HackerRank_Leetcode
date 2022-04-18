public class Solution {
    public double Average(int[] salary) {
        double sum = 0;
        int min =salary[0];
        int max =0;

        foreach (int value in salary) {
            sum += value;
            if(value>max) max=value;
            if(value<min) min=value;
        }

        sum -= max;
        sum -= min;

        return sum/(salary.Length-2.0);
    }
}

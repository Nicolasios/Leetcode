package ty202308.week2;

public class GasStation {

//    在一条环路上有 n 个加油站，其中第 i 个加油站有汽油 gas[i] 升。
//    你有一辆油箱容量无限的的汽车，从第 i 个加油站开往第 i+1 个加油站需要消耗汽油 cost[i] 升。你从其中的一个加油站出发，开始时油箱为空。
//    给定两个整数数组 gas 和 cost ，如果你可以按顺序绕环路行驶一周，则返回出发时加油站的编号，否则返回 -1 。如果存在解，则 保证 它是 唯一 的。

    public static void main(String[] args) {
        GasStation gasStation = new GasStation();
        int[] gas = {1,2,3,4,5};
        int[] cost = {3,4,5,1,2};
        int i = gasStation.canCompleteCircuit(gas, cost);
        System.out.println(i);
    }

    public int canCompleteCircuit(int[] gas, int[] cost) {
        int n = gas.length;
        int i = 0;
        while (i < n) {
            int sumOfGas = 0, sumOfCost = 0;
            int cnt = 0;
            while (cnt < n) {
                int j = (i + cnt) % n;
                sumOfGas += gas[j];
                sumOfCost += cost[j];
                if (sumOfCost > sumOfGas) {
                    break;
                }
                cnt++;
            }
            if (cnt == n) {
                return i;
            } else {
                i = i + cnt + 1;
            }
        }
        return -1;
    }

    //时间复杂度高
    public int canCompleteCircuitTy(int[] gas, int[] cost) {
        int res = -1;
        int stationNum = gas.length;
        for (int i = 0; i < stationNum; i++) {
            if (gas[i] < cost[i]) {
                continue;
            } else {
                res = i;
                int resGas = gas[i] - cost[i];
                for (int j = 1; j < stationNum; j++) {
                    int nowStation = (i + j) % stationNum;
                    resGas = resGas + gas[nowStation] - cost[nowStation];
                    if (resGas < 0) {
                        res = -1;
                        break;
                    }
                }
                if(res!=-1){
                    break;
                }
            }
        }
        return res;
    }
}

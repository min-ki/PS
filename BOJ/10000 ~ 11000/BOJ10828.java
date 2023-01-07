import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.ArrayList;
import java.util.List;

class Stack {
    private List<Integer> stack;

    public Stack() {
        stack = new ArrayList<Integer>();
    }

    public void push(Integer x) {
        stack.add(x);
    }

    public int pop() {
        if (stack.isEmpty()) {
            return -1;
        }

        int lastIdx = stack.size() - 1;
        return stack.remove(lastIdx);
    }

    public int size() {
        return stack.size();
    }

    public int empty() {
        if (stack.isEmpty()) {
            return 1;
        }
        return 0;
    }

    public int top() {
        if (stack.isEmpty()) {
            return -1;
        }
        return stack.get(stack.size() - 1);
    }
}

class BOJ10828 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int numOfCommands = Integer.parseInt(br.readLine());
        Stack stack = new Stack();

        for (int i = 0; i < numOfCommands; i++) {
            String nextLine = br.readLine();
            String[] commandSet = nextLine.split(" ");
            String command = commandSet[0];

            switch (command) {
                case "push":
                    Integer num = Integer.parseInt(commandSet[1]);
                    stack.push(num);
                    break;
                case "top":
                    System.out.println(stack.top());
                    break;
                case "size":
                    System.out.println(stack.size());
                    break;
                case "empty":
                    System.out.println(stack.empty());
                    break;
                case "pop":
                    System.out.println(stack.pop());
                    break;
            }
        }
    }
}
import java.util.Scanner;
import java.util.ArrayList;

public class PhoneManager {
    ArrayList<Member> phoneItemList = new ArrayList<Member>();

    public PhoneManager() {
    }

    public void showList() {
        for (Member item : phoneItemList) {
            System.out.println(item);
        }
    }

    public void addItem() {
        Member member;
        String name, phone;

        @SuppressWarnings("resource")
        Scanner scn = new Scanner(System.in);

        System.out.print("이름후 공백을 넣고 전화번호를 공백없이 작성해 주십시오.(번호는 연속적으로 입력) ");
        name = scn.nextLine();
        String phoneCheck[] = name.split("\s");
        name = phoneCheck[0];
        phone = phoneCheck[1];

        member = new Member(name, phone);

        phoneItemList.add(member);

    }

    public void searchItem() {
        @SuppressWarnings("resource")
        Scanner scn = new Scanner(System.in);
        System.out.print("검색할 이름(종료 : exit)>>");
        String searchName = scn.nextLine();

        switch (searchName) {
        case "exit":
            for (int i = 0; i < phoneItemList.size(); i++) {
                System.out.println(
                        "이름 :" + phoneItemList.get(i).getName() + ", " + "전화번호 :" + phoneItemList.get(i).getPhoneNum());
            }
            break;

        default:
            for (int i = 0; i < phoneItemList.get(i).getName().length();) {// i++ 왜 없애야되지??
                if (searchName.equals(phoneItemList.get(i).getName())) {
                    System.out.println(searchName + "의 번호는 " + phoneItemList.get(i).getPhoneNum() + "입니다.");
                    break;
                } else {
                    System.out.println(searchName + "이(가) 없습니다.");
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        PhoneManager manager = new PhoneManager();

        @SuppressWarnings("resource")
        Scanner scn = new Scanner(System.in);

        System.out.print("인원수 >>");
        int plusPhoneNum = scn.nextInt();
        for (int i = 0; i < plusPhoneNum; i++) {
            manager.addItem();
        }
        System.out.println("저장되었습니다. \n");

        manager.searchItem();
    }
}

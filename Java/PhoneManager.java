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

        System.out.print("�̸��� ������ �ְ� ��ȭ��ȣ�� ������� �ۼ��� �ֽʽÿ�.(��ȣ�� ���������� �Է�) ");
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
        System.out.print("�˻��� �̸�(���� : exit)>>");
        String searchName = scn.nextLine();

        switch (searchName) {
        case "exit":
            for (int i = 0; i < phoneItemList.size(); i++) {
                System.out.println(
                        "�̸� :" + phoneItemList.get(i).getName() + ", " + "��ȭ��ȣ :" + phoneItemList.get(i).getPhoneNum());
            }
            break;

        default:
            for (int i = 0; i < phoneItemList.get(i).getName().length();) {// i++ �� ���־ߵ���??
                if (searchName.equals(phoneItemList.get(i).getName())) {
                    System.out.println(searchName + "�� ��ȣ�� " + phoneItemList.get(i).getPhoneNum() + "�Դϴ�.");
                    break;
                } else {
                    System.out.println(searchName + "��(��) �����ϴ�.");
                    break;
                }
            }
        }
    }

    public static void main(String[] args) {
        PhoneManager manager = new PhoneManager();

        @SuppressWarnings("resource")
        Scanner scn = new Scanner(System.in);

        System.out.print("�ο��� >>");
        int plusPhoneNum = scn.nextInt();
        for (int i = 0; i < plusPhoneNum; i++) {
            manager.addItem();
        }
        System.out.println("����Ǿ����ϴ�. \n");

        manager.searchItem();
    }
}

import java.util.Scanner;

public class Grading {
	public static void main(String[] args) {

		@SuppressWarnings("resource")
		Scanner scanner = new Scanner(System.in);
		System.out.print("점수를 입력하세요(0~100): ");

		int score = scanner.nextInt();
		if (score > 100)
			System.out.println("점수를 다시 확인하여 주십시오.");
		else if (score < 0) {
			System.out.println("음수는 받지 않습니다.");
			return;
		} else {
			switch (score / 10) {
			case 10:
				System.out.println("학점은 A 입니다.");
				break;
			case 9:
				System.out.println("학점은 A 입니다.");
				break;
			case 8:
				System.out.println("학점은 B 입니다.");
				break;
			case 7:
				System.out.println("학점은 C 입니다.");
				break;
			case 6:
				System.out.println("학점은 D 입니다.");
				break;
			default:
				System.out.println("학점은 F 입니다.");
				break;
			}
		}

	}
}
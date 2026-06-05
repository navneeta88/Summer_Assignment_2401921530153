public class LibraryInterfaceDemo {
    public static void main(String[] args) {

        System.out.println("TEST CASE 1 - Kid User");

        KidUsers kidUser = new KidUsers();

        kidUser.age = 10;
        kidUser.registerAccount();

        kidUser.age = 18;
        kidUser.registerAccount();

        kidUser.bookType = "Kids";
        kidUser.requestBook();

        kidUser.bookType = "Fiction";
        kidUser.requestBook();

        System.out.println();

        System.out.println("TEST CASE 2 - Adult User");

        AdultUser adultUser = new AdultUser();

        adultUser.age = 5;
        adultUser.registerAccount();

        adultUser.age = 23;
        adultUser.registerAccount();

        adultUser.bookType = "Kids";
        adultUser.requestBook();

        adultUser.bookType = "Fiction";
        adultUser.requestBook();
    }
}
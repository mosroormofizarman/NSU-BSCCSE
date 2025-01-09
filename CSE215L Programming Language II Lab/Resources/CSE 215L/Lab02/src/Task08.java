
public class Task08 {
	public static void main(String[] args) {
		// Create constant value for number of pounds per kilogram
		final double POUNDS_PER_KILOGRAM = 2.2;

		// Display table header
		System.out.println(
			"Kilograms    Pounds     |     Pounds      Kilograms");
		for (int k = 1, p = 20; k <= 199 && p <= 515; k += 2, p += 5) {
			System.out.printf(
				"%-12d%7.1f", k, (k * POUNDS_PER_KILOGRAM));
			System.out.print("     |     ");
			System.out.printf(
				"%-9d%12.2f\n",
				p, (p / POUNDS_PER_KILOGRAM));
		}
	}
}

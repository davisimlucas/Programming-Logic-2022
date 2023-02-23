import java.util.Locale;
import java.util.Scanner;

public class soma_vetor {

	public static void main(String[] args) {
		Locale.setDefault(Locale.US);
		Scanner sc = new Scanner(System.in);
		int N;
		double media, soma;
		System.out.println("Quantos numeros serao digitados? ");
		N = sc.nextInt();
		double[] vet = new double [N]; // vetor começa em 0.
		for(int i = 0; i < N; i++) {
			System.out.print("Digite um nuemro: ");
			vet[i] = sc.nextDouble();
		}
		System.out.println();
		System.out.println("Valores = ");
		for(int i = 0; i < N; i++) {
			System.out.print(" " + String.format("%.1f", vet[i]));
		}
		System.out.println();
		soma = 0;
		for(int i = 0; i < N; i++) {
			soma = soma + vet[i];
		}
		System.out.println("Soma = " + String.format("%.2f", soma));
		media = soma / N;
		System.out.println("Media = " + String.format("%.2f", media));
		sc.close();
	}

}

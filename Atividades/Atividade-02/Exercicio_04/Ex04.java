import java.util.ArrayList;
import java.util.List;

public class Ex04 {
    public static void main(String[] args) {
        List<Livro> livros = new ArrayList<>();

        livros.add(new Livro("O Hobbit", "J. R. R. Tolkien", 1937));
        livros.add(new Livro("As Crônicas de Nárnia", "C. S. Lewis", 1949));
        livros.add(new Livro("Cinquenta Tons de Cinza", "Erika Leonard James", 2011));

        for (Livro livro : livros) {
            System.out.println(livro.getTitulo());
        }
    }
}
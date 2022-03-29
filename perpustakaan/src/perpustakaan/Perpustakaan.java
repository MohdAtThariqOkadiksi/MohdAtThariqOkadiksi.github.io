package perpustakaan;
import java.util.Scanner;

class Buku {
    String judul;
    String pengarang;
    int jmlHalaman;
    int stok;
    String peminjam;
   
    //Constructor
    Buku (String judul, String pengarang, int jmlHalaman, int stok){
        this.judul = judul ;
        this.pengarang = pengarang ;
        this.jmlHalaman = jmlHalaman ;
        this.stok = stok;
    }

    //Methode
    void tampilkan() {
    System.out.println("Judul : "+judul);
    System.out.println("Pengarang : " +pengarang);
    System.out.println("Jumlah Halaman "+jmlHalaman);
    System.out.println("Stok : "+stok);
    }
    void pinjam(){
        Scanner userInput = new Scanner(System.in);
        String cari = userInput.next();
        if(cari.equals(this.judul)){
            tampilkan();
            if(stok>=1){
                System.out.println("Apakah Ingin Meminjam Buku ?(y/t)");
                String meminjam = userInput.next();
                if ("y".equals(meminjam)||"Y".equals(meminjam)){
                    System.out.println("Masukkan ID Pengguna Anda :");
                    this.peminjam = userInput.next();
                    stok--;
                    tampilkan();
                    System.out.println("ID Peminjam "+this.peminjam);
                }
                else{
                
                }
            }
            else{
                System.out.println("Stok Buku 0 Tidak Dapat Meminjam");
            }
        }
        else {
            System.out.println("Maaf Buku Yang Anda Cari Tidak Tersedia");
        }
    }
    
    
}

public class Perpustakaan {
    String cari;

    public static void main(String[] args) {
        Pengguna pengguna1 = new Pengguna ("Thariq", "321456", true);
        Buku buku1 = new Buku("longBrightRiver", "liz moore", 392, 3);
        Buku buku2 = new Buku("flyMeToTheMoon07", "hata kenjiro", 200, 3);
        
        System.out.println("1. Absensi Perpustakaan");
        System.out.println("2. Pencarian Buku");
        System.out.println("3. Peminjaman Buku");
        System.out.println("4. Pengajuan Surat Bebas Perpustakaan");
        System.out.println("5. Keluar");
        Scanner userInput = new Scanner(System.in);  
        System.out.println("Masukkan Pilihan :");
        int pilihan = userInput.nextInt();
        switch(pilihan){
            case 1:
                pengguna1.Absen();
                break;
            case 2:
                System.out.println("Masukkan Judul Buku Yang Dicari (Awalan judul huruf kecil, Tanpa Spasi dan menggunakan huruf kapital di awal kata berikutnya ) : ");
                buku1.pinjam();//ganti buku1 ke buku2 dst, pencarian masih manual
                break;
            case 3:
                System.out.println("Masukkan Judul Buku Yang Mau Dipinjam (Awalan judul huruf kecil, Tanpa Spasi dan menggunakan huruf kapital di awal kata berikutnya ) : ");
                buku2.pinjam();//ganti buku1 ke buku2 dst, masih manual
                break;
            case 4:
                pengguna1.Surat();
                break;         
            default:
        
        }
        
        
    }
    
}

# Para Üstü ve Küpür Hesaplama Programı

## Programın Amacı
Bu program, bir kasada müşterinin ödediği tutardan ürünün fiyatını çıkararak verilecek para üstünü hesaplamak ve bu para üstünü en az sayıda banknot/madeni para (küpür) ile müşteriye teslim edebilmek için kodlanmıştır.

## Kullanılan Araçlar ve Dil
Ödev sürecinde aşağıdaki araçlardan ve programlama dilinden yararlanılmıştır:
* **C Programlama Dili:** Kodun yazıldığı dildir.
* **Git ve GitHub:** Ödevin teslim edilmesi için kullanılmıştır.
* **GCC Derleyicisi:** Kodun Windows ortamında (MSYS2/MinGW) derlenmesi için kullanılmıştır.

## Algoritma Detayları ve Kısıtlamalar
Ders kapsamında henüz koşul (if/else) ve döngü (for/while) yapıları işlenmediği için, algoritma tamamen doğrusal (lineer) bir yapıda kurgulanmıştır.
* Ondalıklı sayıların bellekte tutulmasından kaynaklı kuruş hassasiyeti kaybını önlemek amacıyla, değere matematiksel olarak `+ 0.5` eklenip tam sayıya çevrilerek manuel yuvarlama yapılmıştır.
* Her bir küpürün (200 TL, 100 TL, 1 TL, 50 Kuruş vb.) hesaplanması, ardışık tam sayı bölmesi (`/`) ve kalanın bir sonraki adıma aktarılması için mod (`%`) operatörleri kullanılarak gerçekleştirilmiştir.

## Kurulum ve Çalıştırma
Programı kendi ortamınızda derlemek ve çalıştırmak için terminalde aşağıdaki komutları sırasıyla çalıştırabilirsiniz (kodun `Final_Degerlendirme_Odevi_1.c` dosyasında olduğu varsayılmıştır):

```bash
gcc Final_Degerlendirme_Odevi_1.c -o kasa_programi
./kasa_programi

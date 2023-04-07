# maas-soru-odev
ortalamaMaas fonksiyonu, maas adında bir tamsayı dizisi ve n adet eleman sayısı alır. Fonksiyon, minimum ve maksimum maaş hariç diğer maaşların ortalamasını hesaplayacak olan float türünde bir değer döndürür.
toplam, minMaas ve maxMaas adlı üç değişken tanımlanır. toplam, maaşların toplamını hesaplamak için kullanılır. minMaas ve maxMaas, dizideki en düşük ve en yüksek maaşı bulmak için kullanılır. İlk değer olarak, her ikisi de dizinin ilk elemanına atanır.
for (int i = 0; i < n; i++) {
    if (maas[i] < minMaas) {
        minMaas = maas[i];
    }
    if (maas[i] > maxMaas) {
        maxMaas = maas[i];
    }
    toplam += maas[i];
}
Bu döngü, maas dizisindeki her elemanı dolaşır ve toplam, minMaas ve maxMaas değişkenleri güncellenir. Eğer bir eleman minMaas'dan küçükse, minMaas değeri bu elemana atanır. Eğer bir eleman maxMaas'dan büyükse, maxMaas değeri bu elemana atanır. Daha sonra, elemanın kendisi toplam değişkenine eklenir.
float ortalama = (float)(toplam - minMaas - maxMaas) / (n - 2);
return ortalama;
Bu satır, minimum ve maksimum maaşları hariç tutarak diğer tüm maaşların ortalamasını hesaplar ve ortalama değişkenine atanır. Daha sonra, ortalama değeri fonksiyondan döndürülür.

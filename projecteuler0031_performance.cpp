#include <iostream>
#include <vector>

int main() {
    std::vector<int> coins = {1, 2, 5, 10, 20, 50, 100, 200}; // Para birimleri
    int target = 200; // Hedef toplam değeri 200 peni olarak belirle

    // Her para biriminin kullanım sayısını tutmak için bir dizi oluştur
    std::vector<int> ways(target + 1, 0);
    ways[0] = 1; // 0 peni için bir yol var (yani hiçbir şey yapmama)

    // Tüm para birimlerine ve hedef değerlere göre döngü oluştur
    for (int i = 0; i < coins.size(); i++) {
        for (int j = coins[i]; j <= target; j++) {
            ways[j] += ways[j - coins[i]];
        }
    }
  
  /*
  Bu program, her bir para biriminin kullanım sayısını tutmak için bir dizi oluşturur. Ardından, her bir para birimini ve hedef değeri kullanarak, belirtilen toplam değeri oluşturmak için kaç farklı para birimi kombinasyonu olduğunu hesaplar. Son olarak, bu sayıyı yazdırır.
  ways adında bir std::vector (vektör) kullanılmaktadır. ways vektörü, her bir para biriminin kullanım sayısını takip eder. İndeksler, toplam değerleri temsil eder ve ways[i], i peni ile elde edilebilen farklı para birimi kombinasyonlarının sayısını verir.

Örneğin, ways[0]'ın değeri 1'dir, çünkü hiçbir şey yapmadığımızda, yani 0 peni kullanarak toplam değeri 0 peni olan tek bir kombinasyon vardır. Benzer şekilde, ways[5]'in değeri 4'tür, çünkü 5 peni ile elde edilebilecek dört farklı para birimi kombinasyonu vardır:

1x 5p
1x 2p, 1x 1p
2x 2p, 1x 1p
5x 1p
Programımızın ana döngüsü, ways vektörünü güncellemek için kullanılır. Her bir para birimi için, ways vektöründeki tüm ilgili indeksler, bu para birimi kullanılarak elde edilebilecek toplam değerlerdir. Bu indekslerin her biri, önceki indeksin değeriyle (yani, bu para birimini kullanmadan önceki) ve bu para biriminin değeriyle (yani, bu para birimini kullandıktan sonra kalan hedef toplamın değeri) toplanarak hesaplanır. Bu şekilde, ways vektörü güncellenir ve hedef toplam değeri için kaç tane farklı para birimi kombinasyonu olduğunu hesaplamak için kullanılır.
  
  
  
  */

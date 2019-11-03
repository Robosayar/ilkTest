/*
 *  Mert VAROL
 *    Robosayar
 *        www.robosayar.com
 *            Butona Basıldı Mı?
 */

int buton = 2;    //buton için kullanılan pin, değişkene aktarıldı.

void setup() {
  pinMode(buton,INPUT);   //buton için kullanılan pin, giriş olarak ayarlandı.
  Serial.begin(9600);     //seri port ekranı, kullanılabilir hale getirildi.
}

void loop() {
  int buton_durumu = digitalRead(buton);    //butana basılıp basılmadığının sonucunu, değişkene aktar. 
  if(buton_durumu == HIGH) {                //butona basıldı mı? - butona basıldı ise.
    Serial.println("Butona Basıldı!!");     //seri port ekranında haber ver.
    delay(200);                             //200 ms bekle. - butonun 1'den fazla kez algılanmasını engellemek için.
  }
}

/*
 * Butona bastığımızda seri port ekranında "Butona Basıldı!!" diye bir uyarı alacağız.
 */

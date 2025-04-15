int a1 = 2;
int a2 = 3;
int a3;

void setup(){
  Serial.begin(9600);
  Serial.println();

  sum(a2,a2,a3);
  Serial.println(a3);
}
void loop() {

}

int sum(int a1, int a2, int& a3){
  a3 = a1+a2;
  return a3;
}
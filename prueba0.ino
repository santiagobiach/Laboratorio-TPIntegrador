#define ROJO A0
#define AMARILLO A1
#define VERDE A2


#define RGBR A3
#define RGBG A4


#define AA1 0
#define B1 1
#define C1 2
#define D1 3
#define E1 4
#define F1 5
#define G1 6

#define AA2 7
#define B2 8
#define C2 9
#define D2 10
#define E2 11
#define F2 12
#define G2 13

#define x 100

int vector1[7];
int vector2[7];

void setup() {
  // put your setup code here, to run once:
  vector1[0] = AA1;
  vector1[1] = B1;
  vector1[2] = C1;
  vector1[3] = D1;
  vector1[4] = E1;
  vector1[5] = F1;
  vector1[6] = G1;
  vector2[0] = AA2;
  vector2[1] = B2;
  vector2[2] = C2;
  vector2[3] = D2;
  vector2[4] = E2;
  vector2[5] = F2;
  vector2[6] = G2;
  pinMode(AA1, OUTPUT);
  pinMode(B1, OUTPUT);
  pinMode(C1, OUTPUT);
  pinMode(D1, OUTPUT);
  pinMode(E1, OUTPUT);
  pinMode(F1, OUTPUT);
  pinMode(G1, OUTPUT);
  
  pinMode(AA2, OUTPUT);
  pinMode(B2, OUTPUT);
  pinMode(C2, OUTPUT);
  pinMode(D2, OUTPUT);
  pinMode(E2, OUTPUT);
  pinMode(F2, OUTPUT);
  pinMode(G2, OUTPUT);
  pinMode(ROJO, OUTPUT);
  pinMode(VERDE, OUTPUT);
  pinMode(AMARILLO, OUTPUT);
  pinMode(RGBR, OUTPUT);
  pinMode(RGBG, OUTPUT);
}

void loop() {
  
  for(int i = 30; i >= 0; i--){
      numero(vector1,(i/10));
      numero(vector2, (i%10));
      digitalWrite(VERDE, HIGH);
      digitalWrite(RGBR, HIGH);
      if(i <= 1){
        digitalWrite(VERDE, LOW);
        digitalWrite(AMARILLO, HIGH);
       }
      delay(1000);
    }

  digitalWrite(RGBR, LOW);
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARILLO, LOW);
  for(int i = 15; i >= 0; i--){
      numero(vector1,(i/10));
      numero(vector2, (i%10));
      digitalWrite(RGBG, HIGH);
      digitalWrite(ROJO, HIGH);
      if(i <= 2){
        
        digitalWrite(AMARILLO, HIGH);
       }
      delay(1000);
    }


  
  digitalWrite(VERDE, LOW);
  digitalWrite(AMARILLO, LOW);
  digitalWrite(ROJO, LOW);
  digitalWrite(RGBR, LOW);
  digitalWrite(RGBG, LOW);

}

void numero(int vector[], int numero_a_mostrar){
  switch(numero_a_mostrar){
      case 0: cero(vector); break;
      case 1: uno(vector); break;
      case 2: dos(vector); break;
      case 3: tres(vector); break;
      case 4: cuatro(vector); break;
      case 5: cinco(vector); break;
      case 6: seis(vector); break;
      case 7: siete(vector); break;
      case 8: ocho(vector); break;
      case 9: nueve(vector); break;
    }
  
  }
void limpiar(int vector[]){
  digitalWrite(vector[1], LOW);
  digitalWrite(vector[2], LOW);
  digitalWrite(vector[0], LOW);
  digitalWrite(vector[3], LOW);
  digitalWrite(vector[4], LOW);
  digitalWrite(vector[5],LOW);
  digitalWrite(vector[6], LOW);
  }
void uno(int vector[]){
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[0], LOW);
  digitalWrite(vector[3], LOW);
  digitalWrite(vector[4], LOW);
  digitalWrite(vector[5],LOW);
  digitalWrite(vector[6], LOW);
  }
  void dos(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[6], HIGH);
  digitalWrite(vector[4], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[2],LOW);
  digitalWrite(vector[5], LOW);
  }
  void tres(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[6], HIGH);
  digitalWrite(vector[4],LOW);
  digitalWrite(vector[5], LOW);
  }
  void cuatro(int vector[]){
  digitalWrite(vector[0], LOW);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], LOW);
  digitalWrite(vector[4],LOW);
  digitalWrite(vector[5], HIGH);
  digitalWrite(vector[6], HIGH);
  }
  void cinco(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], LOW);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[4],LOW);
  digitalWrite(vector[5], HIGH);
  digitalWrite(vector[6], HIGH);
  }
  void seis(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], LOW);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[4],HIGH);
  digitalWrite(vector[5], HIGH);
  digitalWrite(vector[6], HIGH);
  }
  void siete(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], LOW);
  digitalWrite(vector[4],LOW);
  digitalWrite(vector[5], LOW);
  digitalWrite(vector[6], LOW);
  }
 void ocho(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[4],HIGH);
  digitalWrite(vector[5], HIGH);
  digitalWrite(vector[6], HIGH);
  }
 void nueve(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[4],LOW);
  digitalWrite(vector[5], HIGH);
  digitalWrite(vector[6], HIGH);
  }
  void cero(int vector[]){
  digitalWrite(vector[0], HIGH);
  digitalWrite(vector[1], HIGH);
  digitalWrite(vector[2], HIGH);
  digitalWrite(vector[3], HIGH);
  digitalWrite(vector[4],HIGH);
  digitalWrite(vector[5], HIGH);
  digitalWrite(vector[6], LOW);
  }

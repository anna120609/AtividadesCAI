#define ledVermelho 13
#define ledVerde 11
#define ledAmarelo 12 
#define ledVermelho 4
#define ledverde 2 
#define ledAmarelo 3

void setup ()
{
  pinMode (13, OUTPUT);
  pinMode (11, OUTPUT);
  pinMode (12, OUTPUT);
  pinMode (4, OUTPUT);
  pinMode (2, OUTPUT);
  pinMode (3, OUTPUT);
}

void loop ()
{
  digitalWrite (2, HIGH);
  digitalWrite (13, HIGH);
  delay (3000);
  digitalWrite (2, LOW);
 digitalWrite (3, HIGH);
  delay (3000);
  digitalWrite (3, LOW);
  digitalWrite (13, LOW);
  
 
  digitalWrite (4, HIGH);
  digitalWrite (11, HIGH);
  delay (3000);
  digitalWrite (11, LOW);
  
  digitalWrite (12, HIGH);
  delay (3000);
  digitalWrite (12, LOW);
  digitalWrite (4, LOW);
  
  
}
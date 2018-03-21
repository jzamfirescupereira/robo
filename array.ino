struct Pattern {
  int direct;
  int duration;
};

int i;
Pattern Path[100];

void setup() {
    for (i = 0; i < 100; i++) {
        Path[i].direct = random(0,4);
    }
    for (i = 0; i < 100; i++) {
        Path[i].duration = random(0,4);
    }
    Serial.begin(9600);
    
}
void loop() {
    for (i = 0; i < 100; i++) {
        Serial.println(Path[i].direct);
    }
    for (i = 0; i < 100; i++) {
        Serial.println(Path[i].duration);
    }
    
}

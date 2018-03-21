class Pattern {
    int direct;
    int duration;
    public:
        void setdirect(int a)
        {
          direct = a;
        }
        void setduration(int b)
        {
          duration = b;
        }
        int getdirect()
        {
          return direct;
        }
        int getduration()
        {
          return duration;
        }
};
int i;
void setup() {
  
    Pattern Path[100];
    for (i = 0; i < 100; i++) {
        Path[i].setdirect(random(1,4));
    }
    for (i = 0; i < 100; i++) {
        Path[i].setduration(random(1,4));
    }
    Serial.begin(9600);
    
    
}
void loop() {
  Pattern Path[100];
    for (i = 0; i < 100; i++) {
        Serial.println(Path[i].getdirect());
    }
    for (i = 0; i < 100; i++) {
        Serial.println(Path[i].getduration());
    }
}

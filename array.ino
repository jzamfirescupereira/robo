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
Pattern Path[100];

void setup() {
    for (i = 0; i < 100; i++) {
        Path[i].setdirect(random(0,4));
    }
    for (i = 0; i < 100; i++) {
        Path[i].setduration(random(0,4));
    }
    Serial.begin(9600);
    
}
void loop() {
    for (i = 0; i < 100; i++) {
        Serial.println(Path[i].getdirect());
    }
    for (i = 0; i < 100; i++) {
        Serial.println(Path[i].getduration());
    }
    
}

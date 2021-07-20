int button_state = 0;
const int led_activation = 13, push_button = 2;

void setup(void)
{
    pinMode(led_activation, OUTPUT);
    Serial.begin(9600);
    pinMode(push_button, INPUT);
}

void loop(void)
{
    digitalWrite(led_activation, HIGH);
    button_state = digitalRead(push_button);
    Serial.println(button_state);
    delay(1);
}
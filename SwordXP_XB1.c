// This Script is solely for informational purposes. Please do not use it online.

int toggle;
int Wait = 500;

main
{
    if (event_press(20)) // 20 = XB1 X Button
    {
        toggle = !toggle;
    }
    if (toggle)
    {
        combo_run(SwordXP);
    }
}

combo SwordXP
{
    wait(10);
    set_val(XB1_X, 100);
    wait(250);
}

// This Script is solely for informational purposes. Please do not use it online.

int toggle;
int Wait = 500;

main
{
    if (event_press(20)) // 20 = PS4 Square Button
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
    set_val(PS4_SQUARE, 100);
    wait(250);
}

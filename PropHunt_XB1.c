// This Script is solely for informational purposes. Please do not use it online.

main
{
    if (get_val(XB1_Y))
    {
        combo_run(PropHunt);
    }

    if (!get_val(XB1_Y))
    {
        combo_stop(PropHunt);
    }
}

combo PropHunt
{
    set_val(XB1_Y, 100);
    wait(5);
    set_val(XB1_Y, 0);
    wait(5);
}

// This Script is solely for informational purposes. Please do not use it online.

main
{
    if (get_val(XB1_RT))
    {
        combo_run(DuelistJitter);
    }

    if (!get_val(XB1_RT))
    {
        combo_stop(DuelistJitter);
    }
}

combo DuelistJitter
{
    set_val(XB1_RT, 100);
    set_val(XB1_LT, 100);
    wait(10);
    set_val(XB1_RT, 0);
    set_val(XB1_LT, 0);
}

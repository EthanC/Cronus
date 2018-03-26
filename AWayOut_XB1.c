main
{
    if (get_val(XB1_X))
    {
        combo_run(AWayOut);
    }

    if (!get_val(XB1_X))
    {
        combo_stop(AWayOut);
    }
}

combo AWayOut
{
    wait(25);
    set_val(XB1_X, 0);
    wait(50);
    set_val(XB1_X, 100);
    wait(25);
}

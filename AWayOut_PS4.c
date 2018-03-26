main
{
    if (get_val(PS4_SQUARE))
    {
        combo_run(AWayOut);
    }

    if (!get_val(PS4_SQUARE))
    {
        combo_stop(AWayOut);
    }
}

combo AWayOut
{
    wait(25);
    set_val(PS4_SQUARE, 0);
    wait(50);
    set_val(PS4_SQUARE, 100);
    wait(25);
}

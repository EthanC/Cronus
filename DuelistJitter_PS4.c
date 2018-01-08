// This Script is solely for informational purposes. Please do not use it online.

main
{
    if (get_val(PS4_R2))
    {
        combo_run(DuelistJitter);
    }

    if (!get_val(PS4_R2))
    {
        combo_stop(DuelistJitter);
    }
}

combo DuelistJitter
{
    set_val(PS4_R2, 100);
    set_val(PS4_L2, 100);
    wait(10);
    set_val(PS4_R2, 0);
    set_val(PS4_L2, 0);
}

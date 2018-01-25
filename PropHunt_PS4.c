// This Script is solely for informational purposes. Please do not use it online.

main
{
    if (get_val(PS4_TRIANGLE))
    {
        combo_run(PropHunt);
    }

    if (!get_val(PS4_TRIANGLE))
    {
        combo_stop(PropHunt);
    }
}

combo PropHunt
{
    set_val(PS4_TRIANGLE, 100);
    wait(5);
    set_val(PS4_TRIANGLE, 0);
    wait(5);
}

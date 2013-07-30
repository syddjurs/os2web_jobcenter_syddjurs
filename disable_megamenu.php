<?php


$mini = panels_mini_load('mega_menu_arbejde_jobcenter');

panels_mini_delete($mini);

$mini = panels_mini_load('mega_menu_borger_jobcenter');
panels_mini_delete($mini);
$mini = panels_mini_load('mega_menu_virksomhed_jobcenter');
panels_mini_delete($mini);

variable_del('menu_minipanels_menu-indholdsmenu_enabled');

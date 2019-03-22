@echo off

SETLOCAL ENABLEDELAYEDEXPANSION

       :: DEFINE the following variables where applicable to your install

    SET SOURCE=%~dp0


:: _________________________________________________________

if not exist p:\ GOTO noP

echo This program will create all necessary links to your P drive. Press enter to continue.
pause

mklink /J "p:\hlc_wp_m60E4" "%SOURCE%hlc_wp_m60E4"

mklink /J  "p:\hlc_wp_AR15" "%SOURCE%hlc_wp_AR15" 

mklink /J  "p:\hlc_wp_M14" "%SOURCE%hlc_wp_M14" 

mklink /J  "p:\hlc_wp_FHAWC" "%SOURCE%hlc_wp_FHAWC" 

mklink /J  "p:\hlc_wp_p226" "%SOURCE%hlc_wp_p226"

mklink /J  "p:\hlc_wp_mp5" "%SOURCE%hlc_wp_mp5"

mklink /J  "p:\hlc_core" "%SOURCE%hlc_core"

mklink /J  "p:\hlc_wp_saw" "%SOURCE%hlc_wp_saw"

mklink /J  "p:\nia_wp_SG550" "%SOURCE%nia_wp_SG550"

mklink /J  "p:\nia_wp_HK416" "%SOURCE%nia_wp_HK416"

mklink /J  "p:\hlc_wp_sigamt" "%SOURCE%hlc_wp_sigamt"

mklink /J  "p:\hlc_wp_ak" "%SOURCE%hlc_wp_ak"

mklink /J  "p:\hlc_wp_acr" "%SOURCE%hlc_wp_acr"

mklink /J  "p:\hlc_wp_g3" "%SOURCE%hlc_wp_g3"

echo Complete
pause
GOTO quit

:noP
echo You don't have a P: drive!

:quit
exit
/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100039e60; end: 100039e87;  */

void FUN_100039e60(void)

{
  _os_unfair_lock_lock();
  return;
}



/* Entry: 100039e88; end: 100039f77;  */

void FUN_100039e88(undefined8 param_1)

{
  if (lRam0000000100054308 != -1) {
    FUN_100039f78();
  }
  if (pcRam0000000100054300 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000100039ea4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*pcRam0000000100054300)(param_1);
    return;
  }
  return;
}



/* Entry: 100039f78; end: 100039fc3;  */

void FUN_100039f78(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010003ab60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_once_f_10004c8e0)(0x100054308,0x100054300,0x100039f18);
  return;
}



/* Entry: 100039fc4; end: 100039fcf;  */

void FUN_100039fc4(void)

{
  _abort();
                    /* WARNING: Could not recover jumptable at 0x000100039fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___s10Foundation12CharacterSetV22whitespacesAndNewlinesACvgZ_10004d088)();
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1072c5cdc; end: 1072c5d1f;  */

void FUN_1072c5cdc(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_30 [16];
  
  puVar1 = param_1;
  FUN_1072c5d20();
  if (1 < (long)puVar1) {
    FUN_1072c5d80(auStack_30,*param_1);
    func_0x0001072ced6c();
    FUN_1072c5d5c();
    FUN_1072c6dc4(auStack_30);
  }
  return;
}



/* Entry: 1072c5d20; end: 1072c5d5b;  */

void FUN_1072c5d20(long *param_1)

{
  int extraout_w10;
  
  if (*param_1 != 0) {
    do {
      func_0x0001072cfb28();
    } while (extraout_w10 != 0);
  }
  return;
}



/* Entry: 1072c5d5c; end: 1072c5d7f;  */

void FUN_1072c5d5c(void)

{
  func_0x0001072ce444();
  FUN_1072c6dc4();
  return;
}



/* Entry: 1072c5d80; end: 1072c5d9b;  */

void FUN_1072c5d80(void)

{
  func_0x0001072cfc38();
  FUN_1072c5d9c();
  return;
}



/* Entry: 1072c5d9c; end: 1072c5dff;  */

void FUN_1072c5d9c(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  undefined8 extraout_x8;
  undefined8 uStack_30;
  
  func_0x0001072ce294();
  func_0x0001072cf450();
  FUN_1072c5e00();
  FUN_1072c5e40(uStack_30,param_2);
  func_0x0001072ce344();
  FUN_1072c6db4();
  func_0x0001072ce0cc(extraout_x8);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x0001072ce928();
  FUN_1072c6db4();
  func_0x0001072ce900();
  func_0x0001072cfca4();
  FUN_1072c5e20();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072c5e00; end: 1072c5e1f;  */

void FUN_1072c5e00(void)

{
  func_0x0001072cfca4();
  FUN_1072c5e20();
  func_0x0001072cfbc0();
  return;
}



/* Entry: 1072c5e20; end: 1072c5e3f;  */

undefined8 * FUN_1072c5e20(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  undefined8 *puVar1;
  undefined8 *unaff_x30;
  
  func_0x0001072cfba8();
  if (!(bool)in_CY) {
    puVar1 = (undefined8 *)(param_2 * 0x38);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  unaff_x30[2] = 0;
  *unaff_x30 = &PTR_FUN_11099bdf8;
  unaff_x30[1] = 0;
  FUN_1072c5ea4(unaff_x30 + 3);
  return unaff_x30;
}



/* Entry: 1072c5e40; end: 1072c5e7f;  */

undefined8 * FUN_1072c5e40(undefined8 *param_1)

{
  param_1[2] = 0;
  *param_1 = &PTR_FUN_11099bdf8;
  param_1[1] = 0;
  FUN_1072c5ea4(param_1 + 3);
  return param_1;
}



/* Entry: 1072c5e80; end: 1072c5e83;  */

void FUN_1072c5e80(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bdf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072c5e84; end: 1072c5e97;  */

void FUN_1072c5e84(void)

{
  FUN_1072c6d84();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1072c5e98; end: 1072c5ea3;  */

void FUN_1072c5e98(long param_1)

{
  func_0x0001072ce4a0(param_1 + 0x18);
  func_0x0001072c6d20();
  return;
}



/* Entry: 1072c5ea4; end: 1072c5ebb;  */

void FUN_1072c5ea4(long param_1)

{
  FUN_1072c5ebc();
  *(undefined4 *)(param_1 + 0x18) = 0;
  return;
}



/* Entry: 1072c5ebc; end: 1072c5ee3;  */

void FUN_1072c5ebc(void)

{
  func_0x0001072ce208();
  func_0x0001072cf108();
  FUN_1072c5ee4();
  return;
}



/* Entry: 1072c5ee4; end: 1072c5f2b;  */

void FUN_1072c5ee4(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c5f2c();
    func_0x0001072ce35c();
    FUN_1072c5f70();
  }
  func_0x0001072ce630();
  func_0x0001072c6cf8();
  return;
}



/* Entry: 1072c5f2c; end: 1072c5f6f;  */

void FUN_1072c5f2c(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x19;
  
  if (param_2 < 0x24924924924924a) {
    func_0x0001072cef30();
    FUN_1072c5fa4();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    func_0x0001072cf0b8(0x70);
  }
  else {
    FUN_1072c5f98();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c5ff4();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1072c5f70; end: 1072c5f97;  */

void FUN_1072c5f70(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c5ff4();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c5f98; end: 1072c5fa3;  */

void FUN_1072c5f98(void)

{
  func_0x0001072ce494();
  FUN_1072c5fc4();
  return;
}



/* Entry: 1072c5fa4; end: 1072c5fc3;  */

void FUN_1072c5fa4(void)

{
  FUN_1072c5fc4();
  return;
}



/* Entry: 1072c5fc4; end: 1072c6007;  */

void FUN_1072c5fc4(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x24924924924924a) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x70);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c6008();
  return;
}



/* Entry: 1072c6008; end: 1072c6057;  */

void FUN_1072c6008(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072ce058();
  while (unaff_x21 != unaff_x19) {
    func_0x0001072cea6c();
    FUN_1072c6058();
    func_0x0001072d01a8();
  }
  func_0x0001072ce708();
  FUN_1072c6c64();
  return;
}



/* Entry: 1072c6058; end: 1072c60ab;  */

void FUN_1072c6058(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001003ac1fc();
  FUN_1072c60ac();
  FUN_107268400(param_1 + 0x20,unaff_x20 + 0x20);
  func_0x000107269bac(unaff_x19 + 0x30,unaff_x20 + 0x30);
  return;
}



/* Entry: 1072c60ac; end: 1072c60cb;  */

void FUN_1072c60ac(void)

{
  func_0x0001072cebc0();
  FUN_1072c60cc();
  return;
}



/* Entry: 1072c60cc; end: 1072c6127;  */

void FUN_1072c60cc(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    *param_3 = *param_2;
    return;
  }
  if (param_1 != 5) {
    if (param_1 == 4) {
      func_0x0001072ce208(param_3);
      func_0x0001072ceafc();
      FUN_1072c614c();
    }
    else {
      if (param_1 == 3) goto FUN_107297530;
      if (param_1 == 2) {
        func_0x0001072ce208(param_3);
        func_0x0001072ceafc();
        FUN_1072c63e0();
      }
      else if (param_1 == 1) {
        func_0x0001072ce208(param_3);
        func_0x0001072ceafc();
        FUN_1072c665c();
      }
      else {
        if (param_1 != 0) {
          return;
        }
        func_0x0001072ce208(param_3);
        FUN_1072c68f8();
      }
    }
    return;
  }
FUN_107297530:
  func_0x00010729ee88(param_3);
  FUN_107297560();
  return;
}



/* Entry: 1072c6128; end: 1072c614b;  */

void FUN_1072c6128(void)

{
  func_0x0001072ce208();
  func_0x0001072ceafc();
  FUN_1072c614c();
  return;
}



/* Entry: 1072c614c; end: 1072c6193;  */

void FUN_1072c614c(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c6194();
    func_0x0001072ce35c();
    FUN_1072c61c0();
  }
  func_0x0001072ce630();
  func_0x0001072c630c();
  return;
}



/* Entry: 1072c6194; end: 1072c61bf;  */

void FUN_1072c6194(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001072cee6c();
  if ((bool)in_CY) {
    FUN_1072c61e8();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c6234();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001072cef30();
    FUN_1072c61f4();
    func_0x0001072ce7dc();
  }
  return;
}



/* Entry: 1072c61c0; end: 1072c61e7;  */

void FUN_1072c61c0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c6234();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c61e8; end: 1072c61f3;  */

void FUN_1072c61e8(void)

{
  func_0x0001072ce494();
  FUN_1072c6214();
  return;
}



/* Entry: 1072c61f4; end: 1072c6213;  */

void FUN_1072c61f4(void)

{
  FUN_1072c6214();
  return;
}



/* Entry: 1072c6214; end: 1072c6247;  */

void FUN_1072c6214(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c6248();
  return;
}



/* Entry: 1072c6248; end: 1072c628f;  */

void FUN_1072c6248(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cea60();
  func_0x0001072ce0e0();
  while (unaff_x21 != unaff_x20) {
    func_0x0001072cf0f0();
    FUN_1072c6290();
    func_0x0001072cf220();
  }
  func_0x0001072ce708();
  FUN_1072c62a8();
  return;
}



/* Entry: 1072c6290; end: 1072c62a7;  */

void FUN_1072c6290(void)

{
  FUN_107297530();
  return;
}



/* Entry: 1072c62a8; end: 1072c62d3;  */

void FUN_1072c62a8(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c62d4();
  }
  return;
}



/* Entry: 1072c62d4; end: 1072c62e3;  */

void FUN_1072c62d4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  return;
}



/* Entry: 1072c62e4; end: 1072c635f;  */

void FUN_1072c62e4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  return;
}



/* Entry: 1072c6360; end: 1072c6367;  */

void FUN_1072c6360(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6368; end: 1072c6393;  */

void FUN_1072c6368(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6394; end: 1072c63bb;  */

void FUN_1072c6394(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == 2) {
    func_0x0001072ce208(param_3);
    func_0x0001072ceafc();
    FUN_1072c63e0();
  }
  else if (param_1 == 1) {
    func_0x0001072ce208(param_3);
    func_0x0001072ceafc();
    FUN_1072c665c();
  }
  else {
    if (param_1 != 0) {
      return;
    }
    func_0x0001072ce208(param_3);
    FUN_1072c68f8();
  }
  return;
}



/* Entry: 1072c63bc; end: 1072c63df;  */

void FUN_1072c63bc(void)

{
  func_0x0001072ce208();
  func_0x0001072ceafc();
  FUN_1072c63e0();
  return;
}



/* Entry: 1072c63e0; end: 1072c6427;  */

void FUN_1072c63e0(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c6428();
    func_0x0001072ce35c();
    FUN_1072c6454();
  }
  func_0x0001072ce630();
  func_0x0001072c65a0();
  return;
}



/* Entry: 1072c6428; end: 1072c6453;  */

void FUN_1072c6428(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001072cee6c();
  if ((bool)in_CY) {
    FUN_1072c647c();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c64c8();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001072cef30();
    FUN_1072c6488();
    func_0x0001072ce7dc();
  }
  return;
}



/* Entry: 1072c6454; end: 1072c647b;  */

void FUN_1072c6454(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c64c8();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c647c; end: 1072c6487;  */

void FUN_1072c647c(void)

{
  func_0x0001072ce494();
  FUN_1072c64a8();
  return;
}



/* Entry: 1072c6488; end: 1072c64a7;  */

void FUN_1072c6488(void)

{
  FUN_1072c64a8();
  return;
}



/* Entry: 1072c64a8; end: 1072c64db;  */

void FUN_1072c64a8(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c64dc();
  return;
}



/* Entry: 1072c64dc; end: 1072c6523;  */

void FUN_1072c64dc(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cea60();
  func_0x0001072ce0e0();
  while (unaff_x21 != unaff_x20) {
    func_0x0001072cf0f0();
    FUN_1072c6524();
    func_0x0001072cf220();
  }
  func_0x0001072ce708();
  FUN_1072c653c();
  return;
}



/* Entry: 1072c6524; end: 1072c653b;  */

void FUN_1072c6524(void)

{
  FUN_107297530();
  return;
}



/* Entry: 1072c653c; end: 1072c6567;  */

void FUN_1072c653c(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c6568();
  }
  return;
}



/* Entry: 1072c6568; end: 1072c6577;  */

void FUN_1072c6568(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  return;
}



/* Entry: 1072c6578; end: 1072c65f3;  */

void FUN_1072c6578(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  return;
}



/* Entry: 1072c65f4; end: 1072c65fb;  */

void FUN_1072c65f4(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c65fc; end: 1072c6627;  */

void FUN_1072c65fc(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    func_0x0001072cf694();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6628; end: 1072c6637;  */

void FUN_1072c6628(int param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    return;
  }
  func_0x0001072ce208(param_3);
  FUN_1072c68f8();
  return;
}



/* Entry: 1072c6638; end: 1072c665b;  */

void FUN_1072c6638(void)

{
  func_0x0001072ce208();
  func_0x0001072ceafc();
  FUN_1072c665c();
  return;
}



/* Entry: 1072c665c; end: 1072c66a3;  */

void FUN_1072c665c(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c66a4();
    func_0x0001072ce35c();
    FUN_1072c66d0();
  }
  func_0x0001072ce630();
  func_0x0001072c6844();
  return;
}



/* Entry: 1072c66a4; end: 1072c66cf;  */

void FUN_1072c66a4(undefined8 param_1)

{
  undefined1 in_CY;
  long unaff_x19;
  
  func_0x0001072cee6c();
  if ((bool)in_CY) {
    FUN_1072c66f8();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c6744();
    *(undefined8 *)(unaff_x19 + 8) = param_1;
  }
  else {
    func_0x0001072cef30();
    FUN_1072c6704();
    func_0x0001072ce7dc();
  }
  return;
}



/* Entry: 1072c66d0; end: 1072c66f7;  */

void FUN_1072c66d0(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c6744();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c66f8; end: 1072c6703;  */

void FUN_1072c66f8(void)

{
  func_0x0001072ce494();
  FUN_1072c6724();
  return;
}



/* Entry: 1072c6704; end: 1072c6723;  */

void FUN_1072c6704(void)

{
  FUN_1072c6724();
  return;
}



/* Entry: 1072c6724; end: 1072c6757;  */

void FUN_1072c6724(undefined8 param_1,long param_2)

{
  undefined1 in_CY;
  
  func_0x0001072cee6c();
  if (!(bool)in_CY) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x18);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c6758();
  return;
}



/* Entry: 1072c6758; end: 1072c679f;  */

void FUN_1072c6758(void)

{
  long unaff_x20;
  long unaff_x21;
  
  func_0x0001072cea60();
  func_0x0001072ce0e0();
  while (unaff_x21 != unaff_x20) {
    func_0x0001072cf0f0();
    FUN_1072c67a0();
    func_0x0001072cf220();
  }
  func_0x0001072ce708();
  FUN_1072c67b8();
  return;
}



/* Entry: 1072c67a0; end: 1072c67b7;  */

void FUN_1072c67a0(void)

{
  FUN_1072c6128();
  return;
}



/* Entry: 1072c67b8; end: 1072c67e3;  */

void FUN_1072c67b8(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c67e4();
  }
  return;
}



/* Entry: 1072c67e4; end: 1072c67f3;  */

void FUN_1072c67e4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001072c6820();
  }
  return;
}



/* Entry: 1072c67f4; end: 1072c6897;  */

void FUN_1072c67f4(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001072c6820();
  }
  return;
}



/* Entry: 1072c6898; end: 1072c689f;  */

void FUN_1072c6898(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -3;
    func_0x0001072c6820();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c68a0; end: 1072c68f7;  */

void FUN_1072c68a0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x18;
    func_0x0001072c6820();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c68f8; end: 1072c693f;  */

void FUN_1072c68f8(void)

{
  long in_x3;
  
  func_0x0001072cee8c();
  if (in_x3 != 0) {
    func_0x0001072ce220();
    FUN_1072c6940();
    func_0x0001072ce35c();
    FUN_1072c6974();
  }
  func_0x0001072ce630();
  func_0x0001072c6aac();
  return;
}



/* Entry: 1072c6940; end: 1072c6973;  */

void FUN_1072c6940(long param_1,ulong param_2)

{
  long *unaff_x19;
  
  if (param_2 >> 0x3b == 0) {
    func_0x0001072cef30();
    FUN_1072c69a8();
    *unaff_x19 = param_1;
    unaff_x19[1] = param_1;
    unaff_x19[2] = param_1 + param_2 * 0x20;
  }
  else {
    FUN_1072c699c();
    func_0x0001072ceb2c();
    func_0x0001072ceee0();
    func_0x0001072c69e0();
    unaff_x19[1] = param_1;
  }
  return;
}



/* Entry: 1072c6974; end: 1072c699b;  */

void FUN_1072c6974(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x0001072ceb2c();
  func_0x0001072ceee0();
  func_0x0001072c69e0();
  *(undefined8 *)(unaff_x19 + 8) = param_1;
  return;
}



/* Entry: 1072c699c; end: 1072c69a7;  */

void FUN_1072c699c(void)

{
  func_0x0001072ce494();
  FUN_1072c69c8();
  return;
}



/* Entry: 1072c69a8; end: 1072c69c7;  */

void FUN_1072c69a8(void)

{
  FUN_1072c69c8();
  return;
}



/* Entry: 1072c69c8; end: 1072c69f3;  */

void FUN_1072c69c8(undefined8 param_1,ulong param_2)

{
  if (param_2 >> 0x3b == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 << 5);
    return;
  }
  func_0x000104bd35f4();
  FUN_1072c69f4();
  return;
}



/* Entry: 1072c69f4; end: 1072c6a43;  */

void FUN_1072c69f4(void)

{
  long unaff_x19;
  long unaff_x21;
  
  func_0x0001072ce058();
  while (unaff_x21 != unaff_x19) {
    func_0x0001072cea6c();
    FUN_1072c60ac();
    func_0x0001072d024c();
  }
  func_0x0001072ce708();
  FUN_1072c6a44();
  return;
}



/* Entry: 1072c6a44; end: 1072c6a6f;  */

void FUN_1072c6a44(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c6a70();
  }
  return;
}



/* Entry: 1072c6a70; end: 1072c6a7f;  */

void FUN_1072c6a70(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    FUN_1072c6b38();
  }
  return;
}



/* Entry: 1072c6a80; end: 1072c6aff;  */

void FUN_1072c6a80(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    FUN_1072c6b38();
  }
  return;
}



/* Entry: 1072c6b00; end: 1072c6b07;  */

void FUN_1072c6b00(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -4;
    FUN_1072c6b38();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6b08; end: 1072c6b37;  */

void FUN_1072c6b08(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x20;
    FUN_1072c6b38();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6b38; end: 1072c6b63;  */

undefined4 * FUN_1072c6b38(undefined4 *param_1)

{
  FUN_1072c6b64(*param_1,param_1 + 2);
  return param_1;
}



/* Entry: 1072c6b64; end: 1072c6be7;  */

void FUN_1072c6b64(int param_1,undefined8 param_2)

{
  if (param_1 == 7) {
    return;
  }
  if (param_1 == 6) {
    return;
  }
  if (param_1 != 5) {
    if (param_1 == 4) {
      func_0x0001072ce4a0(param_2);
      func_0x0001072c6334();
    }
    else {
      if (param_1 == 3) goto SUB_104c336c8;
      if (param_1 == 2) {
        func_0x0001072ce4a0(param_2);
        func_0x0001072c65c8();
      }
      else if (param_1 == 1) {
        func_0x0001072ce4a0(param_2);
        func_0x0001072c686c();
      }
      else {
        if (param_1 != 0) {
          return;
        }
        func_0x0001072ce4a0(param_2);
        func_0x0001072c6ad4();
      }
    }
    return;
  }
SUB_104c336c8:
  func_0x000104c34268(param_2);
  func_0x000104c336ec();
  return;
}



/* Entry: 1072c6be8; end: 1072c6c0b;  */

void FUN_1072c6be8(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c65c8();
  return;
}



/* Entry: 1072c6c0c; end: 1072c6c1b;  */

void FUN_1072c6c0c(int param_1,undefined8 param_2)

{
  if (param_1 != 0) {
    return;
  }
  func_0x0001072ce4a0(param_2);
  func_0x0001072c6ad4();
  return;
}



/* Entry: 1072c6c1c; end: 1072c6c63;  */

void FUN_1072c6c1c(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c686c();
  return;
}



/* Entry: 1072c6c64; end: 1072c6c8f;  */

void FUN_1072c6c64(void)

{
  uint extraout_w8;
  
  func_0x0001072cee54();
  if ((extraout_w8 & 1) == 0) {
    FUN_1072c6c90();
  }
  return;
}



/* Entry: 1072c6c90; end: 1072c6c9f;  */

void FUN_1072c6c90(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ce908();
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x70;
    func_0x0001072c6ccc();
  }
  return;
}



/* Entry: 1072c6ca0; end: 1072c6d4b;  */

void FUN_1072c6ca0(long param_1)

{
  long unaff_x19;
  
  func_0x0001072ceeec();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x70;
    func_0x0001072c6ccc();
  }
  return;
}



/* Entry: 1072c6d4c; end: 1072c6d53;  */

void FUN_1072c6d4c(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520(param_1,*param_1);
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0xe;
    func_0x0001072c6ccc();
  }
  *(undefined8 **)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6d54; end: 1072c6d83;  */

void FUN_1072c6d54(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x0001072ce520();
  while (param_1 != unaff_x19) {
    param_1 = param_1 + -0x70;
    func_0x0001072c6ccc();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 1072c6d84; end: 1072c6d8f;  */

void FUN_1072c6d84(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_11099bdf8;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1072c6d90; end: 1072c6db3;  */

void FUN_1072c6d90(void)

{
  func_0x0001072ce4a0();
  func_0x0001072c6d20();
  return;
}



/* Entry: 1072c6db4; end: 1072c6dc3;  */

void FUN_1072c6db4(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1072c6dc4; end: 1072c6de7;  */

void FUN_1072c6dc4(long param_1)

{
  func_0x0001072cea78();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 1072c6de8; end: 1072c6e4f;  */

void FUN_1072c6de8(undefined8 param_1,ulong param_2)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 auStack_48 [40];
  
  func_0x0001072ce464();
  func_0x0001072cf3ac();
  if ((bool)in_CY && !(bool)in_ZR) {
    if (0x249249249249249 < param_2) {
      FUN_1072c5f98();
      func_0x0001072ce690();
      func_0x0001072ce900();
      func_0x0001072ce2cc();
      func_0x0001072cf398();
      FUN_1072c6eb8();
      func_0x0001072cdfc8();
      return;
    }
    func_0x0001072ce808();
    func_0x0001072cf1ec();
    FUN_1072c6e84();
    func_0x0001072ce684();
    FUN_1072c7020(auStack_48);
  }
  return;
}



/* Entry: 1072c6e50; end: 1072c6e83;  */

void FUN_1072c6e50(void)

{
  func_0x0001072ce2cc();
  func_0x0001072cf398();
  FUN_1072c6eb8();
  func_0x0001072cdfc8();
  return;
}



/* Entry: 1072c6e84; end: 1072c6eb7;  */

void FUN_1072c6e84(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001072ce6ac();
  if (param_2 != 0) {
    FUN_1072c5fa4(param_4);
  }
  func_0x0001072ce27c(0x70);
  return;
}



/* Entry: 1072c6eb8; end: 1072c6f1b;  */

void FUN_1072c6eb8(void)

{
  long unaff_x19;
  long unaff_x22;
  undefined1 auStack_60 [40];
  long lStack_38;
  
  func_0x0001072ce134();
  for (; unaff_x22 != unaff_x19; unaff_x22 = unaff_x22 + 0x70) {
    func_0x0001072cf5d0();
    func_0x0001072c6f48();
    lStack_38 = lStack_38 + 0x70;
  }
  func_0x0001072cebf4();
  func_0x0001072ce974();
  func_0x0001072c6f1c();
  FUN_1072c6c64(auStack_60);
  return;
}



/* Entry: 1072c6f1c; end: 1072c6f7f;  */

void FUN_1072c6f1c(long param_1)

{
  long unaff_x19;
  
  func_0x0001072cf120();
  for (; param_1 != unaff_x19; param_1 = param_1 + 0x70) {
    func_0x0001072c6ccc();
  }
  return;
}



/* Entry: 1072c6f80; end: 1072c6fa3;  */

void FUN_1072c6f80(void)

{
  func_0x0001072cebc0();
  FUN_1072c6fa4();
  return;
}



/* Entry: 1072c6fa4; end: 1072c701f;  */

void FUN_1072c6fa4(int param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (param_1 == 7) {
    return;
  }
  if (param_1 != 6) {
    if ((((param_1 != 5) && (param_1 != 4)) && (param_1 != 3)) &&
       (((param_1 != 2 && (param_1 != 1)) && (param_1 != 0)))) {
      return;
    }
    *param_3 = 0;
    param_3[1] = 0;
    param_3[2] = 0;
    uVar1 = *param_2;
    param_3[1] = param_2[1];
    *param_3 = uVar1;
    param_3[2] = param_2[2];
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    return;
  }
  *(undefined4 *)param_3 = *(undefined4 *)param_2;
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 107433964; end: 107433987;  */

void FUN_107433964(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107410c74();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107433988; end: 1074339ab;  */

undefined8 FUN_107433988(undefined8 param_1)

{
  FUN_1074339ac();
  return param_1;
}



/* Entry: 1074339ac; end: 1074339df;  */

void FUN_1074339ac(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == *(char *)(param_2 + 1)) {
    if (cVar1 != '\0') {
      uVar2 = *param_1;
      *param_1 = *param_2;
      *param_2 = uVar2;
    }
    return;
  }
  if (cVar1 != '\0') {
    if (*(char *)(param_1 + 1) == '\x01') {
      FUN_107433a04();
      *(undefined1 *)(param_1 + 1) = 0;
    }
    return;
  }
  FUN_107433044();
  func_0x00010743bdc8();
  return;
}



/* Entry: 1074339e0; end: 107433a03;  */

void FUN_1074339e0(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433a04();
    *(undefined1 *)(param_1 + 8) = 0;
  }
  return;
}



/* Entry: 107433a04; end: 107433a23;  */

void FUN_107433a04(void)

{
  func_0x00010743ba18();
  FUN_107433a24();
  return;
}



/* Entry: 107433a24; end: 107433a3b;  */

void FUN_107433a24(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
    if (lVar1 != 0) {
      FUN_107433a58(lVar1);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107433a3c; end: 107433a57;  */

void FUN_107433a3c(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
    FUN_107433a58(param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107433a58; end: 107433a7f;  */

void FUN_107433a58(long param_1)

{
  FUN_1073e64d8(param_1 + 0x20);
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433a04();
  }
  return;
}



/* Entry: 107433a80; end: 107433a9f;  */

void FUN_107433a80(long param_1)

{
  if (*(char *)(param_1 + 8) == '\x01') {
    FUN_107433a04();
  }
  return;
}



/* Entry: 107433aa0; end: 107433ac3;  */

undefined8 FUN_107433aa0(undefined8 param_1)

{
  FUN_107433ac4();
  return param_1;
}



/* Entry: 107433ac4; end: 107433b17;  */

void FUN_107433ac4(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x38) != -1 || *(int *)(param_2 + 0x38) != -1) {
    if (*(int *)(param_2 + 0x38) == -1) {
      if (*(uint *)(param_1 + 0x38) != 0xffffffff) {
        func_0x0001073e677c((&PTR_FUN_1109ac9f0)[*(uint *)(param_1 + 0x38)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
      return;
    }
    func_0x00010743bc18();
  }
  return;
}



/* Entry: 107433b18; end: 107433b2b;  */

void FUN_107433b18(long *param_1)

{
  if (*(int *)(*param_1 + 0x38) != 0) {
    func_0x00010743bcc0();
    FUN_107433b54();
  }
  return;
}



/* Entry: 107433b2c; end: 107433b53;  */

void FUN_107433b2c(long param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    func_0x00010743bcc0();
    FUN_107433b54();
  }
  return;
}



/* Entry: 107433b54; end: 107433b77;  */

void FUN_107433b54(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_1073e64d8(lVar1);
  *(undefined4 *)(lVar1 + 0x38) = 0;
  return;
}



/* Entry: 107433b78; end: 107433b7f;  */

void FUN_107433b78(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x38) == 1) {
    uVar1 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_107433bbc();
  return;
}



/* Entry: 107433b80; end: 107433bbb;  */

void FUN_107433b80(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x38) == 1) {
    uVar1 = *param_3;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_3 + 1);
    *param_2 = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_107433bbc();
  return;
}



/* Entry: 107433bbc; end: 107433bc7;  */

void FUN_107433bbc(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010743b73c(*param_1,param_1[1]);
  FUN_1073e64d8();
  func_0x00010743c3dc();
  *(undefined4 *)(unaff_x20 + 0x38) = 1;
  return;
}



/* Entry: 107433bc8; end: 107433bf3;  */

void FUN_107433bc8(void)

{
  long unaff_x20;
  
  func_0x00010743b73c();
  FUN_1073e64d8();
  func_0x00010743c3dc();
  *(undefined4 *)(unaff_x20 + 0x38) = 1;
  return;
}



/* Entry: 107433bf4; end: 107433bfb;  */

void FUN_107433bf4(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(*param_1 + 0x38) == 2) {
    func_0x00010743b73c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x2d);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x2d) = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_107433c60();
  return;
}



/* Entry: 107433bfc; end: 107433c2f;  */

void FUN_107433bfc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x38) == 2) {
    func_0x00010743b73c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined8 *)(unaff_x19 + 0x2d);
    *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x2d) = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_107433c60();
  return;
}



/* Entry: 107433c30; end: 107433c5f;  */

void FUN_107433c30(void)

{
  undefined8 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b73c();
  func_0x00010727e15c();
  uVar1 = *(undefined8 *)(unaff_x19 + 0x2d);
  *(undefined8 *)(unaff_x20 + 0x28) = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x2d) = uVar1;
  return;
}



/* Entry: 107433c60; end: 107433c6b;  */

void FUN_107433c60(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010743b73c(*param_1,param_1[1]);
  FUN_1073e64d8();
  func_0x00010743bdd4();
  FUN_107433110();
  *(undefined4 *)(unaff_x20 + 0x38) = 2;
  return;
}



/* Entry: 107433c6c; end: 107433cdf;  */

void FUN_107433c6c(void)

{
  long unaff_x20;
  
  func_0x00010743b73c();
  FUN_1073e64d8();
  func_0x00010743bdd4();
  FUN_107433110();
  *(undefined4 *)(unaff_x20 + 0x38) = 2;
  return;
}



/* Entry: 107433ce0; end: 107433d03;  */

undefined8 FUN_107433ce0(undefined8 param_1)

{
  FUN_107433d04();
  return param_1;
}



/* Entry: 107433d04; end: 107433d57;  */

void FUN_107433d04(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x40) != -1 || *(int *)(param_2 + 0x40) != -1) {
    if (*(int *)(param_2 + 0x40) == -1) {
      if (*(uint *)(param_1 + 0x40) != 0xffffffff) {
        func_0x0001073e161c((&PTR_FUN_1109ac310)[*(uint *)(param_1 + 0x40)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
      return;
    }
    func_0x00010743bc18();
  }
  return;
}



/* Entry: 107433d58; end: 107433d67;  */

void FUN_107433d58(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(*param_1 + 0x40) != 0) {
    func_0x00010743bcc0();
    FUN_107433d90();
    return;
  }
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  return;
}



/* Entry: 107433d68; end: 107433d8f;  */

void FUN_107433d68(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  if (*(int *)(param_1 + 0x40) != 0) {
    func_0x00010743bcc0();
    FUN_107433d90();
    return;
  }
  uVar1 = *param_3;
  param_2[1] = param_3[1];
  *param_2 = uVar1;
  return;
}



/* Entry: 107433d90; end: 107433d9b;  */

void FUN_107433d90(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010743b73c(*param_1,param_1[1]);
  FUN_1073debc4();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 8) = 0;
  return;
}



/* Entry: 107433d9c; end: 107433dc7;  */

void FUN_107433d9c(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010743b73c();
  FUN_1073debc4();
  uVar1 = *unaff_x19;
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  *(undefined4 *)(unaff_x20 + 8) = 0;
  return;
}



/* Entry: 107433dc8; end: 107433dcf;  */

void FUN_107433dc8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(int *)(*param_1 + 0x40) == 1) {
    func_0x00010743b73c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_107433dfc();
  return;
}



/* Entry: 107433dd0; end: 107433dfb;  */

void FUN_107433dd0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  
  if (*(int *)(param_1 + 0x40) == 1) {
    func_0x00010743b73c(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x38) = uVar1;
    return;
  }
  func_0x00010743bcc0();
  FUN_107433dfc();
  return;
}



/* Entry: 107433dfc; end: 107433e07;  */

void FUN_107433dfc(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010743b73c(*param_1,param_1[1]);
  FUN_1073debc4();
  func_0x00010743bdd4();
  FUN_107432e00();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107433e08; end: 107433f7b;  */

void FUN_107433e08(void)

{
  long unaff_x20;
  
  func_0x00010743b73c();
  FUN_1073debc4();
  func_0x00010743bdd4();
  FUN_107432e00();
  *(undefined4 *)(unaff_x20 + 0x40) = 1;
  return;
}



/* Entry: 107433f7c; end: 107433f93;  */

void FUN_107433f7c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107433f94; end: 10743404b;  */

void FUN_107433f94(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010743b62c();
  if (unaff_x20 != 0) {
    func_0x00010743bd30();
    if ((bool)in_ZR) {
      func_0x000107433fc8(unaff_x20 + 0x10);
    }
    func_0x00010743b7f4();
  }
  return;
}



/* Entry: 10743404c; end: 107434053;  */

void FUN_10743404c(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b73c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x78;
    func_0x000107432b30();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107434054; end: 107434087;  */

void FUN_107434054(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b73c();
  func_0x000104c318bc();
  func_0x000104c318bc(param_1 + 0x38,unaff_x19 + 0x38);
  *(undefined8 *)(unaff_x20 + 0x70) = *(undefined8 *)(unaff_x19 + 0x70);
  return;
}



/* Entry: 107434088; end: 107434093;  */

void FUN_107434088(long param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743c320();
  func_0x00010743b73c();
  lVar1 = *(long *)(param_1 + 8);
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107435084();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 107434094; end: 10743409b;  */

void FUN_107434094(undefined8 *param_1)

{
  long lVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b73c(param_1,*param_1);
  lVar1 = param_1[1];
  while (lVar1 != unaff_x19) {
    lVar1 = lVar1 + -0x10;
    func_0x000107435084();
  }
  *(long *)(unaff_x20 + 8) = unaff_x19;
  return;
}



/* Entry: 10743409c; end: 10743413f;  */

void FUN_10743409c(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x8_00;
  long extraout_x9;
  long lVar2;
  long extraout_x9_00;
  long unaff_x19;
  
  if (*(long *)(param_1 + 0x18) != 0) {
    func_0x00010743ba34();
    func_0x0001074340dc();
    func_0x00010743b748();
    lVar1 = extraout_x8;
    lVar2 = extraout_x9;
    while (lVar2 != lVar1) {
      func_0x00010743b760();
      lVar1 = extraout_x8_00;
      lVar2 = extraout_x9_00;
    }
    *(undefined8 *)(unaff_x19 + 0x18) = 0;
  }
  return;
}



/* Entry: 107434140; end: 10743414b;  */

void FUN_107434140(long param_1,undefined8 param_2)

{
  long extraout_x8;
  int extraout_w10;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    func_0x00010743bcc0();
    FUN_1074341b8();
    return;
  }
  func_0x00010743c00c(param_1,param_2);
  if (extraout_x8 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010743c570();
  FUN_1074341c4();
  return;
}



/* Entry: 10743414c; end: 10743417f;  */

void FUN_10743414c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long extraout_x8;
  int extraout_w10;
  
  if (*(int *)(param_1 + 0x10) != 1) {
    func_0x00010743bcc0();
    FUN_1074341b8();
    return;
  }
  func_0x00010743c00c(param_2,param_3);
  if (extraout_x8 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010743c570();
  FUN_1074341c4();
  return;
}



/* Entry: 107434180; end: 1074341b7;  */

void FUN_107434180(void)

{
  long extraout_x8;
  int extraout_w10;
  
  func_0x00010743c00c();
  if (extraout_x8 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  func_0x00010743c570();
  FUN_1074341c4();
  return;
}



/* Entry: 1074341b8; end: 1074341c3;  */

void FUN_1074341b8(undefined8 *param_1)

{
  long lVar1;
  int extraout_w10;
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  func_0x00010743b804(*param_1,param_1[1]);
  FUN_10743422c();
  lVar1 = unaff_x20[1];
  uVar2 = *unaff_x20;
  unaff_x19[1] = unaff_x20[1];
  *unaff_x19 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  *(undefined4 *)(unaff_x19 + 2) = 1;
  return;
}



/* Entry: 1074341c4; end: 10743422b;  */

void FUN_1074341c4(long param_1)

{
  func_0x00010743bdf8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 10743422c; end: 107434267;  */

void FUN_10743422c(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010743c01c();
  if (!(bool)in_ZR) {
    func_0x00010743b5c8((&PTR_FUN_1109af570)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 107434268; end: 107434273;  */

void FUN_107434268(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001072afd54();
  *unaff_x19 = 0;
  if (param_2 != 0) {
    func_0x0001072afa4c();
  }
  return;
}



/* Entry: 107434274; end: 10743429b;  */

void FUN_107434274(long param_1)

{
  int iVar1;
  
  iVar1 = (int)param_1;
  FUN_1074344b4();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x11) = 1;
  }
  return;
}



/* Entry: 10743429c; end: 10743430f;  */

long FUN_10743429c(long param_1,long *param_2,long param_3)

{
  undefined1 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar5;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar6;
  long extraout_x14;
  long extraout_x14_00;
  long lVar7;
  ulong uVar8;
  
  if (*(int *)(param_3 + 0x40) == 0) {
    func_0x00010743c15c();
    FUN_107432024();
    func_0x00010743c26c();
LAB_1074342dc:
    func_0x00010743c12c();
    if (param_1 != 0) {
      func_0x00010743b2a4();
    }
    return param_1;
  }
  uVar1 = *(int *)(param_3 + 0x40) == 1;
  if ((bool)uVar1) {
    func_0x00010743c15c();
    FUN_1073da708();
    func_0x00010743c26c();
    goto LAB_1074342dc;
  }
  func_0x00010563ab98();
  lVar7 = param_1;
  func_0x00010743c12c();
  if (lVar7 != 0) {
    func_0x00010743b2a4();
  }
  func_0x00010743b660();
  func_0x00010743bc24();
  if ((bool)uVar1) {
    uVar1 = 1;
  }
  else {
    uVar1 = extraout_x8 == extraout_x9;
    if (extraout_x9 <= extraout_x8) {
      func_0x00010743c114();
    }
  }
  do {
    func_0x00010743bfdc();
  } while (!(bool)uVar1);
  uVar2 = extraout_x8_00;
  uVar3 = extraout_x9_00;
  lVar4 = extraout_x10;
  uVar5 = extraout_x12;
  lVar6 = extraout_x13;
  if (extraout_x10 == lVar7 + 0x10) {
LAB_107434380:
    if (param_1 == 0) {
LAB_1074343ac:
      *(undefined8 *)(lVar6 + uVar2 * 8) = 0;
      lVar7 = *param_2;
      goto LAB_1074343b4;
    }
    if ((uVar3 & uVar5) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(ulong *)(param_1 + 8) == uVar3;
      if (uVar3 <= *(ulong *)(param_1 + 8)) {
        func_0x00010743bef4();
      }
    }
    func_0x00010743bee8();
    uVar2 = extraout_x8_02;
    uVar3 = extraout_x9_02;
    lVar4 = extraout_x10_01;
    uVar5 = extraout_x12_01;
    lVar6 = extraout_x13_01;
    lVar7 = extraout_x14_00;
    if (!(bool)uVar1) goto LAB_1074343ac;
  }
  else {
    if ((extraout_x9_00 & extraout_x12) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(ulong *)(extraout_x10 + 8) == extraout_x9_00;
      if (extraout_x9_00 <= *(ulong *)(extraout_x10 + 8)) {
        func_0x00010743bef4();
      }
    }
    func_0x00010743bee8();
    uVar2 = extraout_x8_01;
    uVar3 = extraout_x9_01;
    lVar4 = extraout_x10_00;
    uVar5 = extraout_x12_00;
    lVar6 = extraout_x13_00;
    lVar7 = extraout_x14;
    if (!(bool)uVar1) goto LAB_107434380;
LAB_1074343b4:
    if (lVar7 == 0) goto LAB_1074343ec;
  }
  uVar8 = *(ulong *)(lVar7 + 8);
  if ((uVar3 & uVar5) == 0) {
    uVar8 = uVar8 & uVar5;
  }
  else if (uVar3 <= uVar8) {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar8 / uVar3;
    }
    uVar8 = uVar8 - uVar5 * uVar3;
  }
  if (uVar8 != uVar2) {
    *(long *)(lVar6 + uVar8 * 8) = lVar4;
  }
LAB_1074343ec:
  func_0x00010743b4ec();
  func_0x000107434400();
  return param_1;
}



/* Entry: 107434310; end: 107434457;  */

void FUN_107434310(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar5;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar6;
  long extraout_x14;
  long extraout_x14_00;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  
  func_0x00010743bc24();
  if ((bool)in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = extraout_x8 == extraout_x9;
    if (extraout_x9 <= extraout_x8) {
      func_0x00010743c114();
    }
  }
  do {
    func_0x00010743bfdc();
  } while (!(bool)uVar1);
  uVar2 = extraout_x8_00;
  uVar3 = extraout_x9_00;
  lVar4 = extraout_x10;
  uVar5 = extraout_x12;
  lVar6 = extraout_x13;
  if (extraout_x10 == param_1 + 0x10) {
LAB_107434380:
    if (unaff_x19 == 0) {
LAB_1074343ac:
      *(undefined8 *)(lVar6 + uVar2 * 8) = 0;
      lVar7 = *param_2;
      goto LAB_1074343b4;
    }
    if ((uVar3 & uVar5) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(ulong *)(unaff_x19 + 8) == uVar3;
      if (uVar3 <= *(ulong *)(unaff_x19 + 8)) {
        func_0x00010743bef4();
      }
    }
    func_0x00010743bee8();
    uVar2 = extraout_x8_02;
    uVar3 = extraout_x9_02;
    lVar4 = extraout_x10_01;
    uVar5 = extraout_x12_01;
    lVar6 = extraout_x13_01;
    lVar7 = extraout_x14_00;
    if (!(bool)uVar1) goto LAB_1074343ac;
  }
  else {
    if ((extraout_x9_00 & extraout_x12) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(ulong *)(extraout_x10 + 8) == extraout_x9_00;
      if (extraout_x9_00 <= *(ulong *)(extraout_x10 + 8)) {
        func_0x00010743bef4();
      }
    }
    func_0x00010743bee8();
    uVar2 = extraout_x8_01;
    uVar3 = extraout_x9_01;
    lVar4 = extraout_x10_00;
    uVar5 = extraout_x12_00;
    lVar6 = extraout_x13_00;
    lVar7 = extraout_x14;
    if (!(bool)uVar1) goto LAB_107434380;
LAB_1074343b4:
    if (lVar7 == 0) goto LAB_1074343ec;
  }
  uVar8 = *(ulong *)(lVar7 + 8);
  if ((uVar3 & uVar5) == 0) {
    uVar8 = uVar8 & uVar5;
  }
  else if (uVar3 <= uVar8) {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar8 / uVar3;
    }
    uVar8 = uVar8 - uVar5 * uVar3;
  }
  if (uVar8 != uVar2) {
    *(long *)(lVar6 + uVar8 * 8) = lVar4;
  }
LAB_1074343ec:
  func_0x00010743b4ec();
  func_0x000107434400();
  return;
}



/* Entry: 107434458; end: 10743449b;  */

long FUN_107434458(long param_1)

{
  _bzero(param_1,0x88);
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 0x40) = 0;
  func_0x000104c2f64c(param_1 + 0x48);
  return param_1;
}



/* Entry: 10743449c; end: 1074344b3;  */

int * FUN_10743449c(int *param_1)

{
  if (param_1[0x10] == 0) {
    return param_1;
  }
  func_0x00010563ab98();
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return (int *)(ulong)(*(long *)(param_1 + 2) != 0);
  }
  return (int *)0x0;
}



/* Entry: 1074344b4; end: 1074344d7;  */

bool FUN_1074344b4(int *param_1)

{
  if ((*param_1 != 0) && (param_1[1] != 0)) {
    return *(long *)(param_1 + 2) != 0;
  }
  return false;
}



/* Entry: 1074344d8; end: 1074344f3;  */

long * FUN_1074344d8(long *param_1)

{
  int iVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  long *extraout_x8;
  long *extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar6;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  long *extraout_x9;
  long *extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  long *extraout_x9_04;
  long *extraout_x9_05;
  long *plVar7;
  long *extraout_x10;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  long *extraout_x11;
  long *extraout_x11_00;
  long *plVar8;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  long *extraout_x13;
  long *extraout_x13_00;
  long *plVar9;
  long unaff_x19;
  long *unaff_x20;
  long *unaff_x21;
  long *unaff_x22;
  ulong unaff_x23;
  long *unaff_x24;
  long *unaff_x25;
  
  iVar1 = (int)param_1[8];
  uVar3 = iVar1 != 0;
  uVar4 = iVar1 + -1 < 0;
  uVar5 = iVar1 == 1;
  if ((bool)uVar5) {
    return param_1;
  }
  func_0x00010563ab98();
  func_0x00010743c39c();
  func_0x00010743b648();
  func_0x00010743c1a4();
  if (unaff_x24 != (long *)0x0) {
    func_0x00010743c3fc();
    if ((bool)uVar5) {
      unaff_x25 = (long *)(unaff_x23 & (ulong)unaff_x21);
    }
    else {
      func_0x00010743c06c();
      if ((bool)uVar3) {
        func_0x00010743bad8();
      }
    }
    func_0x00010743c060();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10743457c;
          func_0x00010743c048();
          if (!(bool)uVar5) break;
          func_0x00010743b818();
          if (((ulong)param_1 & 1) != 0) goto LAB_107434714;
        }
        if (((ulong)unaff_x24 & unaff_x23) == 0) {
          plVar7 = (long *)((ulong)extraout_x8 & unaff_x23);
        }
        else {
          plVar7 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x00010743c03c();
            plVar7 = extraout_x8_00;
          }
        }
        uVar4 = (long)plVar7 - (long)unaff_x25 < 0;
        uVar5 = plVar7 == unaff_x25;
      } while ((bool)uVar5);
    }
  }
LAB_10743457c:
  func_0x00010743c1d4();
  func_0x00010743b288();
  *(undefined1 *)((long)unaff_x20 + 0x4c) = 0;
  *(undefined4 *)(unaff_x20 + 9) = 0;
  func_0x00010743b584();
  if ((unaff_x24 != (long *)0x0) && (func_0x00010743b688(), !(bool)uVar4)) goto LAB_1074346d4;
  func_0x00010743b2f8();
  uVar4 = (long *)0x2 < unaff_x24;
  uVar5 = unaff_x24 == (long *)0x3;
  func_0x00010743b2c0();
  func_0x00010743c1c8();
  if ((bool)uVar5) {
    unaff_x22 = (long *)0x2;
  }
  else {
    uVar5 = ((ulong)unaff_x22 & extraout_x8_01) == 0;
    uVar4 = 0;
    if (!(bool)uVar5) {
      func_0x00010743bd94();
      unaff_x22 = param_1;
    }
  }
  func_0x00010743c078();
  if (!(bool)uVar4 || (bool)uVar5) {
    if (!(bool)uVar4) {
      func_0x00010743b35c();
      if (((bool)uVar4) && (func_0x00010743bdec(), extraout_x8_04 == 0)) {
        func_0x00010743b20c();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010743ba24();
      if ((bool)uVar4) {
        unaff_x24 = *(long **)(unaff_x19 + 8);
      }
      else {
        if (unaff_x22 != (long *)0x0) goto LAB_1074345d8;
        func_0x00010743c108();
        FUN_107434734();
        func_0x00010743c150();
      }
    }
  }
  else {
LAB_1074345d8:
    if ((ulong)unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x107434728);
      (*pcVar2)();
    }
    __Znwm((long)unaff_x22 << 3);
    FUN_107434734();
    func_0x00010743b9f8();
    plVar7 = extraout_x9;
    while (uVar5 = unaff_x22 == plVar7, !(bool)uVar5) {
      func_0x00010743baf0();
      plVar7 = extraout_x9_00;
    }
    unaff_x24 = unaff_x22;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010743b618();
      func_0x00010743b604();
      plVar7 = extraout_x10;
      while (*plVar7 != 0) {
        func_0x00010743c180();
        lVar6 = extraout_x8_02;
        plVar7 = extraout_x12;
        plVar8 = extraout_x11;
        if ((bool)uVar5) {
          plVar9 = (long *)((ulong)extraout_x13 & extraout_x9_01);
        }
        else {
          plVar9 = extraout_x13;
          if (unaff_x22 <= extraout_x13) {
            func_0x00010743c1bc();
            lVar6 = extraout_x8_03;
            plVar8 = extraout_x11_00;
            plVar7 = extraout_x12_00;
            plVar9 = extraout_x13_00;
          }
        }
        uVar5 = plVar9 == plVar8;
        if (!(bool)uVar5) {
          if (*(long *)(lVar6 + (long)plVar9 * 8) == 0) {
            func_0x00010743bc98();
            plVar7 = extraout_x12_01;
          }
          else {
            func_0x00010743b22c();
            plVar7 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x00010743bce4();
  if ((bool)uVar5) {
    uVar5 = 1;
  }
  else {
    uVar5 = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010743bad8();
    }
  }
LAB_1074346d4:
  func_0x00010743c054();
  if (extraout_x9_02 == 0) {
    func_0x00010743b4bc();
    if (extraout_x9_03 != 0) {
      func_0x00010743b678();
      lVar6 = extraout_x8_05;
      if ((bool)uVar5) {
        plVar7 = (long *)((ulong)extraout_x9_04 & extraout_x10_01);
      }
      else {
        plVar7 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010743bccc();
          lVar6 = extraout_x8_06;
          plVar7 = extraout_x9_05;
        }
      }
      *(long **)(lVar6 + (long)plVar7 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010743b7a8();
  }
  func_0x00010743b4d4();
  FUN_10743474c();
LAB_107434714:
  return unaff_x20 + 9;
}



/* Entry: 1074344f4; end: 107434733;  */

long * FUN_1074344f4(ulong param_1)

{
  code *pcVar1;
  undefined1 in_NG;
  undefined1 in_ZR;
  undefined1 in_CY;
  undefined1 uVar2;
  undefined1 uVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar4;
  long extraout_x8_04;
  long extraout_x8_05;
  long extraout_x8_06;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  long extraout_x9_02;
  long extraout_x9_03;
  ulong extraout_x9_04;
  ulong extraout_x9_05;
  ulong uVar5;
  long *extraout_x10;
  long *plVar6;
  long *extraout_x10_00;
  ulong extraout_x10_01;
  ulong extraout_x11;
  ulong extraout_x11_00;
  long *extraout_x12;
  long *extraout_x12_00;
  long *extraout_x12_01;
  ulong extraout_x13;
  ulong extraout_x13_00;
  ulong uVar7;
  long unaff_x19;
  long *unaff_x20;
  ulong unaff_x21;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong unaff_x24;
  ulong unaff_x25;
  
  func_0x00010743c39c();
  func_0x00010743b648();
  func_0x00010743c1a4();
  if (unaff_x24 != 0) {
    func_0x00010743c3fc();
    if ((bool)in_ZR) {
      unaff_x25 = unaff_x23 & unaff_x21;
    }
    else {
      func_0x00010743c06c();
      if ((bool)in_CY) {
        func_0x00010743bad8();
      }
    }
    func_0x00010743c060();
    if (unaff_x20 != (long *)0x0) {
      do {
        while( true ) {
          unaff_x20 = (long *)*unaff_x20;
          if (unaff_x20 == (long *)0x0) goto LAB_10743457c;
          func_0x00010743c048();
          if (!(bool)in_ZR) break;
          func_0x00010743b818();
          if ((param_1 & 1) != 0) goto LAB_107434714;
        }
        if ((unaff_x24 & unaff_x23) == 0) {
          uVar5 = extraout_x8 & unaff_x23;
        }
        else {
          uVar5 = extraout_x8;
          if (unaff_x24 <= extraout_x8) {
            func_0x00010743c03c();
            uVar5 = extraout_x8_00;
          }
        }
        in_NG = (long)(uVar5 - unaff_x25) < 0;
        in_ZR = uVar5 == unaff_x25;
      } while ((bool)in_ZR);
    }
  }
LAB_10743457c:
  func_0x00010743c1d4();
  func_0x00010743b288();
  *(undefined1 *)((long)unaff_x20 + 0x4c) = 0;
  *(undefined4 *)(unaff_x20 + 9) = 0;
  func_0x00010743b584();
  if ((unaff_x24 != 0) && (func_0x00010743b688(), !(bool)in_NG)) goto LAB_1074346d4;
  func_0x00010743b2f8();
  uVar2 = 2 < unaff_x24;
  uVar3 = unaff_x24 == 3;
  func_0x00010743b2c0();
  func_0x00010743c1c8();
  if ((bool)uVar3) {
    unaff_x22 = 2;
  }
  else {
    uVar3 = (unaff_x22 & extraout_x8_01) == 0;
    uVar2 = 0;
    if (!(bool)uVar3) {
      func_0x00010743bd94();
      unaff_x22 = param_1;
    }
  }
  func_0x00010743c078();
  if (!(bool)uVar2 || (bool)uVar3) {
    if (!(bool)uVar2) {
      func_0x00010743b35c();
      if (((bool)uVar2) && (func_0x00010743bdec(), extraout_x8_04 == 0)) {
        func_0x00010743b20c();
      }
      else {
        __ZNSt3__112__next_primeEm();
      }
      func_0x00010743ba24();
      if ((bool)uVar2) {
        unaff_x24 = *(ulong *)(unaff_x19 + 8);
      }
      else {
        if (unaff_x22 != 0) goto LAB_1074345d8;
        func_0x00010743c108();
        FUN_107434734();
        func_0x00010743c150();
      }
    }
  }
  else {
LAB_1074345d8:
    if (unaff_x22 >> 0x3d != 0) {
      func_0x000104bd35f4();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x107434728);
      (*pcVar1)();
    }
    __Znwm(unaff_x22 << 3);
    FUN_107434734();
    func_0x00010743b9f8();
    uVar5 = extraout_x9;
    while (uVar3 = unaff_x22 == uVar5, !(bool)uVar3) {
      func_0x00010743baf0();
      uVar5 = extraout_x9_00;
    }
    unaff_x24 = unaff_x22;
    if (*(long *)(unaff_x19 + 0x10) != 0) {
      func_0x00010743b618();
      func_0x00010743b604();
      plVar6 = extraout_x10;
      while (*plVar6 != 0) {
        func_0x00010743c180();
        lVar4 = extraout_x8_02;
        plVar6 = extraout_x12;
        uVar5 = extraout_x11;
        if ((bool)uVar3) {
          uVar7 = extraout_x13 & extraout_x9_01;
        }
        else {
          uVar7 = extraout_x13;
          if (unaff_x22 <= extraout_x13) {
            func_0x00010743c1bc();
            lVar4 = extraout_x8_03;
            uVar5 = extraout_x11_00;
            plVar6 = extraout_x12_00;
            uVar7 = extraout_x13_00;
          }
        }
        uVar3 = uVar7 == uVar5;
        if (!(bool)uVar3) {
          if (*(long *)(lVar4 + uVar7 * 8) == 0) {
            func_0x00010743bc98();
            plVar6 = extraout_x12_01;
          }
          else {
            func_0x00010743b22c();
            plVar6 = extraout_x10_00;
          }
        }
      }
    }
  }
  func_0x00010743bce4();
  if ((bool)uVar3) {
    in_ZR = 1;
  }
  else {
    in_ZR = unaff_x21 == unaff_x24;
    if (unaff_x24 <= unaff_x21) {
      func_0x00010743bad8();
    }
  }
LAB_1074346d4:
  func_0x00010743c054();
  if (extraout_x9_02 == 0) {
    func_0x00010743b4bc();
    if (extraout_x9_03 != 0) {
      func_0x00010743b678();
      lVar4 = extraout_x8_05;
      if ((bool)in_ZR) {
        uVar5 = extraout_x9_04 & extraout_x10_01;
      }
      else {
        uVar5 = extraout_x9_04;
        if (unaff_x24 <= extraout_x9_04) {
          func_0x00010743bccc();
          lVar4 = extraout_x8_06;
          uVar5 = extraout_x9_05;
        }
      }
      *(long **)(lVar4 + uVar5 * 8) = unaff_x20;
    }
  }
  else {
    func_0x00010743b7a8();
  }
  func_0x00010743b4d4();
  FUN_10743474c();
LAB_107434714:
  return unaff_x20 + 9;
}



/* Entry: 107434734; end: 10743474b;  */

void FUN_107434734(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10743474c; end: 1074347cf;  */

void FUN_10743474c(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010743b62c();
  if (unaff_x20 != 0) {
    func_0x00010743bd30();
    if ((bool)in_ZR) {
      func_0x000104c2f714(unaff_x20 + 0x10);
    }
    func_0x00010743b7f4();
  }
  return;
}



/* Entry: 1074347d0; end: 1074347d3;  */

void FUN_1074347d0(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109af590;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 1074347d4; end: 1074347e7;  */

void FUN_1074347d4(void)

{
  func_0x0001074347f4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074347e8; end: 1074347ff;  */

void FUN_1074347e8(long param_1)

{
  param_1 = param_1 + 0x28;
  func_0x00010730ca44();
  if (param_1 != 0) {
    func_0x00010730c910();
  }
  return;
}



/* Entry: 107434800; end: 10743486b;  */

undefined8 * FUN_107434800(long *param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined1 auStack_40 [8];
  undefined8 auStack_38 [3];
  
  if (*(int *)(*param_1 + 0x20) != 0) {
    FUN_107428d14(auStack_40,param_3);
    func_0x00010743bde0();
    FUN_107428c88();
    puVar1 = auStack_38;
    func_0x00010730b05c(puVar1);
    return puVar1;
  }
  puVar1 = (undefined8 *)(param_2 + 8);
  if (puVar1 != (undefined8 *)(param_3 + 8)) {
    func_0x0001073bc4ec(puVar1,*(undefined8 *)(param_3 + 8),*(undefined8 *)(param_3 + 0x10));
  }
  return puVar1;
}



/* Entry: 10743486c; end: 1074348ef;  */

long * FUN_10743486c(long *param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  
  if (*(int *)(*param_1 + 0x20) == 1) {
    if (param_2 != param_3) {
      lVar3 = *(long *)(param_3 + 8);
      lVar7 = *(long *)(param_3 + 0x10);
      uVar5 = lVar7 - lVar3 >> 2;
      plVar4 = (long *)(param_2 + 8);
      uVar6 = *(ulong *)(param_2 + 0x18);
      plVar8 = (long *)*plVar4;
      if ((ulong)((long)(uVar6 - (long)plVar8) >> 2) < uVar5) {
        plVar9 = plVar4;
        if (plVar8 != (long *)0x0) {
          *(long **)(param_2 + 0x10) = plVar8;
          __ZdlPv();
          uVar6 = 0;
          *plVar4 = 0;
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(undefined8 *)(param_2 + 0x18) = 0;
          plVar9 = plVar8;
        }
        if (uVar5 >> 0x3e != 0) {
          func_0x000105536fa8();
          *plVar9 = (long)&PTR_DAT_1108a5c28;
          if (((char)plVar9[9] == '\x01') && (plVar9[6] != 0)) {
            plVar9[7] = plVar9[6];
            __ZdlPv();
          }
          func_0x000105675a70(plVar9 + 4);
          return plVar9;
        }
        uVar2 = (long)uVar6 >> 1;
        if ((ulong)((long)uVar6 >> 1) <= uVar5) {
          uVar2 = uVar5;
        }
        if (0x7ffffffffffffffb < uVar6) {
          uVar2 = 0x3fffffffffffffff;
        }
        func_0x000105536f6c(plVar4,uVar2);
        plVar8 = *(long **)(param_2 + 0x10);
        lVar7 = lVar7 - lVar3;
        if (lVar7 != 0) {
          plVar4 = plVar8;
          _memmove(plVar8,lVar3,lVar7);
        }
        lVar7 = (long)plVar8 + lVar7;
      }
      else {
        plVar9 = *(long **)(param_2 + 0x10);
        if ((ulong)((long)plVar9 - (long)plVar8 >> 2) < uVar5) {
          lVar1 = lVar3 + ((long)plVar9 - (long)plVar8);
          if (plVar9 != plVar8) {
            _memmove(plVar8,lVar3);
            plVar9 = *(long **)(param_2 + 0x10);
            plVar4 = plVar8;
          }
          lVar7 = lVar7 - lVar1;
          if (lVar7 != 0) {
            plVar4 = plVar9;
            _memmove(plVar9,lVar1,lVar7);
          }
          lVar7 = (long)plVar9 + lVar7;
        }
        else {
          lVar7 = lVar7 - lVar3;
          if (lVar7 != 0) {
            plVar4 = plVar8;
            _memmove(plVar8,lVar3,lVar7);
          }
          lVar7 = (long)plVar8 + lVar7;
        }
      }
      *(long *)(param_2 + 0x10) = lVar7;
      return plVar4;
    }
  }
  else {
    FUN_107428ba4(&stack0xffffffffffffffc0,param_3);
    func_0x00010743bde0();
    FUN_107428cbc();
    param_1 = (long *)&stack0xffffffffffffffc8;
    func_0x00010731e26c(param_1);
  }
  return param_1;
}



/* Entry: 1074348f0; end: 10743495f;  */

void FUN_1074348f0(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  func_0x00010743bf5c();
  if (extraout_x8 - unaff_x20 != 0) {
    func_0x000107429764();
    lVar1 = *(long *)(unaff_x19 + 8);
    _memmove(lVar1);
    *(long *)(unaff_x19 + 8) = lVar1 + (extraout_x8 - unaff_x20);
  }
  uStack_38 = 1;
  FUN_107434960(auStack_40);
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  return;
}



/* Entry: 107434960; end: 10743498b;  */

long FUN_107434960(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_107425d14(param_1);
  }
  return param_1;
}



/* Entry: 10743498c; end: 1074349fb;  */

void FUN_10743498c(void)

{
  long extraout_x8;
  long unaff_x19;
  long unaff_x20;
  long lVar1;
  undefined1 auStack_40 [8];
  undefined1 uStack_38;
  
  func_0x00010743bf5c();
  if (extraout_x8 - unaff_x20 != 0) {
    func_0x000107429974();
    lVar1 = *(long *)(unaff_x19 + 8);
    _memmove(lVar1);
    *(long *)(unaff_x19 + 8) = lVar1 + (extraout_x8 - unaff_x20);
  }
  uStack_38 = 1;
  FUN_1074349fc(auStack_40);
  *(undefined1 *)(unaff_x19 + 0x18) = 1;
  return;
}



/* Entry: 1074349fc; end: 107434a27;  */

long FUN_1074349fc(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_107425cbc(param_1);
  }
  return param_1;
}



/* Entry: 107434a28; end: 107434a37;  */

undefined8 * FUN_107434a28(undefined8 *param_1,long param_2)

{
  param_1 = (undefined8 *)*param_1;
  *param_1 = &PTR_DAT_11099ed40;
  func_0x000107428d48(param_1 + 1,param_2 + 8);
  return param_1;
}



/* Entry: 107434a38; end: 107434a63;  */

long FUN_107434a38(long param_1)

{
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_107425d4c(param_1);
  }
  return param_1;
}



/* Entry: 107434a64; end: 107434a87;  */

undefined8 FUN_107434a64(undefined8 param_1)

{
  FUN_107434a88();
  return param_1;
}



/* Entry: 107434a88; end: 107434acf;  */

undefined8 * FUN_107434a88(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  cVar1 = *(char *)(param_1 + 6);
  if (cVar1 == *(char *)(param_2 + 6)) {
    if (cVar1 != '\0') {
      uVar4 = param_2[1];
      uVar3 = *param_2;
      uVar6 = param_2[3];
      uVar5 = param_2[2];
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
      param_1[1] = uVar4;
      *param_1 = uVar3;
      param_1[3] = uVar6;
      param_1[2] = uVar5;
      func_0x00010730af6c(param_1 + 5,param_2 + 5);
      return param_1;
    }
  }
  else {
    if (cVar1 != '\0') {
      puVar2 = param_1;
      if (*(char *)(param_1 + 6) == '\x01') {
        puVar2 = param_1 + 5;
        func_0x00010730af90(puVar2);
        *(undefined1 *)(param_1 + 6) = 0;
      }
      return puVar2;
    }
    uVar4 = param_2[1];
    uVar3 = *param_2;
    uVar6 = param_2[3];
    uVar5 = param_2[2];
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
    param_1[1] = uVar4;
    *param_1 = uVar3;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar3 = param_2[5];
    param_2[5] = 0;
    param_1[5] = uVar3;
    *(undefined1 *)(param_1 + 6) = 1;
  }
  return param_1;
}



/* Entry: 107434ad0; end: 107434b0b;  */

void FUN_107434ad0(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  
  *param_1 = 0;
  param_1[1] = 0;
  lVar1 = param_2[1];
  if (lVar1 != 0) {
    __ZNSt3__119__shared_weak_count4lockEv();
    param_1[1] = lVar1;
    if (lVar1 != 0) {
      *param_1 = *param_2;
    }
  }
  return;
}



/* Entry: 107434b0c; end: 107434b3b;  */

long FUN_107434b0c(long param_1,undefined8 param_2)

{
  FUN_10742ab68(param_1 + 8,param_1 + 8,param_2);
  return param_1;
}



/* Entry: 107434b3c; end: 107434c83;  */

void FUN_107434b3c(long param_1,long *param_2)

{
  undefined1 in_ZR;
  undefined1 uVar1;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong uVar2;
  ulong extraout_x9;
  ulong extraout_x9_00;
  ulong extraout_x9_01;
  ulong extraout_x9_02;
  ulong uVar3;
  long extraout_x10;
  long extraout_x10_00;
  long extraout_x10_01;
  long lVar4;
  ulong extraout_x12;
  ulong extraout_x12_00;
  ulong extraout_x12_01;
  ulong uVar5;
  long extraout_x13;
  long extraout_x13_00;
  long extraout_x13_01;
  long lVar6;
  long extraout_x14;
  long extraout_x14_00;
  long lVar7;
  ulong uVar8;
  long unaff_x19;
  
  func_0x00010743bc24();
  if ((bool)in_ZR) {
    uVar1 = 1;
  }
  else {
    uVar1 = extraout_x8 == extraout_x9;
    if (extraout_x9 <= extraout_x8) {
      func_0x00010743c114();
    }
  }
  do {
    func_0x00010743bfdc();
  } while (!(bool)uVar1);
  uVar2 = extraout_x8_00;
  uVar3 = extraout_x9_00;
  lVar4 = extraout_x10;
  uVar5 = extraout_x12;
  lVar6 = extraout_x13;
  if (extraout_x10 == param_1 + 0x10) {
LAB_107434bac:
    if (unaff_x19 == 0) {
LAB_107434bd8:
      *(undefined8 *)(lVar6 + uVar2 * 8) = 0;
      lVar7 = *param_2;
      goto LAB_107434be0;
    }
    if ((uVar3 & uVar5) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(ulong *)(unaff_x19 + 8) == uVar3;
      if (uVar3 <= *(ulong *)(unaff_x19 + 8)) {
        func_0x00010743bef4();
      }
    }
    func_0x00010743bee8();
    uVar2 = extraout_x8_02;
    uVar3 = extraout_x9_02;
    lVar4 = extraout_x10_01;
    uVar5 = extraout_x12_01;
    lVar6 = extraout_x13_01;
    lVar7 = extraout_x14_00;
    if (!(bool)uVar1) goto LAB_107434bd8;
  }
  else {
    if ((extraout_x9_00 & extraout_x12) == 0) {
      uVar1 = 1;
    }
    else {
      uVar1 = *(ulong *)(extraout_x10 + 8) == extraout_x9_00;
      if (extraout_x9_00 <= *(ulong *)(extraout_x10 + 8)) {
        func_0x00010743bef4();
      }
    }
    func_0x00010743bee8();
    uVar2 = extraout_x8_01;
    uVar3 = extraout_x9_01;
    lVar4 = extraout_x10_00;
    uVar5 = extraout_x12_00;
    lVar6 = extraout_x13_00;
    lVar7 = extraout_x14;
    if (!(bool)uVar1) goto LAB_107434bac;
LAB_107434be0:
    if (lVar7 == 0) goto LAB_107434c18;
  }
  uVar8 = *(ulong *)(lVar7 + 8);
  if ((uVar3 & uVar5) == 0) {
    uVar8 = uVar8 & uVar5;
  }
  else if (uVar3 <= uVar8) {
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar8 / uVar3;
    }
    uVar8 = uVar8 - uVar5 * uVar3;
  }
  if (uVar8 != uVar2) {
    *(long *)(lVar6 + uVar8 * 8) = lVar4;
  }
LAB_107434c18:
  func_0x00010743b4ec();
  func_0x000107434c2c();
  return;
}



/* Entry: 107434c84; end: 107434cbf;  */

void FUN_107434c84(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010743c01c();
  if (!(bool)in_ZR) {
    func_0x00010743b5c8((&PTR_FUN_1109af5f0)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 107434cc0; end: 107434ccb;  */

void FUN_107434cc0(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001072afd54();
  *unaff_x19 = 0;
  if (param_2 != 0) {
    func_0x0001072afa4c();
  }
  return;
}



/* Entry: 107434ccc; end: 107434edb;  */

void FUN_107434ccc(long param_1)

{
  func_0x00010743bdf8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 107434edc; end: 107434f17;  */

void FUN_107434edc(void)

{
  undefined1 in_ZR;
  long extraout_x8;
  long unaff_x19;
  
  func_0x00010743c01c();
  if (!(bool)in_ZR) {
    func_0x00010743b5c8((&PTR_FUN_1109af600)[extraout_x8]);
  }
  *(undefined4 *)(unaff_x19 + 0x10) = 0xffffffff;
  return;
}



/* Entry: 107434f18; end: 107434f23;  */

void FUN_107434f18(undefined8 param_1,long param_2)

{
  undefined8 *unaff_x19;
  
  func_0x0001072afd54();
  *unaff_x19 = 0;
  if (param_2 != 0) {
    func_0x0001072afa4c();
  }
  return;
}



/* Entry: 107434f24; end: 107434f47;  */

void FUN_107434f24(long param_1)

{
  func_0x00010743bdf8();
  if (param_1 != 0) {
    __ZNSt3__119__shared_weak_count14__release_weakEv();
  }
  return;
}



/* Entry: 107434f48; end: 107434fe7;  */

long FUN_107434f48(long param_1)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  long extraout_x8;
  ulong uVar1;
  ulong extraout_x8_00;
  ulong unaff_x20;
  long *unaff_x21;
  ulong uVar2;
  ulong unaff_x23;
  ulong unaff_x24;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if ((uVar2 != 0) && (func_0x00010743c198(), extraout_x8 != 0)) {
    func_0x00010743bd5c();
    func_0x00010743ba08();
    if ((bool)in_ZR) {
      unaff_x24 = unaff_x20 & unaff_x23;
    }
    else {
      func_0x00010743c174();
      if ((bool)in_CY) {
        func_0x00010743c0e4();
      }
    }
    func_0x00010743c120();
    if (unaff_x21 == (long *)0x0) {
      return 0;
    }
    do {
      while( true ) {
        unaff_x21 = (long *)*unaff_x21;
        if (unaff_x21 == (long *)0x0) {
          return 0;
        }
        uVar1 = unaff_x21[1];
        if (unaff_x20 != uVar1) break;
        func_0x00010743b6d4();
        if ((int)param_1 != 0) {
          return (long)unaff_x21;
        }
      }
      if ((uVar2 & unaff_x23) == 0) {
        uVar1 = uVar1 & unaff_x23;
      }
      else if (uVar2 <= uVar1) {
        func_0x00010743c0c0();
        uVar1 = extraout_x8_00;
      }
    } while (uVar1 == unaff_x24);
  }
  return 0;
}



/* Entry: 107434fe8; end: 107435037;  */

long * FUN_107434fe8(long *param_1)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)param_1[2];
  while (plVar2 != (long *)0x0) {
    lVar1 = (long)(plVar2 + 2);
    plVar2 = (long *)*plVar2;
    func_0x000104c2f714(lVar1);
    func_0x00010743b7f4();
  }
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 107435038; end: 10743504f;  */

void FUN_107435038(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 107435050; end: 1074350a7;  */

void FUN_107435050(void)

{
  undefined1 in_ZR;
  long unaff_x20;
  
  func_0x00010743b62c();
  if (unaff_x20 != 0) {
    func_0x00010743bd30();
    if ((bool)in_ZR) {
      func_0x000104c2f714(unaff_x20 + 0x10);
    }
    func_0x00010743b7f4();
  }
  return;
}



/* Entry: 1074350a8; end: 1074350bf;  */

void FUN_1074350a8(void)

{
  func_0x00010743b8c8();
  return;
}



/* Entry: 1074350c0; end: 1074350d7;  */

void FUN_1074350c0(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 1074350d8; end: 1074350f7;  */

void FUN_1074350d8(void)

{
  func_0x00010743ba18();
  FUN_1074350f8();
  return;
}



/* Entry: 1074350f8; end: 10743510f;  */

void FUN_1074350f8(long *param_1,long param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long unaff_x19;
  
  lVar1 = *param_1;
  *param_1 = param_2;
  if (lVar1 == 0) {
    return;
  }
  func_0x00010743bfbc(param_1 + 1);
  if ((bool)in_ZR) {
    func_0x00010743c22c();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107435110; end: 107435167;  */

void FUN_107435110(void)

{
  undefined1 in_ZR;
  long unaff_x19;
  
  func_0x00010743bfbc();
  if ((bool)in_ZR) {
    func_0x00010743c22c();
  }
  else if (unaff_x19 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 107435168; end: 107435183;  */

void FUN_107435168(long *param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  if (param_1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000107435174. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*param_1 + 0x30))();
    return;
  }
  func_0x000104bfeb48();
  func_0x00010743b73c();
  func_0x0001072ad11c();
  *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(unaff_x19 + 8);
  return;
}



/* Entry: 107435184; end: 1074351d3;  */

void FUN_107435184(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010743b73c();
  func_0x0001072ad11c();
  *(undefined8 *)(unaff_x20 + 8) = *(undefined8 *)(unaff_x19 + 8);
  return;
}



/* Entry: 1074351d4; end: 1074351e7;  */

void FUN_1074351d4(void)

{
  func_0x0001074351ac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 1074351e8; end: 107435207;  */

void FUN_1074351e8(undefined8 param_1)

{
  long unaff_x19;
  
  func_0x00010743b63c();
  func_0x00010743b73c(param_1,unaff_x19 + 8);
  FUN_10743b554(&PTR_SUB_1109af620);
  return;
}



/* Entry: 107435208; end: 107435227;  */

void FUN_107435208(long param_1,undefined8 param_2)

{
  func_0x00010743b73c(param_2,param_1 + 8);
  FUN_10743b554(&PTR_SUB_1109af620);
  return;
}



/* Entry: 107435228; end: 1074352b3;  */

void FUN_107435228(void)

{
  undefined1 in_ZR;
  int iVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [88];
  
  iVar1 = (int)auStack_b0;
  func_0x00010743b73c();
  func_0x00010743b2d4();
  func_0x00010743bc40();
  func_0x00010743bc38();
  if (iVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x20);
    FUN_1074306c0(auStack_a0);
    func_0x00010743b9a0();
    FUN_10743295c(auStack_88,lVar2 + 0x28);
    FUN_1073f01e4(unaff_x20 + 8);
    func_0x0001073b4a44(auStack_a0);
  }
  func_0x00010743b890();
  func_0x00010743b24c();
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010743bd3c();
  FUN_1073f01e4();
  func_0x0001073b4a44(auStack_a0);
  func_0x00010743b890();
  func_0x00010743b660();
  func_0x00010743b95c();
  func_0x00010743b7c8();
  func_0x00010743b3cc();
  return;
}



/* Entry: 1074352b4; end: 1074352db;  */

void FUN_1074352b4(undefined8 param_1)

{
  func_0x00010743b95c();
  func_0x00010743b7c8(param_1,&PTR_DAT_1109af690);
  func_0x00010743b3cc();
  return;
}



/* Entry: 1074352dc; end: 1074352e7;  */

undefined ** FUN_1074352dc(void)

{
  return &PTR_DAT_1109af690;
}



/* Entry: 1074352e8; end: 10743530b;  */

void FUN_1074352e8(void)

{
  func_0x00010743b73c();
  FUN_10743b554(&PTR_SUB_1109af620);
  return;
}



/* Entry: 10743530c; end: 10743533b;  */

void FUN_10743530c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int extraout_w10;
  undefined8 uVar2;
  
  lVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  if (lVar1 != 0) {
    do {
      func_0x00010743b4a0();
    } while (extraout_w10 != 0);
  }
  param_1[2] = param_2[2];
  return;
}



/* Entry: 10743533c; end: 10743546f;  */

void FUN_10743533c(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 uVar2;
  long **pplVar3;
  long *plStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  long *plStack_30;
  undefined8 uStack_28;
  
  pplVar3 = &plStack_50;
  func_0x00010726fc00(&plStack_30,param_2);
  if (plStack_30 != (long *)0x0) {
    func_0x00010726fc3c();
    uVar2 = uStack_28;
    plVar1 = plStack_30;
    if (*plStack_30 != -1) {
      plStack_30 = (long *)0x0;
      uStack_28 = 0;
      *param_1 = plVar1;
      param_1[1] = uVar2;
      uStack_40 = 0;
      uStack_38 = 0;
      func_0x0001072508cc(&uStack_40);
      pplVar3 = &plStack_30;
      goto LAB_1074353b4;
    }
    func_0x00010726fc88();
  }
  func_0x0001072508cc(&plStack_30);
  *param_1 = 0;
  param_1[1] = 0;
  plStack_50 = (long *)0x0;
  uStack_48 = 0;
LAB_1074353b4:
  func_0x0001072508cc(pplVar3);
  return;
}



/* Entry: 107435470; end: 107435483;  */

void FUN_107435470(void)

{
  func_0x000107435448();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



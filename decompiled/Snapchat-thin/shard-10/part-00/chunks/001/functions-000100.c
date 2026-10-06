/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10748b534; end: 10748b567;  */

void FUN_10748b534(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (*(int *)(param_1 + 0x30) == 2) {
    func_0x00010748f2a8(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
    *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
    *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
    return;
  }
  func_0x00010748f668();
  FUN_10748b598();
  return;
}



/* Entry: 10748b568; end: 10748b597;  */

void FUN_10748b568(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8();
  func_0x00010727e15c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x2c);
  *(undefined4 *)(unaff_x20 + 0x28) = *(undefined4 *)(unaff_x19 + 0x28);
  *(undefined1 *)(unaff_x20 + 0x2c) = uVar1;
  return;
}



/* Entry: 10748b598; end: 10748b5a3;  */

void FUN_10748b598(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010748f2a8(*param_1,param_1[1]);
  FUN_10748a94c();
  func_0x00010748f6a4();
  FUN_10748b3c0();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10748b5a4; end: 10748b5cf;  */

void FUN_10748b5a4(void)

{
  long unaff_x20;
  
  func_0x00010748f2a8();
  FUN_10748a94c();
  func_0x00010748f6a4();
  FUN_10748b3c0();
  *(undefined4 *)(unaff_x20 + 0x30) = 2;
  return;
}



/* Entry: 10748b5d0; end: 10748b61b;  */

void FUN_10748b5d0(void)

{
  undefined1 in_ZR;
  int extraout_w8;
  long unaff_x19;
  
  func_0x00010748f654();
  if ((bool)in_ZR) {
    if (extraout_w8 != 0) {
      func_0x00010748f5f4();
    }
  }
  else if (extraout_w8 == 0) {
    FUN_10748b61c();
  }
  else {
    FUN_10748a900();
    *(undefined1 *)(unaff_x19 + 8) = 0;
  }
  return;
}



/* Entry: 10748b61c; end: 10748b643;  */

void FUN_10748b61c(void)

{
  long unaff_x19;
  
  func_0x00010748ff20();
  FUN_10748b644();
  *(undefined1 *)(unaff_x19 + 8) = 1;
  return;
}



/* Entry: 10748b644; end: 10748b66f;  */

void FUN_10748b644(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  func_0x00010748f2a8();
  uVar1 = 0x78;
  __Znwm();
  FUN_10748b670();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 10748b670; end: 10748b6af;  */

void FUN_10748b670(undefined8 param_1,long param_2)

{
  func_0x00010748f1f0();
  if (*(char *)(param_2 + 8) == '\x01') {
    func_0x00010748ff14();
    FUN_10748b61c();
  }
  func_0x00010748f608();
  FUN_10748b6b0();
  return;
}



/* Entry: 10748b6b0; end: 10748b6d7;  */

void FUN_10748b6b0(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010748f2c4();
  *(undefined4 *)(param_1 + 0x50) = extraout_w8;
  FUN_10748b6d8();
  return;
}



/* Entry: 10748b6d8; end: 10748b71b;  */

void FUN_10748b6d8(void)

{
  int iVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2f0();
  FUN_10748a890();
  iVar1 = *(int *)(unaff_x20 + 0x50);
  if (iVar1 != -1) {
    func_0x00010748f1cc(&PTR_FUN_1109b3e30);
    *(int *)(unaff_x19 + 0x50) = iVar1;
  }
  return;
}



/* Entry: 10748b71c; end: 10748b733;  */

void FUN_10748b71c(void)

{
  return;
}



/* Entry: 10748b734; end: 10748b74f;  */

void FUN_10748b734(void)

{
  func_0x00010748fb80();
  func_0x00010748f834();
  return;
}



/* Entry: 10748b750; end: 10748b773;  */

undefined8 FUN_10748b750(undefined8 param_1)

{
  FUN_10748b774();
  return param_1;
}



/* Entry: 10748b774; end: 10748b7c7;  */

void FUN_10748b774(long param_1,long param_2)

{
  if (*(int *)(param_1 + 0x50) != -1 || *(int *)(param_2 + 0x50) != -1) {
    if (*(int *)(param_2 + 0x50) == -1) {
      if (*(uint *)(param_1 + 0x50) != 0xffffffff) {
        func_0x00010748f4e4((&PTR_FUN_1109b3d88)[*(uint *)(param_1 + 0x50)],param_1,param_1,param_2)
        ;
      }
      *(undefined4 *)(param_1 + 0x50) = 0xffffffff;
      return;
    }
    func_0x00010748f4f0();
  }
  return;
}



/* Entry: 10748b7c8; end: 10748b7db;  */

void FUN_10748b7c8(long *param_1)

{
  if (*(int *)(*param_1 + 0x50) != 0) {
    func_0x00010748f668();
    FUN_10748b804();
  }
  return;
}



/* Entry: 10748b7dc; end: 10748b803;  */

void FUN_10748b7dc(long param_1)

{
  if (*(int *)(param_1 + 0x50) != 0) {
    func_0x00010748f668();
    FUN_10748b804();
  }
  return;
}



/* Entry: 10748b804; end: 10748b827;  */

void FUN_10748b804(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10748a890(lVar1);
  *(undefined4 *)(lVar1 + 0x50) = 0;
  return;
}



/* Entry: 10748b828; end: 10748b82f;  */

void FUN_10748b828(long *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(*param_1 + 0x50) == 1) {
    uVar1 = *param_3;
    uVar3 = param_3[3];
    uVar2 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
    return;
  }
  func_0x00010748f668();
  FUN_10748b864();
  return;
}



/* Entry: 10748b830; end: 10748b863;  */

void FUN_10748b830(long param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(int *)(param_1 + 0x50) == 1) {
    uVar1 = *param_3;
    uVar3 = param_3[3];
    uVar2 = param_3[2];
    param_2[1] = param_3[1];
    *param_2 = uVar1;
    param_2[3] = uVar3;
    param_2[2] = uVar2;
    return;
  }
  func_0x00010748f668();
  FUN_10748b864();
  return;
}



/* Entry: 10748b864; end: 10748b86f;  */

void FUN_10748b864(undefined8 *param_1)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010748f2a8(*param_1,param_1[1]);
  FUN_10748a890();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x19[3];
  uVar2 = unaff_x19[2];
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[2] = uVar2;
  *(undefined4 *)(unaff_x20 + 10) = 1;
  return;
}



/* Entry: 10748b870; end: 10748b89f;  */

void FUN_10748b870(void)

{
  undefined8 *unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x00010748f2a8();
  FUN_10748a890();
  uVar1 = *unaff_x19;
  uVar3 = unaff_x19[3];
  uVar2 = unaff_x19[2];
  unaff_x20[1] = unaff_x19[1];
  *unaff_x20 = uVar1;
  unaff_x20[3] = uVar3;
  unaff_x20[2] = uVar2;
  *(undefined4 *)(unaff_x20 + 10) = 1;
  return;
}



/* Entry: 10748b8a0; end: 10748b8a7;  */

void FUN_10748b8a0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(*param_1 + 0x50) == 2) {
    func_0x00010748f2a8(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
    return;
  }
  func_0x00010748f668();
  FUN_10748b914();
  return;
}



/* Entry: 10748b8a8; end: 10748b8db;  */

void FUN_10748b8a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (*(int *)(param_1 + 0x50) == 2) {
    func_0x00010748f2a8(param_2,param_3);
    func_0x00010727e15c();
    uVar1 = *(undefined1 *)(unaff_x19 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
    uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
    *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
    *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
    *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
    *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
    return;
  }
  func_0x00010748f668();
  FUN_10748b914();
  return;
}



/* Entry: 10748b8dc; end: 10748b913;  */

void FUN_10748b8dc(void)

{
  undefined1 uVar1;
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x00010748f2a8();
  func_0x00010727e15c();
  uVar1 = *(undefined1 *)(unaff_x19 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x30) = *(undefined8 *)(unaff_x19 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  *(undefined1 *)(unaff_x20 + 0x48) = uVar1;
  return;
}



/* Entry: 10748b914; end: 10748b91f;  */

void FUN_10748b914(undefined8 *param_1)

{
  long unaff_x20;
  
  func_0x00010748f2a8(*param_1,param_1[1]);
  FUN_10748a890();
  func_0x00010748f6a4();
  FUN_10748b734();
  *(undefined4 *)(unaff_x20 + 0x50) = 2;
  return;
}



/* Entry: 10748b920; end: 10748ba3b;  */

void FUN_10748b920(void)

{
  long unaff_x20;
  
  func_0x00010748f2a8();
  FUN_10748a890();
  func_0x00010748f6a4();
  FUN_10748b734();
  *(undefined4 *)(unaff_x20 + 0x50) = 2;
  return;
}



/* Entry: 10748ba3c; end: 10748babb;  */

undefined8 FUN_10748ba3c(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010748f2f0();
  FUN_10748bb28();
  func_0x00010748f7d0();
  FUN_10748bbd0();
  FUN_10748babc(lStack_48);
  lStack_48 = lStack_48 + 0x98;
  FUN_10748bb80();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010748bd98(auStack_58);
  return uVar1;
}



/* Entry: 10748babc; end: 10748bb27;  */

void FUN_10748babc(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x00010748f2a8();
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *param_2 = 0;
  param_2[1] = 0;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[8] = 0;
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  param_1[10] = param_2[10];
  param_2[8] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  func_0x000104c318bc(param_1 + 0xb,param_2 + 0xb);
  *(undefined1 *)(unaff_x20 + 0x90) = *(undefined1 *)(unaff_x19 + 0x90);
  return;
}



/* Entry: 10748bb28; end: 10748bb7f;  */

long * FUN_10748bb28(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0x1af286bca1af287) {
    uVar1 = (param_1[2] - *param_1) / 0x98;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0xd79435e50d7942 < uVar1) {
      plVar2 = (long *)0x1af286bca1af286;
    }
    return plVar2;
  }
  FUN_10748bbc4();
  func_0x00010748f2a8();
  plVar2 = param_1 + 2;
  FUN_10748bc60(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x98) * 0x98);
  func_0x00010748f328();
  return plVar2;
}



/* Entry: 10748bb80; end: 10748bbc3;  */

void FUN_10748bb80(long *param_1,long param_2)

{
  func_0x00010748f2a8();
  FUN_10748bc60(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x98) * 0x98);
  func_0x00010748f328();
  return;
}



/* Entry: 10748bbc4; end: 10748bbcf;  */

void FUN_10748bbc4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010748f584();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010748bc0c(param_4);
  }
  func_0x00010748f92c(0x98);
  return;
}



/* Entry: 10748bbd0; end: 10748bc2f;  */

void FUN_10748bbd0(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    func_0x00010748bc0c(param_4);
  }
  func_0x00010748f92c(0x98);
  return;
}



/* Entry: 10748bc30; end: 10748bc5f;  */

void FUN_10748bc30(undefined8 param_1,ulong param_2,undefined8 param_3,long param_4)

{
  ulong unaff_x19;
  undefined1 auStack_70 [24];
  undefined1 uStack_58;
  long lStack_48;
  
  if (param_2 < 0x1af286bca1af287) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x98);
    return;
  }
  func_0x000104bd35f4();
  func_0x00010748f590();
  func_0x00010748f570();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x98) {
    FUN_10748babc(param_4,param_2);
    param_4 = lStack_48 + 0x98;
    lStack_48 = param_4;
  }
  uStack_58 = 1;
  FUN_10748bce8();
  FUN_10748bd18(auStack_70);
  return;
}



/* Entry: 10748bc60; end: 10748bce7;  */

void FUN_10748bc60(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010748f590();
  func_0x00010748f570();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x98) {
    FUN_10748babc(param_4,param_2);
    param_4 = lStack_38 + 0x98;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10748bce8();
  FUN_10748bd18(auStack_60);
  return;
}



/* Entry: 10748bce8; end: 10748bd17;  */

void FUN_10748bce8(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x98) {
    func_0x00010748be00();
  }
  return;
}



/* Entry: 10748bd18; end: 10748bd47;  */

long FUN_10748bd18(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10748bd48(param_1);
  }
  return param_1;
}



/* Entry: 10748bd48; end: 10748bd67;  */

void FUN_10748bd48(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x98;
    func_0x00010748be00();
  }
  return;
}



/* Entry: 10748bd68; end: 10748bdc3;  */

void FUN_10748bd68(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x98;
    func_0x00010748be00();
  }
  return;
}



/* Entry: 10748bdc4; end: 10748bdcb;  */

void FUN_10748bdc4(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x98;
    func_0x00010748be00();
  }
  return;
}



/* Entry: 10748bdcc; end: 10748be5b;  */

void FUN_10748bdcc(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x98;
    func_0x00010748be00();
  }
  return;
}



/* Entry: 10748be5c; end: 10748be73;  */

void FUN_10748be5c(undefined8 *param_1)

{
  long lVar1;
  
  lVar1 = *(long *)*param_1;
  if (lVar1 != 0) {
    ((long *)*param_1)[1] = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10748be74; end: 10748beaf;  */

undefined8 * FUN_10748be74(undefined8 *param_1,long *param_2)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_10748beb0(param_1,*param_2,param_2[1],(param_2[1] - *param_2) / 0x160);
  return param_1;
}



/* Entry: 10748beb0; end: 10748bf1f;  */

void FUN_10748beb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  uStack_38 = 0;
  uStack_40 = param_1;
  if (param_4 != 0) {
    FUN_10748bf20(param_1,param_4);
    FUN_10748bf6c(param_1,param_2,param_3,param_4);
  }
  uStack_38 = 1;
  func_0x00010748c1d4(&uStack_40);
  return;
}



/* Entry: 10748bf20; end: 10748bf6b;  */

void FUN_10748bf20(long *param_1,ulong param_2)

{
  long *plVar1;
  
  if (param_2 < 0xba2e8ba2e8ba2f) {
    plVar1 = param_1 + 2;
    FUN_10748bfac();
    *param_1 = (long)plVar1;
    param_1[1] = (long)plVar1;
    param_1[2] = (long)(plVar1 + param_2 * 0x2c);
  }
  else {
    FUN_10748bfa0();
    plVar1 = param_1 + 2;
    func_0x00010748c000();
    param_1[1] = (long)plVar1;
  }
  return;
}



/* Entry: 10748bf6c; end: 10748bf9f;  */

void FUN_10748bf6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x10;
  func_0x00010748c000();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10748bfa0; end: 10748bfab;  */

void FUN_10748bfa0(void)

{
  func_0x00010748f584();
  FUN_10748bfd0();
  return;
}



/* Entry: 10748bfac; end: 10748bfcf;  */

void FUN_10748bfac(void)

{
  FUN_10748bfd0();
  return;
}



/* Entry: 10748bfd0; end: 10748c013;  */

void FUN_10748bfd0(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0xba2e8ba2e8ba2f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x160);
    return;
  }
  func_0x000104bd35f4();
  FUN_10748c014();
  return;
}



/* Entry: 10748c014; end: 10748c08f;  */

long FUN_10748c014(undefined8 param_1,long param_2,long param_3,long param_4)

{
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010748f570();
  uStack_48 = 0;
  for (; param_2 != param_3; param_2 = param_2 + 0x160) {
    FUN_10748c090(param_4,param_2);
    param_4 = lStack_38 + 0x160;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10748c154(auStack_60);
  return param_4;
}



/* Entry: 10748c090; end: 10748c153;  */

void FUN_10748c090(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010748f2f0();
  func_0x000107269bac();
  __ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEEC2ERKS5_
            (param_1 + 0x40,unaff_x20 + 0x40);
  func_0x000104c2fe00(unaff_x19 + 0x58,unaff_x20 + 0x58);
  func_0x000104c2fe00(unaff_x19 + 0x90,unaff_x20 + 0x90);
  *(undefined1 *)(unaff_x19 + 200) = *(undefined1 *)(unaff_x20 + 200);
  func_0x000107263b58(unaff_x19 + 0xd0,unaff_x20 + 0xd0);
  func_0x000107299490(unaff_x19 + 0x110,unaff_x20 + 0x110);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x149);
  *(undefined8 *)(unaff_x19 + 0x151) = *(undefined8 *)(unaff_x20 + 0x151);
  *(undefined8 *)(unaff_x19 + 0x149) = uVar7;
  *(undefined8 *)(unaff_x19 + 0x138) = uVar4;
  *(undefined8 *)(unaff_x19 + 0x130) = uVar3;
  *(undefined8 *)(unaff_x19 + 0x148) = uVar6;
  *(undefined8 *)(unaff_x19 + 0x140) = uVar5;
  *(undefined8 *)(unaff_x19 + 0x128) = uVar2;
  *(undefined8 *)(unaff_x19 + 0x120) = uVar1;
  return;
}



/* Entry: 10748c154; end: 10748c183;  */

long FUN_10748c154(long param_1)

{
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_10748c184(param_1);
  }
  return param_1;
}



/* Entry: 10748c184; end: 10748c1a3;  */

void FUN_10748c184(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = **(long **)(param_1 + 0x10);
  lVar2 = **(long **)(param_1 + 8);
  while (lVar1 != lVar2) {
    lVar1 = lVar1 + -0x160;
    func_0x0001072bc64c();
  }
  return;
}



/* Entry: 10748c1a4; end: 10748c25f;  */

void FUN_10748c1a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  while (param_3 != param_5) {
    param_3 = param_3 + -0x160;
    func_0x0001072bc64c();
  }
  return;
}



/* Entry: 10748c260; end: 10748c2df;  */

undefined8 FUN_10748c260(void)

{
  long unaff_x19;
  undefined8 uVar1;
  undefined1 auStack_58 [16];
  long lStack_48;
  
  func_0x00010748f2f0();
  FUN_10748c370();
  func_0x00010748f7d0();
  FUN_10748c40c();
  FUN_10748c2e0(lStack_48);
  lStack_48 = lStack_48 + 0x160;
  FUN_10748c3c8();
  uVar1 = *(undefined8 *)(unaff_x19 + 8);
  func_0x00010748c500(auStack_58);
  return uVar1;
}



/* Entry: 10748c2e0; end: 10748c36f;  */

void FUN_10748c2e0(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  func_0x00010748f2a8();
  func_0x0001072692b0();
  uVar2 = *(undefined8 *)(unaff_x19 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(unaff_x19 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x40) = 0;
  *(undefined8 *)(unaff_x19 + 0x48) = 0;
  *(undefined8 *)(unaff_x19 + 0x50) = 0;
  func_0x000104c318bc(param_1 + 0x58,unaff_x19 + 0x58);
  func_0x000104c318bc(unaff_x20 + 0x90,unaff_x19 + 0x90);
  *(undefined1 *)(unaff_x20 + 200) = *(undefined1 *)(unaff_x19 + 200);
  func_0x0001072649c8(unaff_x20 + 0xd0,unaff_x19 + 0xd0);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x110);
  *(undefined8 *)(unaff_x20 + 0x118) = *(undefined8 *)(unaff_x19 + 0x118);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar1;
  *(undefined8 *)(unaff_x19 + 0x110) = 0;
  *(undefined8 *)(unaff_x19 + 0x118) = 0;
  uVar2 = *(undefined8 *)(unaff_x19 + 0x128);
  uVar1 = *(undefined8 *)(unaff_x19 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x19 + 0x130);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x148);
  uVar5 = *(undefined8 *)(unaff_x19 + 0x140);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x149);
  *(undefined8 *)(unaff_x20 + 0x151) = *(undefined8 *)(unaff_x19 + 0x151);
  *(undefined8 *)(unaff_x20 + 0x149) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x138) = uVar4;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x148) = uVar6;
  *(undefined8 *)(unaff_x20 + 0x140) = uVar5;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar1;
  return;
}



/* Entry: 10748c370; end: 10748c3c7;  */

long * FUN_10748c370(long *param_1,long *param_2)

{
  ulong uVar1;
  long *plVar2;
  
  if (param_2 < (long *)0xba2e8ba2e8ba2f) {
    uVar1 = (param_1[2] - *param_1) / 0x160;
    plVar2 = (long *)(uVar1 * 2);
    if (plVar2 < param_2 || (long)plVar2 - (long)param_2 == 0) {
      plVar2 = param_2;
    }
    if (0x5d1745d1745d16 < uVar1) {
      plVar2 = (long *)0xba2e8ba2e8ba2e;
    }
    return plVar2;
  }
  FUN_10748bfa0();
  func_0x00010748f2a8();
  plVar2 = param_1 + 2;
  FUN_10748c448(plVar2,*param_1,param_1[1],param_2[1] + ((param_1[1] - *param_1) / -0x160) * 0x160);
  func_0x00010748f328();
  return plVar2;
}



/* Entry: 10748c3c8; end: 10748c40b;  */

void FUN_10748c3c8(long *param_1,long param_2)

{
  func_0x00010748f2a8();
  FUN_10748c448(param_1 + 2,*param_1,param_1[1],
                *(long *)(param_2 + 8) + ((param_1[1] - *param_1) / -0x160) * 0x160);
  func_0x00010748f328();
  return;
}



/* Entry: 10748c40c; end: 10748c447;  */

void FUN_10748c40c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = param_4;
  if (param_2 != 0) {
    FUN_10748bfac(param_4);
  }
  func_0x00010748f92c(0x160);
  return;
}



/* Entry: 10748c448; end: 10748c4cf;  */

void FUN_10748c448(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long unaff_x19;
  undefined1 auStack_60 [24];
  undefined1 uStack_48;
  long lStack_38;
  
  func_0x00010748f590();
  func_0x00010748f570();
  for (; param_2 != unaff_x19; param_2 = param_2 + 0x160) {
    FUN_10748c2e0(param_4,param_2);
    param_4 = lStack_38 + 0x160;
    lStack_38 = param_4;
  }
  uStack_48 = 1;
  FUN_10748c4d0();
  FUN_10748c154(auStack_60);
  return;
}



/* Entry: 10748c4d0; end: 10748c52b;  */

void FUN_10748c4d0(undefined8 param_1,long param_2,long param_3)

{
  for (; param_2 != param_3; param_2 = param_2 + 0x160) {
    func_0x0001072bc64c();
  }
  return;
}



/* Entry: 10748c52c; end: 10748c533;  */

void FUN_10748c52c(long param_1)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8(param_1,*(undefined8 *)(param_1 + 8));
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x160;
    func_0x0001072bc64c();
  }
  return;
}



/* Entry: 10748c534; end: 10748c58b;  */

void FUN_10748c534(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8();
  while (unaff_x19 != *(long *)(unaff_x20 + 0x10)) {
    *(long *)(unaff_x20 + 0x10) = *(long *)(unaff_x20 + 0x10) + -0x160;
    func_0x0001072bc64c();
  }
  return;
}



/* Entry: 10748c58c; end: 10748c61f;  */

void FUN_10748c58c(undefined8 *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  int iVar6;
  
  if ((bRam00000001131ad7c8 & 1) == 0) {
    iVar6 = 0x131ad7c8;
    ___cxa_guard_acquire();
    if (iVar6 != 0) {
      FUN_10748c620(0x1131ad7b8);
      ___cxa_guard_release(0x1131ad7c8);
    }
  }
  lVar5 = lRam00000001131ad7c0;
  uVar4 = uRam00000001131ad7b8;
  param_1[1] = lRam00000001131ad7c0;
  *param_1 = uVar4;
  if (lVar5 != 0) {
    plVar1 = (long *)(lVar5 + 8);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = *plVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return;
}



/* Entry: 10748c620; end: 10748c63b;  */

void FUN_10748c620(void)

{
  undefined1 uStack_11;
  
  FUN_10748c63c(&uStack_11);
  return;
}



/* Entry: 10748c63c; end: 10748c6b7;  */

undefined1 * FUN_10748c63c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puVar1 = auStack_40;
  func_0x00010748f1bc();
  uVar3 = 1;
  uStack_28 = extraout_x8;
  FUN_10748c6b8();
  puStack_30[2] = 0;
  *puStack_30 = &PTR_FUN_1109b3e70;
  puStack_30[1] = 0;
  puStack_30[8] = 0;
  puStack_30[7] = 0;
  puStack_30[4] = 0;
  puStack_30[3] = 0;
  puStack_30[6] = 0;
  puStack_30[5] = 0;
  *(undefined4 *)(puStack_30 + 7) = 0x3f800000;
  func_0x00010748f950();
  FUN_10748c808();
  func_0x00010748f188(uStack_28);
  if ((bool)in_ZR) {
    return puVar1;
  }
  ___stack_chk_fail();
  __Unwind_Resume();
  *(undefined8 *)(puVar1 + 8) = uVar3;
  puVar2 = puVar1;
  FUN_10748c6e0();
  *(undefined1 **)(puVar1 + 0x10) = puVar2;
  return puVar1;
}



/* Entry: 10748c6b8; end: 10748c6df;  */

long FUN_10748c6b8(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10748c6e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10748c6e0; end: 10748c70f;  */

void FUN_10748c6e0(undefined8 *param_1,ulong param_2)

{
  if (param_2 < 0x38e38e38e38e38f) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(param_2 * 0x48);
    return;
  }
  func_0x000104bd35f4();
  *param_1 = &PTR_FUN_1109b3e70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10748c710; end: 10748c713;  */

void FUN_10748c710(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3e70;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10748c714; end: 10748c727;  */

void FUN_10748c714(void)

{
  func_0x00010748c734();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10748c728; end: 10748c747;  */

long FUN_10748c728(long param_1)

{
  long lVar1;
  
  lVar1 = param_1 + 0x18;
  func_0x00010748c770(lVar1,*(undefined8 *)(param_1 + 0x28));
  FUN_10748c7cc(lVar1,0);
  return lVar1;
}



/* Entry: 10748c748; end: 10748c7cb;  */

long FUN_10748c748(long param_1)

{
  func_0x00010748c770(param_1,*(undefined8 *)(param_1 + 0x10));
  FUN_10748c7cc(param_1,0);
  return param_1;
}



/* Entry: 10748c7cc; end: 10748c7e3;  */

void FUN_10748c7cc(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10748c7e4; end: 10748c807;  */

void FUN_10748c7e4(long param_1)

{
  func_0x00010748ff2c();
  if (param_1 != 0) {
    func_0x0001000df548();
  }
  return;
}



/* Entry: 10748c808; end: 10748c817;  */

void FUN_10748c808(long param_1)

{
  if (*(long *)(param_1 + 0x10) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)();
    return;
  }
  return;
}



/* Entry: 10748c818; end: 10748c877;  */

void FUN_10748c818(undefined8 *param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar2 = param_1;
  FUN_10748c878();
  pcVar1 = pcRam00000001138369a8;
  if ((puVar2 == (undefined8 *)0x1) && (pcRam00000001138369a8 != (code *)0x0)) {
    uStack_28 = param_1[1];
    uStack_30 = *param_1;
    *param_1 = 0;
    param_1[1] = 0;
    (*pcVar1)(&uStack_30);
    func_0x0001000df524(&uStack_30);
  }
  FUN_10748c7e4(param_1);
  return;
}



/* Entry: 10748c878; end: 10748c8bf;  */

long FUN_10748c878(long *param_1)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  
  if (param_1[1] == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_1[1] + 8) + 1;
  }
  if (*param_1 != 0) {
    piVar1 = (int *)(*param_1 + 0x28);
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = *piVar1 + 1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
  }
  return lVar4;
}



/* Entry: 10748c8c0; end: 10748c8df;  */

void FUN_10748c8c0(void)

{
  FUN_10748c8e0();
  return;
}



/* Entry: 10748c8e0; end: 10748c92f;  */

bool FUN_10748c8e0(long param_1,long param_2,long param_3)

{
  long lVar1;
  
  while ((param_1 != param_2 &&
         (lVar1 = param_1, func_0x00010730ae80(param_1,param_3), (int)lVar1 != 0))) {
    param_1 = param_1 + 0x10;
    param_3 = param_3 + 0x10;
  }
  return param_1 == param_2;
}



/* Entry: 10748c930; end: 10748c94f;  */

void FUN_10748c930(long param_1)

{
  if (*(char *)(param_1 + 0x18) == '\x01') {
    func_0x000104c336c8();
  }
  return;
}



/* Entry: 10748c950; end: 10748c9bb;  */

void FUN_10748c950(long param_1,long param_2)

{
  func_0x00010729b464();
  *(undefined4 *)(param_1 + 0x1b0) = *(undefined4 *)(param_2 + 0x1b0);
  return;
}



/* Entry: 10748c9bc; end: 10748c9c7;  */

long FUN_10748c9bc(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x00010748f584();
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 0x10);
    lVar2 = **(long **)(param_1 + 8);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1b8;
      func_0x00010729abec();
    }
  }
  return param_1;
}



/* Entry: 10748c9c8; end: 10748ca0b;  */

long FUN_10748c9c8(long param_1)

{
  long lVar1;
  long lVar2;
  
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    lVar1 = **(long **)(param_1 + 0x10);
    lVar2 = **(long **)(param_1 + 8);
    while (lVar1 != lVar2) {
      lVar1 = lVar1 + -0x1b8;
      func_0x00010729abec();
    }
  }
  return param_1;
}



/* Entry: 10748ca0c; end: 10748d10f;  */

undefined1 *
FUN_10748ca0c(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3,ulong param_4)

{
  float *pfVar1;
  long lVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 uVar5;
  undefined1 *puVar6;
  undefined8 extraout_x8;
  ulong uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 extraout_x8_00;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 *puVar10;
  ulong uVar11;
  undefined1 *puVar12;
  ulong uVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 *unaff_x27;
  undefined1 *unaff_x28;
  float fVar17;
  float fVar18;
  undefined1 auStack_5e0 [440];
  undefined8 uStack_428;
  undefined1 *puStack_420;
  undefined1 *puStack_418;
  undefined1 *puStack_410;
  undefined1 *puStack_408;
  undefined1 *puStack_400;
  code *pcStack_3f8;
  undefined1 *puStack_3f0;
  undefined1 *puStack_3e8;
  undefined1 auStack_3e0 [440];
  undefined1 auStack_228 [432];
  float fStack_78;
  undefined8 uStack_70;
  
  puVar6 = param_3;
  func_0x00010748f2a8();
  func_0x00010748f1bc();
  uStack_70 = extraout_x8;
  do {
    puVar10 = unaff_x19 + -0x1b8;
    puStack_3e8 = unaff_x19 + -0x370;
    puStack_3f0 = unaff_x19 + -0x528;
LAB_10748ca58:
    uVar7 = (long)unaff_x19 - (long)unaff_x20;
    uVar16 = (long)uVar7 / 0x1b8;
    bVar4 = (long)(uVar16 - 5) < 0;
    uVar5 = uVar16 == 5;
    switch(uVar16) {
    case 0:
    case 1:
      goto LAB_10748d084;
    case 2:
      func_0x00010748ff08(*(undefined4 *)(unaff_x19 + -8));
      if (bVar4) {
        param_1 = unaff_x20;
        func_0x00010748fb98();
      }
      goto LAB_10748d084;
    case 3:
      param_2 = unaff_x20 + 0x1b8;
      param_1 = unaff_x20;
      func_0x00010748fb78();
      goto LAB_10748d084;
    case 4:
      param_2 = unaff_x20 + 0x1b8;
      puVar6 = unaff_x20 + 0x370;
      param_1 = unaff_x20;
      func_0x00010748d1a0();
      goto LAB_10748d084;
    case 5:
      param_2 = unaff_x20 + 0x1b8;
      puVar6 = unaff_x20 + 0x370;
      param_1 = unaff_x20;
      FUN_10748d204();
      goto LAB_10748d084;
    }
    if ((long)uVar7 < 0x2940) {
      uVar5 = unaff_x20 == unaff_x19;
      if ((param_4 & 1) == 0) {
        if (!(bool)uVar5) {
          while( true ) {
            puVar10 = unaff_x20;
            unaff_x20 = puVar10 + 0x1b8;
            bVar4 = (long)unaff_x20 - (long)unaff_x19 < 0;
            uVar5 = 1;
            if (unaff_x20 == unaff_x19) break;
            func_0x00010748f944(*(undefined4 *)(puVar10 + 0x368));
            if (bVar4) {
              func_0x00010748f5c0();
              do {
                param_1 = puVar10;
                FUN_10748d4d8(param_1 + 0x1b8,param_1);
                puVar10 = param_1 + -0x1b8;
              } while (fStack_78 < *(float *)(param_1 + -8));
              param_2 = auStack_228;
              FUN_10748d4d8();
              func_0x00010748f484();
            }
          }
        }
        break;
      }
      if ((bool)uVar5) break;
      param_3 = (undefined1 *)0x0;
      puVar15 = unaff_x20;
      goto LAB_10748cd88;
    }
    if (param_3 == (undefined1 *)0x0) {
      uVar5 = 1;
      if (unaff_x20 == unaff_x19) break;
      uVar11 = uVar16 - 2 >> 1;
      uVar7 = uVar11;
      goto LAB_10748ce1c;
    }
    puVar15 = unaff_x20 + (uVar16 >> 1) * 0x1b8;
    uVar5 = (long)(uVar7 - 0xdc01) < 0;
    if (uVar7 < 0xdc01) {
      func_0x00010748fb78(puVar15,unaff_x20);
    }
    else {
      func_0x00010748fb78(unaff_x20,puVar15);
      unaff_x27 = puVar15 + -0x1b8;
      FUN_10748d110(unaff_x20 + 0x1b8,unaff_x27,puStack_3e8);
      FUN_10748d110(unaff_x20 + 0x370,puVar15 + 0x1b8,puStack_3f0);
      puVar6 = puVar15 + 0x1b8;
      FUN_10748d110(unaff_x27,puVar15);
      FUN_10748d45c(unaff_x20,puVar15);
    }
    param_3 = param_3 + -1;
    if (((param_4 & 1) == 0) && (func_0x00010748ff08(*(undefined4 *)(unaff_x20 + -8)), !(bool)uVar5)
       ) {
      func_0x00010748f5c0();
      puVar15 = unaff_x20;
      if (*(float *)(unaff_x19 + -8) <= fStack_78) {
        do {
          puVar9 = puVar15 + 0x1b8;
          if (unaff_x19 <= puVar9) break;
          pfVar1 = (float *)(puVar15 + 0x368);
          puVar15 = puVar9;
        } while (*pfVar1 <= fStack_78);
      }
      else {
        do {
          puVar9 = puVar15 + 0x1b8;
          pfVar1 = (float *)(puVar15 + 0x368);
          puVar15 = puVar9;
        } while (*pfVar1 <= fStack_78);
      }
      puVar15 = unaff_x19;
      puVar14 = unaff_x19;
      if (puVar9 < unaff_x19) {
        do {
          puVar14 = puVar15 + -0x1b8;
          pfVar1 = (float *)(puVar15 + -8);
          puVar15 = puVar14;
        } while (fStack_78 < *pfVar1);
      }
      while (puVar9 < puVar14) {
        FUN_10748d45c(puVar9,puVar14);
        do {
          pfVar1 = (float *)(puVar9 + 0x368);
          puVar9 = puVar9 + 0x1b8;
        } while (*pfVar1 <= fStack_78);
        do {
          pfVar1 = (float *)(puVar14 + -8);
          puVar14 = puVar14 + -0x1b8;
        } while (fStack_78 < *pfVar1);
      }
      param_1 = puVar9 + -0x1b8;
      if (unaff_x20 != param_1) {
        FUN_10748d4d8(unaff_x20,param_1);
      }
      param_2 = auStack_228;
      FUN_10748d4d8();
      func_0x00010748f484();
      unaff_x20 = puVar9;
      goto LAB_10748ccec;
    }
    func_0x00010748f5c0();
    lVar8 = 0;
    do {
      lVar2 = lVar8 + 0x368;
      lVar8 = lVar8 + 0x1b8;
    } while (*(float *)(unaff_x20 + lVar2) < fStack_78);
    puVar9 = unaff_x20 + lVar8;
    puVar14 = unaff_x19;
    puVar15 = puVar9;
    if (lVar8 == 0x1b8) {
      do {
        puVar12 = puVar14;
        if (puVar14 <= puVar9) break;
        puVar12 = puVar14 + -0x1b8;
        pfVar1 = (float *)(puVar14 + -8);
        puVar14 = puVar12;
      } while (fStack_78 <= *pfVar1);
    }
    else {
      do {
        puVar12 = puVar14 + -0x1b8;
        pfVar1 = (float *)(puVar14 + -8);
        puVar14 = puVar12;
      } while (fStack_78 <= *pfVar1);
    }
    while (puVar15 < puVar12) {
      FUN_10748d45c(puVar15,puVar12);
      do {
        pfVar1 = (float *)(puVar15 + 0x368);
        puVar15 = puVar15 + 0x1b8;
      } while (*pfVar1 < fStack_78);
      do {
        pfVar1 = (float *)(puVar12 + -8);
        puVar12 = puVar12 + -0x1b8;
      } while (fStack_78 <= *pfVar1);
    }
    unaff_x27 = puVar15 + -0x1b8;
    if (unaff_x20 != unaff_x27) {
      func_0x00010748fefc();
      FUN_10748d4d8();
    }
    param_2 = auStack_228;
    unaff_x28 = unaff_x27;
    FUN_10748d4d8();
    func_0x00010748f484();
    uVar5 = puVar9 == puVar14;
    param_1 = unaff_x28;
    if (puVar9 < puVar14) goto LAB_10748cc00;
    func_0x00010748fefc();
    FUN_10748d298();
    param_1 = puVar15;
    param_2 = unaff_x19;
    FUN_10748d298();
    if ((int)param_1 == 0) goto code_r0x00010748cbfc;
    unaff_x19 = unaff_x27;
  } while (((ulong)unaff_x28 & 1) == 0);
  goto LAB_10748d084;
LAB_10748cd88:
  puVar10 = puVar15 + 0x1b8;
  uVar5 = 1;
  if (puVar10 == unaff_x19) goto LAB_10748d084;
  if (*(float *)(puVar15 + 0x368) < *(float *)(puVar15 + 0x1b0)) {
    func_0x00010748fb90(auStack_228);
    puVar15 = param_3;
    do {
      FUN_10748d4d8(unaff_x20 + (long)puVar15 + 0x1b8);
      param_1 = unaff_x20;
      if (puVar15 == (undefined1 *)0x0) goto LAB_10748cde8;
      puVar9 = unaff_x20 + (long)puVar15;
      puVar15 = puVar15 + -0x1b8;
    } while (fStack_78 < *(float *)(puVar9 + -8));
    param_1 = unaff_x20 + (long)puVar15 + 0x1b8;
LAB_10748cde8:
    param_2 = auStack_228;
    FUN_10748d4d8();
    func_0x00010748f484();
  }
  param_3 = param_3 + 0x1b8;
  puVar15 = puVar10;
  goto LAB_10748cd88;
code_r0x00010748cbfc:
  unaff_x20 = puVar15;
  puVar9 = unaff_x28;
  if (((ulong)unaff_x28 & 1) == 0) {
LAB_10748cc00:
    func_0x00010748fefc();
    puVar6 = param_3;
    FUN_10748ca0c();
    unaff_x20 = puVar15;
    unaff_x28 = puVar9;
LAB_10748ccec:
    param_4 = 0;
  }
  goto LAB_10748ca58;
LAB_10748ce1c:
  do {
    if ((long)uVar7 <= (long)uVar11) {
      unaff_x27 = (undefined1 *)((uVar7 & 0x3fffffffffffffff) << 1 | 1);
      unaff_x28 = unaff_x20 + (long)unaff_x27 * 0x1b8;
      puVar10 = (undefined1 *)(uVar7 * 2 + 2);
      if (((long)puVar10 < (long)uVar16) &&
         (*(float *)(unaff_x28 + 0x1b0) < *(float *)(unaff_x28 + 0x368))) {
        unaff_x28 = unaff_x28 + 0x1b8;
        unaff_x27 = puVar10;
      }
      param_3 = unaff_x20 + uVar7 * 0x1b8;
      if (*(float *)(param_3 + 0x1b0) <= *(float *)(unaff_x28 + 0x1b0)) {
        FUN_10748c950(auStack_228,param_3);
        do {
          param_1 = unaff_x28;
          FUN_10748d4d8(param_3,param_1);
          unaff_x28 = param_1;
          if ((long)uVar11 < (long)unaff_x27) break;
          puVar15 = (undefined1 *)((long)unaff_x27 << 1 | 1);
          unaff_x28 = unaff_x20 + (long)puVar15 * 0x1b8;
          puVar10 = (undefined1 *)((long)unaff_x27 * 2 + 2);
          unaff_x27 = puVar15;
          if (((long)puVar10 < (long)uVar16) &&
             (*(float *)(unaff_x28 + 0x1b0) < *(float *)(unaff_x28 + 0x368))) {
            unaff_x28 = unaff_x28 + 0x1b8;
            unaff_x27 = puVar10;
          }
          param_3 = param_1;
        } while (fStack_78 <= *(float *)(unaff_x28 + 0x1b0));
        param_2 = auStack_228;
        FUN_10748d4d8();
        func_0x00010748f484();
      }
    }
    uVar7 = uVar7 - 1;
  } while (-1 < (long)uVar7);
  while( true ) {
    puVar10 = (undefined1 *)(uVar16 - 2);
    uVar5 = puVar10 == (undefined1 *)0x0;
    if ((long)uVar16 < 2) break;
    FUN_10748c950(auStack_3e0,unaff_x20);
    param_3 = (undefined1 *)((ulong)puVar10 >> 1);
    puVar10 = unaff_x20;
    uVar7 = 0;
    do {
      uVar13 = uVar7 << 1 | 1;
      uVar11 = uVar7 * 2 + 2;
      puVar15 = puVar10 + uVar7 * 0x1b8 + 0x1b8;
      if (((long)uVar11 < (long)uVar16) &&
         (*(float *)(puVar10 + uVar7 * 0x1b8 + 0x368) < *(float *)(puVar10 + uVar7 * 0x1b8 + 0x520))
         ) {
        puVar15 = puVar10 + uVar7 * 0x1b8 + 0x370;
        uVar13 = uVar11;
      }
      FUN_10748d4d8(puVar10,puVar15);
      puVar10 = puVar15;
      uVar7 = uVar13;
    } while ((long)uVar13 <= (long)param_3);
    unaff_x19 = unaff_x19 + -0x1b8;
    if (puVar15 == unaff_x19) {
      param_2 = auStack_3e0;
      FUN_10748d4d8(puVar15);
    }
    else {
      FUN_10748d4d8(puVar15,unaff_x19);
      param_2 = auStack_3e0;
      FUN_10748d4d8(unaff_x19);
      bVar4 = (long)(puVar15 + (-1 - (long)unaff_x20)) < 0;
      if (0x1b8 < (long)(puVar15 + (0x1b8 - (long)unaff_x20))) {
        uVar7 = (ulong)(puVar15 + (0x1b8 - (long)unaff_x20)) / 0x1b8 - 2 >> 1;
        func_0x00010748f944(*(undefined4 *)(unaff_x20 + uVar7 * 0x1b8 + 0x1b0));
        if (bVar4) {
          func_0x00010748fb90(auStack_228);
          puVar10 = unaff_x20 + uVar7 * 0x1b8;
          do {
            param_3 = puVar10;
            FUN_10748d4d8(puVar15,param_3);
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1 >> 1;
            puVar15 = param_3;
            puVar10 = unaff_x20 + uVar7 * 0x1b8;
          } while (*(float *)(unaff_x20 + uVar7 * 0x1b8 + 0x1b0) < fStack_78);
          param_2 = auStack_228;
          FUN_10748d4d8(param_3);
          func_0x00010748f484();
        }
      }
    }
    param_1 = auStack_3e0;
    func_0x00010729abec();
    uVar16 = uVar16 - 1;
  }
LAB_10748d084:
  func_0x00010748f188(uStack_70);
  if ((bool)uVar5) {
    return param_1;
  }
  ___stack_chk_fail();
  puVar15 = auStack_228;
  func_0x00010729abec();
  func_0x00010748f298();
  pcStack_3f8 = FUN_10748d110;
  fVar17 = *(float *)(param_2 + 0x1b0);
  fVar18 = *(float *)(puVar6 + 0x1b0);
  puVar9 = puVar15;
  puStack_420 = param_3;
  puStack_418 = puVar10;
  puStack_410 = unaff_x20;
  puStack_408 = param_1;
  puStack_400 = &stack0xfffffffffffffff0;
  if (fVar17 < *(float *)(puVar15 + 0x1b0)) {
    uVar3 = fVar18 == fVar17;
    uVar5 = fVar18 < fVar17;
    if (!(bool)uVar5) {
      FUN_10748d45c(puVar15,param_2);
      func_0x00010748fe40(*(undefined4 *)(puVar6 + 0x1b0));
      puVar9 = param_2;
      if (!(bool)uVar5) {
        return puVar15;
      }
    }
LAB_10748d190:
    puVar10 = puStack_410;
    puVar15 = auStack_5e0;
    puStack_420 = unaff_x28;
    puStack_418 = unaff_x27;
    func_0x00010748f2a8(puVar9,puVar6);
    func_0x00010748f1bc();
    uStack_428 = extraout_x8_00;
    FUN_10748c950(auStack_5e0,puVar10);
    func_0x00010748f6a4();
    FUN_10748d4d8();
    func_0x00010748f730();
    FUN_10748d4d8();
    func_0x00010729abec();
    func_0x00010748f188(uStack_428);
    if ((bool)uVar3) {
      return puVar15;
    }
    ___stack_chk_fail();
    func_0x00010748f298();
    func_0x00010748f2a8();
    func_0x00010729bf90();
    *(undefined4 *)(puVar10 + 0x1b0) = *(undefined4 *)(puVar15 + 0x1b0);
    return puVar10;
  }
  uVar3 = fVar18 == fVar17;
  uVar5 = fVar18 < fVar17;
  if ((bool)uVar5) {
    func_0x00010748ff14();
    FUN_10748d45c();
    func_0x00010748f944(*(undefined4 *)(param_2 + 0x1b0));
    puVar6 = param_2;
    if ((bool)uVar5) goto LAB_10748d190;
  }
  return puVar15;
}



/* Entry: 10748d110; end: 10748d203;  */

undefined1 * FUN_10748d110(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 extraout_x8;
  undefined1 *unaff_x20;
  float fVar5;
  float fVar6;
  undefined1 auStack_1f0 [440];
  undefined8 uStack_38;
  
  fVar5 = *(float *)(param_2 + 0x1b0);
  fVar6 = *(float *)(param_3 + 0x1b0);
  puVar3 = param_1;
  if (*(float *)(param_1 + 0x1b0) <= fVar5) {
    uVar2 = fVar6 == fVar5;
    uVar1 = fVar6 < fVar5;
    if ((bool)uVar1) {
      func_0x00010748ff14();
      FUN_10748d45c();
      func_0x00010748f944(*(undefined4 *)(param_2 + 0x1b0));
      param_3 = param_2;
      if ((bool)uVar1) goto LAB_10748d190;
    }
    return param_1;
  }
  uVar2 = fVar6 == fVar5;
  uVar1 = fVar6 < fVar5;
  if (!(bool)uVar1) {
    FUN_10748d45c(param_1,param_2);
    func_0x00010748fe40(*(undefined4 *)(param_3 + 0x1b0));
    puVar3 = param_2;
    if (!(bool)uVar1) {
      return param_1;
    }
  }
LAB_10748d190:
  puVar4 = auStack_1f0;
  func_0x00010748f2a8(puVar3,param_3);
  func_0x00010748f1bc();
  uStack_38 = extraout_x8;
  FUN_10748c950(auStack_1f0,unaff_x20);
  func_0x00010748f6a4();
  FUN_10748d4d8();
  func_0x00010748f730();
  FUN_10748d4d8();
  func_0x00010729abec();
  func_0x00010748f188(uStack_38);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010748f298();
    func_0x00010748f2a8();
    func_0x00010729bf90();
    *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar4 + 0x1b0);
    return unaff_x20;
  }
  return puVar4;
}



/* Entry: 10748d204; end: 10748d297;  */

undefined1 *
FUN_10748d204(undefined1 *param_1,undefined8 param_2,long param_3,undefined1 *param_4,long param_5)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  undefined1 *unaff_x19;
  undefined1 *unaff_x20;
  undefined1 auStack_1f0 [432];
  
  func_0x00010748f2a8();
  func_0x00010748d1a0();
  uVar2 = *(float *)(param_5 + 0x1b0) == *(float *)(param_4 + 0x1b0);
  uVar1 = *(float *)(param_5 + 0x1b0) < *(float *)(param_4 + 0x1b0);
  if ((bool)uVar1) {
    param_1 = param_4;
    FUN_10748d45c(param_4,param_5);
    func_0x00010748f944(*(undefined4 *)(param_4 + 0x1b0));
    if ((bool)uVar1) {
      func_0x00010748fb64();
      func_0x00010748fe40(*(undefined4 *)(param_3 + 0x1b0));
      if ((bool)uVar1) {
        param_1 = unaff_x19;
        func_0x00010748fb98();
        func_0x00010748ff08(*(undefined4 *)(unaff_x19 + 0x1b0));
        if ((bool)uVar1) {
          func_0x00010748f6a4();
          puVar3 = auStack_1f0;
          func_0x00010748f2a8();
          func_0x00010748f1bc();
          FUN_10748c950(auStack_1f0,unaff_x20);
          func_0x00010748f6a4();
          FUN_10748d4d8();
          func_0x00010748f730();
          FUN_10748d4d8();
          func_0x00010729abec();
          func_0x00010748f188(extraout_x8);
          if ((bool)uVar2) {
            return puVar3;
          }
          ___stack_chk_fail();
          func_0x00010748f298();
          func_0x00010748f2a8();
          func_0x00010729bf90();
          *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar3 + 0x1b0);
          return unaff_x20;
        }
      }
    }
  }
  return param_1;
}



/* Entry: 10748d298; end: 10748d45b;  */

void FUN_10748d298(long param_1,long param_2)

{
  bool bVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined8 extraout_x8;
  long lVar4;
  undefined8 extraout_x8_00;
  long unaff_x19;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  undefined1 auStack_400 [440];
  undefined8 uStack_248;
  undefined1 auStack_210 [432];
  float fStack_60;
  undefined8 uStack_58;
  
  func_0x00010748f2f0();
  func_0x00010748f1bc();
  lVar7 = (param_2 - param_1) / 0x1b8;
  bVar1 = lVar7 + -5 < 0;
  uVar2 = lVar7 == 5;
  uStack_58 = extraout_x8;
  switch(lVar7) {
  case 0:
  case 1:
    break;
  case 2:
    func_0x00010748fe40(*(undefined4 *)(unaff_x20 + -8),1);
    if (bVar1) {
      FUN_10748d45c();
    }
    break;
  case 3:
    FUN_10748d110();
    break;
  case 4:
    func_0x00010748d1a0();
    break;
  case 5:
    FUN_10748d204();
    break;
  default:
    FUN_10748d110();
    lVar7 = 0;
    iVar8 = 0;
    lVar6 = unaff_x19 + 0x528;
    lVar5 = unaff_x19 + 0x370;
    while (lVar4 = lVar6, uVar2 = lVar4 == unaff_x20, !(bool)uVar2) {
      if (*(float *)(lVar4 + 0x1b0) < *(float *)(lVar5 + 0x1b0)) {
        func_0x00010748fb90(auStack_210);
        lVar6 = lVar7;
        do {
          FUN_10748d4d8(unaff_x19 + lVar6 + 0x528,unaff_x19 + lVar6 + 0x370);
          if (lVar6 == -0x370) break;
          lVar5 = unaff_x19 + lVar6;
          lVar6 = lVar6 + -0x1b8;
        } while (fStack_60 < *(float *)(lVar5 + 0x368));
        FUN_10748d4d8();
        iVar8 = iVar8 + 1;
        func_0x00010729abec(auStack_210);
        if (iVar8 == 8) {
          uVar2 = lVar4 + 0x1b8 == unaff_x20;
          break;
        }
      }
      lVar7 = lVar7 + 0x1b8;
      lVar5 = lVar4;
      lVar6 = lVar4 + 0x1b8;
    }
  }
  func_0x00010748f188(uStack_58);
  if ((bool)uVar2) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010748f648();
  func_0x00010729abec();
  func_0x00010748f298();
  puVar3 = auStack_400;
  func_0x00010748f2a8();
  func_0x00010748f1bc();
  uStack_248 = extraout_x8_00;
  FUN_10748c950(auStack_400);
  func_0x00010748f6a4();
  FUN_10748d4d8();
  func_0x00010748f730();
  FUN_10748d4d8();
  func_0x00010729abec();
  func_0x00010748f188(uStack_248);
  if (!(bool)uVar2) {
    ___stack_chk_fail();
    func_0x00010748f298();
    func_0x00010748f2a8();
    func_0x00010729bf90();
    *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar3 + 0x1b0);
    return;
  }
  return;
}



/* Entry: 10748d45c; end: 10748d4d7;  */

void FUN_10748d45c(void)

{
  undefined1 in_ZR;
  undefined1 *puVar1;
  undefined8 extraout_x8;
  long unaff_x20;
  undefined1 auStack_1f0 [440];
  undefined8 uStack_38;
  
  puVar1 = auStack_1f0;
  func_0x00010748f2a8();
  func_0x00010748f1bc();
  uStack_38 = extraout_x8;
  FUN_10748c950(auStack_1f0);
  func_0x00010748f6a4();
  FUN_10748d4d8();
  func_0x00010748f730();
  FUN_10748d4d8();
  func_0x00010729abec();
  func_0x00010748f188(uStack_38);
  if ((bool)in_ZR) {
    return;
  }
  ___stack_chk_fail();
  func_0x00010748f298();
  func_0x00010748f2a8();
  func_0x00010729bf90();
  *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(puVar1 + 0x1b0);
  return;
}



/* Entry: 10748d4d8; end: 10748d4ff;  */

void FUN_10748d4d8(void)

{
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010748f2a8();
  func_0x00010729bf90();
  *(undefined4 *)(unaff_x20 + 0x1b0) = *(undefined4 *)(unaff_x19 + 0x1b0);
  return;
}



/* Entry: 10748d500; end: 10748d51f;  */

void FUN_10748d500(undefined8 param_1)

{
  undefined1 uStack_11;
  
  FUN_10748d520(&uStack_11,param_1);
  return;
}



/* Entry: 10748d520; end: 10748d58b;  */

long FUN_10748d520(undefined8 param_1,undefined8 param_2)

{
  undefined1 in_ZR;
  long lVar1;
  long lVar2;
  undefined8 extraout_x8;
  undefined1 auStack_40 [16];
  long lStack_30;
  undefined8 uStack_28;
  
  func_0x00010748f1bc();
  uStack_28 = extraout_x8;
  FUN_10748d58c(auStack_40,1);
  FUN_10748d5e4();
  func_0x00010748f950();
  func_0x00010748d690();
  func_0x00010748f188(uStack_28);
  if ((bool)in_ZR) {
    return lStack_30;
  }
  ___stack_chk_fail();
  func_0x00010748f648();
  func_0x00010748d690();
  lVar1 = lStack_30;
  func_0x00010748f298();
  *(undefined8 *)(lVar1 + 8) = param_2;
  lVar2 = lVar1;
  FUN_10748d5b4();
  *(long *)(lVar1 + 0x10) = lVar2;
  return lVar1;
}



/* Entry: 10748d58c; end: 10748d5b3;  */

long FUN_10748d58c(long param_1,undefined8 param_2)

{
  long lVar1;
  
  *(undefined8 *)(param_1 + 8) = param_2;
  lVar1 = param_1;
  FUN_10748d5b4();
  *(long *)(param_1 + 0x10) = lVar1;
  return param_1;
}



/* Entry: 10748d5b4; end: 10748d5e3;  */

undefined8 * FUN_10748d5b4(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  
  if (param_2 < 0x4924924924924a) {
    puVar1 = (undefined8 *)(param_2 * 0x380);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___Znwm_110352280)(puVar1);
    return puVar1;
  }
  func_0x000104bd35f4();
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b3ec0;
  FUN_10748d644(param_1 + 3);
  return param_1;
}



/* Entry: 10748d5e4; end: 10748d61f;  */

undefined8 * FUN_10748d5e4(undefined8 *param_1)

{
  param_1[1] = 0;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_1109b3ec0;
  FUN_10748d644(param_1 + 3);
  return param_1;
}



/* Entry: 10748d620; end: 10748d623;  */

void FUN_10748d620(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10748d624; end: 10748d637;  */

void FUN_10748d624(void)

{
  FUN_10748d680();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10748d638; end: 10748d643;  */

undefined8 * FUN_10748d638(long param_1)

{
  func_0x00010748b94c(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x18) = &PTR_DAT_1109ab0d0;
  func_0x0001073ad4c4(param_1 + 0x20);
  return (undefined8 *)(param_1 + 0x18);
}



/* Entry: 10748d644; end: 10748d67f;  */

undefined8 FUN_10748d644(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = param_2[1];
  uStack_30 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  func_0x00010778d29c(param_1,&uStack_30);
  FUN_1073db868(&uStack_30);
  return param_1;
}



/* Entry: 10748d680; end: 10748d69f;  */

void FUN_10748d680(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_1109b3ec0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbd2ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZNSt3__119__shared_weak_countD2Ev_110346658)();
  return;
}



/* Entry: 10748d6a0; end: 10748d6fb;  */

undefined8 * FUN_10748d6a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *param_2 = 0;
  param_2[1] = 0;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uStack_30 = 0;
  uStack_28 = 0;
  func_0x0001073e930c(&uStack_30);
  return param_1;
}



/* Entry: 10748d6fc; end: 10748d72b;  */

void FUN_10748d6fc(long param_1)

{
  undefined4 extraout_w8;
  
  func_0x00010748f2c4();
  *(undefined4 *)(param_1 + 0x30) = extraout_w8;
  FUN_10748d72c();
  return;
}



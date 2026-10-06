/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1040071f8; end: 104007237;  */

void FUN_1040071f8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130468c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1438;
  _swift_getWitnessTable(&UNK_10dcc1438,&UNK_110733f08);
  puRam00000001130468c0 = puVar1;
  return;
}



/* Entry: 104007238; end: 10400725b;  */

void FUN_104007238(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10400725c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10400725c; end: 10400729b;  */

void FUN_10400725c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130468c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc14b8;
  _swift_getWitnessTable(&UNK_10dcc14b8,&UNK_110734018);
  puRam00000001130468c8 = puVar1;
  return;
}



/* Entry: 10400729c; end: 1040072af;  */

void FUN_10400729c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x104006d38)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x104006c78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040072b0; end: 1040072df;  */

void FUN_1040072b0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1040072e0; end: 1040072e3;  */

void FUN_1040072e0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130468d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1520;
  _swift_getWitnessTable(&UNK_10dcc1520,&UNK_110734018);
  puRam00000001130468d0 = puVar1;
  return;
}



/* Entry: 1040072e4; end: 104007323;  */

void FUN_1040072e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130468d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dcc1520;
  _swift_getWitnessTable(&UNK_10dcc1520,&UNK_110734018);
  puRam00000001130468d0 = puVar1;
  return;
}



/* Entry: 104007324; end: 104007333;  */

undefined1  [16] FUN_104007324(void)

{
  return ZEXT816(0x110733cd0);
}



/* Entry: 104007334; end: 104007367;  */

/* WARNING: Possible PIC construction at 0x000104007354: Changing call to branch */

void FUN_104007334(long param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  long unaff_x19;
  undefined8 unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  
  puVar1 = &stack0xfffffffffffffff0;
  if (*(long *)(param_1 + 0x18) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(ulong *)(param_1 + 0x38);
  }
  else {
    _swift_bridgeObjectRelease();
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = *(ulong *)(param_1 + 0x28);
    unaff_x30 = 0x104007358;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffe0;
    unaff_x19 = param_1;
    unaff_x29 = puVar1;
  }
  uVar4 = (uint)(uVar3 >> 0x3e);
  if (uVar4 != 1) {
    if (uVar4 != 2) {
      return;
    }
    *(undefined8 *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(long *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(uVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 104007368; end: 1040073fb;  */

undefined4 * FUN_104007368(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  lVar2 = *(long *)(param_2 + 6);
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(param_1 + 6) = lVar2;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  }
  else {
    *(long *)(param_1 + 6) = lVar2;
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar1 = *(undefined8 *)(param_2 + 10);
    _swift_bridgeObjectRetain();
    func_0x00010006c00c(uVar3,uVar1);
    *(undefined8 *)(param_1 + 8) = uVar3;
    *(undefined8 *)(param_1 + 10) = uVar1;
  }
  uVar3 = *(undefined8 *)(param_2 + 0xc);
  uVar1 = *(undefined8 *)(param_2 + 0xe);
  func_0x00010006c00c(uVar3,uVar1);
  *(undefined8 *)(param_1 + 0xc) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar1;
  return param_1;
}



/* Entry: 1040073fc; end: 10400750b;  */

undefined4 * FUN_1040073fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  plVar6 = (long *)(param_1 + 6);
  lVar7 = *plVar6;
  plVar8 = (long *)(param_2 + 6);
  lVar4 = *plVar8;
  if (lVar7 == 0) {
    if (lVar4 == 0) {
      uVar5 = *(undefined8 *)(param_2 + 8);
      lVar4 = *plVar8;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *plVar6 = lVar4;
    }
    else {
      *(long *)(param_1 + 6) = lVar4;
      uVar5 = *(undefined8 *)(param_2 + 8);
      uVar1 = *(undefined8 *)(param_2 + 10);
      _swift_bridgeObjectRetain();
      func_0x00010006c00c(uVar5,uVar1);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 *)(param_1 + 10) = uVar1;
    }
  }
  else if (lVar4 == 0) {
    FUN_10400750c(plVar6);
    uVar5 = *(undefined8 *)(param_2 + 10);
    lVar4 = *plVar8;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *plVar6 = lVar4;
    *(undefined8 *)(param_1 + 10) = uVar5;
  }
  else {
    *(long *)(param_1 + 6) = lVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(lVar7);
    uVar5 = *(undefined8 *)(param_2 + 8);
    uVar2 = *(undefined8 *)(param_2 + 10);
    func_0x00010006c00c(uVar5,uVar2);
    uVar1 = *(undefined8 *)(param_1 + 8);
    uVar3 = *(undefined8 *)(param_1 + 10);
    *(undefined8 *)(param_1 + 8) = uVar5;
    *(undefined8 *)(param_1 + 10) = uVar2;
    func_0x00010006c090(uVar1,uVar3);
  }
  uVar5 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 0xe);
  func_0x00010006c00c(uVar5,uVar2);
  uVar1 = *(undefined8 *)(param_1 + 0xc);
  uVar3 = *(undefined8 *)(param_1 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar5;
  *(undefined8 *)(param_1 + 0xe) = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 10400750c; end: 10400753b;  */

undefined8 * FUN_10400750c(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  func_0x00010006c090(param_1[1],param_1[2]);
  return param_1;
}



/* Entry: 10400753c; end: 1040075df;  */

undefined4 * FUN_10400753c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)((long)param_1 + 5) = *(undefined1 *)((long)param_2 + 5);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  plVar2 = (long *)(param_1 + 6);
  if (*plVar2 != 0) {
    if (*(long *)(param_2 + 6) != 0) {
      *(long *)(param_1 + 6) = *(long *)(param_2 + 6);
      _swift_bridgeObjectRelease();
      uVar3 = *(undefined8 *)(param_1 + 8);
      uVar1 = *(undefined8 *)(param_1 + 10);
      uVar4 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar4;
      func_0x00010006c090(uVar3,uVar1);
      goto LAB_1040075bc;
    }
    FUN_10400750c(plVar2);
  }
  lVar5 = *(long *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *plVar2 = lVar5;
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
LAB_1040075bc:
  uVar3 = *(undefined8 *)(param_1 + 0xc);
  uVar1 = *(undefined8 *)(param_1 + 0xe);
  uVar4 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)(param_1 + 0xc) = uVar4;
  func_0x00010006c090(uVar3,uVar1);
  return param_1;
}



/* Entry: 1040075e0; end: 1040076e3;  */

int FUN_1040075e0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1040076e4; end: 10400770b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1040076e4(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10400770c; end: 1040077b3;  */

undefined8 * FUN_10400770c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 1040077b4; end: 1040077f7;  */

undefined8 * FUN_1040077b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1040077f8; end: 1040078a3;  */

int FUN_1040077f8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1040078a4; end: 1040078cb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1040078a4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1040078cc; end: 10400798b;  */

undefined8 * FUN_1040078cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10400798c; end: 1040079d7;  */

undefined8 * FUN_10400798c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1040079d8; end: 104007a6f;  */

int FUN_1040079d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 104007a70; end: 104007b6f;  */

void FUN_104007a70(void)

{
  undefined *puVar1;
  
  if (puRam00000001130468e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcc148c;
  _swift_getWitnessTable(&DAT_10dcc148c,&UNK_110734018);
  puRam00000001130468e0 = puVar1;
  return;
}



/* Entry: 104007b70; end: 104007bbf;  */

undefined8 FUN_104007b70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x113046918;
  func_0x0001000285a8(0x113046918,&UNK_10dcc1840);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 104007bc0; end: 104007bd7;  */

undefined8 * FUN_104007bc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  param_2[2] = param_1[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_2;
}



/* Entry: 104007bd8; end: 104007c0b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_104007bd8(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  _swift_bridgeObjectRelease();
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_2);
  return;
}



/* Entry: 104007c0c; end: 104007cef;  */

void FUN_104007c0c(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 104007cf0; end: 104007d33;  */

uint FUN_104007cf0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10400ac54(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104007d34; end: 104007d47;  */

undefined * FUN_104007d34(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 104007d48; end: 104007dd3;  */

uint FUN_104007d48(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10400adb4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 104007dd4; end: 104007e87;  */

/* WARNING: Removing unreachable block (ram,0x000104007e84) */

void FUN_104007dd4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10400b0b8();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104007e88; end: 104007f23;  */

void FUN_104007e88(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_10400b0b8();
    (*pcVar2)(param_2,1,&UNK_1107345f0,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 104007f24; end: 104007f67;  */

uint FUN_104007f24(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_4 + 0x10)) {
    if (lVar3 != 0 && param_1 != param_4) {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_4 + 0x20);
      do {
        uStack_f8 = puVar4[5];
        uStack_100 = puVar4[4];
        uStack_e8 = puVar4[7];
        uStack_f0 = puVar4[6];
        uStack_d8 = puVar4[9];
        uStack_e0 = puVar4[8];
        uStack_d0 = puVar4[10];
        uStack_118 = puVar4[1];
        uStack_120 = *puVar4;
        uStack_108 = puVar4[3];
        uStack_110 = puVar4[2];
        uStack_98 = puVar5[5];
        uStack_a0 = puVar5[4];
        uStack_88 = puVar5[7];
        uStack_90 = puVar5[6];
        uStack_78 = puVar5[9];
        uStack_80 = puVar5[8];
        uStack_70 = puVar5[10];
        uStack_b8 = puVar5[1];
        uStack_c0 = *puVar5;
        uStack_a8 = puVar5[3];
        uStack_b0 = puVar5[2];
        func_0x00010400d844(&uStack_120,auStack_178);
        func_0x00010400d844(&uStack_c0,auStack_178);
        puVar2 = &uStack_120;
        FUN_10400b0f8(puVar2,&uStack_c0);
        func_0x00010400d878(&uStack_c0);
        func_0x00010400d878(&uStack_120);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10400b5dc;
        puVar5 = puVar5 + 0xb;
        puVar4 = puVar4 + 0xb;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar1 = (uint)param_2;
  }
  else {
LAB_10400b5dc:
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 104007f68; end: 104007f97;  */

undefined1  [16] FUN_104007f68(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 104007f98; end: 104007fcb;  */

void FUN_104007f98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 104007fcc; end: 104007fdf;  */

undefined1  [16] FUN_104007fcc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x104007fdc;
  return auVar1;
}



/* Entry: 104007fe0; end: 104008017;  */

void FUN_104007fe0(void)

{
  FUN_104007dd4();
  return;
}



/* Entry: 104008018; end: 10400801b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104008018(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10400801c; end: 104008053;  */

uint FUN_10400801c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010400d700();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104008054; end: 104008067;  */

uint FUN_104008054(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 == *(long *)(lVar1 + 0x10)) {
    if (lVar9 != 0 && lVar2 != lVar1) {
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      puVar11 = (undefined8 *)(lVar1 + 0x20);
      do {
        uStack_f8 = puVar10[5];
        uStack_100 = puVar10[4];
        uStack_e8 = puVar10[7];
        uStack_f0 = puVar10[6];
        uStack_d8 = puVar10[9];
        uStack_e0 = puVar10[8];
        uStack_d0 = puVar10[10];
        uStack_118 = puVar10[1];
        uStack_120 = *puVar10;
        uStack_108 = puVar10[3];
        uStack_110 = puVar10[2];
        uStack_98 = puVar11[5];
        uStack_a0 = puVar11[4];
        uStack_88 = puVar11[7];
        uStack_90 = puVar11[6];
        uStack_78 = puVar11[9];
        uStack_80 = puVar11[8];
        uStack_70 = puVar11[10];
        uStack_b8 = puVar11[1];
        uStack_c0 = *puVar11;
        uStack_a8 = puVar11[3];
        uStack_b0 = puVar11[2];
        func_0x00010400d844(&uStack_120,auStack_178);
        func_0x00010400d844(&uStack_c0,auStack_178);
        puVar5 = &uStack_120;
        FUN_10400b0f8(puVar5,&uStack_c0);
        func_0x00010400d878(&uStack_c0);
        func_0x00010400d878(&uStack_120);
        if (((ulong)puVar5 & 1) == 0) goto LAB_10400b5dc;
        puVar11 = puVar11 + 0xb;
        puVar10 = puVar10 + 0xb;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_10400b5dc:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 104008068; end: 104008107;  */

void FUN_104008068(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046930 != -1) {
    _swift_once(0x113046930,0x104007d8c);
  }
  uVar5 = uRam0000000113812e20;
  uVar4 = uRam0000000113812e18;
  uVar3 = uRam0000000113812e10;
  uVar2 = uRam0000000113812e08;
  uVar1 = uRam0000000113812e00;
  *param_1 = uRam0000000113812df8;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104008108; end: 104008143;  */

void FUN_104008108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046ac8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046ac8,&UNK_10dcc2080);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104008144; end: 104008247;  */

void FUN_104008144(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_90,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_90,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104008248; end: 104008263;  */

uint FUN_104008248(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_178 [88];
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_f8 = puVar10[5];
        uStack_100 = puVar10[4];
        uStack_e8 = puVar10[7];
        uStack_f0 = puVar10[6];
        uStack_d8 = puVar10[9];
        uStack_e0 = puVar10[8];
        uStack_d0 = puVar10[10];
        uStack_118 = puVar10[1];
        uStack_120 = *puVar10;
        uStack_108 = puVar10[3];
        uStack_110 = puVar10[2];
        uStack_98 = puVar11[5];
        uStack_a0 = puVar11[4];
        uStack_88 = puVar11[7];
        uStack_90 = puVar11[6];
        uStack_78 = puVar11[9];
        uStack_80 = puVar11[8];
        uStack_70 = puVar11[10];
        uStack_b8 = puVar11[1];
        uStack_c0 = *puVar11;
        uStack_a8 = puVar11[3];
        uStack_b0 = puVar11[2];
        func_0x00010400d844(&uStack_120,auStack_178);
        func_0x00010400d844(&uStack_c0,auStack_178);
        puVar5 = &uStack_120;
        FUN_10400b0f8(puVar5,&uStack_c0);
        func_0x00010400d878(&uStack_c0);
        func_0x00010400d878(&uStack_120);
        if (((ulong)puVar5 & 1) == 0) goto LAB_10400b5dc;
        puVar11 = puVar11 + 0xb;
        puVar10 = puVar10 + 0xb;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_10400b5dc:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 104008264; end: 1040082d3;  */

void FUN_104008264(void)

{
  __sSS6appendyySSF(0xd000000000000013,0x800000010f1dd8a0);
  uRam0000000113812e28 = 0xd00000000000002b;
  uRam0000000113812e30 = 0x800000010f1dd7d0;
  return;
}



/* Entry: 1040082d4; end: 10400831b;  */

void FUN_1040082d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc2180,0x6f,2);
  uRam0000000113812e40 = uStack_38;
  uRam0000000113812e38 = uStack_40;
  uRam0000000113812e50 = uStack_28;
  uRam0000000113812e48 = uStack_30;
  uRam0000000113812e60 = uStack_18;
  uRam0000000113812e58 = uStack_20;
  return;
}



/* Entry: 10400831c; end: 104008453;  */

/* WARNING: Removing unreachable block (ram,0x0001040083fc) */
/* WARNING: Removing unreachable block (ram,0x000104008434) */
/* WARNING: Removing unreachable block (ram,0x000104008450) */

void FUN_10400831c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x78);
        }
        else {
          if (lVar1 != 2) goto LAB_1040083a8;
          pcVar4 = *(code **)(param_3 + 0x78);
        }
        (*pcVar4)();
      }
      else if (lVar1 == 3) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010400b644();
        (*pcVar4)(unaff_x20 + 8,&UNK_110735198,lVar1,param_2,param_3);
      }
      else if (lVar1 == 4) {
        FUN_104008454();
      }
      else if (lVar1 == 5) {
        FUN_10400863c();
      }
LAB_1040083a8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 104008454; end: 10400863b;  */

/* WARNING: Removing unreachable block (ram,0x0001040085e8) */

void FUN_104008454(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x21;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uVar15 = *(ulong *)(param_1 + 0x40);
  lVar12 = param_1;
  if ((uVar15 >> 0x3d & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar6 = *(undefined8 *)(param_1 + 0x38);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    FUN_103ff5074(uVar13,lVar2,uVar7,uVar1,uVar6,uVar15);
    lVar12 = 0;
    FUN_10400d7c0(0,0,0,0,0,0);
    uStack_90 = uVar13;
    lStack_88 = lVar2;
    uStack_80 = uVar7;
    uStack_78 = uVar1;
    uStack_70 = uVar6;
    uStack_68 = uVar15;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_10400be10();
  (*pcVar14)(&uStack_90,&UNK_110734710,lVar12,param_3,param_4);
  uVar11 = uStack_68;
  uVar13 = uStack_70;
  uVar7 = uStack_78;
  uVar6 = uStack_80;
  lVar12 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if ((uVar15 & 0x3000000000000000) == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_88);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010006c00c(uVar13,uVar11);
    }
    else {
      pcVar14 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_88);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010006c00c(uVar13,uVar11);
      (*pcVar14)(param_3,param_4);
    }
    FUN_10400d7c0(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar9 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar10 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(long *)(param_1 + 0x20) = lVar12;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x30) = uVar7;
    *(undefined8 *)(param_1 + 0x38) = uVar13;
    *(ulong *)(param_1 + 0x40) = uVar11;
    FUN_103ff5490(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    FUN_10400d7c0(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 10400863c; end: 1040087fb;  */

/* WARNING: Removing unreachable block (ram,0x0001040087ac) */

void FUN_10400863c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uVar12 = *(ulong *)(param_1 + 0x40) & 0x3000000000000000;
  lVar10 = param_1;
  if (uVar12 != 0x3000000000000000 && (*(ulong *)(param_1 + 0x40) & 0x2000000000000000) != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    lVar2 = *(long *)(param_1 + 0x20);
    uVar6 = *(undefined8 *)(param_1 + 0x28);
    uVar13 = *(undefined8 *)(param_1 + 0x18);
    FUN_103ff5074(uVar13,lVar2,uVar6,uVar1,*(undefined8 *)(param_1 + 0x38));
    lVar10 = 0;
    FUN_10400d80c(0,0,0,0);
    uStack_80 = uVar13;
    lStack_78 = lVar2;
    uStack_70 = uVar6;
    uStack_68 = uVar1;
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  FUN_10400bf0c();
  (*pcVar11)(&uStack_80,&UNK_110734798,lVar10,param_3,param_4);
  uVar13 = uStack_68;
  uVar6 = uStack_70;
  lVar10 = lStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (uVar12 == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_78);
      func_0x00010006c00c(uVar6,uVar13);
    }
    else {
      pcVar11 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_78);
      func_0x00010006c00c(uVar6,uVar13);
      (*pcVar11)(param_3,param_4);
    }
    FUN_10400d80c(uStack_80,lStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x18);
    uVar7 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x30);
    uVar5 = *(undefined8 *)(param_1 + 0x38);
    uVar9 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x18) = uVar1;
    *(long *)(param_1 + 0x20) = lVar10;
    *(undefined8 *)(param_1 + 0x28) = uVar6;
    *(undefined8 *)(param_1 + 0x30) = uVar13;
    *(undefined8 *)(param_1 + 0x40) = 0x2000000000000000;
    *(undefined8 *)(param_1 + 0x38) = 0;
    FUN_103ff5490(uVar3,uVar7,uVar4,uVar8,uVar5,uVar9);
  }
  else {
    FUN_10400d80c(uStack_80,lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 1040087fc; end: 104008913;  */

void FUN_1040087fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x28))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = (ulong)(uint)unaff_x20[1], unaff_x20[1] == 0 ||
      ((**(code **)(param_3 + 0x28))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    if (*(long *)(unaff_x20 + 2) != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 2);
      func_0x00010400b644();
      (*pcVar2)(&lStack_50,3,&UNK_110735198,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      if ((*(ulong *)(unaff_x20 + 0x10) >> 0x3d & 1) == 0) {
        FUN_104008914();
      }
      else {
        FUN_1040089a0();
      }
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x12),*(undefined8 *)(unaff_x20 + 0x14),
                        param_2,param_3);
  }
  return;
}



/* Entry: 104008914; end: 10400899f;  */

void FUN_104008914(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x40);
  if ((uStack_48 >> 0x3d & 1) == 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    uStack_68 = *(undefined8 *)(param_1 + 0x20);
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10400be10();
    (*pcVar1)(&uStack_70,4,&UNK_110734710,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1040089a0);
  (*pcVar1)();
}



/* Entry: 1040089a0; end: 104008a37;  */

void FUN_1040089a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  if (((*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (*(ulong *)(param_1 + 0x40) & 0x2000000000000000) != 0) {
    uStack_58 = *(undefined8 *)(param_1 + 0x20);
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10400bf0c();
    (*pcVar1)(&uStack_60,5,&UNK_110734798,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104008a38);
  (*pcVar1)();
}



/* Entry: 104008a38; end: 104008a93;  */

void FUN_104008a38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[4] = 0;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[8] = 0x3000000000000000;
  param_1[10] = 0xc000000000000000;
  return;
}



/* Entry: 104008a94; end: 104008ac3;  */

undefined1  [16] FUN_104008a94(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 104008ac4; end: 104008af7;  */

void FUN_104008ac4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 104008af8; end: 104008b0b;  */

undefined1  [16] FUN_104008af8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x104008b08;
  return auVar1;
}



/* Entry: 104008b0c; end: 104008b1f;  */

void FUN_104008b0c(void)

{
  FUN_10400831c();
  return;
}



/* Entry: 104008b20; end: 104008b67;  */

void FUN_104008b20(void)

{
  FUN_1040087fc();
  return;
}



/* Entry: 104008b68; end: 104008b6b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104008b68(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 104008b6c; end: 104008ba3;  */

uint FUN_104008b6c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010400d6c0();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104008ba4; end: 104008c0b;  */

uint FUN_104008ba4(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_20 = param_1[10];
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_a8 = unaff_x20[5];
  uStack_b0 = unaff_x20[4];
  uStack_98 = unaff_x20[7];
  uStack_a0 = unaff_x20[6];
  uStack_88 = unaff_x20[9];
  uStack_90 = unaff_x20[8];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_10400b0f8(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104008c0c; end: 104008cab;  */

void FUN_104008c0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046950 != -1) {
    _swift_once(0x113046950,FUN_1040082d4);
  }
  uVar5 = uRam0000000113812e60;
  uVar4 = uRam0000000113812e58;
  uVar3 = uRam0000000113812e50;
  uVar2 = uRam0000000113812e48;
  uVar1 = uRam0000000113812e40;
  *param_1 = uRam0000000113812e38;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 104008cac; end: 104008ce7;  */

void FUN_104008cac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046ab8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046ab8,&UNK_10dcc2078);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104008ce8; end: 104008e0b;  */

void FUN_104008ce8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_d8 [72];
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_d8,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_d8,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 104008e0c; end: 104008e73;  */

uint FUN_104008e0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_80 = param_1[10];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_38 = param_2[7];
  uStack_40 = param_2[6];
  uStack_28 = param_2[9];
  uStack_30 = param_2[8];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10400b0f8(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 104008e74; end: 104008f0f;  */

void FUN_104008e74(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000113046948 != -1) {
    _swift_once(0x113046948,FUN_104008264);
  }
  uVar2 = uRam0000000113812e30;
  uVar1 = uRam0000000113812e28;
  _swift_bridgeObjectRetain_n(uRam0000000113812e30,2);
  __sSS6appendyySSF(0xd000000000000012,0x800000010f1dd880);
  _swift_bridgeObjectRelease(uVar2);
  uRam0000000113812e68 = uVar1;
  uRam0000000113812e70 = uVar2;
  return;
}



/* Entry: 104008f10; end: 104008f57;  */

void FUN_104008f10(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc2160,0x17,2);
  uRam0000000113812e80 = uStack_38;
  uRam0000000113812e78 = uStack_40;
  uRam0000000113812e90 = uStack_28;
  uRam0000000113812e88 = uStack_30;
  uRam0000000113812ea0 = uStack_18;
  uRam0000000113812e98 = uStack_20;
  return;
}



/* Entry: 104008f58; end: 104008f93;  */

undefined1  [16] FUN_104008f58(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (lRam0000000113046968 != -1) {
    _swift_once(0x113046968,FUN_104008e74);
  }
  uVar2 = uRam0000000113812e70;
  uVar1 = uRam0000000113812e68;
  _swift_bridgeObjectRetain(uRam0000000113812e70);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 104008f94; end: 104008fcb;  */

uint FUN_104008f94(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010400d680();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 104008fcc; end: 10400906b;  */

void FUN_104008fcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113046970 != -1) {
    _swift_once(0x113046970,FUN_104008f10);
  }
  uVar5 = uRam0000000113812ea0;
  uVar4 = uRam0000000113812e98;
  uVar3 = uRam0000000113812e90;
  uVar2 = uRam0000000113812e88;
  uVar1 = uRam0000000113812e80;
  *param_1 = uRam0000000113812e78;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 10400906c; end: 10400907f;  */

void FUN_10400906c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046aa8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046aa8,&UNK_10dcc2070);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104009080; end: 1040090b7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104009080(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  puVar1 = param_1;
  FUN_10400be10();
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (*(code *)puVar1[9])(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,puVar1);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 1040090b8; end: 104009153;  */

void FUN_1040090b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000113046948 != -1) {
    _swift_once(0x113046948,FUN_104008264);
  }
  uVar2 = uRam0000000113812e30;
  uVar1 = uRam0000000113812e28;
  _swift_bridgeObjectRetain_n(uRam0000000113812e30,2);
  __sSS6appendyySSF(0xd00000000000001a,0x800000010f1dd860);
  _swift_bridgeObjectRelease(uVar2);
  uRam0000000113812ea8 = uVar1;
  uRam0000000113812eb0 = uVar2;
  return;
}



/* Entry: 104009154; end: 10400919b;  */

void FUN_104009154(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc2140,0x12,2);
  uRam0000000113812ec0 = uStack_38;
  uRam0000000113812eb8 = uStack_40;
  uRam0000000113812ed0 = uStack_28;
  uRam0000000113812ec8 = uStack_30;
  uRam0000000113812ee0 = uStack_18;
  uRam0000000113812ed8 = uStack_20;
  return;
}



/* Entry: 10400919c; end: 10400921f;  */

void FUN_10400919c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 104009220; end: 1040092a7;  */

void FUN_104009220(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1040092a8; end: 1040092e7;  */

void FUN_1040092a8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 1040092e8; end: 104009317;  */

undefined1  [16] FUN_1040092e8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 104009318; end: 10400934b;  */

void FUN_104009318(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10400934c; end: 10400935f;  */

undefined1  [16] FUN_10400934c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10400935c;
  return auVar1;
}



/* Entry: 104009360; end: 104009397;  */

void FUN_104009360(void)

{
  FUN_10400919c();
  return;
}



/* Entry: 104009398; end: 10400939b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_104009398(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  (**(code **)(param_3 + 0x48))(&uStack_80,&UNK_110788708,&PTR_DAT_110788720,param_2,param_3);
  param_1[5] = uStack_58;
  param_1[4] = uStack_60;
  param_1[7] = uStack_48;
  param_1[6] = uStack_50;
  param_1[8] = uStack_40;
  param_1[1] = uStack_78;
  *param_1 = uStack_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  return;
}



/* Entry: 10400939c; end: 1040093d3;  */

uint FUN_10400939c(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  uint uVar5;
  undefined8 unaff_x20;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar1 = param_1;
  func_0x00010400d640();
  lVar2 = 0;
  __sSqMa();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_90 + -extraout_x8;
  lVar8 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar7 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000104560f98(param_1,auStack_88);
  uVar3 = 0x113084cb8;
  func_0x0001000285a8(0x113084cb8,&UNK_10dd16f00);
  puVar4 = puVar6;
  _swift_dynamicCast(puVar6,auStack_88,uVar3,param_2,6);
  if ((int)puVar4 == 0) {
    (**(code **)(lVar8 + 0x38))(puVar6,1,1,param_2);
    (**(code **)(lVar9 + 8))(puVar6,lVar2);
    uVar5 = 0;
  }
  else {
    (**(code **)(lVar8 + 0x38))(puVar6,0,1,param_2);
    (**(code **)(lVar8 + 0x20))(lVar7,puVar6,param_2);
    __sSQ2eeoiySbx_xtFZTj(unaff_x20,lVar7,param_2,*(undefined8 *)(*(long *)(lVar1 + 8) + 8));
    uVar5 = (uint)unaff_x20;
    (**(code **)(lVar8 + 8))(lVar7,param_2);
  }
  return uVar5 & 1;
}



/* Entry: 1040093d4; end: 1040094eb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1040093d4(ulong *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  ulong uVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  ulong uVar22;
  byte *pbVar23;
  byte *unaff_x19;
  long lVar24;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar25;
  ulong unaff_x22;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  undefined1 auVar43 [16];
  
  uVar14 = param_1[2];
  uVar16 = param_1[3];
  uVar20 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  if ((uVar20 != *param_1 || unaff_x20[1] != param_1[1]) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar20 & 1) == 0)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, uVar14 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)(uVar14 >> 0x20);
      if (SBORROW4(iVar19,(int)uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)uVar14)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar20 = 0;
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10);
        if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar22) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar12 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar12);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar12) {
                pbVar12 = unaff_x23;
              }
              pbVar12 = pbVar12 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar12 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar12)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar12);
          }
          unaff_x23 = unaff_x24 + -lVar24;
          if (SBORROW8((long)unaff_x24,lVar24)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar9;
          unaff_x25 = pbVar25;
          if (pbVar9 == (byte *)0x0) {
            pbVar12 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar12) {
              pbVar12 = unaff_x23;
            }
            pbVar12 = pbVar12 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,uVar14,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar8;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
    pbVar11 = *(byte **)pbVar8;
    pbVar9 = *(byte **)(pbVar8 + 8);
    pbVar23 = *(byte **)(pbVar8 + 0x18);
    bVar27 = pbVar8[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar24 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar24,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar12 + 8);
        pbVar17 = *(byte **)(pbVar12 + 0x10);
        lVar24 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar24,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar25;
        if ((pbVar9 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar12;
        pbVar17 = *(byte **)(pbVar12 + 8);
        lVar24 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar9 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar9;
joined_r0x000100e266a4:
          if (((ulong)pbVar23 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
      }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar11,pbVar13,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar26 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar12;
        pbVar17 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar25, pbVar13 = pbVar23, pbVar15 = *(byte **)(pbVar12 + 0x10),
           pbVar17 = *(byte **)(pbVar12 + 0x18),
           pbVar25 == *(byte **)(pbVar12 + 0x10) && pbVar23 == *(byte **)(pbVar12 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar12[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar12 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar12 + 0x10);
      lVar24 = *(long *)(pbVar12 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar25;
        if ((pbVar9 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar12 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar12 + 0x20);
        lVar24 = *(long *)(pbVar12 + 0x18);
        bVar27 = pbVar12[8] | (byte)lVar24;
        bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar12[0x10] | (byte)lVar26;
        bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
        auVar43[1] = bVar28;
        auVar43[0] = bVar27;
        auVar43[2] = bVar29;
        auVar43[3] = bVar30;
        auVar43[4] = bVar31;
        auVar43[5] = bVar32;
        auVar43[6] = bVar33;
        auVar43[7] = bVar34;
        auVar43[8] = bVar35;
        auVar43[9] = bVar36;
        auVar43[10] = bVar37;
        auVar43[0xb] = bVar38;
        auVar43[0xc] = bVar39;
        auVar43[0xd] = bVar40;
        auVar43[0xe] = bVar41;
        auVar43[0xf] = bVar42;
        auVar3[1] = bVar28;
        auVar3[0] = bVar27;
        auVar3[2] = bVar29;
        auVar3[3] = bVar30;
        auVar3[4] = bVar31;
        auVar3[5] = bVar32;
        auVar3[6] = bVar33;
        auVar3[7] = bVar34;
        auVar3[8] = bVar35;
        auVar3[9] = bVar36;
        auVar3[10] = bVar37;
        auVar3[0xb] = bVar38;
        auVar3[0xc] = bVar39;
        auVar3[0xd] = bVar40;
        auVar3[0xe] = bVar41;
        auVar3[0xf] = bVar42;
        auVar43 = NEON_ext(auVar43,auVar3,8,1);
        if (CONCAT17(bVar34 | auVar43[7],
                     CONCAT16(bVar33 | auVar43[6],
                              CONCAT15(bVar32 | auVar43[5],
                                       CONCAT14(bVar31 | auVar43[4],
                                                CONCAT13(bVar30 | auVar43[3],
                                                         CONCAT12(bVar29 | auVar43[2],
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar12 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar12 + 0x20);
      lVar24 = *(long *)(pbVar12 + 0x18);
      bVar27 = pbVar12[8] | (byte)lVar24;
      bVar28 = pbVar12[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar12[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar12[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar12[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar12[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar12[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar12[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar12[0x10] | (byte)lVar26;
      bVar36 = pbVar12[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar12[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar12[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar12[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar12[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar12[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar12[0x17] | (byte)((ulong)lVar26 >> 0x38);
      auVar1[1] = bVar28;
      auVar1[0] = bVar27;
      auVar1[2] = bVar29;
      auVar1[3] = bVar30;
      auVar1[4] = bVar31;
      auVar1[5] = bVar32;
      auVar1[6] = bVar33;
      auVar1[7] = bVar34;
      auVar1[8] = bVar35;
      auVar1[9] = bVar36;
      auVar1[10] = bVar37;
      auVar1[0xb] = bVar38;
      auVar1[0xc] = bVar39;
      auVar1[0xd] = bVar40;
      auVar1[0xe] = bVar41;
      auVar1[0xf] = bVar42;
      auVar2[1] = bVar28;
      auVar2[0] = bVar27;
      auVar2[2] = bVar29;
      auVar2[3] = bVar30;
      auVar2[4] = bVar31;
      auVar2[5] = bVar32;
      auVar2[6] = bVar33;
      auVar2[7] = bVar34;
      auVar2[8] = bVar35;
      auVar2[9] = bVar36;
      auVar2[10] = bVar37;
      auVar2[0xb] = bVar38;
      auVar2[0xc] = bVar39;
      auVar2[0xd] = bVar40;
      auVar2[0xe] = bVar41;
      auVar2[0xf] = bVar42;
      auVar43 = NEON_ext(auVar1,auVar2,8,1);
      lVar24 = CONCAT17(bVar34 | auVar43[7],
                        CONCAT16(bVar33 | auVar43[6],
                                 CONCAT15(bVar32 | auVar43[5],
                                          CONCAT14(bVar31 | auVar43[4],
                                                   CONCAT13(bVar30 | auVar43[3],
                                                            CONCAT12(bVar29 | auVar43[2],
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    uVar14 = *(ulong *)(pbVar12 + 8);
    uVar16 = *(ulong *)(pbVar12 + 0x10);
    lVar24 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 1040094ec; end: 104009527;  */

void FUN_1040094ec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113046a98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113046a98,&UNK_10dcc2068);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 104009528; end: 1040096a3;  */

void FUN_104009528(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __sSH4hash4intoys6HasherVz_tFTj(auStack_98,param_1,param_2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1040096a4; end: 1040096eb;  */

void FUN_1040096a4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dcc20f0,0x4f,2);
  uRam0000000113812ef0 = uStack_38;
  uRam0000000113812ee8 = uStack_40;
  uRam0000000113812f00 = uStack_28;
  uRam0000000113812ef8 = uStack_30;
  uRam0000000113812f10 = uStack_18;
  uRam0000000113812f08 = uStack_20;
  return;
}



/* Entry: 1040096ec; end: 1040097e3;  */

/* WARNING: Removing unreachable block (ram,0x0001040097c4) */
/* WARNING: Removing unreachable block (ram,0x0001040097e0) */

void FUN_1040096ec(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        FUN_1040099cc();
      }
      else if (lVar1 == 2) {
        FUN_1040097e4();
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5dbc();
        (*pcVar4)(unaff_x20 + 0x40,&UNK_110734ce8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1040097e4; end: 1040099cb;  */

/* WARNING: Removing unreachable block (ram,0x000104009978) */

void FUN_1040097e4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  long unaff_x21;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  lStack_88 = 0;
  uStack_90 = 0;
  uVar15 = param_1[5];
  puVar12 = param_1;
  if ((uVar15 >> 0x3d & 1) == 0) {
    uVar1 = param_1[3];
    uVar6 = param_1[4];
    lVar2 = param_1[1];
    uVar7 = param_1[2];
    uVar13 = *param_1;
    FUN_103ffeb88(uVar13,lVar2,uVar7,uVar1,uVar6,uVar15);
    puVar12 = (undefined8 *)0x0;
    FUN_10400d7c0(0,0,0,0,0,0);
    uStack_90 = uVar13;
    lStack_88 = lVar2;
    uStack_80 = uVar7;
    uStack_78 = uVar1;
    uStack_70 = uVar6;
    uStack_68 = uVar15;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_10400c0c4();
  (*pcVar14)(&uStack_90,&UNK_110734930,puVar12,param_3,param_4);
  uVar11 = uStack_68;
  uVar13 = uStack_70;
  uVar7 = uStack_78;
  uVar6 = uStack_80;
  lVar2 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if ((uVar15 & 0x3000000000000000) == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_88);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010006c00c(uVar13,uVar11);
    }
    else {
      pcVar14 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_88);
      _swift_bridgeObjectRetain(uVar7);
      func_0x00010006c00c(uVar13,uVar11);
      (*pcVar14)(param_3,param_4);
    }
    FUN_10400d7c0(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar3 = *param_1;
    uVar8 = param_1[1];
    uVar4 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = param_1[4];
    uVar10 = param_1[5];
    *param_1 = uVar1;
    param_1[1] = lVar2;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar13;
    param_1[5] = uVar11;
    func_0x00010174b838(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    FUN_10400d7c0(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 1040099cc; end: 104009bc3;  */

/* WARNING: Removing unreachable block (ram,0x000104009b60) */

void FUN_1040099cc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long unaff_x21;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  
  lStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  uVar13 = param_1[5];
  puVar12 = param_1;
  if ((uVar13 & 0x3000000000000000) != 0x3000000000000000 && (uVar13 & 0x2000000000000000) != 0) {
    lVar1 = param_1[3];
    uVar6 = param_1[4];
    uVar2 = param_1[1];
    uVar7 = param_1[2];
    uVar15 = *param_1;
    FUN_103ffeb88(uVar15,uVar2,uVar7,lVar1,uVar6);
    puVar12 = (undefined8 *)0x0;
    FUN_10400d740(0,0,0,0,0,0);
    uStack_88 = uVar2 & 0xff;
    uStack_90 = uVar15;
    uStack_80 = uVar7;
    lStack_78 = lVar1;
    uStack_70 = uVar6;
    uStack_68 = uVar13 & 0xdfffffffffffffff;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  FUN_10400c1f0();
  (*pcVar14)(&uStack_90,&UNK_1107349b8,puVar12,param_3,param_4);
  uVar11 = uStack_68;
  uVar15 = uStack_70;
  lVar1 = lStack_78;
  uVar7 = uStack_80;
  uVar2 = uStack_88;
  uVar6 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar13 & 0x3000000000000000) == 0x3000000000000000) {
      _swift_bridgeObjectRetain(lStack_78);
      func_0x00010006c00c(uVar15,uVar11);
    }
    else {
      pcVar14 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain(lStack_78);
      func_0x00010006c00c(uVar15,uVar11);
      (*pcVar14)(param_3,param_4);
    }
    FUN_10400d740(uStack_90,uStack_88,uStack_80,lStack_78,uStack_70,uStack_68);
    uVar3 = *param_1;
    uVar8 = param_1[1];
    uVar4 = param_1[2];
    uVar9 = param_1[3];
    uVar5 = param_1[4];
    uVar10 = param_1[5];
    *param_1 = uVar6;
    param_1[1] = uVar2 & 0xff;
    param_1[2] = uVar7;
    param_1[3] = lVar1;
    param_1[4] = uVar15;
    param_1[5] = uVar11 | 0x2000000000000000;
    func_0x00010174b838(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10);
  }
  else {
    FUN_10400d740(uStack_90,uStack_88,uStack_80,lStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 104009bc4; end: 104009c5b;  */

void FUN_104009bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_104009c5c();
  if (unaff_x21 == 0) {
    if (((*(ulong *)(unaff_x20 + 0x28) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      if ((*(ulong *)(unaff_x20 + 0x28) >> 0x3d & 1) == 0) {
        FUN_104009ce8();
      }
      else {
        FUN_104009d70();
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                        param_2,param_3);
  }
  return;
}



/* Entry: 104009c5c; end: 104009ce7;  */

void FUN_104009c5c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x58);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5dbc();
    (*pcVar1)(&uStack_60,1,&UNK_110734ce8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 104009ce8; end: 104009d6f;  */

void FUN_104009ce8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = param_1[5];
  if ((uStack_48 >> 0x3d & 1) == 0) {
    uStack_50 = param_1[4];
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10400c0c4();
    (*pcVar1)(&uStack_70,2,&UNK_110734930,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104009d70);
  (*pcVar1)();
}



/* Entry: 104009d70; end: 104009e0f;  */

void FUN_104009d70(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = param_1[5];
  if (((uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_48 & 0x2000000000000000) != 0) {
    uStack_50 = param_1[4];
    uStack_48 = uStack_48 & 0xdfffffffffffffff;
    uStack_68 = param_1[1];
    uStack_70 = *param_1;
    uStack_58 = param_1[3];
    uStack_60 = param_1[2];
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_10400c1f0();
    (*pcVar1)(&uStack_70,3,&UNK_1107349b8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x104009e10);
  (*pcVar1)();
}



/* Entry: 104009e10; end: 104009e67;  */

uint FUN_104009e10(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_1a0 [48];
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  undefined8 uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  uVar8 = param_1[9];
  uVar4 = param_1[8];
  uVar16 = param_1[0xb];
  uVar12 = param_1[10];
  uVar9 = param_2[9];
  uVar5 = param_2[8];
  uVar17 = param_2[0xb];
  uVar13 = param_2[10];
  uStack_110 = uVar5;
  uStack_108 = uVar9;
  uStack_100 = uVar13;
  uStack_f8 = uVar17;
  uStack_f0 = uVar4;
  uStack_e8 = uVar8;
  uStack_e0 = uVar12;
  uStack_d8 = uVar16;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_10400b8ac;
    if ((((int)uVar4 == (int)uVar5) && ((uVar5 ^ uVar4) >> 0x20 == 0)) && ((int)uVar8 == (int)uVar9)
       ) {
      FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
      FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
      uVar2 = uVar12;
      func_0x000100e25fcc(uVar12,uVar16,uVar13,uVar17);
      func_0x000101553d58(uVar5,uVar9,uVar13,uVar17);
      if ((uVar2 & 1) != 0) goto LAB_10400b7dc;
    }
    else {
      FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
      FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
      func_0x000101553d58(uVar5,uVar9,uVar13,uVar17);
    }
LAB_10400b9f4:
    func_0x000101553d58(uVar4,uVar8,uVar12,uVar16);
  }
  else {
    if (uVar17 >> 0x3c < 0xf) {
LAB_10400b8ac:
      FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
      FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
      func_0x000101553d58(uVar4,uVar8,uVar12,uVar16);
      uVar4 = uVar5;
      uVar8 = uVar9;
      uVar12 = uVar13;
      uVar16 = uVar17;
      goto LAB_10400b9f4;
    }
    FUN_10400ad6c(&uStack_f0,&uStack_98,0x112db7158,&UNK_10d964998);
    FUN_10400ad6c(&uStack_110,&uStack_98,0x112db7158,&UNK_10d964998);
LAB_10400b7dc:
    func_0x000101553d58(uVar4,uVar8,uVar12,uVar16);
    uVar10 = param_1[1];
    uVar8 = *param_1;
    uVar18 = param_1[3];
    uVar14 = param_1[2];
    uVar4 = param_1[5];
    uVar9 = param_1[4];
    uVar11 = param_2[1];
    uVar6 = *param_2;
    uVar19 = param_2[3];
    uVar15 = param_2[2];
    uVar12 = param_2[5];
    uVar7 = param_2[4];
    uStack_170 = uVar6;
    uStack_168 = uVar11;
    uStack_160 = uVar15;
    uStack_158 = uVar19;
    uStack_150 = uVar7;
    uStack_148 = uVar12;
    uStack_140 = uVar8;
    uStack_138 = uVar10;
    uStack_130 = uVar14;
    uStack_128 = uVar18;
    uStack_120 = uVar9;
    uStack_118 = uVar4;
    if (((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
      if ((uVar12 & 0x3000000000000000) == 0x3000000000000000) {
        FUN_10400ad6c(&uStack_140,&uStack_98,0x113046928,&UNK_10dcc18e0);
        FUN_10400ad6c(&uStack_170,&uStack_98,0x113046928,&UNK_10dcc18e0);
        func_0x00010174b838(uVar8,uVar10,uVar14,uVar18,uVar9,uVar4);
LAB_10400bb50:
        uVar8 = param_1[6];
        func_0x000100e25fcc(uVar8,param_1[7],param_2[6],param_2[7]);
        uVar1 = (uint)uVar8;
        goto LAB_10400b9fc;
      }
LAB_10400ba28:
      FUN_10400ad6c(&uStack_140,&uStack_98,0x113046928,&UNK_10dcc18e0);
      FUN_10400ad6c(&uStack_170,&uStack_98,0x113046928,&UNK_10dcc18e0);
      func_0x00010174b838(uVar8,uVar10,uVar14,uVar18,uVar9,uVar4);
      func_0x00010174b838(uVar6,uVar11,uVar15,uVar19,uVar7,uVar12);
    }
    else {
      if ((uVar12 & 0x3000000000000000) == 0x3000000000000000) goto LAB_10400ba28;
      uStack_c8 = uVar8;
      uStack_c0 = uVar10;
      uStack_b8 = uVar14;
      uStack_b0 = uVar18;
      uStack_a8 = uVar9;
      uStack_a0 = uVar4;
      uStack_98 = uVar6;
      uStack_90 = uVar11;
      uStack_88 = uVar15;
      uStack_80 = uVar19;
      uStack_78 = uVar7;
      uStack_70 = uVar12;
      FUN_10400ad6c(&uStack_140,auStack_1a0,0x113046928,&UNK_10dcc18e0);
      FUN_10400ad6c(&uStack_170,auStack_1a0,0x113046928,&UNK_10dcc18e0);
      puVar3 = &uStack_c8;
      FUN_10400adb4(puVar3,&uStack_98);
      func_0x00010174b838(uVar6,uVar11,uVar15,uVar19,uVar7,uVar12);
      func_0x00010174b838(uVar8,uVar10,uVar14,uVar18,uVar9,uVar4);
      if (((ulong)puVar3 & 1) != 0) goto LAB_10400bb50;
    }
  }
  uVar1 = 0;
LAB_10400b9fc:
  return uVar1 & 1;
}



/* Entry: 104009e68; end: 104009e97;  */

undefined1  [16] FUN_104009e68(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 104009e98; end: 104009ecb;  */

void FUN_104009e98(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 104009ecc; end: 104009edf;  */

undefined1  [16] FUN_104009ecc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x104009edc;
  return auVar1;
}



/* Entry: 104009ee0; end: 104009ef3;  */

void FUN_104009ee0(void)

{
  FUN_1040096ec();
  return;
}



/* Entry: 104009ef4; end: 104009f33;  */

void FUN_104009ef4(void)

{
  FUN_104009bc4();
  return;
}



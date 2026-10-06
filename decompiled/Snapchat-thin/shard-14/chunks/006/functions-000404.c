/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10b51f428; end: 10b51f4d3;  */

undefined8 * FUN_10b51f428(undefined8 *param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfc0d0;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    FUN_10b4d197c(param_1 + 1,(*(ulong *)(param_3 + 8) & 0xfffffffffffffffe) + 8);
  }
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_3 + 0x10);
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lVar1 = param_3 + 0x18;
  func_0x00010b51f9c0();
  param_1[3] = lVar1;
  lVar1 = param_3 + 0x20;
  func_0x00010b51f9c0();
  param_1[4] = lVar1;
  lVar1 = param_3 + 0x28;
  func_0x00010b51f9c0();
  param_1[5] = lVar1;
  lVar1 = param_3 + 0x30;
  func_0x00010b51f9c0();
  param_1[6] = lVar1;
  if ((*(byte *)(param_1 + 2) & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b51f928(param_2,*(undefined8 *)(param_3 + 0x38));
  }
  param_1[7] = param_2;
  uVar2 = *(undefined8 *)(param_3 + 0x40);
  param_1[9] = *(undefined8 *)(param_3 + 0x48);
  param_1[8] = uVar2;
  return param_1;
}



/* Entry: 10b51f4d4; end: 10b51f4e3;  */

long FUN_10b51f4d4(long param_1)

{
  func_0x0001001a3db4(param_1 + 8);
  func_0x000100690ff8(param_1);
  return param_1;
}



/* Entry: 10b51f4e4; end: 10b51f54f;  */

void FUN_10b51f4e4(long param_1)

{
  ulong *puVar1;
  
  func_0x000107c3025c(param_1 + 0x18);
  func_0x000107c3025c(param_1 + 0x20);
  func_0x000107c3025c(param_1 + 0x28);
  func_0x000107c3025c(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    func_0x00010b51f2ac(*(undefined8 *)(param_1 + 0x38));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b51f550; end: 10b51f723;  */

long * FUN_10b51f550(long *param_1,long *param_2,long *param_3)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  
  puVar7 = (undefined8 *)(param_1[3] & 0xfffffffffffffffc);
  lVar3 = (long)*(char *)((long)puVar7 + 0x17);
  plVar1 = param_1;
  if (lVar3 < 0) {
    lVar3 = puVar7[1];
    if (lVar3 != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b51f594;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b51f594:
    func_0x00010b51f9e0(puVar7,lVar3,param_3,&UNK_10f776d3a);
    param_2 = param_3;
    func_0x00010b51f9b4(param_3,2);
    plVar1 = param_2;
  }
  uVar4 = param_1[4] & 0xfffffffffffffffc;
  lVar3 = (long)*(char *)(uVar4 + 0x17);
  if (lVar3 < 0) {
    lVar3 = *(long *)(uVar4 + 8);
  }
  if (lVar3 != 0) {
    plVar1 = param_3;
    func_0x000107c280a0(param_3,3,uVar4,param_2);
    param_2 = plVar1;
  }
  if ((*(byte *)(param_1 + 2) & 1) != 0) {
    plVar1 = (long *)0x5;
    func_0x000107c303cc(5,param_1[7],*(undefined4 *)(param_1[7] + 0x18),param_2,param_3);
    param_2 = plVar1;
  }
  if (param_1[8] != 0) {
    plVar1 = param_3;
    func_0x000106af68d0(param_3,param_1[8],param_2);
    param_2 = plVar1;
  }
  plVar2 = plVar1;
  if ((int)param_1[9] != 0) {
    func_0x00010b51f9c8();
    plVar2 = (long *)0x38;
    func_0x000107c280a8(0x38,plVar1);
    func_0x00010b51f99c();
    param_2 = plVar2;
  }
  if (*(int *)((long)param_1 + 0x4c) != 0) {
    func_0x00010b51f9c8();
    param_2 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar2);
    func_0x00010b51f99c();
  }
  puVar7 = (undefined8 *)(param_1[5] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] != 0) {
      puVar7 = (undefined8 *)*puVar7;
      goto LAB_10b51f688;
    }
  }
  else if (*(char *)((long)puVar7 + 0x17) != '\0') {
LAB_10b51f688:
    func_0x00010b51f9e0(puVar7);
    param_2 = param_3;
    func_0x00010b51f9b4(param_3,9);
  }
  puVar7 = (undefined8 *)(param_1[6] & 0xfffffffffffffffc);
  if (*(char *)((long)puVar7 + 0x17) < '\0') {
    if (puVar7[1] == 0) goto LAB_10b51f6e8;
    puVar7 = (undefined8 *)*puVar7;
  }
  else if (*(char *)((long)puVar7 + 0x17) == '\0') goto LAB_10b51f6e8;
  func_0x00010b51f9e0(puVar7);
  param_2 = param_3;
  func_0x00010b51f9b4(param_3,10);
LAB_10b51f6e8:
  if ((param_1[1] & 1U) == 0) {
    return param_2;
  }
  uVar5 = param_1[1] & 0xfffffffffffffffe;
  uVar4 = (ulong)*(char *)(uVar5 + 0x1f);
  if ((long)uVar4 < 0) {
    lVar3 = *(long *)(uVar5 + 8);
    uVar4 = *(ulong *)(uVar5 + 0x10);
  }
  else {
    lVar3 = uVar5 + 8;
  }
  if (*param_3 - (long)param_2 < (long)(int)uVar4) {
    while( true ) {
      iVar8 = ((int)*param_3 - (int)param_2) + 0x10;
      iVar6 = (int)uVar4;
      uVar4 = (ulong)(uint)(iVar6 - iVar8);
      if (iVar6 - iVar8 == 0 || iVar6 < iVar8) break;
      func_0x00010b4d5738();
      lVar3 = (long)param_2 + (long)iVar8;
      param_2 = param_3;
      func_0x000107c303e4(param_3,lVar3);
    }
    func_0x00010b4d5738();
    return (long *)((long)param_2 + (long)iVar6);
  }
  _memcpy(param_2,lVar3,uVar4 & 0xffffffff);
  return (long *)((long)param_2 + (long)(int)uVar4);
}



/* Entry: 10b51f724; end: 10b51f8b3;  */

long FUN_10b51f724(long param_1)

{
  long lVar1;
  long extraout_x8;
  long extraout_x8_00;
  long lVar2;
  long extraout_x8_01;
  long extraout_x8_02;
  ulong uVar3;
  long lVar4;
  
  lVar1 = param_1;
  func_0x00010b51f9f4(*(undefined8 *)(param_1 + 0x18));
  lVar4 = extraout_x8;
  if (extraout_x8 < 0) {
    lVar4 = *(long *)(lVar1 + 8);
  }
  if (lVar4 == 0) {
    lVar4 = 0;
  }
  else {
    func_0x000107c282a0();
    lVar4 = lVar1 + 1;
  }
  func_0x00010b51f9f4(*(undefined8 *)(param_1 + 0x20));
  lVar2 = extraout_x8_00;
  if (extraout_x8_00 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c28098();
    lVar4 = lVar4 + lVar1 + 1;
  }
  func_0x00010b51f9f4(*(undefined8 *)(param_1 + 0x28));
  lVar2 = extraout_x8_01;
  if (extraout_x8_01 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar1 + 1;
  }
  func_0x00010b51f9f4(*(undefined8 *)(param_1 + 0x30));
  lVar2 = extraout_x8_02;
  if (extraout_x8_02 < 0) {
    lVar2 = *(long *)(lVar1 + 8);
  }
  if (lVar2 != 0) {
    func_0x000107c282a0();
    lVar4 = lVar4 + lVar1 + 1;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar1 = *(long *)(param_1 + 0x38);
    FUN_10b51f35c();
    lVar4 = lVar4 + lVar1 + (ulong)((int)LZCOUNT((int)lVar1) * -9 + 0x160U >> 6) + 1;
  }
  if (*(long *)(param_1 + 0x40) != 0) {
    lVar4 = (ulong)((int)LZCOUNT(*(long *)(param_1 + 0x40)) * -9 + 0x2c0U >> 6) + lVar4;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    lVar4 = lVar4 + (ulong)((int)LZCOUNT((long)*(int *)(param_1 + 0x4c)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar1 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(uVar3 + 0x10);
    }
    lVar4 = lVar1 + lVar4;
  }
  *(int *)(param_1 + 0x14) = (int)lVar4;
  return lVar4;
}



/* Entry: 10b51f8b4; end: 10b51f927;  */

undefined1  [16] FUN_10b51f8b4(long param_1,long param_2)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = uVar6;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)(param_2 + 0x10) = uVar1;
  uVar6 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar6;
  puVar4 = (undefined1 *)(param_2 + 0x38);
  puVar5 = puVar4;
  for (puVar3 = (undefined1 *)(param_1 + 0x38); puVar3 != (undefined1 *)(param_1 + 0x50);
      puVar3 = puVar3 + 1) {
    uVar2 = *puVar3;
    *puVar3 = *puVar5;
    *puVar5 = uVar2;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  auVar7._8_8_ = puVar4;
  auVar7._0_8_ = (undefined1 *)(param_1 + 0x50);
  return auVar7;
}



/* Entry: 10b51f928; end: 10b51f99b;  */

undefined8 * FUN_10b51f928(undefined8 *param_1)

{
  undefined8 *puVar1;
  
  if (param_1 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_1;
    FUN_10b4d80e0(param_1,0x20);
  }
  *puVar1 = &PTR_FUN_110cfc080;
  puVar1[1] = param_1;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  func_0x00010b51f22c();
  return puVar1;
}



/* Entry: 10b51f99c; end: 10b51fa0b;  */

void FUN_10b51f99c(byte *param_1)

{
  ulong uVar1;
  int unaff_w21;
  
  for (uVar1 = (ulong)unaff_w21; 0x7f < uVar1; uVar1 = uVar1 >> 7) {
    *param_1 = (byte)uVar1 | 0x80;
    param_1 = param_1 + 1;
  }
  *param_1 = (byte)uVar1;
  return;
}



/* Entry: 10b51fa0c; end: 10b51fac3;  */

undefined * FUN_10b51fa0c(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined *puVar3;
  
  if ((bRam000000011383dbb8 & 1) == 0) {
    iVar2 = 0x1383dbb8;
    ___cxa_guard_acquire();
    param_1 = 0;
    if (iVar2 != 0) {
      FUN_10b51fac4();
      uVar1 = (char)iVar2;
      FUN_10b4c5a3c();
      uRam000000011383dbb0 = uVar1;
      param_1 = 0x1383dbb8;
      ___cxa_guard_release();
    }
  }
  FUN_10b51fac4();
  FUN_10b4c59b8();
  if (param_1 == -1) {
    func_0x000107c280b4();
    puVar3 = &DAT_11383d918;
  }
  else {
    puVar3 = (undefined *)((long)param_1 * 0x18 + 0x11383dbc0);
  }
  return puVar3;
}



/* Entry: 10b51fac4; end: 10b51fad7;  */

undefined1  [16] FUN_10b51fac4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &UNK_10e5ba218;
  auVar1._0_8_ = &PTR_DAT_110cfc1c8;
  return auVar1;
}



/* Entry: 10b51fad8; end: 10b51fb03;  */

long FUN_10b51fad8(long param_1)

{
  func_0x00010b521c20();
  FUN_10b52173c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51fb04; end: 10b51fb07;  */

long FUN_10b51fb04(long param_1)

{
  func_0x00010b521c20();
  FUN_10b52173c(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b51fb08; end: 10b51fb1b;  */

void FUN_10b51fb08(void)

{
  FUN_10b51fad8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b51fb1c; end: 10b51fb47;  */

undefined ** FUN_10b51fb1c(void)

{
  return &PTR_DAT_110cfc560;
}



/* Entry: 10b51fb48; end: 10b51feab;  */

long * FUN_10b51fb48(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  undefined1 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong uVar7;
  ulong extraout_x8_02;
  long extraout_x8_03;
  long *unaff_x19;
  long unaff_x20;
  int iVar8;
  int iVar9;
  
  func_0x00010b521bbc();
  plVar4 = param_1;
  if (*(char *)((long)param_1 + 0x3c) == '\x01') {
    func_0x00010b521ae8();
    plVar4 = (long *)0x8;
    func_0x000107c280a8(8,param_1);
    func_0x00010b521af4();
    param_4 = plVar4;
  }
  plVar5 = plVar4;
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    func_0x00010b521ae8();
    plVar5 = (long *)0x10;
    func_0x000107c280a8(0x10,plVar4);
    func_0x00010b521af4();
    param_4 = plVar5;
  }
  plVar4 = plVar5;
  if (*(char *)(unaff_x20 + 0x3e) == '\x01') {
    func_0x00010b521ae8();
    plVar4 = (long *)0x18;
    func_0x000107c280a8(0x18,plVar5);
    func_0x00010b521af4();
    param_4 = plVar4;
  }
  uVar3 = *(char *)(unaff_x20 + 0x3f) == '\x01';
  plVar5 = plVar4;
  if ((bool)uVar3) {
    func_0x00010b521ae8();
    plVar5 = (long *)0x20;
    func_0x000107c280a8(0x20,plVar4);
    func_0x00010b521af4();
    param_4 = plVar5;
  }
  func_0x00010b521e88();
  if ((bool)uVar3) {
    func_0x00010b521ae8();
    func_0x00010b521d70();
    func_0x00010b521af4();
    param_4 = plVar5;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x20);
  if (uVar1 != 0) {
    func_0x00010b521ae8();
    param_4 = (long *)((long)plVar5 + 2);
    *(undefined1 *)plVar5 = 0x32;
    while (0x7f < uVar1) {
      func_0x00010b521b38();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b521ae8();
      func_0x00010b521e08();
      uVar7 = extraout_x8;
      while( true ) {
        bVar2 = 0x7f < uVar7;
        uVar3 = uVar7 == 0x80;
        if (!bVar2) break;
        func_0x00010b521b24();
        uVar7 = extraout_x8_00;
      }
      func_0x00010b521bcc();
    } while (!bVar2);
  }
  func_0x00010b521e68();
  if ((bool)uVar3) {
    func_0x00010b521ae8();
    func_0x00010b521d80();
    func_0x00010b521af4();
    param_4 = plVar5;
  }
  func_0x00010b521e5c();
  plVar4 = plVar5;
  if ((bool)uVar3) {
    func_0x00010b521ae8();
    plVar4 = (long *)0x40;
    func_0x000107c280a8(0x40,plVar5);
    func_0x00010b521af4();
    param_4 = plVar4;
  }
  func_0x00010b521e50();
  plVar5 = plVar4;
  if ((bool)uVar3) {
    func_0x00010b521ae8();
    plVar5 = (long *)0x48;
    func_0x000107c280a8(0x48,plVar4);
    func_0x00010b521af4();
    param_4 = plVar5;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x38);
  if (0 < (int)uVar1) {
    func_0x00010b521ae8();
    param_4 = (long *)((long)plVar5 + 2);
    *(undefined1 *)plVar5 = 0x52;
    while (0x7f < uVar1) {
      func_0x00010b521b38();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b521ae8();
      func_0x00010b521e08();
      uVar7 = extraout_x8_01;
      while (bVar2 = 0x7f < uVar7, bVar2) {
        func_0x00010b521b24();
        uVar7 = extraout_x8_02;
      }
      func_0x00010b521bcc();
    } while (!bVar2);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b521c28();
    func_0x000109320b88();
    param_4 = plVar5;
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b521c28();
    func_0x0001089f5440();
    param_4 = plVar5;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521d0c();
    if ((long)param_3 < 0) {
      lVar6 = *(long *)(extraout_x8_03 + 8);
      param_3 = *(ulong *)(extraout_x8_03 + 0x10);
    }
    else {
      lVar6 = extraout_x8_03 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar9 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar8 = (int)param_3;
        uVar1 = iVar8 - iVar9;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar8 < iVar9) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar8);
    }
    _memcpy(param_4,lVar6,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b51feac; end: 10b51feaf;  */

void FUN_10b51feac(void)

{
  bool bVar1;
  ulong *puVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b521c54();
  func_0x000107c282d0();
  puVar2 = (ulong *)(unaff_x19 + 0x28);
  func_0x000107c282d0();
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3d) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3e) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3e) = 1;
  }
  bVar1 = *(char *)(unaff_x20 + 0x3f) == '\x01';
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x3f) = 1;
  }
  func_0x00010b521e88();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x40) = extraout_w8;
  }
  func_0x00010b521e68();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x41) = extraout_w8_00;
  }
  func_0x00010b521e5c();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x42) = extraout_w8_01;
  }
  func_0x00010b521e50();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x43) = extraout_w8_02;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar2 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b51feb0; end: 10b51ff73;  */

void FUN_10b51feb0(void)

{
  bool bVar1;
  ulong *puVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b521c54();
  func_0x000107c282d0();
  puVar2 = (ulong *)(unaff_x19 + 0x28);
  func_0x000107c282d0();
  if (*(char *)(unaff_x20 + 0x3c) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3c) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3d) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3d) = 1;
  }
  if (*(char *)(unaff_x20 + 0x3e) == '\x01') {
    *(undefined1 *)(unaff_x19 + 0x3e) = 1;
  }
  bVar1 = *(char *)(unaff_x20 + 0x3f) == '\x01';
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x3f) = 1;
  }
  func_0x00010b521e88();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x40) = extraout_w8;
  }
  func_0x00010b521e68();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x41) = extraout_w8_00;
  }
  func_0x00010b521e5c();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x42) = extraout_w8_01;
  }
  func_0x00010b521e50();
  if (bVar1) {
    *(undefined1 *)(unaff_x19 + 0x43) = extraout_w8_02;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar2 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b51ff74; end: 10b51ffaf;  */

void FUN_10b51ff74(long param_1,long param_2)

{
  if (*(int *)(param_2 + 0x10) != 0) {
    *(int *)(param_1 + 0x10) = *(int *)(param_2 + 0x10);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    *(int *)(param_1 + 0x14) = *(int *)(param_2 + 0x14);
  }
  if ((*(ulong *)(param_2 + 8) & 1) != 0) {
    if ((*(ulong *)(param_1 + 8) & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b51ffb0; end: 10b51ffd3;  */

undefined8 FUN_10b51ffb0(undefined8 param_1)

{
  func_0x00010b521c20();
  return param_1;
}



/* Entry: 10b51ffd4; end: 10b52001f;  */

undefined8 * FUN_10b51ffd4(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  *param_1 = &PTR_FUN_110cfc340;
  param_1[1] = param_2;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  FUN_10b51ff74(param_1,param_3);
  return param_1;
}



/* Entry: 10b520020; end: 10b520023;  */

undefined8 FUN_10b520020(undefined8 param_1)

{
  func_0x00010b521c20();
  return param_1;
}



/* Entry: 10b520024; end: 10b520037;  */

void FUN_10b520024(void)

{
  FUN_10b51ffb0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b520038; end: 10b520057;  */

undefined ** FUN_10b520038(void)

{
  return &PTR_DAT_110cfc5b8;
}



/* Entry: 10b520058; end: 10b5200df;  */

long * FUN_10b520058(long param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b521bbc();
  lVar2 = param_1;
  if (*(int *)(param_1 + 0x10) != 0) {
    func_0x00010b521ae8();
    lVar2 = 0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x00010b521d18();
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b521ae8();
    func_0x000107c280a8(0x15,lVar2);
    func_0x00010b521d18();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521d0c();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5200e0; end: 10b52012b;  */

long FUN_10b5200e0(long param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  
  lVar1 = 0;
  if (*(int *)(param_1 + 0x10) != 0) {
    lVar1 = 5;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    lVar1 = lVar1 + 5;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    uVar3 = *(ulong *)(param_1 + 8) & 0xfffffffffffffffe;
    lVar2 = (long)*(char *)(uVar3 + 0x1f);
    if (lVar2 < 0) {
      lVar2 = *(long *)(uVar3 + 0x10);
    }
    lVar1 = lVar2 + lVar1;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b52012c; end: 10b520157;  */

long FUN_10b52012c(long param_1)

{
  func_0x00010b521c20();
  func_0x00010b521764(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b520158; end: 10b52015b;  */

long FUN_10b520158(long param_1)

{
  func_0x00010b521c20();
  func_0x00010b521764(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b52015c; end: 10b52016f;  */

void FUN_10b52015c(void)

{
  FUN_10b52012c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b520170; end: 10b52017b;  */

undefined ** FUN_10b520170(void)

{
  return &PTR_DAT_110cfc618;
}



/* Entry: 10b52017c; end: 10b5201bf;  */

void FUN_10b52017c(long param_1)

{
  ulong *puVar1;
  
  FUN_10b203ae0(param_1 + 0x10);
  FUN_10b203ae0(param_1 + 0x28);
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b5201c0; end: 10b5202db;  */

long * FUN_10b5201c0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar6;
  int iVar7;
  
  func_0x00010b521bbc();
  lVar5 = param_1[3];
  for (iVar6 = 0; (int)lVar5 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b521d24();
    param_1 = (long *)0x1;
    func_0x00010b521bf4();
    param_4 = param_1;
  }
  iVar7 = *(int *)(unaff_x20 + 0x30);
  for (iVar6 = 0; iVar7 != iVar6; iVar6 = iVar6 + 1) {
    func_0x00010b521d24();
    param_1 = (long *)0x2;
    func_0x00010b521bf4();
    param_4 = param_1;
  }
  plVar2 = param_1;
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    func_0x00010b521ae8();
    plVar2 = (long *)0x1d;
    func_0x000107c280a8(0x1d,param_1);
    func_0x00010b521d18();
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b521ae8();
    plVar3 = (long *)0x25;
    func_0x000107c280a8(0x25,plVar2);
    func_0x00010b521d18();
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b521ae8();
    param_4 = (long *)(ulong)*(uint *)(unaff_x20 + 0x48);
    uVar4 = 0x28;
    func_0x000107c280a8(0x28,plVar3);
    func_0x000107c280b8(param_4,uVar4);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521d0c();
    if ((long)param_3 < 0) {
      lVar5 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar5 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar7 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar6 = (int)param_3;
        uVar1 = iVar6 - iVar7;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar6 < iVar7) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar6);
    }
    _memcpy(param_4,lVar5,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5202dc; end: 10b52038f;  */

/* WARNING: Removing unreachable block (ram,0x00010b520318) */

void FUN_10b5202dc(long param_1)

{
  long extraout_x8;
  long lVar1;
  long extraout_x9;
  int unaff_w20;
  undefined8 *unaff_x21;
  long unaff_x22;
  
  func_0x00010b521bdc();
  while (unaff_x22 != 0) {
    FUN_10b520390(*unaff_x21);
    func_0x00010b521e14();
    unaff_x21 = unaff_x21 + 1;
  }
  func_0x00010b521cac();
  if (*(int *)(param_1 + 0x40) != 0) {
    unaff_w20 = unaff_w20 + 5;
  }
  if (*(int *)(param_1 + 0x44) != 0) {
    unaff_w20 = unaff_w20 + 5;
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    unaff_w20 = unaff_w20 + ((int)LZCOUNT((long)*(int *)(param_1 + 0x48)) * -9 + 0x280U >> 6) + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b521d64();
    lVar1 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar1 = *(long *)(extraout_x9 + 0x10);
    }
    unaff_w20 = (int)lVar1 + unaff_w20;
  }
  *(int *)(param_1 + 0x4c) = unaff_w20;
  return;
}



/* Entry: 10b520390; end: 10b5203ab;  */

long FUN_10b520390(long param_1)

{
  long extraout_x8;
  
  FUN_10b5200e0();
  func_0x00010b521b0c();
  return param_1 + extraout_x8;
}



/* Entry: 10b5203ac; end: 10b5203af;  */

void FUN_10b5203ac(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b521c54();
  FUN_10b2035cc();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_10b2035cc();
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5203b0; end: 10b520417;  */

void FUN_10b5203b0(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b521c54();
  FUN_10b2035cc();
  puVar1 = (ulong *)(unaff_x19 + 0x28);
  FUN_10b2035cc();
  if (*(int *)(unaff_x20 + 0x40) != 0) {
    *(int *)(unaff_x19 + 0x40) = *(int *)(unaff_x20 + 0x40);
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x19 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x19 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b520418; end: 10b5204bb;  */

undefined8 * FUN_10b520418(undefined8 *param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  param_1[1] = param_2;
  *param_1 = &PTR_FUN_110cfc430;
  if ((*(ulong *)(param_3 + 8) & 1) != 0) {
    func_0x00010b521c34();
  }
  uVar1 = *(uint *)(param_3 + 0x10);
  *(uint *)(param_1 + 2) = uVar1;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2;
    FUN_10b521970(param_2,*(undefined8 *)(param_3 + 0x18));
  }
  param_1[3] = uVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    param_2 = 0;
  }
  else {
    FUN_10b521a0c(param_2,*(undefined8 *)(param_3 + 0x20));
  }
  param_1[4] = param_2;
  uVar3 = *(undefined8 *)(param_3 + 0x30);
  uVar2 = *(undefined8 *)(param_3 + 0x28);
  uVar5 = *(undefined8 *)(param_3 + 0x40);
  uVar4 = *(undefined8 *)(param_3 + 0x38);
  uVar7 = *(undefined8 *)(param_3 + 0x50);
  uVar6 = *(undefined8 *)(param_3 + 0x48);
  *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_3 + 0x58);
  param_1[10] = uVar7;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10b5204bc; end: 10b5204e7;  */

undefined8 FUN_10b5204bc(undefined8 param_1)

{
  func_0x00010b521c20();
  FUN_10b5204e8(param_1);
  return param_1;
}



/* Entry: 10b5204e8; end: 10b52051f;  */

void FUN_10b5204e8(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_10b51fad8();
  }
  __ZdlPv();
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10b52012c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b520520; end: 10b520523;  */

undefined8 FUN_10b520520(undefined8 param_1)

{
  func_0x00010b521c20();
  FUN_10b5204e8(param_1);
  return param_1;
}



/* Entry: 10b520524; end: 10b520537;  */

void FUN_10b520524(void)

{
  FUN_10b5204bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b520538; end: 10b520543;  */

undefined ** FUN_10b520538(void)

{
  return &PTR_DAT_110cfc670;
}



/* Entry: 10b520544; end: 10b5205a7;  */

void FUN_10b520544(long param_1)

{
  uint uVar1;
  ulong *puVar2;
  
  uVar1 = *(uint *)(param_1 + 0x10);
  if ((uVar1 & 3) != 0) {
    if ((uVar1 & 1) != 0) {
      func_0x00010b51fb28(*(undefined8 *)(param_1 + 0x18));
    }
    if ((uVar1 >> 1 & 1) != 0) {
      FUN_10b52017c(*(undefined8 *)(param_1 + 0x20));
    }
  }
  puVar2 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar2 & 1) == 0) {
    return;
  }
  if ((*puVar2 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar2 = (ulong *)((*puVar2 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar2 + 0x17)) {
    *(byte *)puVar2 = 0;
    *(byte *)((long)puVar2 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar2 = 0;
  puVar2[1] = 0;
  return;
}



/* Entry: 10b5205a8; end: 10b5209db;  */

long * FUN_10b5205a8(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  undefined1 in_ZR;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b521bbc();
  plVar2 = param_1;
  if ((int)param_1[5] != 0) {
    func_0x00010b521ae8();
    plVar2 = (long *)0xd;
    func_0x000107c280a8(0xd,param_1);
    func_0x00010b521d18();
  }
  plVar3 = plVar2;
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    func_0x00010b521ae8();
    plVar3 = (long *)0x15;
    func_0x000107c280a8(0x15,plVar2);
    func_0x00010b521d18();
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    func_0x00010b521c28();
    func_0x000107c282ac();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    func_0x00010b521c28();
    func_0x0001088bdd44();
    param_4 = plVar3;
  }
  func_0x00010b521e88();
  if ((bool)in_ZR) {
    func_0x00010b521ae8();
    func_0x00010b521d70();
    func_0x00010b521af4();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    func_0x00010b521c28();
    func_0x0001089f53c8();
    param_4 = plVar3;
  }
  func_0x00010b521e68();
  if ((bool)in_ZR) {
    func_0x00010b521ae8();
    func_0x00010b521d80();
    func_0x00010b521af4();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    func_0x00010b521c28();
    func_0x000108b32050();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    func_0x00010b521c28();
    func_0x000108b3207c();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    func_0x00010b521c28();
    func_0x0001089f53f0();
    param_4 = plVar3;
  }
  func_0x00010b521e5c();
  plVar2 = plVar3;
  if ((bool)in_ZR) {
    func_0x00010b521ae8();
    plVar2 = (long *)0x58;
    func_0x000107c280a8(0x58,plVar3);
    func_0x00010b521af4();
    param_4 = plVar2;
  }
  func_0x00010b521e50();
  plVar3 = plVar2;
  if ((bool)in_ZR) {
    func_0x00010b521ae8();
    plVar3 = (long *)0x60;
    func_0x000107c280a8(0x60,plVar2);
    func_0x00010b521af4();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    func_0x00010b521c28();
    func_0x000109320b88();
    param_4 = plVar3;
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    func_0x00010b521c28();
    func_0x0001089f5440();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(char *)(unaff_x20 + 0x54) == '\x01') {
    func_0x00010b521ae8();
    plVar2 = (long *)0x78;
    func_0x000107c280a8(0x78,plVar3);
    func_0x00010b521af4();
    param_4 = plVar2;
  }
  plVar3 = plVar2;
  if (*(char *)(unaff_x20 + 0x55) == '\x01') {
    func_0x00010b521ae8();
    plVar3 = (long *)0x80;
    func_0x000107c280a8(0x80,plVar2);
    func_0x00010b521af4();
    param_4 = plVar3;
  }
  plVar2 = plVar3;
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    func_0x00010b521ae8();
    plVar2 = (long *)0x8d;
    func_0x000107c280a8(0x8d,plVar3);
    func_0x00010b521d18();
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x18) + 0x4c);
    plVar2 = (long *)0x12;
    func_0x00010b521bf4();
    param_4 = plVar2;
  }
  if (*(char *)(unaff_x20 + 0x56) == '\x01') {
    func_0x00010b521ae8();
    param_4 = (long *)0x98;
    func_0x000107c280a8(0x98,plVar2);
    func_0x00010b521af4();
  }
  if ((uVar1 >> 1 & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x20) + 0x4c);
    param_4 = (long *)0x14;
    func_0x00010b521bf4();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521d0c();
    if ((long)param_3 < 0) {
      lVar4 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar4 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar4,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b5209dc; end: 10b5209df;  */

void FUN_10b5209dc(ulong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 3) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b521970();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b51feb0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b521a0c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5203b0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x00010b521e88();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x40) = extraout_w8;
  }
  func_0x00010b521e68();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x41) = extraout_w8_00;
  }
  func_0x00010b521e5c();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x42) = extraout_w8_01;
  }
  func_0x00010b521e50();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x43) = extraout_w8_02;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(char *)(unaff_x20 + 0x54) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x54) = 1;
  }
  if (*(char *)(unaff_x20 + 0x55) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x55) = 1;
  }
  if (*(char *)(unaff_x20 + 0x56) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x56) = 1;
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b521de8();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b5209e0; end: 10b520b67;  */

void FUN_10b5209e0(ulong *param_1)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x10);
  uVar2 = (uVar1 & 3) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x18);
      if (param_1 == (ulong *)0x0) {
        param_1 = unaff_x22;
        FUN_10b521970();
        *(ulong **)(unaff_x21 + 0x18) = param_1;
      }
      else {
        FUN_10b51feb0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      param_1 = *(ulong **)(unaff_x21 + 0x20);
      if (param_1 == (ulong *)0x0) {
        FUN_10b521a0c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        param_1 = unaff_x22;
      }
      else {
        FUN_10b5203b0();
      }
    }
  }
  if (*(int *)(unaff_x20 + 0x28) != 0) {
    *(int *)(unaff_x21 + 0x28) = *(int *)(unaff_x20 + 0x28);
  }
  if (*(int *)(unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)(unaff_x20 + 0x2c);
  }
  if (*(int *)(unaff_x20 + 0x30) != 0) {
    *(int *)(unaff_x21 + 0x30) = *(int *)(unaff_x20 + 0x30);
  }
  if (*(int *)(unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)(unaff_x20 + 0x34);
  }
  if (*(int *)(unaff_x20 + 0x38) != 0) {
    *(int *)(unaff_x21 + 0x38) = *(int *)(unaff_x20 + 0x38);
  }
  if (*(int *)(unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)(unaff_x20 + 0x3c);
  }
  func_0x00010b521e88();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x40) = extraout_w8;
  }
  func_0x00010b521e68();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x41) = extraout_w8_00;
  }
  func_0x00010b521e5c();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x42) = extraout_w8_01;
  }
  func_0x00010b521e50();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x43) = extraout_w8_02;
  }
  if (*(int *)(unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)(unaff_x20 + 0x44);
  }
  if (*(int *)(unaff_x20 + 0x48) != 0) {
    *(int *)(unaff_x21 + 0x48) = *(int *)(unaff_x20 + 0x48);
  }
  if (*(int *)(unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)(unaff_x20 + 0x4c);
  }
  if (*(int *)(unaff_x20 + 0x50) != 0) {
    *(int *)(unaff_x21 + 0x50) = *(int *)(unaff_x20 + 0x50);
  }
  if (*(char *)(unaff_x20 + 0x54) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x54) = 1;
  }
  if (*(char *)(unaff_x20 + 0x55) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x55) = 1;
  }
  if (*(char *)(unaff_x20 + 0x56) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x56) = 1;
  }
  if (*(int *)(unaff_x20 + 0x58) != 0) {
    *(int *)(unaff_x21 + 0x58) = *(int *)(unaff_x20 + 0x58);
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b521de8();
  if ((*param_1 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b520b68; end: 10b520b9b;  */

void FUN_10b520b68(long param_1,long param_2)

{
  uint uVar1;
  undefined1 uVar2;
  ulong *puVar3;
  undefined1 extraout_w8;
  undefined1 extraout_w8_00;
  undefined1 extraout_w8_01;
  undefined1 extraout_w8_02;
  ulong extraout_x8;
  ulong *unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b521cd0();
  FUN_10b520544();
  puVar3 = unaff_x20;
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  uVar1 = (uint)unaff_x20[2];
  uVar2 = (uVar1 & 3) == 0;
  if (!(bool)uVar2) {
    if ((uVar1 & 1) != 0) {
      puVar3 = *(ulong **)(unaff_x21 + 0x18);
      if (puVar3 == (ulong *)0x0) {
        puVar3 = unaff_x22;
        FUN_10b521970();
        *(ulong **)(unaff_x21 + 0x18) = puVar3;
      }
      else {
        FUN_10b51feb0();
      }
    }
    if ((uVar1 >> 1 & 1) != 0) {
      puVar3 = *(ulong **)(unaff_x21 + 0x20);
      if (puVar3 == (ulong *)0x0) {
        FUN_10b521a0c();
        *(ulong **)(unaff_x21 + 0x20) = unaff_x22;
        puVar3 = unaff_x22;
      }
      else {
        FUN_10b5203b0();
      }
    }
  }
  if ((int)unaff_x20[5] != 0) {
    *(int *)(unaff_x21 + 0x28) = (int)unaff_x20[5];
  }
  if (*(int *)((long)unaff_x20 + 0x2c) != 0) {
    *(int *)(unaff_x21 + 0x2c) = *(int *)((long)unaff_x20 + 0x2c);
  }
  if ((int)unaff_x20[6] != 0) {
    *(int *)(unaff_x21 + 0x30) = (int)unaff_x20[6];
  }
  if (*(int *)((long)unaff_x20 + 0x34) != 0) {
    *(int *)(unaff_x21 + 0x34) = *(int *)((long)unaff_x20 + 0x34);
  }
  if ((int)unaff_x20[7] != 0) {
    *(int *)(unaff_x21 + 0x38) = (int)unaff_x20[7];
  }
  if (*(int *)((long)unaff_x20 + 0x3c) != 0) {
    *(int *)(unaff_x21 + 0x3c) = *(int *)((long)unaff_x20 + 0x3c);
  }
  func_0x00010b521e88();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x40) = extraout_w8;
  }
  func_0x00010b521e68();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x41) = extraout_w8_00;
  }
  func_0x00010b521e5c();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x42) = extraout_w8_01;
  }
  func_0x00010b521e50();
  if ((bool)uVar2) {
    *(undefined1 *)(unaff_x21 + 0x43) = extraout_w8_02;
  }
  if (*(int *)((long)unaff_x20 + 0x44) != 0) {
    *(int *)(unaff_x21 + 0x44) = *(int *)((long)unaff_x20 + 0x44);
  }
  if ((int)unaff_x20[9] != 0) {
    *(int *)(unaff_x21 + 0x48) = (int)unaff_x20[9];
  }
  if (*(int *)((long)unaff_x20 + 0x4c) != 0) {
    *(int *)(unaff_x21 + 0x4c) = *(int *)((long)unaff_x20 + 0x4c);
  }
  if ((int)unaff_x20[10] != 0) {
    *(int *)(unaff_x21 + 0x50) = (int)unaff_x20[10];
  }
  if (*(char *)((long)unaff_x20 + 0x54) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x54) = 1;
  }
  if (*(char *)((long)unaff_x20 + 0x55) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x55) = 1;
  }
  if (*(char *)((long)unaff_x20 + 0x56) == '\x01') {
    *(undefined1 *)(unaff_x21 + 0x56) = 1;
  }
  if ((int)unaff_x20[0xb] != 0) {
    *(int *)(unaff_x21 + 0x58) = (int)unaff_x20[0xb];
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) == 0) {
    return;
  }
  func_0x00010b521de8();
  if ((*puVar3 & 1) == 0) {
    FUN_10b4c3590();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
  return;
}



/* Entry: 10b520b9c; end: 10b520bab;  */

undefined1  [16] FUN_10b520b9c(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auVar4 [16];
  
  func_0x00010b521dbc();
  puVar1 = param_1 + 0x44;
  puVar3 = param_2;
  for (; param_1 != puVar1; param_1 = param_1 + 1) {
    uVar2 = *param_1;
    *param_1 = *puVar3;
    *puVar3 = uVar2;
    param_2 = param_2 + 1;
    puVar3 = puVar3 + 1;
  }
  auVar4._8_8_ = param_2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Entry: 10b520bac; end: 10b520bf7;  */

long FUN_10b520bac(long param_1)

{
  func_0x00010b521c20();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5204bc();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x48);
  func_0x000107c282dc(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b520bf8; end: 10b520bfb;  */

long FUN_10b520bf8(long param_1)

{
  func_0x00010b521c20();
  if (*(long *)(param_1 + 0x60) != 0) {
    FUN_10b5204bc();
  }
  __ZdlPv();
  func_0x000107c282dc(param_1 + 0x48);
  func_0x000107c282dc(param_1 + 0x30);
  func_0x000107c282dc(param_1 + 0x18);
  return param_1;
}



/* Entry: 10b520bfc; end: 10b520c0f;  */

void FUN_10b520bfc(void)

{
  FUN_10b520bac();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b520c10; end: 10b520c1b;  */

undefined ** FUN_10b520c10(void)

{
  return &PTR_DAT_110cfc6b8;
}



/* Entry: 10b520c1c; end: 10b520c67;  */

void FUN_10b520c1c(long param_1)

{
  ulong *puVar1;
  
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b520544(*(undefined8 *)(param_1 + 0x60));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b520c68; end: 10b520f27;  */

long * FUN_10b520c68(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong extraout_x8;
  ulong extraout_x8_00;
  ulong extraout_x8_01;
  ulong extraout_x8_02;
  ulong extraout_x8_03;
  ulong uVar4;
  ulong extraout_x8_04;
  long extraout_x8_05;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  int iVar6;
  
  func_0x00010b521bbc();
  uVar1 = *(uint *)(param_1 + 5);
  if (uVar1 != 0) {
    func_0x00010b521ae8();
    param_4 = (long *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 10;
    while (0x7f < uVar1) {
      func_0x00010b521b38();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b521ae8();
      func_0x00010b521e08();
      uVar4 = extraout_x8;
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b521b24();
        uVar4 = extraout_x8_00;
      }
      func_0x00010b521bcc();
    } while (!bVar2);
  }
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    param_3 = (ulong)*(uint *)(*(long *)(unaff_x20 + 0x60) + 0x14);
    param_1 = (long *)0x2;
    func_0x00010b521bf4();
    param_4 = param_1;
  }
  uVar1 = *(uint *)(unaff_x20 + 0x40);
  if (uVar1 != 0) {
    func_0x00010b521ae8();
    param_4 = (long *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x1a;
    while (0x7f < uVar1) {
      func_0x00010b521b38();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b521ae8();
      func_0x00010b521e08();
      uVar4 = extraout_x8_01;
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b521b24();
        uVar4 = extraout_x8_02;
      }
      func_0x00010b521bcc();
    } while (!bVar2);
  }
  uVar1 = *(uint *)(unaff_x20 + 0x58);
  if (0 < (int)uVar1) {
    func_0x00010b521ae8();
    param_4 = (long *)((long)param_1 + 2);
    *(undefined1 *)param_1 = 0x22;
    while (0x7f < uVar1) {
      func_0x00010b521b38();
    }
    *(char *)((long)param_4 + -1) = (char)uVar1;
    do {
      func_0x00010b521ae8();
      func_0x00010b521e08();
      uVar4 = extraout_x8_03;
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b521b24();
        uVar4 = extraout_x8_04;
      }
      func_0x00010b521bcc();
    } while (!bVar2);
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521d0c();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_05 + 8);
      param_3 = *(ulong *)(extraout_x8_05 + 0x10);
    }
    else {
      lVar3 = extraout_x8_05 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b520f28; end: 10b520f43;  */

long FUN_10b520f28(long param_1)

{
  long extraout_x8;
  
  func_0x00010b520814();
  func_0x00010b521b0c();
  return param_1 + extraout_x8;
}



/* Entry: 10b520f44; end: 10b520fcf;  */

void FUN_10b520f44(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  func_0x000107c282d0(unaff_x21 + 0x18,unaff_x20 + 0x18);
  func_0x000107c282d0(unaff_x21 + 0x30,unaff_x20 + 0x30);
  puVar1 = (ulong *)(unaff_x21 + 0x48);
  func_0x000107c282d0();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x60);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b521aa8();
      *(ulong **)(unaff_x21 + 0x60) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b5209e0();
    }
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b521de8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b520fd0; end: 10b520ff7;  */

void FUN_10b520fd0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = &PTR_FUN_110cfc4d0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = param_2;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = param_2;
  *(undefined4 *)(param_1 + 0xb) = 0;
  return;
}



/* Entry: 10b520ff8; end: 10b521023;  */

long FUN_10b520ff8(long param_1)

{
  func_0x00010b521c20();
  FUN_10b5217bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b521024; end: 10b521027;  */

long FUN_10b521024(long param_1)

{
  func_0x00010b521c20();
  FUN_10b5217bc(param_1 + 0x10);
  return param_1;
}



/* Entry: 10b521028; end: 10b52103b;  */

void FUN_10b521028(void)

{
  FUN_10b520ff8();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b52103c; end: 10b521047;  */

undefined ** FUN_10b52103c(void)

{
  return &PTR_DAT_110cfc710;
}



/* Entry: 10b521048; end: 10b52108b;  */

void FUN_10b521048(long param_1)

{
  ulong *puVar1;
  
  FUN_10b52195c(param_1 + 0x10);
  FUN_10b52195c(param_1 + 0x28);
  func_0x000107c282c0(param_1 + 0x40);
  puVar1 = (ulong *)(param_1 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b52108c; end: 10b5211cf;  */

long * FUN_10b52108c(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long extraout_x8;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  
  iVar11 = *(int *)(param_1 + 0x18);
  plVar9 = param_3;
  plVar5 = param_2;
  for (iVar7 = 0; iVar11 != iVar7; iVar7 = iVar7 + 1) {
    func_0x00010b521b4c();
    plVar5 = (long *)0x1;
    func_0x00010b521bb0();
  }
  uVar8 = 0;
  uVar2 = *(uint *)(param_1 + 0x30);
  plVar10 = (long *)(ulong)uVar2;
  while( true ) {
    cVar3 = SBORROW4(uVar2,uVar8);
    cVar4 = (int)(uVar2 - uVar8) < 0;
    if (uVar2 == uVar8) break;
    func_0x00010b521b4c();
    plVar5 = (long *)0x2;
    func_0x00010b521bb0();
    uVar8 = uVar8 + 1;
  }
  uVar13 = (ulong)(*(uint *)(param_1 + 0x48) &
                  ((int)*(uint *)(param_1 + 0x48) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar13 == 0) {
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        return plVar5;
      }
      func_0x00010b521d0c();
      if ((long)plVar9 < 0) {
        lVar12 = *(long *)(extraout_x8 + 8);
        plVar9 = *(long **)(extraout_x8 + 0x10);
      }
      else {
        lVar12 = extraout_x8 + 8;
      }
      if ((long)(int)plVar9 <= *param_3 - (long)plVar5) {
        _memcpy(plVar5,lVar12,(ulong)plVar9 & 0xffffffff);
        return (long *)((long)plVar5 + (long)(int)plVar9);
      }
      while( true ) {
        iVar11 = ((int)*param_3 - (int)plVar5) + 0x10;
        iVar7 = (int)plVar9;
        plVar9 = (long *)(ulong)(uint)(iVar7 - iVar11);
        if (iVar7 - iVar11 == 0 || iVar7 < iVar11) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)plVar5 + (long)iVar11);
        plVar5 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar5 + (long)iVar7);
    }
    func_0x00010b521d44();
    plVar6 = plVar10;
    if ((long)param_2 < 0) {
      param_2 = (long *)plVar10[1];
      plVar6 = (long *)*plVar10;
    }
    func_0x00010b521e20();
    lVar12 = (long)*(char *)((long)plVar10 + 0x17);
    if (lVar12 < 0) {
      lVar12 = plVar10[1];
      cVar3 = SBORROW8(lVar12,0x7f);
      cVar4 = lVar12 + -0x7f < 0;
      if (lVar12 < 0x80) goto LAB_10b521158;
LAB_10b52118c:
      func_0x00010b521cf8();
    }
    else {
LAB_10b521158:
      func_0x00010b521e3c();
      if (cVar4 != cVar3) goto LAB_10b52118c;
      *(undefined1 *)plVar5 = 0x1a;
      *(char *)((long)plVar5 + 1) = (char)lVar12;
      if (*(char *)((long)plVar10 + 0x17) < '\0') {
        plVar10 = (long *)*plVar10;
      }
      func_0x00010b521cdc();
      plVar6 = (long *)((long)plVar5 + lVar12);
    }
    uVar13 = uVar13 - 1;
    plVar5 = plVar6;
  } while( true );
}



/* Entry: 10b5211d0; end: 10b52126f;  */

/* WARNING: Removing unreachable block (ram,0x00010b52120c) */

long FUN_10b5211d0(long param_1)

{
  uint uVar1;
  long extraout_x8;
  long lVar2;
  long extraout_x9;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  ulong uVar4;
  
  lVar2 = param_1;
  func_0x00010b521bdc();
  while (unaff_x22 != 0) {
    func_0x00010b521e34();
    func_0x00010b521e14();
  }
  func_0x00010b521cac();
  uVar1 = *(uint *)(param_1 + 0x48);
  lVar3 = unaff_x20 + (ulong)uVar1;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    func_0x00010b521c04();
    lVar3 = lVar2 + lVar3;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b521d64();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x58) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b521270; end: 10b52128b;  */

long FUN_10b521270(long param_1)

{
  long extraout_x8;
  
  func_0x00010b520dd8();
  func_0x00010b521b0c();
  return param_1 + extraout_x8;
}



/* Entry: 10b52128c; end: 10b52128f;  */

void FUN_10b52128c(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b521c54();
  FUN_10b5212d8();
  FUN_10b5212d8(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b521290; end: 10b5212d7;  */

void FUN_10b521290(void)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  func_0x00010b521c54();
  FUN_10b5212d8();
  FUN_10b5212d8(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b5212d8; end: 10b5212e7;  */

void FUN_10b5212d8(long *param_1,long param_2)

{
  int iVar1;
  long *plVar2;
  long *unaff_x19;
  int unaff_w20;
  long *plVar3;
  long lVar4;
  long *plVar5;
  long *unaff_x25;
  long unaff_x26;
  
  if (*(int *)(param_2 + 8) == 0) {
    return;
  }
  func_0x000100361ce4();
  plVar2 = param_1;
  func_0x00010064e8bc();
  plVar3 = (long *)*unaff_x25;
  func_0x000100361e44();
  plVar5 = unaff_x25;
  if (0 < (int)plVar2) {
    func_0x000107c39cb4();
    param_1 = param_1 + (int)plVar2;
    plVar5 = unaff_x25 + (int)plVar2;
  }
  lVar4 = unaff_x19[2];
  for (; iVar1 = (int)plVar2, plVar5 < unaff_x25 + unaff_x26; plVar5 = plVar5 + 1) {
    plVar2 = plVar3;
    (**(code **)(*plVar3 + 0x10))(plVar3,lVar4);
    *param_1 = (long)plVar2;
    func_0x00010064e8d4();
    param_1 = param_1 + 1;
  }
  func_0x000100361e74();
  if (iVar1 < unaff_w20) {
    *(int *)(*unaff_x19 + -1) = unaff_w20;
  }
  return;
}



/* Entry: 10b5212e8; end: 10b521367;  */

void FUN_10b5212e8(long param_1,long param_2)

{
  ulong *puVar1;
  long unaff_x19;
  long unaff_x20;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b521cd0();
  FUN_10b521048();
  func_0x00010b521c54();
  FUN_10b5212d8();
  FUN_10b5212d8(unaff_x19 + 0x28,unaff_x20 + 0x28);
  puVar1 = (ulong *)(unaff_x19 + 0x40);
  func_0x00010598fce8();
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b521df8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b521368; end: 10b521393;  */

undefined8 FUN_10b521368(undefined8 param_1)

{
  func_0x00010b521c20();
  FUN_10b521394(param_1);
  return param_1;
}



/* Entry: 10b521394; end: 10b5213c3;  */

long FUN_10b521394(long param_1)

{
  if (*(long *)(param_1 + 0x48) != 0) {
    FUN_10b5204bc();
  }
  __ZdlPv();
  func_0x000107c282b4(param_1 + 0x30);
  FUN_10b52178c(param_1 + 0x18);
  return param_1 + 0x10;
}



/* Entry: 10b5213c4; end: 10b5213c7;  */

undefined8 FUN_10b5213c4(undefined8 param_1)

{
  func_0x00010b521c20();
  FUN_10b521394(param_1);
  return param_1;
}



/* Entry: 10b5213c8; end: 10b5213db;  */

void FUN_10b5213c8(void)

{
  FUN_10b521368();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b5213dc; end: 10b5213e7;  */

undefined ** FUN_10b5213dc(void)

{
  return &PTR_DAT_110cfc768;
}



/* Entry: 10b5213e8; end: 10b521437;  */

void FUN_10b5213e8(long param_1)

{
  ulong *puVar1;
  
  FUN_10b52195c(param_1 + 0x18);
  func_0x000107c282c0(param_1 + 0x30);
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    FUN_10b520544(*(undefined8 *)(param_1 + 0x48));
  }
  puVar1 = (ulong *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x10) = 0;
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b521438; end: 10b52156b;  */

long * FUN_10b521438(long param_1,long *param_2,long *param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  char cVar3;
  char cVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long extraout_x8;
  int iVar8;
  uint uVar9;
  long *plVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  
  plVar7 = param_3;
  plVar5 = param_2;
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    param_2 = *(long **)(param_1 + 0x48);
    plVar7 = (long *)(ulong)*(uint *)((long)param_2 + 0x14);
    plVar5 = (long *)0x1;
    func_0x00010b521bb0();
  }
  uVar9 = 0;
  uVar2 = *(uint *)(param_1 + 0x20);
  plVar10 = (long *)(ulong)uVar2;
  while( true ) {
    cVar3 = SBORROW4(uVar2,uVar9);
    cVar4 = (int)(uVar2 - uVar9) < 0;
    if (uVar2 == uVar9) break;
    func_0x00010b521b4c();
    plVar5 = (long *)0x2;
    func_0x00010b521bb0();
    uVar9 = uVar9 + 1;
  }
  uVar13 = (ulong)(*(uint *)(param_1 + 0x38) &
                  ((int)*(uint *)(param_1 + 0x38) >> 0x1f ^ 0xffffffffU));
  do {
    if (uVar13 == 0) {
      if ((*(ulong *)(param_1 + 8) & 1) == 0) {
        return plVar5;
      }
      func_0x00010b521d0c();
      if ((long)plVar7 < 0) {
        lVar12 = *(long *)(extraout_x8 + 8);
        plVar7 = *(long **)(extraout_x8 + 0x10);
      }
      else {
        lVar12 = extraout_x8 + 8;
      }
      if ((long)(int)plVar7 <= *param_3 - (long)plVar5) {
        _memcpy(plVar5,lVar12,(ulong)plVar7 & 0xffffffff);
        return (long *)((long)plVar5 + (long)(int)plVar7);
      }
      while( true ) {
        iVar11 = ((int)*param_3 - (int)plVar5) + 0x10;
        iVar8 = (int)plVar7;
        plVar7 = (long *)(ulong)(uint)(iVar8 - iVar11);
        if (iVar8 - iVar11 == 0 || iVar8 < iVar11) break;
        func_0x00010b4d5738();
        puVar1 = (undefined1 *)((long)plVar5 + (long)iVar11);
        plVar5 = param_3;
        func_0x000107c303e4(param_3,puVar1);
      }
      func_0x00010b4d5738();
      return (long *)((long)plVar5 + (long)iVar8);
    }
    func_0x00010b521d44();
    plVar6 = plVar10;
    if ((long)param_2 < 0) {
      param_2 = (long *)plVar10[1];
      plVar6 = (long *)*plVar10;
    }
    func_0x00010b521e20();
    lVar12 = (long)*(char *)((long)plVar10 + 0x17);
    if (lVar12 < 0) {
      lVar12 = plVar10[1];
      cVar3 = SBORROW8(lVar12,0x7f);
      cVar4 = lVar12 + -0x7f < 0;
      if (lVar12 < 0x80) goto LAB_10b5214f4;
LAB_10b521528:
      func_0x00010b521cf8();
    }
    else {
LAB_10b5214f4:
      func_0x00010b521e3c();
      if (cVar4 != cVar3) goto LAB_10b521528;
      *(undefined1 *)plVar5 = 0x1a;
      *(char *)((long)plVar5 + 1) = (char)lVar12;
      if (*(char *)((long)plVar10 + 0x17) < '\0') {
        plVar10 = (long *)*plVar10;
      }
      func_0x00010b521cdc();
      plVar6 = (long *)((long)plVar5 + lVar12);
    }
    uVar13 = uVar13 - 1;
    plVar5 = plVar6;
  } while( true );
}



/* Entry: 10b52156c; end: 10b52160f;  */

long FUN_10b52156c(long param_1)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x9;
  long unaff_x20;
  long lVar3;
  long unaff_x22;
  ulong uVar4;
  
  lVar2 = param_1;
  func_0x00010b521bdc();
  while (unaff_x22 != 0) {
    func_0x00010b521e34();
    func_0x00010b521e14();
  }
  uVar1 = *(uint *)(param_1 + 0x38);
  lVar3 = unaff_x20 + (ulong)uVar1;
  for (uVar4 = (ulong)(uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU)); uVar4 != 0; uVar4 = uVar4 - 1) {
    func_0x00010b521c04();
    lVar3 = lVar2 + lVar3;
  }
  if ((*(byte *)(param_1 + 0x10) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x48);
    FUN_10b520f28();
    lVar3 = lVar3 + lVar2 + 1;
  }
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    func_0x00010b521d64();
    lVar2 = extraout_x8;
    if (extraout_x8 < 0) {
      lVar2 = *(long *)(extraout_x9 + 0x10);
    }
    lVar3 = lVar2 + lVar3;
  }
  *(int *)(param_1 + 0x14) = (int)lVar3;
  return lVar3;
}



/* Entry: 10b521610; end: 10b521613;  */

void FUN_10b521610(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5212d8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b521aa8();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b5209e0();
    }
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b521de8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b521614; end: 10b521693;  */

void FUN_10b521614(void)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5212d8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b521aa8();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b5209e0();
    }
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b521de8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b521694; end: 10b521703;  */

void FUN_10b521694(long param_1,long param_2)

{
  ulong *puVar1;
  ulong extraout_x8;
  long unaff_x20;
  long unaff_x21;
  ulong *unaff_x22;
  
  if (param_2 == param_1) {
    return;
  }
  func_0x00010b521cd0();
  FUN_10b5213e8();
  func_0x00010b521c40();
  if (((ulong)unaff_x22 & 1) != 0) {
    unaff_x22 = *(ulong **)((ulong)unaff_x22 & 0xfffffffffffffffe);
  }
  FUN_10b5212d8(unaff_x21 + 0x18,unaff_x20 + 0x18);
  puVar1 = (ulong *)(unaff_x21 + 0x30);
  func_0x00010598fce8();
  if ((*(uint *)(unaff_x20 + 0x10) & 1) != 0) {
    puVar1 = *(ulong **)(unaff_x21 + 0x48);
    if (puVar1 == (ulong *)0x0) {
      FUN_10b521aa8();
      *(ulong **)(unaff_x21 + 0x48) = unaff_x22;
      puVar1 = unaff_x22;
    }
    else {
      FUN_10b5209e0();
    }
  }
  func_0x00010b521c68();
  if ((extraout_x8 & 1) != 0) {
    func_0x00010b521de8();
    if ((*puVar1 & 1) == 0) {
      FUN_10b4c3590();
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbcd4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ZNSt3__112basic_stringIcNS_11char_traitsIcEENS_9allocatorIcEEE6appendEPKcm_110346298)();
    return;
  }
  return;
}



/* Entry: 10b521704; end: 10b52173b;  */

void FUN_10b521704(undefined8 param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  
  if (param_2 == (undefined8 *)0x0) {
    puVar1 = (undefined8 *)0x20;
    __Znwm();
  }
  else {
    puVar1 = param_2;
    FUN_10b4d80e0(param_2,0x20);
  }
  *puVar1 = &PTR_FUN_110cfc340;
  puVar1[1] = param_2;
  *(undefined4 *)(puVar1 + 3) = 0;
  puVar1[2] = 0;
  return;
}



/* Entry: 10b52173c; end: 10b52178b;  */

/* WARNING: Possible PIC construction at 0x00010b521750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010b521754) */

long FUN_10b52173c(long param_1)

{
  char in_NG;
  char in_OV;
  
  func_0x00010006804c(param_1 + 0x18);
  if (in_NG == in_OV) {
    func_0x0001002a998c(param_1);
  }
  return param_1;
}



/* Entry: 10b52178c; end: 10b5217bb;  */

long * FUN_10b52178c(long *param_1)

{
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b5217bc; end: 10b52195b;  */

long * FUN_10b5217bc(long *param_1)

{
  func_0x000107c282b4(param_1 + 6);
  FUN_10b52178c(param_1 + 3);
  if (*param_1 != 0) {
    func_0x000107c303ac(param_1);
  }
  return param_1;
}



/* Entry: 10b52195c; end: 10b52196f;  */

void FUN_10b52195c(ulong *param_1)

{
  long lVar1;
  ulong *puVar2;
  ulong uVar3;
  long lVar4;
  
  if ((int)param_1[1] < 1) {
    return;
  }
  lVar4 = 0;
  uVar3 = param_1[1];
  puVar2 = param_1;
  if ((*param_1 & 1) != 0) {
    puVar2 = (ulong *)(*param_1 + 7);
  }
  do {
    lVar1 = lVar4 + 1;
    (**(code **)(*(long *)puVar2[lVar4] + 0x18))();
    lVar4 = lVar1;
  } while (lVar1 < (int)uVar3);
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10b521970; end: 10b521a0b;  */

undefined8 * FUN_10b521970(undefined8 *param_1)

{
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  func_0x00010b521cd0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b521dac();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b521db4();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110cfc390;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b521c34();
  }
  func_0x000107c282d4(param_1 + 2);
  *(undefined4 *)(param_1 + 4) = 0;
  func_0x000107c282d4(param_1 + 5);
  *(undefined4 *)(param_1 + 7) = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x3c);
  *(undefined8 *)((long)param_1 + 0x44) = *(undefined8 *)(unaff_x19 + 0x44);
  *(undefined8 *)((long)param_1 + 0x3c) = uVar1;
  return param_1;
}



/* Entry: 10b521a0c; end: 10b521aa7;  */

undefined8 * FUN_10b521a0c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x19;
  undefined8 *unaff_x20;
  
  func_0x00010b521cd0();
  if (param_1 == (undefined8 *)0x0) {
    func_0x00010b521dac();
  }
  else {
    param_1 = unaff_x20;
    func_0x00010b521db4();
  }
  param_1[1] = unaff_x20;
  *param_1 = &PTR_FUN_110cfc3e0;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b521c34();
  }
  func_0x00010b2035a0(param_1 + 2);
  func_0x00010b2035a0(param_1 + 5);
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  uVar1 = *(undefined8 *)(unaff_x19 + 0x40);
  *(undefined4 *)(param_1 + 9) = *(undefined4 *)(unaff_x19 + 0x48);
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 10b521aa8; end: 10b521ae7;  */

undefined8 * FUN_10b521aa8(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long unaff_x19;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  func_0x00010b521cd0();
  if (param_1 == 0) {
    puVar3 = (undefined8 *)0x60;
    __Znwm();
  }
  else {
    puVar3 = unaff_x20;
    FUN_10b4d80e0();
  }
  puVar3[1] = unaff_x20;
  *puVar3 = &PTR_FUN_110cfc430;
  if ((*(ulong *)(unaff_x19 + 8) & 1) != 0) {
    func_0x00010b521c34();
  }
  uVar1 = *(uint *)(unaff_x19 + 0x10);
  *(uint *)(puVar3 + 2) = uVar1;
  *(undefined4 *)((long)puVar3 + 0x14) = 0;
  if ((uVar1 & 1) == 0) {
    puVar2 = (undefined8 *)0x0;
  }
  else {
    puVar2 = unaff_x20;
    FUN_10b521970();
  }
  puVar3[3] = puVar2;
  if ((uVar1 >> 1 & 1) == 0) {
    unaff_x20 = (undefined8 *)0x0;
  }
  else {
    FUN_10b521a0c();
  }
  puVar3[4] = unaff_x20;
  uVar5 = *(undefined8 *)(unaff_x19 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x19 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x19 + 0x40);
  uVar6 = *(undefined8 *)(unaff_x19 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x19 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x19 + 0x48);
  *(undefined4 *)(puVar3 + 0xb) = *(undefined4 *)(unaff_x19 + 0x58);
  puVar3[10] = uVar9;
  puVar3[9] = uVar8;
  puVar3[8] = uVar7;
  puVar3[7] = uVar6;
  puVar3[6] = uVar5;
  puVar3[5] = uVar4;
  return puVar3;
}



/* Entry: 10b521ae8; end: 10b521e93;  */

ulong * FUN_10b521ae8(void)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *in_x3;
  ulong *unaff_x19;
  
  if (in_x3 < (ulong *)*unaff_x19) {
    return in_x3;
  }
  do {
    if ((char)unaff_x19[7] == '\x01') {
      return unaff_x19 + 2;
    }
    uVar1 = *unaff_x19;
    puVar2 = unaff_x19;
    func_0x0001006b07dc();
    in_x3 = (ulong *)((long)puVar2 + (long)((int)in_x3 - (int)uVar1));
  } while ((ulong *)*unaff_x19 <= in_x3);
  return in_x3;
}



/* Entry: 10b521e94; end: 10b521eb7;  */

undefined8 FUN_10b521e94(undefined8 param_1)

{
  func_0x00010b5232b4();
  return param_1;
}



/* Entry: 10b521eb8; end: 10b521ebb;  */

undefined8 FUN_10b521eb8(undefined8 param_1)

{
  func_0x00010b5232b4();
  return param_1;
}



/* Entry: 10b521ebc; end: 10b521ecf;  */

void FUN_10b521ebc(void)

{
  FUN_10b521e94();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b521ed0; end: 10b521eef;  */

undefined ** FUN_10b521ed0(void)

{
  return &PTR_DAT_110cfca90;
}



/* Entry: 10b521ef0; end: 10b521f67;  */

long * FUN_10b521ef0(long *param_1,undefined8 param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  long lVar2;
  long extraout_x8;
  long *unaff_x19;
  long unaff_x20;
  int iVar3;
  int iVar4;
  
  func_0x00010b523230();
  if ((int)param_1[2] != 0) {
    func_0x00010b52319c();
    func_0x00010b5233ac();
    func_0x00010b5231d4();
    param_4 = param_1;
  }
  if (*(int *)(unaff_x20 + 0x14) != 0) {
    func_0x00010b52319c();
    func_0x00010b5233bc();
    func_0x00010b5231d4();
    param_4 = param_1;
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b523334();
    if ((long)param_3 < 0) {
      lVar2 = *(long *)(extraout_x8 + 8);
      param_3 = *(ulong *)(extraout_x8 + 0x10);
    }
    else {
      lVar2 = extraout_x8 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar4 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar3 = (int)param_3;
        uVar1 = iVar3 - iVar4;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar3 < iVar4) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar3);
    }
    _memcpy(param_4,lVar2,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



/* Entry: 10b521f68; end: 10b521fbf;  */

long FUN_10b521f68(long param_1)

{
  long extraout_x8;
  ulong extraout_x9;
  long lVar1;
  
  func_0x00010b523360();
  lVar1 = extraout_x8;
  if ((extraout_x9 & 1) != 0) {
    lVar1 = (long)*(char *)((extraout_x9 & 0xfffffffffffffffe) + 0x1f);
    if (lVar1 < 0) {
      lVar1 = *(long *)((extraout_x9 & 0xfffffffffffffffe) + 0x10);
    }
    lVar1 = lVar1 + extraout_x8;
  }
  *(int *)(param_1 + 0x18) = (int)lVar1;
  return lVar1;
}



/* Entry: 10b521fc0; end: 10b521ffb;  */

long FUN_10b521fc0(long param_1)

{
  func_0x00010b5232b4();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c303ac();
  }
  func_0x00010b523450();
  return param_1;
}



/* Entry: 10b521ffc; end: 10b521fff;  */

long FUN_10b521ffc(long param_1)

{
  func_0x00010b5232b4();
  if (*(long *)(param_1 + 0x28) != 0) {
    func_0x000107c303ac();
  }
  func_0x00010b523450();
  return param_1;
}



/* Entry: 10b522000; end: 10b522013;  */

void FUN_10b522000(void)

{
  FUN_10b521fc0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10b522014; end: 10b52201f;  */

undefined ** FUN_10b522014(void)

{
  return &PTR_DAT_110cfcb28;
}



/* Entry: 10b522020; end: 10b522053;  */

void FUN_10b522020(void)

{
  char in_NG;
  char in_OV;
  long unaff_x19;
  ulong *puVar1;
  
  func_0x00010b523494();
  if (in_NG == in_OV) {
    func_0x00010b523448();
  }
  puVar1 = (ulong *)(unaff_x19 + 8);
  if ((*(byte *)puVar1 & 1) == 0) {
    return;
  }
  if ((*puVar1 & 1) == 0) {
    FUN_10b4c3590();
  }
  else {
    puVar1 = (ulong *)((*puVar1 & 0xfffffffffffffffe) + 8);
  }
  if (-1 < (char)*(byte *)((long)puVar1 + 0x17)) {
    *(byte *)puVar1 = 0;
    *(byte *)((long)puVar1 + 0x17) = 0;
    return;
  }
  *(undefined1 *)*puVar1 = 0;
  puVar1[1] = 0;
  return;
}



/* Entry: 10b522054; end: 10b522173;  */

long * FUN_10b522054(long param_1,long param_2,ulong param_3,long *param_4)

{
  uint uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong extraout_x8;
  long extraout_x8_00;
  long *unaff_x19;
  long unaff_x20;
  int iVar5;
  uint unaff_w22;
  int iVar6;
  
  func_0x00010b523230();
  uVar1 = *(uint *)(param_1 + 0x20);
  if (uVar1 != 0) {
    func_0x00010b52319c();
    func_0x00010b523400();
    while (0x7f < uVar1) {
      func_0x00010b5232f8();
    }
    func_0x00010b5232bc();
    do {
      func_0x00010b52319c();
      uVar4 = (ulong)*(int *)(ulong)uVar1;
      param_4 = (long *)(param_1 + 1);
      while (bVar2 = 0x7f < uVar4, bVar2) {
        func_0x00010b523320();
        uVar4 = extraout_x8;
      }
      func_0x00010b523420();
    } while (!bVar2);
  }
  func_0x00010b523410();
  while (unaff_w22 != uVar1) {
    func_0x00010b5231a8();
    param_3 = (ulong)*(uint *)(param_2 + 0x18);
    func_0x00010b5232a0();
    func_0x00010b523430();
  }
  if ((*(ulong *)(unaff_x20 + 8) & 1) != 0) {
    func_0x00010b523334();
    if ((long)param_3 < 0) {
      lVar3 = *(long *)(extraout_x8_00 + 8);
      param_3 = *(ulong *)(extraout_x8_00 + 0x10);
    }
    else {
      lVar3 = extraout_x8_00 + 8;
    }
    if (*unaff_x19 - (long)param_4 < (long)(int)param_3) {
      while( true ) {
        iVar6 = ((int)*unaff_x19 - (int)param_4) + 0x10;
        iVar5 = (int)param_3;
        uVar1 = iVar5 - iVar6;
        param_3 = (ulong)uVar1;
        if (uVar1 == 0 || iVar5 < iVar6) break;
        func_0x00010b4d5738();
        param_4 = unaff_x19;
        func_0x000107c303e4();
      }
      func_0x00010b4d5738();
      return (long *)((long)param_4 + (long)iVar5);
    }
    _memcpy(param_4,lVar3,param_3 & 0xffffffff);
    return (long *)((long)param_4 + (long)(int)param_3);
  }
  return param_4;
}



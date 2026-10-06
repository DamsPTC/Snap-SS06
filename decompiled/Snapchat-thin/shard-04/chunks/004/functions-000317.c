/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10352c708; end: 10352c70b;  */

void FUN_10352c708(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd53c8;
  func_0x000107c61520(&UNK_10dbd53c8,&UNK_1106614a8);
  puRam0000000112f761c8 = puVar1;
  return;
}



/* Entry: 10352c70c; end: 10352c74b;  */

void FUN_10352c70c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd53c8;
  func_0x000107c61520(&UNK_10dbd53c8,&UNK_1106614a8);
  puRam0000000112f761c8 = puVar1;
  return;
}



/* Entry: 10352c74c; end: 10352c76f;  */

void FUN_10352c74c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c770();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10352c770; end: 10352c7af;  */

void FUN_10352c770(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5438;
  func_0x000107c61520(&UNK_10dbd5438,&UNK_110661558);
  puRam0000000112f761d0 = puVar1;
  return;
}



/* Entry: 10352c7b0; end: 10352c7c3;  */

void FUN_10352c7b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c20c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10352c7f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c7c4; end: 10352c7f3;  */

void FUN_10352c7c4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c7f4; end: 10352c833;  */

void FUN_10352c7f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd53f0;
  func_0x000107c61520(&DAT_10dbd53f0,&UNK_110661558);
  puRam0000000112f761d8 = puVar1;
  return;
}



/* Entry: 10352c834; end: 10352c837;  */

void FUN_10352c834(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd54a0;
  func_0x000107c61520(&UNK_10dbd54a0,&UNK_110661558);
  puRam0000000112f761e0 = puVar1;
  return;
}



/* Entry: 10352c838; end: 10352c877;  */

void FUN_10352c838(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd54a0;
  func_0x000107c61520(&UNK_10dbd54a0,&UNK_110661558);
  puRam0000000112f761e0 = puVar1;
  return;
}



/* Entry: 10352c878; end: 10352c89f;  */

void FUN_10352c878(void)

{
  return;
}



/* Entry: 10352c8a0; end: 10352c8cb;  */

void FUN_10352c8a0(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 10352c8cc; end: 10352c977;  */

undefined8 * FUN_10352c8cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10352c978; end: 10352c9bf;  */

undefined8 * FUN_10352c978(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10352c9c0; end: 10352ca57;  */

int FUN_10352c9c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10352ca58; end: 10352ca7f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10352ca58(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10352ca80; end: 10352cb4f;  */

undefined8 * FUN_10352ca80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[4];
  param_1[3] = param_2[3];
  uVar2 = param_2[5];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10352cb50; end: 10352cba3;  */

undefined8 * FUN_10352cb50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar3 = param_2[5];
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10352cba4; end: 10352cc47;  */

int FUN_10352cba4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10352cc48; end: 10352cccf;  */

/* WARNING: Possible PIC construction at 0x00010352cc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352cc74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352cc88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352cc64) */
/* WARNING: Removing unreachable block (ram,0x00010352cc78) */
/* WARNING: Removing unreachable block (ram,0x00010352cc8c) */
/* WARNING: Removing unreachable block (ram,0x00010352cc9c) */
/* WARNING: Removing unreachable block (ram,0x00010352cca4) */
/* WARNING: Removing unreachable block (ram,0x00010352ccc0) */
/* WARNING: Removing unreachable block (ram,0x00010352ccb4) */
/* WARNING: Removing unreachable block (ram,0x00010352cc80) */
/* WARNING: Removing unreachable block (ram,0x00010352cc6c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10352cc48(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x48);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x50) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x50) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10352ccd0; end: 10352d183;  */

undefined8 * FUN_10352ccd0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined2 *)(param_1 + 3) = *(undefined2 *)(param_2 + 3);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
  param_1[5] = param_2[5];
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar3 = param_2[9];
  uVar1 = param_2[10];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[9] = uVar3;
  param_1[10] = uVar1;
  lVar2 = param_2[0xc];
  if (lVar2 == 0) {
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    lVar2 = param_2[0x10];
  }
  else {
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar2;
    uVar3 = param_2[0xd];
    uVar1 = param_2[0xe];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar1;
    lVar2 = param_2[0x10];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
  }
  else {
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar2;
    uVar3 = param_2[0x11];
    uVar1 = param_2[0x12];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar1;
  }
  uVar4 = param_2[0x15];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
    uVar3 = param_2[0x14];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar4;
  }
  else {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = param_2[0x15];
  }
  uVar4 = param_2[0x18];
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
    uVar3 = param_2[0x17];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar4;
  }
  else {
    uVar3 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x18] = param_2[0x18];
  }
  return param_1;
}



/* Entry: 10352d184; end: 10352d353;  */

undefined8 * FUN_10352d184(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)((long)param_2 + 0x1c);
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = param_2[5];
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  param_1[7] = param_2[7];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar1 = param_1[9];
  uVar2 = param_1[10];
  uVar5 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if (param_1[0xc] == 0) {
LAB_10352d244:
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    if (param_1[0x10] == 0) goto LAB_10352d28c;
LAB_10352d25c:
    lVar3 = param_2[0x10];
    if (lVar3 == 0) {
      func_0x00010159d63c(param_1 + 0xf);
      goto LAB_10352d28c;
    }
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = lVar3;
    func_0x000107c6142c();
    uVar1 = param_1[0x11];
    uVar2 = param_1[0x12];
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
  }
  else {
    lVar3 = param_2[0xc];
    if (lVar3 == 0) {
      func_0x00010159d63c(param_1 + 0xb);
      goto LAB_10352d244;
    }
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = lVar3;
    func_0x000107c6142c();
    uVar1 = param_1[0xd];
    uVar2 = param_1[0xe];
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    func_0x00010006c090(uVar1,uVar2);
    if (param_1[0x10] != 0) goto LAB_10352d25c;
LAB_10352d28c:
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
  }
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar4 = param_2[0x15];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x13) = *(undefined4 *)(param_2 + 0x13);
      uVar1 = param_1[0x14];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar4;
      func_0x00010006c090(uVar1);
      goto LAB_10352d2f0;
    }
    func_0x0001015d4290(param_1 + 0x13);
  }
  uVar1 = param_2[0x13];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar1;
  param_1[0x15] = param_2[0x15];
LAB_10352d2f0:
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar4 = param_2[0x18];
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar1 = param_1[0x17];
      param_1[0x17] = param_2[0x17];
      param_1[0x18] = uVar4;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x16);
  }
  uVar1 = param_2[0x16];
  param_1[0x17] = param_2[0x17];
  param_1[0x16] = uVar1;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Entry: 10352d354; end: 10352d443;  */

int FUN_10352d354(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x18);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10352d444; end: 10352d49f;  */

/* WARNING: Possible PIC construction at 0x00010352d45c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352d470: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352d460) */
/* WARNING: Removing unreachable block (ram,0x00010352d474) */
/* WARNING: Removing unreachable block (ram,0x00010352d490) */
/* WARNING: Removing unreachable block (ram,0x00010352d484) */
/* WARNING: Removing unreachable block (ram,0x00010352d468) */

void FUN_10352d444(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 0x18));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10352d4a0; end: 10352d72f;  */

undefined1 * FUN_10352d4a0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined2 *)(param_1 + 0x10) = *(undefined2 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010006c00c(uVar3,uVar1);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  lVar2 = *(long *)(param_2 + 0x30);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
  }
  else {
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(long *)(param_1 + 0x30) = lVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    uVar1 = *(undefined8 *)(param_2 + 0x40);
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar1);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    *(undefined8 *)(param_1 + 0x40) = uVar1;
  }
  uVar4 = *(ulong *)(param_2 + 0x58);
  if (uVar4 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
    uVar3 = *(undefined8 *)(param_2 + 0x50);
    func_0x00010006c00c(uVar3,uVar4);
    *(undefined8 *)(param_1 + 0x50) = uVar3;
    *(ulong *)(param_1 + 0x58) = uVar4;
  }
  else {
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  }
  return param_1;
}



/* Entry: 10352d730; end: 10352d82b;  */

undefined1 * FUN_10352d730(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar5;
  func_0x00010006c090(uVar1,uVar2);
  if (*(long *)(param_1 + 0x30) != 0) {
    lVar3 = *(long *)(param_2 + 0x30);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
      *(long *)(param_1 + 0x30) = lVar3;
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_1 + 0x38);
      uVar2 = *(undefined8 *)(param_1 + 0x40);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
      *(undefined8 *)(param_1 + 0x38) = uVar5;
      func_0x00010006c090(uVar1,uVar2);
      goto LAB_10352d7c8;
    }
    func_0x00010159d63c(param_1 + 0x28);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
LAB_10352d7c8:
  if (*(ulong *)(param_1 + 0x58) >> 0x3c < 0xf) {
    uVar4 = *(ulong *)(param_2 + 0x58);
    if (uVar4 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_2 + 0x48);
      uVar1 = *(undefined8 *)(param_1 + 0x50);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(ulong *)(param_1 + 0x58) = uVar4;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x48);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  return param_1;
}



/* Entry: 10352d82c; end: 10352d903;  */

int FUN_10352d82c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10352d904; end: 10352da03;  */

void FUN_10352d904(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f764b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd540c;
  func_0x000107c61520(&DAT_10dbd540c,&UNK_110661558);
  puRam0000000112f764b0 = puVar1;
  return;
}



/* Entry: 10352da04; end: 10352dac3;  */

undefined8 FUN_10352da04(undefined8 param_1,undefined8 param_2)

{
  FUN_10352d4a0(param_2,param_1,&UNK_110661558);
  return param_2;
}



/* Entry: 10352dac4; end: 10352db43;  */

void FUN_10352dac4(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10352db44; end: 10352db83;  */

void FUN_10352db44(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f76590;
  func_0x0001000285a8(0x112f76590,&UNK_10dbd5b60);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10352db84; end: 10352db9b;  */

void FUN_10352db84(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103535634();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352db9c; end: 10352dbdb;  */

void FUN_10352db9c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f76680;
  func_0x0001000285a8(0x112f76680,&UNK_10dbd5b68);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10352dbdc; end: 10352dbf3;  */

void FUN_10352dbdc(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103535640)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352dbf4; end: 10352dc33;  */

void FUN_10352dbf4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f766f0;
  func_0x0001000285a8(0x112f766f0,&UNK_10dbd5b70);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10352dc34; end: 10352dc3f;  */

void FUN_10352dc34(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x10353564c)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352dc40; end: 10352dd3f;  */

void FUN_10352dc40(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f76750;
  func_0x0001000285a8(0x112f76750,&UNK_10dbd5b78);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10352dd40; end: 10352dd4b;  */

void FUN_10352dd40(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x103535658)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352dd4c; end: 10352dd8b;  */

void FUN_10352dd4c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f768f0;
  func_0x0001000285a8(0x112f768f0,&UNK_10dbd5b98);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10352dd8c; end: 10352dda3;  */

void FUN_10352dd8c(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103535658)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352dda4; end: 10352de13;  */

void FUN_10352dda4(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352de14; end: 10352de1f;  */

void FUN_10352de14(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103535664)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352de20; end: 10352ded7;  */

void FUN_10352de20(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10352ded8; end: 10352e07f;  */

bool FUN_10352ded8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    FUN_1035361ac(&uStack_50,auStack_70,0x112db6f40,&UNK_10d9681d0);
  }
  else {
    FUN_1035361ac(&uStack_50,auStack_70,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x000101597ae4(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 10352e080; end: 10352e0bf;  */

void FUN_10352e080(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x18,auStack_38,0,0);
  func_0x000107c61434(*(undefined8 *)(param_3 + 0x18));
  return;
}



/* Entry: 10352e0c0; end: 10352e153;  */

void FUN_10352e0c0(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_103535b20(0);
    func_0x000107c613fc();
    FUN_103535b40();
    func_0x000107c61574(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x18,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  *(undefined8 *)(lVar2 + 0x18) = param_1;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 10352e154; end: 10352e3d7;  */

void FUN_10352e154(undefined8 param_1,undefined1 param_2)

{
  ulong uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_103535b20(0);
    func_0x000107c613fc();
    FUN_103535b40();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x20,auStack_58,1,0);
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  *(undefined1 *)(lVar2 + 0x28) = param_2;
  return;
}



/* Entry: 10352e3d8; end: 10352e46b;  */

void FUN_10352e3d8(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_48 [24];
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar4;
  if ((uVar1 & 1) == 0) {
    FUN_103535b20(0);
    func_0x000107c613fc();
    FUN_103535b40();
    func_0x000107c61574(lVar4);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  func_0x000107c61428(lVar2 + 0x68,auStack_48,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x68);
  *(undefined8 *)(lVar2 + 0x68) = param_1;
  func_0x000107c6142c(uVar3);
  return;
}



/* Entry: 10352e46c; end: 10352e69b;  */

void FUN_10352e46c(undefined8 *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_118 [24];
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
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
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = lVar3;
  if ((uVar1 & 1) == 0) {
    FUN_103535b20(0);
    func_0x000107c613fc();
    FUN_103535b40();
    func_0x000107c61574(lVar3);
    *(long *)(unaff_x20 + 0x10) = lVar2;
  }
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  func_0x000107c61428(lVar2 + 0x70,auStack_118,1,0);
  uStack_78 = *(undefined8 *)(lVar2 + 0x98);
  uStack_80 = *(undefined8 *)(lVar2 + 0x90);
  uStack_68 = *(undefined8 *)(lVar2 + 0xa8);
  uStack_70 = *(undefined8 *)(lVar2 + 0xa0);
  uStack_58 = *(undefined8 *)(lVar2 + 0xb8);
  uStack_60 = *(undefined8 *)(lVar2 + 0xb0);
  uStack_48 = *(undefined8 *)(lVar2 + 200);
  uStack_50 = *(undefined8 *)(lVar2 + 0xc0);
  uStack_98 = *(undefined8 *)(lVar2 + 0x78);
  uStack_a0 = *(undefined8 *)(lVar2 + 0x70);
  uStack_88 = *(undefined8 *)(lVar2 + 0x88);
  uStack_90 = *(undefined8 *)(lVar2 + 0x80);
  *(undefined8 *)(lVar2 + 0x98) = uStack_d8;
  *(undefined8 *)(lVar2 + 0x90) = uStack_e0;
  *(undefined8 *)(lVar2 + 0xa8) = uStack_c8;
  *(undefined8 *)(lVar2 + 0xa0) = uStack_d0;
  *(undefined8 *)(lVar2 + 0xb8) = uStack_b8;
  *(undefined8 *)(lVar2 + 0xb0) = uStack_c0;
  *(undefined8 *)(lVar2 + 200) = uStack_a8;
  *(undefined8 *)(lVar2 + 0xc0) = uStack_b0;
  *(undefined8 *)(lVar2 + 0x78) = uStack_f8;
  *(undefined8 *)(lVar2 + 0x70) = uStack_100;
  *(undefined8 *)(lVar2 + 0x88) = uStack_e8;
  *(undefined8 *)(lVar2 + 0x80) = uStack_f0;
  FUN_103536214(&uStack_a0,0x112f76988,&UNK_10dbd5bb0);
  return;
}



/* Entry: 10352e69c; end: 10352e6f7;  */

undefined8 FUN_10352e69c(void)

{
  if (lRam0000000112f769a8 != -1) {
    func_0x000107c61568(0x112f769a8,FUN_1035304b4);
  }
  func_0x000107c6157c(uRam0000000112f769b0);
  return 0;
}



/* Entry: 10352e6f8; end: 10352e73f;  */

void FUN_10352e6f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd79b0,0x7c,2);
  uRam0000000113807ce8 = uStack_38;
  uRam0000000113807ce0 = uStack_40;
  uRam0000000113807cf8 = uStack_28;
  uRam0000000113807cf0 = uStack_30;
  uRam0000000113807d08 = uStack_18;
  uRam0000000113807d00 = uStack_20;
  return;
}



/* Entry: 10352e740; end: 10352e7df;  */

/* WARNING: Possible PIC construction at 0x00010352e78c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352e79c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352e790) */
/* WARNING: Removing unreachable block (ram,0x00010352e7a0) */

void FUN_10352e740(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769b8 != -1) {
    func_0x000107c61568(0x112f769b8,FUN_10352e6f8);
  }
  uVar5 = uRam0000000113807d08;
  uVar4 = uRam0000000113807d00;
  uVar3 = uRam0000000113807cf8;
  uVar2 = uRam0000000113807cf0;
  uVar1 = uRam0000000113807ce8;
  *param_1 = uRam0000000113807ce0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352e7e0; end: 10352e827;  */

void FUN_10352e7e0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd78c0,0xea,2);
  uRam0000000113807d18 = uStack_38;
  uRam0000000113807d10 = uStack_40;
  uRam0000000113807d28 = uStack_28;
  uRam0000000113807d20 = uStack_30;
  uRam0000000113807d38 = uStack_18;
  uRam0000000113807d30 = uStack_20;
  return;
}



/* Entry: 10352e828; end: 10352e8c7;  */

/* WARNING: Possible PIC construction at 0x00010352e874: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352e884: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352e878) */
/* WARNING: Removing unreachable block (ram,0x00010352e888) */

void FUN_10352e828(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769c0 != -1) {
    func_0x000107c61568(0x112f769c0,FUN_10352e7e0);
  }
  uVar5 = uRam0000000113807d38;
  uVar4 = uRam0000000113807d30;
  uVar3 = uRam0000000113807d28;
  uVar2 = uRam0000000113807d20;
  uVar1 = uRam0000000113807d18;
  *param_1 = uRam0000000113807d10;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352e8c8; end: 10352e90f;  */

void FUN_10352e8c8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd7880,0x31,2);
  uRam0000000113807d48 = uStack_38;
  uRam0000000113807d40 = uStack_40;
  uRam0000000113807d58 = uStack_28;
  uRam0000000113807d50 = uStack_30;
  uRam0000000113807d68 = uStack_18;
  uRam0000000113807d60 = uStack_20;
  return;
}



/* Entry: 10352e910; end: 10352e9af;  */

/* WARNING: Possible PIC construction at 0x00010352e95c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352e96c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352e960) */
/* WARNING: Removing unreachable block (ram,0x00010352e970) */

void FUN_10352e910(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769c8 != -1) {
    func_0x000107c61568(0x112f769c8,FUN_10352e8c8);
  }
  uVar5 = uRam0000000113807d68;
  uVar4 = uRam0000000113807d60;
  uVar3 = uRam0000000113807d58;
  uVar2 = uRam0000000113807d50;
  uVar1 = uRam0000000113807d48;
  *param_1 = uRam0000000113807d40;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352e9b0; end: 10352e9f7;  */

void FUN_10352e9b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd7830,0x43,2);
  uRam0000000113807d78 = uStack_38;
  uRam0000000113807d70 = uStack_40;
  uRam0000000113807d88 = uStack_28;
  uRam0000000113807d80 = uStack_30;
  uRam0000000113807d98 = uStack_18;
  uRam0000000113807d90 = uStack_20;
  return;
}



/* Entry: 10352e9f8; end: 10352ea97;  */

/* WARNING: Possible PIC construction at 0x00010352ea44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352ea54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352ea48) */
/* WARNING: Removing unreachable block (ram,0x00010352ea58) */

void FUN_10352e9f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769d0 != -1) {
    func_0x000107c61568(0x112f769d0,FUN_10352e9b0);
  }
  uVar5 = uRam0000000113807d98;
  uVar4 = uRam0000000113807d90;
  uVar3 = uRam0000000113807d88;
  uVar2 = uRam0000000113807d80;
  uVar1 = uRam0000000113807d78;
  *param_1 = uRam0000000113807d70;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352ea98; end: 10352eadf;  */

void FUN_10352ea98(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd77f0,0x33,2);
  uRam0000000113807da8 = uStack_38;
  uRam0000000113807da0 = uStack_40;
  uRam0000000113807db8 = uStack_28;
  uRam0000000113807db0 = uStack_30;
  uRam0000000113807dc8 = uStack_18;
  uRam0000000113807dc0 = uStack_20;
  return;
}



/* Entry: 10352eae0; end: 10352eb7f;  */

/* WARNING: Possible PIC construction at 0x00010352eb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352eb3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352eb30) */
/* WARNING: Removing unreachable block (ram,0x00010352eb40) */

void FUN_10352eae0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769d8 != -1) {
    func_0x000107c61568(0x112f769d8,FUN_10352ea98);
  }
  uVar5 = uRam0000000113807dc8;
  uVar4 = uRam0000000113807dc0;
  uVar3 = uRam0000000113807db8;
  uVar2 = uRam0000000113807db0;
  uVar1 = uRam0000000113807da8;
  *param_1 = uRam0000000113807da0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352eb80; end: 10352ebc7;  */

void FUN_10352eb80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd77c0,0x2f,2);
  uRam0000000113807dd8 = uStack_38;
  uRam0000000113807dd0 = uStack_40;
  uRam0000000113807de8 = uStack_28;
  uRam0000000113807de0 = uStack_30;
  uRam0000000113807df8 = uStack_18;
  uRam0000000113807df0 = uStack_20;
  return;
}



/* Entry: 10352ebc8; end: 10352ec67;  */

/* WARNING: Possible PIC construction at 0x00010352ec14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352ec24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352ec18) */
/* WARNING: Removing unreachable block (ram,0x00010352ec28) */

void FUN_10352ebc8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769e0 != -1) {
    func_0x000107c61568(0x112f769e0,FUN_10352eb80);
  }
  uVar5 = uRam0000000113807df8;
  uVar4 = uRam0000000113807df0;
  uVar3 = uRam0000000113807de8;
  uVar2 = uRam0000000113807de0;
  uVar1 = uRam0000000113807dd8;
  *param_1 = uRam0000000113807dd0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352ec68; end: 10352ecaf;  */

void FUN_10352ec68(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd7760,0x55,2);
  uRam0000000113807e08 = uStack_38;
  uRam0000000113807e00 = uStack_40;
  uRam0000000113807e18 = uStack_28;
  uRam0000000113807e10 = uStack_30;
  uRam0000000113807e28 = uStack_18;
  uRam0000000113807e20 = uStack_20;
  return;
}



/* Entry: 10352ecb0; end: 10352ed4f;  */

/* WARNING: Possible PIC construction at 0x00010352ecfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352ed0c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352ed00) */
/* WARNING: Removing unreachable block (ram,0x00010352ed10) */

void FUN_10352ecb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769e8 != -1) {
    func_0x000107c61568(0x112f769e8,FUN_10352ec68);
  }
  uVar5 = uRam0000000113807e28;
  uVar4 = uRam0000000113807e20;
  uVar3 = uRam0000000113807e18;
  uVar2 = uRam0000000113807e10;
  uVar1 = uRam0000000113807e08;
  *param_1 = uRam0000000113807e00;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352ed50; end: 10352ed97;  */

void FUN_10352ed50(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd7710,0x41,2);
  uRam0000000113807e38 = uStack_38;
  uRam0000000113807e30 = uStack_40;
  uRam0000000113807e48 = uStack_28;
  uRam0000000113807e40 = uStack_30;
  uRam0000000113807e58 = uStack_18;
  uRam0000000113807e50 = uStack_20;
  return;
}



/* Entry: 10352ed98; end: 10352ee37;  */

/* WARNING: Possible PIC construction at 0x00010352ede4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352edf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352ede8) */
/* WARNING: Removing unreachable block (ram,0x00010352edf8) */

void FUN_10352ed98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769f0 != -1) {
    func_0x000107c61568(0x112f769f0,FUN_10352ed50);
  }
  uVar5 = uRam0000000113807e58;
  uVar4 = uRam0000000113807e50;
  uVar3 = uRam0000000113807e48;
  uVar2 = uRam0000000113807e40;
  uVar1 = uRam0000000113807e38;
  *param_1 = uRam0000000113807e30;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352ee38; end: 10352ee7f;  */

void FUN_10352ee38(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd7600,0x109,2);
  uRam0000000113807e68 = uStack_38;
  uRam0000000113807e60 = uStack_40;
  uRam0000000113807e78 = uStack_28;
  uRam0000000113807e70 = uStack_30;
  uRam0000000113807e88 = uStack_18;
  uRam0000000113807e80 = uStack_20;
  return;
}



/* Entry: 10352ee80; end: 10352ef1f;  */

/* WARNING: Possible PIC construction at 0x00010352eecc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352eedc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352eed0) */
/* WARNING: Removing unreachable block (ram,0x00010352eee0) */

void FUN_10352ee80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f769f8 != -1) {
    func_0x000107c61568(0x112f769f8,FUN_10352ee38);
  }
  uVar5 = uRam0000000113807e88;
  uVar4 = uRam0000000113807e80;
  uVar3 = uRam0000000113807e78;
  uVar2 = uRam0000000113807e70;
  uVar1 = uRam0000000113807e68;
  *param_1 = uRam0000000113807e60;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352ef20; end: 10352ef67;  */

void FUN_10352ef20(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd75d0,0x2c,2);
  uRam0000000113807e98 = uStack_38;
  uRam0000000113807e90 = uStack_40;
  uRam0000000113807ea8 = uStack_28;
  uRam0000000113807ea0 = uStack_30;
  uRam0000000113807eb8 = uStack_18;
  uRam0000000113807eb0 = uStack_20;
  return;
}



/* Entry: 10352ef68; end: 10352f073;  */

void FUN_10352ef68(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
LAB_10352eff0:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x00010352b340();
          goto LAB_10352eff0;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x00010352b380();
          goto LAB_10352eff0;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10352f074; end: 10352f16f;  */

void FUN_10352f074(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    func_0x00010352b380();
    (*pcVar3)(&lStack_50,1,&UNK_110661e38,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x00010352b340();
    (*pcVar3)(&lStack_50,2,&UNK_110661ec8,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_10352f170();
  if (unaff_x21 == 0) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 10352f170; end: 10352f1f3;  */

void FUN_10352f170(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x38);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10352f1f4; end: 10352f247;  */

long * FUN_10352f1f4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  ulong uStack_70;
  long lStack_68;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 < 4) {
      if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 != 0) {
            return (long *)0x0;
          }
        }
        else if (lVar3 != 1) {
          return (long *)0x0;
        }
      }
      else if (lVar4 == 2) {
        if (lVar3 != 2) {
          return (long *)0x0;
        }
      }
      else if (lVar3 != 3) {
        return (long *)0x0;
      }
    }
    else if (lVar4 < 6) {
      if (lVar4 == 4) {
        if (lVar3 != 4) {
          return (long *)0x0;
        }
      }
      else if (lVar3 != 5) {
        return (long *)0x0;
      }
    }
    else if (lVar4 == 6) {
      if (lVar3 != 6) {
        return (long *)0x0;
      }
    }
    else if (lVar3 != 7) {
      return (long *)0x0;
    }
  }
  else if (lVar3 != lVar4) {
    return (long *)0x0;
  }
  if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001035356d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dbd5b46)[param_2[2]] * 4 + 0x1035356d4))();
    return param_1;
  }
  if (param_1[2] != param_2[2]) {
    return (long *)0x0;
  }
  lVar3 = param_1[7];
  uVar5 = param_1[6];
  lVar4 = param_1[9];
  uVar8 = param_1[8];
  lVar7 = param_2[7];
  uVar6 = param_2[6];
  lVar10 = param_2[9];
  uVar9 = param_2[8];
  uStack_a0 = uVar6;
  lStack_98 = lVar7;
  uStack_90 = uVar9;
  lStack_88 = lVar10;
  uStack_80 = uVar5;
  lStack_78 = lVar3;
  uStack_70 = uVar8;
  lStack_68 = lVar4;
  if (lVar3 == 0) {
    if (lVar7 == 0) {
      FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
LAB_1035358dc:
      func_0x000101597ae4(uVar5,lVar3,uVar8,lVar4);
      lVar3 = param_1[4];
      func_0x000100e25fcc(lVar3,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)lVar3;
      goto LAB_103535968;
    }
LAB_103535810:
    FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
    func_0x000101597ae4(uVar5,lVar3,uVar8,lVar4);
    uVar5 = uVar6;
    lVar3 = lVar7;
    uVar8 = uVar9;
    lVar4 = lVar10;
  }
  else {
    if (lVar7 == 0) goto LAB_103535810;
    if (((uVar5 == uVar6) && (lVar3 == lVar7)) ||
       (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar3,uVar6,lVar7,0), (uVar2 & 1) != 0)) {
      FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar8;
      func_0x000100e25fcc(uVar8,lVar4,uVar9,lVar10);
      func_0x000101597ae4(uVar6,lVar7,uVar9,lVar10);
      if ((uVar2 & 1) != 0) goto LAB_1035358dc;
    }
    else {
      FUN_1035361ac(&uStack_80,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      FUN_1035361ac(&uStack_a0,auStack_c0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar6,lVar7,uVar9,lVar10);
    }
  }
  func_0x000101597ae4(uVar5,lVar3,uVar8,lVar4);
  uVar1 = 0;
LAB_103535968:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 10352f248; end: 10352f277;  */

undefined1  [16] FUN_10352f248(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 10352f278; end: 10352f2ab;  */

void FUN_10352f278(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 10352f2ac; end: 10352f2bf;  */

undefined1  [16] FUN_10352f2ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x10352f2bc;
  return auVar1;
}



/* Entry: 10352f2c0; end: 10352f2d3;  */

void FUN_10352f2c0(void)

{
  FUN_10352ef68();
  return;
}



/* Entry: 10352f2d4; end: 10352f313;  */

void FUN_10352f2d4(void)

{
  FUN_10352f074();
  return;
}



/* Entry: 10352f314; end: 10352f317;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10352f314(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10352f318; end: 10352f34f;  */

uint FUN_10352f318(long param_1,long param_2)

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
  func_0x0001035398d0();
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



/* Entry: 10352f350; end: 10352f3a7;  */

uint FUN_10352f350(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103535670(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10352f3a8; end: 10352f447;  */

/* WARNING: Possible PIC construction at 0x00010352f3f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352f404: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352f3f8) */
/* WARNING: Removing unreachable block (ram,0x00010352f408) */

void FUN_10352f3a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f76a00 != -1) {
    func_0x000107c61568(0x112f76a00,FUN_10352ef20);
  }
  uVar5 = uRam0000000113807eb8;
  uVar4 = uRam0000000113807eb0;
  uVar3 = uRam0000000113807ea8;
  uVar2 = uRam0000000113807ea0;
  uVar1 = uRam0000000113807e98;
  *param_1 = uRam0000000113807e90;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352f448; end: 10352f483;  */

void FUN_10352f448(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f76f38;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f76f38,&UNK_10dbd7260);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10352f484; end: 10352f597;  */

void FUN_10352f484(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10352f598; end: 10352f637;  */

uint FUN_10352f598(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
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
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103535670(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10352f638; end: 10352f7cb;  */

/* WARNING: Removing unreachable block (ram,0x00010352f74c) */
/* WARNING: Removing unreachable block (ram,0x00010352f7c8) */
/* WARNING: Removing unreachable block (ram,0x00010352f778) */

void FUN_10352f638(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015ecf38();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_110662330;
LAB_10352f7b4:
          (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 2) {
          (**(code **)(param_3 + 0x150))();
        }
      }
      else if (lVar1 == 3) {
        (**(code **)(param_3 + 0x1b8))
                  (unaff_x20 + 0x10,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,
                   &PTR_DAT_110787dc8,param_2,param_3);
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x00010352b300();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_110662228;
          goto LAB_10352f7b4;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x1c0);
          func_0x00010352b300();
          (*pcVar4)(unaff_x20 + 0x28,&UNK_110787f98,&UNK_110662228,&PTR_DAT_110787db0,lVar1,param_2,
                    param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 10352f7cc; end: 10352f94b;  */

void FUN_10352f7cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  undefined1 *puVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  puVar3 = &uStack_60;
  FUN_10352f94c();
  if (unaff_x21 == 0) {
    uVar1 = unaff_x20[1];
    uVar4 = *unaff_x20 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar4 = uVar1 >> 0x38 & 0xf;
    }
    if (uVar4 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,2,param_2,param_3);
    }
    puVar2 = (undefined1 *)unaff_x20[2];
    if (*(long *)(puVar2 + 0x10) != 0) {
      (**(code **)(param_3 + 0x198))
                (puVar2,3,&UNK_110787f98,&UNK_110787f98,&PTR_DAT_110787db0,&PTR_DAT_110787dc8,
                 param_2,param_3);
    }
    if (unaff_x20[3] != 0) {
      uStack_58 = (undefined1)unaff_x20[4];
      pcVar5 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[3];
      func_0x00010352b300();
      (*pcVar5)(&uStack_60,4,&UNK_110662228,puVar2,param_2,param_3);
      puVar2 = (undefined1 *)puVar3;
    }
    uVar4 = unaff_x20[5];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x1a0);
      func_0x00010352b300();
      (*pcVar5)(uVar4,5,&UNK_110787f98,&UNK_110662228,&PTR_DAT_110787db0,puVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  }
  return;
}



/* Entry: 10352f94c; end: 10352f9e3;  */

void FUN_10352f94c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x78);
  if (lStack_58 != 1) {
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015ecf38();
    (*pcVar1)(&uStack_90,1,&UNK_110662330,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10352f9e4; end: 10352fa57;  */

void FUN_10352f9e4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001001830b8();
  func_0x000103535a14();
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = puVar1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[5] = puVar2;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 1;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  return;
}



/* Entry: 10352fa58; end: 10352fa7b;  */

undefined1  [16] FUN_10352fa58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155250;
  auVar1._0_8_ = 0xd000000000000032;
  return auVar1;
}



/* Entry: 10352fa7c; end: 10352faab;  */

undefined1  [16] FUN_10352fa7c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 10352faac; end: 10352fadf;  */

void FUN_10352faac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 10352fae0; end: 10352faf3;  */

undefined1  [16] FUN_10352fae0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x10352faf0;
  return auVar1;
}



/* Entry: 10352faf4; end: 10352fb07;  */

void FUN_10352faf4(void)

{
  FUN_10352f638();
  return;
}



/* Entry: 10352fb08; end: 10352fb57;  */

void FUN_10352fb08(void)

{
  FUN_10352f7cc();
  return;
}



/* Entry: 10352fb58; end: 10352fb5b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10352fb58(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10352fb5c; end: 10352fb93;  */

uint FUN_10352fb5c(long param_1,long param_2)

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
  func_0x000103539890();
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



/* Entry: 10352fb94; end: 10352fc13;  */

uint FUN_10352fb94(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  undefined8 uStack_78;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_28 = param_1[0x11];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_b8 = unaff_x20[0x11];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_10353667c(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 10352fc14; end: 10352fcb3;  */

/* WARNING: Possible PIC construction at 0x00010352fc60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352fc70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352fc64) */
/* WARNING: Removing unreachable block (ram,0x00010352fc74) */

void FUN_10352fc14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f76a10 != -1) {
    func_0x000107c61568(0x112f76a10,0x10352f5f0);
  }
  uVar5 = uRam0000000113807ee8;
  uVar4 = uRam0000000113807ee0;
  uVar3 = uRam0000000113807ed8;
  uVar2 = uRam0000000113807ed0;
  uVar1 = uRam0000000113807ec8;
  *param_1 = uRam0000000113807ec0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  func_0x000107c6157c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar1);
  return;
}



/* Entry: 10352fcb4; end: 10352fcef;  */

void FUN_10352fcb4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f76f28;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f76f28,&UNK_10dbd7258);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10352fcf0; end: 10352fe2b;  */

void FUN_10352fcf0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_38 = unaff_x20[0x11];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



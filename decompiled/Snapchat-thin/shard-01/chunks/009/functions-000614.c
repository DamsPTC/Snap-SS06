/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101657e9c; end: 101657f6f;  */

int FUN_101657e9c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1e] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101657f70; end: 101657f97;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101657f70(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
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



/* Entry: 101657f98; end: 101658047;  */

undefined8 * FUN_101657f98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 101658048; end: 10165808b;  */

undefined8 * FUN_101658048(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10165808c; end: 10165812f;  */

int FUN_10165808c(int *param_1,int param_2)

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



/* Entry: 101658130; end: 1016581d7;  */

undefined8 * FUN_101658130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1016581d8; end: 10165821f;  */

undefined8 * FUN_1016581d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101658220; end: 1016582d3;  */

int FUN_101658220(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016582d4; end: 101658337;  */

/* WARNING: Possible PIC construction at 0x0001016582f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016582f4) */
/* WARNING: Removing unreachable block (ram,0x000101658304) */
/* WARNING: Removing unreachable block (ram,0x00010165830c) */
/* WARNING: Removing unreachable block (ram,0x000101658328) */
/* WARNING: Removing unreachable block (ram,0x00010165831c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1016582d4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101658338; end: 1016585c7;  */

undefined8 * FUN_101658338(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = param_2[2];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[6];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  uVar3 = param_2[9];
  if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[8];
    param_1[7] = param_2[7];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[8] = uVar2;
    param_1[9] = uVar3;
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    param_1[9] = param_2[9];
  }
  uVar3 = param_2[0xc];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar2 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xb] = uVar2;
    param_1[0xc] = uVar3;
  }
  else {
    uVar2 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar2;
    param_1[0xc] = param_2[0xc];
  }
  return param_1;
}



/* Entry: 1016585c8; end: 1016586bf;  */

undefined8 * FUN_1016585c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  uVar4 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar4);
  if ((ulong)param_1[9] >> 0x3c < 0xf) {
    uVar2 = param_2[9];
    if (uVar2 >> 0x3c < 0xf) {
      uVar1 = param_1[8];
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[9] = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_10165865c;
    }
    func_0x00010159d670(param_1 + 7);
  }
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  param_1[9] = param_2[9];
LAB_10165865c:
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar2 = param_2[0xc];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
      uVar1 = param_1[0xb];
      param_1[0xb] = param_2[0xb];
      param_1[0xc] = uVar2;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    FUN_101599dcc(param_1 + 10);
  }
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  param_1[0xc] = param_2[0xc];
  return param_1;
}



/* Entry: 1016586c0; end: 10165876f;  */

int FUN_1016586c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101658770; end: 10165879b;  */

void FUN_101658770(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 10165879c; end: 101658847;  */

undefined8 * FUN_10165879c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101658848; end: 10165888f;  */

undefined8 * FUN_101658848(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101658890; end: 101658927;  */

int FUN_101658890(int *param_1,int param_2)

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



/* Entry: 101658928; end: 101658957;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101658928(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101658958; end: 101658a2f;  */

undefined8 * FUN_101658958(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  param_1[2] = uVar1;
  uVar3 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar2,uVar3);
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  return param_1;
}



/* Entry: 101658a30; end: 101658a83;  */

undefined8 * FUN_101658a30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101658a84; end: 101658b23;  */

int FUN_101658a84(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101658b24; end: 101658b53;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101658b24(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(ulong *)(param_1 + 0x28);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x30) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x30) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 101658b54; end: 101658c43;  */

undefined8 * FUN_101658b54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  uVar1 = param_2[5];
  uVar3 = param_2[6];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[5] = uVar1;
  param_1[6] = uVar3;
  return param_1;
}



/* Entry: 101658c44; end: 101658c9f;  */

undefined8 * FUN_101658c44(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101658ca0; end: 101658d43;  */

int FUN_101658ca0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101658d44; end: 101658fc3;  */

void FUN_101658d44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcd70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d974bfc;
  func_0x000107c61520(&DAT_10d974bfc,&UNK_1103ee718);
  puRam0000000112dbcd70 = puVar1;
  return;
}



/* Entry: 101658fc4; end: 101659073;  */

void FUN_101658fc4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 101659074; end: 1016590e3;  */

void FUN_101659074(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,code *UNRECOVERED_JUMPTABLE)

{
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  (*UNRECOVERED_JUMPTABLE)();
  (*UNRECOVERED_JUMPTABLE)(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001016590e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_5,param_6);
  return;
}



/* Entry: 1016590e4; end: 10165912b;  */

void FUN_1016590e4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9755c0,0x18,2);
  uRam00000001138024d0 = uStack_38;
  uRam00000001138024c8 = uStack_40;
  uRam00000001138024e0 = uStack_28;
  uRam00000001138024d8 = uStack_30;
  uRam00000001138024f0 = uStack_18;
  uRam00000001138024e8 = uStack_20;
  return;
}



/* Entry: 10165912c; end: 1016591c3;  */

void FUN_10165912c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_101659180:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010165919c;
  pcVar3 = *(code **)(param_3 + 0x168);
  goto LAB_101659168;
code_r0x00010165919c:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x168);
LAB_101659168:
    (*pcVar3)();
  }
  goto LAB_101659180;
}



/* Entry: 1016591c4; end: 1016592b7;  */

void FUN_1016591c4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((uVar2 & 0xff000000000000) == 0) goto LAB_10165923c;
    }
    else {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
LAB_10165921c:
      if (lVar5 == lVar6) goto LAB_10165923c;
    }
    (**(code **)(param_3 + 0x78))(lVar1,uVar2,1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  else if (uVar4 == 2) {
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
    goto LAB_10165921c;
  }
LAB_10165923c:
  lVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_101659274;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_101659294;
  }
  else {
    if (uVar4 != 2) goto LAB_101659294;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_101659274:
    if (lVar5 == lVar6) goto LAB_101659294;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_101659294:
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 1016592b8; end: 101659307;  */

undefined8 FUN_1016592b8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112dbce08;
  func_0x0001000285a8(0x112dbce08,&UNK_10d975220);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101659308; end: 10165933f;  */

void FUN_101659308(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 101659340; end: 10165936f;  */

undefined1  [16] FUN_101659340(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101659370; end: 1016593a3;  */

void FUN_101659370(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1016593a4; end: 1016593b7;  */

undefined1  [16] FUN_1016593a4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1016593b4;
  return auVar1;
}



/* Entry: 1016593b8; end: 1016593df;  */

void FUN_1016593b8(void)

{
  FUN_10165912c();
  return;
}



/* Entry: 1016593e0; end: 1016593e3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016593e0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016593e4; end: 10165941b;  */

uint FUN_1016593e4(long param_1,long param_2)

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
  func_0x00010165b164();
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



/* Entry: 10165941c; end: 1016594bb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10165941c(undefined8 *param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  
  uVar12 = param_1[2];
  uVar1 = param_1[3];
  lVar25 = param_1[4];
  uVar17 = param_1[5];
  uVar21 = *unaff_x20;
  uVar23 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  pbVar11 = (byte *)unaff_x20[4];
  pbVar26 = (byte *)unaff_x20[5];
  FUN_100e25fcc(uVar21,unaff_x20[1],*param_1,param_1[1]);
  if (((uVar21 & 1) == 0) || (FUN_100e25fcc(uVar23,uVar2,uVar12,uVar1), (uVar23 & 1) == 0)) {
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
    uVar6 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar6 >> 0x1e;
    uVar7 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar7 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar6 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar8)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar7 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar8)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar8)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar8)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = (byte *)((long)register0x00000008 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar8)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar14 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar8)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar26 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar14,lVar25,uVar17
                     );
        pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar10;
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar5[1] = bVar29;
        auVar5[0] = bVar28;
        auVar5[2] = bVar30;
        auVar5[3] = bVar31;
        auVar5[4] = bVar32;
        auVar5[5] = bVar33;
        auVar5[6] = bVar34;
        auVar5[7] = bVar35;
        auVar5[8] = bVar36;
        auVar5[9] = bVar37;
        auVar5[10] = bVar38;
        auVar5[0xb] = bVar39;
        auVar5[0xc] = bVar40;
        auVar5[0xd] = bVar41;
        auVar5[0xe] = bVar42;
        auVar5[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar5,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar3[1] = bVar29;
      auVar3[0] = bVar28;
      auVar3[2] = bVar30;
      auVar3[3] = bVar31;
      auVar3[4] = bVar32;
      auVar3[5] = bVar33;
      auVar3[6] = bVar34;
      auVar3[7] = bVar35;
      auVar3[8] = bVar36;
      auVar3[9] = bVar37;
      auVar3[10] = bVar38;
      auVar3[0xb] = bVar39;
      auVar3[0xc] = bVar40;
      auVar3[0xd] = bVar41;
      auVar3[0xe] = bVar42;
      auVar3[0xf] = bVar43;
      auVar4[1] = bVar29;
      auVar4[0] = bVar28;
      auVar4[2] = bVar30;
      auVar4[3] = bVar31;
      auVar4[4] = bVar32;
      auVar4[5] = bVar33;
      auVar4[6] = bVar34;
      auVar4[7] = bVar35;
      auVar4[8] = bVar36;
      auVar4[9] = bVar37;
      auVar4[10] = bVar38;
      auVar4[0xb] = bVar39;
      auVar4[0xc] = bVar40;
      auVar4[0xd] = bVar41;
      auVar4[0xe] = bVar42;
      auVar4[0xf] = bVar43;
      auVar44 = NEON_ext(auVar3,auVar4,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
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



/* Entry: 1016594bc; end: 10165955b;  */

/* WARNING: Possible PIC construction at 0x000101659508: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101659518: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165950c) */
/* WARNING: Removing unreachable block (ram,0x00010165951c) */

void FUN_1016594bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbce10 != -1) {
    func_0x000107c61568(0x112dbce10,FUN_1016590e4);
  }
  uVar5 = uRam00000001138024f0;
  uVar4 = uRam00000001138024e8;
  uVar3 = uRam00000001138024e0;
  uVar2 = uRam00000001138024d8;
  uVar1 = uRam00000001138024d0;
  *param_1 = uRam00000001138024c8;
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



/* Entry: 10165955c; end: 101659597;  */

void FUN_10165955c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbce98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbce98,&UNK_10d975570);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101659598; end: 10165969b;  */

void FUN_101659598(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10165969c; end: 101659737;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10165969c(ulong *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
  long lVar27;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar43;
  undefined1 auVar44 [16];
  
  uVar21 = *param_1;
  uVar23 = param_1[2];
  uVar1 = param_1[3];
  pbVar11 = (byte *)param_1[4];
  pbVar26 = (byte *)param_1[5];
  uVar12 = param_2[2];
  uVar2 = param_2[3];
  lVar25 = param_2[4];
  uVar17 = param_2[5];
  FUN_100e25fcc(uVar21,param_1[1],*param_2,param_2[1]);
  if (((uVar21 & 1) == 0) || (FUN_100e25fcc(uVar23,uVar1,uVar12,uVar2), (uVar23 & 1) == 0)) {
    return (byte *)0x0;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar6 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar6 >> 0x1e;
    uVar7 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar7 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar6 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar8)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar7 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar8)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar8)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar8)();
        }
LAB_100e2608c:
        if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar21 < 1) goto LAB_100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar11;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar11 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar11 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar11 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar11 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar11 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar11 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar11 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
            pbVar14 = (byte *)((long)register0x00000008 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar8)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar14 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar8)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar8)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar14,lVar25,uVar17
                     );
        pbVar10 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
        auVar44[1] = bVar29;
        auVar44[0] = bVar28;
        auVar44[2] = bVar30;
        auVar44[3] = bVar31;
        auVar44[4] = bVar32;
        auVar44[5] = bVar33;
        auVar44[6] = bVar34;
        auVar44[7] = bVar35;
        auVar44[8] = bVar36;
        auVar44[9] = bVar37;
        auVar44[10] = bVar38;
        auVar44[0xb] = bVar39;
        auVar44[0xc] = bVar40;
        auVar44[0xd] = bVar41;
        auVar44[0xe] = bVar42;
        auVar44[0xf] = bVar43;
        auVar5[1] = bVar29;
        auVar5[0] = bVar28;
        auVar5[2] = bVar30;
        auVar5[3] = bVar31;
        auVar5[4] = bVar32;
        auVar5[5] = bVar33;
        auVar5[6] = bVar34;
        auVar5[7] = bVar35;
        auVar5[8] = bVar36;
        auVar5[9] = bVar37;
        auVar5[10] = bVar38;
        auVar5[0xb] = bVar39;
        auVar5[0xc] = bVar40;
        auVar5[0xd] = bVar41;
        auVar5[0xe] = bVar42;
        auVar5[0xf] = bVar43;
        auVar44 = NEON_ext(auVar44,auVar5,8,1);
        if (CONCAT17(bVar35 | auVar44[7],
                     CONCAT16(bVar34 | auVar44[6],
                              CONCAT15(bVar33 | auVar44[5],
                                       CONCAT14(bVar32 | auVar44[4],
                                                CONCAT13(bVar31 | auVar44[3],
                                                         CONCAT12(bVar30 | auVar44[2],
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
          lVar27 == 0)) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar14 != 2) {
          return (byte *)0x0;
        }
      }
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
      auVar3[1] = bVar29;
      auVar3[0] = bVar28;
      auVar3[2] = bVar30;
      auVar3[3] = bVar31;
      auVar3[4] = bVar32;
      auVar3[5] = bVar33;
      auVar3[6] = bVar34;
      auVar3[7] = bVar35;
      auVar3[8] = bVar36;
      auVar3[9] = bVar37;
      auVar3[10] = bVar38;
      auVar3[0xb] = bVar39;
      auVar3[0xc] = bVar40;
      auVar3[0xd] = bVar41;
      auVar3[0xe] = bVar42;
      auVar3[0xf] = bVar43;
      auVar4[1] = bVar29;
      auVar4[0] = bVar28;
      auVar4[2] = bVar30;
      auVar4[3] = bVar31;
      auVar4[4] = bVar32;
      auVar4[5] = bVar33;
      auVar4[6] = bVar34;
      auVar4[7] = bVar35;
      auVar4[8] = bVar36;
      auVar4[9] = bVar37;
      auVar4[10] = bVar38;
      auVar4[0xb] = bVar39;
      auVar4[0xc] = bVar40;
      auVar4[0xd] = bVar41;
      auVar4[0xe] = bVar42;
      auVar4[0xf] = bVar43;
      auVar44 = NEON_ext(auVar3,auVar4,8,1);
      lVar25 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
    unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101659738; end: 10165977f;  */

void FUN_101659738(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9755a0,0x1f,2);
  uRam0000000113802500 = uStack_38;
  uRam00000001138024f8 = uStack_40;
  uRam0000000113802510 = uStack_28;
  uRam0000000113802508 = uStack_30;
  uRam0000000113802520 = uStack_18;
  uRam0000000113802518 = uStack_20;
  return;
}



/* Entry: 101659780; end: 101659817;  */

void FUN_101659780(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1016597d4:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001016597f0;
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_1016597bc;
code_r0x0001016597f0:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x168);
LAB_1016597bc:
    (*pcVar3)();
  }
  goto LAB_1016597d4;
}



/* Entry: 101659818; end: 1016598d3;  */

void FUN_101659818(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 != 0) &&
     ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  lVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_101659890;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_1016598b0;
  }
  else {
    if (uVar4 != 2) goto LAB_1016598b0;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_101659890:
    if (lVar5 == lVar6) goto LAB_1016598b0;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_1016598b0:
  func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  return;
}



/* Entry: 1016598d4; end: 101659913;  */

void FUN_1016598d4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0xc000000000000000;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 101659914; end: 101659943;  */

undefined1  [16] FUN_101659914(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 101659944; end: 101659977;  */

void FUN_101659944(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 101659978; end: 10165998b;  */

undefined1  [16] FUN_101659978(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x101659988;
  return auVar1;
}



/* Entry: 10165998c; end: 1016599b3;  */

void FUN_10165998c(void)

{
  FUN_101659780();
  return;
}



/* Entry: 1016599b4; end: 1016599b7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016599b4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016599b8; end: 1016599ef;  */

uint FUN_1016599b8(long param_1,long param_2)

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
  func_0x00010165b124();
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



/* Entry: 1016599f0; end: 101659b0b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016599f0(long *param_1)

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
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar24;
  ulong unaff_x22;
  long lVar25;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar26;
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
  undefined1 auVar42 [16];
  
  if (*unaff_x20 == *param_1) {
    lVar23 = param_1[3];
    uVar15 = param_1[4];
    pbVar9 = (byte *)unaff_x20[3];
    pbVar24 = (byte *)unaff_x20[4];
    uVar19 = unaff_x20[1];
    FUN_100e25fcc(uVar19,unaff_x20[2],param_1[1],param_1[2]);
    if ((uVar19 & 1) != 0) {
      do {
        *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
        *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
        *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
        *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
        *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
        *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
        *(undefined8 *)((long)register0x00000008 + -0x58) =
             *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
        uVar4 = (uint)((ulong)pbVar24 >> 0x20);
        uVar17 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar15 >> 0x20);
        uVar20 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar9;
        pbVar12 = pbVar24;
        if ((ulong)pbVar24 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
              (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
          }
          else {
            iVar18 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar19 = (ulong)(iVar18 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar20 == 0) {
            uVar21 = uVar15 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar18 = (int)((ulong)lVar23 >> 0x20);
          if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar19 == (long)(iVar18 - (int)lVar23)) goto LAB_100e26094;
LAB_100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar17 == 2) {
            uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
            if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar19 = 0;
          if (uVar20 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar20 == 2) {
            uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
            if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar19 != uVar21) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar19 < 1) goto LAB_100e26128;
            if (uVar17 < 2) {
              if (uVar17 == 0) {
                *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
                *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
                *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
                *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
                *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
                *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
                *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
                *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                              (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar24;
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
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar17 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
              }
              lVar25 = *(long *)(pbVar9 + 0x10);
              unaff_x24 = *(byte **)(pbVar9 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar9;
              if (pbVar9 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar9 = pbVar9 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar9;
              unaff_x25 = pbVar24;
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
LAB_100e262a4:
            unaff_x20 = (long *)((ulong)pbVar24 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                          uVar15);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar15;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar19 == 0);
          }
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
          return pbVar8;
        }
        func_0x000107c60e78();
        *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
        *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
        *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
        *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
        *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar11 = *(byte **)pbVar8;
        pbVar9 = *(byte **)(pbVar8 + 8);
        pbVar22 = *(byte **)(pbVar8 + 0x18);
        bVar26 = pbVar8[0x28];
        pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar13 = pbVar9;
        if (bVar26 < 3) {
          if (bVar26 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar23 = *(long *)pbVar12;
              uVar10 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar23,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar26 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar16 = *(byte **)(pbVar12 + 0x10);
            lVar23 = *(long *)pbVar12;
            uVar10 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar23,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbVar13 = pbVar24;
            if ((pbVar9 == pbVar14) && (pbVar24 == pbVar16)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar16 = *(byte **)(pbVar12 + 8);
            lVar23 = *(long *)(pbVar12 + 0x18);
            if ((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
              if (lVar23 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar23);
              func_0x000107c61174();
              pbVar9 = pbVar22;
              func_0x000107c60118();
              func_0x000107c61170(pbVar22);
              func_0x000107c61170(lVar23);
              pbVar22 = pbVar9;
joined_r0x000100e266a4:
              if (((ulong)pbVar22 & 1) == 0) {
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
          )(pbVar11,pbVar13,pbVar14,pbVar16,0);
          return pbVar11;
        }
        lVar25 = *(long *)(pbVar8 + 0x20);
        if (bVar26 < 5) {
          if (bVar26 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)pbVar12;
            pbVar16 = *(byte **)(pbVar12 + 8);
            if (((pbVar11 == pbVar14) && (pbVar9 == pbVar16)) &&
               (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
               pbVar16 = *(byte **)(pbVar12 + 0x18),
               pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
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
          pbVar16 = *(byte **)(pbVar12 + 0x10);
          lVar23 = *(long *)(pbVar12 + 0x20);
          if (pbVar24 == (byte *)0x0) {
            if (pbVar16 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar14 = *(byte **)(pbVar12 + 8);
            pbVar11 = pbVar9;
            pbVar13 = pbVar24;
            if ((pbVar9 != pbVar14) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
          }
          if (lVar25 != 0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar26 != 5) {
          if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
              lVar25 == 0) && pbVar24 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar25 = *(long *)(pbVar12 + 0x20);
            lVar23 = *(long *)(pbVar12 + 0x18);
            bVar26 = pbVar12[8] | (byte)lVar23;
            bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
            bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
            bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
            bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
            bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
            bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
            bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
            bVar34 = pbVar12[0x10] | (byte)lVar25;
            bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
            bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
            bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
            bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
            bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
            bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
            bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
            auVar42[1] = bVar27;
            auVar42[0] = bVar26;
            auVar42[2] = bVar28;
            auVar42[3] = bVar29;
            auVar42[4] = bVar30;
            auVar42[5] = bVar31;
            auVar42[6] = bVar32;
            auVar42[7] = bVar33;
            auVar42[8] = bVar34;
            auVar42[9] = bVar35;
            auVar42[10] = bVar36;
            auVar42[0xb] = bVar37;
            auVar42[0xc] = bVar38;
            auVar42[0xd] = bVar39;
            auVar42[0xe] = bVar40;
            auVar42[0xf] = bVar41;
            auVar3[1] = bVar27;
            auVar3[0] = bVar26;
            auVar3[2] = bVar28;
            auVar3[3] = bVar29;
            auVar3[4] = bVar30;
            auVar3[5] = bVar31;
            auVar3[6] = bVar32;
            auVar3[7] = bVar33;
            auVar3[8] = bVar34;
            auVar3[9] = bVar35;
            auVar3[10] = bVar36;
            auVar3[0xb] = bVar37;
            auVar3[0xc] = bVar38;
            auVar3[0xd] = bVar39;
            auVar3[0xe] = bVar40;
            auVar3[0xf] = bVar41;
            auVar42 = NEON_ext(auVar42,auVar3,8,1);
            if (CONCAT17(bVar33 | auVar42[7],
                         CONCAT16(bVar32 | auVar42[6],
                                  CONCAT15(bVar31 | auVar42[5],
                                           CONCAT14(bVar30 | auVar42[4],
                                                    CONCAT13(bVar29 | auVar42[3],
                                                             CONCAT12(bVar28 | auVar42[2],
                                                                      CONCAT11(bVar27 | auVar42[1],
                                                                               bVar26 | auVar42[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
              lVar25 == 0)) {
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
          lVar25 = *(long *)(pbVar12 + 0x20);
          lVar23 = *(long *)(pbVar12 + 0x18);
          bVar26 = pbVar12[8] | (byte)lVar23;
          bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
          bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
          bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
          bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
          bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
          bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
          bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
          bVar34 = pbVar12[0x10] | (byte)lVar25;
          bVar35 = pbVar12[0x11] | (byte)((ulong)lVar25 >> 8);
          bVar36 = pbVar12[0x12] | (byte)((ulong)lVar25 >> 0x10);
          bVar37 = pbVar12[0x13] | (byte)((ulong)lVar25 >> 0x18);
          bVar38 = pbVar12[0x14] | (byte)((ulong)lVar25 >> 0x20);
          bVar39 = pbVar12[0x15] | (byte)((ulong)lVar25 >> 0x28);
          bVar40 = pbVar12[0x16] | (byte)((ulong)lVar25 >> 0x30);
          bVar41 = pbVar12[0x17] | (byte)((ulong)lVar25 >> 0x38);
          auVar1[1] = bVar27;
          auVar1[0] = bVar26;
          auVar1[2] = bVar28;
          auVar1[3] = bVar29;
          auVar1[4] = bVar30;
          auVar1[5] = bVar31;
          auVar1[6] = bVar32;
          auVar1[7] = bVar33;
          auVar1[8] = bVar34;
          auVar1[9] = bVar35;
          auVar1[10] = bVar36;
          auVar1[0xb] = bVar37;
          auVar1[0xc] = bVar38;
          auVar1[0xd] = bVar39;
          auVar1[0xe] = bVar40;
          auVar1[0xf] = bVar41;
          auVar2[1] = bVar27;
          auVar2[0] = bVar26;
          auVar2[2] = bVar28;
          auVar2[3] = bVar29;
          auVar2[4] = bVar30;
          auVar2[5] = bVar31;
          auVar2[6] = bVar32;
          auVar2[7] = bVar33;
          auVar2[8] = bVar34;
          auVar2[9] = bVar35;
          auVar2[10] = bVar36;
          auVar2[0xb] = bVar37;
          auVar2[0xc] = bVar38;
          auVar2[0xd] = bVar39;
          auVar2[0xe] = bVar40;
          auVar2[0xf] = bVar41;
          auVar42 = NEON_ext(auVar1,auVar2,8,1);
          lVar23 = CONCAT17(bVar33 | auVar42[7],
                            CONCAT16(bVar32 | auVar42[6],
                                     CONCAT15(bVar31 | auVar42[5],
                                              CONCAT14(bVar30 | auVar42[4],
                                                       CONCAT13(bVar29 | auVar42[3],
                                                                CONCAT12(bVar28 | auVar42[2],
                                                                         CONCAT11(bVar27 | auVar42[1
                                                  ],bVar26 | auVar42[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar23 = *(long *)(pbVar12 + 8);
        uVar15 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar25,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
        unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
        unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
        unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
        unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
        unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
        unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
        unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
        register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
      } while( true );
    }
  }
  return (byte *)0x0;
}



/* Entry: 101659b0c; end: 101659b47;  */

void FUN_101659b0c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbce88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbce88,&UNK_10d975568);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101659b48; end: 101659cb7;  */

void FUN_101659b48(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101659cb8; end: 101659cff;  */

void FUN_101659cb8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d975580,0x1d,2);
  uRam0000000113802530 = uStack_38;
  uRam0000000113802528 = uStack_40;
  uRam0000000113802540 = uStack_28;
  uRam0000000113802538 = uStack_30;
  uRam0000000113802550 = uStack_18;
  uRam0000000113802548 = uStack_20;
  return;
}



/* Entry: 101659d00; end: 101659dd3;  */

/* WARNING: Removing unreachable block (ram,0x000101659dd0) */

void FUN_101659d00(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        (**(code **)(param_3 + 0x70))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568e44();
        (*pcVar4)(unaff_x20 + 0x18,&UNK_1103ee9e8,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101659dd4; end: 101659e53;  */

void FUN_101659dd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x140))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_101659e54(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 101659e54; end: 101659ee3;  */

void FUN_101659e54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_68 = *(ulong *)(param_1 + 0x20);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568e44();
    (*pcVar1)(&uStack_70,2,&UNK_1103ee9e8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101659ee4; end: 101659f3b;  */

void FUN_101659ee4(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[3] = 0;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  return;
}



/* Entry: 101659f3c; end: 101659f6b;  */

undefined1  [16] FUN_101659f3c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101659f6c; end: 101659f9f;  */

void FUN_101659f6c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101659fa0; end: 101659fb3;  */

undefined1  [16] FUN_101659fa0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x101659fb0;
  return auVar1;
}



/* Entry: 101659fb4; end: 101659fc7;  */

void FUN_101659fb4(void)

{
  FUN_101659d00();
  return;
}



/* Entry: 101659fc8; end: 10165a007;  */

void FUN_101659fc8(void)

{
  FUN_101659dd4();
  return;
}



/* Entry: 10165a008; end: 10165a00b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10165a008(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165a00c; end: 10165a043;  */

uint FUN_10165a00c(long param_1,long param_2)

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
  FUN_10165b0e4();
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



/* Entry: 10165a044; end: 10165a09b;  */

uint FUN_10165a044(undefined8 *param_1)

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
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_10165a364(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10165a09c; end: 10165a13b;  */

/* WARNING: Possible PIC construction at 0x00010165a0e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165a0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165a0ec) */
/* WARNING: Removing unreachable block (ram,0x00010165a0fc) */

void FUN_10165a09c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbce30 != -1) {
    func_0x000107c61568(0x112dbce30,FUN_101659cb8);
  }
  uVar5 = uRam0000000113802550;
  uVar4 = uRam0000000113802548;
  uVar3 = uRam0000000113802540;
  uVar2 = uRam0000000113802538;
  uVar1 = uRam0000000113802530;
  *param_1 = uRam0000000113802528;
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



/* Entry: 10165a13c; end: 10165a177;  */

void FUN_10165a13c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbce78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbce78,&UNK_10d975560);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10165a178; end: 10165a28b;  */

void FUN_10165a178(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
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



/* Entry: 10165a28c; end: 10165a363;  */

uint FUN_10165a28c(undefined8 *param_1,undefined8 *param_2)

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
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_10165a364(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 10165a364; end: 10165a5fb;  */

uint FUN_10165a364(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long lVar16;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lVar4 = *param_1;
  lVar6 = *param_2;
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 == *(long *)(lVar6 + 0x10)) {
    if (lVar3 != 0 && lVar4 != lVar6) {
      plVar5 = (long *)(lVar4 + 0x20);
      plVar7 = (long *)(lVar6 + 0x20);
      do {
        if (*plVar5 != *plVar7) goto LAB_10165a5d4;
        lVar3 = lVar3 + -1;
        plVar5 = plVar5 + 1;
        plVar7 = plVar7 + 1;
      } while (lVar3 != 0);
    }
    uVar12 = param_1[4];
    uVar8 = param_1[3];
    lVar3 = param_1[6];
    uVar14 = param_1[5];
    lVar4 = param_1[8];
    uVar9 = param_1[7];
    uVar13 = param_2[4];
    uVar10 = param_2[3];
    lVar16 = param_2[6];
    uVar15 = param_2[5];
    lVar6 = param_2[8];
    uVar11 = param_2[7];
    uStack_d0 = uVar10;
    uStack_c8 = uVar13;
    uStack_c0 = uVar15;
    lStack_b8 = lVar16;
    uStack_b0 = uVar11;
    lStack_a8 = lVar6;
    uStack_a0 = uVar8;
    uStack_98 = uVar12;
    uStack_90 = uVar14;
    lStack_88 = lVar3;
    uStack_80 = uVar9;
    lStack_78 = lVar4;
    if (uVar12 >> 0x3c < 0xf) {
      if (0xe < uVar13 >> 0x3c) goto LAB_10165a488;
      FUN_1016592b8(&uStack_a0,auStack_100);
      FUN_1016592b8(&uStack_d0,auStack_100);
      uVar2 = uVar8;
      FUN_100e25fcc(uVar8,uVar12,uVar10,uVar13);
      if (((uVar2 & 1) == 0) ||
         (uVar2 = uVar14, FUN_100e25fcc(uVar14,lVar3,uVar15,lVar16), (uVar2 & 1) == 0)) {
        FUN_101659074(uVar10,uVar13,uVar15,lVar16,uVar11,lVar6,&SUB_10006c090);
      }
      else {
        uVar2 = uVar9;
        FUN_100e25fcc(uVar9,lVar4,uVar11,lVar6);
        FUN_101659074(uVar10,uVar13,uVar15,lVar16,uVar11,lVar6,&SUB_10006c090);
        if ((uVar2 & 1) != 0) goto LAB_10165a448;
      }
    }
    else {
      if (0xe < uVar13 >> 0x3c) {
        FUN_1016592b8(&uStack_a0,auStack_100);
        FUN_1016592b8(&uStack_d0,auStack_100);
LAB_10165a448:
        FUN_101659074(uVar8,uVar12,uVar14,lVar3,uVar9,lVar4,&SUB_10006c090);
        lVar3 = param_1[1];
        FUN_100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
        uVar1 = (uint)lVar3;
        goto LAB_10165a5d8;
      }
LAB_10165a488:
      FUN_1016592b8(&uStack_a0,auStack_100);
      FUN_1016592b8(&uStack_d0,auStack_100);
      FUN_101659074(uVar8,uVar12,uVar14,lVar3,uVar9,lVar4,&SUB_10006c090);
      uVar8 = uVar10;
      uVar12 = uVar13;
      uVar14 = uVar15;
      lVar3 = lVar16;
      uVar9 = uVar11;
      lVar4 = lVar6;
    }
    FUN_101659074(uVar8,uVar12,uVar14,lVar3,uVar9,lVar4,&SUB_10006c090);
  }
LAB_10165a5d4:
  uVar1 = 0;
LAB_10165a5d8:
  return uVar1 & 1;
}



/* Entry: 10165a5fc; end: 10165a63b;  */

void FUN_10165a5fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975448;
  func_0x000107c61520(&UNK_10d975448,&UNK_1103eeaf8);
  puRam0000000112dbce38 = puVar1;
  return;
}



/* Entry: 10165a63c; end: 10165a65f;  */

void FUN_10165a63c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165a660();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165a660; end: 10165a69f;  */

void FUN_10165a660(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975270;
  func_0x000107c61520(&UNK_10d975270,&UNK_1103ee9e8);
  puRam0000000112dbce40 = puVar1;
  return;
}



/* Entry: 10165a6a0; end: 10165a6b7;  */

void FUN_10165a6a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10165a2e4)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101568e44)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165a6b8; end: 10165a6f7;  */

void FUN_10165a6b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9752d8;
  func_0x000107c61520(&UNK_10d9752d8,&UNK_1103ee9e8);
  puRam0000000112dbce48 = puVar1;
  return;
}



/* Entry: 10165a6f8; end: 10165a71b;  */

void FUN_10165a6f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165a71c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165a71c; end: 10165a75b;  */

void FUN_10165a71c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975348;
  func_0x000107c61520(&UNK_10d975348,&UNK_1103eea70);
  puRam0000000112dbce50 = puVar1;
  return;
}



/* Entry: 10165a75c; end: 10165a773;  */

void FUN_10165a75c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10165a324)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10164aef4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165a774; end: 10165a7b3;  */

void FUN_10165a774(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9753b0;
  func_0x000107c61520(&UNK_10d9753b0,&UNK_1103eea70);
  puRam0000000112dbce58 = puVar1;
  return;
}



/* Entry: 10165a7b4; end: 10165a7d7;  */

void FUN_10165a7b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165a7d8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10165a7d8; end: 10165a817;  */

void FUN_10165a7d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975420;
  func_0x000107c61520(&UNK_10d975420,&UNK_1103eeaf8);
  puRam0000000112dbce60 = puVar1;
  return;
}



/* Entry: 10165a818; end: 10165a82b;  */

void FUN_10165a818(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165a5fc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10165a85c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165a82c; end: 10165a85b;  */

void FUN_10165a82c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165a85c; end: 10165a89b;  */

void FUN_10165a85c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9753d8;
  func_0x000107c61520(&DAT_10d9753d8,&UNK_1103eeaf8);
  puRam0000000112dbce68 = puVar1;
  return;
}



/* Entry: 10165a89c; end: 10165a89f;  */

void FUN_10165a89c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975488;
  func_0x000107c61520(&UNK_10d975488,&UNK_1103eeaf8);
  puRam0000000112dbce70 = puVar1;
  return;
}



/* Entry: 10165a8a0; end: 10165a8df;  */

void FUN_10165a8a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbce70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d975488;
  func_0x000107c61520(&UNK_10d975488,&UNK_1103eeaf8);
  puRam0000000112dbce70 = puVar1;
  return;
}



/* Entry: 10165a8e0; end: 10165a913;  */

/* WARNING: Possible PIC construction at 0x00010165a8f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165a8fc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10165a8e0(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 10165a914; end: 10165a9fb;  */

undefined8 * FUN_10165a914(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar2 = param_2[5];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[4] = uVar1;
  param_1[5] = uVar2;
  return param_1;
}



/* Entry: 10165a9fc; end: 10165aa53;  */

undefined8 * FUN_10165a9fc(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10165aa54; end: 10165ab13;  */

int FUN_10165aa54(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10165ab14; end: 10165ab3f;  */

/* WARNING: Possible PIC construction at 0x00010165ab2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165ab30) */

void FUN_10165ab14(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*(undefined8 *)(param_1 + 8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10165ab40; end: 10165ac07;  */

undefined8 * FUN_10165ab40(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 10165ac08; end: 10165ac57;  */

undefined8 * FUN_10165ac08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,param_1[2]);
  uVar2 = param_2[4];
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  param_1[4] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 10165ac58; end: 10165ad13;  */

int FUN_10165ac58(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10165ad14; end: 10165ad6f;  */

/* WARNING: Possible PIC construction at 0x00010165ad30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010165ad5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165ad34) */
/* WARNING: Removing unreachable block (ram,0x00010165ad50) */
/* WARNING: Removing unreachable block (ram,0x00010165ad44) */
/* WARNING: Removing unreachable block (ram,0x00010165ad60) */

void FUN_10165ad14(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10165ad70; end: 10165af83;  */

undefined8 * FUN_10165ad70(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[3];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[3] = uVar3;
    param_1[4] = uVar1;
    uVar3 = param_2[5];
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[5] = uVar3;
    param_1[6] = uVar2;
    uVar3 = param_2[7];
    uVar2 = param_2[8];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[7] = uVar3;
    param_1[8] = uVar2;
  }
  else {
    uVar3 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar3;
    uVar3 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
  }
  return param_1;
}



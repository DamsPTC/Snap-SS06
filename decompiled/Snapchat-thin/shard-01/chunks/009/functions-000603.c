/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10162bc30; end: 10162bc43;  */

void FUN_10162bc30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162ba60();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101618540)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162bc44; end: 10162bc73;  */

void FUN_10162bc44(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162bc74; end: 10162bc77;  */

void FUN_10162bc74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f270;
  func_0x000107c61520(&UNK_10d96f270,&UNK_1103ea908);
  puRam0000000112dbab10 = puVar1;
  return;
}



/* Entry: 10162bc78; end: 10162bcb7;  */

void FUN_10162bc78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f270;
  func_0x000107c61520(&UNK_10d96f270,&UNK_1103ea908);
  puRam0000000112dbab10 = puVar1;
  return;
}



/* Entry: 10162bcb8; end: 10162bdb7;  */

long FUN_10162bcb8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10162bdb8; end: 10162c787;  */

undefined8 * FUN_10162bdb8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  func_0x00010006c00c(uVar3,uVar4);
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  uVar2 = param_2[5];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[4] = uVar3;
    param_1[5] = uVar2;
    uVar2 = param_2[8];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      uVar3 = param_2[7];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[7] = uVar3;
      param_1[8] = uVar2;
    }
    else {
      uVar3 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar3;
      param_1[8] = param_2[8];
    }
    uVar2 = param_2[0xb];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar3 = param_2[10];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[10] = uVar3;
      param_1[0xb] = uVar2;
    }
    else {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      param_1[0xb] = param_2[0xb];
    }
  }
  else {
    uVar3 = param_2[4];
    uVar5 = param_2[7];
    uVar4 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    param_1[7] = uVar5;
    param_1[6] = uVar4;
    uVar3 = param_2[8];
    uVar5 = param_2[0xb];
    uVar4 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar3;
    param_1[0xb] = uVar5;
    param_1[10] = uVar4;
  }
  cVar1 = *(char *)(param_2 + 0xc);
  if (cVar1 == '\x02') {
    uVar3 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar3;
    param_1[0xe] = param_2[0xe];
  }
  else {
    *(char *)(param_1 + 0xc) = cVar1;
    uVar3 = param_2[0xd];
    uVar4 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0xd] = uVar3;
    param_1[0xe] = uVar4;
  }
  uVar2 = param_2[0x10];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[0xf];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar2;
    uVar2 = param_2[0x13];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      uVar3 = param_2[0x12];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x12] = uVar3;
      param_1[0x13] = uVar2;
    }
    else {
      uVar3 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar3;
      param_1[0x13] = param_2[0x13];
    }
    uVar2 = param_2[0x16];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
      uVar3 = param_2[0x15];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x15] = uVar3;
      param_1[0x16] = uVar2;
    }
    else {
      uVar3 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar3;
      param_1[0x16] = param_2[0x16];
    }
  }
  else {
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    uVar3 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar3;
  }
  return param_1;
}



/* Entry: 10162c788; end: 10162c907;  */

int FUN_10162c788(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x2e] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x18)) {
    uVar1 = (*(byte *)(param_1 + 0x18) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10162c908; end: 10162c987;  */

void FUN_10162c908(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96f1dc;
  func_0x000107c61520(&DAT_10d96f1dc,&UNK_1103ea908);
  puRam0000000112dbab20 = puVar1;
  return;
}



/* Entry: 10162c988; end: 10162c9cb;  */

void FUN_10162c988(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10162c9cc; end: 10162ca0b;  */

void FUN_10162c9cc(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbab78;
  func_0x0001000285a8(0x112dbab78,&UNK_10d96f420);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10162ca0c; end: 10162ca47;  */

void FUN_10162ca0c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 2;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10162ca48; end: 10162cb27;  */

void FUN_10162ca48(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  uVar1 = (ulong)(uVar3 != 0);
  if ((char)uVar2 != '\x01') {
    uVar1 = uVar3;
  }
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162cb28; end: 10162cb63;  */

bool FUN_10162cb28(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 10162cb64; end: 10162cbab;  */

void FUN_10162cb64(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f6c0,0x11,2);
  uRam0000000113801b60 = uStack_38;
  uRam0000000113801b58 = uStack_40;
  uRam0000000113801b70 = uStack_28;
  uRam0000000113801b68 = uStack_30;
  uRam0000000113801b80 = uStack_18;
  uRam0000000113801b78 = uStack_20;
  return;
}



/* Entry: 10162cbac; end: 10162cc5f;  */

/* WARNING: Removing unreachable block (ram,0x00010162cc5c) */

void FUN_10162cbac(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        FUN_10162cd04();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10162cc60; end: 10162cd03;  */

void FUN_10162cc60(undefined8 param_1,long param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  long lStack_60;
  undefined1 uStack_58;
  
  if (param_2 != 0) {
    pcVar2 = *(code **)(param_7 + 0x80);
    uVar1 = param_1;
    lStack_60 = param_2;
    uStack_58 = param_3;
    FUN_10162cd04();
    (*pcVar2)(&lStack_60,1,&UNK_1103eac70,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 10162cd04; end: 10162cd43;  */

void FUN_10162cd04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96f428;
  func_0x000107c61520(&DAT_10d96f428,&UNK_1103eac70);
  puRam0000000112dbab88 = puVar1;
  return;
}



/* Entry: 10162cd44; end: 10162cd83;  */

void FUN_10162cd44(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 10162cd84; end: 10162cdb3;  */

undefined1  [16] FUN_10162cd84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10162cdb4; end: 10162cde7;  */

void FUN_10162cdb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10162cde8; end: 10162cdfb;  */

undefined1  [16] FUN_10162cde8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10162cdf8;
  return auVar1;
}



/* Entry: 10162cdfc; end: 10162ce37;  */

void FUN_10162cdfc(void)

{
  FUN_10162cbac();
  return;
}



/* Entry: 10162ce38; end: 10162ce3b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10162ce38(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10162ce3c; end: 10162ce73;  */

uint FUN_10162ce3c(long param_1,long param_2)

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
  FUN_10162d6d4();
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



/* Entry: 10162ce74; end: 10162cecb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10162ce74(ulong *param_1)

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
  pbVar9 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  uVar20 = (ulong)(*unaff_x20 != 0);
  if ((char)unaff_x20[1] != '\x01') {
    uVar20 = *unaff_x20;
  }
  if ((char)param_1[1] == '\x01') {
    if (*param_1 == 0) {
      if (uVar20 == 0) goto FUN_100e25fcc;
    }
    else if (uVar20 == 1) {
FUN_100e25fcc:
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
              (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, uVar14 != 0 || (uVar16 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
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
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar21 == 0) {
            uVar22 = uVar16 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar19 = (int)(uVar14 >> 0x20);
          if (SBORROW4(iVar19,(int)uVar14)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar20 == (long)(iVar19 - (int)uVar14)) goto LAB_100e26094;
LAB_100e26154:
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
          if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar21 == 2) {
            uVar22 = *(long *)(uVar14 + 0x18) - *(long *)(uVar14 + 0x10);
            if (SBORROW8(*(long *)(uVar14 + 0x18),*(long *)(uVar14 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
LAB_100e2608c:
            if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
            if ((long)uVar20 < 1) goto LAB_100e26128;
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
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
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
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
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
LAB_100e262a4:
            unaff_x20 = (ulong *)((ulong)pbVar25 & 0x3fffffffffffffff);
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,uVar14,
                          uVar16);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar16;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar20 == 0);
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
        *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar14 = *(ulong *)(pbVar12 + 8);
        uVar16 = *(ulong *)(pbVar12 + 0x10);
        lVar24 = *(long *)pbVar12;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
  }
  else if (uVar20 == *param_1) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10162cecc; end: 10162cf6b;  */

/* WARNING: Possible PIC construction at 0x00010162cf18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162cf28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162cf1c) */
/* WARNING: Removing unreachable block (ram,0x00010162cf2c) */

void FUN_10162cecc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbab80 != -1) {
    func_0x000107c61568(0x112dbab80,FUN_10162cb64);
  }
  uVar5 = uRam0000000113801b80;
  uVar4 = uRam0000000113801b78;
  uVar3 = uRam0000000113801b70;
  uVar2 = uRam0000000113801b68;
  uVar1 = uRam0000000113801b60;
  *param_1 = uRam0000000113801b58;
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



/* Entry: 10162cf6c; end: 10162cfa7;  */

void FUN_10162cf6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbabd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbabd8,&UNK_10d96f680);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10162cfa8; end: 10162d0bb;  */

void FUN_10162cfa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = *(undefined1 *)(unaff_x20 + 1);
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162d0bc; end: 10162d11f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10162d0bc(ulong *param_1,ulong *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
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
  
  pbVar11 = (byte *)param_1[2];
  pbVar13 = (byte *)param_1[3];
  uVar15 = param_2[2];
  uVar17 = param_2[3];
  uVar21 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar21 = *param_1;
  }
  if ((char)param_2[1] == '\x01') {
    if (*param_2 == 0) {
      if (uVar21 == 0) goto FUN_100e25fcc;
    }
    else if (uVar21 == 1) {
FUN_100e25fcc:
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
        uVar4 = (uint)((ulong)pbVar13 >> 0x20);
        uVar19 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar22 = uVar5 >> 0x1e;
        iVar7 = (int)pbVar11;
        pbVar12 = pbVar13;
        if ((ulong)pbVar13 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar11 != (byte *)0x0) || (pbVar13 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, uVar15 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar19 == 0) {
            uVar21 = (ulong)pbVar13 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar11 >> 0x20);
            if (SBORROW4(iVar20,iVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar7);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar22 == 0) {
            uVar23 = uVar17 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar20 = (int)(uVar15 >> 0x20);
          if (SBORROW4(iVar20,(int)uVar15)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)uVar15)) goto LAB_100e26094;
LAB_100e26154:
          pbVar8 = (byte *)0x0;
        }
        else {
          if (uVar19 == 2) {
            uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
            if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
          if (uVar22 == 2) {
            uVar23 = *(long *)(uVar15 + 0x18) - *(long *)(uVar15 + 0x10);
            if (SBORROW8(*(long *)(uVar15 + 0x18),*(long *)(uVar15 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
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
                *(char *)((long)register0x00000008 + -0x68) = (char)pbVar13;
                *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar13 >> 8);
                *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar13 >> 0x10);
                *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar13 >> 0x18);
                *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar13 >> 0x20);
                *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar13 >> 0x28);
                pbVar12 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar13 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                              (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar7;
              unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar6)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar11 = (byte *)0x0;
              }
              else {
                pbVar12 = pbVar11;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar12);
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar12) {
                    pbVar12 = unaff_x23;
                  }
                  pbVar12 = pbVar12 + (long)pbVar11;
                  goto LAB_100e262a4;
                }
              }
              pbVar12 = (byte *)0x0;
            }
            else {
              if (uVar19 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar12 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
              }
              lVar25 = *(long *)(pbVar11 + 0x10);
              unaff_x24 = *(byte **)(pbVar11 + 0x18);
              func_0x000107c5ec30();
              pbVar12 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar12)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar11 = pbVar11 + (lVar25 - (long)pbVar12);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              unaff_x25 = pbVar13;
              if (pbVar11 == (byte *)0x0) {
                pbVar12 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar12) {
                  pbVar12 = unaff_x23;
                }
                pbVar12 = pbVar12 + (long)pbVar11;
              }
            }
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar13 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar11,pbVar12,uVar15,
                          uVar17);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar17;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar21 == 0);
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
        *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
        *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
        *(undefined1 **)((long)register0x00000008 + -0x90) =
             (undefined1 *)((long)register0x00000008 + -0x10);
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar10 = *(byte **)pbVar8;
        pbVar11 = *(byte **)(pbVar8 + 8);
        pbVar24 = *(byte **)(pbVar8 + 0x18);
        bVar27 = pbVar8[0x28];
        pbVar13 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbVar14 = pbVar11;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar12[0x28] == 0) {
              lVar25 = *(long *)pbVar12;
              uVar9 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar10,lVar25,uVar9);
              return (byte *)(ulong)((uint)pbVar10 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar12[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar18 = *(byte **)(pbVar12 + 0x10);
            lVar25 = *(long *)pbVar12;
            uVar9 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar25,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 == pbVar16) && (pbVar13 == pbVar18)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar12[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            lVar25 = *(long *)(pbVar12 + 0x18);
            if ((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) {
              if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
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
          )(pbVar10,pbVar14,pbVar16,pbVar18,0);
          return pbVar10;
        }
        lVar26 = *(long *)(pbVar8 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar12[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar12;
            pbVar18 = *(byte **)(pbVar12 + 8);
            if (((pbVar10 == pbVar16) && (pbVar11 == pbVar18)) &&
               (pbVar10 = pbVar13, pbVar14 = pbVar24, pbVar16 = *(byte **)(pbVar12 + 0x10),
               pbVar18 = *(byte **)(pbVar12 + 0x18),
               pbVar13 == *(byte **)(pbVar12 + 0x10) && pbVar24 == *(byte **)(pbVar12 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar12[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar12 != ((uint)pbVar10 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar12 + 0x10);
          lVar25 = *(long *)(pbVar12 + 0x20);
          if (pbVar13 == (byte *)0x0) {
            if (pbVar18 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar18 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar12 + 8);
            pbVar10 = pbVar11;
            pbVar14 = pbVar13;
            if ((pbVar11 != pbVar16) || (pbVar13 != pbVar18)) goto code_r0x000107c605b8;
          }
          if (lVar26 != 0) {
            if (lVar25 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar24 == *(byte **)(pbVar12 + 0x18)) && (lVar26 == lVar25)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar24,lVar26,*(byte **)(pbVar12 + 0x18),lVar25,0);
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar25 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if (bVar27 != 5) {
          if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
              lVar26 == 0) && pbVar13 == (byte *)0x0) {
            if (pbVar12[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar26 = *(long *)(pbVar12 + 0x20);
            lVar25 = *(long *)(pbVar12 + 0x18);
            bVar27 = pbVar12[8] | (byte)lVar25;
            bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
            bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
            bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
            bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
            bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
            bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
            bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar12 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar10 == (byte *)0x1) &&
             (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
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
          lVar25 = *(long *)(pbVar12 + 0x18);
          bVar27 = pbVar12[8] | (byte)lVar25;
          bVar28 = pbVar12[9] | (byte)((ulong)lVar25 >> 8);
          bVar29 = pbVar12[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar30 = pbVar12[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar31 = pbVar12[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar32 = pbVar12[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar33 = pbVar12[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar34 = pbVar12[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
          lVar25 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar12[0x28] != 5) {
          return (byte *)0x0;
        }
        uVar15 = *(ulong *)(pbVar12 + 8);
        uVar17 = *(ulong *)(pbVar12 + 0x10);
        lVar25 = *(long *)pbVar12;
        uVar9 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar10,lVar25,uVar9);
        if (((ulong)pbVar10 & 1) == 0) {
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
  }
  else if (uVar21 == *param_2) goto FUN_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 10162d120; end: 10162d167;  */

void FUN_10162d120(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f690,0x2b,2);
  uRam0000000113801b90 = uStack_38;
  uRam0000000113801b88 = uStack_40;
  uRam0000000113801ba0 = uStack_28;
  uRam0000000113801b98 = uStack_30;
  uRam0000000113801bb0 = uStack_18;
  uRam0000000113801ba8 = uStack_20;
  return;
}



/* Entry: 10162d168; end: 10162d207;  */

/* WARNING: Possible PIC construction at 0x00010162d1b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162d1c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162d1b8) */
/* WARNING: Removing unreachable block (ram,0x00010162d1c8) */

void FUN_10162d168(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbab98 != -1) {
    func_0x000107c61568(0x112dbab98,FUN_10162d120);
  }
  uVar5 = uRam0000000113801bb0;
  uVar4 = uRam0000000113801ba8;
  uVar3 = uRam0000000113801ba0;
  uVar2 = uRam0000000113801b98;
  uVar1 = uRam0000000113801b90;
  *param_1 = uRam0000000113801b88;
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



/* Entry: 10162d208; end: 10162d247;  */

void FUN_10162d208(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbab90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f598;
  func_0x000107c61520(&UNK_10d96f598,&UNK_1103eabd8);
  puRam0000000112dbab90 = puVar1;
  return;
}



/* Entry: 10162d248; end: 10162d25b;  */

void FUN_10162d248(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162d25c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10162d29c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162d25c; end: 10162d2db;  */

void FUN_10162d25c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f4c0;
  func_0x000107c61520(&UNK_10d96f4c0,&UNK_1103eac70);
  puRam0000000112dbaba0 = puVar1;
  return;
}



/* Entry: 10162d2dc; end: 10162d2df;  */

void FUN_10162d2dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbabb0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbabb8;
  func_0x00010002969c(0x112dbabb8,&UNK_10d96f448);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbabb0 = puVar2;
  return;
}



/* Entry: 10162d2e0; end: 10162d32f;  */

void FUN_10162d2e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbabb0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbabb8;
  func_0x00010002969c(0x112dbabb8,&UNK_10d96f448);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbabb0 = puVar2;
  return;
}



/* Entry: 10162d330; end: 10162d333;  */

void FUN_10162d330(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbabc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f500;
  func_0x000107c61520(&UNK_10d96f500,&UNK_1103eac70);
  puRam0000000112dbabc0 = puVar1;
  return;
}



/* Entry: 10162d334; end: 10162d373;  */

void FUN_10162d334(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbabc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f500;
  func_0x000107c61520(&UNK_10d96f500,&UNK_1103eac70);
  puRam0000000112dbabc0 = puVar1;
  return;
}



/* Entry: 10162d374; end: 10162d397;  */

void FUN_10162d374(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162d398();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10162d398; end: 10162d3d7;  */

void FUN_10162d398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbabc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f570;
  func_0x000107c61520(&UNK_10d96f570,&UNK_1103eabd8);
  puRam0000000112dbabc8 = puVar1;
  return;
}



/* Entry: 10162d3d8; end: 10162d3eb;  */

void FUN_10162d3d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162d208();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016184c0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162d3ec; end: 10162d41b;  */

void FUN_10162d3ec(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162d41c; end: 10162d41f;  */

void FUN_10162d41c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbabd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f5d8;
  func_0x000107c61520(&UNK_10d96f5d8,&UNK_1103eabd8);
  puRam0000000112dbabd0 = puVar1;
  return;
}



/* Entry: 10162d420; end: 10162d45f;  */

void FUN_10162d420(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbabd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f5d8;
  func_0x000107c61520(&UNK_10d96f5d8,&UNK_1103eabd8);
  puRam0000000112dbabd0 = puVar1;
  return;
}



/* Entry: 10162d460; end: 10162d48b;  */

long FUN_10162d460(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10162d48c; end: 10162d497;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10162d48c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
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



/* Entry: 10162d498; end: 10162d537;  */

undefined8 * FUN_10162d498(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10162d538; end: 10162d57f;  */

undefined8 * FUN_10162d538(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10162d580; end: 10162d6d3;  */

int FUN_10162d580(int *param_1,uint param_2)

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



/* Entry: 10162d6d4; end: 10162d713;  */

void FUN_10162d6d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbabe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96f544;
  func_0x000107c61520(&DAT_10d96f544,&UNK_1103eabd8);
  puRam0000000112dbabe0 = puVar1;
  return;
}



/* Entry: 10162d714; end: 10162d723;  */

void FUN_10162d714(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10162d724; end: 10162d753;  */

void FUN_10162d724(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_10162d984();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10162d754; end: 10162d75b;  */

undefined8 FUN_10162d754(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 10162d75c; end: 10162d7cf;  */

void FUN_10162d75c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbac60;
  func_0x0001000285a8(0x112dbac60,&UNK_10d96f6e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10162d7d0; end: 10162d7db;  */

void FUN_10162d7d0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 10162d7dc; end: 10162d887;  */

void FUN_10162d7dc(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162d888; end: 10162d89b;  */

bool FUN_10162d888(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10162d89c; end: 10162d8e3;  */

void FUN_10162d89c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f850,0x32,2);
  uRam0000000113801bc0 = uStack_38;
  uRam0000000113801bb8 = uStack_40;
  uRam0000000113801bd0 = uStack_28;
  uRam0000000113801bc8 = uStack_30;
  uRam0000000113801be0 = uStack_18;
  uRam0000000113801bd8 = uStack_20;
  return;
}



/* Entry: 10162d8e4; end: 10162d983;  */

/* WARNING: Possible PIC construction at 0x00010162d930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162d940: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162d934) */
/* WARNING: Removing unreachable block (ram,0x00010162d944) */

void FUN_10162d8e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbac68 != -1) {
    func_0x000107c61568(0x112dbac68,FUN_10162d89c);
  }
  uVar5 = uRam0000000113801be0;
  uVar4 = uRam0000000113801bd8;
  uVar3 = uRam0000000113801bd0;
  uVar2 = uRam0000000113801bc8;
  uVar1 = uRam0000000113801bc0;
  *param_1 = uRam0000000113801bb8;
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



/* Entry: 10162d984; end: 10162d98f;  */

void FUN_10162d984(void)

{
  return;
}



/* Entry: 10162d990; end: 10162d9bb;  */

void FUN_10162d990(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162d9bc();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010162d9fc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162d9bc; end: 10162da3b;  */

void FUN_10162d9bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbac70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f780;
  func_0x000107c61520(&UNK_10d96f780,&UNK_1103eae20);
  puRam0000000112dbac70 = puVar1;
  return;
}



/* Entry: 10162da3c; end: 10162da3f;  */

void FUN_10162da3c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbac80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbac88;
  func_0x00010002969c(0x112dbac88,&UNK_10d96f708);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbac80 = puVar2;
  return;
}



/* Entry: 10162da40; end: 10162da8f;  */

void FUN_10162da40(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbac80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbac88;
  func_0x00010002969c(0x112dbac88,&UNK_10d96f708);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbac80 = puVar2;
  return;
}



/* Entry: 10162da90; end: 10162da93;  */

void FUN_10162da90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbac90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f7c0;
  func_0x000107c61520(&UNK_10d96f7c0,&UNK_1103eae20);
  puRam0000000112dbac90 = puVar1;
  return;
}



/* Entry: 10162da94; end: 10162dad3;  */

void FUN_10162da94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbac90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f7c0;
  func_0x000107c61520(&UNK_10d96f7c0,&UNK_1103eae20);
  puRam0000000112dbac90 = puVar1;
  return;
}



/* Entry: 10162dad4; end: 10162db97;  */

int FUN_10162dad4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10162db98; end: 10162dbdf;  */

void FUN_10162db98(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96f9d0,0x21,2);
  uRam0000000113801bf0 = uStack_38;
  uRam0000000113801be8 = uStack_40;
  uRam0000000113801c00 = uStack_28;
  uRam0000000113801bf8 = uStack_30;
  uRam0000000113801c10 = uStack_18;
  uRam0000000113801c08 = uStack_20;
  return;
}



/* Entry: 10162dbe0; end: 10162dcb3;  */

/* WARNING: Removing unreachable block (ram,0x00010162dcb0) */

void FUN_10162dbe0(undefined8 param_1,long param_2,long param_3)

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
        (**(code **)(param_3 + 0x150))();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10162dd78();
        (*pcVar4)(unaff_x20 + 0x10,&UNK_1103eb198,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10162dcb4; end: 10162dd77;  */

void FUN_10162dcb4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar3 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_10162dd78();
      (*pcVar4)(uVar3,2,&UNK_1103eb198,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10162dd78; end: 10162ddb7;  */

void FUN_10162dd78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96fa00;
  func_0x000107c61520(&DAT_10d96fa00,&UNK_1103eb198);
  puRam0000000112dbaca0 = puVar1;
  return;
}



/* Entry: 10162ddb8; end: 10162de03;  */

uint FUN_10162ddb8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_110 [64];
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_c8 = puVar6[1];
          uStack_d0 = *puVar6;
          uStack_b8 = puVar6[3];
          uStack_c0 = puVar6[2];
          uStack_a8 = puVar6[5];
          uStack_b0 = puVar6[4];
          uStack_98 = puVar6[7];
          uStack_a0 = puVar6[6];
          uStack_88 = puVar7[1];
          uStack_90 = *puVar7;
          uStack_78 = puVar7[3];
          uStack_80 = puVar7[2];
          uStack_68 = puVar7[5];
          uStack_70 = puVar7[4];
          uStack_58 = puVar7[7];
          uStack_60 = puVar7[6];
          FUN_10162e5e8(&uStack_d0,auStack_110);
          FUN_10162e5e8(&uStack_90,auStack_110);
          puVar3 = &uStack_d0;
          FUN_10162e960(puVar3,&uStack_90);
          func_0x00010162e624(&uStack_90);
          func_0x00010162e624(&uStack_d0);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10162e248;
          puVar7 = puVar7 + 8;
          puVar6 = puVar6 + 8;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      FUN_100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_10162e24c;
    }
  }
LAB_10162e248:
  uVar1 = 0;
LAB_10162e24c:
  return uVar1 & 1;
}



/* Entry: 10162de04; end: 10162de33;  */

undefined1  [16] FUN_10162de04(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10162de34; end: 10162de67;  */

void FUN_10162de34(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10162de68; end: 10162de7b;  */

undefined1  [16] FUN_10162de68(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10162de78;
  return auVar1;
}



/* Entry: 10162de7c; end: 10162dea3;  */

void FUN_10162de7c(void)

{
  FUN_10162dbe0();
  return;
}



/* Entry: 10162dea4; end: 10162dea7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10162dea4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10162dea8; end: 10162dedf;  */

uint FUN_10162dea8(long param_1,long param_2)

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
  FUN_10162e5a8();
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



/* Entry: 10162dee0; end: 10162df27;  */

uint FUN_10162dee0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_50 = unaff_x20[4];
  FUN_10162e158(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10162df28; end: 10162dfc7;  */

/* WARNING: Possible PIC construction at 0x00010162df74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162df84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162df78) */
/* WARNING: Removing unreachable block (ram,0x00010162df88) */

void FUN_10162df28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbac98 != -1) {
    func_0x000107c61568(0x112dbac98,FUN_10162db98);
  }
  uVar5 = uRam0000000113801c10;
  uVar4 = uRam0000000113801c08;
  uVar3 = uRam0000000113801c00;
  uVar2 = uRam0000000113801bf8;
  uVar1 = uRam0000000113801bf0;
  *param_1 = uRam0000000113801be8;
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



/* Entry: 10162dfc8; end: 10162e003;  */

void FUN_10162dfc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbacc0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbacc0,&UNK_10d96f9c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10162e004; end: 10162e10f;  */

void FUN_10162e004(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_50 = unaff_x20[1];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162e110; end: 10162e157;  */

uint FUN_10162e110(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  uStack_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  uStack_20 = param_2[4];
  FUN_10162e158(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 10162e158; end: 10162e26b;  */

uint FUN_10162e158(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_110 [64];
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_c8 = puVar6[1];
          uStack_d0 = *puVar6;
          uStack_b8 = puVar6[3];
          uStack_c0 = puVar6[2];
          uStack_a8 = puVar6[5];
          uStack_b0 = puVar6[4];
          uStack_98 = puVar6[7];
          uStack_a0 = puVar6[6];
          uStack_88 = puVar7[1];
          uStack_90 = *puVar7;
          uStack_78 = puVar7[3];
          uStack_80 = puVar7[2];
          uStack_68 = puVar7[5];
          uStack_70 = puVar7[4];
          uStack_58 = puVar7[7];
          uStack_60 = puVar7[6];
          FUN_10162e5e8(&uStack_d0,auStack_110);
          FUN_10162e5e8(&uStack_90,auStack_110);
          puVar3 = &uStack_d0;
          FUN_10162e960(puVar3,&uStack_90);
          func_0x00010162e624(&uStack_90);
          func_0x00010162e624(&uStack_d0);
          if (((ulong)puVar3 & 1) == 0) goto LAB_10162e248;
          puVar7 = puVar7 + 8;
          puVar6 = puVar6 + 8;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      FUN_100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_10162e24c;
    }
  }
LAB_10162e248:
  uVar1 = 0;
LAB_10162e24c:
  return uVar1 & 1;
}



/* Entry: 10162e26c; end: 10162e2ab;  */

void FUN_10162e26c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbaca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f900;
  func_0x000107c61520(&UNK_10d96f900,&UNK_1103eafe8);
  puRam0000000112dbaca8 = puVar1;
  return;
}



/* Entry: 10162e2ac; end: 10162e2cf;  */

void FUN_10162e2ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162e2d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10162e2d0; end: 10162e30f;  */

void FUN_10162e2d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f8d8;
  func_0x000107c61520(&UNK_10d96f8d8,&UNK_1103eafe8);
  puRam0000000112dbacb0 = puVar1;
  return;
}



/* Entry: 10162e310; end: 10162e33b;  */

void FUN_10162e310(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162e26c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101571a7c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162e33c; end: 10162e33f;  */

void FUN_10162e33c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f940;
  func_0x000107c61520(&UNK_10d96f940,&UNK_1103eafe8);
  puRam0000000112dbacb8 = puVar1;
  return;
}



/* Entry: 10162e340; end: 10162e37f;  */

void FUN_10162e340(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96f940;
  func_0x000107c61520(&UNK_10d96f940,&UNK_1103eafe8);
  puRam0000000112dbacb8 = puVar1;
  return;
}



/* Entry: 10162e380; end: 10162e3db;  */

long FUN_10162e380(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10162e3dc; end: 10162e4b3;  */

undefined8 * FUN_10162e3dc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10162e4b4; end: 10162e507;  */

undefined8 * FUN_10162e4b4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 10162e508; end: 10162e5a7;  */

int FUN_10162e508(int *param_1,int param_2)

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



/* Entry: 10162e5a8; end: 10162e5e7;  */

void FUN_10162e5a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96f8ac;
  func_0x000107c61520(&DAT_10d96f8ac,&UNK_1103eafe8);
  puRam0000000112dbacc8 = puVar1;
  return;
}



/* Entry: 10162e5e8; end: 10162e657;  */

undefined8 FUN_10162e5e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10162ef5c(param_2,param_1);
  return param_2;
}



/* Entry: 10162e658; end: 10162e69f;  */

void FUN_10162e658(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96fb30,0x51,2);
  uRam0000000113801c20 = uStack_38;
  uRam0000000113801c18 = uStack_40;
  uRam0000000113801c30 = uStack_28;
  uRam0000000113801c28 = uStack_30;
  uRam0000000113801c40 = uStack_18;
  uRam0000000113801c38 = uStack_20;
  return;
}



/* Entry: 10162e6a0; end: 10162e7cb;  */

/* WARNING: Removing unreachable block (ram,0x00010162e7c8) */

void FUN_10162e6a0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 3) goto LAB_10162e718;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_10162e708:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_10162e708;
        }
        if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x180);
          FUN_10162e920();
          (*pcVar3)(unaff_x20 + 0x20,&UNK_1103eb320,lVar1,param_2,param_3);
        }
        else if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_10162e708;
        }
      }
LAB_10162e718:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10162e7cc; end: 10162e91f;  */

void FUN_10162e7cc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  if (((*unaff_x20 == 0) ||
      ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((unaff_x20[1] == 0 ||
      ((**(code **)(param_3 + 0x18))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) {
    uVar1 = *(ulong *)(unaff_x20 + 4);
    uVar2 = *(ulong *)(unaff_x20 + 2) & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar2 = uVar1 >> 0x38 & 0xf;
    }
    if (((uVar2 == 0) ||
        ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 2),uVar1,3,param_2,param_3),
        unaff_x21 == 0)) &&
       ((uVar2 = (ulong)(uint)unaff_x20[6], unaff_x20[6] == 0 ||
        ((**(code **)(param_3 + 0x18))(uVar2,4,param_2,param_3), unaff_x21 == 0)))) {
      if (*(long *)(unaff_x20 + 8) != 0) {
        uStack_48 = (undefined1)unaff_x20[10];
        pcVar3 = *(code **)(param_3 + 0x80);
        lStack_50 = *(long *)(unaff_x20 + 8);
        FUN_10162e920();
        (*pcVar3)(&lStack_50,5,&UNK_1103eb320,uVar2,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      if ((*(char *)((long)unaff_x20 + 0x29) != '\x01') ||
         ((**(code **)(param_3 + 0x68))(1,6,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0xc),
                            *(undefined8 *)(unaff_x20 + 0xe),param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 10162e920; end: 10162e95f;  */

void FUN_10162e920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96fb98;
  func_0x000107c61520(&DAT_10d96fb98,&UNK_1103eb320);
  puRam0000000112dbacd8 = puVar1;
  return;
}



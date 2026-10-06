/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015fdc54; end: 1015fdc7f;  */

void FUN_1015fdc54(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Entry: 1015fdc80; end: 1015fdd03;  */

undefined8 * FUN_1015fdc80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  uVar9 = *(undefined1 *)(param_2 + 0xe);
  uVar11 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar12 = param_1[7];
  uVar14 = param_1[9];
  uVar13 = param_1[8];
  uVar16 = param_1[0xb];
  uVar15 = param_1[10];
  uVar4 = param_1[0xc];
  uVar8 = param_1[0xd];
  uVar10 = *(undefined1 *)(param_1 + 0xe);
  uVar17 = *param_2;
  uVar19 = param_2[3];
  uVar18 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar17;
  param_1[3] = uVar19;
  param_1[2] = uVar18;
  uVar17 = param_2[4];
  uVar19 = param_2[7];
  uVar18 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar17;
  param_1[7] = uVar19;
  param_1[6] = uVar18;
  uVar17 = param_2[8];
  uVar19 = param_2[0xb];
  uVar18 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar17;
  param_1[0xb] = uVar19;
  param_1[10] = uVar18;
  uVar17 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar17;
  *(undefined1 *)(param_1 + 0xe) = uVar9;
  FUN_1015fcb34(uVar11,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar12,uVar13,uVar14,uVar15,uVar16,uVar4,
                uVar8,uVar10);
  return param_1;
}



/* Entry: 1015fdd04; end: 1015fde2b;  */

int FUN_1015fdd04(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f7 < param_2) && (*(char *)((long)param_1 + 0x71) != '\0')) {
    return *param_1 + 0x3f8;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0x1c) << 2) ^ 0x3ff;
  if (0x3f6 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015fde2c; end: 1015fe06b;  */

void FUN_1015fde2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9550 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96b024;
  func_0x000107c61520(&DAT_10d96b024,&UNK_1103e7250);
  puRam0000000112db9550 = puVar1;
  return;
}



/* Entry: 1015fe06c; end: 1015fe09f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015fe06c(long param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
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



/* Entry: 1015fe0a0; end: 1015fe0ff;  */

/* WARNING: Possible PIC construction at 0x0001015fe0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015fe0d8) */
/* WARNING: Removing unreachable block (ram,0x000101553bdc) */
/* WARNING: Removing unreachable block (ram,0x000101553c10) */
/* WARNING: Removing unreachable block (ram,0x000101553be0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015fe0a0(ulong param_1,ulong param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  uint uVar1;
  
  if (param_5 == 1) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1015fe100; end: 1015fe137;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015fe100(undefined8 param_1,long param_2)

{
  ulong in_x5;
  ulong in_x6;
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(in_x6 >> 0x3e);
  if (uVar1 == 1) {
    in_x5 = in_x6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(in_x5);
  return;
}



/* Entry: 1015fe138; end: 1015fe14b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015fe138(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1015fe14c; end: 1015fe18b;  */

undefined8 FUN_1015fe14c(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1015fe18c; end: 1015fe1ab;  */

long FUN_1015fe18c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015fe1ac; end: 1015fe1db;  */

void FUN_1015fe1ac(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1015fe40c();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1015fe1dc; end: 1015fe1e3;  */

undefined8 FUN_1015fe1dc(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1015fe1e4; end: 1015fe257;  */

void FUN_1015fe1e4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112db96a8;
  func_0x0001000285a8(0x112db96a8,&UNK_10d96b280);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1015fe258; end: 1015fe263;  */

void FUN_1015fe258(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1015fe264; end: 1015fe30f;  */

void FUN_1015fe264(void)

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



/* Entry: 1015fe310; end: 1015fe323;  */

bool FUN_1015fe310(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1015fe324; end: 1015fe36b;  */

void FUN_1015fe324(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96b3f0,0xa5,2);
  uRam0000000113801380 = uStack_38;
  uRam0000000113801378 = uStack_40;
  uRam0000000113801390 = uStack_28;
  uRam0000000113801388 = uStack_30;
  uRam00000001138013a0 = uStack_18;
  uRam0000000113801398 = uStack_20;
  return;
}



/* Entry: 1015fe36c; end: 1015fe40b;  */

/* WARNING: Possible PIC construction at 0x0001015fe3b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fe3c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015fe3bc) */
/* WARNING: Removing unreachable block (ram,0x0001015fe3cc) */

void FUN_1015fe36c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db96b0 != -1) {
    func_0x000107c61568(0x112db96b0,FUN_1015fe324);
  }
  uVar5 = uRam00000001138013a0;
  uVar4 = uRam0000000113801398;
  uVar3 = uRam0000000113801390;
  uVar2 = uRam0000000113801388;
  uVar1 = uRam0000000113801380;
  *param_1 = uRam0000000113801378;
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



/* Entry: 1015fe40c; end: 1015fe417;  */

void FUN_1015fe40c(void)

{
  return;
}



/* Entry: 1015fe418; end: 1015fe443;  */

void FUN_1015fe418(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015fe444();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015fe484();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015fe444; end: 1015fe4c3;  */

void FUN_1015fe444(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b320;
  func_0x000107c61520(&UNK_10d96b320,&UNK_1103e7460);
  puRam0000000112db96b8 = puVar1;
  return;
}



/* Entry: 1015fe4c4; end: 1015fe4c7;  */

void FUN_1015fe4c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db96c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db96d0;
  func_0x00010002969c(0x112db96d0,&UNK_10d96b2a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db96c8 = puVar2;
  return;
}



/* Entry: 1015fe4c8; end: 1015fe517;  */

void FUN_1015fe4c8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112db96c8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112db96d0;
  func_0x00010002969c(0x112db96d0,&UNK_10d96b2a8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112db96c8 = puVar2;
  return;
}



/* Entry: 1015fe518; end: 1015fe51b;  */

void FUN_1015fe518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b360;
  func_0x000107c61520(&UNK_10d96b360,&UNK_1103e7460);
  puRam0000000112db96d8 = puVar1;
  return;
}



/* Entry: 1015fe51c; end: 1015fe55b;  */

void FUN_1015fe51c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b360;
  func_0x000107c61520(&UNK_10d96b360,&UNK_1103e7460);
  puRam0000000112db96d8 = puVar1;
  return;
}



/* Entry: 1015fe55c; end: 1015fe5fb;  */

int FUN_1015fe55c(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 1015fe5fc; end: 1015fe643;  */

void FUN_1015fe5fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96b5d0,0x46,2);
  uRam00000001138013b0 = uStack_38;
  uRam00000001138013a8 = uStack_40;
  uRam00000001138013c0 = uStack_28;
  uRam00000001138013b8 = uStack_30;
  uRam00000001138013d0 = uStack_18;
  uRam00000001138013c8 = uStack_20;
  return;
}



/* Entry: 1015fe644; end: 1015fe70f;  */

void FUN_1015fe644(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_1015fe6dc;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x138);
          goto LAB_1015fe6dc;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x30);
        }
        else {
          if (lVar1 != 4) goto LAB_1015fe6ec;
          pcVar3 = *(code **)(param_3 + 0x30);
        }
LAB_1015fe6dc:
        (*pcVar3)();
      }
LAB_1015fe6ec:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015fe710; end: 1015fe7f3;  */

void FUN_1015fe710(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
       (((char)unaff_x20[2] != '\x01' ||
        ((**(code **)(param_3 + 0x68))(1,2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0))))
     && ((unaff_x20[4] == 0 || ((**(code **)(param_3 + 0x10))(4,param_2,param_3), unaff_x21 == 0))))
  {
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 1015fe7f4; end: 1015fe833;  */

void FUN_1015fe7f4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xc000000000000000;
  return;
}



/* Entry: 1015fe834; end: 1015fe863;  */

undefined1  [16] FUN_1015fe834(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1015fe864; end: 1015fe897;  */

void FUN_1015fe864(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1015fe898; end: 1015fe8ab;  */

undefined1  [16] FUN_1015fe898(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1015fe8a8;
  return auVar1;
}



/* Entry: 1015fe8ac; end: 1015fe8d3;  */

void FUN_1015fe8ac(void)

{
  FUN_1015fe644();
  return;
}



/* Entry: 1015fe8d4; end: 1015fe8d7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015fe8d4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015fe8d8; end: 1015fe90f;  */

uint FUN_1015fe8d8(long param_1,long param_2)

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
  FUN_1015fef7c();
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



/* Entry: 1015fe910; end: 1015fe967;  */

uint FUN_1015fe910(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_1015febb8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015fe968; end: 1015fea07;  */

/* WARNING: Possible PIC construction at 0x0001015fe9b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fe9c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015fe9b8) */
/* WARNING: Removing unreachable block (ram,0x0001015fe9c8) */

void FUN_1015fe968(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db96e0 != -1) {
    func_0x000107c61568(0x112db96e0,FUN_1015fe5fc);
  }
  uVar5 = uRam00000001138013d0;
  uVar4 = uRam00000001138013c8;
  uVar3 = uRam00000001138013c0;
  uVar2 = uRam00000001138013b8;
  uVar1 = uRam00000001138013b0;
  *param_1 = uRam00000001138013a8;
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



/* Entry: 1015fea08; end: 1015fea43;  */

void FUN_1015fea08(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db9700;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db9700,&UNK_10d96b5c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015fea44; end: 1015feb5f;  */

void FUN_1015fea44(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = unaff_x20[1];
  uStack_58 = *(undefined1 *)(unaff_x20 + 2);
  uStack_48 = unaff_x20[4];
  uStack_50 = unaff_x20[3];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015feb60; end: 1015febb7;  */

uint FUN_1015feb60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_1015febb8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015febb8; end: 1015fec43;  */

/* WARNING: Possible PIC construction at 0x0001015febe8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015febec) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015febb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
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
  ulong unaff_x20;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  if (((((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0) ||
      ((double)param_1[3] != (double)param_2[3])) || ((double)param_1[4] != (double)param_2[4])) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[5];
  pbVar25 = (byte *)param_1[6];
  lVar24 = param_2[5];
  uVar16 = param_2[6];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(ulong *)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar16 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
      pbVar9 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar20 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
        if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
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
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
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
            puVar7[-0x70] = (char)pbVar10;
            puVar7[-0x6f] = (char)((ulong)pbVar10 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar10 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar10 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar10 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar10 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar10 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar10 >> 0x38);
            puVar7[-0x68] = (char)pbVar25;
            puVar7[-0x67] = (char)((ulong)pbVar25 >> 8);
            puVar7[-0x66] = (char)((ulong)pbVar25 >> 0x10);
            puVar7[-0x65] = (char)((ulong)pbVar25 >> 0x18);
            puVar7[-100] = (char)((ulong)pbVar25 >> 0x20);
            puVar7[-99] = (char)((ulong)pbVar25 >> 0x28);
            pbVar13 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar10 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar13);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar10;
          unaff_x25 = pbVar25;
          if (pbVar10 == (byte *)0x0) {
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar10;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(ulong *)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar27 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar24 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar24 = *(long *)pbVar13;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 == pbVar15) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar24 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar24);
            func_0x000107c61174();
            pbVar12 = pbVar23;
            func_0x000107c60118();
            func_0x000107c61170(pbVar23);
            func_0x000107c61170(lVar24);
            pbVar23 = pbVar12;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar24 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar14 = pbVar23, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar25 == *(byte **)(pbVar13 + 0x10) && pbVar23 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar24 = *(long *)(pbVar13 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar12 = pbVar10;
        pbVar14 = pbVar25;
        if ((pbVar10 != pbVar15) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar13 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar13 + 0x18),lVar24,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar23 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar27 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 0x20);
        lVar24 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar24;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar26;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar13 != 2) {
          return (byte *)0x0;
        }
      }
      lVar26 = *(long *)(pbVar13 + 0x20);
      lVar24 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar24;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar26;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar26 = *(long *)pbVar13;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(ulong *)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 1015fec44; end: 1015fec83;  */

void FUN_1015fec44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b510;
  func_0x000107c61520(&UNK_10d96b510,&UNK_1103e7628);
  puRam0000000112db96e8 = puVar1;
  return;
}



/* Entry: 1015fec84; end: 1015feca7;  */

void FUN_1015fec84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015feca8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015feca8; end: 1015fece7;  */

void FUN_1015feca8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b4e8;
  func_0x000107c61520(&UNK_10d96b4e8,&UNK_1103e7628);
  puRam0000000112db96f0 = puVar1;
  return;
}



/* Entry: 1015fece8; end: 1015fed13;  */

void FUN_1015fece8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015fec44();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015fdeec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015fed14; end: 1015fed17;  */

void FUN_1015fed14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b550;
  func_0x000107c61520(&UNK_10d96b550,&UNK_1103e7628);
  puRam0000000112db96f8 = puVar1;
  return;
}



/* Entry: 1015fed18; end: 1015fed57;  */

void FUN_1015fed18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db96f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b550;
  func_0x000107c61520(&UNK_10d96b550,&UNK_1103e7628);
  puRam0000000112db96f8 = puVar1;
  return;
}



/* Entry: 1015fed58; end: 1015fedab;  */

long FUN_1015fed58(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015fedac; end: 1015fee83;  */

undefined8 * FUN_1015fedac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[6];
  func_0x000107c61434();
  func_0x00010006c00c(uVar2,uVar1);
  param_1[5] = uVar2;
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 1015fee84; end: 1015feed7;  */

undefined8 * FUN_1015fee84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1015feed8; end: 1015fef7b;  */

int FUN_1015feed8(int *param_1,int param_2)

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



/* Entry: 1015fef7c; end: 1015fefbb;  */

void FUN_1015fef7c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96b4bc;
  func_0x000107c61520(&DAT_10d96b4bc,&UNK_1103e7628);
  puRam0000000112db9708 = puVar1;
  return;
}



/* Entry: 1015fefbc; end: 1015ff00b;  */

undefined8 FUN_1015fefbc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db8dc0;
  func_0x0001000285a8(0x112db8dc0,&UNK_10d969810);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1015ff00c; end: 1015ff053;  */

void FUN_1015ff00c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96b750,0x1e,2);
  uRam00000001138013e0 = uStack_38;
  uRam00000001138013d8 = uStack_40;
  uRam00000001138013f0 = uStack_28;
  uRam00000001138013e8 = uStack_30;
  uRam0000000113801400 = uStack_18;
  uRam00000001138013f8 = uStack_20;
  return;
}



/* Entry: 1015ff054; end: 1015ff127;  */

/* WARNING: Removing unreachable block (ram,0x0001015ff124) */

void FUN_1015ff054(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1015efcec();
        (*pcVar4)(unaff_x20 + 0x20,&UNK_11078f958,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015ff128; end: 1015ff1b3;  */

void FUN_1015ff128(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_1015ff1b4(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1015ff1b4; end: 1015ff23f;  */

void FUN_1015ff1b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (uStack_48 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015efcec();
    (*pcVar1)(&uStack_60,2,&UNK_11078f958,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ff240; end: 1015ff28b;  */

uint FUN_1015ff240(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_1015ff7c0;
  }
  uVar4 = param_1[5];
  uVar2 = param_1[4];
  uVar8 = param_1[7];
  uVar6 = param_1[6];
  uVar5 = param_2[5];
  uVar3 = param_2[4];
  uVar9 = param_2[7];
  uVar7 = param_2[6];
  uStack_a0 = uVar3;
  uStack_98 = uVar5;
  uStack_90 = uVar7;
  uStack_88 = uVar9;
  uStack_80 = uVar2;
  uStack_78 = uVar4;
  uStack_70 = uVar6;
  uStack_68 = uVar8;
  if (uVar8 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_1015ff6d0;
    if (uVar2 == uVar3) {
      if ((int)uVar4 != (int)uVar5) {
        FUN_1015fefbc(&uStack_80,auStack_c0);
        FUN_1015fefbc(&uStack_a0,auStack_c0);
        uVar3 = uVar2;
        goto LAB_1015ff794;
      }
      FUN_1015fefbc(&uStack_80,auStack_c0);
      FUN_1015fefbc(&uStack_a0,auStack_c0);
      uVar3 = uVar6;
      FUN_100e25fcc(uVar6,uVar8,uVar7,uVar9);
      FUN_1015d38c8(uVar2,uVar5,uVar7,uVar9);
      if ((uVar3 & 1) != 0) goto LAB_1015ff6a0;
    }
    else {
      FUN_1015fefbc(&uStack_80,auStack_c0);
      FUN_1015fefbc(&uStack_a0,auStack_c0);
LAB_1015ff794:
      FUN_1015d38c8(uVar3,uVar5,uVar7,uVar9);
    }
  }
  else {
    if (0xe < uVar9 >> 0x3c) {
      FUN_1015fefbc(&uStack_80,auStack_c0);
      FUN_1015fefbc(&uStack_a0,auStack_c0);
LAB_1015ff6a0:
      FUN_1015d38c8(uVar2,uVar4,uVar6,uVar8);
      uVar2 = param_1[2];
      FUN_100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_1015ff7c0;
    }
LAB_1015ff6d0:
    FUN_1015fefbc(&uStack_80,auStack_c0);
    FUN_1015fefbc(&uStack_a0,auStack_c0);
    FUN_1015d38c8(uVar2,uVar4,uVar6,uVar8);
    uVar2 = uVar3;
    uVar4 = uVar5;
    uVar6 = uVar7;
    uVar8 = uVar9;
  }
  FUN_1015d38c8(uVar2,uVar4,uVar6,uVar8);
  uVar1 = 0;
LAB_1015ff7c0:
  return uVar1 & 1;
}



/* Entry: 1015ff28c; end: 1015ff2bb;  */

undefined1  [16] FUN_1015ff28c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1015ff2bc; end: 1015ff2ef;  */

void FUN_1015ff2bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1015ff2f0; end: 1015ff303;  */

undefined1  [16] FUN_1015ff2f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1015ff300;
  return auVar1;
}



/* Entry: 1015ff304; end: 1015ff317;  */

void FUN_1015ff304(void)

{
  FUN_1015ff054();
  return;
}



/* Entry: 1015ff318; end: 1015ff34f;  */

void FUN_1015ff318(void)

{
  FUN_1015ff128();
  return;
}



/* Entry: 1015ff350; end: 1015ff353;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015ff350(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015ff354; end: 1015ff38b;  */

uint FUN_1015ff354(long param_1,long param_2)

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
  FUN_1015ffc40();
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



/* Entry: 1015ff38c; end: 1015ff3d3;  */

uint FUN_1015ff38c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_1015ff5fc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015ff3d4; end: 1015ff473;  */

/* WARNING: Possible PIC construction at 0x0001015ff420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015ff430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015ff424) */
/* WARNING: Removing unreachable block (ram,0x0001015ff434) */

void FUN_1015ff3d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9710 != -1) {
    func_0x000107c61568(0x112db9710,FUN_1015ff00c);
  }
  uVar5 = uRam0000000113801400;
  uVar4 = uRam00000001138013f8;
  uVar3 = uRam00000001138013f0;
  uVar2 = uRam00000001138013e8;
  uVar1 = uRam00000001138013e0;
  *param_1 = uRam00000001138013d8;
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



/* Entry: 1015ff474; end: 1015ff4af;  */

void FUN_1015ff474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db9730;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db9730,&UNK_10d96b740);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015ff4b0; end: 1015ff5b3;  */

void FUN_1015ff4b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015ff5b4; end: 1015ff5fb;  */

uint FUN_1015ff5b4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1015ff5fc(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1015ff5fc; end: 1015ff7e3;  */

uint FUN_1015ff5fc(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    func_0x000107c605b8();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_1015ff7c0;
  }
  uVar4 = param_1[5];
  uVar2 = param_1[4];
  uVar8 = param_1[7];
  uVar6 = param_1[6];
  uVar5 = param_2[5];
  uVar3 = param_2[4];
  uVar9 = param_2[7];
  uVar7 = param_2[6];
  uStack_a0 = uVar3;
  uStack_98 = uVar5;
  uStack_90 = uVar7;
  uStack_88 = uVar9;
  uStack_80 = uVar2;
  uStack_78 = uVar4;
  uStack_70 = uVar6;
  uStack_68 = uVar8;
  if (uVar8 >> 0x3c < 0xf) {
    if (0xe < uVar9 >> 0x3c) goto LAB_1015ff6d0;
    if (uVar2 == uVar3) {
      if ((int)uVar4 != (int)uVar5) {
        FUN_1015fefbc(&uStack_80,auStack_c0);
        FUN_1015fefbc(&uStack_a0,auStack_c0);
        uVar3 = uVar2;
        goto LAB_1015ff794;
      }
      FUN_1015fefbc(&uStack_80,auStack_c0);
      FUN_1015fefbc(&uStack_a0,auStack_c0);
      uVar3 = uVar6;
      FUN_100e25fcc(uVar6,uVar8,uVar7,uVar9);
      FUN_1015d38c8(uVar2,uVar5,uVar7,uVar9);
      if ((uVar3 & 1) != 0) goto LAB_1015ff6a0;
    }
    else {
      FUN_1015fefbc(&uStack_80,auStack_c0);
      FUN_1015fefbc(&uStack_a0,auStack_c0);
LAB_1015ff794:
      FUN_1015d38c8(uVar3,uVar5,uVar7,uVar9);
    }
  }
  else {
    if (0xe < uVar9 >> 0x3c) {
      FUN_1015fefbc(&uStack_80,auStack_c0);
      FUN_1015fefbc(&uStack_a0,auStack_c0);
LAB_1015ff6a0:
      FUN_1015d38c8(uVar2,uVar4,uVar6,uVar8);
      uVar2 = param_1[2];
      FUN_100e25fcc(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_1015ff7c0;
    }
LAB_1015ff6d0:
    FUN_1015fefbc(&uStack_80,auStack_c0);
    FUN_1015fefbc(&uStack_a0,auStack_c0);
    FUN_1015d38c8(uVar2,uVar4,uVar6,uVar8);
    uVar2 = uVar3;
    uVar4 = uVar5;
    uVar6 = uVar7;
    uVar8 = uVar9;
  }
  FUN_1015d38c8(uVar2,uVar4,uVar6,uVar8);
  uVar1 = 0;
LAB_1015ff7c0:
  return uVar1 & 1;
}



/* Entry: 1015ff7e4; end: 1015ff823;  */

void FUN_1015ff7e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b688;
  func_0x000107c61520(&UNK_10d96b688,&UNK_1103e77e0);
  puRam0000000112db9718 = puVar1;
  return;
}



/* Entry: 1015ff824; end: 1015ff847;  */

void FUN_1015ff824(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ff848();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015ff848; end: 1015ff887;  */

void FUN_1015ff848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b660;
  func_0x000107c61520(&UNK_10d96b660,&UNK_1103e77e0);
  puRam0000000112db9720 = puVar1;
  return;
}



/* Entry: 1015ff888; end: 1015ff8b3;  */

void FUN_1015ff888(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015ff7e4();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015fdfac();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015ff8b4; end: 1015ff8b7;  */

void FUN_1015ff8b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b6c8;
  func_0x000107c61520(&UNK_10d96b6c8,&UNK_1103e77e0);
  puRam0000000112db9728 = puVar1;
  return;
}



/* Entry: 1015ff8b8; end: 1015ff8f7;  */

void FUN_1015ff8b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b6c8;
  func_0x000107c61520(&UNK_10d96b6c8,&UNK_1103e77e0);
  puRam0000000112db9728 = puVar1;
  return;
}



/* Entry: 1015ff8f8; end: 1015ff96f;  */

long FUN_1015ff8f8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015ff970; end: 1015ffaff;  */

undefined8 * FUN_1015ff970(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar3);
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  uVar2 = param_2[7];
  if (uVar2 >> 0x3c < 0xf) {
    param_1[4] = param_2[4];
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar1 = param_2[6];
    func_0x00010006c00c(uVar1,uVar2);
    param_1[6] = uVar1;
    param_1[7] = uVar2;
  }
  else {
    uVar1 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar1;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
  }
  return param_1;
}



/* Entry: 1015ffb00; end: 1015ffb97;  */

undefined8 * FUN_1015ffb00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar2,uVar1);
  if ((ulong)param_1[7] >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    if (uVar3 >> 0x3c < 0xf) {
      param_1[4] = param_2[4];
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
      uVar2 = param_1[6];
      param_1[6] = param_2[6];
      param_1[7] = uVar3;
      func_0x00010006c090(uVar2);
      return param_1;
    }
    FUN_1015ef434(param_1 + 4);
  }
  uVar2 = param_2[4];
  uVar4 = param_2[7];
  uVar1 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  param_1[7] = uVar4;
  param_1[6] = uVar1;
  return param_1;
}



/* Entry: 1015ffb98; end: 1015ffc3f;  */

int FUN_1015ffb98(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015ffc40; end: 1015ffcc7;  */

void FUN_1015ffc40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9738 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96b634;
  func_0x000107c61520(&DAT_10d96b634,&UNK_1103e77e0);
  puRam0000000112db9738 = puVar1;
  return;
}



/* Entry: 1015ffcc8; end: 1015ffdab;  */

void FUN_1015ffcc8(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        FUN_1016013e4();
LAB_1015ffd50:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_101600e94();
        goto LAB_1015ffd50;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015ffdac; end: 1015ffe57;  */

void FUN_1015ffdac(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  plVar1 = unaff_x20;
  FUN_1015ffe58();
  if (unaff_x21 == 0) {
    lVar2 = *unaff_x20;
    if (*(long *)(lVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_101600e94();
      (*pcVar3)(lVar2,2,&UNK_1103e7bc0,plVar1,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}



/* Entry: 1015ffe58; end: 1015ffedf;  */

void FUN_1015ffe58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_68 = *(long *)(param_1 + 0x20);
  if (lStack_68 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x18);
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1016013e4();
    (*pcVar1)(&uStack_70,1,&UNK_1103e7b38,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015ffee0; end: 1015fff33;  */

uint FUN_1015ffee0(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_100 [48];
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  uVar7 = param_1[4];
  uVar3 = param_1[3];
  uVar13 = param_1[6];
  uVar11 = param_1[5];
  uVar8 = param_1[8];
  uVar4 = param_1[7];
  uVar9 = param_2[4];
  uVar5 = param_2[3];
  uVar14 = param_2[6];
  uVar12 = param_2[5];
  uVar10 = param_2[8];
  uVar6 = param_2[7];
  uStack_d0 = uVar5;
  uStack_c8 = uVar9;
  uStack_c0 = uVar12;
  uStack_b8 = uVar14;
  uStack_b0 = uVar6;
  uStack_a8 = uVar10;
  uStack_a0 = uVar3;
  uStack_98 = uVar7;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar4;
  uStack_78 = uVar8;
  if (uVar7 == 0) {
    if (uVar9 != 0) goto LAB_1016010ac;
    FUN_101600324(&uStack_a0,auStack_100);
    FUN_101600324(&uStack_d0,auStack_100);
LAB_101601124:
    FUN_1015fcd28(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
    uVar3 = *param_1;
    FUN_1016008c0(uVar3,*param_2);
    if ((uVar3 & 1) != 0) {
      uVar3 = param_1[1];
      FUN_100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)uVar3;
      goto LAB_1016011cc;
    }
  }
  else {
    if (uVar9 == 0) {
LAB_1016010ac:
      FUN_101600324(&uStack_a0,auStack_100);
      FUN_101600324(&uStack_d0,auStack_100);
      FUN_1015fcd28(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
      uVar3 = uVar5;
      uVar7 = uVar9;
      uVar11 = uVar12;
      uVar13 = uVar14;
      uVar4 = uVar6;
      uVar8 = uVar10;
    }
    else {
      if (((uVar3 == uVar5) && (uVar7 == uVar9)) ||
         (uVar2 = uVar3, func_0x000107c605b8(uVar3,uVar7,uVar5,uVar9,0), (uVar2 & 1) != 0)) {
        if (((uVar11 == uVar12) && (uVar13 == uVar14)) ||
           (uVar2 = uVar11, func_0x000107c605b8(uVar11,uVar13,uVar12,uVar14,0), (uVar2 & 1) != 0)) {
          FUN_101600324(&uStack_a0,auStack_100);
          FUN_101600324(&uStack_d0,auStack_100);
          uVar2 = uVar4;
          FUN_100e25fcc(uVar4,uVar8,uVar6,uVar10);
          FUN_1015fcd28(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_101601124;
          goto LAB_1016011c4;
        }
        FUN_101600324(&uStack_a0,auStack_100);
        FUN_101600324(&uStack_d0,auStack_100);
      }
      else {
        FUN_101600324(&uStack_a0,auStack_100);
        FUN_101600324(&uStack_d0,auStack_100);
      }
      FUN_1015fcd28(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    }
LAB_1016011c4:
    FUN_1015fcd28(uVar3,uVar7,uVar11,uVar13,uVar4,uVar8);
  }
  uVar1 = 0;
LAB_1016011cc:
  return uVar1 & 1;
}



/* Entry: 1015fff34; end: 1015fff63;  */

undefined1  [16] FUN_1015fff34(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1015fff64; end: 1015fff97;  */

void FUN_1015fff64(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1015fff98; end: 1015fffab;  */

undefined1  [16] FUN_1015fff98(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1015fffa8;
  return auVar1;
}



/* Entry: 1015fffac; end: 1015fffbf;  */

void FUN_1015fffac(void)

{
  FUN_1015ffcc8();
  return;
}



/* Entry: 1015fffc0; end: 1015fffff;  */

void FUN_1015fffc0(void)

{
  FUN_1015ffdac();
  return;
}



/* Entry: 101600000; end: 101600003;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101600000(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101600004; end: 10160003b;  */

uint FUN_101600004(long param_1,long param_2)

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
  func_0x000101601ba4();
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



/* Entry: 10160003c; end: 101600093;  */

uint FUN_10160003c(undefined8 *param_1)

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
  FUN_101600f50(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101600094; end: 101600133;  */

/* WARNING: Possible PIC construction at 0x0001016000e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016000f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016000e4) */
/* WARNING: Removing unreachable block (ram,0x0001016000f4) */

void FUN_101600094(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9748 != -1) {
    func_0x000107c61568(0x112db9748,0x1015ffc80);
  }
  uVar5 = uRam0000000113801430;
  uVar4 = uRam0000000113801428;
  uVar3 = uRam0000000113801420;
  uVar2 = uRam0000000113801418;
  uVar1 = uRam0000000113801410;
  *param_1 = uRam0000000113801408;
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



/* Entry: 101600134; end: 10160016f;  */

void FUN_101600134(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db97d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db97d8,&UNK_10d96bac8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101600170; end: 101600283;  */

void FUN_101600170(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101600284; end: 101600323;  */

uint FUN_101600284(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101600f50(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 101600324; end: 101600373;  */

undefined8 FUN_101600324(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db9740;
  func_0x0001000285a8(0x112db9740,&UNK_10d96b780);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



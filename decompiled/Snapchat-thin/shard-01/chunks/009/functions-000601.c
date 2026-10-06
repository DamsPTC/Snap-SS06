/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10162598c; end: 101625b3b;  */

long FUN_10162598c(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x30));
  return param_1;
}



/* Entry: 101625b3c; end: 101625c33;  */

int FUN_101625b3c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x38] != '\0')) {
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



/* Entry: 101625c34; end: 101625c5b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101625c34(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 101625c5c; end: 101625d3b;  */

undefined8 * FUN_101625c5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[5];
  uVar2 = param_2[6];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 101625d3c; end: 101625d97;  */

undefined8 * FUN_101625d3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101625d98; end: 101625e3b;  */

int FUN_101625d98(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101625e3c; end: 101625efb;  */

void FUN_101625e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96e594;
  func_0x000107c61520(&DAT_10d96e594,&UNK_1103e9e58);
  puRam0000000112dba908 = puVar1;
  return;
}



/* Entry: 101625efc; end: 101625f7f;  */

void FUN_101625efc(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101625f80; end: 101625fc7;  */

void FUN_101625f80(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96ea70,0x4a,2);
  uRam0000000113801a10 = uStack_38;
  uRam0000000113801a08 = uStack_40;
  uRam0000000113801a20 = uStack_28;
  uRam0000000113801a18 = uStack_30;
  uRam0000000113801a30 = uStack_18;
  uRam0000000113801a28 = uStack_20;
  return;
}



/* Entry: 101625fc8; end: 1016260a7;  */

void FUN_101625fc8(undefined8 param_1,long param_2,long param_3)

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
          goto LAB_101626074;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_101626074;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 5) goto LAB_101626084;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
LAB_101626074:
        (*pcVar3)();
      }
LAB_101626084:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1016260a8; end: 1016261db;  */

void FUN_1016260a8(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[7];
        uVar1 = unaff_x20[6] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[6],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
          uVar2 = unaff_x20[9];
          uVar1 = unaff_x20[8] & 0xffffffffffff;
          if ((uVar2 & 0x2000000000000000) != 0) {
            uVar1 = uVar2 >> 0x38 & 0xf;
          }
          if ((uVar1 == 0) ||
             ((**(code **)(param_3 + 0x70))(unaff_x20[8],uVar2,5,param_2,param_3), unaff_x21 == 0))
          {
            func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
          }
        }
      }
    }
  }
  return;
}



/* Entry: 1016261dc; end: 101626227;  */

void FUN_1016261dc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = 0;
  param_1[7] = 0xe000000000000000;
  param_1[8] = 0;
  param_1[9] = 0xe000000000000000;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}



/* Entry: 101626228; end: 101626257;  */

undefined1  [16] FUN_101626228(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x50);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x50),
                      *(undefined8 *)(unaff_x20 + 0x58));
  return auVar1;
}



/* Entry: 101626258; end: 10162628b;  */

void FUN_101626258(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Entry: 10162628c; end: 10162629f;  */

undefined1  [16] FUN_10162628c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x50;
  auVar1._0_8_ = 0x10162629c;
  return auVar1;
}



/* Entry: 1016262a0; end: 1016262c7;  */

void FUN_1016262a0(void)

{
  FUN_101625fc8();
  return;
}



/* Entry: 1016262c8; end: 1016262cb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1016262c8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1016262cc; end: 101626303;  */

uint FUN_1016262cc(long param_1,long param_2)

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
  FUN_101626ad0();
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



/* Entry: 101626304; end: 10162635b;  */

uint FUN_101626304(undefined8 *param_1)

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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
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
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_1016265ac(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10162635c; end: 1016263fb;  */

/* WARNING: Possible PIC construction at 0x0001016263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016263b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016263ac) */
/* WARNING: Removing unreachable block (ram,0x0001016263bc) */

void FUN_10162635c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba928 != -1) {
    func_0x000107c61568(0x112dba928,FUN_101625f80);
  }
  uVar5 = uRam0000000113801a30;
  uVar4 = uRam0000000113801a28;
  uVar3 = uRam0000000113801a20;
  uVar2 = uRam0000000113801a18;
  uVar1 = uRam0000000113801a10;
  *param_1 = uRam0000000113801a08;
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



/* Entry: 1016263fc; end: 101626437;  */

void FUN_1016263fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba948;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba948,&UNK_10d96ea60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101626438; end: 101626553;  */

void FUN_101626438(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
  uStack_40 = unaff_x20[10];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101626554; end: 1016265ab;  */

uint FUN_101626554(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
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
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_1016265ac(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 1016265ac; end: 101626693;  */

/* WARNING: Possible PIC construction at 0x0001016265dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101626620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101626668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010162666c) */
/* WARNING: Removing unreachable block (ram,0x000101626624) */
/* WARNING: Removing unreachable block (ram,0x0001016265e0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016265ac(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 == pbVar17 && pbVar16 == pbVar12) {
    uVar14 = param_1[2];
    if ((uVar14 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
      return (byte *)0x0;
    }
    pbVar13 = (byte *)param_1[4];
    pbVar16 = (byte *)param_1[5];
    pbVar17 = (byte *)param_2[4];
    pbVar12 = (byte *)param_2[5];
    if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
      uVar14 = param_1[6];
      if (((uVar14 != param_2[6]) || (param_1[7] != param_2[7])) &&
         (func_0x000107c605b8(), (uVar14 & 1) == 0)) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[8];
      pbVar16 = (byte *)param_1[9];
      pbVar17 = (byte *)param_2[8];
      pbVar12 = (byte *)param_2[9];
      if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
        pbVar10 = (byte *)param_1[10];
        pbVar25 = (byte *)param_1[0xb];
        lVar24 = param_2[10];
        uVar14 = param_2[0xb];
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
          uVar5 = (uint)(uVar14 >> 0x20);
          uVar21 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar15 = pbVar25;
          if ((ulong)pbVar25 >> 0x3e == 3) {
            uVar20 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                (uVar14 >> 0x3e < 3)) ||
               ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))
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
              uVar22 = uVar14 >> 0x30 & 0xff;
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
                  pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                  pbVar15 = pbVar10;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                    goto LAB_100e262a4;
                  }
                }
                pbVar15 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar15 = puVar7 + -0x70;
                  goto LAB_100e26260;
                }
                lVar26 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar15 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
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
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar10;
                }
              }
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar14;
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
          pbVar13 = *(byte **)pbVar9;
          pbVar10 = *(byte **)(pbVar9 + 8);
          pbVar23 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar16 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar15[0x28] == 0) {
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar24,uVar11);
                return (byte *)(ulong)((uint)pbVar13 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar15[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar24,uVar11);
              if (((ulong)pbVar13 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar13 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar15[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar12 = *(byte **)(pbVar15 + 8);
              lVar24 = *(long *)(pbVar15 + 0x18);
              if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
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
            break;
          }
          lVar26 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar15[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar12 = *(byte **)(pbVar15 + 8);
              if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                 (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                 pbVar12 = *(byte **)(pbVar15 + 0x18),
                 pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
                return (byte *)0x1;
              }
              break;
            }
            if (pbVar15[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar12 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)(pbVar15 + 0x20);
            if (pbVar25 == (byte *)0x0) {
              if (pbVar12 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar12 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar13 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
            }
            if (lVar26 != 0) {
              if (lVar24 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar23 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                lVar26 == 0) && pbVar25 == (byte *)0x0) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar15 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar13 == (byte *)0x1) &&
               (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                lVar26 == 0)) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar15 != 2) {
                return (byte *)0x0;
              }
            }
            lVar26 = *(long *)(pbVar15 + 0x20);
            lVar24 = *(long *)(pbVar15 + 0x18);
            bVar27 = pbVar15[8] | (byte)lVar24;
            bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
            bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
            bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
            bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
            bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
            bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
            bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
            bVar35 = pbVar15[0x10] | (byte)lVar26;
            bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar15[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar24 = *(long *)(pbVar15 + 8);
          uVar14 = *(ulong *)(pbVar15 + 0x10);
          lVar26 = *(long *)pbVar15;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar11);
          if (((ulong)pbVar13 & 1) == 0) {
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
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 101626694; end: 1016266d3;  */

void FUN_101626694(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e9a0;
  func_0x000107c61520(&UNK_10d96e9a0,&UNK_1103ea050);
  puRam0000000112dba930 = puVar1;
  return;
}



/* Entry: 1016266d4; end: 1016266f7;  */

void FUN_1016266d4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016266f8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016266f8; end: 101626737;  */

void FUN_1016266f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e978;
  func_0x000107c61520(&UNK_10d96e978,&UNK_1103ea050);
  puRam0000000112dba938 = puVar1;
  return;
}



/* Entry: 101626738; end: 101626763;  */

void FUN_101626738(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101626694();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101625ebc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101626764; end: 101626767;  */

void FUN_101626764(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e9e0;
  func_0x000107c61520(&UNK_10d96e9e0,&UNK_1103ea050);
  puRam0000000112dba940 = puVar1;
  return;
}



/* Entry: 101626768; end: 1016267a7;  */

void FUN_101626768(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96e9e0;
  func_0x000107c61520(&UNK_10d96e9e0,&UNK_1103ea050);
  puRam0000000112dba940 = puVar1;
  return;
}



/* Entry: 1016267a8; end: 10162681b;  */

long FUN_1016267a8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10162681c; end: 1016268b3;  */

undefined8 * FUN_10162681c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar3 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar3;
  uVar4 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar4;
  uVar5 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar5;
  uVar1 = param_2[10];
  uVar6 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar5);
  func_0x00010006c00c(uVar1,uVar6);
  param_1[10] = uVar1;
  param_1[0xb] = uVar6;
  return param_1;
}



/* Entry: 1016268b4; end: 10162699b;  */

undefined8 * FUN_1016268b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[2] = param_2[2];
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[4] = param_2[4];
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  uVar4 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 10162699c; end: 101626a1f;  */

undefined8 * FUN_10162699c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[7];
  uVar2 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101626a20; end: 101626acf;  */

int FUN_101626a20(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101626ad0; end: 101626b0f;  */

void FUN_101626ad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96e94c;
  func_0x000107c61520(&DAT_10d96e94c,&UNK_1103ea050);
  puRam0000000112dba950 = puVar1;
  return;
}



/* Entry: 101626b10; end: 101626b9f;  */

bool FUN_101626b10(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(ulong *)(unaff_x20 + 0x38);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    FUN_101626ba0(&uStack_50,auStack_68);
    func_0x0001015dc5d0(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    FUN_101626ba0(&uStack_50,auStack_68);
  }
  func_0x0001015dc5d0(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 101626ba0; end: 101626bef;  */

undefined8 FUN_101626ba0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db80f8;
  func_0x0001000285a8(0x112db80f8,&UNK_10d9671e0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101626bf0; end: 101626c37;  */

void FUN_101626bf0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96ec00,0x75,2);
  uRam0000000113801a40 = uStack_38;
  uRam0000000113801a38 = uStack_40;
  uRam0000000113801a50 = uStack_28;
  uRam0000000113801a48 = uStack_30;
  uRam0000000113801a60 = uStack_18;
  uRam0000000113801a58 = uStack_20;
  return;
}



/* Entry: 101626c38; end: 101626d4f;  */

/* WARNING: Removing unreachable block (ram,0x000101626d18) */

void FUN_101626c38(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 2) goto LAB_101626cb0;
          pcVar4 = *(code **)(param_3 + 0x78);
        }
LAB_101626ca0:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x30);
          goto LAB_101626ca0;
        }
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x30);
          goto LAB_101626ca0;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          (*pcVar4)(unaff_x20 + 0x28,&UNK_110790b00,lVar1,param_2,param_3);
        }
      }
LAB_101626cb0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101626d50; end: 101626e3b;  */

void FUN_101626d50(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *unaff_x20;
  long unaff_x21;
  
  if ((((((*unaff_x20 != '\x01') ||
         ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)) &&
        ((*(int *)(unaff_x20 + 4) == 0 ||
         ((**(code **)(param_3 + 0x28))(*(int *)(unaff_x20 + 4),2,param_2,param_3), unaff_x21 == 0))
        )) && ((*(long *)(unaff_x20 + 8) == 0 ||
               ((**(code **)(param_3 + 0x10))(3,param_2,param_3), unaff_x21 == 0)))) &&
      ((*(long *)(unaff_x20 + 0x10) == 0 ||
       ((**(code **)(param_3 + 0x10))(4,param_2,param_3), unaff_x21 == 0)))) &&
     (FUN_101626e3c(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101626e3c; end: 101626ec3;  */

void FUN_101626e3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,5,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101626ec4; end: 101626f13;  */

uint FUN_101626ec4(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((((((*param_1 ^ *param_2) & 1) != 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) ||
      (*(double *)(param_1 + 8) != *(double *)(param_2 + 8))) ||
     (*(double *)(param_1 + 0x10) != *(double *)(param_2 + 0x10))) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar8 = *(ulong *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x38);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_101627378;
    if ((int)uVar5 == (int)uVar6) {
      FUN_101626ba0(&uStack_80,auStack_b8);
      FUN_101626ba0(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      FUN_100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_101627344;
    }
    else {
      FUN_101626ba0(&uStack_80,auStack_b8);
      FUN_101626ba0(&uStack_a0,auStack_b8);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      FUN_101626ba0(&uStack_80,auStack_b8);
      FUN_101626ba0(&uStack_a0,auStack_b8);
LAB_101627344:
      func_0x0001015dc5d0(uVar5,uVar7,uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      FUN_100e25fcc(uVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x18),
                    *(undefined8 *)(param_2 + 0x20));
      uVar1 = (uint)uVar5;
      goto LAB_101627444;
    }
LAB_101627378:
    FUN_101626ba0(&uStack_80,auStack_b8);
    FUN_101626ba0(&uStack_a0,auStack_b8);
    func_0x0001015dc5d0(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x0001015dc5d0(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_101627444:
  return uVar1 & 1;
}



/* Entry: 101626f14; end: 101626f43;  */

undefined1  [16] FUN_101626f14(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 101626f44; end: 101626f77;  */

void FUN_101626f44(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 101626f78; end: 101626f8b;  */

undefined1  [16] FUN_101626f78(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x101626f88;
  return auVar1;
}



/* Entry: 101626f8c; end: 101626f9f;  */

void FUN_101626f8c(void)

{
  FUN_101626c38();
  return;
}



/* Entry: 101626fa0; end: 101626fd7;  */

void FUN_101626fa0(void)

{
  FUN_101626d50();
  return;
}



/* Entry: 101626fd8; end: 101626fdb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101626fd8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101626fdc; end: 101627013;  */

uint FUN_101626fdc(long param_1,long param_2)

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
  FUN_1016278e8();
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



/* Entry: 101627014; end: 10162705b;  */

uint FUN_101627014(undefined8 *param_1)

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
  FUN_101627284(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10162705c; end: 1016270fb;  */

/* WARNING: Possible PIC construction at 0x0001016270a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016270b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016270ac) */
/* WARNING: Removing unreachable block (ram,0x0001016270bc) */

void FUN_10162705c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba958 != -1) {
    func_0x000107c61568(0x112dba958,FUN_101626bf0);
  }
  uVar5 = uRam0000000113801a60;
  uVar4 = uRam0000000113801a58;
  uVar3 = uRam0000000113801a50;
  uVar2 = uRam0000000113801a48;
  uVar1 = uRam0000000113801a40;
  *param_1 = uRam0000000113801a38;
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



/* Entry: 1016270fc; end: 101627137;  */

void FUN_1016270fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba978;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba978,&UNK_10d96ebf0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101627138; end: 10162723b;  */

void FUN_101627138(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10162723c; end: 101627283;  */

uint FUN_10162723c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101627284(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101627284; end: 101627467;  */

uint FUN_101627284(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  undefined8 uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if ((((((*param_1 ^ *param_2) & 1) != 0) || (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) ||
      (*(double *)(param_1 + 8) != *(double *)(param_2 + 8))) ||
     (*(double *)(param_1 + 0x10) != *(double *)(param_2 + 0x10))) {
    return 0;
  }
  uVar7 = *(ulong *)(param_1 + 0x30);
  uVar5 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = *(ulong *)(param_1 + 0x38);
  uVar8 = *(ulong *)(param_2 + 0x30);
  uVar6 = *(undefined8 *)(param_2 + 0x28);
  uVar4 = *(ulong *)(param_2 + 0x38);
  uStack_a0 = uVar6;
  uStack_98 = uVar8;
  uStack_90 = uVar4;
  uStack_80 = uVar5;
  uStack_78 = uVar7;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_101627378;
    if ((int)uVar5 == (int)uVar6) {
      FUN_101626ba0(&uStack_80,auStack_b8);
      FUN_101626ba0(&uStack_a0,auStack_b8);
      uVar2 = uVar7;
      FUN_100e25fcc(uVar7,uVar3,uVar8,uVar4);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_101627344;
    }
    else {
      FUN_101626ba0(&uStack_80,auStack_b8);
      FUN_101626ba0(&uStack_a0,auStack_b8);
      func_0x0001015dc5d0(uVar6,uVar8,uVar4);
    }
  }
  else {
    if (0xe < uVar4 >> 0x3c) {
      FUN_101626ba0(&uStack_80,auStack_b8);
      FUN_101626ba0(&uStack_a0,auStack_b8);
LAB_101627344:
      func_0x0001015dc5d0(uVar5,uVar7,uVar3);
      uVar5 = *(undefined8 *)(param_1 + 0x18);
      FUN_100e25fcc(uVar5,*(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_2 + 0x18),
                    *(undefined8 *)(param_2 + 0x20));
      uVar1 = (uint)uVar5;
      goto LAB_101627444;
    }
LAB_101627378:
    FUN_101626ba0(&uStack_80,auStack_b8);
    FUN_101626ba0(&uStack_a0,auStack_b8);
    func_0x0001015dc5d0(uVar5,uVar7,uVar3);
    uVar5 = uVar6;
    uVar7 = uVar8;
    uVar3 = uVar4;
  }
  func_0x0001015dc5d0(uVar5,uVar7,uVar3);
  uVar1 = 0;
LAB_101627444:
  return uVar1 & 1;
}



/* Entry: 101627468; end: 1016274a7;  */

void FUN_101627468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba960 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96eb38;
  func_0x000107c61520(&UNK_10d96eb38,&UNK_1103ea208);
  puRam0000000112dba960 = puVar1;
  return;
}



/* Entry: 1016274a8; end: 1016274cb;  */

void FUN_1016274a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016274cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016274cc; end: 10162750b;  */

void FUN_1016274cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96eb10;
  func_0x000107c61520(&UNK_10d96eb10,&UNK_1103ea208);
  puRam0000000112dba968 = puVar1;
  return;
}



/* Entry: 10162750c; end: 101627537;  */

void FUN_10162750c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101627468();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618580();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101627538; end: 10162753b;  */

void FUN_101627538(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96eb78;
  func_0x000107c61520(&UNK_10d96eb78,&UNK_1103ea208);
  puRam0000000112dba970 = puVar1;
  return;
}



/* Entry: 10162753c; end: 10162757b;  */

void FUN_10162753c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96eb78;
  func_0x000107c61520(&UNK_10d96eb78,&UNK_1103ea208);
  puRam0000000112dba970 = puVar1;
  return;
}



/* Entry: 10162757c; end: 1016275ef;  */

long FUN_10162757c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1016275f0; end: 10162778b;  */

undefined1 * FUN_1016275f0(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  func_0x00010006c00c(uVar2,uVar1);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar3 = *(ulong *)(param_2 + 0x38);
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
    uVar2 = *(undefined8 *)(param_2 + 0x30);
    func_0x00010006c00c(uVar2,uVar3);
    *(undefined8 *)(param_1 + 0x30) = uVar2;
    *(ulong *)(param_1 + 0x38) = uVar3;
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  }
  return param_1;
}



/* Entry: 10162778c; end: 10162782f;  */

undefined1 * FUN_10162778c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(ulong *)(param_1 + 0x38) >> 0x3c < 0xf) {
    uVar3 = *(ulong *)(param_2 + 0x38);
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_2 + 0x28);
      uVar1 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(ulong *)(param_1 + 0x38) = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x0001015d4290(param_1 + 0x28);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  return param_1;
}



/* Entry: 101627830; end: 1016278e7;  */

int FUN_101627830(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x40] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1016278e8; end: 101627927;  */

void FUN_1016278e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96eae4;
  func_0x000107c61520(&DAT_10d96eae4,&UNK_1103ea208);
  puRam0000000112dba980 = puVar1;
  return;
}



/* Entry: 101627928; end: 101627977;  */

undefined8 FUN_101627928(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db6f40;
  func_0x0001000285a8(0x112db6f40,&UNK_10d9681d0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 101627978; end: 1016279bf;  */

void FUN_101627978(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96edb0,0x28,2);
  uRam0000000113801a70 = uStack_38;
  uRam0000000113801a68 = uStack_40;
  uRam0000000113801a80 = uStack_28;
  uRam0000000113801a78 = uStack_30;
  uRam0000000113801a90 = uStack_18;
  uRam0000000113801a88 = uStack_20;
  return;
}



/* Entry: 1016279c0; end: 101627abb;  */

/* WARNING: Removing unreachable block (ram,0x000101627a78) */
/* WARNING: Removing unreachable block (ram,0x000101627ab8) */

void FUN_1016279c0(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        lVar2 = unaff_x20 + 0x38;
LAB_101627aa0:
        (*pcVar4)(lVar2,&UNK_110790c80,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x18;
          goto LAB_101627aa0;
        }
        if (lVar1 == 1) {
          (**(code **)(param_3 + 0x138))();
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101627abc; end: 101627b57;  */

void FUN_101627abc(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *unaff_x20;
  long unaff_x21;
  
  if (((*unaff_x20 != '\x01') ||
      ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_101627b58(), unaff_x21 == 0)) {
    FUN_101627bdc();
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                        param_2,param_3);
  }
  return;
}



/* Entry: 101627b58; end: 101627bdb;  */

void FUN_101627b58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x20);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x18);
    uStack_48 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,2,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101627bdc; end: 101627c5f;  */

void FUN_101627bdc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x40);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101627c60; end: 101627caf;  */

uint FUN_101627c60(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_150 [4];
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(ulong *)(param_1 + 0x28);
  lVar8 = *(long *)(param_2 + 0x20);
  uVar6 = *(ulong *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_10162817c;
    FUN_101627928(&uStack_90,&uStack_130);
    FUN_101627928(&uStack_b0,&uStack_130);
LAB_1016281c4:
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = *(long *)(param_1 + 0x40);
    uVar5 = *(ulong *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(ulong *)(param_1 + 0x48);
    lVar8 = *(long *)(param_2 + 0x40);
    uVar6 = *(ulong *)(param_2 + 0x38);
    uVar12 = *(undefined8 *)(param_2 + 0x50);
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10162828c;
      FUN_101627928(&uStack_d0,&uStack_130);
      FUN_101627928(&uStack_f0,&uStack_130);
    }
    else {
      if (lVar8 == 0) {
LAB_10162828c:
        uStack_130 = uVar5;
        lStack_128 = lVar7;
        uStack_120 = uVar9;
        uStack_118 = uVar11;
        uStack_110 = uVar6;
        lStack_108 = lVar8;
        uStack_100 = uVar10;
        uStack_f8 = uVar12;
        FUN_101627928(&uStack_d0,auStack_150);
        puVar3 = &uStack_f0;
        puVar4 = auStack_150;
        goto LAB_1016282b0;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        FUN_101627928(&uStack_d0,&uStack_130);
        puVar3 = &uStack_f0;
        goto LAB_101628328;
      }
      FUN_101627928(&uStack_d0,&uStack_130);
      FUN_101627928(&uStack_f0,&uStack_130);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
      FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_101628344;
    }
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    uVar11 = *(undefined8 *)(param_1 + 8);
    FUN_100e25fcc(uVar11,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                  *(undefined8 *)(param_2 + 0x10));
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_10162817c:
      uStack_130 = uVar5;
      lStack_128 = lVar7;
      uStack_120 = uVar9;
      uStack_118 = uVar11;
      uStack_110 = uVar6;
      lStack_108 = lVar8;
      uStack_100 = uVar10;
      uStack_f8 = uVar12;
      FUN_101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1016282b0:
      FUN_101627928(puVar3,puVar4);
      FUN_101628968(&uStack_130);
    }
    else {
      if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) != 0)) {
        FUN_101627928(&uStack_90,&uStack_130);
        FUN_101627928(&uStack_b0,&uStack_130);
        uVar2 = uVar9;
        FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1016281c4;
      }
      else {
        FUN_101627928(&uStack_90,&uStack_130);
        puVar3 = &uStack_b0;
LAB_101628328:
        FUN_101627928(puVar3,&uStack_130);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      }
LAB_101628344:
      FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 101627cb0; end: 101627cdf;  */

undefined1  [16] FUN_101627cb0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 101627ce0; end: 101627d13;  */

void FUN_101627ce0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 101627d14; end: 101627d27;  */

undefined1  [16] FUN_101627d14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x101627d24;
  return auVar1;
}



/* Entry: 101627d28; end: 101627d3b;  */

void FUN_101627d28(void)

{
  FUN_1016279c0();
  return;
}



/* Entry: 101627d3c; end: 101627d83;  */

void FUN_101627d3c(void)

{
  FUN_101627abc();
  return;
}



/* Entry: 101627d84; end: 101627d87;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101627d84(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101627d88; end: 101627dbf;  */

uint FUN_101627d88(long param_1,long param_2)

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
  FUN_101628928();
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



/* Entry: 101627dc0; end: 101627e27;  */

uint FUN_101627dc0(undefined8 *param_1)

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
  FUN_101628090(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101627e28; end: 101627ec7;  */

/* WARNING: Possible PIC construction at 0x000101627e74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101627e84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101627e78) */
/* WARNING: Removing unreachable block (ram,0x000101627e88) */

void FUN_101627e28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dba988 != -1) {
    func_0x000107c61568(0x112dba988,FUN_101627978);
  }
  uVar5 = uRam0000000113801a90;
  uVar4 = uRam0000000113801a88;
  uVar3 = uRam0000000113801a80;
  uVar2 = uRam0000000113801a78;
  uVar1 = uRam0000000113801a70;
  *param_1 = uRam0000000113801a68;
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



/* Entry: 101627ec8; end: 101627f03;  */

void FUN_101627ec8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dba9a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dba9a8,&UNK_10d96eda0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101627f04; end: 101628027;  */

void FUN_101627f04(undefined8 param_1,undefined8 param_2)

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
  func_0x000107c6068c(auStack_d8,0);
  func_0x000107c5fa50(auStack_d8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101628028; end: 10162808f;  */

uint FUN_101628028(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101628090(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101628090; end: 10162837f;  */

uint FUN_101628090(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong auStack_150 [4];
  ulong uStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  ulong uStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  if (((*param_1 ^ *param_2) & 1) != 0) {
    return 0;
  }
  lVar7 = *(long *)(param_1 + 0x20);
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar11 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(ulong *)(param_1 + 0x28);
  lVar8 = *(long *)(param_2 + 0x20);
  uVar6 = *(ulong *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x30);
  uVar10 = *(undefined8 *)(param_2 + 0x28);
  uStack_b0 = uVar6;
  lStack_a8 = lVar8;
  uStack_a0 = uVar10;
  uStack_98 = uVar12;
  uStack_90 = uVar5;
  lStack_88 = lVar7;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (lVar7 == 0) {
    if (lVar8 != 0) goto LAB_10162817c;
    FUN_101627928(&uStack_90,&uStack_130);
    FUN_101627928(&uStack_b0,&uStack_130);
LAB_1016281c4:
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    lVar7 = *(long *)(param_1 + 0x40);
    uVar5 = *(ulong *)(param_1 + 0x38);
    uVar11 = *(undefined8 *)(param_1 + 0x50);
    uVar9 = *(ulong *)(param_1 + 0x48);
    lVar8 = *(long *)(param_2 + 0x40);
    uVar6 = *(ulong *)(param_2 + 0x38);
    uVar12 = *(undefined8 *)(param_2 + 0x50);
    uVar10 = *(undefined8 *)(param_2 + 0x48);
    uStack_f0 = uVar6;
    lStack_e8 = lVar8;
    uStack_e0 = uVar10;
    uStack_d8 = uVar12;
    uStack_d0 = uVar5;
    lStack_c8 = lVar7;
    uStack_c0 = uVar9;
    uStack_b8 = uVar11;
    if (lVar7 == 0) {
      if (lVar8 != 0) goto LAB_10162828c;
      FUN_101627928(&uStack_d0,&uStack_130);
      FUN_101627928(&uStack_f0,&uStack_130);
    }
    else {
      if (lVar8 == 0) {
LAB_10162828c:
        uStack_130 = uVar5;
        lStack_128 = lVar7;
        uStack_120 = uVar9;
        uStack_118 = uVar11;
        uStack_110 = uVar6;
        lStack_108 = lVar8;
        uStack_100 = uVar10;
        uStack_f8 = uVar12;
        FUN_101627928(&uStack_d0,auStack_150);
        puVar3 = &uStack_f0;
        puVar4 = auStack_150;
        goto LAB_1016282b0;
      }
      if (((uVar5 != uVar6) || (lVar7 != lVar8)) &&
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) == 0)) {
        FUN_101627928(&uStack_d0,&uStack_130);
        puVar3 = &uStack_f0;
        goto LAB_101628328;
      }
      FUN_101627928(&uStack_d0,&uStack_130);
      FUN_101627928(&uStack_f0,&uStack_130);
      uVar2 = uVar9;
      FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
      FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      if ((uVar2 & 1) == 0) goto LAB_101628344;
    }
    FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    uVar11 = *(undefined8 *)(param_1 + 8);
    FUN_100e25fcc(uVar11,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_2 + 8),
                  *(undefined8 *)(param_2 + 0x10));
    uVar1 = (uint)uVar11;
  }
  else {
    if (lVar8 == 0) {
LAB_10162817c:
      uStack_130 = uVar5;
      lStack_128 = lVar7;
      uStack_120 = uVar9;
      uStack_118 = uVar11;
      uStack_110 = uVar6;
      lStack_108 = lVar8;
      uStack_100 = uVar10;
      uStack_f8 = uVar12;
      FUN_101627928(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_1016282b0:
      FUN_101627928(puVar3,puVar4);
      FUN_101628968(&uStack_130);
    }
    else {
      if (((uVar5 == uVar6) && (lVar7 == lVar8)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,lVar7,uVar6,lVar8,0), (uVar2 & 1) != 0)) {
        FUN_101627928(&uStack_90,&uStack_130);
        FUN_101627928(&uStack_b0,&uStack_130);
        uVar2 = uVar9;
        FUN_100e25fcc(uVar9,uVar11,uVar10,uVar12);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
        if ((uVar2 & 1) != 0) goto LAB_1016281c4;
      }
      else {
        FUN_101627928(&uStack_90,&uStack_130);
        puVar3 = &uStack_b0;
LAB_101628328:
        FUN_101627928(puVar3,&uStack_130);
        FUN_101597ae4(uVar6,lVar8,uVar10,uVar12);
      }
LAB_101628344:
      FUN_101597ae4(uVar5,lVar7,uVar9,uVar11);
    }
    uVar1 = 0;
  }
  return uVar1 & 1;
}



/* Entry: 101628380; end: 1016283bf;  */

void FUN_101628380(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba990 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ece8;
  func_0x000107c61520(&UNK_10d96ece8,&UNK_1103ea3c0);
  puRam0000000112dba990 = puVar1;
  return;
}



/* Entry: 1016283c0; end: 1016283e3;  */

void FUN_1016283c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016283e4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016283e4; end: 101628423;  */

void FUN_1016283e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ecc0;
  func_0x000107c61520(&UNK_10d96ecc0,&UNK_1103ea3c0);
  puRam0000000112dba998 = puVar1;
  return;
}



/* Entry: 101628424; end: 10162844f;  */

void FUN_101628424(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101628380();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10155b424();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101628450; end: 101628453;  */

void FUN_101628450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ed28;
  func_0x000107c61520(&UNK_10d96ed28,&UNK_1103ea3c0);
  puRam0000000112dba9a0 = puVar1;
  return;
}



/* Entry: 101628454; end: 101628493;  */

void FUN_101628454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ed28;
  func_0x000107c61520(&UNK_10d96ed28,&UNK_1103ea3c0);
  puRam0000000112dba9a0 = puVar1;
  return;
}



/* Entry: 101628494; end: 101628517;  */

long FUN_101628494(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101628518; end: 10162877b;  */

undefined1 * FUN_101628518(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x00010006c00c(uVar3,uVar1);
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  lVar2 = *(long *)(param_2 + 0x20);
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    lVar2 = *(long *)(param_2 + 0x40);
  }
  else {
    *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
    *(long *)(param_1 + 0x20) = lVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x28);
    uVar1 = *(undefined8 *)(param_2 + 0x30);
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar1);
    *(undefined8 *)(param_1 + 0x28) = uVar3;
    *(undefined8 *)(param_1 + 0x30) = uVar1;
    lVar2 = *(long *)(param_2 + 0x40);
  }
  if (lVar2 == 0) {
    uVar3 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = uVar3;
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
  }
  else {
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
    *(long *)(param_1 + 0x40) = lVar2;
    uVar3 = *(undefined8 *)(param_2 + 0x48);
    uVar1 = *(undefined8 *)(param_2 + 0x50);
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar1);
    *(undefined8 *)(param_1 + 0x48) = uVar3;
    *(undefined8 *)(param_1 + 0x50) = uVar1;
  }
  return param_1;
}



/* Entry: 10162877c; end: 101628853;  */

undefined1 * FUN_10162877c(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 8);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (*(long *)(param_1 + 0x20) != 0) {
    lVar3 = *(long *)(param_2 + 0x20);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(long *)(param_1 + 0x20) = lVar3;
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_1 + 0x28);
      uVar2 = *(undefined8 *)(param_1 + 0x30);
      uVar4 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_1 + 0x28) = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      lVar3 = *(long *)(param_1 + 0x40);
      goto joined_r0x000101628800;
    }
    FUN_10159d63c(param_1 + 0x18);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  lVar3 = *(long *)(param_1 + 0x40);
joined_r0x000101628800:
  if (lVar3 != 0) {
    lVar3 = *(long *)(param_2 + 0x40);
    if (lVar3 != 0) {
      *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
      *(long *)(param_1 + 0x40) = lVar3;
      func_0x000107c6142c();
      uVar1 = *(undefined8 *)(param_1 + 0x48);
      uVar2 = *(undefined8 *)(param_1 + 0x50);
      uVar4 = *(undefined8 *)(param_2 + 0x48);
      *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
      *(undefined8 *)(param_1 + 0x48) = uVar4;
      func_0x00010006c090(uVar1,uVar2);
      return param_1;
    }
    FUN_10159d63c(param_1 + 0x38);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x48) = uVar1;
  return param_1;
}



/* Entry: 101628854; end: 101628927;  */

int FUN_101628854(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101628928; end: 101628967;  */

void FUN_101628928(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dba9b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96ec94;
  func_0x000107c61520(&DAT_10d96ec94,&UNK_1103ea3c0);
  puRam0000000112dba9b0 = puVar1;
  return;
}



/* Entry: 101628968; end: 1016289af;  */

undefined8 FUN_101628968(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112db7ec0;
  func_0x0001000285a8(0x112db7ec0,&UNK_10d966840);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 1016289b0; end: 101628a5f;  */

bool FUN_1016289b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  lStack_60 = lVar5;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  if (lVar5 == 0) {
    FUN_1015c999c(&uStack_70,auStack_98);
  }
  else {
    FUN_1015c999c(&uStack_70,auStack_98);
    FUN_101553bdc(uVar1,uVar2,lVar5,uVar3,uVar4);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  FUN_101553bdc(uVar1,uVar2,0,uVar3,uVar4);
  return lVar5 != 0;
}



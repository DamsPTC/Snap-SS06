/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c2d3e0; end: 101c2d45f;  */

undefined8 * FUN_101c2d3e0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar4;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar4 = param_2[9];
  uVar3 = param_2[10];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar4,uVar3);
  param_1[9] = uVar4;
  param_1[10] = uVar3;
  return param_1;
}



/* Entry: 101c2d460; end: 101c2d51f;  */

undefined8 * FUN_101c2d460(undefined8 *param_1,undefined8 *param_2)

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
  param_1[7] = param_2[7];
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar4 = param_2[9];
  uVar2 = param_2[10];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[9];
  uVar3 = param_1[10];
  param_1[9] = uVar4;
  param_1[10] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 101c2d520; end: 101c2d593;  */

undefined8 * FUN_101c2d520(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
  uVar2 = param_1[9];
  uVar1 = param_1[10];
  uVar3 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 101c2d594; end: 101c2d64b;  */

int FUN_101c2d594(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x16] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101c2d64c; end: 101c2d6db;  */

undefined4 * FUN_101c2d64c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  uVar2 = *(undefined8 *)(param_2 + 4);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 4) = uVar2;
  return param_1;
}



/* Entry: 101c2d6dc; end: 101c2d71b;  */

undefined4 * FUN_101c2d6dc(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 2);
  uVar2 = *(undefined8 *)(param_1 + 4);
  uVar3 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101c2d71c; end: 101c2d7cf;  */

int FUN_101c2d71c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 4) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101c2d7d0; end: 101c2d88f;  */

void FUN_101c2d7d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a3f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e1014;
  func_0x000107c61520(&DAT_10d9e1014,&UNK_110458e68);
  puRam0000000112e0a3f8 = puVar1;
  return;
}



/* Entry: 101c2d890; end: 101c2d89f;  */

long FUN_101c2d890(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c2d8a0; end: 101c2d8e7;  */

void FUN_101c2d8a0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e12b0,0x1b,2);
  uRam0000000113803d80 = uStack_38;
  uRam0000000113803d78 = uStack_40;
  uRam0000000113803d90 = uStack_28;
  uRam0000000113803d88 = uStack_30;
  uRam0000000113803da0 = uStack_18;
  uRam0000000113803d98 = uStack_20;
  return;
}



/* Entry: 101c2d8e8; end: 101c2d9b3;  */

void FUN_101c2d8e8(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101c2d980;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_101c2d980;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_101c2d990;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_101c2d980:
        (*pcVar3)();
      }
LAB_101c2d990:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101c2d9b4; end: 101c2da97;  */

void FUN_101c2d9b4(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((((((int)param_2 == 0) ||
        ((**(code **)(param_7 + 0x18))(param_2,1,param_6,param_7), unaff_x21 == 0)) &&
       ((param_2 >> 0x20 == 0 ||
        ((**(code **)(param_7 + 0x18))(param_2 >> 0x20,2,param_6,param_7), unaff_x21 == 0)))) &&
      (((int)param_3 == 0 ||
       ((**(code **)(param_7 + 0x18))(param_3,3,param_6,param_7), unaff_x21 == 0)))) &&
     ((param_3 >> 0x20 == 0 ||
      ((**(code **)(param_7 + 0x18))(param_3 >> 0x20,4,param_6,param_7), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 101c2da98; end: 101c2dacb;  */

void FUN_101c2da98(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 101c2dacc; end: 101c2dafb;  */

undefined1  [16] FUN_101c2dacc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101c2dafc; end: 101c2db2f;  */

void FUN_101c2dafc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101c2db30; end: 101c2db43;  */

undefined1  [16] FUN_101c2db30(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c2db40;
  return auVar1;
}



/* Entry: 101c2db44; end: 101c2db7b;  */

void FUN_101c2db44(void)

{
  FUN_101c2d8e8();
  return;
}



/* Entry: 101c2db7c; end: 101c2db7f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c2db7c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c2db80; end: 101c2dbb7;  */

uint FUN_101c2db80(long param_1,long param_2)

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
  FUN_101c2e114();
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



/* Entry: 101c2dbb8; end: 101c2dbef;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2dbb8(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  undefined1 (*unaff_x20) [16];
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  auVar46 = *unaff_x20;
  iVar11 = -(uint)(auVar46._0_4_ == (int)*param_1);
  iVar22 = -(uint)(auVar46._4_4_ == (int)((ulong)*param_1 >> 0x20));
  iVar5 = -(uint)(auVar46._8_4_ == (int)param_1[1]);
  iVar6 = -(uint)(auVar46._12_4_ == (int)((ulong)param_1[1] >> 0x20));
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  pbVar13 = *(byte **)unaff_x20[1];
  pbVar28 = *(byte **)(unaff_x20[1] + 8);
  lVar27 = param_1[2];
  uVar19 = param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined1 (*) [16])((ulong)pbVar28 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
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
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(undefined1 (**) [16])(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 101c2dbf0; end: 101c2dc8f;  */

/* WARNING: Possible PIC construction at 0x000101c2dc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2dc4c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c2dc40) */
/* WARNING: Removing unreachable block (ram,0x000101c2dc50) */

void FUN_101c2dbf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a420 != -1) {
    func_0x000107c61568(0x112e0a420,FUN_101c2d8a0);
  }
  uVar5 = uRam0000000113803da0;
  uVar4 = uRam0000000113803d98;
  uVar3 = uRam0000000113803d90;
  uVar2 = uRam0000000113803d88;
  uVar1 = uRam0000000113803d80;
  *param_1 = uRam0000000113803d78;
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



/* Entry: 101c2dc90; end: 101c2dccb;  */

void FUN_101c2dc90(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0a448;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0a448,&UNK_10d9e12a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c2dccc; end: 101c2ddbf;  */

void FUN_101c2dccc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c2ddc0; end: 101c2ddf3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2ddc0(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  undefined1 auVar46 [16];
  
  auVar46 = *param_2;
  iVar11 = -(uint)((int)*param_1 == auVar46._0_4_);
  iVar22 = -(uint)((int)((ulong)*param_1 >> 0x20) == auVar46._4_4_);
  iVar5 = -(uint)((int)param_1[1] == auVar46._8_4_);
  iVar6 = -(uint)((int)((ulong)param_1[1] >> 0x20) == auVar46._12_4_);
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  lVar27 = *(long *)param_2[1];
  uVar19 = *(ulong *)(param_2[1] + 8);
  pbVar13 = (byte *)param_1[2];
  pbVar28 = (byte *)param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(ulong *)(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar28 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(ulong *)(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
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
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
        auVar46[1] = bVar31;
        auVar46[0] = bVar30;
        auVar46[2] = bVar32;
        auVar46[3] = bVar33;
        auVar46[4] = bVar34;
        auVar46[5] = bVar35;
        auVar46[6] = bVar36;
        auVar46[7] = bVar37;
        auVar46[8] = bVar38;
        auVar46[9] = bVar39;
        auVar46[10] = bVar40;
        auVar46[0xb] = bVar41;
        auVar46[0xc] = bVar42;
        auVar46[0xd] = bVar43;
        auVar46[0xe] = bVar44;
        auVar46[0xf] = bVar45;
        auVar3[1] = bVar31;
        auVar3[0] = bVar30;
        auVar3[2] = bVar32;
        auVar3[3] = bVar33;
        auVar3[4] = bVar34;
        auVar3[5] = bVar35;
        auVar3[6] = bVar36;
        auVar3[7] = bVar37;
        auVar3[8] = bVar38;
        auVar3[9] = bVar39;
        auVar3[10] = bVar40;
        auVar3[0xb] = bVar41;
        auVar3[0xc] = bVar42;
        auVar3[0xd] = bVar43;
        auVar3[0xe] = bVar44;
        auVar3[0xf] = bVar45;
        auVar46 = NEON_ext(auVar46,auVar3,8,1);
        if (CONCAT17(bVar37 | auVar46[7],
                     CONCAT16(bVar36 | auVar46[6],
                              CONCAT15(bVar35 | auVar46[5],
                                       CONCAT14(bVar34 | auVar46[4],
                                                CONCAT13(bVar33 | auVar46[3],
                                                         CONCAT12(bVar32 | auVar46[2],
                                                                  CONCAT11(bVar31 | auVar46[1],
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
      auVar1[1] = bVar31;
      auVar1[0] = bVar30;
      auVar1[2] = bVar32;
      auVar1[3] = bVar33;
      auVar1[4] = bVar34;
      auVar1[5] = bVar35;
      auVar1[6] = bVar36;
      auVar1[7] = bVar37;
      auVar1[8] = bVar38;
      auVar1[9] = bVar39;
      auVar1[10] = bVar40;
      auVar1[0xb] = bVar41;
      auVar1[0xc] = bVar42;
      auVar1[0xd] = bVar43;
      auVar1[0xe] = bVar44;
      auVar1[0xf] = bVar45;
      auVar2[1] = bVar31;
      auVar2[0] = bVar30;
      auVar2[2] = bVar32;
      auVar2[3] = bVar33;
      auVar2[4] = bVar34;
      auVar2[5] = bVar35;
      auVar2[6] = bVar36;
      auVar2[7] = bVar37;
      auVar2[8] = bVar38;
      auVar2[9] = bVar39;
      auVar2[10] = bVar40;
      auVar2[0xb] = bVar41;
      auVar2[0xc] = bVar42;
      auVar2[0xd] = bVar43;
      auVar2[0xe] = bVar44;
      auVar2[0xf] = bVar45;
      auVar46 = NEON_ext(auVar1,auVar2,8,1);
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(ulong *)(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 101c2ddf4; end: 101c2de33;  */

void FUN_101c2ddf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a428 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1220;
  func_0x000107c61520(&UNK_10d9e1220,&UNK_110458fd8);
  puRam0000000112e0a428 = puVar1;
  return;
}



/* Entry: 101c2de34; end: 101c2de57;  */

void FUN_101c2de34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2de58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c2de58; end: 101c2de97;  */

void FUN_101c2de58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e11f8;
  func_0x000107c61520(&UNK_10d9e11f8,&UNK_110458fd8);
  puRam0000000112e0a430 = puVar1;
  return;
}



/* Entry: 101c2de98; end: 101c2dec3;  */

void FUN_101c2de98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2ddf4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c2dec4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c2dec4; end: 101c2df03;  */

void FUN_101c2dec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e11b0;
  func_0x000107c61520(&DAT_10d9e11b0,&UNK_110458fd8);
  puRam0000000112e0a438 = puVar1;
  return;
}



/* Entry: 101c2df04; end: 101c2df07;  */

void FUN_101c2df04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1260;
  func_0x000107c61520(&UNK_10d9e1260,&UNK_110458fd8);
  puRam0000000112e0a440 = puVar1;
  return;
}



/* Entry: 101c2df08; end: 101c2df47;  */

void FUN_101c2df08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a440 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1260;
  func_0x000107c61520(&UNK_10d9e1260,&UNK_110458fd8);
  puRam0000000112e0a440 = puVar1;
  return;
}



/* Entry: 101c2df48; end: 101c2df73;  */

long FUN_101c2df48(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c2df74; end: 101c2df7f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c2df74(long param_1)

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



/* Entry: 101c2df80; end: 101c2e027;  */

undefined8 * FUN_101c2df80(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 101c2e028; end: 101c2e05f;  */

undefined8 * FUN_101c2e028(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101c2e060; end: 101c2e113;  */

int FUN_101c2e060(int *param_1,uint param_2)

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



/* Entry: 101c2e114; end: 101c2e153;  */

void FUN_101c2e114(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a450 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e11cc;
  func_0x000107c61520(&DAT_10d9e11cc,&UNK_110458fd8);
  puRam0000000112e0a450 = puVar1;
  return;
}



/* Entry: 101c2e154; end: 101c2e1db;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101c2e154(ulong param_1,ulong param_2)

{
  uint uVar1;
  
  if (((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    return;
  }
  if ((param_2 >> 0x3d & 1) != 0) {
    uVar1 = (uint)(param_2 >> 0x3e);
    if (uVar1 == 1) {
      param_1 = param_2 & 0x1fffffffffffffff;
    }
    else if (uVar1 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_1);
    return;
  }
  return;
}



/* Entry: 101c2e1dc; end: 101c2e223;  */

void FUN_101c2e1dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e1400,9,2);
  uRam0000000113803db0 = uStack_38;
  uRam0000000113803da8 = uStack_40;
  uRam0000000113803dc0 = uStack_28;
  uRam0000000113803db8 = uStack_30;
  uRam0000000113803dd0 = uStack_18;
  uRam0000000113803dc8 = uStack_20;
  return;
}



/* Entry: 101c2e224; end: 101c2e2c7;  */

void FUN_101c2e224(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_101c2e2c8(param_1);
    }
    else if (lVar1 == 2) {
      FUN_101c2e3a8(param_1);
    }
  }
  return;
}



/* Entry: 101c2e2c8; end: 101c2e3a7;  */

void FUN_101c2e2c8(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  uint uStack_58;
  char cStack_54;
  
  uStack_58 = 0;
  cStack_54 = '\x01';
  (**(code **)(param_4 + 0xe0))(&uStack_58,param_3,param_4);
  if ((unaff_x21 == 0) && (cStack_54 != '\x01')) {
    uVar3 = (ulong)uStack_58;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    FUN_101c2e154(uVar1,uVar2);
    func_0x000101c2e178(uVar1,uVar2);
    if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      func_0x000101c2e178(0,0x3000000000000000);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = uVar3;
    param_2[1] = 0;
    func_0x000101c2e178(uVar1,uVar2);
  }
  return;
}



/* Entry: 101c2e3a8; end: 101c2e4cf;  */

/* WARNING: Removing unreachable block (ram,0x000101c2e46c) */

void FUN_101c2e3a8(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long unaff_x21;
  undefined8 uStack_70;
  ulong uStack_68;
  
  uStack_68 = 0xf000000000000000;
  uStack_70 = 0;
  (**(code **)(param_4 + 0x170))(&uStack_70,param_3,param_4);
  uVar5 = uStack_68;
  uVar4 = uStack_70;
  if ((unaff_x21 == 0) && (uStack_68 >> 0x3c < 0xf)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    func_0x000100de78a0();
    FUN_101c2e154(uVar1,uVar2);
    func_0x000101c2e178(uVar1,uVar2);
    if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
      func_0x000101c2e178(0,0x3000000000000000);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    func_0x0001000b44c0(uVar4,uVar5);
    uVar1 = *param_2;
    uVar3 = param_2[1];
    *param_2 = uVar4;
    param_2[1] = uVar5 | 0x2000000000000000;
    func_0x000101c2e178(uVar1,uVar3);
  }
  else {
    func_0x0001000b44c0(uStack_70,uStack_68);
  }
  return;
}



/* Entry: 101c2e4d0; end: 101c2e57b;  */

void FUN_101c2e4d0(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_3 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    if ((param_3 >> 0x3d & 1) == 0) {
      (**(code **)(param_7 + 0x48))(param_2,1,param_6,param_7);
    }
    else {
      FUN_101c2e57c(param_2,param_3,param_4,param_5,param_1,param_6,param_7);
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  return;
}



/* Entry: 101c2e57c; end: 101c2e617;  */

void FUN_101c2e57c(undefined8 param_1,ulong param_2)

{
  undefined8 in_x5;
  long in_x6;
  code *pcVar1;
  
  if (((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (param_2 & 0x2000000000000000) != 0) {
    pcVar1 = *(code **)(in_x6 + 0x78);
    func_0x000101c2e168();
    (*pcVar1)(param_1,param_2 & 0xdfffffffffffffff,2,in_x5,in_x6);
    func_0x000101c2e178(param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c2e618);
  (*pcVar1)();
}



/* Entry: 101c2e618; end: 101c2e653;  */

void FUN_101c2e618(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 101c2e654; end: 101c2e683;  */

undefined1  [16] FUN_101c2e654(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101c2e684; end: 101c2e6b7;  */

void FUN_101c2e684(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101c2e6b8; end: 101c2e6cb;  */

undefined1  [16] FUN_101c2e6b8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c2e6c8;
  return auVar1;
}



/* Entry: 101c2e6cc; end: 101c2e703;  */

void FUN_101c2e6cc(void)

{
  FUN_101c2e224();
  return;
}



/* Entry: 101c2e704; end: 101c2e707;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c2e704(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c2e708; end: 101c2e73f;  */

uint FUN_101c2e708(long param_1,long param_2)

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
  FUN_101c2f0c8();
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



/* Entry: 101c2e740; end: 101c2e753;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c2eb08) */
/* WARNING: Removing unreachable block (ram,0x000101c2eb28) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2e740(long *param_1)

{
  undefined8 *puVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  byte *pbVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  long *plVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  long *plVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *unaff_x19;
  long lVar31;
  long *unaff_x20;
  byte *unaff_x21;
  byte *pbVar32;
  byte *unaff_x22;
  long lVar33;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  long *unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar50 [16];
  
  pbVar20 = (byte *)*param_1;
  plVar6 = (long *)param_1[1];
  pbVar22 = (byte *)param_1[2];
  pbVar23 = (byte *)param_1[3];
  pbVar30 = (byte *)*unaff_x20;
  plVar21 = (long *)unaff_x20[1];
  pbVar32 = (byte *)unaff_x20[2];
  pbVar7 = (byte *)unaff_x20[3];
  puVar2 = &stack0xfffffffffffffff0;
  pbVar17 = pbVar32;
  pbVar19 = pbVar7;
  pbVar16 = pbVar22;
  pbVar24 = pbVar23;
  if ((((ulong)plVar21 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (((ulong)plVar6 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_101c2e154();
      FUN_101c2e154(pbVar20,plVar6);
      func_0x000101c2e178(pbVar30,plVar21);
      goto code_r0x000100e25fcc;
    }
  }
  else if (((ulong)plVar6 & 0x3000000000000000) != 0x3000000000000000) {
    if (((ulong)plVar21 >> 0x3d & 1) == 0) {
      if (((ulong)plVar6 >> 0x3d & 1) == 0) {
        FUN_101c2e154();
        FUN_101c2e154(pbVar20,plVar6);
        func_0x000101c2e178(pbVar30,plVar21);
        if ((int)pbVar30 != (int)pbVar20) {
          return (byte *)0x0;
        }
code_r0x000100e25fcc:
        do {
          *(long **)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar11 = (uint)((ulong)pbVar19 >> 0x20);
          uVar25 = uVar11 >> 0x1e;
          uVar12 = (uint)((ulong)pbVar24 >> 0x20);
          uVar28 = uVar12 >> 0x1e;
          iVar15 = (int)pbVar17;
          if ((ulong)pbVar19 >> 0x3e == 3) {
            uVar27 = 0;
            if ((((pbVar17 != (byte *)0x0) || (pbVar19 != (byte *)0xc000000000000000)) ||
                ((ulong)pbVar24 >> 0x3e < 3)) ||
               ((uVar27 = 0, pbVar16 != (byte *)0x0 || (pbVar24 != (byte *)0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar16 = (byte *)0x1;
          }
          else if (uVar11 >> 0x1e < 2) {
            if (uVar25 == 0) {
              uVar27 = (ulong)pbVar19 >> 0x30 & 0xff;
            }
            else {
              iVar26 = (int)((ulong)pbVar17 >> 0x20);
              if (SBORROW4(iVar26,iVar15)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar13)();
              }
              uVar27 = (ulong)(iVar26 - iVar15);
            }
joined_r0x000100e26170:
            if (1 < uVar12 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar28 == 0) {
              uVar29 = (ulong)pbVar24 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar26 = (int)((ulong)pbVar16 >> 0x20);
            if (SBORROW4(iVar26,(int)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar13)();
            }
            if (uVar27 == (long)(iVar26 - (int)pbVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar16 = (byte *)0x0;
          }
          else {
            if (uVar25 == 2) {
              uVar27 = *(long *)(pbVar17 + 0x18) - *(long *)(pbVar17 + 0x10);
              if (SBORROW8(*(long *)(pbVar17 + 0x18),*(long *)(pbVar17 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar13)();
              }
              goto joined_r0x000100e26170;
            }
            uVar27 = 0;
            if (uVar28 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar28 == 2) {
              uVar29 = *(long *)(pbVar16 + 0x18) - *(long *)(pbVar16 + 0x10);
              if (SBORROW8(*(long *)(pbVar16 + 0x18),*(long *)(pbVar16 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar13)();
              }
code_r0x000100e2608c:
              if (uVar27 != uVar29) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar27 < 1) goto code_r0x000100e26128;
              if (uVar25 < 2) {
                if (uVar25 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar17;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar17 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar17 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar17 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar17 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar17 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar17 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar17 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar19;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar19 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar19 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar19 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar19 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar19 >> 0x28);
                  pbVar19 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar19 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = (byte *)0x0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar16 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar15;
                unaff_x23 = (byte *)(((long)pbVar17 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar17 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar13)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar19;
                if (pbVar17 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar17 = (byte *)0x0;
                }
                else {
                  pbVar20 = pbVar17;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar20)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar13)();
                  }
                  pbVar17 = pbVar17 + ((long)unaff_x25 - (long)pbVar20);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar17;
                  if (pbVar17 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar20) {
                      pbVar20 = unaff_x23;
                    }
                    pbVar20 = pbVar20 + (long)pbVar17;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar20 = (byte *)0x0;
              }
              else {
                if (uVar25 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar19 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar31 = *(long *)(pbVar17 + 0x10);
                unaff_x24 = *(byte **)(pbVar17 + 0x18);
                func_0x000107c5ec30();
                pbVar20 = pbVar17;
                if (pbVar17 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,(long)pbVar20)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar13)();
                  }
                  pbVar17 = pbVar17 + (lVar31 - (long)pbVar20);
                }
                unaff_x23 = unaff_x24 + -lVar31;
                if (SBORROW8((long)unaff_x24,lVar31)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar13)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar17;
                unaff_x25 = pbVar19;
                if (pbVar17 == (byte *)0x0) {
                  pbVar20 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar20) {
                    pbVar20 = unaff_x23;
                  }
                  pbVar20 = pbVar20 + (long)pbVar17;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (long *)((ulong)pbVar19 & 0x3fffffffffffffff);
              unaff_x21 = (byte *)0x0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar17,pbVar20,
                                  pbVar16,pbVar24);
              pbVar16 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              pbVar19 = pbVar20;
              unaff_x22 = pbVar24;
            }
            else {
              pbVar16 = (byte *)(ulong)(uVar27 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar16;
          }
          func_0x000107c60e78();
          plVar14 = (long *)((long)register0x00000008 + -0xc0);
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(byte **)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(byte **)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar20 = *(byte **)pbVar16;
          pbVar17 = *(byte **)(pbVar16 + 8);
          pbVar30 = *(byte **)(pbVar16 + 0x18);
          bVar34 = pbVar16[0x28];
          pbVar32 = (byte *)((ulong)*(uint *)(pbVar16 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar16 + 0x15) << 0x28 | (ulong)pbVar16[0x10]);
          pbVar22 = pbVar17;
          if (bVar34 < 3) {
            if (bVar34 == 0) {
              if (pbVar19[0x28] == 0) {
                lVar31 = *(long *)pbVar19;
                uVar18 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar20,lVar31,uVar18);
                return (byte *)(ulong)((uint)pbVar20 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar34 == 1) {
              if (pbVar19[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)(pbVar19 + 8);
              pbVar24 = *(byte **)(pbVar19 + 0x10);
              lVar31 = *(long *)pbVar19;
              uVar18 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar20,lVar31,uVar18);
              if (((ulong)pbVar20 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar20 = pbVar17;
              pbVar22 = pbVar32;
              if ((pbVar17 == pbVar23) && (pbVar32 == pbVar24)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar19[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)pbVar19;
              pbVar24 = *(byte **)(pbVar19 + 8);
              lVar31 = *(long *)(pbVar19 + 0x18);
              if ((pbVar20 == pbVar23) && (pbVar17 == pbVar24)) {
                if (((pbVar16[0x10] ^ pbVar19[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar30 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar31 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar31);
                func_0x000107c61174();
                pbVar19 = pbVar30;
                func_0x000107c60118();
                func_0x000107c61170(pbVar30);
                func_0x000107c61170(lVar31);
                pbVar30 = pbVar19;
joined_r0x000100e266a4:
                if (((ulong)pbVar30 & 1) == 0) {
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
            )(pbVar20,pbVar22,pbVar23,pbVar24,0);
            return pbVar20;
          }
          lVar33 = *(long *)(pbVar16 + 0x20);
          if (bVar34 < 5) {
            if (bVar34 != 3) {
              if (pbVar19[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)pbVar19;
              pbVar24 = *(byte **)(pbVar19 + 8);
              if (((pbVar20 == pbVar23) && (pbVar17 == pbVar24)) &&
                 (pbVar20 = pbVar32, pbVar22 = pbVar30, pbVar23 = *(byte **)(pbVar19 + 0x10),
                 pbVar24 = *(byte **)(pbVar19 + 0x18),
                 pbVar32 == *(byte **)(pbVar19 + 0x10) && pbVar30 == *(byte **)(pbVar19 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar19[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar19 != ((uint)pbVar20 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar24 = *(byte **)(pbVar19 + 0x10);
            lVar31 = *(long *)(pbVar19 + 0x20);
            if (pbVar32 == (byte *)0x0) {
              if (pbVar24 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar24 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)(pbVar19 + 8);
              pbVar20 = pbVar17;
              pbVar22 = pbVar32;
              if ((pbVar17 != pbVar23) || (pbVar32 != pbVar24)) goto code_r0x000107c605b8;
            }
            if (lVar33 != 0) {
              if (lVar31 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar30 == *(byte **)(pbVar19 + 0x18)) && (lVar33 == lVar31)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar30,lVar33,*(byte **)(pbVar19 + 0x18),lVar31,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar31 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar34 != 5) {
            if ((((pbVar30 == (byte *)0x0 && pbVar17 == (byte *)0x0) && pbVar20 == (byte *)0x0) &&
                lVar33 == 0) && pbVar32 == (byte *)0x0) {
              if (pbVar19[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar33 = *(long *)(pbVar19 + 0x20);
              lVar31 = *(long *)(pbVar19 + 0x18);
              bVar34 = pbVar19[8] | (byte)lVar31;
              bVar35 = pbVar19[9] | (byte)((ulong)lVar31 >> 8);
              bVar36 = pbVar19[10] | (byte)((ulong)lVar31 >> 0x10);
              bVar37 = pbVar19[0xb] | (byte)((ulong)lVar31 >> 0x18);
              bVar38 = pbVar19[0xc] | (byte)((ulong)lVar31 >> 0x20);
              bVar39 = pbVar19[0xd] | (byte)((ulong)lVar31 >> 0x28);
              bVar40 = pbVar19[0xe] | (byte)((ulong)lVar31 >> 0x30);
              bVar41 = pbVar19[0xf] | (byte)((ulong)lVar31 >> 0x38);
              bVar42 = pbVar19[0x10] | (byte)lVar33;
              bVar43 = pbVar19[0x11] | (byte)((ulong)lVar33 >> 8);
              bVar44 = pbVar19[0x12] | (byte)((ulong)lVar33 >> 0x10);
              bVar45 = pbVar19[0x13] | (byte)((ulong)lVar33 >> 0x18);
              bVar46 = pbVar19[0x14] | (byte)((ulong)lVar33 >> 0x20);
              bVar47 = pbVar19[0x15] | (byte)((ulong)lVar33 >> 0x28);
              bVar48 = pbVar19[0x16] | (byte)((ulong)lVar33 >> 0x30);
              bVar49 = pbVar19[0x17] | (byte)((ulong)lVar33 >> 0x38);
              auVar50[1] = bVar35;
              auVar50[0] = bVar34;
              auVar50[2] = bVar36;
              auVar50[3] = bVar37;
              auVar50[4] = bVar38;
              auVar50[5] = bVar39;
              auVar50[6] = bVar40;
              auVar50[7] = bVar41;
              auVar50[8] = bVar42;
              auVar50[9] = bVar43;
              auVar50[10] = bVar44;
              auVar50[0xb] = bVar45;
              auVar50[0xc] = bVar46;
              auVar50[0xd] = bVar47;
              auVar50[0xe] = bVar48;
              auVar50[0xf] = bVar49;
              auVar10[1] = bVar35;
              auVar10[0] = bVar34;
              auVar10[2] = bVar36;
              auVar10[3] = bVar37;
              auVar10[4] = bVar38;
              auVar10[5] = bVar39;
              auVar10[6] = bVar40;
              auVar10[7] = bVar41;
              auVar10[8] = bVar42;
              auVar10[9] = bVar43;
              auVar10[10] = bVar44;
              auVar10[0xb] = bVar45;
              auVar10[0xc] = bVar46;
              auVar10[0xd] = bVar47;
              auVar10[0xe] = bVar48;
              auVar10[0xf] = bVar49;
              auVar50 = NEON_ext(auVar50,auVar10,8,1);
              if (CONCAT17(bVar41 | auVar50[7],
                           CONCAT16(bVar40 | auVar50[6],
                                    CONCAT15(bVar39 | auVar50[5],
                                             CONCAT14(bVar38 | auVar50[4],
                                                      CONCAT13(bVar37 | auVar50[3],
                                                               CONCAT12(bVar36 | auVar50[2],
                                                                        CONCAT11(bVar35 | auVar50[1]
                                                                                 ,bVar34 | auVar50[0
                                                  ]))))))) == 0 && *(long *)pbVar19 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar20 == (byte *)0x1) &&
               (((pbVar30 == (byte *)0x0 && pbVar17 == (byte *)0x0) && pbVar32 == (byte *)0x0) &&
                lVar33 == 0)) {
              if (pbVar19[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar19 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar19[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar19 != 2) {
                return (byte *)0x0;
              }
            }
            lVar33 = *(long *)(pbVar19 + 0x20);
            lVar31 = *(long *)(pbVar19 + 0x18);
            bVar34 = pbVar19[8] | (byte)lVar31;
            bVar35 = pbVar19[9] | (byte)((ulong)lVar31 >> 8);
            bVar36 = pbVar19[10] | (byte)((ulong)lVar31 >> 0x10);
            bVar37 = pbVar19[0xb] | (byte)((ulong)lVar31 >> 0x18);
            bVar38 = pbVar19[0xc] | (byte)((ulong)lVar31 >> 0x20);
            bVar39 = pbVar19[0xd] | (byte)((ulong)lVar31 >> 0x28);
            bVar40 = pbVar19[0xe] | (byte)((ulong)lVar31 >> 0x30);
            bVar41 = pbVar19[0xf] | (byte)((ulong)lVar31 >> 0x38);
            bVar42 = pbVar19[0x10] | (byte)lVar33;
            bVar43 = pbVar19[0x11] | (byte)((ulong)lVar33 >> 8);
            bVar44 = pbVar19[0x12] | (byte)((ulong)lVar33 >> 0x10);
            bVar45 = pbVar19[0x13] | (byte)((ulong)lVar33 >> 0x18);
            bVar46 = pbVar19[0x14] | (byte)((ulong)lVar33 >> 0x20);
            bVar47 = pbVar19[0x15] | (byte)((ulong)lVar33 >> 0x28);
            bVar48 = pbVar19[0x16] | (byte)((ulong)lVar33 >> 0x30);
            bVar49 = pbVar19[0x17] | (byte)((ulong)lVar33 >> 0x38);
            auVar8[1] = bVar35;
            auVar8[0] = bVar34;
            auVar8[2] = bVar36;
            auVar8[3] = bVar37;
            auVar8[4] = bVar38;
            auVar8[5] = bVar39;
            auVar8[6] = bVar40;
            auVar8[7] = bVar41;
            auVar8[8] = bVar42;
            auVar8[9] = bVar43;
            auVar8[10] = bVar44;
            auVar8[0xb] = bVar45;
            auVar8[0xc] = bVar46;
            auVar8[0xd] = bVar47;
            auVar8[0xe] = bVar48;
            auVar8[0xf] = bVar49;
            auVar9[1] = bVar35;
            auVar9[0] = bVar34;
            auVar9[2] = bVar36;
            auVar9[3] = bVar37;
            auVar9[4] = bVar38;
            auVar9[5] = bVar39;
            auVar9[6] = bVar40;
            auVar9[7] = bVar41;
            auVar9[8] = bVar42;
            auVar9[9] = bVar43;
            auVar9[10] = bVar44;
            auVar9[0xb] = bVar45;
            auVar9[0xc] = bVar46;
            auVar9[0xd] = bVar47;
            auVar9[0xe] = bVar48;
            auVar9[0xf] = bVar49;
            auVar50 = NEON_ext(auVar8,auVar9,8,1);
            lVar31 = CONCAT17(bVar41 | auVar50[7],
                              CONCAT16(bVar40 | auVar50[6],
                                       CONCAT15(bVar39 | auVar50[5],
                                                CONCAT14(bVar38 | auVar50[4],
                                                         CONCAT13(bVar37 | auVar50[3],
                                                                  CONCAT12(bVar36 | auVar50[2],
                                                                           CONCAT11(bVar35 | auVar50
                                                  [1],bVar34 | auVar50[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar19[0x28] != 5) {
            return (byte *)0x0;
          }
          pbVar16 = *(byte **)(pbVar19 + 8);
          pbVar24 = *(byte **)(pbVar19 + 0x10);
          lVar31 = *(long *)pbVar19;
          uVar18 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar20,lVar31,uVar18);
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          plVar6 = (long *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          puVar1 = (undefined8 *)((long)register0x00000008 + -0xa0);
          plVar3 = (long *)((long)register0x00000008 + -0x98);
          plVar21 = (long *)((long)register0x00000008 + -0xb0);
          plVar4 = (long *)((long)register0x00000008 + -0xa8);
          plVar5 = (long *)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
          pbVar19 = pbVar32;
          unaff_x19 = (byte *)*plVar3;
          unaff_x20 = (long *)*puVar1;
          unaff_x21 = (byte *)*plVar4;
          unaff_x22 = (byte *)*plVar21;
          unaff_x23 = (byte *)*plVar5;
          unaff_x24 = (byte *)*plVar14;
          unaff_x29 = (undefined1 *)*plVar6;
        } while( true );
      }
      FUN_101c2e154();
      FUN_101c2e154(pbVar20,plVar6);
      func_0x000101c2e178(pbVar20,plVar6);
    }
    else {
      if (((ulong)plVar6 >> 0x3d & 1) != 0) {
        FUN_101c2e154();
        FUN_101c2e154(pbVar20,plVar6);
        unaff_x30 = 0x101c2eb08;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        pbVar17 = pbVar30;
        pbVar19 = (byte *)((ulong)plVar21 & 0xdfffffffffffffff);
        pbVar16 = pbVar20;
        pbVar24 = (byte *)((ulong)plVar6 & 0xdfffffffffffffff);
        unaff_x19 = pbVar20;
        unaff_x20 = plVar6;
        unaff_x21 = pbVar23;
        unaff_x22 = pbVar22;
        unaff_x23 = pbVar7;
        unaff_x24 = pbVar32;
        unaff_x25 = pbVar30;
        unaff_x26 = plVar21;
        unaff_x29 = puVar2;
        goto code_r0x000100e25fcc;
      }
      FUN_101c2e154();
      FUN_101c2e154(pbVar20,plVar6);
    }
    goto LAB_101c2ea10;
  }
  FUN_101c2e154();
  FUN_101c2e154(pbVar20,plVar6);
  func_0x000101c2e178(pbVar30,plVar21);
  pbVar30 = pbVar20;
  plVar21 = plVar6;
LAB_101c2ea10:
  func_0x000101c2e178(pbVar30,plVar21);
  return (byte *)0x0;
}



/* Entry: 101c2e754; end: 101c2e7f3;  */

/* WARNING: Possible PIC construction at 0x000101c2e7a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2e7b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c2e7a4) */
/* WARNING: Removing unreachable block (ram,0x000101c2e7b4) */

void FUN_101c2e754(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a458 != -1) {
    func_0x000107c61568(0x112e0a458,FUN_101c2e1dc);
  }
  uVar5 = uRam0000000113803dd0;
  uVar4 = uRam0000000113803dc8;
  uVar3 = uRam0000000113803dc0;
  uVar2 = uRam0000000113803db8;
  uVar1 = uRam0000000113803db0;
  *param_1 = uRam0000000113803da8;
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



/* Entry: 101c2e7f4; end: 101c2e82f;  */

void FUN_101c2e7f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0a480;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0a480,&UNK_10d9e13f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c2e830; end: 101c2e923;  */

void FUN_101c2e830(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c2e924; end: 101c2e93f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c2eb08) */
/* WARNING: Removing unreachable block (ram,0x000101c2eb28) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2e924(long *param_1,long *param_2)

{
  long *plVar1;
  ulong *puVar2;
  long *plVar3;
  undefined1 *puVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  byte *pbVar8;
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  uint uVar12;
  uint uVar13;
  code *pcVar14;
  long *plVar15;
  int iVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined8 uVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte *pbVar24;
  uint uVar25;
  int iVar26;
  ulong uVar27;
  uint uVar28;
  ulong uVar29;
  byte *pbVar30;
  byte *unaff_x19;
  long lVar31;
  ulong unaff_x20;
  byte *unaff_x21;
  byte *pbVar32;
  byte *unaff_x22;
  long lVar33;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  undefined1 auVar50 [16];
  
  pbVar21 = (byte *)*param_1;
  uVar27 = param_1[1];
  pbVar22 = (byte *)param_1[2];
  pbVar23 = (byte *)param_1[3];
  pbVar30 = (byte *)*param_2;
  uVar29 = param_2[1];
  pbVar32 = (byte *)param_2[2];
  pbVar8 = (byte *)param_2[3];
  puVar4 = &stack0xfffffffffffffff0;
  pbVar18 = pbVar22;
  pbVar20 = pbVar23;
  pbVar17 = pbVar32;
  pbVar24 = pbVar8;
  if (((uVar27 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((uVar29 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_101c2e154();
      FUN_101c2e154(pbVar30,uVar29);
      func_0x000101c2e178(pbVar21,uVar27);
      goto code_r0x000100e25fcc;
    }
  }
  else if ((uVar29 & 0x3000000000000000) != 0x3000000000000000) {
    if ((uVar27 >> 0x3d & 1) == 0) {
      if ((uVar29 >> 0x3d & 1) == 0) {
        FUN_101c2e154();
        FUN_101c2e154(pbVar30,uVar29);
        func_0x000101c2e178(pbVar21,uVar27);
        if ((int)pbVar21 != (int)pbVar30) {
          return (byte *)0x0;
        }
code_r0x000100e25fcc:
        do {
          *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar12 = (uint)((ulong)pbVar20 >> 0x20);
          uVar25 = uVar12 >> 0x1e;
          uVar13 = (uint)((ulong)pbVar24 >> 0x20);
          uVar28 = uVar13 >> 0x1e;
          iVar16 = (int)pbVar18;
          if ((ulong)pbVar20 >> 0x3e == 3) {
            uVar27 = 0;
            if ((((pbVar18 != (byte *)0x0) || (pbVar20 != (byte *)0xc000000000000000)) ||
                ((ulong)pbVar24 >> 0x3e < 3)) ||
               ((uVar27 = 0, pbVar17 != (byte *)0x0 || (pbVar24 != (byte *)0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar17 = (byte *)0x1;
          }
          else if (uVar12 >> 0x1e < 2) {
            if (uVar25 == 0) {
              uVar27 = (ulong)pbVar20 >> 0x30 & 0xff;
            }
            else {
              iVar26 = (int)((ulong)pbVar18 >> 0x20);
              if (SBORROW4(iVar26,iVar16)) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar14)();
              }
              uVar27 = (ulong)(iVar26 - iVar16);
            }
joined_r0x000100e26170:
            if (1 < uVar13 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar28 == 0) {
              uVar29 = (ulong)pbVar24 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar26 = (int)((ulong)pbVar17 >> 0x20);
            if (SBORROW4(iVar26,(int)pbVar17)) {
                    /* WARNING: Does not return */
              pcVar14 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar14)();
            }
            if (uVar27 == (long)(iVar26 - (int)pbVar17)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar17 = (byte *)0x0;
          }
          else {
            if (uVar25 == 2) {
              uVar27 = *(long *)(pbVar18 + 0x18) - *(long *)(pbVar18 + 0x10);
              if (SBORROW8(*(long *)(pbVar18 + 0x18),*(long *)(pbVar18 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar14)();
              }
              goto joined_r0x000100e26170;
            }
            uVar27 = 0;
            if (uVar28 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar28 == 2) {
              uVar29 = *(long *)(pbVar17 + 0x18) - *(long *)(pbVar17 + 0x10);
              if (SBORROW8(*(long *)(pbVar17 + 0x18),*(long *)(pbVar17 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar14 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar14)();
              }
code_r0x000100e2608c:
              if (uVar27 != uVar29) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar27 < 1) goto code_r0x000100e26128;
              if (uVar25 < 2) {
                if (uVar25 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar18;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar18 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar18 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar18 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar18 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar18 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar18 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar18 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar20;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar20 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar20 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar20 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar20 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar20 >> 0x28);
                  pbVar20 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar20 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = (byte *)0x0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar17 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar16;
                unaff_x23 = (byte *)(((long)pbVar18 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar18 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar14)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar20;
                if (pbVar18 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar18 = (byte *)0x0;
                }
                else {
                  pbVar21 = pbVar18;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar21)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar14)();
                  }
                  pbVar18 = pbVar18 + ((long)unaff_x25 - (long)pbVar21);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar18;
                  if (pbVar18 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar21) {
                      pbVar21 = unaff_x23;
                    }
                    pbVar21 = pbVar21 + (long)pbVar18;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar21 = (byte *)0x0;
              }
              else {
                if (uVar25 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar20 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar31 = *(long *)(pbVar18 + 0x10);
                unaff_x24 = *(byte **)(pbVar18 + 0x18);
                func_0x000107c5ec30();
                pbVar21 = pbVar18;
                if (pbVar18 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar31,(long)pbVar21)) {
                    /* WARNING: Does not return */
                    pcVar14 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar14)();
                  }
                  pbVar18 = pbVar18 + (lVar31 - (long)pbVar21);
                }
                unaff_x23 = unaff_x24 + -lVar31;
                if (SBORROW8((long)unaff_x24,lVar31)) {
                    /* WARNING: Does not return */
                  pcVar14 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar14)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar18;
                unaff_x25 = pbVar20;
                if (pbVar18 == (byte *)0x0) {
                  pbVar21 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar21) {
                    pbVar21 = unaff_x23;
                  }
                  pbVar21 = pbVar21 + (long)pbVar18;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar20 & 0x3fffffffffffffff;
              unaff_x21 = (byte *)0x0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar18,pbVar21,
                                  pbVar17,pbVar24);
              pbVar17 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              pbVar20 = pbVar21;
              unaff_x22 = pbVar24;
            }
            else {
              pbVar17 = (byte *)(ulong)(uVar27 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar17;
          }
          func_0x000107c60e78();
          plVar15 = (long *)((long)register0x00000008 + -0xc0);
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(byte **)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(byte **)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar21 = *(byte **)pbVar17;
          pbVar18 = *(byte **)(pbVar17 + 8);
          pbVar30 = *(byte **)(pbVar17 + 0x18);
          bVar34 = pbVar17[0x28];
          pbVar32 = (byte *)((ulong)*(uint *)(pbVar17 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar17 + 0x15) << 0x28 | (ulong)pbVar17[0x10]);
          pbVar22 = pbVar18;
          if (bVar34 < 3) {
            if (bVar34 == 0) {
              if (pbVar20[0x28] == 0) {
                lVar31 = *(long *)pbVar20;
                uVar19 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar21,lVar31,uVar19);
                return (byte *)(ulong)((uint)pbVar21 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar34 == 1) {
              if (pbVar20[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)(pbVar20 + 8);
              pbVar24 = *(byte **)(pbVar20 + 0x10);
              lVar31 = *(long *)pbVar20;
              uVar19 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar21,lVar31,uVar19);
              if (((ulong)pbVar21 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar21 = pbVar18;
              pbVar22 = pbVar32;
              if ((pbVar18 == pbVar23) && (pbVar32 == pbVar24)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar20[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)pbVar20;
              pbVar24 = *(byte **)(pbVar20 + 8);
              lVar31 = *(long *)(pbVar20 + 0x18);
              if ((pbVar21 == pbVar23) && (pbVar18 == pbVar24)) {
                if (((pbVar17[0x10] ^ pbVar20[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar30 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar31 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar31);
                func_0x000107c61174();
                pbVar20 = pbVar30;
                func_0x000107c60118();
                func_0x000107c61170(pbVar30);
                func_0x000107c61170(lVar31);
                pbVar30 = pbVar20;
joined_r0x000100e266a4:
                if (((ulong)pbVar30 & 1) == 0) {
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
            )(pbVar21,pbVar22,pbVar23,pbVar24,0);
            return pbVar21;
          }
          lVar33 = *(long *)(pbVar17 + 0x20);
          if (bVar34 < 5) {
            if (bVar34 != 3) {
              if (pbVar20[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)pbVar20;
              pbVar24 = *(byte **)(pbVar20 + 8);
              if (((pbVar21 == pbVar23) && (pbVar18 == pbVar24)) &&
                 (pbVar21 = pbVar32, pbVar22 = pbVar30, pbVar23 = *(byte **)(pbVar20 + 0x10),
                 pbVar24 = *(byte **)(pbVar20 + 0x18),
                 pbVar32 == *(byte **)(pbVar20 + 0x10) && pbVar30 == *(byte **)(pbVar20 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar20[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar20 != ((uint)pbVar21 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar24 = *(byte **)(pbVar20 + 0x10);
            lVar31 = *(long *)(pbVar20 + 0x20);
            if (pbVar32 == (byte *)0x0) {
              if (pbVar24 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar24 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar23 = *(byte **)(pbVar20 + 8);
              pbVar21 = pbVar18;
              pbVar22 = pbVar32;
              if ((pbVar18 != pbVar23) || (pbVar32 != pbVar24)) goto code_r0x000107c605b8;
            }
            if (lVar33 != 0) {
              if (lVar31 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar30 == *(byte **)(pbVar20 + 0x18)) && (lVar33 == lVar31)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar30,lVar33,*(byte **)(pbVar20 + 0x18),lVar31,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar31 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar34 != 5) {
            if ((((pbVar30 == (byte *)0x0 && pbVar18 == (byte *)0x0) && pbVar21 == (byte *)0x0) &&
                lVar33 == 0) && pbVar32 == (byte *)0x0) {
              if (pbVar20[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar33 = *(long *)(pbVar20 + 0x20);
              lVar31 = *(long *)(pbVar20 + 0x18);
              bVar34 = pbVar20[8] | (byte)lVar31;
              bVar35 = pbVar20[9] | (byte)((ulong)lVar31 >> 8);
              bVar36 = pbVar20[10] | (byte)((ulong)lVar31 >> 0x10);
              bVar37 = pbVar20[0xb] | (byte)((ulong)lVar31 >> 0x18);
              bVar38 = pbVar20[0xc] | (byte)((ulong)lVar31 >> 0x20);
              bVar39 = pbVar20[0xd] | (byte)((ulong)lVar31 >> 0x28);
              bVar40 = pbVar20[0xe] | (byte)((ulong)lVar31 >> 0x30);
              bVar41 = pbVar20[0xf] | (byte)((ulong)lVar31 >> 0x38);
              bVar42 = pbVar20[0x10] | (byte)lVar33;
              bVar43 = pbVar20[0x11] | (byte)((ulong)lVar33 >> 8);
              bVar44 = pbVar20[0x12] | (byte)((ulong)lVar33 >> 0x10);
              bVar45 = pbVar20[0x13] | (byte)((ulong)lVar33 >> 0x18);
              bVar46 = pbVar20[0x14] | (byte)((ulong)lVar33 >> 0x20);
              bVar47 = pbVar20[0x15] | (byte)((ulong)lVar33 >> 0x28);
              bVar48 = pbVar20[0x16] | (byte)((ulong)lVar33 >> 0x30);
              bVar49 = pbVar20[0x17] | (byte)((ulong)lVar33 >> 0x38);
              auVar50[1] = bVar35;
              auVar50[0] = bVar34;
              auVar50[2] = bVar36;
              auVar50[3] = bVar37;
              auVar50[4] = bVar38;
              auVar50[5] = bVar39;
              auVar50[6] = bVar40;
              auVar50[7] = bVar41;
              auVar50[8] = bVar42;
              auVar50[9] = bVar43;
              auVar50[10] = bVar44;
              auVar50[0xb] = bVar45;
              auVar50[0xc] = bVar46;
              auVar50[0xd] = bVar47;
              auVar50[0xe] = bVar48;
              auVar50[0xf] = bVar49;
              auVar11[1] = bVar35;
              auVar11[0] = bVar34;
              auVar11[2] = bVar36;
              auVar11[3] = bVar37;
              auVar11[4] = bVar38;
              auVar11[5] = bVar39;
              auVar11[6] = bVar40;
              auVar11[7] = bVar41;
              auVar11[8] = bVar42;
              auVar11[9] = bVar43;
              auVar11[10] = bVar44;
              auVar11[0xb] = bVar45;
              auVar11[0xc] = bVar46;
              auVar11[0xd] = bVar47;
              auVar11[0xe] = bVar48;
              auVar11[0xf] = bVar49;
              auVar50 = NEON_ext(auVar50,auVar11,8,1);
              if (CONCAT17(bVar41 | auVar50[7],
                           CONCAT16(bVar40 | auVar50[6],
                                    CONCAT15(bVar39 | auVar50[5],
                                             CONCAT14(bVar38 | auVar50[4],
                                                      CONCAT13(bVar37 | auVar50[3],
                                                               CONCAT12(bVar36 | auVar50[2],
                                                                        CONCAT11(bVar35 | auVar50[1]
                                                                                 ,bVar34 | auVar50[0
                                                  ]))))))) == 0 && *(long *)pbVar20 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar21 == (byte *)0x1) &&
               (((pbVar30 == (byte *)0x0 && pbVar18 == (byte *)0x0) && pbVar32 == (byte *)0x0) &&
                lVar33 == 0)) {
              if (pbVar20[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar20 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar20[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar20 != 2) {
                return (byte *)0x0;
              }
            }
            lVar33 = *(long *)(pbVar20 + 0x20);
            lVar31 = *(long *)(pbVar20 + 0x18);
            bVar34 = pbVar20[8] | (byte)lVar31;
            bVar35 = pbVar20[9] | (byte)((ulong)lVar31 >> 8);
            bVar36 = pbVar20[10] | (byte)((ulong)lVar31 >> 0x10);
            bVar37 = pbVar20[0xb] | (byte)((ulong)lVar31 >> 0x18);
            bVar38 = pbVar20[0xc] | (byte)((ulong)lVar31 >> 0x20);
            bVar39 = pbVar20[0xd] | (byte)((ulong)lVar31 >> 0x28);
            bVar40 = pbVar20[0xe] | (byte)((ulong)lVar31 >> 0x30);
            bVar41 = pbVar20[0xf] | (byte)((ulong)lVar31 >> 0x38);
            bVar42 = pbVar20[0x10] | (byte)lVar33;
            bVar43 = pbVar20[0x11] | (byte)((ulong)lVar33 >> 8);
            bVar44 = pbVar20[0x12] | (byte)((ulong)lVar33 >> 0x10);
            bVar45 = pbVar20[0x13] | (byte)((ulong)lVar33 >> 0x18);
            bVar46 = pbVar20[0x14] | (byte)((ulong)lVar33 >> 0x20);
            bVar47 = pbVar20[0x15] | (byte)((ulong)lVar33 >> 0x28);
            bVar48 = pbVar20[0x16] | (byte)((ulong)lVar33 >> 0x30);
            bVar49 = pbVar20[0x17] | (byte)((ulong)lVar33 >> 0x38);
            auVar9[1] = bVar35;
            auVar9[0] = bVar34;
            auVar9[2] = bVar36;
            auVar9[3] = bVar37;
            auVar9[4] = bVar38;
            auVar9[5] = bVar39;
            auVar9[6] = bVar40;
            auVar9[7] = bVar41;
            auVar9[8] = bVar42;
            auVar9[9] = bVar43;
            auVar9[10] = bVar44;
            auVar9[0xb] = bVar45;
            auVar9[0xc] = bVar46;
            auVar9[0xd] = bVar47;
            auVar9[0xe] = bVar48;
            auVar9[0xf] = bVar49;
            auVar10[1] = bVar35;
            auVar10[0] = bVar34;
            auVar10[2] = bVar36;
            auVar10[3] = bVar37;
            auVar10[4] = bVar38;
            auVar10[5] = bVar39;
            auVar10[6] = bVar40;
            auVar10[7] = bVar41;
            auVar10[8] = bVar42;
            auVar10[9] = bVar43;
            auVar10[10] = bVar44;
            auVar10[0xb] = bVar45;
            auVar10[0xc] = bVar46;
            auVar10[0xd] = bVar47;
            auVar10[0xe] = bVar48;
            auVar10[0xf] = bVar49;
            auVar50 = NEON_ext(auVar9,auVar10,8,1);
            lVar31 = CONCAT17(bVar41 | auVar50[7],
                              CONCAT16(bVar40 | auVar50[6],
                                       CONCAT15(bVar39 | auVar50[5],
                                                CONCAT14(bVar38 | auVar50[4],
                                                         CONCAT13(bVar37 | auVar50[3],
                                                                  CONCAT12(bVar36 | auVar50[2],
                                                                           CONCAT11(bVar35 | auVar50
                                                  [1],bVar34 | auVar50[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar20[0x28] != 5) {
            return (byte *)0x0;
          }
          pbVar17 = *(byte **)(pbVar20 + 8);
          pbVar24 = *(byte **)(pbVar20 + 0x10);
          lVar31 = *(long *)pbVar20;
          uVar19 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar21,lVar31,uVar19);
          if (((ulong)pbVar21 & 1) == 0) {
            return (byte *)0x0;
          }
          plVar1 = (long *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          puVar2 = (ulong *)((long)register0x00000008 + -0xa0);
          plVar5 = (long *)((long)register0x00000008 + -0x98);
          plVar3 = (long *)((long)register0x00000008 + -0xb0);
          plVar6 = (long *)((long)register0x00000008 + -0xa8);
          plVar7 = (long *)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
          pbVar20 = pbVar32;
          unaff_x19 = (byte *)*plVar5;
          unaff_x20 = *puVar2;
          unaff_x21 = (byte *)*plVar6;
          unaff_x22 = (byte *)*plVar3;
          unaff_x23 = (byte *)*plVar7;
          unaff_x24 = (byte *)*plVar15;
          unaff_x29 = (undefined1 *)*plVar1;
        } while( true );
      }
      FUN_101c2e154();
      FUN_101c2e154(pbVar30,uVar29);
      func_0x000101c2e178(pbVar30,uVar29);
    }
    else {
      if ((uVar29 >> 0x3d & 1) != 0) {
        FUN_101c2e154();
        FUN_101c2e154(pbVar30,uVar29);
        unaff_x30 = 0x101c2eb08;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        pbVar18 = pbVar21;
        pbVar20 = (byte *)(uVar27 & 0xdfffffffffffffff);
        pbVar17 = pbVar30;
        pbVar24 = (byte *)(uVar29 & 0xdfffffffffffffff);
        unaff_x19 = pbVar30;
        unaff_x20 = uVar29;
        unaff_x21 = pbVar8;
        unaff_x22 = pbVar32;
        unaff_x23 = pbVar23;
        unaff_x24 = pbVar22;
        unaff_x25 = pbVar21;
        unaff_x26 = uVar27;
        unaff_x29 = puVar4;
        goto code_r0x000100e25fcc;
      }
      FUN_101c2e154();
      FUN_101c2e154(pbVar30,uVar29);
    }
    goto LAB_101c2ea10;
  }
  FUN_101c2e154();
  FUN_101c2e154(pbVar30,uVar29);
  func_0x000101c2e178(pbVar21,uVar27);
  pbVar21 = pbVar30;
  uVar27 = uVar29;
LAB_101c2ea10:
  func_0x000101c2e178(pbVar21,uVar27);
  return (byte *)0x0;
}



/* Entry: 101c2e940; end: 101c2eb2b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2eb04: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c2eb08) */
/* WARNING: Removing unreachable block (ram,0x000101c2eb28) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2e940(byte *param_1,ulong param_2,byte *param_3,byte *param_4,byte *param_5,
                    ulong param_6,byte *param_7,byte *param_8)

{
  long *plVar1;
  ulong *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long *plVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  uint uVar11;
  uint uVar12;
  code *pcVar13;
  undefined8 *puVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte *pbVar23;
  uint uVar24;
  int iVar25;
  ulong uVar26;
  uint uVar27;
  ulong uVar28;
  byte *pbVar29;
  byte *unaff_x19;
  long lVar30;
  ulong unaff_x20;
  byte *unaff_x21;
  byte *pbVar31;
  byte *unaff_x22;
  long lVar32;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong unaff_x26;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar44;
  byte bVar45;
  byte bVar46;
  byte bVar47;
  byte bVar48;
  undefined1 auVar49 [16];
  
  puVar4 = &stack0xfffffffffffffff0;
  pbVar17 = param_3;
  pbVar19 = param_4;
  pbVar16 = param_7;
  pbVar21 = param_8;
  if (((param_2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if ((param_6 & 0x3000000000000000) == 0x3000000000000000) {
      FUN_101c2e154();
      FUN_101c2e154(param_5,param_6);
      func_0x000101c2e178(param_1,param_2);
      goto code_r0x000100e25fcc;
    }
  }
  else if ((param_6 & 0x3000000000000000) != 0x3000000000000000) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if ((param_6 >> 0x3d & 1) == 0) {
        FUN_101c2e154();
        FUN_101c2e154(param_5,param_6);
        func_0x000101c2e178(param_1,param_2);
        if ((int)param_1 != (int)param_5) {
          return (byte *)0x0;
        }
code_r0x000100e25fcc:
        do {
          *(ulong *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(byte **)((long)register0x00000008 + -0x30) = unaff_x22;
          *(byte **)((long)register0x00000008 + -0x28) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar11 = (uint)((ulong)pbVar19 >> 0x20);
          uVar24 = uVar11 >> 0x1e;
          uVar12 = (uint)((ulong)pbVar21 >> 0x20);
          uVar27 = uVar12 >> 0x1e;
          iVar15 = (int)pbVar17;
          if ((ulong)pbVar19 >> 0x3e == 3) {
            uVar26 = 0;
            if ((((pbVar17 != (byte *)0x0) || (pbVar19 != (byte *)0xc000000000000000)) ||
                ((ulong)pbVar21 >> 0x3e < 3)) ||
               ((uVar26 = 0, pbVar16 != (byte *)0x0 || (pbVar21 != (byte *)0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar16 = (byte *)0x1;
          }
          else if (uVar11 >> 0x1e < 2) {
            if (uVar24 == 0) {
              uVar26 = (ulong)pbVar19 >> 0x30 & 0xff;
            }
            else {
              iVar25 = (int)((ulong)pbVar17 >> 0x20);
              if (SBORROW4(iVar25,iVar15)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar13)();
              }
              uVar26 = (ulong)(iVar25 - iVar15);
            }
joined_r0x000100e26170:
            if (1 < uVar12 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar27 == 0) {
              uVar28 = (ulong)pbVar21 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar25 = (int)((ulong)pbVar16 >> 0x20);
            if (SBORROW4(iVar25,(int)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar13)();
            }
            if (uVar26 == (long)(iVar25 - (int)pbVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar16 = (byte *)0x0;
          }
          else {
            if (uVar24 == 2) {
              uVar26 = *(long *)(pbVar17 + 0x18) - *(long *)(pbVar17 + 0x10);
              if (SBORROW8(*(long *)(pbVar17 + 0x18),*(long *)(pbVar17 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar13)();
              }
              goto joined_r0x000100e26170;
            }
            uVar26 = 0;
            if (uVar27 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar27 == 2) {
              uVar28 = *(long *)(pbVar16 + 0x18) - *(long *)(pbVar16 + 0x10);
              if (SBORROW8(*(long *)(pbVar16 + 0x18),*(long *)(pbVar16 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar13)();
              }
code_r0x000100e2608c:
              if (uVar26 != uVar28) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar26 < 1) goto code_r0x000100e26128;
              if (uVar24 < 2) {
                if (uVar24 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar17;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar17 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar17 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar17 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar17 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar17 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar17 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar17 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar19;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar19 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar19 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar19 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar19 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar19 >> 0x28);
                  pbVar19 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar19 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                  unaff_x21 = (byte *)0x0;
                  func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                      (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar16 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar15;
                unaff_x23 = (byte *)(((long)pbVar17 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar17 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar13)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar19;
                if (pbVar17 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar17 = (byte *)0x0;
                }
                else {
                  pbVar20 = pbVar17;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar20)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar13)();
                  }
                  pbVar17 = pbVar17 + ((long)unaff_x25 - (long)pbVar20);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar17;
                  if (pbVar17 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar20) {
                      pbVar20 = unaff_x23;
                    }
                    pbVar20 = pbVar20 + (long)pbVar17;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar20 = (byte *)0x0;
              }
              else {
                if (uVar24 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar19 = (byte *)((long)register0x00000008 + -0x70);
                  goto code_r0x000100e26260;
                }
                lVar30 = *(long *)(pbVar17 + 0x10);
                unaff_x24 = *(byte **)(pbVar17 + 0x18);
                func_0x000107c5ec30();
                pbVar20 = pbVar17;
                if (pbVar17 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar30,(long)pbVar20)) {
                    /* WARNING: Does not return */
                    pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar13)();
                  }
                  pbVar17 = pbVar17 + (lVar30 - (long)pbVar20);
                }
                unaff_x23 = unaff_x24 + -lVar30;
                if (SBORROW8((long)unaff_x24,lVar30)) {
                    /* WARNING: Does not return */
                  pcVar13 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar13)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar17;
                unaff_x25 = pbVar19;
                if (pbVar17 == (byte *)0x0) {
                  pbVar20 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar20) {
                    pbVar20 = unaff_x23;
                  }
                  pbVar20 = pbVar20 + (long)pbVar17;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar19 & 0x3fffffffffffffff;
              unaff_x21 = (byte *)0x0;
              func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar17,pbVar20,
                                  pbVar16,pbVar21);
              pbVar16 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              pbVar19 = pbVar20;
              unaff_x22 = pbVar21;
            }
            else {
              pbVar16 = (byte *)(ulong)(uVar26 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar16;
          }
          func_0x000107c60e78();
          puVar14 = (undefined8 *)((long)register0x00000008 + -0xc0);
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(byte **)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(byte **)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar20 = *(byte **)pbVar16;
          pbVar17 = *(byte **)(pbVar16 + 8);
          pbVar29 = *(byte **)(pbVar16 + 0x18);
          bVar33 = pbVar16[0x28];
          pbVar31 = (byte *)((ulong)*(uint *)(pbVar16 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar16 + 0x15) << 0x28 | (ulong)pbVar16[0x10]);
          pbVar21 = pbVar17;
          if (bVar33 < 3) {
            if (bVar33 == 0) {
              if (pbVar19[0x28] == 0) {
                lVar30 = *(long *)pbVar19;
                uVar18 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar20,lVar30,uVar18);
                return (byte *)(ulong)((uint)pbVar20 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar33 == 1) {
              if (pbVar19[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar22 = *(byte **)(pbVar19 + 8);
              pbVar23 = *(byte **)(pbVar19 + 0x10);
              lVar30 = *(long *)pbVar19;
              uVar18 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar20,lVar30,uVar18);
              if (((ulong)pbVar20 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar20 = pbVar17;
              pbVar21 = pbVar31;
              if ((pbVar17 == pbVar22) && (pbVar31 == pbVar23)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar19[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar22 = *(byte **)pbVar19;
              pbVar23 = *(byte **)(pbVar19 + 8);
              lVar30 = *(long *)(pbVar19 + 0x18);
              if ((pbVar20 == pbVar22) && (pbVar17 == pbVar23)) {
                if (((pbVar16[0x10] ^ pbVar19[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar29 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar30 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar30);
                func_0x000107c61174();
                pbVar19 = pbVar29;
                func_0x000107c60118();
                func_0x000107c61170(pbVar29);
                func_0x000107c61170(lVar30);
                pbVar29 = pbVar19;
joined_r0x000100e266a4:
                if (((ulong)pbVar29 & 1) == 0) {
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
            )(pbVar20,pbVar21,pbVar22,pbVar23,0);
            return pbVar20;
          }
          lVar32 = *(long *)(pbVar16 + 0x20);
          if (bVar33 < 5) {
            if (bVar33 != 3) {
              if (pbVar19[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar22 = *(byte **)pbVar19;
              pbVar23 = *(byte **)(pbVar19 + 8);
              if (((pbVar20 == pbVar22) && (pbVar17 == pbVar23)) &&
                 (pbVar20 = pbVar31, pbVar21 = pbVar29, pbVar22 = *(byte **)(pbVar19 + 0x10),
                 pbVar23 = *(byte **)(pbVar19 + 0x18),
                 pbVar31 == *(byte **)(pbVar19 + 0x10) && pbVar29 == *(byte **)(pbVar19 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar19[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar19 != ((uint)pbVar20 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar23 = *(byte **)(pbVar19 + 0x10);
            lVar30 = *(long *)(pbVar19 + 0x20);
            if (pbVar31 == (byte *)0x0) {
              if (pbVar23 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar23 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar22 = *(byte **)(pbVar19 + 8);
              pbVar20 = pbVar17;
              pbVar21 = pbVar31;
              if ((pbVar17 != pbVar22) || (pbVar31 != pbVar23)) goto code_r0x000107c605b8;
            }
            if (lVar32 != 0) {
              if (lVar30 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar29 == *(byte **)(pbVar19 + 0x18)) && (lVar32 == lVar30)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar29,lVar32,*(byte **)(pbVar19 + 0x18),lVar30,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar30 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar33 != 5) {
            if ((((pbVar29 == (byte *)0x0 && pbVar17 == (byte *)0x0) && pbVar20 == (byte *)0x0) &&
                lVar32 == 0) && pbVar31 == (byte *)0x0) {
              if (pbVar19[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar32 = *(long *)(pbVar19 + 0x20);
              lVar30 = *(long *)(pbVar19 + 0x18);
              bVar33 = pbVar19[8] | (byte)lVar30;
              bVar34 = pbVar19[9] | (byte)((ulong)lVar30 >> 8);
              bVar35 = pbVar19[10] | (byte)((ulong)lVar30 >> 0x10);
              bVar36 = pbVar19[0xb] | (byte)((ulong)lVar30 >> 0x18);
              bVar37 = pbVar19[0xc] | (byte)((ulong)lVar30 >> 0x20);
              bVar38 = pbVar19[0xd] | (byte)((ulong)lVar30 >> 0x28);
              bVar39 = pbVar19[0xe] | (byte)((ulong)lVar30 >> 0x30);
              bVar40 = pbVar19[0xf] | (byte)((ulong)lVar30 >> 0x38);
              bVar41 = pbVar19[0x10] | (byte)lVar32;
              bVar42 = pbVar19[0x11] | (byte)((ulong)lVar32 >> 8);
              bVar43 = pbVar19[0x12] | (byte)((ulong)lVar32 >> 0x10);
              bVar44 = pbVar19[0x13] | (byte)((ulong)lVar32 >> 0x18);
              bVar45 = pbVar19[0x14] | (byte)((ulong)lVar32 >> 0x20);
              bVar46 = pbVar19[0x15] | (byte)((ulong)lVar32 >> 0x28);
              bVar47 = pbVar19[0x16] | (byte)((ulong)lVar32 >> 0x30);
              bVar48 = pbVar19[0x17] | (byte)((ulong)lVar32 >> 0x38);
              auVar49[1] = bVar34;
              auVar49[0] = bVar33;
              auVar49[2] = bVar35;
              auVar49[3] = bVar36;
              auVar49[4] = bVar37;
              auVar49[5] = bVar38;
              auVar49[6] = bVar39;
              auVar49[7] = bVar40;
              auVar49[8] = bVar41;
              auVar49[9] = bVar42;
              auVar49[10] = bVar43;
              auVar49[0xb] = bVar44;
              auVar49[0xc] = bVar45;
              auVar49[0xd] = bVar46;
              auVar49[0xe] = bVar47;
              auVar49[0xf] = bVar48;
              auVar10[1] = bVar34;
              auVar10[0] = bVar33;
              auVar10[2] = bVar35;
              auVar10[3] = bVar36;
              auVar10[4] = bVar37;
              auVar10[5] = bVar38;
              auVar10[6] = bVar39;
              auVar10[7] = bVar40;
              auVar10[8] = bVar41;
              auVar10[9] = bVar42;
              auVar10[10] = bVar43;
              auVar10[0xb] = bVar44;
              auVar10[0xc] = bVar45;
              auVar10[0xd] = bVar46;
              auVar10[0xe] = bVar47;
              auVar10[0xf] = bVar48;
              auVar49 = NEON_ext(auVar49,auVar10,8,1);
              if (CONCAT17(bVar40 | auVar49[7],
                           CONCAT16(bVar39 | auVar49[6],
                                    CONCAT15(bVar38 | auVar49[5],
                                             CONCAT14(bVar37 | auVar49[4],
                                                      CONCAT13(bVar36 | auVar49[3],
                                                               CONCAT12(bVar35 | auVar49[2],
                                                                        CONCAT11(bVar34 | auVar49[1]
                                                                                 ,bVar33 | auVar49[0
                                                  ]))))))) == 0 && *(long *)pbVar19 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar20 == (byte *)0x1) &&
               (((pbVar29 == (byte *)0x0 && pbVar17 == (byte *)0x0) && pbVar31 == (byte *)0x0) &&
                lVar32 == 0)) {
              if (pbVar19[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar19 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar19[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar19 != 2) {
                return (byte *)0x0;
              }
            }
            lVar32 = *(long *)(pbVar19 + 0x20);
            lVar30 = *(long *)(pbVar19 + 0x18);
            bVar33 = pbVar19[8] | (byte)lVar30;
            bVar34 = pbVar19[9] | (byte)((ulong)lVar30 >> 8);
            bVar35 = pbVar19[10] | (byte)((ulong)lVar30 >> 0x10);
            bVar36 = pbVar19[0xb] | (byte)((ulong)lVar30 >> 0x18);
            bVar37 = pbVar19[0xc] | (byte)((ulong)lVar30 >> 0x20);
            bVar38 = pbVar19[0xd] | (byte)((ulong)lVar30 >> 0x28);
            bVar39 = pbVar19[0xe] | (byte)((ulong)lVar30 >> 0x30);
            bVar40 = pbVar19[0xf] | (byte)((ulong)lVar30 >> 0x38);
            bVar41 = pbVar19[0x10] | (byte)lVar32;
            bVar42 = pbVar19[0x11] | (byte)((ulong)lVar32 >> 8);
            bVar43 = pbVar19[0x12] | (byte)((ulong)lVar32 >> 0x10);
            bVar44 = pbVar19[0x13] | (byte)((ulong)lVar32 >> 0x18);
            bVar45 = pbVar19[0x14] | (byte)((ulong)lVar32 >> 0x20);
            bVar46 = pbVar19[0x15] | (byte)((ulong)lVar32 >> 0x28);
            bVar47 = pbVar19[0x16] | (byte)((ulong)lVar32 >> 0x30);
            bVar48 = pbVar19[0x17] | (byte)((ulong)lVar32 >> 0x38);
            auVar8[1] = bVar34;
            auVar8[0] = bVar33;
            auVar8[2] = bVar35;
            auVar8[3] = bVar36;
            auVar8[4] = bVar37;
            auVar8[5] = bVar38;
            auVar8[6] = bVar39;
            auVar8[7] = bVar40;
            auVar8[8] = bVar41;
            auVar8[9] = bVar42;
            auVar8[10] = bVar43;
            auVar8[0xb] = bVar44;
            auVar8[0xc] = bVar45;
            auVar8[0xd] = bVar46;
            auVar8[0xe] = bVar47;
            auVar8[0xf] = bVar48;
            auVar9[1] = bVar34;
            auVar9[0] = bVar33;
            auVar9[2] = bVar35;
            auVar9[3] = bVar36;
            auVar9[4] = bVar37;
            auVar9[5] = bVar38;
            auVar9[6] = bVar39;
            auVar9[7] = bVar40;
            auVar9[8] = bVar41;
            auVar9[9] = bVar42;
            auVar9[10] = bVar43;
            auVar9[0xb] = bVar44;
            auVar9[0xc] = bVar45;
            auVar9[0xd] = bVar46;
            auVar9[0xe] = bVar47;
            auVar9[0xf] = bVar48;
            auVar49 = NEON_ext(auVar8,auVar9,8,1);
            lVar30 = CONCAT17(bVar40 | auVar49[7],
                              CONCAT16(bVar39 | auVar49[6],
                                       CONCAT15(bVar38 | auVar49[5],
                                                CONCAT14(bVar37 | auVar49[4],
                                                         CONCAT13(bVar36 | auVar49[3],
                                                                  CONCAT12(bVar35 | auVar49[2],
                                                                           CONCAT11(bVar34 | auVar49
                                                  [1],bVar33 | auVar49[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar19[0x28] != 5) {
            return (byte *)0x0;
          }
          pbVar16 = *(byte **)(pbVar19 + 8);
          pbVar21 = *(byte **)(pbVar19 + 0x10);
          lVar30 = *(long *)pbVar19;
          uVar18 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar20,lVar30,uVar18);
          if (((ulong)pbVar20 & 1) == 0) {
            return (byte *)0x0;
          }
          plVar1 = (long *)((long)register0x00000008 + -0x90);
          unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
          puVar2 = (ulong *)((long)register0x00000008 + -0xa0);
          plVar5 = (long *)((long)register0x00000008 + -0x98);
          puVar3 = (undefined8 *)((long)register0x00000008 + -0xb0);
          puVar6 = (undefined8 *)((long)register0x00000008 + -0xa8);
          puVar7 = (undefined8 *)((long)register0x00000008 + -0xb8);
          register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
          pbVar19 = pbVar31;
          unaff_x19 = (byte *)*plVar5;
          unaff_x20 = *puVar2;
          unaff_x21 = (byte *)*puVar6;
          unaff_x22 = (byte *)*puVar3;
          unaff_x23 = (byte *)*puVar7;
          unaff_x24 = (byte *)*puVar14;
          unaff_x29 = (undefined1 *)*plVar1;
        } while( true );
      }
      FUN_101c2e154();
      FUN_101c2e154(param_5,param_6);
      func_0x000101c2e178(param_5,param_6);
    }
    else {
      if ((param_6 >> 0x3d & 1) != 0) {
        FUN_101c2e154();
        FUN_101c2e154(param_5,param_6);
        unaff_x30 = 0x101c2eb08;
        register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffa0;
        pbVar17 = param_1;
        pbVar19 = (byte *)(param_2 & 0xdfffffffffffffff);
        pbVar16 = param_5;
        pbVar21 = (byte *)(param_6 & 0xdfffffffffffffff);
        unaff_x19 = param_5;
        unaff_x20 = param_6;
        unaff_x21 = param_8;
        unaff_x22 = param_7;
        unaff_x23 = param_4;
        unaff_x24 = param_3;
        unaff_x25 = param_1;
        unaff_x26 = param_2;
        unaff_x29 = puVar4;
        goto code_r0x000100e25fcc;
      }
      FUN_101c2e154();
      FUN_101c2e154(param_5,param_6);
    }
    goto LAB_101c2ea10;
  }
  FUN_101c2e154();
  FUN_101c2e154(param_5,param_6);
  func_0x000101c2e178(param_1,param_2);
  param_1 = param_5;
  param_2 = param_6;
LAB_101c2ea10:
  func_0x000101c2e178(param_1,param_2);
  return (byte *)0x0;
}



/* Entry: 101c2eb2c; end: 101c2eb6b;  */

void FUN_101c2eb2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1368;
  func_0x000107c61520(&UNK_10d9e1368,&UNK_110459158);
  puRam0000000112e0a460 = puVar1;
  return;
}



/* Entry: 101c2eb6c; end: 101c2eb8f;  */

void FUN_101c2eb6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2eb90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c2eb90; end: 101c2ebcf;  */

void FUN_101c2eb90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1340;
  func_0x000107c61520(&UNK_10d9e1340,&UNK_110459158);
  puRam0000000112e0a468 = puVar1;
  return;
}



/* Entry: 101c2ebd0; end: 101c2ebfb;  */

void FUN_101c2ebd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2eb2c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c2ebfc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c2ebfc; end: 101c2ec3b;  */

void FUN_101c2ebfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e12f8;
  func_0x000107c61520(&DAT_10d9e12f8,&UNK_110459158);
  puRam0000000112e0a470 = puVar1;
  return;
}



/* Entry: 101c2ec3c; end: 101c2ec3f;  */

void FUN_101c2ec3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e13a8;
  func_0x000107c61520(&UNK_10d9e13a8,&UNK_110459158);
  puRam0000000112e0a478 = puVar1;
  return;
}



/* Entry: 101c2ec40; end: 101c2ec7f;  */

void FUN_101c2ec40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e13a8;
  func_0x000107c61520(&UNK_10d9e13a8,&UNK_110459158);
  puRam0000000112e0a478 = puVar1;
  return;
}



/* Entry: 101c2ec80; end: 101c2ece3;  */

long FUN_101c2ec80(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c2ece4; end: 101c2ee0b;  */

undefined8 * FUN_101c2ece4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  if (((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  else {
    uVar3 = *param_2;
    func_0x000101c2e168(uVar3,uVar2);
    *param_1 = uVar3;
    param_1[1] = uVar2;
  }
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[2] = uVar3;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 101c2ee0c; end: 101c2eeab;  */

undefined8 * FUN_101c2ee0c(undefined8 *param_1)

{
  func_0x000101c2e18c(*param_1,param_1[1]);
  return param_1;
}



/* Entry: 101c2eeac; end: 101c2ef6b;  */

int FUN_101c2eeac(int *param_1,uint param_2)

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



/* Entry: 101c2ef6c; end: 101c2efaf;  */

undefined8 * FUN_101c2ef6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x000101c2e168(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x000101c2e18c(uVar2,uVar4);
  return param_1;
}



/* Entry: 101c2efb0; end: 101c2efe7;  */

undefined8 * FUN_101c2efb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x000101c2e18c(uVar1,uVar2);
  return param_1;
}



/* Entry: 101c2efe8; end: 101c2f0c7;  */

int FUN_101c2efe8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((2 < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 3;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = ((uVar1 >> 0x1c & 1) << 1 | uVar1 >> 0x1d & 1) ^ 3;
  if (1 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101c2f0c8; end: 101c2f107;  */

void FUN_101c2f0c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a488 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e1314;
  func_0x000107c61520(&DAT_10d9e1314,&UNK_110459158);
  puRam0000000112e0a488 = puVar1;
  return;
}



/* Entry: 101c2f108; end: 101c2f10f;  */

undefined8 * FUN_101c2f108(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x000101c2e168(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 101c2f110; end: 101c2f157;  */

void FUN_101c2f110(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e1510,0x16,2);
  uRam0000000113803de0 = uStack_38;
  uRam0000000113803dd8 = uStack_40;
  uRam0000000113803df0 = uStack_28;
  uRam0000000113803de8 = uStack_30;
  uRam0000000113803e00 = uStack_18;
  uRam0000000113803df8 = uStack_20;
  return;
}



/* Entry: 101c2f158; end: 101c2f1ef;  */

void FUN_101c2f158(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_101c2f1ac:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000101c2f1c8;
  pcVar3 = *(code **)(param_3 + 0xf0);
  goto LAB_101c2f194;
code_r0x000101c2f1c8:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0xf0);
LAB_101c2f194:
    (*pcVar3)();
  }
  goto LAB_101c2f1ac;
}



/* Entry: 101c2f1f0; end: 101c2f287;  */

void FUN_101c2f1f0(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if (((param_2 == 0) || ((**(code **)(param_7 + 0x50))(param_2,1,param_6,param_7), unaff_x21 == 0))
     && ((param_3 == 0 || ((**(code **)(param_7 + 0x50))(param_3,2,param_6,param_7), unaff_x21 == 0)
         ))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 101c2f288; end: 101c2f2bb;  */

void FUN_101c2f288(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 101c2f2bc; end: 101c2f2eb;  */

undefined1  [16] FUN_101c2f2bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101c2f2ec; end: 101c2f31f;  */

void FUN_101c2f2ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101c2f320; end: 101c2f333;  */

undefined1  [16] FUN_101c2f320(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c2f330;
  return auVar1;
}



/* Entry: 101c2f334; end: 101c2f36b;  */

void FUN_101c2f334(void)

{
  FUN_101c2f158();
  return;
}



/* Entry: 101c2f36c; end: 101c2f36f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c2f36c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c2f370; end: 101c2f3a7;  */

uint FUN_101c2f370(long param_1,long param_2)

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
  FUN_101c2f89c();
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



/* Entry: 101c2f3a8; end: 101c2f3d3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2f3a8(long *param_1)

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
  long *unaff_x20;
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
  
  if (*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)unaff_x20[2];
  pbVar25 = (byte *)unaff_x20[3];
  lVar24 = param_1[2];
  uVar16 = param_1[3];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(long **)(puVar7 + -0x20) = unaff_x20;
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
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
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
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
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
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
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
code_r0x000100e262a4:
        unaff_x20 = (long *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar9;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(long **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
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
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(long **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 101c2f3d4; end: 101c2f473;  */

/* WARNING: Possible PIC construction at 0x000101c2f420: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c2f430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c2f424) */
/* WARNING: Removing unreachable block (ram,0x000101c2f434) */

void FUN_101c2f3d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0a490 != -1) {
    func_0x000107c61568(0x112e0a490,FUN_101c2f110);
  }
  uVar5 = uRam0000000113803e00;
  uVar4 = uRam0000000113803df8;
  uVar3 = uRam0000000113803df0;
  uVar2 = uRam0000000113803de8;
  uVar1 = uRam0000000113803de0;
  *param_1 = uRam0000000113803dd8;
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



/* Entry: 101c2f474; end: 101c2f4af;  */

void FUN_101c2f474(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0a4b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0a4b0,&UNK_10d9e1508);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c2f4b0; end: 101c2f5a3;  */

void FUN_101c2f4b0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c2f5a4; end: 101c2f5cb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c2f5a4(long *param_1,long *param_2)

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
  
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return (byte *)0x0;
  }
  lVar24 = param_2[2];
  uVar16 = param_2[3];
  pbVar10 = (byte *)param_1[2];
  pbVar25 = (byte *)param_1[3];
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
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar21 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
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
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
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
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto code_r0x000100e26260;
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
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
code_r0x000100e262b0:
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
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
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
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          if (pbVar23 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar24 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar24);
          func_0x000107c61174();
          pbVar10 = pbVar23;
          func_0x000107c60118();
          func_0x000107c61170(pbVar23);
          func_0x000107c61170(lVar24);
          pbVar23 = pbVar10;
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
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101c2f5cc; end: 101c2f60b;  */

void FUN_101c2f5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a498 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1480;
  func_0x000107c61520(&UNK_10d9e1480,&UNK_110459358);
  puRam0000000112e0a498 = puVar1;
  return;
}



/* Entry: 101c2f60c; end: 101c2f62f;  */

void FUN_101c2f60c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2f630();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c2f630; end: 101c2f66f;  */

void FUN_101c2f630(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e1458;
  func_0x000107c61520(&UNK_10d9e1458,&UNK_110459358);
  puRam0000000112e0a4a0 = puVar1;
  return;
}



/* Entry: 101c2f670; end: 101c2f69b;  */

void FUN_101c2f670(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c2f5cc();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101329848();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c2f69c; end: 101c2f69f;  */

void FUN_101c2f69c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e14c0;
  func_0x000107c61520(&UNK_10d9e14c0,&UNK_110459358);
  puRam0000000112e0a4a8 = puVar1;
  return;
}



/* Entry: 101c2f6a0; end: 101c2f6df;  */

void FUN_101c2f6a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e14c0;
  func_0x000107c61520(&UNK_10d9e14c0,&UNK_110459358);
  puRam0000000112e0a4a8 = puVar1;
  return;
}



/* Entry: 101c2f6e0; end: 101c2f70b;  */

long FUN_101c2f6e0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c2f70c; end: 101c2f717;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c2f70c(long param_1)

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



/* Entry: 101c2f718; end: 101c2f7af;  */

undefined8 * FUN_101c2f718(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 101c2f7b0; end: 101c2f7e7;  */

undefined8 * FUN_101c2f7b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 101c2f7e8; end: 101c2f89b;  */

int FUN_101c2f7e8(int *param_1,uint param_2)

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



/* Entry: 101c2f89c; end: 101c2f8db;  */

void FUN_101c2f89c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0a4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e142c;
  func_0x000107c61520(&DAT_10d9e142c,&UNK_110459358);
  puRam0000000112e0a4b8 = puVar1;
  return;
}



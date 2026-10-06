/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039f38b8; end: 1039f394b;  */

/* WARNING: Possible PIC construction at 0x0001039f391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f3920) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */

void FUN_1039f38b8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_x5;
  uint in_w6;
  
  uVar1 = (uint)((ulong)in_x5 >> 0x3c) & 3 | (in_w6 & 0x3f) << 2;
  if (uVar1 < 3) {
    if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) {
      return;
    }
  }
  else if (((uVar1 != 3) && (uVar1 != 4)) && (uVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1039f394c; end: 1039f396f;  */

/* WARNING: Possible PIC construction at 0x0001039f39d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f39d8) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1039f394c(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong in_x5;
  uint in_w6;
  
  if (((in_x5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 && ((in_w6 ^ 0xffffffff) & 0xff) == 0
     ) {
    return;
  }
  uVar1 = (uint)(in_x5 >> 0x3c) & 3 | (in_w6 & 0x3f) << 2;
  if (uVar1 < 3) {
    if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) {
      return;
    }
  }
  else if (((uVar1 != 3) && (uVar1 != 4)) && (uVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1039f3970; end: 1039f3a03;  */

/* WARNING: Possible PIC construction at 0x0001039f39d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f39d8) */
/* WARNING: Removing unreachable block (ram,0x00010006c090) */
/* WARNING: Removing unreachable block (ram,0x00010006c09c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0cc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0a4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */
/* WARNING: Removing unreachable block (ram,0x00010006c0c4) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */

void FUN_1039f3970(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 in_x5;
  uint in_w6;
  
  uVar1 = (uint)((ulong)in_x5 >> 0x3c) & 3 | (in_w6 & 0x3f) << 2;
  if (uVar1 < 3) {
    if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) {
      return;
    }
  }
  else if (((uVar1 != 3) && (uVar1 != 4)) && (uVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1039f3a04; end: 1039f3aa3;  */

uint FUN_1039f3a04(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = *(undefined1 *)(param_1 + 6);
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = *(undefined1 *)(param_2 + 6);
  FUN_1039f5cf8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1039f3aa4; end: 1039f3b77;  */

/* WARNING: Removing unreachable block (ram,0x0001039f3b74) */

void FUN_1039f3aa4(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_1039f5f50();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x138))(unaff_x20 + 8,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1039f3b78; end: 1039f3c3f;  */

void FUN_1039f3b78(undefined8 param_1,long param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_7 + 0x118);
    uVar1 = param_1;
    FUN_1039f5f50();
    (*pcVar2)(param_2,1,&UNK_1106bcd58,uVar1,param_6,param_7);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((param_3 & 1) == 0) || ((**(code **)(param_7 + 0x68))(1,2,param_6,param_7), unaff_x21 == 0))
  {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1039f3c40; end: 1039f3c8b;  */

void FUN_1039f3c40(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 1039f3c8c; end: 1039f3cbb;  */

undefined1  [16] FUN_1039f3c8c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1039f3cbc; end: 1039f3cef;  */

void FUN_1039f3cbc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1039f3cf0; end: 1039f3d03;  */

undefined1  [16] FUN_1039f3cf0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1039f3d00;
  return auVar1;
}



/* Entry: 1039f3d04; end: 1039f3d3f;  */

void FUN_1039f3d04(void)

{
  FUN_1039f3aa4();
  return;
}



/* Entry: 1039f3d40; end: 1039f3d43;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1039f3d40(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1039f3d44; end: 1039f3d7b;  */

uint FUN_1039f3d44(long param_1,long param_2)

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
  func_0x0001039f717c();
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



/* Entry: 1039f3d7c; end: 1039f3dff;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039f3d7c(undefined8 *param_1)

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
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  byte *pbVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong *unaff_x20;
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
  
  bVar26 = *(byte *)(param_1 + 1);
  lVar23 = param_1[2];
  uVar16 = param_1[3];
  uVar12 = *unaff_x20;
  uVar20 = unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  FUN_1039f5814(uVar12,*param_1);
  if (((uVar12 & 1) == 0) || (((bVar26 ^ (byte)uVar20) & 1) != 0)) {
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar20 = 0, lVar23 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar24 >> 0x30 & 0xff;
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
        uVar12 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
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
        uVar12 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar12) goto code_r0x000100e26154;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar24;
          if (pbVar9 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar9 = (byte *)0x0;
          }
          else {
            pbVar13 = pbVar9;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar13);
            func_0x000107c5ec38();
            unaff_x19 = pbVar9;
            if (pbVar9 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar13) {
                pbVar13 = unaff_x23;
              }
              pbVar13 = pbVar13 + (long)pbVar9;
              goto code_r0x000100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar13 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
          }
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar13);
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
            pbVar13 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar13) {
              pbVar13 = unaff_x23;
            }
            pbVar13 = pbVar13 + (long)pbVar9;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar23,
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
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 == pbVar15) && (pbVar24 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar23 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar13[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar13 != ((uint)pbVar11 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar13 + 0x10);
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 != pbVar15) || (pbVar24 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
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
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar26 = pbVar13[8] | (byte)lVar23;
        bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar13[0x10] | (byte)lVar25;
        bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar26 = pbVar13[8] | (byte)lVar23;
      bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar13[0x10] | (byte)lVar25;
      bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
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



/* Entry: 1039f3e00; end: 1039f3e9f;  */

/* WARNING: Possible PIC construction at 0x0001039f3e4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039f3e5c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f3e50) */
/* WARNING: Removing unreachable block (ram,0x0001039f3e60) */

void FUN_1039f3e00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9798 != -1) {
    func_0x000107c61568(0x112fc9798,0x1039f3a5c);
  }
  uVar5 = uRam000000011380c6a0;
  uVar4 = uRam000000011380c698;
  uVar3 = uRam000000011380c690;
  uVar2 = uRam000000011380c688;
  uVar1 = uRam000000011380c680;
  *param_1 = uRam000000011380c678;
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



/* Entry: 1039f3ea0; end: 1039f3edb;  */

void FUN_1039f3ea0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fc9830;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fc9830,&UNK_10dc38a70);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1039f3edc; end: 1039f3fef;  */

void FUN_1039f3edc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1039f3ff0; end: 1039f406f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039f3ff0(ulong *param_1,undefined8 *param_2)

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
  ulong uVar18;
  int iVar19;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  ulong unaff_x20;
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
  
  uVar18 = *param_1;
  uVar20 = param_1[1];
  pbVar9 = (byte *)param_1[2];
  pbVar24 = (byte *)param_1[3];
  bVar26 = *(byte *)(param_2 + 1);
  lVar23 = param_2[2];
  uVar15 = param_2[3];
  FUN_1039f5814(uVar18,*param_2);
  if (((uVar18 & 1) == 0) || ((((byte)uVar20 ^ bVar26) & 1) != 0)) {
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar17 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar15 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar15 >> 0x3e < 3)) || ((uVar20 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar17 == 0) {
        uVar20 = (ulong)pbVar24 >> 0x30 & 0xff;
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
        uVar18 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar17 == 2) {
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
        uVar18 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar20 != uVar18) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar20 < 1) goto code_r0x000100e26128;
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
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
              goto code_r0x000100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar17 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
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
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
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
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
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
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
                                                                           bVar26 | auVar42[0]))))))
                    ) == 0 && *(long *)pbVar12 == 0) {
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
                                                                     CONCAT11(bVar27 | auVar42[1],
                                                                              bVar26 | auVar42[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar15 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
    if (((ulong)pbVar11 & 1) == 0) {
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



/* Entry: 1039f4070; end: 1039f40b7;  */

void FUN_1039f4070(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc38a90,0x4e,2);
  uRam000000011380c6b0 = uStack_38;
  uRam000000011380c6a8 = uStack_40;
  uRam000000011380c6c0 = uStack_28;
  uRam000000011380c6b8 = uStack_30;
  uRam000000011380c6d0 = uStack_18;
  uRam000000011380c6c8 = uStack_20;
  return;
}



/* Entry: 1039f40b8; end: 1039f428b;  */

/* WARNING: Removing unreachable block (ram,0x0001039f41a4) */
/* WARNING: Removing unreachable block (ram,0x0001039f4254) */
/* WARNING: Removing unreachable block (ram,0x0001039f422c) */
/* WARNING: Removing unreachable block (ram,0x0001039f4288) */
/* WARNING: Removing unreachable block (ram,0x0001039f41d8) */

void FUN_1039f40b8(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar4 = *(code **)(param_3 + 0x150);
            goto LAB_1039f4244;
          }
          if (lVar1 == 2) {
            FUN_1039f428c(param_1);
          }
        }
        else if ((lVar1 == 3) || (lVar1 == 4)) goto LAB_1039f412c;
      }
      else if (lVar1 < 7) {
        if (lVar1 == 5) {
LAB_1039f412c:
          FUN_1039f4460(param_1);
        }
        else if (lVar1 == 6) {
          FUN_1039f4638(param_1);
        }
      }
      else if (lVar1 == 7) {
        pcVar4 = *(code **)(param_3 + 0x150);
LAB_1039f4244:
        (*pcVar4)();
      }
      else if (lVar1 == 8) {
        FUN_1039f4810();
      }
      else if (lVar1 == 0xb) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_1039f5f50();
        (*pcVar4)(unaff_x20 + 0x58,&UNK_1106bcd58,lVar1,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1039f428c; end: 1039f445f;  */

void FUN_1039f428c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x21;
  ulong uVar11;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  uStack_70 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar9 = lStack_68;
  uVar8 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      uVar11 = *(ulong *)(param_2 + 0x38);
      cVar6 = *(char *)(param_2 + 0x40);
      if ((((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar6 == -1)) {
        FUN_1039f71bc(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,0xff);
        FUN_1039f394c(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,0xff);
      }
      else {
        func_0x000107c61434(lStack_68);
        FUN_1039f71bc(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,cVar6);
        FUN_1039f394c(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,cVar6);
        FUN_1039f394c(0,0,0,0,0,0x3000000000000000,0xff);
        (**(code **)(param_4 + 8))(param_3,param_4);
        func_0x000107c6142c(lVar9);
      }
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      *(long *)(param_2 + 0x18) = lVar9;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      uVar7 = *(undefined1 *)(param_2 + 0x40);
      *(undefined1 *)(param_2 + 0x40) = 0;
      FUN_1039f394c(uVar1,uVar4,uVar2,uVar10,uVar3,uVar5,uVar7);
    }
  }
  else {
    func_0x000107c6142c(lStack_68);
  }
  return;
}



/* Entry: 1039f4460; end: 1039f4637;  */

void FUN_1039f4460(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x21;
  ulong uVar11;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  uStack_70 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar9 = lStack_68;
  uVar8 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      uVar11 = *(ulong *)(param_2 + 0x38);
      cVar6 = *(char *)(param_2 + 0x40);
      if ((((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar6 == -1)) {
        FUN_1039f71bc(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,0xff);
        FUN_1039f394c(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,0xff);
      }
      else {
        func_0x000107c61434(lStack_68);
        FUN_1039f71bc(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,cVar6);
        FUN_1039f394c(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,cVar6);
        FUN_1039f394c(0,0,0,0,0,0x3000000000000000,0xff);
        (**(code **)(param_4 + 8))(param_3,param_4);
        func_0x000107c6142c(lVar9);
      }
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      *(long *)(param_2 + 0x18) = lVar9;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      *(undefined8 *)(param_2 + 0x38) = param_5;
      uVar7 = *(undefined1 *)(param_2 + 0x40);
      *(undefined1 *)(param_2 + 0x40) = 0;
      FUN_1039f394c(uVar1,uVar4,uVar2,uVar10,uVar3,uVar5,uVar7);
    }
  }
  else {
    func_0x000107c6142c(lStack_68);
  }
  return;
}



/* Entry: 1039f4638; end: 1039f480f;  */

void FUN_1039f4638(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x21;
  ulong uVar11;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  uStack_70 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar9 = lStack_68;
  uVar8 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uVar10 = *(undefined8 *)(param_2 + 0x20);
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar3 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      uVar4 = *(undefined8 *)(param_2 + 0x30);
      uVar11 = *(ulong *)(param_2 + 0x38);
      cVar6 = *(char *)(param_2 + 0x40);
      if ((((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar6 == -1)) {
        FUN_1039f71bc(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,0xff);
        FUN_1039f394c(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,0xff);
      }
      else {
        func_0x000107c61434(lStack_68);
        FUN_1039f71bc(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,cVar6);
        FUN_1039f394c(uVar1,uVar3,uVar10,uVar2,uVar4,uVar11,cVar6);
        FUN_1039f394c(0,0,0,0,0,0x3000000000000000,0xff);
        (**(code **)(param_4 + 8))(param_3,param_4);
        func_0x000107c6142c(lVar9);
      }
      uVar1 = *(undefined8 *)(param_2 + 0x10);
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      uVar2 = *(undefined8 *)(param_2 + 0x20);
      uVar10 = *(undefined8 *)(param_2 + 0x28);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x10) = uVar8;
      *(long *)(param_2 + 0x18) = lVar9;
      *(undefined8 *)(param_2 + 0x28) = 0;
      *(undefined8 *)(param_2 + 0x20) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      uVar7 = *(undefined1 *)(param_2 + 0x40);
      *(undefined1 *)(param_2 + 0x40) = 1;
      FUN_1039f394c(uVar1,uVar4,uVar2,uVar10,uVar3,uVar5,uVar7);
    }
  }
  else {
    func_0x000107c6142c(lStack_68);
  }
  return;
}



/* Entry: 1039f4810; end: 1039f4a13;  */

/* WARNING: Removing unreachable block (ram,0x0001039f4994) */

void FUN_1039f4810(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  bool bVar12;
  long lVar13;
  ulong uVar14;
  uint uVar15;
  long unaff_x21;
  undefined8 uVar16;
  code *pcVar17;
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
  uVar14 = *(ulong *)(param_1 + 0x38);
  bVar12 = ((uVar14 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar15 = (uint)*(byte *)(param_1 + 0x40);
  lVar13 = param_1;
  if ((!bVar12 || uVar15 != 0xff) &&
      ((uint)(uVar14 >> 0x3c) & 0xfffffc03 | (uVar15 & 0x3f) << 2) == 5) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    lVar6 = *(long *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar7 = *(undefined8 *)(param_1 + 0x28);
    uVar16 = *(undefined8 *)(param_1 + 0x30);
    FUN_1039f38b8(uVar1,lVar6,uVar2,uVar7,uVar16);
    lVar13 = 0;
    FUN_1039f71e0(0,0,0,0,0,0);
    uStack_90 = uVar1;
    lStack_88 = lVar6;
    uStack_80 = uVar2;
    uStack_78 = uVar7;
    uStack_70 = uVar16;
    uStack_68 = uVar14 & 0xcfffffffffffffff;
  }
  pcVar17 = *(code **)(param_4 + 0x198);
  FUN_1039f6544();
  (*pcVar17)(&uStack_90,&UNK_1106bce78,lVar13,param_3,param_4);
  uVar14 = uStack_68;
  uVar16 = uStack_70;
  uVar7 = uStack_78;
  uVar2 = uStack_80;
  lVar13 = lStack_88;
  uVar1 = uStack_90;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (bVar12 && uVar15 == 0xff) {
      func_0x000107c61434(lStack_88);
      func_0x000107c61434(uVar7);
      func_0x00010006c00c(uVar16,uVar14);
    }
    else {
      pcVar17 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_88);
      func_0x000107c61434(uVar7);
      func_0x00010006c00c(uVar16,uVar14);
      (*pcVar17)(param_3,param_4);
    }
    FUN_1039f71e0(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
    uVar3 = *(undefined8 *)(param_1 + 0x10);
    uVar8 = *(undefined8 *)(param_1 + 0x18);
    uVar4 = *(undefined8 *)(param_1 + 0x20);
    uVar9 = *(undefined8 *)(param_1 + 0x28);
    uVar5 = *(undefined8 *)(param_1 + 0x30);
    uVar10 = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(param_1 + 0x10) = uVar1;
    *(long *)(param_1 + 0x18) = lVar13;
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
    *(undefined8 *)(param_1 + 0x30) = uVar16;
    *(ulong *)(param_1 + 0x38) = uVar14 | 0x1000000000000000;
    uVar11 = *(undefined1 *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x40) = 1;
    FUN_1039f394c(uVar3,uVar8,uVar4,uVar9,uVar5,uVar10,uVar11);
  }
  else {
    FUN_1039f71e0(uStack_90,lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
  }
  return;
}



/* Entry: 1039f4a14; end: 1039f4bd7;  */

void FUN_1039f4a14(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  
  uVar1 = unaff_x20[1];
  uVar4 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((((unaff_x20[7] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     ((byte)unaff_x20[8] != 0xff)) {
    uVar2 = (uint)(unaff_x20[7] >> 0x3c) & 0xfffffc03 | ((byte)unaff_x20[8] & 0x3f) << 2;
    if (uVar2 < 3) {
      if (uVar2 == 0) {
        FUN_1039f4bd8();
      }
      else if (uVar2 == 1) {
        FUN_1039f4c44();
      }
      else {
        FUN_1039f4cb4();
      }
    }
    else if (uVar2 == 3) {
      FUN_1039f4d24();
    }
    else {
      if (uVar2 != 4) goto LAB_1039f4a88;
      FUN_1039f4d94();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
LAB_1039f4a88:
  uVar1 = unaff_x20[10];
  uVar4 = unaff_x20[9] & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if (((uVar4 == 0) ||
      ((**(code **)(param_3 + 0x70))(unaff_x20[9],uVar1,7,param_2,param_3), unaff_x21 == 0)) &&
     (puVar3 = unaff_x20, FUN_1039f4e04(), unaff_x21 == 0)) {
    uVar4 = unaff_x20[0xb];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar5 = *(code **)(param_3 + 0x118);
      FUN_1039f5f50();
      (*pcVar5)(uVar4,0xb,&UNK_1106bcd58,puVar3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  }
  return;
}



/* Entry: 1039f4bd8; end: 1039f4c43;  */

void FUN_1039f4bd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x38) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x40) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x38) >> 0x3c) & 0xfffffc03) == 0 &&
      (*(byte *)(param_1 + 0x40) & 0x3f) == 0)) {
    (**(code **)(param_4 + 0x70))
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039f4c44);
  (*pcVar1)();
}



/* Entry: 1039f4c44; end: 1039f4cb3;  */

void FUN_1039f4c44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x38) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x40) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x38) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x40) & 0x3f) << 2) == 1)) {
    (**(code **)(param_4 + 0x70))
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),3,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039f4cb4);
  (*pcVar1)();
}



/* Entry: 1039f4cb4; end: 1039f4d23;  */

void FUN_1039f4cb4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x38) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x40) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x38) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x40) & 0x3f) << 2) == 2)) {
    (**(code **)(param_4 + 0x70))
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),4,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039f4d24);
  (*pcVar1)();
}



/* Entry: 1039f4d24; end: 1039f4d93;  */

void FUN_1039f4d24(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x38) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x40) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x38) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x40) & 0x3f) << 2) == 3)) {
    (**(code **)(param_4 + 0x70))
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),5,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039f4d94);
  (*pcVar1)();
}



/* Entry: 1039f4d94; end: 1039f4e03;  */

void FUN_1039f4d94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x38) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x40) != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x38) >> 0x3c) & 0xfffffc03 |
      (*(byte *)(param_1 + 0x40) & 0x3f) << 2) == 4)) {
    (**(code **)(param_4 + 0x70))
              (*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),6,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1039f4e04);
  (*pcVar1)();
}



/* Entry: 1039f4e04; end: 1039f4eaf;  */

void FUN_1039f4e04(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  ulong uStack_48;
  
  uStack_68 = *(undefined8 *)(param_1 + 0x18);
  uStack_70 = *(undefined8 *)(param_1 + 0x10);
  uStack_58 = *(undefined8 *)(param_1 + 0x28);
  uStack_60 = *(undefined8 *)(param_1 + 0x20);
  uStack_50 = *(undefined8 *)(param_1 + 0x30);
  uStack_48 = *(ulong *)(param_1 + 0x38);
  if (((((uStack_48 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0x40) != 0xff)) &&
     (((uint)(uStack_48 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0x40) & 0x3f) << 2) == 5)) {
    uStack_48 = uStack_48 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1039f6544();
    (*pcVar1)(&uStack_70,8,&UNK_1106bce78,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1039f4eb0; end: 1039f4f13;  */

void FUN_1039f4eb0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[6] = 0;
  param_1[7] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 8) = 0xff;
  param_1[9] = 0;
  param_1[10] = 0xe000000000000000;
  param_1[0xb] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[0xd] = 0xc000000000000000;
  param_1[0xc] = 0;
  return;
}



/* Entry: 1039f4f14; end: 1039f4f43;  */

undefined1  [16] FUN_1039f4f14(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 1039f4f44; end: 1039f4f77;  */

void FUN_1039f4f44(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 1039f4f78; end: 1039f4f8b;  */

undefined1  [16] FUN_1039f4f78(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x1039f4f88;
  return auVar1;
}



/* Entry: 1039f4f8c; end: 1039f4f9f;  */

void FUN_1039f4f8c(void)

{
  FUN_1039f40b8();
  return;
}



/* Entry: 1039f4fa0; end: 1039f4fe7;  */

void FUN_1039f4fa0(void)

{
  FUN_1039f4a14();
  return;
}



/* Entry: 1039f4fe8; end: 1039f4feb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1039f4fe8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1039f4fec; end: 1039f5023;  */

uint FUN_1039f4fec(long param_1,long param_2)

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
  func_0x0001039f713c();
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



/* Entry: 1039f5024; end: 1039f508b;  */

uint FUN_1039f5024(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_1039f5fd0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1039f508c; end: 1039f512b;  */

/* WARNING: Possible PIC construction at 0x0001039f50d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039f50e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f50dc) */
/* WARNING: Removing unreachable block (ram,0x0001039f50ec) */

void FUN_1039f508c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc97b0 != -1) {
    func_0x000107c61568(0x112fc97b0,FUN_1039f4070);
  }
  uVar5 = uRam000000011380c6d0;
  uVar4 = uRam000000011380c6c8;
  uVar3 = uRam000000011380c6c0;
  uVar2 = uRam000000011380c6b8;
  uVar1 = uRam000000011380c6b0;
  *param_1 = uRam000000011380c6a8;
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



/* Entry: 1039f512c; end: 1039f5167;  */

void FUN_1039f512c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fc9820;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fc9820,&UNK_10dc38a68);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1039f5168; end: 1039f5293;  */

void FUN_1039f5168(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039f5294; end: 1039f533f;  */

uint FUN_1039f5294(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_1039f5fd0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1039f5340; end: 1039f53d7;  */

void FUN_1039f5340(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1039f5394:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001039f53b0;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1039f537c;
code_r0x0001039f53b0:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1039f537c:
    (*pcVar3)();
  }
  goto LAB_1039f5394;
}



/* Entry: 1039f53d8; end: 1039f547b;  */

void FUN_1039f53d8(undefined8 param_1,undefined8 param_2,long param_3)

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
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1039f547c; end: 1039f54bb;  */

void FUN_1039f547c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1039f54bc; end: 1039f54eb;  */

undefined1  [16] FUN_1039f54bc(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1039f54ec; end: 1039f551f;  */

void FUN_1039f54ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1039f5520; end: 1039f5533;  */

undefined1  [16] FUN_1039f5520(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1039f5530;
  return auVar1;
}



/* Entry: 1039f5534; end: 1039f555b;  */

void FUN_1039f5534(void)

{
  FUN_1039f5340();
  return;
}



/* Entry: 1039f555c; end: 1039f555f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1039f555c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1039f5560; end: 1039f5597;  */

uint FUN_1039f5560(long param_1,long param_2)

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
  FUN_1039f70fc();
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



/* Entry: 1039f5598; end: 1039f55df;  */

uint FUN_1039f5598(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_38 = param_1[1];
  uStack_40 = *param_1;
  uStack_28 = param_1[3];
  uStack_30 = param_1[2];
  uStack_18 = param_1[5];
  uStack_20 = param_1[4];
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  FUN_1039f5ed4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1039f55e0; end: 1039f567f;  */

/* WARNING: Possible PIC construction at 0x0001039f562c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039f563c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f5630) */
/* WARNING: Removing unreachable block (ram,0x0001039f5640) */

void FUN_1039f55e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc97c0 != -1) {
    func_0x000107c61568(0x112fc97c0,0x1039f52f8);
  }
  uVar5 = uRam000000011380c700;
  uVar4 = uRam000000011380c6f8;
  uVar3 = uRam000000011380c6f0;
  uVar2 = uRam000000011380c6e8;
  uVar1 = uRam000000011380c6e0;
  *param_1 = uRam000000011380c6d8;
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



/* Entry: 1039f5680; end: 1039f56bb;  */

void FUN_1039f5680(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fc9810;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fc9810,&UNK_10dc38a60);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1039f56bc; end: 1039f57cf;  */

void FUN_1039f56bc(undefined8 param_1,undefined8 param_2)

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
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039f57d0; end: 1039f5813;  */

uint FUN_1039f57d0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1039f5ed4(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1039f5814; end: 1039f5cf7;  */

undefined8 FUN_1039f5814(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  char cVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  char cVar13;
  bool bVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  ulong *puVar19;
  ulong *puVar20;
  ulong uVar21;
  undefined1 auStack_230 [112];
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  char cStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  char cStack_70;
  
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar16 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar19 = (ulong *)(param_1 + 0x20);
  puVar20 = (ulong *)(param_2 + 0x20);
  do {
    lVar16 = lVar16 + -1;
    uStack_178 = puVar19[9];
    uStack_180 = puVar19[8];
    uStack_168 = puVar19[0xb];
    uStack_170 = puVar19[10];
    uStack_158 = puVar19[0xd];
    uStack_160 = puVar19[0xc];
    uStack_1b8 = puVar19[1];
    uVar21 = *puVar19;
    uStack_1a8 = puVar19[3];
    uStack_1b0 = puVar19[2];
    uStack_198 = puVar19[5];
    uStack_1a0 = puVar19[4];
    uStack_188 = puVar19[7];
    uStack_190 = puVar19[6];
    uStack_148 = puVar20[1];
    uStack_150 = *puVar20;
    uStack_138 = puVar20[3];
    uStack_140 = puVar20[2];
    uStack_128 = puVar20[5];
    uStack_130 = puVar20[4];
    uStack_118 = puVar20[7];
    uStack_120 = puVar20[6];
    uStack_f8 = puVar20[0xb];
    uStack_100 = puVar20[10];
    uStack_e8 = puVar20[0xd];
    uStack_f0 = puVar20[0xc];
    uStack_108 = puVar20[9];
    uStack_110 = puVar20[8];
    uStack_1c0 = uVar21;
    if (((uVar21 != uStack_150) || (uStack_1b8 != uStack_148)) &&
       (func_0x000107c605b8(), (uVar21 & 1) == 0)) {
      return 0;
    }
    uVar12 = uStack_118;
    uVar11 = uStack_120;
    uVar10 = uStack_128;
    uVar9 = uStack_130;
    uVar8 = uStack_138;
    uVar7 = uStack_140;
    uVar5 = uStack_188;
    uVar4 = uStack_190;
    uVar3 = uStack_198;
    uVar2 = uStack_1a0;
    uVar1 = uStack_1a8;
    uVar21 = uStack_1b0;
    cVar6 = (char)uStack_180;
    uVar17 = uStack_180 & 0xff;
    cVar13 = (char)uStack_110;
    uVar18 = uStack_110 & 0xff;
    bVar14 = ((uStack_118 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
    if ((((uStack_188 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && ((char)uStack_180 == -1))
    {
      if (bVar14 || (char)uStack_110 != -1) {
LAB_1039f5b3c:
        FUN_1039f71bc(uStack_1b0,uStack_1a8,uStack_1a0,uStack_198,uStack_190,uStack_188,uVar17);
        FUN_1039f71bc(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar18);
        FUN_1039f394c(uVar21,uVar1,uVar2,uVar3,uVar4,uVar5,cVar6);
        FUN_1039f394c(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,uVar18);
        return 0;
      }
      func_0x0001039f37ec(&uStack_1c0,auStack_230);
      func_0x0001039f37ec(&uStack_150,auStack_230);
      FUN_1039f71bc(uVar21,uVar1,uVar2,uVar3,uVar4,uVar5,0xff);
      FUN_1039f71bc(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,0xff);
      FUN_1039f394c(uVar21,uVar1,uVar2,uVar3,uVar4,uVar5,0xff);
    }
    else {
      if (!bVar14 && (char)uStack_110 == -1) {
        uVar18 = 0xff;
        goto LAB_1039f5b3c;
      }
      uStack_a0 = uStack_140;
      uStack_98 = uStack_138;
      uStack_90 = uStack_130;
      uStack_88 = uStack_128;
      uStack_80 = uStack_120;
      uStack_78 = uStack_118;
      cStack_70 = (char)uStack_110;
      uStack_d8 = uStack_1b0;
      uStack_d0 = uStack_1a8;
      uStack_c8 = uStack_1a0;
      uStack_c0 = uStack_198;
      uStack_b8 = uStack_190;
      uStack_b0 = uStack_188;
      cStack_a8 = (char)uStack_180;
      func_0x0001039f37ec(&uStack_1c0,auStack_230);
      func_0x0001039f37ec(&uStack_150,auStack_230);
      FUN_1039f71bc(uVar21,uVar1,uVar2,uVar3,uVar4,uVar5,uVar17);
      FUN_1039f71bc(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,cVar13);
      puVar15 = &uStack_d8;
      FUN_1039f5cf8(puVar15,&uStack_a0);
      FUN_1039f394c(uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,cVar13);
      FUN_1039f394c(uVar21,uVar1,uVar2,uVar3,uVar4,uVar5,uVar17);
      if (((ulong)puVar15 & 1) == 0) goto LAB_1039f5b1c;
    }
    if ((((uStack_178 != uStack_108) || (uStack_170 != uStack_100)) &&
        (uVar21 = uStack_178, func_0x000107c605b8(), (uVar21 & 1) == 0)) ||
       (uVar21 = uStack_168, FUN_1039f5814(uStack_168,uStack_f8), (uVar21 & 1) == 0)) {
LAB_1039f5b1c:
      func_0x0001039f37b8(&uStack_150);
      func_0x0001039f37b8(&uStack_1c0);
      return 0;
    }
    uVar21 = uStack_160;
    func_0x000100e25fcc(uStack_160,uStack_158,uStack_f0,uStack_e8);
    func_0x0001039f37b8(&uStack_150);
    func_0x0001039f37b8(&uStack_1c0);
    if ((uVar21 & 1) == 0) {
      return 0;
    }
    if (lVar16 == 0) {
      return 1;
    }
    puVar19 = puVar19 + 0xe;
    puVar20 = puVar20 + 0xe;
  } while( true );
}



/* Entry: 1039f5cf8; end: 1039f5ed3;  */

/* WARNING: Possible PIC construction at 0x0001039f5e6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f5e70) */

long FUN_1039f5cf8(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  lVar3 = *param_1;
  uVar6 = param_1[5];
  uVar2 = (uint)(uVar6 >> 0x3c) & 3 | (*(byte *)(param_1 + 6) & 0x3f) << 2;
  if (uVar2 < 3) {
    if (uVar2 == 0) {
      if (((uint)((ulong)param_2[5] >> 0x3c) & 3) != 0 || (*(byte *)(param_2 + 6) & 0x3f) != 0)
      goto LAB_1039f5eb8;
    }
    else if (uVar2 == 1) {
      if (((uint)((ulong)param_2[5] >> 0x3c) & 3 | (*(byte *)(param_2 + 6) & 0x3f) << 2) != 1)
      goto LAB_1039f5eb8;
    }
    else if (((uint)((ulong)param_2[5] >> 0x3c) & 3 | (*(byte *)(param_2 + 6) & 0x3f) << 2) != 2)
    goto LAB_1039f5eb8;
LAB_1039f5df4:
    if ((lVar3 != *param_2) || (param_1[1] != param_2[1])) {
__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )();
      return lVar3;
    }
LAB_1039f5e08:
    lVar3 = 1;
  }
  else {
    if (uVar2 == 3) {
      if (((uint)((ulong)param_2[5] >> 0x3c) & 3 | (*(byte *)(param_2 + 6) & 0x3f) << 2) == 3)
      goto LAB_1039f5df4;
    }
    else if (uVar2 == 4) {
      if (((uint)((ulong)param_2[5] >> 0x3c) & 3 | (*(byte *)(param_2 + 6) & 0x3f) << 2) == 4)
      goto LAB_1039f5df4;
    }
    else {
      uVar7 = param_2[5];
      if (((uint)(uVar7 >> 0x3c) & 3 | (*(byte *)(param_2 + 6) & 0x3f) << 2) == 5) {
        uVar4 = param_1[2];
        uVar5 = param_1[4];
        lVar1 = param_2[4];
        if ((lVar3 != *param_2) || (param_1[1] != param_2[1]))
        goto 
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF;
        if ((((uVar4 != param_2[2]) || (param_1[3] != param_2[3])) &&
            (func_0x000107c605b8(uVar4,param_1[3],param_2[2],param_2[3],0), (uVar4 & 1) == 0)) ||
           (func_0x000100e25fcc(uVar5,uVar6 & 0xcfffffffffffffff,lVar1,uVar7 & 0xcfffffffffffffff),
           (uVar5 & 1) == 0)) goto LAB_1039f5eb8;
        goto LAB_1039f5e08;
      }
    }
LAB_1039f5eb8:
    lVar3 = 0;
  }
  return lVar3;
}



/* Entry: 1039f5ed4; end: 1039f5f4f;  */

/* WARNING: Possible PIC construction at 0x0001039f5f04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039f5f08) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039f5ed4(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar13;
  byte *pbVar14;
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
  
  pbVar12 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  pbVar16 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  uVar13 = param_1[2];
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
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
    uVar5 = (uint)(uVar13 >> 0x20);
    uVar21 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
          (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
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
        uVar22 = uVar13 >> 0x30 & 0xff;
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
            pbVar14 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
            pbVar14 = pbVar10;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
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
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar10;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
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
    pbVar15 = pbVar10;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar24,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 == pbVar16) && (pbVar25 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        lVar24 = *(long *)(pbVar14 + 0x18);
        if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar23 != (byte *)0x0) {
            if (lVar24 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar17 = *(byte **)(pbVar14 + 8);
        if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar25, pbVar15 = pbVar23, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar17 = *(byte **)(pbVar14 + 0x18),
           pbVar25 == *(byte **)(pbVar14 + 0x10) && pbVar23 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar12 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar17 = *(byte **)(pbVar14 + 0x10);
      lVar24 = *(long *)(pbVar14 + 0x20);
      if (pbVar25 == (byte *)0x0) {
        if (pbVar17 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar12 = pbVar10;
        pbVar15 = pbVar25;
        if ((pbVar10 != pbVar16) || (pbVar25 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar26 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar26 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar14 + 0x18),lVar24,0);
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
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar27 = pbVar14[8] | (byte)lVar24;
        bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar35 = pbVar14[0x10] | (byte)lVar26;
        bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar26 == 0)) {
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
      lVar26 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar27 = pbVar14[8] | (byte)lVar24;
      bVar28 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar29 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar30 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar31 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar32 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar33 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar34 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar35 = pbVar14[0x10] | (byte)lVar26;
      bVar36 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar37 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar38 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar39 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar40 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar41 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar42 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar13 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
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



/* Entry: 1039f5f50; end: 1039f5fcf;  */

void FUN_1039f5f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38838;
  func_0x000107c61520(&DAT_10dc38838,&UNK_1106bcd58);
  puRam0000000112fc97a0 = puVar1;
  return;
}



/* Entry: 1039f5fd0; end: 1039f6263;  */

uint FUN_1039f5fd0(ulong *param_1,ulong *param_2)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_198 [56];
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  char cStack_130;
  ulong uStack_120;
  ulong uStack_118;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  char cStack_f0;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  char cStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  char cStack_78;
  
  uVar5 = *param_1;
  if ((uVar5 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar5 & 1) != 0))
  {
    uVar10 = param_1[3];
    uVar5 = param_1[2];
    uVar16 = param_1[5];
    uVar14 = param_1[4];
    uVar11 = param_1[7];
    uVar7 = param_1[6];
    cVar1 = (char)param_1[8];
    uVar12 = param_2[3];
    uVar8 = param_2[2];
    uVar17 = param_2[5];
    uVar15 = param_2[4];
    uVar13 = param_2[7];
    uVar9 = param_2[6];
    cVar2 = (char)param_2[8];
    bVar3 = ((uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
    uStack_160 = uVar8;
    uStack_158 = uVar12;
    uStack_150 = uVar15;
    uStack_148 = uVar17;
    uStack_140 = uVar9;
    uStack_138 = uVar13;
    cStack_130 = cVar2;
    uStack_120 = uVar5;
    uStack_118 = uVar10;
    uStack_110 = uVar14;
    uStack_108 = uVar16;
    uStack_100 = uVar7;
    uStack_f8 = uVar11;
    cStack_f0 = cVar1;
    if ((((uVar11 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar1 == -1)) {
      if (!bVar3 || cVar2 != -1) {
LAB_1039f60dc:
        FUN_1039f3868(&uStack_120,&uStack_a8);
        FUN_1039f3868(&uStack_160,&uStack_a8);
        FUN_1039f394c(uVar5,uVar10,uVar14,uVar16,uVar7,uVar11,cVar1);
        FUN_1039f394c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,cVar2);
      }
      else {
        FUN_1039f3868(&uStack_120,&uStack_a8);
        FUN_1039f3868(&uStack_160,&uStack_a8);
        FUN_1039f394c(uVar5,uVar10,uVar14,uVar16,uVar7,uVar11,0xff);
LAB_1039f61f8:
        uVar5 = param_1[9];
        if (((uVar5 == param_2[9]) && (param_1[10] == param_2[10])) ||
           (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
          uVar5 = param_1[0xb];
          FUN_1039f5814(uVar5,param_2[0xb]);
          if ((uVar5 & 1) != 0) {
            uVar5 = param_1[0xc];
            func_0x000100e25fcc(uVar5,param_1[0xd],param_2[0xc],param_2[0xd]);
            uVar4 = (uint)uVar5;
            goto LAB_1039f6240;
          }
        }
      }
    }
    else {
      if (bVar3 && cVar2 == -1) goto LAB_1039f60dc;
      uStack_e0 = uVar5;
      uStack_d8 = uVar10;
      uStack_d0 = uVar14;
      uStack_c8 = uVar16;
      uStack_c0 = uVar7;
      uStack_b8 = uVar11;
      cStack_b0 = cVar1;
      uStack_a8 = uVar8;
      uStack_a0 = uVar12;
      uStack_98 = uVar15;
      uStack_90 = uVar17;
      uStack_88 = uVar9;
      uStack_80 = uVar13;
      cStack_78 = cVar2;
      FUN_1039f3868(&uStack_120,auStack_198);
      FUN_1039f3868(&uStack_160,auStack_198);
      puVar6 = &uStack_e0;
      FUN_1039f5cf8(puVar6,&uStack_a8);
      FUN_1039f394c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,cVar2);
      FUN_1039f394c(uVar5,uVar10,uVar14,uVar16,uVar7,uVar11,cVar1);
      if (((ulong)puVar6 & 1) != 0) goto LAB_1039f61f8;
    }
  }
  uVar4 = 0;
LAB_1039f6240:
  return uVar4 & 1;
}



/* Entry: 1039f6264; end: 1039f62e3;  */

void FUN_1039f6264(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc388a8;
  func_0x000107c61520(&UNK_10dc388a8,&UNK_1106bcd58);
  puRam0000000112fc97b8 = puVar1;
  return;
}



/* Entry: 1039f62e4; end: 1039f6307;  */

void FUN_1039f62e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039f6308();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039f6308; end: 1039f6347;  */

void FUN_1039f6308(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc387a8;
  func_0x000107c61520(&UNK_10dc387a8,&UNK_1106bccd0);
  puRam0000000112fc97d0 = puVar1;
  return;
}



/* Entry: 1039f6348; end: 1039f635b;  */

void FUN_1039f6348(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1039f5f90)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039f635c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039f635c; end: 1039f639b;  */

void FUN_1039f635c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38760;
  func_0x000107c61520(&DAT_10dc38760,&UNK_1106bccd0);
  puRam0000000112fc97d8 = puVar1;
  return;
}



/* Entry: 1039f639c; end: 1039f639f;  */

void FUN_1039f639c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38810;
  func_0x000107c61520(&UNK_10dc38810,&UNK_1106bccd0);
  puRam0000000112fc97e0 = puVar1;
  return;
}



/* Entry: 1039f63a0; end: 1039f63df;  */

void FUN_1039f63a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38810;
  func_0x000107c61520(&UNK_10dc38810,&UNK_1106bccd0);
  puRam0000000112fc97e0 = puVar1;
  return;
}



/* Entry: 1039f63e0; end: 1039f6403;  */

void FUN_1039f63e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039f6404();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039f6404; end: 1039f6443;  */

void FUN_1039f6404(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38880;
  func_0x000107c61520(&UNK_10dc38880,&UNK_1106bcd58);
  puRam0000000112fc97e8 = puVar1;
  return;
}



/* Entry: 1039f6444; end: 1039f645b;  */

void FUN_1039f6444(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039f6264();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039f5f50();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039f645c; end: 1039f649b;  */

void FUN_1039f645c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc388e8;
  func_0x000107c61520(&UNK_10dc388e8,&UNK_1106bcd58);
  puRam0000000112fc97f0 = puVar1;
  return;
}



/* Entry: 1039f649c; end: 1039f64bf;  */

void FUN_1039f649c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039f64c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039f64c0; end: 1039f64ff;  */

void FUN_1039f64c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc97f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38958;
  func_0x000107c61520(&UNK_10dc38958,&UNK_1106bce78);
  puRam0000000112fc97f8 = puVar1;
  return;
}



/* Entry: 1039f6500; end: 1039f6513;  */

void FUN_1039f6500(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1039f62a4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039f6544();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039f6514; end: 1039f6543;  */

void FUN_1039f6514(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039f6544; end: 1039f6583;  */

void FUN_1039f6544(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9800 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38910;
  func_0x000107c61520(&DAT_10dc38910,&UNK_1106bce78);
  puRam0000000112fc9800 = puVar1;
  return;
}



/* Entry: 1039f6584; end: 1039f6587;  */

void FUN_1039f6584(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc389c0;
  func_0x000107c61520(&UNK_10dc389c0,&UNK_1106bce78);
  puRam0000000112fc9808 = puVar1;
  return;
}



/* Entry: 1039f6588; end: 1039f65c7;  */

void FUN_1039f6588(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9808 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc389c0;
  func_0x000107c61520(&UNK_10dc389c0,&UNK_1106bce78);
  puRam0000000112fc9808 = puVar1;
  return;
}



/* Entry: 1039f65c8; end: 1039f65ef;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1039f65c8(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)((ulong)param_1[3] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[3] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1039f65f0; end: 1039f66a7;  */

undefined8 * FUN_1039f65f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 1039f66a8; end: 1039f66f3;  */

undefined8 * FUN_1039f66a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1039f66f4; end: 1039f678b;  */

int FUN_1039f66f4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039f678c; end: 1039f67ef;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1039f678c(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  if ((((*(ulong *)(param_1 + 0x38) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 0x40) != -1)) {
    FUN_1039f3970(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                  *(undefined8 *)(param_1 + 0x20),*(undefined8 *)(param_1 + 0x28),
                  *(undefined8 *)(param_1 + 0x30));
  }
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x50));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x58));
  uVar1 = *(ulong *)(param_1 + 0x60);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x68) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x68) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1039f67f0; end: 1039f6aa7;  */

undefined8 * FUN_1039f67f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar6 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  uVar4 = param_2[7];
  cVar2 = *(char *)(param_2 + 8);
  func_0x000107c61434();
  if ((((uVar4 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar2 == -1)) {
    uVar6 = param_2[2];
    uVar3 = param_2[5];
    uVar7 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar6;
    param_1[5] = uVar3;
    param_1[4] = uVar7;
    uVar6 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar6;
    *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  }
  else {
    uVar6 = param_2[2];
    uVar3 = param_2[3];
    uVar7 = param_2[4];
    uVar1 = param_2[5];
    uVar5 = param_2[6];
    FUN_1039f38b8(uVar6,uVar3,uVar7,uVar1,uVar5,uVar4,cVar2);
    param_1[2] = uVar6;
    param_1[3] = uVar3;
    param_1[4] = uVar7;
    param_1[5] = uVar1;
    param_1[6] = uVar5;
    param_1[7] = uVar4;
    *(char *)(param_1 + 8) = cVar2;
  }
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[10] = uVar6;
  uVar6 = param_2[0xb];
  uVar7 = param_2[0xc];
  param_1[0xb] = uVar6;
  uVar3 = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar7,uVar3);
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar3;
  return param_1;
}



/* Entry: 1039f6aa8; end: 1039f6bbf;  */

undefined8 * FUN_1039f6aa8(undefined8 *param_1)

{
  FUN_1039f3970(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                *(undefined1 *)(param_1 + 6));
  return param_1;
}



/* Entry: 1039f6bc0; end: 1039f6c8b;  */

int FUN_1039f6bc0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039f6c8c; end: 1039f6d8f;  */

undefined8 * FUN_1039f6c8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  
  uVar1 = *param_2;
  uVar4 = param_2[1];
  uVar2 = param_2[2];
  uVar5 = param_2[3];
  uVar3 = param_2[4];
  uVar6 = param_2[5];
  uVar7 = *(undefined1 *)(param_2 + 6);
  FUN_1039f38b8(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 1039f6d90; end: 1039f6de3;  */

undefined8 * FUN_1039f6d90(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar5 = *(undefined1 *)(param_2 + 6);
  uVar7 = *param_1;
  uVar1 = param_1[1];
  uVar3 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_1[4];
  uVar8 = param_1[5];
  uVar9 = *param_2;
  uVar11 = param_2[3];
  uVar10 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  uVar9 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar9;
  uVar6 = *(undefined1 *)(param_1 + 6);
  *(undefined1 *)(param_1 + 6) = uVar5;
  FUN_1039f3970(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 1039f6de4; end: 1039f6ef3;  */

int FUN_1039f6de4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3fa < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0x3fb;
  }
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0xc) << 2) ^ 0x3ff;
  if (0x3f9 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1039f6ef4; end: 1039f6f23;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1039f6ef4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x18));
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



/* Entry: 1039f6f24; end: 1039f7003;  */

undefined8 * FUN_1039f6f24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1039f7004; end: 1039f7057;  */

undefined8 * FUN_1039f7004(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1039f7058; end: 1039f70fb;  */

int FUN_1039f7058(int *param_1,int param_2)

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



/* Entry: 1039f70fc; end: 1039f71bb;  */

void FUN_1039f70fc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9818 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc3892c;
  func_0x000107c61520(&DAT_10dc3892c,&UNK_1106bce78);
  puRam0000000112fc9818 = puVar1;
  return;
}



/* Entry: 1039f71bc; end: 1039f71df;  */

/* WARNING: Possible PIC construction at 0x0001039f391c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f3920) */
/* WARNING: Removing unreachable block (ram,0x00010006c00c) */
/* WARNING: Removing unreachable block (ram,0x00010006c018) */
/* WARNING: Removing unreachable block (ram,0x00010006c048) */
/* WARNING: Removing unreachable block (ram,0x00010006c020) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010006c040) */
/* WARNING: Removing unreachable block (ram,0x000107c6157c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0428) */

void FUN_1039f71bc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  ulong in_x5;
  uint in_w6;
  
  if (((in_x5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0 && ((in_w6 ^ 0xffffffff) & 0xff) == 0
     ) {
    return;
  }
  uVar1 = (uint)(in_x5 >> 0x3c) & 3 | (in_w6 & 0x3f) << 2;
  if (uVar1 < 3) {
    if (((uVar1 != 0) && (uVar1 != 1)) && (uVar1 != 2)) {
      return;
    }
  }
  else if (((uVar1 != 3) && (uVar1 != 4)) && (uVar1 != 5)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_2);
  return;
}



/* Entry: 1039f71e0; end: 1039f722b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1039f71e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_5);
  return;
}



/* Entry: 1039f722c; end: 1039f723b;  */

long FUN_1039f722c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



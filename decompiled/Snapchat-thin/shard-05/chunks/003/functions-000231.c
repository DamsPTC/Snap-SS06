/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d0ac84; end: 103d0ad03;  */

uint FUN_103d0ac84(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_30 = param_1[0xe];
  uStack_98 = param_1[1];
  uStack_a0 = *param_1;
  uStack_88 = param_1[3];
  uStack_90 = param_1[2];
  uStack_78 = param_1[5];
  uStack_80 = param_1[4];
  uStack_68 = param_1[7];
  uStack_70 = param_1[6];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_b0 = unaff_x20[0xe];
  FUN_103d0f640(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103d0ad04; end: 103d0ada3;  */

/* WARNING: Possible PIC construction at 0x000103d0ad50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0ad60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0ad54) */
/* WARNING: Removing unreachable block (ram,0x000103d0ad64) */

void FUN_103d0ad04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130029f0 != -1) {
    func_0x000107c61568(0x1130029f0,0x103d0a844);
  }
  uVar5 = uRam000000011380f9a8;
  uVar4 = uRam000000011380f9a0;
  uVar3 = uRam000000011380f998;
  uVar2 = uRam000000011380f990;
  uVar1 = uRam000000011380f988;
  *param_1 = uRam000000011380f980;
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



/* Entry: 103d0ada4; end: 103d0addf;  */

void FUN_103d0ada4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130033a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130033a0,&UNK_10dc7e3f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d0ade0; end: 103d0af1b;  */

void FUN_103d0ade0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_f8 [72];
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
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_40 = unaff_x20[0xe];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  func_0x000107c6068c(auStack_f8,0);
  func_0x000107c5fa50(auStack_f8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d0af1c; end: 103d0af9b;  */

uint FUN_103d0af1c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_98 = param_2[1];
  uStack_a0 = *param_2;
  uStack_88 = param_2[3];
  uStack_90 = param_2[2];
  uStack_78 = param_2[5];
  uStack_80 = param_2[4];
  uStack_68 = param_2[7];
  uStack_70 = param_2[6];
  uStack_58 = param_2[9];
  uStack_60 = param_2[8];
  uStack_48 = param_2[0xb];
  uStack_50 = param_2[10];
  uStack_38 = param_2[0xd];
  uStack_40 = param_2[0xc];
  uStack_30 = param_2[0xe];
  FUN_103d0f640(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 103d0af9c; end: 103d0afe3;  */

void FUN_103d0af9c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e610,0x14,2);
  uRam000000011380f9b8 = uStack_38;
  uRam000000011380f9b0 = uStack_40;
  uRam000000011380f9c8 = uStack_28;
  uRam000000011380f9c0 = uStack_30;
  uRam000000011380f9d8 = uStack_18;
  uRam000000011380f9d0 = uStack_20;
  return;
}



/* Entry: 103d0afe4; end: 103d0b0b7;  */

/* WARNING: Removing unreachable block (ram,0x000103d0b0b4) */

void FUN_103d0afe4(undefined8 param_1,long param_2,long param_3)

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
        func_0x000103d123ac();
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x150))(unaff_x20 + 8,param_2,param_3);
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103d0b0b8; end: 103d0b17b;  */

void FUN_103d0b0b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  
  lVar4 = *unaff_x20;
  if (*(long *)(lVar4 + 0x10) != 0) {
    pcVar5 = *(code **)(param_3 + 0x118);
    uVar3 = param_1;
    func_0x000103d123ac();
    (*pcVar5)(lVar4,1,&UNK_110700520,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = unaff_x20[2];
  uVar1 = unaff_x20[1] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(unaff_x20[1],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103d0b17c; end: 103d0b1b3;  */

undefined1  [16] FUN_103d0b17c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b56a0;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 103d0b1b4; end: 103d0b1eb;  */

uint FUN_103d0b1b4(long param_1,long param_2)

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
  func_0x000103d1c1fc();
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



/* Entry: 103d0b1ec; end: 103d0b29b;  */

/* WARNING: Possible PIC construction at 0x000103d0b248: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0b24c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0b1ec(undefined8 *param_1)

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
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  ulong uVar25;
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
  
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)param_1[2];
  lVar22 = param_1[3];
  uVar25 = param_1[4];
  uVar18 = *unaff_x20;
  pbVar11 = (byte *)unaff_x20[1];
  pbVar13 = (byte *)unaff_x20[2];
  pbVar9 = (byte *)unaff_x20[3];
  pbVar23 = (byte *)unaff_x20[4];
  func_0x000103d0d634(uVar18,*param_1);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  if (pbVar11 != pbVar14 || pbVar13 != pbVar15) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
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
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar25 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar25 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar25 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar23;
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
          if (uVar16 != 2) {
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
          unaff_x25 = pbVar23;
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
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar25);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
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
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 != (byte *)0x0) {
            if (lVar22 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar22);
            func_0x000107c61174();
            pbVar9 = pbVar21;
            func_0x000107c60118();
            func_0x000107c61170(pbVar21);
            func_0x000107c61170(lVar22);
            pbVar21 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar22 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
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
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar12 + 0x18),lVar22,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar21 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar34 = pbVar12[0x10] | (byte)lVar24;
        bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar12 + 0x20);
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar34 = pbVar12[0x10] | (byte)lVar24;
      bVar35 = pbVar12[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar36 = pbVar12[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar37 = pbVar12[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar38 = pbVar12[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar39 = pbVar12[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar40 = pbVar12[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar41 = pbVar12[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar33 | auVar42[7],
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
    lVar22 = *(long *)(pbVar12 + 8);
    uVar25 = *(ulong *)(pbVar12 + 0x10);
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



/* Entry: 103d0b29c; end: 103d0b33b;  */

/* WARNING: Possible PIC construction at 0x000103d0b2e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0b2f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0b2ec) */
/* WARNING: Removing unreachable block (ram,0x000103d0b2fc) */

void FUN_103d0b29c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002a00 != -1) {
    func_0x000107c61568(0x113002a00,FUN_103d0af9c);
  }
  uVar5 = uRam000000011380f9d8;
  uVar4 = uRam000000011380f9d0;
  uVar3 = uRam000000011380f9c8;
  uVar2 = uRam000000011380f9c0;
  uVar1 = uRam000000011380f9b8;
  *param_1 = uRam000000011380f9b0;
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



/* Entry: 103d0b33c; end: 103d0b34f;  */

void FUN_103d0b33c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003390;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003390,&UNK_10dc7e3f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d0b350; end: 103d0b383;  */

void FUN_103d0b350(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d0b384; end: 103d0b497;  */

void FUN_103d0b384(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = unaff_x20[1];
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d0b498; end: 103d0b543;  */

/* WARNING: Possible PIC construction at 0x000103d0b4f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0b4fc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0b498(ulong *param_1,undefined8 *param_2)

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
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  byte *pbVar23;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar24;
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
  pbVar11 = (byte *)param_1[1];
  pbVar13 = (byte *)param_1[2];
  pbVar9 = (byte *)param_1[3];
  pbVar23 = (byte *)param_1[4];
  pbVar14 = (byte *)param_2[1];
  pbVar15 = (byte *)param_2[2];
  lVar22 = param_2[3];
  uVar24 = param_2[4];
  func_0x000103d0d634(uVar18,*param_2);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
  }
  if (pbVar11 != pbVar14 || pbVar13 != pbVar15) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
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
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar24 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar18 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar17 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar17,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar18 = (ulong)(iVar17 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar18 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar18 = 0;
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
        if (uVar16 < 2) {
          if (uVar16 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar9;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar9 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar9 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar9 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar9 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar9 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar9 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar9 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
          unaff_x24 = pbVar23;
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
          if (uVar16 != 2) {
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
          unaff_x25 = pbVar23;
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
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar24);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
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
    pbVar21 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar12[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar15 = *(byte **)(pbVar12 + 0x10);
        lVar22 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 == pbVar14) && (pbVar23 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar22 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar21 != (byte *)0x0) {
            if (lVar22 == 0) {
              return (byte *)0x0;
            }
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
            func_0x000107c61174(lVar22);
            func_0x000107c61174();
            pbVar9 = pbVar21;
            func_0x000107c60118();
            func_0x000107c61170(pbVar21);
            func_0x000107c61170(lVar22);
            pbVar21 = pbVar9;
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar22 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
    }
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar12[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        if (((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) &&
           (pbVar11 = pbVar23, pbVar13 = pbVar21, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar23 == *(byte **)(pbVar12 + 0x10) && pbVar21 == *(byte **)(pbVar12 + 0x18))) {
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
      pbVar15 = *(byte **)(pbVar12 + 0x10);
      lVar22 = *(long *)(pbVar12 + 0x20);
      if (pbVar23 == (byte *)0x0) {
        if (pbVar15 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar15 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar12 + 8);
        pbVar11 = pbVar9;
        pbVar13 = pbVar23;
        if ((pbVar9 != pbVar14) || (pbVar23 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar25,*(byte **)(pbVar12 + 0x18),lVar22,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar21 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
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
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
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
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
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
      lVar22 = CONCAT17(bVar33 | auVar42[7],
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
    lVar22 = *(long *)(pbVar12 + 8);
    uVar24 = *(ulong *)(pbVar12 + 0x10);
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



/* Entry: 103d0b544; end: 103d0b58b;  */

void FUN_103d0b544(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc7e5b0,0x57,2);
  uRam000000011380f9e8 = uStack_38;
  uRam000000011380f9e0 = uStack_40;
  uRam000000011380f9f8 = uStack_28;
  uRam000000011380f9f0 = uStack_30;
  uRam000000011380fa08 = uStack_18;
  uRam000000011380fa00 = uStack_20;
  return;
}



/* Entry: 103d0b58c; end: 103d0b6b7;  */

/* WARNING: Removing unreachable block (ram,0x000103d0b690) */

void FUN_103d0b58c(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 3) goto LAB_103d0b604;
          pcVar3 = *(code **)(param_3 + 0x90);
        }
LAB_103d0b5f4:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103d0b5f4;
        }
        if (lVar1 == 5) {
          pcVar3 = *(code **)(param_3 + 0x150);
          goto LAB_103d0b5f4;
        }
        if (lVar1 == 6) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cdfc00();
          (*pcVar3)(unaff_x20 + 0x48,&UNK_110700950,lVar1,param_2,param_3);
        }
      }
LAB_103d0b604:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d0b6b8; end: 103d0b863;  */

void FUN_103d0b6b8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  code *pcVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
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
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[4] == 0 ||
        ((**(code **)(param_3 + 0x30))(unaff_x20[4],3,param_2,param_3), unaff_x21 == 0)))) {
      uVar2 = unaff_x20[6];
      uVar1 = unaff_x20[5] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[5],uVar2,4,param_2,param_3), unaff_x21 == 0)) {
        uVar2 = unaff_x20[8];
        uVar1 = unaff_x20[7] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar1 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar1 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[7],uVar2,5,param_2,param_3), unaff_x21 == 0)) {
          uVar4 = unaff_x20[9];
          uVar1 = unaff_x20[10];
          uVar2 = uVar4;
          func_0x000103d1d830(uVar4,(char)uVar1);
          uVar3 = 0;
          func_0x000103d1d830(0,1);
          if (uVar2 != uVar3) {
            pcVar5 = *(code **)(param_3 + 0x80);
            uStack_60 = uVar4;
            uStack_58 = (char)uVar1;
            func_0x000103cdfc00();
            (*pcVar5)(&uStack_60,6,&UNK_110700950,uVar3,param_2,param_3);
            if (unaff_x21 != 0) {
              return;
            }
          }
          func_0x000100076224(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 103d0b864; end: 103d0b8b7;  */

void FUN_103d0b864(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0xe000000000000000;
  param_1[7] = 0;
  param_1[8] = 0xe000000000000000;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 1;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  return;
}



/* Entry: 103d0b8b8; end: 103d0b8e7;  */

undefined1  [16] FUN_103d0b8b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 103d0b8e8; end: 103d0b91b;  */

void FUN_103d0b8e8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 103d0b91c; end: 103d0b92f;  */

undefined1  [16] FUN_103d0b91c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x103d0b92c;
  return auVar1;
}



/* Entry: 103d0b930; end: 103d0b957;  */

void FUN_103d0b930(void)

{
  FUN_103d0b58c();
  return;
}



/* Entry: 103d0b958; end: 103d0b98f;  */

uint FUN_103d0b958(long param_1,long param_2)

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
  func_0x000103d1c1bc();
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



/* Entry: 103d0b990; end: 103d0b9f7;  */

uint FUN_103d0b990(undefined8 *param_1)

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
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
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
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_90 = unaff_x20[0xc];
  FUN_103d1022c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103d0b9f8; end: 103d0ba97;  */

/* WARNING: Possible PIC construction at 0x000103d0ba44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0ba54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0ba48) */
/* WARNING: Removing unreachable block (ram,0x000103d0ba58) */

void FUN_103d0b9f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002a10 != -1) {
    func_0x000107c61568(0x113002a10,FUN_103d0b544);
  }
  uVar5 = uRam000000011380fa08;
  uVar4 = uRam000000011380fa00;
  uVar3 = uRam000000011380f9f8;
  uVar2 = uRam000000011380f9f0;
  uVar1 = uRam000000011380f9e8;
  *param_1 = uRam000000011380f9e0;
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



/* Entry: 103d0ba98; end: 103d0baab;  */

void FUN_103d0ba98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003380;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003380,&UNK_10dc7e3e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d0baac; end: 103d0badf;  */

void FUN_103d0baac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d0bae0; end: 103d0bc0b;  */

void FUN_103d0bae0(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
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



/* Entry: 103d0bc0c; end: 103d0bcbb;  */

uint FUN_103d0bc0c(undefined8 *param_1,undefined8 *param_2)

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
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
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
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_20 = param_2[0xc];
  FUN_103d1022c(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103d0bcbc; end: 103d0be23;  */

/* WARNING: Removing unreachable block (ram,0x000103d0be08) */

void FUN_103d0bcbc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x90);
        }
        else {
          if (lVar1 != 3) goto LAB_103d0bd44;
          pcVar5 = *(code **)(param_3 + 0x30);
        }
LAB_103d0bd34:
        (*pcVar5)();
      }
      else {
        if (5 < lVar1) {
          if (lVar1 == 6) {
            pcVar5 = *(code **)(param_3 + 0x90);
          }
          else {
            if (lVar1 != 7) goto LAB_103d0bd44;
            pcVar5 = *(code **)(param_3 + 0x90);
          }
          goto LAB_103d0bd34;
        }
        if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103d0f8b4();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1106feeb0;
LAB_103d0bdf4:
          (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
        }
        else if (lVar1 == 5) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103cdfc00();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_110700950;
          goto LAB_103d0bdf4;
        }
      }
LAB_103d0bd44:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d0be24; end: 103d0bfeb;  */

void FUN_103d0be24(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uVar5;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = unaff_x20[2], uVar1 == 0 ||
      ((**(code **)(param_3 + 0x30))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[3] != 0) {
      uVar1 = 3;
      (**(code **)(param_3 + 0x10))(3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (unaff_x20[4] != 0) {
      uStack_58 = (undefined1)unaff_x20[5];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_60 = unaff_x20[4];
      func_0x000103d0f8b4();
      (*pcVar4)(&uStack_60,4,&UNK_1106feeb0,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar5 = unaff_x20[6];
    uVar1 = unaff_x20[7];
    uVar2 = uVar5;
    func_0x000103d1d830(uVar5,(char)uVar1);
    uVar3 = 0;
    func_0x000103d1d830(0,1);
    if (uVar2 != uVar3) {
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_60 = uVar5;
      uStack_58 = (char)uVar1;
      func_0x000103cdfc00();
      (*pcVar4)(&uStack_60,5,&UNK_110700950,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if (((unaff_x20[8] == 0) ||
        ((**(code **)(param_3 + 0x30))(unaff_x20[8],6,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[9] == 0 ||
        ((**(code **)(param_3 + 0x30))(unaff_x20[9],7,param_2,param_3), unaff_x21 == 0)))) {
      func_0x000100076224(param_1,unaff_x20[10],unaff_x20[0xb],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103d0bfec; end: 103d0c053;  */

void FUN_103d0bfec(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0xc000000000000000;
  return;
}



/* Entry: 103d0c054; end: 103d0c07b;  */

void FUN_103d0c054(void)

{
  FUN_103d0bcbc();
  return;
}



/* Entry: 103d0c07c; end: 103d0c0b3;  */

uint FUN_103d0c07c(long param_1,long param_2)

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
  FUN_103d1c17c();
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



/* Entry: 103d0c0b4; end: 103d0c10b;  */

uint FUN_103d0c0b4(undefined8 *param_1)

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
  FUN_103d10690(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d0c10c; end: 103d0c1ab;  */

/* WARNING: Possible PIC construction at 0x000103d0c158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0c168: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d0c15c) */
/* WARNING: Removing unreachable block (ram,0x000103d0c16c) */

void FUN_103d0c10c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113002a20 != -1) {
    func_0x000107c61568(0x113002a20,0x103d0bc74);
  }
  uVar5 = uRam000000011380fa38;
  uVar4 = uRam000000011380fa30;
  uVar3 = uRam000000011380fa28;
  uVar2 = uRam000000011380fa20;
  uVar1 = uRam000000011380fa18;
  *param_1 = uRam000000011380fa10;
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



/* Entry: 103d0c1ac; end: 103d0c1bf;  */

void FUN_103d0c1ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113003370;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113003370,&UNK_10dc7e3e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d0c1c0; end: 103d0c1f3;  */

void FUN_103d0c1c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d0c1f4; end: 103d0c30f;  */

void FUN_103d0c1f4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d0c310; end: 103d0c367;  */

uint FUN_103d0c310(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d10690(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 103d0c368; end: 103d0c8cb;  */

undefined1 * FUN_103d0c368(undefined1 *param_1,undefined1 *param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  uint uVar16;
  ulong unaff_x19;
  ulong uVar17;
  undefined1 *unaff_x20;
  long unaff_x21;
  long lVar18;
  undefined8 *puVar19;
  ulong unaff_x22;
  ulong uVar20;
  undefined8 *puVar21;
  ulong *unaff_x23;
  ulong *unaff_x24;
  ulong *puVar22;
  ulong uVar23;
  undefined1 auStack_4e8 [216];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  ulong *puStack_250;
  ulong *puStack_248;
  ulong uStack_240;
  long lStack_238;
  undefined1 *puStack_230;
  ulong uStack_228;
  undefined1 *puStack_220;
  code *pcStack_218;
  long lStack_208;
  undefined1 auStack_200 [24];
  byte abStack_1e8 [120];
  ulong uStack_170;
  undefined1 *puStack_168;
  ulong uStack_160;
  undefined1 *puStack_158;
  double dStack_150;
  ulong uStack_148;
  undefined1 *puStack_140;
  ulong uStack_138;
  undefined1 *puStack_130;
  ulong uStack_128;
  undefined1 *puStack_120;
  double dStack_118;
  double dStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  undefined1 *puStack_e8;
  ulong uStack_e0;
  undefined1 *puStack_d8;
  double dStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  ulong uStack_a8;
  undefined1 *puStack_a0;
  double dStack_98;
  double dStack_90;
  ulong uStack_88;
  ulong uStack_80;
  long lStack_70;
  
  lStack_70 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar10 = *(long *)(param_1 + 0x10);
  uVar17 = unaff_x19;
  uVar20 = unaff_x22;
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x24 = (ulong *)(param_1 + 0x20);
      puVar22 = (ulong *)(param_2 + 0x20);
      do {
        lVar10 = lVar10 + -1;
        unaff_x23 = (ulong *)0xc000000000000000;
        uStack_128 = unaff_x24[9];
        puStack_130 = (undefined1 *)unaff_x24[8];
        dStack_118 = (double)unaff_x24[0xb];
        puStack_120 = (undefined1 *)unaff_x24[10];
        uStack_108 = unaff_x24[0xd];
        dStack_110 = (double)unaff_x24[0xc];
        uStack_100 = unaff_x24[0xe];
        param_2 = (undefined1 *)unaff_x24[1];
        uVar23 = *unaff_x24;
        puStack_158 = (undefined1 *)unaff_x24[3];
        uStack_160 = unaff_x24[2];
        uStack_148 = unaff_x24[5];
        dStack_150 = (double)unaff_x24[4];
        uStack_138 = unaff_x24[7];
        puStack_140 = (undefined1 *)unaff_x24[6];
        puStack_e8 = (undefined1 *)puVar22[1];
        uStack_f0 = *puVar22;
        puStack_d8 = (undefined1 *)puVar22[3];
        uStack_e0 = puVar22[2];
        uStack_c8 = puVar22[5];
        dStack_d0 = (double)puVar22[4];
        uStack_b8 = puVar22[7];
        puStack_c0 = (undefined1 *)puVar22[6];
        uStack_a8 = puVar22[9];
        puStack_b0 = (undefined1 *)puVar22[8];
        dStack_98 = (double)puVar22[0xb];
        puStack_a0 = (undefined1 *)puVar22[10];
        uStack_88 = puVar22[0xd];
        dStack_90 = (double)puVar22[0xc];
        uStack_80 = puVar22[0xe];
        uStack_170 = uVar23;
        puStack_168 = param_2;
        if ((((((((uVar23 != uStack_f0) || (param_2 != puStack_e8)) &&
                (func_0x000107c605b8(), (uVar23 & 1) == 0)) ||
               (((param_2 = puStack_158, uStack_160 != uStack_e0 || (puStack_158 != puStack_d8)) &&
                (uVar23 = uStack_160, func_0x000107c605b8(), (uVar23 & 1) == 0)))) ||
              (dStack_150 != dStack_d0)) ||
             (((uStack_148 != uStack_c8 || (puStack_140 != puStack_c0)) &&
              (uVar23 = uStack_148, param_2 = puStack_140, func_0x000107c605b8(), (uVar23 & 1) == 0)
              ))) || ((((uStack_138 != uStack_b8 || (puStack_130 != puStack_b0)) &&
                       (uVar23 = uStack_138, param_2 = puStack_130, func_0x000107c605b8(),
                       (uVar23 & 1) == 0)) ||
                      (((param_2 = puStack_120, uStack_128 != uStack_a8 ||
                        (puStack_120 != puStack_a0)) &&
                       (uVar23 = uStack_128, func_0x000107c605b8(), (uVar23 & 1) == 0)))))) ||
           ((unaff_x19 = uStack_80, unaff_x22 = uStack_88, uVar23 = uStack_100,
            dStack_118 != dStack_98 || (dStack_110 != dStack_90)))) goto LAB_103d0c86c;
        uVar16 = (uint)(uStack_100 >> 0x20);
        uVar11 = uVar16 >> 0x1e;
        uVar2 = (uint)(uStack_80 >> 0x20);
        uVar14 = uVar2 >> 0x1e;
        iVar9 = (int)uStack_108;
        uVar17 = unaff_x19;
        uVar20 = unaff_x22;
        if (uStack_100 >> 0x3e == 3) {
          uVar13 = 0;
          if ((((uStack_108 != 0) || (uStack_100 != 0xc000000000000000)) || (uStack_80 >> 0x3e < 3))
             || ((uVar13 = 0, uStack_88 != 0 || (uStack_80 != 0xc000000000000000))))
          goto joined_r0x000103d0c6ec;
        }
        else {
          if (uVar16 >> 0x1e < 2) {
            if (uVar11 == 0) {
              uVar13 = uStack_100 >> 0x30 & 0xff;
            }
            else {
              iVar12 = (int)(uStack_108 >> 0x20);
              if (SBORROW4(iVar12,iVar9)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8b8);
                (*pcVar3)();
              }
              uVar13 = (ulong)(iVar12 - iVar9);
            }
joined_r0x000103d0c6ec:
            if (1 < uVar2 >> 0x1e) goto LAB_103d0c558;
LAB_103d0c58c:
            if (uVar14 == 0) {
              uVar15 = uStack_80 >> 0x30 & 0xff;
            }
            else {
              iVar12 = (int)(uStack_88 >> 0x20);
              if (SBORROW4(iVar12,(int)uStack_88)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8b0);
                (*pcVar3)();
              }
              uVar15 = (ulong)(iVar12 - (int)uStack_88);
            }
          }
          else {
            if (uVar11 == 2) {
              uVar13 = *(long *)(uStack_108 + 0x18) - *(long *)(uStack_108 + 0x10);
              if (SBORROW8(*(long *)(uStack_108 + 0x18),*(long *)(uStack_108 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8b4);
                (*pcVar3)();
              }
              goto joined_r0x000103d0c6ec;
            }
            uVar13 = 0;
            if (uVar14 < 2) goto LAB_103d0c58c;
LAB_103d0c558:
            if (uVar14 != 2) {
              if (uVar13 == 0) goto joined_r0x000103d0c860;
              goto LAB_103d0c86c;
            }
            uVar15 = *(long *)(uStack_88 + 0x18) - *(long *)(uStack_88 + 0x10);
            if (SBORROW8(*(long *)(uStack_88 + 0x18),*(long *)(uStack_88 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8ac);
              (*pcVar3)();
            }
          }
          if (uVar13 != uVar15) goto LAB_103d0c86c;
          if (0 < (long)uVar13) {
            if (uVar11 < 2) {
              if (uVar11 == 0) {
                auStack_200[0] = (undefined1)uStack_108;
                auStack_200[1] = (undefined1)(uStack_108 >> 8);
                auStack_200[2] = (undefined1)(uStack_108 >> 0x10);
                auStack_200[3] = (undefined1)(uStack_108 >> 0x18);
                auStack_200[4] = (undefined1)(uStack_108 >> 0x20);
                auStack_200[5] = (undefined1)(uStack_108 >> 0x28);
                auStack_200[6] = (undefined1)(uStack_108 >> 0x30);
                auStack_200[7] = (undefined1)(uStack_108 >> 0x38);
                auStack_200[8] = (undefined1)uStack_100;
                auStack_200[9] = (undefined1)(uStack_100 >> 8);
                auStack_200[10] = (undefined1)(uStack_100 >> 0x10);
                auStack_200[0xb] = (undefined1)(uStack_100 >> 0x18);
                auStack_200[0xc] = (undefined1)(uStack_100 >> 0x20);
                auStack_200[0xd] = (undefined1)(uStack_100 >> 0x28);
                param_2 = auStack_200 + (uStack_100 >> 0x30 & 0xff);
                FUN_103d1cbbc(&uStack_170,abStack_1e8);
                FUN_103d1cbbc(&uStack_f0,abStack_1e8);
                unaff_x20 = param_2;
                goto LAB_103d0c7a8;
              }
              lVar18 = (long)iVar9;
              puVar4 = (ulong *)(((long)uStack_108 >> 0x20) - lVar18);
              lStack_208 = lVar10;
              if ((long)uStack_108 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8bc);
                (*pcVar3)();
              }
              FUN_103d1cbbc(&uStack_170,abStack_1e8);
              puVar5 = &uStack_f0;
              FUN_103d1cbbc(puVar5,abStack_1e8);
              func_0x000107c5ec30();
              if (puVar5 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar10 = 0;
LAB_103d0c7ec:
                param_2 = (undefined1 *)0x0;
              }
              else {
                puVar6 = puVar5;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar18,(long)puVar6)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8c8);
                  (*pcVar3)();
                }
                lVar10 = (lVar18 - (long)puVar6) + (long)puVar5;
                func_0x000107c5ec38();
                if (lVar10 == 0) goto LAB_103d0c7ec;
                if ((long)puVar4 <= (long)puVar6) {
                  puVar6 = puVar4;
                }
                param_2 = (undefined1 *)((long)puVar6 + lVar10);
              }
              unaff_x23 = (ulong *)0xc000000000000000;
              func_0x000100e25bdc(abStack_1e8,lVar10,param_2,unaff_x22,unaff_x19);
              func_0x000103d1cbf0(&uStack_f0);
              func_0x000103d1cbf0(&uStack_170);
              lVar10 = lStack_208;
            }
            else {
              if (uVar11 != 2) {
                auStack_200[8] = 0;
                auStack_200[9] = 0;
                auStack_200[10] = 0;
                auStack_200[0xb] = 0;
                auStack_200[0xc] = 0;
                auStack_200[0xd] = 0;
                auStack_200[0] = 0;
                auStack_200[1] = 0;
                auStack_200[2] = 0;
                auStack_200[3] = 0;
                auStack_200[4] = 0;
                auStack_200[5] = 0;
                auStack_200[6] = 0;
                auStack_200[7] = 0;
                FUN_103d1cbbc(&uStack_170,abStack_1e8);
                FUN_103d1cbbc(&uStack_f0,abStack_1e8);
                param_2 = auStack_200;
LAB_103d0c7a8:
                func_0x000100e25bdc(abStack_1e8,auStack_200,param_2,unaff_x22,unaff_x19);
                func_0x000103d1cbf0(&uStack_f0);
                func_0x000103d1cbf0(&uStack_170);
                if ((abStack_1e8[0] & 1) != 0) goto joined_r0x000103d0c860;
                goto LAB_103d0c86c;
              }
              lVar18 = *(long *)(uStack_108 + 0x10);
              lVar1 = *(long *)(uStack_108 + 0x18);
              lStack_208 = unaff_x21;
              FUN_103d1cbbc(&uStack_170,abStack_1e8);
              unaff_x23 = &uStack_f0;
              FUN_103d1cbbc(unaff_x23,abStack_1e8);
              func_0x000107c5ec30();
              puVar4 = unaff_x23;
              if (unaff_x23 != (ulong *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar18,(long)puVar4)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8c4);
                  (*pcVar3)();
                }
                unaff_x23 = (ulong *)((lVar18 - (long)puVar4) + (long)unaff_x23);
              }
              puVar5 = (ulong *)(lVar1 - lVar18);
              if (SBORROW8(lVar1,lVar18)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x103d0c8c0);
                (*pcVar3)();
              }
              func_0x000107c5ec38();
              unaff_x21 = lStack_208;
              if (unaff_x23 == (ulong *)0x0) {
                param_2 = (undefined1 *)0x0;
              }
              else {
                if ((long)puVar5 <= (long)puVar4) {
                  puVar4 = puVar5;
                }
                param_2 = (undefined1 *)((long)puVar4 + (long)unaff_x23);
              }
              func_0x000100e25bdc(abStack_1e8,unaff_x23,param_2,unaff_x22,unaff_x19);
              func_0x000103d1cbf0(&uStack_f0);
              func_0x000103d1cbf0(&uStack_170);
            }
            unaff_x20 = (undefined1 *)(uVar23 & 0x3fffffffffffffff);
            if ((abStack_1e8[0] & 1) == 0) goto LAB_103d0c86c;
          }
        }
joined_r0x000103d0c860:
        unaff_x23 = (ulong *)0xc000000000000000;
        if (lVar10 == 0) break;
        unaff_x24 = unaff_x24 + 0xf;
        puVar22 = puVar22 + 0xf;
      } while( true );
    }
    puVar7 = (undefined1 *)0x1;
    uVar17 = unaff_x19;
    uVar20 = unaff_x22;
  }
  else {
LAB_103d0c86c:
    puVar7 = (undefined1 *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_70) {
    return puVar7;
  }
  func_0x000107c60e78();
  pcStack_218 = FUN_103d0c8cc;
  lVar10 = *(long *)(puVar7 + 0x10);
  if (lVar10 == *(long *)(param_2 + 0x10)) {
    if ((lVar10 == 0) || (puVar7 == param_2)) {
      uVar16 = 1;
    }
    else {
      puVar19 = (undefined8 *)(puVar7 + 0x20);
      puVar21 = (undefined8 *)(param_2 + 0x20);
      puStack_250 = unaff_x24;
      puStack_248 = unaff_x23;
      uStack_240 = uVar20;
      lStack_238 = unaff_x21;
      puStack_230 = unaff_x20;
      uStack_228 = uVar17;
      puStack_220 = &stack0xfffffffffffffff0;
      do {
        lVar10 = lVar10 + -1;
        uStack_368 = puVar19[0x15];
        uStack_370 = puVar19[0x14];
        uStack_358 = puVar19[0x17];
        uStack_360 = puVar19[0x16];
        uStack_348 = puVar19[0x19];
        uStack_350 = puVar19[0x18];
        uStack_340 = puVar19[0x1a];
        uStack_3a8 = puVar19[0xd];
        uStack_3b0 = puVar19[0xc];
        uStack_398 = puVar19[0xf];
        uStack_3a0 = puVar19[0xe];
        uStack_388 = puVar19[0x11];
        uStack_390 = puVar19[0x10];
        uStack_378 = puVar19[0x13];
        uStack_380 = puVar19[0x12];
        uStack_3e8 = puVar19[5];
        uStack_3f0 = puVar19[4];
        uStack_3d8 = puVar19[7];
        uStack_3e0 = puVar19[6];
        uStack_3c8 = puVar19[9];
        uStack_3d0 = puVar19[8];
        uStack_3b8 = puVar19[0xb];
        uStack_3c0 = puVar19[10];
        uStack_408 = puVar19[1];
        uStack_410 = *puVar19;
        uStack_3f8 = puVar19[3];
        uStack_400 = puVar19[2];
        uStack_288 = puVar21[0x15];
        uStack_290 = puVar21[0x14];
        uStack_278 = puVar21[0x17];
        uStack_280 = puVar21[0x16];
        uStack_268 = puVar21[0x19];
        uStack_270 = puVar21[0x18];
        uStack_260 = puVar21[0x1a];
        uStack_2c8 = puVar21[0xd];
        uStack_2d0 = puVar21[0xc];
        uStack_2b8 = puVar21[0xf];
        uStack_2c0 = puVar21[0xe];
        uStack_2a8 = puVar21[0x11];
        uStack_2b0 = puVar21[0x10];
        uStack_298 = puVar21[0x13];
        uStack_2a0 = puVar21[0x12];
        uStack_308 = puVar21[5];
        uStack_310 = puVar21[4];
        uStack_2f8 = puVar21[7];
        uStack_300 = puVar21[6];
        uStack_2e8 = puVar21[9];
        uStack_2f0 = puVar21[8];
        uStack_2d8 = puVar21[0xb];
        uStack_2e0 = puVar21[10];
        uStack_328 = puVar21[1];
        uStack_330 = *puVar21;
        uStack_318 = puVar21[3];
        uStack_320 = puVar21[2];
        func_0x000103d0ebf4(&uStack_410,auStack_4e8);
        func_0x000103d0ebf4(&uStack_330,auStack_4e8);
        puVar8 = &uStack_410;
        FUN_103d0ec54(puVar8,&uStack_330);
        uVar16 = (uint)puVar8;
        func_0x000103d0ec28(&uStack_330);
        func_0x000103d0ec28(&uStack_410);
        if (((ulong)puVar8 & 1) == 0) break;
        puVar21 = puVar21 + 0x1b;
        puVar19 = puVar19 + 0x1b;
      } while (lVar10 != 0);
    }
  }
  else {
    uVar16 = 0;
  }
  return (undefined1 *)(ulong)(uVar16 & 1);
}



/* Entry: 103d0c8cc; end: 103d0ca0b;  */

uint FUN_103d0c8cc(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2d8 [216];
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_158 = puVar4[0x15];
        uStack_160 = puVar4[0x14];
        uStack_148 = puVar4[0x17];
        uStack_150 = puVar4[0x16];
        uStack_138 = puVar4[0x19];
        uStack_140 = puVar4[0x18];
        uStack_130 = puVar4[0x1a];
        uStack_198 = puVar4[0xd];
        uStack_1a0 = puVar4[0xc];
        uStack_188 = puVar4[0xf];
        uStack_190 = puVar4[0xe];
        uStack_178 = puVar4[0x11];
        uStack_180 = puVar4[0x10];
        uStack_168 = puVar4[0x13];
        uStack_170 = puVar4[0x12];
        uStack_1d8 = puVar4[5];
        uStack_1e0 = puVar4[4];
        uStack_1c8 = puVar4[7];
        uStack_1d0 = puVar4[6];
        uStack_1b8 = puVar4[9];
        uStack_1c0 = puVar4[8];
        uStack_1a8 = puVar4[0xb];
        uStack_1b0 = puVar4[10];
        uStack_1f8 = puVar4[1];
        uStack_200 = *puVar4;
        uStack_1e8 = puVar4[3];
        uStack_1f0 = puVar4[2];
        uStack_78 = puVar5[0x15];
        uStack_80 = puVar5[0x14];
        uStack_68 = puVar5[0x17];
        uStack_70 = puVar5[0x16];
        uStack_58 = puVar5[0x19];
        uStack_60 = puVar5[0x18];
        uStack_50 = puVar5[0x1a];
        uStack_b8 = puVar5[0xd];
        uStack_c0 = puVar5[0xc];
        uStack_a8 = puVar5[0xf];
        uStack_b0 = puVar5[0xe];
        uStack_98 = puVar5[0x11];
        uStack_a0 = puVar5[0x10];
        uStack_88 = puVar5[0x13];
        uStack_90 = puVar5[0x12];
        uStack_f8 = puVar5[5];
        uStack_100 = puVar5[4];
        uStack_e8 = puVar5[7];
        uStack_f0 = puVar5[6];
        uStack_d8 = puVar5[9];
        uStack_e0 = puVar5[8];
        uStack_c8 = puVar5[0xb];
        uStack_d0 = puVar5[10];
        uStack_118 = puVar5[1];
        uStack_120 = *puVar5;
        uStack_108 = puVar5[3];
        uStack_110 = puVar5[2];
        func_0x000103d0ebf4(&uStack_200,auStack_2d8);
        func_0x000103d0ebf4(&uStack_120,auStack_2d8);
        puVar1 = &uStack_200;
        FUN_103d0ec54(puVar1,&uStack_120);
        uVar3 = (uint)puVar1;
        func_0x000103d0ec28(&uStack_120);
        func_0x000103d0ec28(&uStack_200);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x1b;
        puVar4 = puVar4 + 0x1b;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 103d0ca0c; end: 103d0ceeb;  */

/* WARNING: Type propagation algorithm not settling */

ulong FUN_103d0ca0c(ulong param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  ulong uVar6;
  byte *pbVar7;
  long lVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar14;
  ulong unaff_x22;
  int iVar15;
  ulong unaff_x23;
  ulong *puVar16;
  ulong unaff_x24;
  ulong *puVar17;
  ulong unaff_x25;
  ulong *unaff_x26;
  long lVar18;
  ulong uVar19;
  undefined1 auStack_1f0 [80];
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
  ulong *puStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar18 = *(long *)(param_1 + 0x10);
  if (lVar18 == *(long *)(param_2 + 0x10)) {
    if ((lVar18 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      puVar16 = (ulong *)(param_2 + 0x30);
      unaff_x26 = (ulong *)(param_1 + 0x30);
      do {
        unaff_x23 = unaff_x26[-2];
        unaff_x22 = unaff_x26[-1];
        unaff_x19 = *unaff_x26;
        unaff_x20 = puVar16[-2];
        unaff_x25 = puVar16[-1];
        unaff_x24 = *puVar16;
        func_0x00010006c00c(unaff_x23,unaff_x22);
        func_0x000107c6157c(unaff_x19);
        uStack_90 = unaff_x20;
        func_0x00010006c00c(unaff_x20,unaff_x25);
        uVar6 = unaff_x24;
        func_0x000107c6157c();
        param_2 = unaff_x22;
        if (unaff_x19 != unaff_x24) {
          func_0x000107c6157c(unaff_x19);
          func_0x000107c6157c(unaff_x24);
          unaff_x20 = unaff_x19;
          FUN_103d02ab0(unaff_x19,unaff_x24);
          func_0x000107c61574(unaff_x24);
          uVar6 = unaff_x19;
          func_0x000107c61574();
          if ((unaff_x20 & 1) != 0) goto LAB_103d0cb1c;
LAB_103d0ce64:
          func_0x00010006c090(uStack_90,unaff_x25);
          func_0x000107c61574(unaff_x24);
          func_0x00010006c090(unaff_x23);
          func_0x000107c61574(unaff_x19);
          goto LAB_103d0ce8c;
        }
LAB_103d0cb1c:
        uVar19 = uStack_90;
        uVar2 = (uint)(unaff_x22 >> 0x20);
        uVar9 = uVar2 >> 0x1e;
        uVar3 = (uint)(unaff_x25 >> 0x20);
        uVar12 = uVar3 >> 0x1e;
        iVar15 = (int)unaff_x23;
        if (unaff_x22 >> 0x3e == 3) {
          uVar11 = 0;
          if ((((unaff_x23 != 0) || (unaff_x22 != 0xc000000000000000)) || (unaff_x25 >> 0x3e < 3))
             || ((uVar11 = 0, uStack_90 != 0 || (unaff_x25 != 0xc000000000000000))))
          goto joined_r0x000103d0cb94;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(unaff_x24);
          uVar6 = 0;
          param_2 = 0xc000000000000000;
LAB_103d0ca88:
          func_0x00010006c090(uVar6);
          func_0x000107c61574(unaff_x19);
        }
        else {
          if (1 < uVar2 >> 0x1e) {
            if (uVar9 == 2) {
              uVar11 = *(long *)(unaff_x23 + 0x18) - *(long *)(unaff_x23 + 0x10);
              if (SBORROW8(*(long *)(unaff_x23 + 0x18),*(long *)(unaff_x23 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0ced8);
                (*pcVar5)();
              }
              goto joined_r0x000103d0cb94;
            }
            uVar11 = 0;
            if (uVar12 < 2) goto LAB_103d0cbd0;
LAB_103d0cb98:
            if (uVar12 == 2) {
              uVar13 = *(long *)(uStack_90 + 0x18) - *(long *)(uStack_90 + 0x10);
              if (SBORROW8(*(long *)(uStack_90 + 0x18),*(long *)(uStack_90 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0cecc);
                (*pcVar5)();
              }
              goto LAB_103d0cbf0;
            }
            if (uVar11 != 0) goto LAB_103d0ce64;
LAB_103d0ca6c:
            func_0x00010006c090(uStack_90,unaff_x25);
            func_0x000107c61574(unaff_x24);
            uVar6 = unaff_x23;
            goto LAB_103d0ca88;
          }
          if (uVar9 == 0) {
            uVar11 = unaff_x22 >> 0x30 & 0xff;
          }
          else {
            iVar10 = (int)(unaff_x23 >> 0x20);
            if (SBORROW4(iVar10,iVar15)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0ced4);
              (*pcVar5)();
            }
            uVar11 = (ulong)(iVar10 - iVar15);
          }
joined_r0x000103d0cb94:
          if (1 < uVar3 >> 0x1e) goto LAB_103d0cb98;
LAB_103d0cbd0:
          if (uVar12 == 0) {
            uVar13 = unaff_x25 >> 0x30 & 0xff;
          }
          else {
            iVar10 = (int)(uStack_90 >> 0x20);
            if (SBORROW4(iVar10,(int)uStack_90)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0ced0);
              (*pcVar5)();
            }
            uVar13 = (ulong)(iVar10 - (int)uStack_90);
          }
LAB_103d0cbf0:
          if (uVar11 != uVar13) goto LAB_103d0ce64;
          if ((long)uVar11 < 1) goto LAB_103d0ca6c;
          if (uVar9 < 2) {
            if (uVar9 == 0) {
              abStack_80[0] = (byte)unaff_x23;
              abStack_80[1] = (byte)(unaff_x23 >> 8);
              abStack_80[2] = (byte)(unaff_x23 >> 0x10);
              abStack_80[3] = (byte)(unaff_x23 >> 0x18);
              abStack_80[4] = (byte)(unaff_x23 >> 0x20);
              abStack_80[5] = (byte)(unaff_x23 >> 0x28);
              abStack_80[6] = (byte)(unaff_x23 >> 0x30);
              abStack_80[7] = (byte)(unaff_x23 >> 0x38);
              abStack_80[8] = (byte)unaff_x22;
              abStack_80[9] = (byte)(unaff_x22 >> 8);
              abStack_80[10] = (byte)(unaff_x22 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x22 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x22 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x22 >> 0x28);
              pbVar7 = abStack_80 + (unaff_x22 >> 0x30 & 0xff);
              goto LAB_103d0cd78;
            }
            lVar14 = (long)iVar15;
            uStack_a0 = ((long)unaff_x23 >> 0x20) - lVar14;
            if ((long)unaff_x23 >> 0x20 < lVar14) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0cedc);
              uStack_98 = unaff_x21;
              (*pcVar5)();
            }
            uStack_98 = unaff_x21;
            func_0x000107c5ec30();
            if (uVar6 == 0) {
              func_0x000107c5ec38();
              lVar14 = 0;
              lVar8 = 0;
            }
            else {
              uStack_a8 = uVar6;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar14,uVar6)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0cee8);
                (*pcVar5)();
              }
              lVar1 = (lVar14 - uVar6) + uStack_a8;
              func_0x000107c5ec38();
              if ((long)uStack_a0 <= (long)uVar6) {
                uVar6 = uStack_a0;
              }
              lVar14 = 0;
              if (lVar1 != 0) {
                lVar14 = lVar1;
              }
              lVar8 = 0;
              if (lVar1 != 0) {
                lVar8 = uVar6 + lVar1;
              }
            }
LAB_103d0ce18:
            unaff_x20 = uStack_90;
            unaff_x21 = uStack_98;
            func_0x000100e25bdc(abStack_80,lVar14,lVar8,uStack_90,unaff_x25);
            func_0x00010006c090(unaff_x20,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            bVar4 = abStack_80[0];
          }
          else {
            if (uVar9 == 2) {
              uStack_a0 = *(ulong *)(unaff_x23 + 0x10);
              uStack_a8 = *(ulong *)(unaff_x23 + 0x18);
              uStack_98 = unaff_x21;
              func_0x000107c5ec30();
              uStack_b0 = unaff_x23;
              if (uVar6 == 0) {
                lVar14 = 0;
              }
              else {
                uVar19 = uVar6;
                func_0x000107c5ec3c();
                if (SBORROW8(uStack_a0,uVar19)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0cee4);
                  (*pcVar5)();
                }
                lVar14 = (uStack_a0 - uVar19) + uVar6;
                uVar6 = uVar19;
              }
              uVar19 = uStack_a8 - uStack_a0;
              if (SBORROW8(uStack_a8,uStack_a0)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0cee0);
                (*pcVar5)();
              }
              func_0x000107c5ec38();
              unaff_x23 = uStack_b0;
              if (lVar14 == 0) {
                lVar8 = 0;
              }
              else {
                if ((long)uVar19 <= (long)uVar6) {
                  uVar6 = uVar19;
                }
                lVar8 = uVar6 + lVar14;
              }
              goto LAB_103d0ce18;
            }
            abStack_80[8] = 0;
            abStack_80[9] = 0;
            abStack_80[10] = 0;
            abStack_80[0xb] = 0;
            abStack_80[0xc] = 0;
            abStack_80[0xd] = 0;
            abStack_80[0] = 0;
            abStack_80[1] = 0;
            abStack_80[2] = 0;
            abStack_80[3] = 0;
            abStack_80[4] = 0;
            abStack_80[5] = 0;
            abStack_80[6] = 0;
            abStack_80[7] = 0;
            pbVar7 = abStack_80;
LAB_103d0cd78:
            func_0x000100e25bdc(&bStack_81,abStack_80,pbVar7,uStack_90,unaff_x25);
            func_0x00010006c090(uVar19,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            unaff_x20 = uVar19;
            bVar4 = bStack_81;
          }
          if ((bVar4 & 1) == 0) goto LAB_103d0ce8c;
        }
        puVar16 = puVar16 + 3;
        unaff_x26 = unaff_x26 + 3;
        lVar18 = lVar18 + -1;
      } while (lVar18 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_103d0ce8c:
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return uVar6;
  }
  func_0x000107c60e78();
  lVar18 = *(long *)(uVar6 + 0x10);
  if (lVar18 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar18 == 0) || (uVar6 == param_2)) {
    return 1;
  }
  pcStack_b8 = FUN_103d0ceec;
  puVar16 = (ulong *)(uVar6 + 0x20);
  puVar17 = (ulong *)(param_2 + 0x20);
  puStack_100 = unaff_x26;
  uStack_f8 = unaff_x25;
  uStack_f0 = unaff_x24;
  uStack_e8 = unaff_x23;
  uStack_e0 = unaff_x22;
  uStack_d8 = unaff_x21;
  uStack_d0 = unaff_x20;
  uStack_c8 = unaff_x19;
  puStack_c0 = &stack0xfffffffffffffff0;
  while( true ) {
    lVar18 = lVar18 + -1;
    uStack_178 = puVar16[5];
    uStack_180 = puVar16[4];
    uStack_168 = puVar16[7];
    uStack_170 = puVar16[6];
    uStack_158 = puVar16[9];
    uStack_160 = puVar16[8];
    uStack_198 = puVar16[1];
    uStack_1a0 = *puVar16;
    uStack_188 = puVar16[3];
    uVar19 = puVar16[2];
    uStack_128 = puVar17[5];
    uStack_130 = puVar17[4];
    uStack_118 = puVar17[7];
    uStack_120 = puVar17[6];
    uStack_108 = puVar17[9];
    uStack_110 = puVar17[8];
    uStack_148 = puVar17[1];
    uStack_150 = *puVar17;
    uStack_138 = puVar17[3];
    uStack_140 = puVar17[2];
    uVar6 = (ulong)(uStack_1a0 != 0);
    if ((char)uStack_198 != '\x01') {
      uVar6 = uStack_1a0;
    }
    if ((char)uStack_148 == '\x01') {
      if (uStack_150 == 0) {
        if (uVar6 != 0) {
          return 0;
        }
      }
      else if (uVar6 != 1) {
        return 0;
      }
    }
    else if (uVar6 != uStack_150) {
      return 0;
    }
    uStack_190 = uVar19;
    if (((((uVar19 != uStack_140) || (uStack_188 != uStack_138)) &&
         (func_0x000107c605b8(), (uVar19 & 1) == 0)) ||
        ((uStack_180 != uStack_130 || (uStack_178 != uStack_128)))) ||
       (((uStack_170 != uStack_120 || (uStack_168 != uStack_118)) &&
        (uVar6 = uStack_170, func_0x000107c605b8(), (uVar6 & 1) == 0)))) {
      return 0;
    }
    uVar13 = uStack_108;
    uVar11 = uStack_110;
    uVar19 = uStack_158;
    uVar6 = uStack_160;
    FUN_103ce43d0(&uStack_1a0,auStack_1f0);
    FUN_103ce43d0(&uStack_150,auStack_1f0);
    func_0x000100e25fcc(uVar6,uVar19,uVar11,uVar13);
    func_0x000103ce440c(&uStack_150);
    func_0x000103ce440c(&uStack_1a0);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (lVar18 == 0) break;
    puVar16 = puVar16 + 10;
    puVar17 = puVar17 + 10;
  }
  return 1;
}



/* Entry: 103d0ceec; end: 103d0d0a7;  */

undefined8 FUN_103d0ceec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined1 auStack_140 [80];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar4 == 0) || (param_1 == param_2)) {
    return 1;
  }
  puVar5 = (ulong *)(param_1 + 0x20);
  puVar6 = (ulong *)(param_2 + 0x20);
  while( true ) {
    lVar4 = lVar4 + -1;
    uStack_c8 = puVar5[5];
    uStack_d0 = puVar5[4];
    uStack_b8 = puVar5[7];
    uStack_c0 = puVar5[6];
    uStack_a8 = puVar5[9];
    uStack_b0 = puVar5[8];
    uStack_e8 = puVar5[1];
    uStack_f0 = *puVar5;
    uStack_d8 = puVar5[3];
    uVar7 = puVar5[2];
    uStack_78 = puVar6[5];
    uStack_80 = puVar6[4];
    uStack_68 = puVar6[7];
    uStack_70 = puVar6[6];
    uStack_58 = puVar6[9];
    uStack_60 = puVar6[8];
    uStack_98 = puVar6[1];
    uStack_a0 = *puVar6;
    uStack_88 = puVar6[3];
    uStack_90 = puVar6[2];
    uVar3 = (ulong)(uStack_f0 != 0);
    if ((char)uStack_e8 != '\x01') {
      uVar3 = uStack_f0;
    }
    if ((char)uStack_98 == '\x01') {
      if (uStack_a0 == 0) {
        if (uVar3 != 0) {
          return 0;
        }
      }
      else if (uVar3 != 1) {
        return 0;
      }
    }
    else if (uVar3 != uStack_a0) {
      return 0;
    }
    uStack_e0 = uVar7;
    if (((((uVar7 != uStack_90) || (uStack_d8 != uStack_88)) &&
         (func_0x000107c605b8(), (uVar7 & 1) == 0)) ||
        ((uStack_d0 != uStack_80 || (uStack_c8 != uStack_78)))) ||
       (((uStack_c0 != uStack_70 || (uStack_b8 != uStack_68)) &&
        (uVar3 = uStack_c0, func_0x000107c605b8(), (uVar3 & 1) == 0)))) {
      return 0;
    }
    uVar2 = uStack_58;
    uVar1 = uStack_60;
    uVar7 = uStack_a8;
    uVar3 = uStack_b0;
    FUN_103ce43d0(&uStack_f0,auStack_140);
    FUN_103ce43d0(&uStack_a0,auStack_140);
    func_0x000100e25fcc(uVar3,uVar7,uVar1,uVar2);
    func_0x000103ce440c(&uStack_a0);
    func_0x000103ce440c(&uStack_f0);
    if ((uVar3 & 1) == 0) {
      return 0;
    }
    if (lVar4 == 0) break;
    puVar5 = puVar5 + 10;
    puVar6 = puVar6 + 10;
  }
  return 1;
}



/* Entry: 103d0d0a8; end: 103d0db43;  */

void FUN_103d0d0a8(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  code *pcVar5;
  ulong *puVar6;
  ulong *puVar7;
  ulong *puVar8;
  undefined8 uVar9;
  byte *pbVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *unaff_x19;
  ulong *unaff_x20;
  ulong unaff_x21;
  long lVar20;
  int iVar21;
  ulong unaff_x22;
  ulong *unaff_x23;
  ulong unaff_x24;
  ulong *unaff_x25;
  ulong *puVar22;
  ulong *unaff_x26;
  ulong *unaff_x27;
  ulong uVar23;
  byte abStack_259 [9];
  byte abStack_250 [96];
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  double dStack_1d0;
  ulong uStack_1c8;
  double dStack_1c0;
  double dStack_1b8;
  double dStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  double dStack_170;
  ulong uStack_168;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_128;
  ulong uStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong uStack_f0;
  ulong *puStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_a8;
  ulong uStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  byte bStack_81;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar23 = param_1[2];
  puVar22 = unaff_x25;
  if (uVar23 == param_2[2]) {
    if ((uVar23 != 0) && (param_1 != param_2)) {
      uStack_a0 = 0;
      unaff_x23 = param_2 + 9;
      unaff_x26 = param_1 + 5;
      do {
        uVar14 = unaff_x26[-1];
        puVar8 = (ulong *)*unaff_x26;
        uVar13 = unaff_x26[1];
        unaff_x22 = unaff_x26[3];
        unaff_x19 = (ulong *)unaff_x26[4];
        puVar6 = (ulong *)unaff_x23[-4];
        unaff_x21 = unaff_x23[-3];
        uVar17 = unaff_x23[-2];
        unaff_x27 = (ulong *)(ulong)(byte)uVar17;
        unaff_x25 = (ulong *)unaff_x23[-1];
        unaff_x24 = *unaff_x23;
        puVar22 = unaff_x25;
        if (((uVar14 != unaff_x23[-5]) || (puVar8 != puVar6)) &&
           (param_2 = puVar8, puStack_98 = unaff_x26, puStack_90 = unaff_x23, func_0x000107c605b8(),
           unaff_x20 = puVar6, unaff_x23 = puStack_90, unaff_x26 = puStack_98, (uVar14 & 1) == 0))
        goto LAB_103d0d5cc;
        if ((byte)uVar17 == 1) {
          if ((long)unaff_x21 < 2) {
            if (unaff_x21 == 0) {
              if (uVar13 != 0) goto LAB_103d0d5cc;
            }
            else if (uVar13 != 1) goto LAB_103d0d5cc;
          }
          else if (unaff_x21 == 2) {
            if (uVar13 != 2) goto LAB_103d0d5cc;
          }
          else if (uVar13 != 3) goto LAB_103d0d5cc;
        }
        else if (uVar13 != unaff_x21) goto LAB_103d0d5cc;
        uVar2 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        uVar3 = (uint)(unaff_x24 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar21 = (int)unaff_x22;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar14 = 0;
          if (((unaff_x22 != 0) || (unaff_x19 != (ulong *)0xc000000000000000)) ||
             ((unaff_x24 >> 0x3e < 3 ||
              ((uVar14 = 0, unaff_x25 != (ulong *)0x0 || (unaff_x24 != 0xc000000000000000))))))
          goto joined_r0x000103d0d438;
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar14 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar15,iVar21)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d620);
                (*pcVar5)();
              }
              uVar14 = (ulong)(iVar15 - iVar21);
            }
joined_r0x000103d0d438:
            if (uVar3 >> 0x1e < 2) goto LAB_103d0d264;
LAB_103d0d21c:
            if (uVar16 != 2) {
              if (uVar14 == 0) goto LAB_103d0d108;
              goto LAB_103d0d5cc;
            }
            uVar17 = unaff_x25[3] - unaff_x25[2];
            if (SBORROW8(unaff_x25[3],unaff_x25[2])) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d614);
              (*pcVar5)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar14 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d61c);
                (*pcVar5)();
              }
              goto joined_r0x000103d0d438;
            }
            uVar14 = 0;
            if (1 < uVar16) goto LAB_103d0d21c;
LAB_103d0d264:
            if (uVar16 == 0) {
              uVar17 = unaff_x24 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)((ulong)unaff_x25 >> 0x20);
              if (SBORROW4(iVar15,(int)unaff_x25)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d618);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar15 - (int)unaff_x25);
            }
          }
          if (uVar14 != uVar17) goto LAB_103d0d5cc;
          if (0 < (long)uVar14) {
            param_2 = unaff_x19;
            if (uVar12 < 2) {
              if (uVar12 != 0) {
                lVar20 = (long)iVar21;
                puStack_98 = (ulong *)(((long)unaff_x22 >> 0x20) - lVar20);
                if ((long)unaff_x22 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d624);
                  puStack_a8 = puVar8;
                  puStack_90 = puVar6;
                  (*pcVar5)();
                }
                puStack_a8 = puVar8;
                puStack_90 = puVar6;
                func_0x000107c61434(puVar8);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_90);
                puVar7 = unaff_x25;
                func_0x00010006c00c(unaff_x25,unaff_x24);
                func_0x000107c5ec30();
                if (puVar7 == (ulong *)0x0) {
                  func_0x000107c5ec38();
                  puVar8 = (ulong *)0x0;
                  lVar20 = 0;
                  puVar7 = unaff_x27;
                }
                else {
                  puVar6 = puVar7;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,(long)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d630);
                    (*pcVar5)();
                  }
                  puVar1 = (ulong *)((lVar20 - (long)puVar6) + (long)puVar7);
                  func_0x000107c5ec38();
                  if ((long)puStack_98 <= (long)puVar6) {
                    puVar6 = puStack_98;
                  }
                  puVar8 = (ulong *)0x0;
                  if (puVar1 != (ulong *)0x0) {
                    puVar8 = puVar1;
                  }
                  lVar20 = 0;
                  if (puVar1 != (ulong *)0x0) {
                    lVar20 = (long)puVar6 + (long)puVar1;
                  }
                }
LAB_103d0d588:
                unaff_x21 = uStack_a0;
                unaff_x20 = (ulong *)((ulong)unaff_x19 & 0x3fffffffffffffff);
                func_0x000100e25bdc(&uStack_80,puVar8,lVar20,unaff_x25,unaff_x24);
                uStack_a0 = unaff_x21;
                func_0x000107c6142c(puStack_90);
                func_0x00010006c090(unaff_x25,unaff_x24);
                func_0x000107c6142c(puStack_a8);
                func_0x00010006c090(unaff_x22);
                unaff_x27 = puVar7;
                if (((byte)uStack_80 & 1) != 0) goto LAB_103d0d108;
                goto LAB_103d0d5cc;
              }
              uStack_80._0_1_ = (byte)unaff_x22;
              uStack_80._1_1_ = (undefined1)(unaff_x22 >> 8);
              uStack_80._2_1_ = (undefined1)(unaff_x22 >> 0x10);
              uStack_80._3_1_ = (undefined1)(unaff_x22 >> 0x18);
              uStack_80._4_1_ = (undefined1)(unaff_x22 >> 0x20);
              uStack_80._5_1_ = (undefined1)(unaff_x22 >> 0x28);
              uStack_80._6_1_ = (undefined1)(unaff_x22 >> 0x30);
              uStack_80._7_1_ = (undefined1)(unaff_x22 >> 0x38);
              uStack_78 = SUB81(unaff_x19,0);
              uStack_77 = (undefined1)((ulong)unaff_x19 >> 8);
              uStack_76 = (undefined1)((ulong)unaff_x19 >> 0x10);
              uStack_75 = (undefined1)((ulong)unaff_x19 >> 0x18);
              uStack_74 = (undefined1)((ulong)unaff_x19 >> 0x20);
              uStack_73 = (undefined1)((ulong)unaff_x19 >> 0x28);
              unaff_x20 = (ulong *)((long)&uStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff));
              puStack_a8 = puVar8;
              func_0x000107c61434(puVar8);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x000107c61434(puVar6);
              func_0x00010006c00c(unaff_x25,unaff_x24);
              unaff_x21 = uStack_a0;
              func_0x000100e25bdc(&bStack_81,&uStack_80,unaff_x20,unaff_x25,unaff_x24);
              uStack_a0 = unaff_x21;
              func_0x000107c6142c(puVar6);
              func_0x00010006c090(unaff_x25,unaff_x24);
              puVar8 = puStack_a8;
              puVar22 = puVar6;
              unaff_x27 = unaff_x25;
            }
            else {
              if (uVar12 == 2) {
                lVar20 = *(long *)(unaff_x22 + 0x10);
                puStack_98 = *(ulong **)(unaff_x22 + 0x18);
                puStack_a8 = puVar8;
                puStack_90 = puVar6;
                func_0x000107c61434(puVar8);
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x000107c61434(puStack_90);
                puVar8 = unaff_x25;
                func_0x00010006c00c(unaff_x25,unaff_x24);
                func_0x000107c5ec30();
                puVar6 = puVar8;
                if (puVar8 != (ulong *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,(long)puVar6)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d62c);
                    (*pcVar5)();
                  }
                  puVar8 = (ulong *)((lVar20 - (long)puVar6) + (long)puVar8);
                }
                puVar1 = (ulong *)((long)puStack_98 - lVar20);
                if (SBORROW8((long)puStack_98,lVar20)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0d628);
                  (*pcVar5)();
                }
                func_0x000107c5ec38();
                puVar7 = puVar8;
                if (puVar8 == (ulong *)0x0) {
                  lVar20 = 0;
                }
                else {
                  if ((long)puVar1 <= (long)puVar6) {
                    puVar6 = puVar1;
                  }
                  lVar20 = (long)puVar6 + (long)puVar8;
                }
                goto LAB_103d0d588;
              }
              uStack_78 = 0;
              uStack_77 = 0;
              uStack_76 = 0;
              uStack_75 = 0;
              uStack_74 = 0;
              uStack_73 = 0;
              uStack_80._0_1_ = 0;
              uStack_80._1_1_ = 0;
              uStack_80._2_1_ = 0;
              uStack_80._3_1_ = 0;
              uStack_80._4_1_ = 0;
              uStack_80._5_1_ = 0;
              uStack_80._6_1_ = 0;
              uStack_80._7_1_ = 0;
              puStack_90 = puVar6;
              func_0x000107c61434(puVar8);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x27 = puStack_90;
              func_0x000107c61434(puStack_90);
              func_0x00010006c00c(unaff_x25,unaff_x24);
              unaff_x21 = uStack_a0;
              func_0x000100e25bdc(&bStack_81,&uStack_80,&uStack_80,unaff_x25,unaff_x24);
              uStack_a0 = unaff_x21;
              func_0x000107c6142c(unaff_x27);
              func_0x00010006c090(unaff_x25,unaff_x24);
              unaff_x20 = puVar8;
            }
            func_0x000107c6142c(puVar8);
            func_0x00010006c090(unaff_x22);
            unaff_x25 = puVar22;
            if ((bStack_81 & 1) == 0) goto LAB_103d0d5cc;
          }
        }
LAB_103d0d108:
        unaff_x23 = unaff_x23 + 6;
        unaff_x26 = unaff_x26 + 6;
        uVar23 = uVar23 - 1;
      } while (uVar23 != 0);
    }
    puVar8 = (ulong *)0x1;
  }
  else {
LAB_103d0d5cc:
    puVar8 = (ulong *)0x0;
    unaff_x25 = puVar22;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uStack_b8 = 0x103d0d634;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar14 = puVar8[2];
  uStack_110 = uVar23;
  puStack_108 = unaff_x27;
  puStack_100 = unaff_x26;
  puStack_f8 = unaff_x25;
  uStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  uStack_e0 = unaff_x22;
  uStack_d8 = unaff_x21;
  puStack_d0 = unaff_x20;
  puStack_c8 = unaff_x19;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (uVar14 == param_2[2]) {
    if ((uVar14 != 0) && (puVar8 != param_2)) {
      puVar8 = puVar8 + 4;
      param_2 = param_2 + 4;
      do {
        uVar14 = uVar14 - 1;
        uStack_1c8 = puVar8[5];
        dStack_1d0 = (double)puVar8[4];
        dStack_1b8 = (double)puVar8[7];
        dStack_1c0 = (double)puVar8[6];
        uStack_1a8 = puVar8[9];
        dStack_1b0 = (double)puVar8[8];
        uStack_198 = puVar8[0xb];
        uStack_1a0 = puVar8[10];
        uStack_1e8 = puVar8[1];
        uVar23 = *puVar8;
        uStack_1d8 = puVar8[3];
        uStack_1e0 = puVar8[2];
        uStack_168 = param_2[5];
        dStack_170 = (double)param_2[4];
        dStack_158 = (double)param_2[7];
        dStack_160 = (double)param_2[6];
        uStack_148 = param_2[9];
        dStack_150 = (double)param_2[8];
        uStack_138 = param_2[0xb];
        uStack_140 = param_2[10];
        uStack_188 = param_2[1];
        uStack_190 = *param_2;
        uStack_178 = param_2[3];
        uStack_180 = param_2[2];
        uStack_1f0 = uVar23;
        if (((uVar23 != uStack_190) || (uStack_1e8 != uStack_188)) &&
           (func_0x000107c605b8(), (uVar23 & 1) == 0)) goto LAB_103d0dae4;
        uVar13 = uStack_148;
        uVar23 = uStack_1a8;
        uVar17 = (ulong)(uStack_1e0 != 0);
        if ((char)uStack_1d8 != '\x01') {
          uVar17 = uStack_1e0;
        }
        if ((char)uStack_178 == '\x01') {
          if (uStack_180 == 0) {
            if (uVar17 != 0) goto LAB_103d0dae4;
          }
          else if (uVar17 != 1) goto LAB_103d0dae4;
        }
        else if (uVar17 != uStack_180) goto LAB_103d0dae4;
        if (((dStack_1d0 != dStack_170) || (uStack_1c8 != uStack_168)) ||
           ((dStack_1c0 != dStack_160 || ((dStack_1b8 != dStack_158 || (dStack_1b0 != dStack_150))))
           )) goto LAB_103d0dae4;
        func_0x000103d1ccf8(&uStack_1f0,abStack_250);
        func_0x000103d1ccf8(&uStack_190,abStack_250);
        FUN_103d0c368(uVar23,uVar13);
        uVar13 = uStack_138;
        uVar17 = uStack_140;
        if ((uVar23 & 1) == 0) {
LAB_103d0dad4:
          func_0x000103d1cd2c(&uStack_190);
          func_0x000103d1cd2c(&uStack_1f0);
          goto LAB_103d0dae4;
        }
        uVar2 = (uint)(uStack_198 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        uVar3 = (uint)(uStack_138 >> 0x20);
        uVar16 = uVar3 >> 0x1e;
        iVar21 = (int)uStack_1a0;
        if (uStack_198 >> 0x3e == 3) {
          uVar18 = 0;
          if ((((uStack_1a0 != 0) || (uStack_198 != 0xc000000000000000)) || (uStack_138 >> 0x3e < 3)
              ) || ((uVar18 = 0, uStack_140 != 0 || (uStack_138 != 0xc000000000000000))))
          goto joined_r0x000103d0d98c;
LAB_103d0d904:
          func_0x000103d1cd2c(&uStack_190);
          func_0x000103d1cd2c(&uStack_1f0);
        }
        else {
          if (uVar2 >> 0x1e < 2) {
            if (uVar12 == 0) {
              uVar18 = uStack_198 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(uStack_1a0 >> 0x20);
              if (SBORROW4(iVar15,iVar21)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db2c);
                (*pcVar5)();
              }
              uVar18 = (ulong)(iVar15 - iVar21);
            }
joined_r0x000103d0d98c:
            if (uVar3 >> 0x1e < 2) goto LAB_103d0d848;
LAB_103d0d814:
            if (uVar16 != 2) {
              if (uVar18 != 0) goto LAB_103d0dad4;
              goto LAB_103d0d904;
            }
            uVar19 = *(long *)(uStack_140 + 0x18) - *(long *)(uStack_140 + 0x10);
            if (SBORROW8(*(long *)(uStack_140 + 0x18),*(long *)(uStack_140 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db24);
              (*pcVar5)();
            }
          }
          else {
            if (uVar12 == 2) {
              uVar18 = *(long *)(uStack_1a0 + 0x18) - *(long *)(uStack_1a0 + 0x10);
              if (SBORROW8(*(long *)(uStack_1a0 + 0x18),*(long *)(uStack_1a0 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db30);
                (*pcVar5)();
              }
              goto joined_r0x000103d0d98c;
            }
            uVar18 = 0;
            if (1 < uVar16) goto LAB_103d0d814;
LAB_103d0d848:
            if (uVar16 == 0) {
              uVar19 = uStack_138 >> 0x30 & 0xff;
            }
            else {
              iVar15 = (int)(uStack_140 >> 0x20);
              if (SBORROW4(iVar15,(int)uStack_140)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db28);
                (*pcVar5)();
              }
              uVar19 = (ulong)(iVar15 - (int)uStack_140);
            }
          }
          if (uVar18 != uVar19) goto LAB_103d0dad4;
          if ((long)uVar18 < 1) goto LAB_103d0d904;
          if (uVar12 < 2) {
            if (uVar12 == 0) {
              abStack_250[0] = (byte)uStack_1a0;
              abStack_250[1] = (byte)(uStack_1a0 >> 8);
              abStack_250[2] = (byte)(uStack_1a0 >> 0x10);
              abStack_250[3] = (byte)(uStack_1a0 >> 0x18);
              abStack_250[4] = (byte)(uStack_1a0 >> 0x20);
              abStack_250[5] = (byte)(uStack_1a0 >> 0x28);
              abStack_250[6] = (byte)(uStack_1a0 >> 0x30);
              abStack_250[7] = (byte)(uStack_1a0 >> 0x38);
              abStack_250[8] = (byte)uStack_198;
              abStack_250[9] = (byte)(uStack_198 >> 8);
              abStack_250[10] = (byte)(uStack_198 >> 0x10);
              abStack_250[0xb] = (byte)(uStack_198 >> 0x18);
              abStack_250[0xc] = (byte)(uStack_198 >> 0x20);
              abStack_250[0xd] = (byte)(uStack_198 >> 0x28);
              pbVar10 = abStack_250 + (uStack_198 >> 0x30 & 0xff);
              goto LAB_103d0da14;
            }
            lVar20 = (long)iVar21;
            uVar18 = ((long)uStack_1a0 >> 0x20) - lVar20;
            if ((long)uStack_1a0 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db34);
              (*pcVar5)();
            }
            func_0x000107c5ec30();
            if (uVar23 == 0) {
              func_0x000107c5ec38();
              lVar20 = 0;
LAB_103d0da48:
              lVar11 = 0;
            }
            else {
              uVar19 = uVar23;
              func_0x000107c5ec3c();
              if (SBORROW8(lVar20,uVar19)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db40);
                (*pcVar5)();
              }
              lVar20 = (lVar20 - uVar19) + uVar23;
              func_0x000107c5ec38();
              if (lVar20 == 0) goto LAB_103d0da48;
              if ((long)uVar18 <= (long)uVar19) {
                uVar19 = uVar18;
              }
              lVar11 = uVar19 + lVar20;
            }
            func_0x000100e25bdc(abStack_250,lVar20,lVar11,uVar17,uVar13);
            func_0x000103d1cd2c(&uStack_190);
            func_0x000103d1cd2c(&uStack_1f0);
            bVar4 = abStack_250[0];
          }
          else {
            if (uVar12 == 2) {
              lVar20 = *(long *)(uStack_1a0 + 0x10);
              lVar11 = *(long *)(uStack_1a0 + 0x18);
              func_0x000107c5ec30();
              uVar18 = uVar23;
              if (uVar23 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar20,uVar18)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db3c);
                  (*pcVar5)();
                }
                uVar23 = (lVar20 - uVar18) + uVar23;
              }
              uVar19 = lVar11 - lVar20;
              if (SBORROW8(lVar11,lVar20)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x103d0db38);
                (*pcVar5)();
              }
              func_0x000107c5ec38();
              if (uVar23 == 0) {
                lVar20 = 0;
              }
              else {
                if ((long)uVar19 <= (long)uVar18) {
                  uVar18 = uVar19;
                }
                lVar20 = uVar18 + uVar23;
              }
              func_0x000100e25bdc(abStack_250,uVar23,lVar20,uVar17,uVar13);
              func_0x000103d1cd2c(&uStack_190);
              func_0x000103d1cd2c(&uStack_1f0);
              if ((abStack_250[0] & 1) != 0) goto joined_r0x000103d0dac8;
              goto LAB_103d0dae4;
            }
            abStack_250[8] = 0;
            abStack_250[9] = 0;
            abStack_250[10] = 0;
            abStack_250[0xb] = 0;
            abStack_250[0xc] = 0;
            abStack_250[0xd] = 0;
            abStack_250[0] = 0;
            abStack_250[1] = 0;
            abStack_250[2] = 0;
            abStack_250[3] = 0;
            abStack_250[4] = 0;
            abStack_250[5] = 0;
            abStack_250[6] = 0;
            abStack_250[7] = 0;
            pbVar10 = abStack_250;
LAB_103d0da14:
            func_0x000100e25bdc(abStack_259,abStack_250,pbVar10,uStack_140,uStack_138);
            func_0x000103d1cd2c(&uStack_190);
            func_0x000103d1cd2c(&uStack_1f0);
            bVar4 = abStack_259[0];
          }
          if ((bVar4 & 1) == 0) goto LAB_103d0dae4;
        }
joined_r0x000103d0dac8:
        if (uVar14 == 0) break;
        puVar8 = puVar8 + 0xc;
        param_2 = param_2 + 0xc;
      } while( true );
    }
    uVar9 = 1;
  }
  else {
LAB_103d0dae4:
    uVar9 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_128) {
    func_0x000107c60e78(uVar9);
    return;
  }
  return;
}



/* Entry: 103d0db44; end: 103d0db5b;  */

void FUN_103d0db44(void)

{
  return;
}



/* Entry: 103d0db5c; end: 103d0dfdf;  */

uint FUN_103d0db5c(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long alStack_150 [4];
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  ulong uStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  ulong uStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  ulong uStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  ulong uStack_78;
  
  plVar4 = alStack_150;
  lVar6 = param_1[5];
  lVar7 = param_1[4];
  uVar11 = param_1[7];
  uVar9 = param_1[6];
  lVar8 = param_2[5];
  lVar5 = param_2[4];
  uVar12 = param_2[7];
  lVar10 = param_2[6];
  lStack_b0 = lVar5;
  lStack_a8 = lVar8;
  lStack_a0 = lVar10;
  uStack_98 = uVar12;
  lStack_90 = lVar7;
  lStack_88 = lVar6;
  uStack_80 = uVar9;
  uStack_78 = uVar11;
  if (uVar11 >> 0x3c < 0xf) {
    if (0xe < uVar12 >> 0x3c) goto LAB_103d0dc40;
    if (lVar7 == lVar5) {
      if ((int)lVar6 != (int)lVar8) {
        FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
        plVar4 = &lStack_b0;
LAB_103d0de8c:
        FUN_103d0f578(plVar4,&lStack_130,0x112db8dc0,&UNK_10d969810);
        lVar5 = lVar7;
        goto LAB_103d0dea0;
      }
      FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
      FUN_103d0f578(&lStack_b0,&lStack_130,0x112db8dc0,&UNK_10d969810);
      uVar3 = uVar9;
      func_0x000100e25fcc(uVar9,uVar11,lVar10,uVar12);
      func_0x0001015d38c8(lVar7,lVar8,lVar10,uVar12);
      if ((uVar3 & 1) != 0) goto LAB_103d0dbf4;
    }
    else {
      FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
      plVar4 = &lStack_b0;
LAB_103d0ddf0:
      FUN_103d0f578(plVar4,&lStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103d0dea0:
      func_0x0001015d38c8(lVar5,lVar8,lVar10,uVar12);
    }
LAB_103d0deb4:
    func_0x0001015d38c8(lVar7,lVar6,uVar9,uVar11);
  }
  else if (uVar12 >> 0x3c < 0xf) {
LAB_103d0dc40:
    lStack_130 = lVar7;
    lStack_128 = lVar6;
    uStack_120 = uVar9;
    uStack_118 = uVar11;
    lStack_110 = lVar5;
    lStack_108 = lVar8;
    lStack_100 = lVar10;
    uStack_f8 = uVar12;
    FUN_103d0f578(&lStack_90,&lStack_d0,0x112db8dc0,&UNK_10d969810);
    plVar2 = &lStack_b0;
    plVar4 = &lStack_d0;
LAB_103d0dc7c:
    FUN_103d0f578(plVar2,plVar4,0x112db8dc0,&UNK_10d969810);
    FUN_103d1ccb8(&lStack_130,0x112fca6d0,&UNK_10dc3ab60);
  }
  else {
    FUN_103d0f578(&lStack_90,&lStack_130,0x112db8dc0,&UNK_10d969810);
    FUN_103d0f578(&lStack_b0,&lStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103d0dbf4:
    func_0x0001015d38c8(lVar7,lVar6,uVar9,uVar11);
    lVar5 = *param_1;
    lVar6 = *param_2;
    if ((char)param_2[1] != '\x01') {
      if (lVar5 == lVar6) goto LAB_103d0dd30;
      goto LAB_103d0dec8;
    }
    if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_103d0dd30:
          lVar6 = param_1[9];
          lVar7 = param_1[8];
          uVar11 = param_1[0xb];
          uVar9 = param_1[10];
          lVar8 = param_2[9];
          lVar5 = param_2[8];
          uVar12 = param_2[0xb];
          lVar10 = param_2[10];
          lStack_f0 = lVar5;
          lStack_e8 = lVar8;
          lStack_e0 = lVar10;
          uStack_d8 = uVar12;
          lStack_d0 = lVar7;
          lStack_c8 = lVar6;
          uStack_c0 = uVar9;
          uStack_b8 = uVar11;
          if (uVar11 >> 0x3c < 0xf) {
            if (0xe < uVar12 >> 0x3c) goto LAB_103d0de24;
            if (lVar7 != lVar5) {
              FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
              plVar4 = &lStack_f0;
              goto LAB_103d0ddf0;
            }
            if ((int)lVar6 != (int)lVar8) {
              FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
              plVar4 = &lStack_f0;
              goto LAB_103d0de8c;
            }
            FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&lStack_f0,&lStack_130,0x112db8dc0,&UNK_10d969810);
            uVar3 = uVar9;
            func_0x000100e25fcc(uVar9,uVar11,lVar10,uVar12);
            func_0x0001015d38c8(lVar7,lVar8,lVar10,uVar12);
            if ((uVar3 & 1) == 0) goto LAB_103d0deb4;
          }
          else {
            if (uVar12 >> 0x3c < 0xf) {
LAB_103d0de24:
              lStack_130 = lVar7;
              lStack_128 = lVar6;
              uStack_120 = uVar9;
              uStack_118 = uVar11;
              lStack_110 = lVar5;
              lStack_108 = lVar8;
              lStack_100 = lVar10;
              uStack_f8 = uVar12;
              FUN_103d0f578(&lStack_d0,alStack_150,0x112db8dc0,&UNK_10d969810);
              plVar2 = &lStack_f0;
              goto LAB_103d0dc7c;
            }
            FUN_103d0f578(&lStack_d0,&lStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&lStack_f0,&lStack_130,0x112db8dc0,&UNK_10d969810);
          }
          func_0x0001015d38c8(lVar7,lVar6,uVar9,uVar11);
          lVar5 = param_1[2];
          func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
          uVar1 = (uint)lVar5;
          goto LAB_103d0decc;
        }
      }
      else if (lVar5 == 1) goto LAB_103d0dd30;
    }
    else if (lVar6 == 2) {
      if (lVar5 == 2) goto LAB_103d0dd30;
    }
    else if (lVar5 == 3) goto LAB_103d0dd30;
  }
LAB_103d0dec8:
  uVar1 = 0;
LAB_103d0decc:
  return uVar1 & 1;
}



/* Entry: 103d0dfe0; end: 103d0e0f3;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_103d0dfe0(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c61434();
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103d0e0f4; end: 103d0e177;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0e0f4(int *param_1,int *param_2)

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
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  
  if (*param_1 == *param_2) {
    lVar19 = *(long *)(param_1 + 2);
    lVar22 = *(long *)(param_2 + 2);
    if ((char)param_2[4] == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 == 0) {
LAB_103d0e138:
            pbVar10 = *(byte **)(param_1 + 6);
            pbVar26 = *(byte **)(param_1 + 8);
            lVar19 = *(long *)(param_2 + 6);
            uVar16 = *(ulong *)(param_2 + 8);
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
              uVar4 = (uint)((ulong)pbVar26 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar16 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar13 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                    (uVar16 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
                goto joined_r0x000100e26170;
code_r0x000100e26128:
                pbVar9 = (byte *)0x1;
              }
              else if (uVar4 >> 0x1e < 2) {
                if (uVar18 == 0) {
                  uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
                }
                else {
                  iVar20 = (int)((ulong)pbVar10 >> 0x20);
                  if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                    (*pcVar6)();
                  }
                  uVar21 = (ulong)(iVar20 - iVar8);
                }
joined_r0x000100e26170:
                if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
                if (uVar23 == 0) {
                  uVar24 = uVar16 >> 0x30 & 0xff;
                  goto code_r0x000100e2608c;
                }
                iVar20 = (int)((ulong)lVar19 >> 0x20);
                if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                  (*pcVar6)();
                }
                if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
                pbVar9 = (byte *)0x0;
              }
              else {
                if (uVar18 == 2) {
                  uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
                  if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                    (*pcVar6)();
                  }
                  goto joined_r0x000100e26170;
                }
                uVar21 = 0;
                if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
                if (uVar23 == 2) {
                  uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
                  if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                    (*pcVar6)();
                  }
code_r0x000100e2608c:
                  if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
                  if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                      puVar7[-0x68] = (char)pbVar26;
                      puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                      puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                      puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                      puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                      puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                      pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                    unaff_x24 = pbVar26;
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
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar13 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                    }
                    unaff_x23 = unaff_x24 + -lVar22;
                    if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                      (*pcVar6)();
                    }
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    unaff_x25 = pbVar26;
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
                  unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar16;
                }
                else {
                  pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
              pbVar25 = *(byte **)(pbVar9 + 0x18);
              bVar27 = pbVar9[0x28];
              pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                                 (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
              pbVar14 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar13[0x28] == 0) {
                    lVar19 = *(long *)pbVar13;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
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
                  lVar19 = *(long *)pbVar13;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar14 = pbVar26;
                  if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar13[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                    if (lVar19 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar19);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(lVar19);
                    pbVar25 = pbVar10;
joined_r0x000100e266a4:
                    if (((ulong)pbVar25 & 1) == 0) {
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
              lVar22 = *(long *)(pbVar9 + 0x20);
              if (bVar27 < 5) {
                if (bVar27 != 3) {
                  if (pbVar13[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar15 = *(byte **)pbVar13;
                  pbVar17 = *(byte **)(pbVar13 + 8);
                  if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                     pbVar17 = *(byte **)(pbVar13 + 0x18),
                     pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))
                     ) {
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
                lVar19 = *(long *)(pbVar13 + 0x20);
                if (pbVar26 == (byte *)0x0) {
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
                  pbVar14 = pbVar26;
                  if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar13[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar13 + 0x20);
                  lVar19 = *(long *)(pbVar13 + 0x18);
                  bVar27 = pbVar13[8] | (byte)lVar19;
                  bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar13[0x10] | (byte)lVar22;
                  bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                            CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                      *(long *)pbVar13 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
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
                lVar22 = *(long *)(pbVar13 + 0x20);
                lVar19 = *(long *)(pbVar13 + 0x18);
                bVar27 = pbVar13[8] | (byte)lVar19;
                bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar13[0x10] | (byte)lVar22;
                bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                lVar19 = CONCAT17(bVar34 | auVar43[7],
                                  CONCAT16(bVar33 | auVar43[6],
                                           CONCAT15(bVar32 | auVar43[5],
                                                    CONCAT14(bVar31 | auVar43[4],
                                                             CONCAT13(bVar30 | auVar43[3],
                                                                      CONCAT12(bVar29 | auVar43[2],
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar13[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar13 + 8);
              uVar16 = *(ulong *)(pbVar13 + 0x10);
              lVar22 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar22,uVar11);
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
        }
        else if (lVar19 == 1) goto LAB_103d0e138;
      }
      else if (lVar22 == 2) {
        if (lVar19 == 2) goto LAB_103d0e138;
      }
      else if (lVar19 == 3) goto LAB_103d0e138;
    }
    else if (lVar19 == lVar22) goto LAB_103d0e138;
  }
  return (byte *)0x0;
}



/* Entry: 103d0e178; end: 103d0e25f;  */

/* WARNING: Possible PIC construction at 0x000103d0e200: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0e204) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0e178(int *param_1,int *param_2)

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
  byte *pbVar16;
  ulong uVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  
  if (*param_1 == *param_2) {
    lVar19 = *(long *)(param_1 + 2);
    lVar22 = *(long *)(param_2 + 2);
    if ((char)param_2[4] == '\x01') {
      if (lVar22 < 2) {
        if (lVar22 == 0) {
          if (lVar19 != 0) {
            return (byte *)0x0;
          }
        }
        else if (lVar19 != 1) {
          return (byte *)0x0;
        }
      }
      else if (lVar22 == 2) {
        if (lVar19 != 2) {
          return (byte *)0x0;
        }
      }
      else if (lVar19 != 3) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != lVar22) {
      return (byte *)0x0;
    }
    if (*(long *)(param_1 + 6) == *(long *)(param_2 + 6)) {
      pbVar12 = *(byte **)(param_1 + 8);
      pbVar15 = *(byte **)(param_1 + 10);
      pbVar16 = *(byte **)(param_2 + 8);
      pbVar13 = *(byte **)(param_2 + 10);
      if ((pbVar12 != pbVar16) || (pbVar15 != pbVar13)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)
          PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
        )(pbVar12,pbVar15,pbVar16,pbVar13,0);
        return pbVar12;
      }
      pbVar10 = *(byte **)(param_1 + 0xc);
      pbVar26 = *(byte **)(param_1 + 0xe);
      lVar19 = *(long *)(param_2 + 0xc);
      uVar17 = *(ulong *)(param_2 + 0xe);
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
        uVar4 = (uint)((ulong)pbVar26 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar17 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
              (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar17 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
          }
          else {
            iVar20 = (int)((ulong)pbVar10 >> 0x20);
            if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar6)();
            }
            uVar21 = (ulong)(iVar20 - iVar8);
          }
joined_r0x000100e26170:
          if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
          if (uVar23 == 0) {
            uVar24 = uVar17 >> 0x30 & 0xff;
            goto code_r0x000100e2608c;
          }
          iVar20 = (int)((ulong)lVar19 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
          pbVar9 = (byte *)0x0;
        }
        else {
          if (uVar18 == 2) {
            uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
            if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar6)();
            }
            goto joined_r0x000100e26170;
          }
          uVar21 = 0;
          if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
          if (uVar23 == 2) {
            uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
            if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar6)();
            }
code_r0x000100e2608c:
            if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
            if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                puVar7[-0x68] = (char)pbVar26;
                puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar26;
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
              lVar22 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar22;
              if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar26;
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
            unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar17);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar17;
          }
          else {
            pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
        pbVar25 = *(byte **)(pbVar9 + 0x18);
        bVar27 = pbVar9[0x28];
        pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar27 < 3) {
          if (bVar27 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar19 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar27 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar13 = *(byte **)(pbVar14 + 0x10);
            lVar19 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 == pbVar16) && (pbVar26 == pbVar13)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar13 = *(byte **)(pbVar14 + 8);
            lVar19 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar19 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar19);
                func_0x000107c61174();
                pbVar13 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar19);
                pbVar25 = pbVar13;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar19 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar22 = *(long *)(pbVar9 + 0x20);
        if (bVar27 < 5) {
          if (bVar27 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar13 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar13)) &&
               (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar13 = *(byte **)(pbVar14 + 0x18),
               pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
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
          pbVar13 = *(byte **)(pbVar14 + 0x10);
          lVar19 = *(long *)(pbVar14 + 0x20);
          if (pbVar26 == (byte *)0x0) {
            if (pbVar13 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar13 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 != pbVar16) || (pbVar26 != pbVar13)) goto code_r0x000107c605b8;
          }
          if (lVar22 != 0) {
            if (lVar19 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar27 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar22 == 0) && pbVar26 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar22 = *(long *)(pbVar14 + 0x20);
            lVar19 = *(long *)(pbVar14 + 0x18);
            bVar27 = pbVar14[8] | (byte)lVar19;
            bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar14[0x10] | (byte)lVar22;
            bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
              lVar22 == 0)) {
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
          lVar22 = *(long *)(pbVar14 + 0x20);
          lVar19 = *(long *)(pbVar14 + 0x18);
          bVar27 = pbVar14[8] | (byte)lVar19;
          bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
          bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
          bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
          bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
          bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
          bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
          bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
          bVar35 = pbVar14[0x10] | (byte)lVar22;
          bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
          bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
          bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
          bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
          bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
          bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
          bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
          lVar19 = CONCAT17(bVar34 | auVar43[7],
                            CONCAT16(bVar33 | auVar43[6],
                                     CONCAT15(bVar32 | auVar43[5],
                                              CONCAT14(bVar31 | auVar43[4],
                                                       CONCAT13(bVar30 | auVar43[3],
                                                                CONCAT12(bVar29 | auVar43[2],
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar14 + 8);
        uVar17 = *(ulong *)(pbVar14 + 0x10);
        lVar22 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar22,uVar11);
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
  }
  return (byte *)0x0;
}



/* Entry: 103d0e260; end: 103d0e657;  */

uint FUN_103d0e260(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined4 auStack_280 [2];
  ulong uStack_278;
  undefined1 uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
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
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  ulong uStack_58;
  ulong uStack_50;
  ulong uStack_48;
  
  puVar3 = (ulong *)0x0;
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_178 = param_1[5];
    uStack_180 = param_1[4];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_f8 = param_2[5];
    uStack_100 = param_2[4];
    uStack_e8 = param_2[7];
    uStack_f0 = param_2[6];
    uStack_d8 = param_2[9];
    uStack_e0 = param_2[8];
    uStack_c8 = param_2[0xb];
    uStack_d0 = param_2[10];
    uStack_1b8 = param_2[5];
    uStack_1c0 = param_2[4];
    uStack_1a8 = param_2[7];
    uStack_1b0 = param_2[6];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_198 = param_2[9];
    uStack_1a0 = param_2[8];
    uStack_188 = param_2[0xb];
    uStack_190 = param_2[10];
    uStack_140 = uStack_1c0;
    uStack_138 = uStack_1b8;
    uStack_130 = uStack_1b0;
    uStack_128 = uStack_1a8;
    uStack_120 = uStack_1a0;
    uStack_118 = uStack_198;
    uStack_110 = uStack_190;
    uStack_108 = uStack_188;
    if (((uStack_180 < 0xffffffff00000000) || (1 < uStack_170)) ||
       ((uStack_148 & 0x3000000000000000) != 0)) {
      if (((0xfffffffeffffffff < uStack_1c0) && (uStack_1b0 < 2)) &&
         ((uStack_188 & 0x3000000000000000) == 0)) goto LAB_103d0e438;
      uStack_238 = param_2[5];
      uStack_240 = param_2[4];
      uStack_228 = param_2[7];
      uStack_230 = param_2[6];
      uStack_218 = param_2[9];
      uStack_220 = param_2[8];
      uStack_208 = param_2[0xb];
      uStack_210 = param_2[10];
      if ((uStack_148 >> 0x3d & 1) == 0) {
        auStack_280[0] = (undefined4)uStack_180;
        uStack_270 = (undefined1)uStack_170;
        uStack_278 = uStack_178;
        uStack_268 = uStack_168;
        uStack_260 = uStack_160;
        if ((uStack_208 >> 0x3d & 1) != 0) {
LAB_103d0e578:
          FUN_103d0f578(&uStack_c0,&uStack_200,0x113002518,&UNK_10dc7adc0);
          FUN_103d0f578(&uStack_100,&uStack_200,0x113002518,&UNK_10dc7adc0);
          FUN_103d1ccb8(&uStack_240,0x113002518,&UNK_10dc7adc0);
          FUN_103d1ccb8(&uStack_180,0x113002518,&UNK_10dc7adc0);
          goto LAB_103d0e4a8;
        }
        uStack_80 = CONCAT44(uStack_80._4_4_,(int)uStack_240);
        uStack_70 = CONCAT71(uStack_70._1_7_,(char)uStack_230);
        uStack_78 = uStack_238;
        uStack_68 = uStack_228;
        uStack_60 = uStack_220;
        FUN_103d0f578(&uStack_c0,&uStack_200,0x113002518,&UNK_10dc7adc0);
        FUN_103d0f578(&uStack_100,&uStack_200,0x113002518,&UNK_10dc7adc0);
        FUN_103d0e0f4(auStack_280,&uStack_80);
      }
      else {
        uStack_48 = uStack_148 & 0xdfffffffffffffff;
        uStack_80 = uStack_180;
        uStack_78 = uStack_178;
        uStack_70 = uStack_170;
        uStack_68 = uStack_168;
        uStack_60 = uStack_160;
        uStack_58 = uStack_158;
        uStack_50 = uStack_150;
        if ((uStack_208 >> 0x3d & 1) == 0) goto LAB_103d0e578;
        uStack_1c8 = uStack_208 & 0xdfffffffffffffff;
        uStack_200 = uStack_240;
        uStack_1f8 = uStack_238;
        uStack_1f0 = uStack_230;
        uStack_1e8 = uStack_228;
        uStack_1e0 = uStack_220;
        uStack_1d8 = uStack_218;
        uStack_1d0 = uStack_210;
        FUN_103d0f578(&uStack_c0,auStack_280,0x113002518,&UNK_10dc7adc0);
        FUN_103d0f578(&uStack_100,auStack_280,0x113002518,&UNK_10dc7adc0);
        puVar3 = &uStack_80;
        FUN_103d0e178(puVar3,&uStack_200);
      }
      FUN_103d1ccb8(&uStack_240,0x113002518,&UNK_10dc7adc0);
      FUN_103d1ccb8(&uStack_180,0x113002518,&UNK_10dc7adc0);
      if (((ulong)puVar3 & 1) != 0) goto LAB_103d0e3ac;
    }
    else if (((uStack_1c0 < 0xffffffff00000000) || (1 < uStack_1b0)) ||
            ((uStack_188 & 0x3000000000000000) != 0)) {
LAB_103d0e438:
      uStack_200 = uStack_180;
      uStack_1f8 = uStack_178;
      uStack_1f0 = uStack_170;
      uStack_1e8 = uStack_168;
      uStack_1e0 = uStack_160;
      uStack_1d8 = uStack_158;
      uStack_1d0 = uStack_150;
      uStack_1c8 = uStack_148;
      FUN_103d0f578(&uStack_c0,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d0f578(&uStack_100,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d1ccb8(&uStack_200,0x113003610,&UNK_10dc7eb18);
    }
    else {
      uStack_1f8 = param_1[5];
      uStack_200 = param_1[4];
      uStack_1e8 = param_1[7];
      uStack_1f0 = param_1[6];
      uStack_1d8 = param_1[9];
      uStack_1e0 = param_1[8];
      uStack_1c8 = param_1[0xb];
      uStack_1d0 = param_1[10];
      FUN_103d0f578(&uStack_c0,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d0f578(&uStack_100,&uStack_80,0x113002518,&UNK_10dc7adc0);
      FUN_103d1ccb8(&uStack_200,0x113002518,&UNK_10dc7adc0);
LAB_103d0e3ac:
      uVar2 = param_1[0xc];
      if (((uVar2 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[0xe];
        if (((uVar2 == param_2[0xe]) && (param_1[0xf] == param_2[0xf])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[0x10];
          func_0x000100e25fcc(uVar2,param_1[0x11],param_2[0x10],param_2[0x11]);
          uVar1 = (uint)uVar2;
          goto LAB_103d0e4ac;
        }
      }
    }
  }
LAB_103d0e4a8:
  uVar1 = 0;
LAB_103d0e4ac:
  return uVar1 & 1;
}



/* Entry: 103d0e658; end: 103d0eb9b;  */

uint FUN_103d0e658(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_3d0 [96];
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
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
  ulong uStack_e0;
  ulong uStack_d8;
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar2 = param_1[2];
    FUN_103d0ceec(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar3 = param_1[3];
      uVar6 = param_2[3];
      uVar2 = param_2[4];
      func_0x000103d1d830(uVar3,(char)param_1[4]);
      func_0x000103d1d830(uVar6,(char)uVar2);
      if (uVar3 == uVar6) {
        uStack_108 = param_1[0x10];
        uStack_110 = param_1[0xf];
        uStack_f8 = param_1[0x12];
        uStack_100 = param_1[0x11];
        uStack_e8 = param_1[0x14];
        uStack_f0 = param_1[0x13];
        uStack_d8 = param_1[0x16];
        uStack_e0 = param_1[0x15];
        uStack_128 = param_1[0xc];
        uStack_130 = param_1[0xb];
        uStack_118 = param_1[0xe];
        uStack_120 = param_1[0xd];
        uStack_168 = param_2[0x10];
        uStack_170 = param_2[0xf];
        uStack_158 = param_2[0x12];
        uStack_160 = param_2[0x11];
        uStack_148 = param_2[0x14];
        uStack_150 = param_2[0x13];
        uStack_138 = param_2[0x16];
        uStack_140 = param_2[0x15];
        uStack_188 = param_2[0xc];
        uStack_190 = param_2[0xb];
        uStack_178 = param_2[0xe];
        uStack_180 = param_2[0xd];
        uStack_228 = param_1[0x10];
        uStack_230 = param_1[0xf];
        uStack_218 = param_1[0x12];
        uStack_220 = param_1[0x11];
        uStack_208 = param_1[0x14];
        uStack_210 = param_1[0x13];
        uStack_1f8 = param_1[0x16];
        uStack_200 = param_1[0x15];
        uStack_248 = param_1[0xc];
        uStack_250 = param_1[0xb];
        uStack_238 = param_1[0xe];
        uStack_240 = param_1[0xd];
        uStack_288 = param_2[0x10];
        uStack_290 = param_2[0xf];
        uStack_278 = param_2[0x12];
        uStack_280 = param_2[0x11];
        uStack_268 = param_2[0x14];
        uStack_270 = param_2[0x13];
        uStack_2a8 = param_2[0xc];
        uStack_2b0 = param_2[0xb];
        uStack_298 = param_2[0xe];
        uStack_2a0 = param_2[0xd];
        uStack_258 = param_2[0x16];
        uStack_260 = param_2[0x15];
        uStack_1f0 = uStack_2b0;
        uStack_1e8 = uStack_2a8;
        uStack_1e0 = uStack_2a0;
        uStack_1d8 = uStack_298;
        uStack_1d0 = uStack_290;
        uStack_1c8 = uStack_288;
        uStack_1c0 = uStack_280;
        uStack_1b8 = uStack_278;
        uStack_1b0 = uStack_270;
        uStack_1a8 = uStack_268;
        uStack_1a0 = uStack_260;
        uStack_198 = uStack_258;
        if (uStack_238 >> 0x3c < 0xf) {
          if (0xe < uStack_298 >> 0x3c) goto LAB_103d0e808;
          uStack_348 = param_2[0x10];
          uStack_350 = param_2[0xf];
          uStack_338 = param_2[0x12];
          uStack_340 = param_2[0x11];
          uStack_328 = param_2[0x14];
          uStack_330 = param_2[0x13];
          uStack_318 = param_2[0x16];
          uStack_320 = param_2[0x15];
          uStack_368 = param_2[0xc];
          uStack_370 = param_2[0xb];
          uStack_358 = param_2[0xe];
          uStack_360 = param_2[0xd];
          uStack_a8 = param_1[0x10];
          uStack_b0 = param_1[0xf];
          uStack_98 = param_1[0x12];
          uStack_a0 = param_1[0x11];
          uStack_88 = param_1[0x14];
          uStack_90 = param_1[0x13];
          uStack_78 = param_1[0x16];
          uStack_80 = param_1[0x15];
          uStack_c8 = param_1[0xc];
          uStack_d0 = param_1[0xb];
          uStack_b8 = param_1[0xe];
          uStack_c0 = param_1[0xd];
          uStack_310 = uStack_370;
          uStack_308 = uStack_368;
          uStack_300 = uStack_360;
          uStack_2f8 = uStack_358;
          uStack_2f0 = uStack_350;
          uStack_2e8 = uStack_348;
          uStack_2e0 = uStack_340;
          uStack_2d8 = uStack_338;
          uStack_2d0 = uStack_330;
          uStack_2c8 = uStack_328;
          uStack_2c0 = uStack_320;
          uStack_2b8 = uStack_318;
          FUN_103d0f578(&uStack_130,auStack_3d0,0x113000f38,&UNK_10dc76f20);
          FUN_103d0f578(&uStack_190,auStack_3d0,0x113000f38,&UNK_10dc76f20);
          puVar4 = &uStack_d0;
          FUN_103d0db5c(puVar4,&uStack_310);
          FUN_103d1ccb8(&uStack_370,0x113000f38,&UNK_10dc76f20);
          FUN_103d1ccb8(&uStack_250,0x113000f38,&UNK_10dc76f20);
          if (((ulong)puVar4 & 1) != 0) goto LAB_103d0e94c;
        }
        else if (uStack_298 >> 0x3c < 0xf) {
LAB_103d0e808:
          uStack_310 = uStack_250;
          uStack_308 = uStack_248;
          uStack_300 = uStack_240;
          uStack_2f8 = uStack_238;
          uStack_2f0 = uStack_230;
          uStack_2e8 = uStack_228;
          uStack_2e0 = uStack_220;
          uStack_2d8 = uStack_218;
          uStack_2d0 = uStack_210;
          uStack_2c8 = uStack_208;
          uStack_2c0 = uStack_200;
          uStack_2b8 = uStack_1f8;
          FUN_103d0f578(&uStack_130,&uStack_d0,0x113000f38,&UNK_10dc76f20);
          FUN_103d0f578(&uStack_190,&uStack_d0,0x113000f38,&UNK_10dc76f20);
          FUN_103d1ccb8(&uStack_310,0x113000f40,&UNK_10dc7ad80);
        }
        else {
          uStack_2e8 = param_1[0x10];
          uStack_2f0 = param_1[0xf];
          uStack_2d8 = param_1[0x12];
          uStack_2e0 = param_1[0x11];
          uStack_2c8 = param_1[0x14];
          uStack_2d0 = param_1[0x13];
          uStack_2b8 = param_1[0x16];
          uStack_2c0 = param_1[0x15];
          uStack_308 = param_1[0xc];
          uStack_310 = param_1[0xb];
          uStack_2f8 = param_1[0xe];
          uStack_300 = param_1[0xd];
          FUN_103d0f578(&uStack_130,&uStack_d0,0x113000f38,&UNK_10dc76f20);
          FUN_103d0f578(&uStack_190,&uStack_d0,0x113000f38,&UNK_10dc76f20);
          FUN_103d1ccb8(&uStack_310,0x113000f38,&UNK_10dc76f20);
LAB_103d0e94c:
          uVar2 = param_1[5];
          FUN_103cddff8(uVar2,param_2[5]);
          if ((uVar2 & 1) != 0) {
            uVar2 = (ulong)(param_1[6] != 0);
            if ((char)param_1[7] != '\x01') {
              uVar2 = param_1[6];
            }
            if ((char)param_2[7] == '\x01') {
              if (param_2[6] == 0) {
                if (uVar2 == 0) goto LAB_103d0e9a4;
              }
              else if (uVar2 == 1) {
LAB_103d0e9a4:
                uVar8 = param_1[0x18];
                uVar7 = param_1[0x17];
                uVar10 = param_1[0x1a];
                uVar9 = param_1[0x19];
                uVar3 = param_2[0x18];
                uVar2 = param_2[0x17];
                uVar11 = param_2[0x1a];
                uVar6 = param_2[0x19];
                uStack_370 = uVar2;
                uStack_368 = uVar3;
                uStack_360 = uVar6;
                uStack_358 = uVar11;
                uStack_250 = uVar7;
                uStack_248 = uVar8;
                uStack_240 = uVar9;
                uStack_238 = uVar10;
                if (uVar7 == 0) {
                  if (uVar2 != 0) goto LAB_103d0ea7c;
                  FUN_103d0f578(&uStack_250,auStack_3d0,0x1130024d8,&UNK_10dc7ad88);
                  FUN_103d0f578(&uStack_370,auStack_3d0,0x1130024d8,&UNK_10dc7ad88);
                  func_0x000103d0e014(0,uVar8,uVar9,uVar10);
LAB_103d0eb7c:
                  uVar2 = param_1[8];
                  func_0x000101058cd4(uVar2,param_2[8]);
                  if ((uVar2 & 1) != 0) {
                    uVar2 = param_1[9];
                    func_0x000100e25fcc(uVar2,param_1[10],param_2[9],param_2[10]);
                    uVar1 = (uint)uVar2;
                    goto LAB_103d0eb04;
                  }
                }
                else {
                  if (uVar2 == 0) {
LAB_103d0ea7c:
                    FUN_103d0f578(&uStack_250,auStack_3d0,0x1130024d8,&UNK_10dc7ad88);
                    FUN_103d0f578(&uStack_370,auStack_3d0,0x1130024d8,&UNK_10dc7ad88);
                    func_0x000103d0e014(uVar7,uVar8,uVar9,uVar10);
                  }
                  else {
                    FUN_103d0f578(&uStack_250,auStack_3d0,0x1130024d8,&UNK_10dc7ad88);
                    FUN_103d0f578(&uStack_370,auStack_3d0,0x1130024d8,&UNK_10dc7ad88);
                    uVar5 = uVar7;
                    FUN_103d0d0a8(uVar7,uVar2);
                    if (((uVar5 & 1) != 0) && ((((uint)uVar3 ^ (uint)uVar8) & 1) == 0)) {
                      uVar5 = uVar9;
                      func_0x000100e25fcc(uVar9,uVar10,uVar6,uVar11);
                      func_0x000103d0e014(uVar2,uVar3,uVar6,uVar11);
                      func_0x000103d0e014(uVar7,uVar8,uVar9,uVar10);
                      if ((uVar5 & 1) != 0) goto LAB_103d0eb7c;
                      goto LAB_103d0eb00;
                    }
                    func_0x000103d0e014(uVar2,uVar3,uVar6,uVar11);
                    uVar2 = uVar7;
                    uVar3 = uVar8;
                    uVar6 = uVar9;
                    uVar11 = uVar10;
                  }
                  func_0x000103d0e014(uVar2,uVar3,uVar6,uVar11);
                }
              }
            }
            else if (uVar2 == param_2[6]) goto LAB_103d0e9a4;
          }
        }
      }
    }
  }
LAB_103d0eb00:
  uVar1 = 0;
LAB_103d0eb04:
  return uVar1 & 1;
}



/* Entry: 103d0eb9c; end: 103d0ec53;  */

void FUN_103d0eb9c(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
    func_0x00010006c00c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_retain_11034f4d0)(param_3);
    return;
  }
  return;
}



/* Entry: 103d0ec54; end: 103d0f2ff;  */

ulong FUN_103d0ec54(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong auStack_150 [4];
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
  ulong uStack_e0;
  ulong uStack_d8;
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
  
  puVar5 = auStack_150;
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      if ((char)param_2[7] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d0ed0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)(byte)(&UNK_10dc7acb4)[param_2[6]] * 4 + 0x103d0ed10))();
        return uVar2;
      }
      if (param_1[6] == param_2[6]) {
        uVar8 = param_1[0x14];
        uVar7 = param_1[0x13];
        uVar3 = param_1[0x16];
        uVar6 = param_1[0x15];
        uVar9 = param_2[0x14];
        uVar2 = param_2[0x13];
        uVar11 = param_2[0x16];
        uVar10 = param_2[0x15];
        uStack_b0 = uVar2;
        uStack_a8 = uVar9;
        uStack_a0 = uVar10;
        uStack_98 = uVar11;
        uStack_90 = uVar7;
        uStack_88 = uVar8;
        uStack_80 = uVar6;
        uStack_78 = uVar3;
        if (uVar3 >> 0x3c < 0xf) {
          if (0xe < uVar11 >> 0x3c) goto LAB_103d0eef8;
          if (uVar7 == uVar2) {
            if ((int)uVar8 != (int)uVar9) {
              FUN_103d0f578(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
              puVar5 = &uStack_b0;
LAB_103d0f0c0:
              FUN_103d0f578(puVar5,&uStack_130,0x112db8dc0,&UNK_10d969810);
              uVar2 = uVar7;
              goto LAB_103d0f0d4;
            }
            FUN_103d0f578(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&uStack_b0,&uStack_130,0x112db8dc0,&UNK_10d969810);
            uVar2 = uVar6;
            func_0x000100e25fcc(uVar6,uVar3,uVar10,uVar11);
            func_0x0001015d38c8(uVar7,uVar9,uVar10,uVar11);
            if ((uVar2 & 1) != 0) goto LAB_103d0ed98;
          }
          else {
            FUN_103d0f578(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
            puVar5 = &uStack_b0;
LAB_103d0f000:
            FUN_103d0f578(puVar5,&uStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103d0f0d4:
            func_0x0001015d38c8(uVar2,uVar9,uVar10,uVar11);
          }
LAB_103d0f0e8:
          func_0x0001015d38c8(uVar7,uVar8,uVar6,uVar3);
        }
        else if (uVar11 >> 0x3c < 0xf) {
LAB_103d0eef8:
          uStack_130 = uVar7;
          uStack_128 = uVar8;
          uStack_120 = uVar6;
          uStack_118 = uVar3;
          uStack_110 = uVar2;
          uStack_108 = uVar9;
          uStack_100 = uVar10;
          uStack_f8 = uVar11;
          FUN_103d0f578(&uStack_90,&uStack_d0,0x112db8dc0,&UNK_10d969810);
          puVar4 = &uStack_b0;
          puVar5 = &uStack_d0;
LAB_103d0ef34:
          FUN_103d0f578(puVar4,puVar5,0x112db8dc0,&UNK_10d969810);
          FUN_103d1ccb8(&uStack_130,0x112fca6d0,&UNK_10dc3ab60);
        }
        else {
          FUN_103d0f578(&uStack_90,&uStack_130,0x112db8dc0,&UNK_10d969810);
          FUN_103d0f578(&uStack_b0,&uStack_130,0x112db8dc0,&UNK_10d969810);
LAB_103d0ed98:
          func_0x0001015d38c8(uVar7,uVar8,uVar6,uVar3);
          uVar3 = param_1[8];
          uVar6 = param_2[8];
          uVar2 = param_2[9];
          func_0x000103d1d830(uVar3,(char)param_1[9]);
          func_0x000103d1d830(uVar6,(char)uVar2);
          if (((uVar3 != uVar6) || (param_1[10] != param_2[10])) || (param_1[0xb] != param_2[0xb]))
          goto LAB_103d0f0fc;
          uVar8 = param_1[0x18];
          uVar7 = param_1[0x17];
          uVar3 = param_1[0x1a];
          uVar6 = param_1[0x19];
          uVar9 = param_2[0x18];
          uVar2 = param_2[0x17];
          uVar11 = param_2[0x1a];
          uVar10 = param_2[0x19];
          uStack_f0 = uVar2;
          uStack_e8 = uVar9;
          uStack_e0 = uVar10;
          uStack_d8 = uVar11;
          uStack_d0 = uVar7;
          uStack_c8 = uVar8;
          uStack_c0 = uVar6;
          uStack_b8 = uVar3;
          if (uVar3 >> 0x3c < 0xf) {
            if (0xe < uVar11 >> 0x3c) goto LAB_103d0f12c;
            if (uVar7 != uVar2) {
              FUN_103d0f578(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
              puVar5 = &uStack_f0;
              goto LAB_103d0f000;
            }
            if ((int)uVar8 != (int)uVar9) {
              FUN_103d0f578(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
              puVar5 = &uStack_f0;
              goto LAB_103d0f0c0;
            }
            FUN_103d0f578(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&uStack_f0,&uStack_130,0x112db8dc0,&UNK_10d969810);
            uVar2 = uVar6;
            func_0x000100e25fcc(uVar6,uVar3,uVar10,uVar11);
            func_0x0001015d38c8(uVar7,uVar9,uVar10,uVar11);
            if ((uVar2 & 1) == 0) goto LAB_103d0f0e8;
          }
          else {
            if (uVar11 >> 0x3c < 0xf) {
LAB_103d0f12c:
              uStack_130 = uVar7;
              uStack_128 = uVar8;
              uStack_120 = uVar6;
              uStack_118 = uVar3;
              uStack_110 = uVar2;
              uStack_108 = uVar9;
              uStack_100 = uVar10;
              uStack_f8 = uVar11;
              FUN_103d0f578(&uStack_d0,auStack_150,0x112db8dc0,&UNK_10d969810);
              puVar4 = &uStack_f0;
              goto LAB_103d0ef34;
            }
            FUN_103d0f578(&uStack_d0,&uStack_130,0x112db8dc0,&UNK_10d969810);
            FUN_103d0f578(&uStack_f0,&uStack_130,0x112db8dc0,&UNK_10d969810);
          }
          func_0x0001015d38c8(uVar7,uVar8,uVar6,uVar3);
          uVar2 = param_1[0xc];
          if (((uVar2 == param_2[0xc]) && (param_1[0xd] == param_2[0xd])) ||
             (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
            uVar2 = param_1[0xe];
            FUN_103cddff8(uVar2,param_2[0xe]);
            if ((uVar2 & 1) != 0) {
              if ((char)param_2[0x10] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d0eee0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)((ulong)*(ushort *)(&UNK_10dc7acc0 + param_2[0xf] * 2) * 4 + 0x103d0eee4))
                          ();
                return uVar2;
              }
              if (param_1[0xf] == param_2[0xf]) {
                uVar2 = param_1[0x11];
                func_0x000100e25fcc(uVar2,param_1[0x12],param_2[0x11],param_2[0x12]);
                uVar1 = (uint)uVar2;
                goto LAB_103d0f100;
              }
            }
          }
        }
      }
    }
  }
LAB_103d0f0fc:
  uVar1 = 0;
LAB_103d0f100:
  return (ulong)(uVar1 & 1);
}



/* Entry: 103d0f300; end: 103d0f31f;  */

void FUN_103d0f300(void)

{
  func_0x000107c61168(&PTR_PTR_113002f70);
  return;
}



/* Entry: 103d0f320; end: 103d0f387;  */

undefined8 FUN_103d0f320(undefined8 param_1,undefined8 param_2)

{
  FUN_103d19e3c(param_2,param_1,&UNK_1106fff18);
  return param_2;
}



/* Entry: 103d0f388; end: 103d0f503;  */

undefined8 FUN_103d0f388(undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  
  lVar1 = param_1[1];
  uVar3 = param_1[3];
  uVar5 = param_1[4];
  uVar7 = param_1[7];
  if ((uVar7 >> 0x3d & 1) == 0) {
    if ((*(byte *)((long)param_2 + 0x3f) >> 5 & 1) != 0) {
      return 0;
    }
    if ((int)*param_1 != *param_2) {
      return 0;
    }
    lVar6 = *(long *)(param_2 + 2);
    if ((char)param_2[4] == '\x01') {
      if (lVar6 < 2) {
        if (lVar6 == 0) {
          if (lVar1 != 0) {
            return 0;
          }
        }
        else if (lVar1 != 1) {
          return 0;
        }
      }
      else if (lVar6 == 2) {
        if (lVar1 != 2) {
          return 0;
        }
      }
      else if (lVar1 != 3) {
        return 0;
      }
    }
    else if (lVar1 != lVar6) {
      return 0;
    }
    func_0x000100e25fcc(uVar3,uVar5,*(undefined8 *)(param_2 + 6),*(undefined8 *)(param_2 + 8));
  }
  else {
    uVar8 = *(ulong *)(param_2 + 0xe);
    if ((uVar8 >> 0x3d & 1) == 0) {
      return 0;
    }
    if ((int)*param_1 != *param_2) {
      return 0;
    }
    uVar4 = param_1[6];
    lVar6 = *(long *)(param_2 + 2);
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    if ((char)param_2[4] == '\x01') {
      if (lVar6 < 2) {
        if (lVar6 == 0) {
          if (lVar1 != 0) {
            return 0;
          }
        }
        else if (lVar1 != 1) {
          return 0;
        }
      }
      else if (lVar6 == 2) {
        if (lVar1 != 2) {
          return 0;
        }
      }
      else if (lVar1 != 3) {
        return 0;
      }
    }
    else if (lVar1 != lVar6) {
      return 0;
    }
    if (uVar3 != *(ulong *)(param_2 + 6)) {
      return 0;
    }
    if (((uVar5 != *(ulong *)(param_2 + 8)) || (param_1[5] != *(long *)(param_2 + 10))) &&
       (func_0x000107c605b8(uVar5,param_1[5],*(ulong *)(param_2 + 8),*(long *)(param_2 + 10),0),
       (uVar5 & 1) == 0)) {
      return 0;
    }
    func_0x000100e25fcc(uVar4,uVar7 & 0xdfffffffffffffff,uVar2,uVar8 & 0xdfffffffffffffff);
    uVar3 = uVar4;
  }
  if ((uVar3 & 1) == 0) {
    return 0;
  }
  return 1;
}



/* Entry: 103d0f504; end: 103d0f523;  */

void FUN_103d0f504(void)

{
  func_0x000107c61168(&PTR_PTR_113003170);
  return;
}



/* Entry: 103d0f524; end: 103d0f52f;  */

void FUN_103d0f524(void)

{
  return;
}



/* Entry: 103d0f530; end: 103d0f577;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d0f530(long param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_1 == 0) {
    return;
  }
  func_0x000107c6142c();
  func_0x000107c6142c(param_3);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_4);
  return;
}



/* Entry: 103d0f578; end: 103d0f5bf;  */

undefined8 FUN_103d0f578(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103d0f5c0; end: 103d0f63f;  */

void FUN_103d0f5c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002748 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7b7e8;
  func_0x000107c61520(&UNK_10dc7b7e8,&UNK_1106fefb8);
  puRam0000000113002748 = puVar1;
  return;
}



/* Entry: 103d0f640; end: 103d0f873;  */

/* WARNING: Possible PIC construction at 0x000103d0f670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0f6c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0f70c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0f710) */
/* WARNING: Removing unreachable block (ram,0x000103d0f6c8) */
/* WARNING: Removing unreachable block (ram,0x000103d0f674) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0f640(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar16,pbVar17,pbVar13,0);
    return pbVar12;
  }
  uVar14 = param_1[2];
  if (((uVar14 == param_2[2] && param_1[3] == param_2[3]) ||
      (func_0x000107c605b8(), (uVar14 & 1) != 0)) && ((double)param_1[4] == (double)param_2[4])) {
    pbVar12 = (byte *)param_1[5];
    pbVar16 = (byte *)param_1[6];
    pbVar17 = (byte *)param_2[5];
    pbVar13 = (byte *)param_2[6];
    if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) goto code_r0x000107c605b8;
    uVar14 = param_1[7];
    if (((uVar14 == param_2[7]) && (param_1[8] == param_2[8])) ||
       (func_0x000107c605b8(), (uVar14 & 1) != 0)) {
      pbVar12 = (byte *)param_1[9];
      pbVar16 = (byte *)param_1[10];
      pbVar17 = (byte *)param_2[9];
      pbVar13 = (byte *)param_2[10];
      if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) goto code_r0x000107c605b8;
      if (((double)param_1[0xb] == (double)param_2[0xb]) &&
         ((double)param_1[0xc] == (double)param_2[0xc])) {
        pbVar10 = (byte *)param_1[0xd];
        pbVar25 = (byte *)param_1[0xe];
        lVar24 = param_2[0xd];
        uVar14 = param_2[0xe];
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
              uVar22 = uVar14 >> 0x30 & 0xff;
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
                  pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar15 = (byte *)0x0;
              }
              else {
                if (uVar18 != 2) {
                  *(undefined8 *)(puVar7 + -0x6a) = 0;
                  *(undefined8 *)(puVar7 + -0x70) = 0;
                  pbVar15 = puVar7 + -0x70;
                  goto code_r0x000100e26260;
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
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar14;
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
          pbVar16 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar15[0x28] == 0) {
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                return (byte *)(ulong)((uint)pbVar12 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar27 == 1) {
              if (pbVar15[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar13 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)pbVar15;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar24,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 == pbVar17) && (pbVar25 == pbVar13)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar15[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar13 = *(byte **)(pbVar15 + 8);
              lVar24 = *(long *)(pbVar15 + 0x18);
              if ((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) {
                if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar23 != (byte *)0x0) {
                  if (lVar24 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar24);
                  func_0x000107c61174();
                  pbVar13 = pbVar23;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar23);
                  func_0x000107c61170(lVar24);
                  pbVar23 = pbVar13;
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
              if (pbVar15[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar13 = *(byte **)(pbVar15 + 8);
              if (((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) &&
                 (pbVar12 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                 pbVar13 = *(byte **)(pbVar15 + 0x18),
                 pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar15[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar15 != ((uint)pbVar12 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar15 + 0x10);
            lVar24 = *(long *)(pbVar15 + 0x20);
            if (pbVar25 == (byte *)0x0) {
              if (pbVar13 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar12 = pbVar10;
              pbVar16 = pbVar25;
              if ((pbVar10 != pbVar17) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
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
            if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
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
            if ((pbVar12 == (byte *)0x1) &&
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d0f874; end: 103d0f933;  */

void FUN_103d0f874(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002760 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7b8c0;
  func_0x000107c61520(&UNK_10dc7b8c0,&UNK_1106ff058);
  puRam0000000113002760 = puVar1;
  return;
}



/* Entry: 103d0f934; end: 103d0f9e7;  */

/* WARNING: Possible PIC construction at 0x000103d0f964: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0f968) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0f934(undefined8 *param_1,undefined8 *param_2)

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
  long lVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar26;
  ulong unaff_x22;
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
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) != '\x01') {
    if (lVar19 != lVar22) {
      return (byte *)0x0;
    }
    goto LAB_103d0f9a8;
  }
  if (lVar22 < 2) {
    if (lVar22 == 0) {
      if (lVar19 == 0) {
LAB_103d0f9a8:
        pbVar10 = (byte *)param_1[4];
        pbVar26 = (byte *)param_1[5];
        lVar19 = param_2[4];
        uVar16 = param_2[5];
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
          uVar4 = (uint)((ulong)pbVar26 >> 0x20);
          uVar18 = uVar4 >> 0x1e;
          uVar5 = (uint)(uVar16 >> 0x20);
          uVar23 = uVar5 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar9 = (byte *)0x1;
          }
          else if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar6)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar9 = (byte *)0x0;
          }
          else {
            if (uVar18 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar6)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
code_r0x000100e2608c:
              if (uVar21 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar21 < 1) goto code_r0x000100e26128;
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
                  puVar7[-0x68] = (char)pbVar26;
                  puVar7[-0x67] = (char)((ulong)pbVar26 >> 8);
                  puVar7[-0x66] = (char)((ulong)pbVar26 >> 0x10);
                  puVar7[-0x65] = (char)((ulong)pbVar26 >> 0x18);
                  puVar7[-100] = (char)((ulong)pbVar26 >> 0x20);
                  puVar7[-99] = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                unaff_x24 = pbVar26;
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
                lVar22 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar22,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar6)();
                  }
                  pbVar10 = pbVar10 + (lVar22 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar22;
                if (SBORROW8((long)unaff_x24,lVar22)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar6)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar10;
                unaff_x25 = pbVar26;
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
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
          pbVar25 = *(byte **)(pbVar9 + 0x18);
          bVar27 = pbVar9[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
          pbVar14 = pbVar10;
          if (bVar27 < 3) {
            if (bVar27 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar19 = *(long *)pbVar13;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar19,uVar11);
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
              lVar19 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar19,uVar11);
              if (((ulong)pbVar12 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar12 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar17)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              lVar19 = *(long *)(pbVar13 + 0x18);
              if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
                if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar19);
                  pbVar25 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar22 = *(long *)(pbVar9 + 0x20);
          if (bVar27 < 5) {
            if (bVar27 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar17 = *(byte **)(pbVar13 + 8);
              if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
                 (pbVar12 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar17 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
            lVar19 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
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
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
            }
            if (lVar22 != 0) {
              if (lVar19 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar22 == lVar19)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar13 + 0x18),lVar19,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar27 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
                lVar22 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar22 = *(long *)(pbVar13 + 0x20);
              lVar19 = *(long *)(pbVar13 + 0x18);
              bVar27 = pbVar13[8] | (byte)lVar19;
              bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
              bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
              bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
              bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
              bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
              bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
              bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
              bVar35 = pbVar13[0x10] | (byte)lVar22;
              bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar12 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar22 == 0)) {
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
            lVar22 = *(long *)(pbVar13 + 0x20);
            lVar19 = *(long *)(pbVar13 + 0x18);
            bVar27 = pbVar13[8] | (byte)lVar19;
            bVar28 = pbVar13[9] | (byte)((ulong)lVar19 >> 8);
            bVar29 = pbVar13[10] | (byte)((ulong)lVar19 >> 0x10);
            bVar30 = pbVar13[0xb] | (byte)((ulong)lVar19 >> 0x18);
            bVar31 = pbVar13[0xc] | (byte)((ulong)lVar19 >> 0x20);
            bVar32 = pbVar13[0xd] | (byte)((ulong)lVar19 >> 0x28);
            bVar33 = pbVar13[0xe] | (byte)((ulong)lVar19 >> 0x30);
            bVar34 = pbVar13[0xf] | (byte)((ulong)lVar19 >> 0x38);
            bVar35 = pbVar13[0x10] | (byte)lVar22;
            bVar36 = pbVar13[0x11] | (byte)((ulong)lVar22 >> 8);
            bVar37 = pbVar13[0x12] | (byte)((ulong)lVar22 >> 0x10);
            bVar38 = pbVar13[0x13] | (byte)((ulong)lVar22 >> 0x18);
            bVar39 = pbVar13[0x14] | (byte)((ulong)lVar22 >> 0x20);
            bVar40 = pbVar13[0x15] | (byte)((ulong)lVar22 >> 0x28);
            bVar41 = pbVar13[0x16] | (byte)((ulong)lVar22 >> 0x30);
            bVar42 = pbVar13[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
            lVar19 = CONCAT17(bVar34 | auVar43[7],
                              CONCAT16(bVar33 | auVar43[6],
                                       CONCAT15(bVar32 | auVar43[5],
                                                CONCAT14(bVar31 | auVar43[4],
                                                         CONCAT13(bVar30 | auVar43[3],
                                                                  CONCAT12(bVar29 | auVar43[2],
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar22,uVar11);
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
    }
    else if (lVar19 == 1) goto LAB_103d0f9a8;
  }
  else if (lVar22 == 2) {
    if (lVar19 == 2) goto LAB_103d0f9a8;
  }
  else if (lVar19 == 3) goto LAB_103d0f9a8;
  return (byte *)0x0;
}



/* Entry: 103d0f9e8; end: 103d0fcab;  */

uint FUN_103d0f9e8(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_e8 [40];
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar7 = param_1[9];
      uVar6 = param_1[8];
      uVar11 = param_1[0xb];
      uVar9 = param_1[10];
      uVar4 = param_1[0xc];
      uVar8 = param_2[9];
      uVar2 = param_2[8];
      uVar12 = param_2[0xb];
      uVar10 = param_2[10];
      uVar5 = param_2[0xc];
      uStack_c0 = uVar2;
      uStack_b8 = uVar8;
      uStack_b0 = uVar10;
      uStack_a8 = uVar12;
      uStack_a0 = uVar5;
      uStack_90 = uVar6;
      uStack_88 = uVar7;
      uStack_80 = uVar9;
      uStack_78 = uVar11;
      uStack_70 = uVar4;
      if (uVar6 == 0) {
        if (uVar2 == 0) {
          FUN_103d0f578(&uStack_90,auStack_e8,0x113002700,&UNK_10dc7add8);
          FUN_103d0f578(&uStack_c0,auStack_e8,0x113002700,&UNK_10dc7add8);
          FUN_103d0f530(0,uVar7,uVar9,uVar11,uVar4);
LAB_103d0fc9c:
          uVar2 = param_1[6];
          func_0x000100e25fcc(uVar2,param_1[7],param_2[6],param_2[7]);
          uVar1 = (uint)uVar2;
          goto LAB_103d0fc28;
        }
LAB_103d0fb90:
        FUN_103d0f578(&uStack_90,auStack_e8,0x113002700,&UNK_10dc7add8);
        FUN_103d0f578(&uStack_c0,auStack_e8,0x113002700,&UNK_10dc7add8);
        FUN_103d0f530(uVar6,uVar7,uVar9,uVar11,uVar4);
      }
      else {
        if (uVar2 == 0) goto LAB_103d0fb90;
        FUN_103d0f578(&uStack_90,auStack_e8,0x113002700,&UNK_10dc7add8);
        FUN_103d0f578(&uStack_c0,auStack_e8,0x113002700,&UNK_10dc7add8);
        uVar3 = uVar6;
        func_0x000103d0d634(uVar6,uVar2);
        if (((uVar3 & 1) != 0) &&
           (((uVar7 == uVar8 && (uVar9 == uVar10)) ||
            (uVar3 = uVar7, func_0x000107c605b8(uVar7,uVar9,uVar8,uVar10,0), (uVar3 & 1) != 0)))) {
          uVar3 = uVar11;
          func_0x000100e25fcc(uVar11,uVar4,uVar12,uVar5);
          FUN_103d0f530(uVar2,uVar8,uVar10,uVar12,uVar5);
          FUN_103d0f530(uVar6,uVar7,uVar9,uVar11,uVar4);
          if ((uVar3 & 1) != 0) goto LAB_103d0fc9c;
          goto LAB_103d0fc24;
        }
        FUN_103d0f530(uVar2,uVar8,uVar10,uVar12,uVar5);
        uVar2 = uVar6;
        uVar8 = uVar7;
        uVar10 = uVar9;
        uVar12 = uVar11;
        uVar5 = uVar4;
      }
      FUN_103d0f530(uVar2,uVar8,uVar10,uVar12,uVar5);
    }
  }
LAB_103d0fc24:
  uVar1 = 0;
LAB_103d0fc28:
  return uVar1 & 1;
}



/* Entry: 103d0fcac; end: 103d0fd4b;  */

/* WARNING: Possible PIC construction at 0x000103d0fcdc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d0fd20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d0fd24) */
/* WARNING: Removing unreachable block (ram,0x000103d0fce0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d0fcac(undefined8 *param_1,undefined8 *param_2)

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
      pbVar10 = (byte *)param_1[6];
      pbVar25 = (byte *)param_1[7];
      lVar24 = param_2[6];
      uVar14 = param_2[7];
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
              (uVar14 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
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
            uVar22 = uVar14 >> 0x30 & 0xff;
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
                pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                  goto code_r0x000100e262a4;
                }
              }
              pbVar15 = (byte *)0x0;
            }
            else {
              if (uVar18 != 2) {
                *(undefined8 *)(puVar7 + -0x6a) = 0;
                *(undefined8 *)(puVar7 + -0x70) = 0;
                pbVar15 = puVar7 + -0x70;
                goto code_r0x000100e26260;
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
code_r0x000100e262a4:
            unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar14;
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
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                                                                      CONCAT11(bVar28 | auVar43[1],
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar15 == 0) {
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar15[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar15 + 8);
        uVar14 = *(ulong *)(pbVar15 + 0x10);
        lVar26 = *(long *)pbVar15;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar16,pbVar17,pbVar12,0);
  return pbVar13;
}



/* Entry: 103d0fd4c; end: 103d1022b;  */

ulong FUN_103d0fd4c(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 auStack_8e8 [216];
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
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
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  uVar4 = *param_1;
  if ((uVar4 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar4 & 1) != 0))
  {
    if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d0fdbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)*(ushort *)(&UNK_10dc7acde + param_2[2] * 2) * 4 + 0x103d0fdc0))();
      return uVar4;
    }
    if (param_1[2] == param_2[2]) {
      uStack_3f8 = param_1[0x1b];
      uStack_400 = param_1[0x1a];
      uStack_158 = param_1[0x1d];
      uStack_160 = param_1[0x1c];
      uStack_408 = param_1[0x19];
      uStack_410 = param_1[0x18];
      uStack_168 = param_1[0x1b];
      uStack_170 = param_1[0x1a];
      uStack_3e8 = param_1[0x1d];
      uStack_3f0 = param_1[0x1c];
      uStack_148 = param_1[0x1f];
      uStack_150 = param_1[0x1e];
      uStack_438 = param_1[0x13];
      uStack_440 = param_1[0x12];
      uStack_198 = param_1[0x15];
      uStack_1a0 = param_1[0x14];
      uStack_448 = param_1[0x11];
      uStack_450 = param_1[0x10];
      uStack_1a8 = param_1[0x13];
      uStack_1b0 = param_1[0x12];
      uStack_428 = param_1[0x15];
      uStack_430 = param_1[0x14];
      uStack_188 = param_1[0x17];
      uStack_190 = param_1[0x16];
      uStack_418 = param_1[0x17];
      uStack_420 = param_1[0x16];
      uStack_178 = param_1[0x19];
      uStack_180 = param_1[0x18];
      uStack_478 = param_1[0xb];
      uStack_480 = param_1[10];
      uStack_1d8 = param_1[0xd];
      uStack_1e0 = param_1[0xc];
      uStack_488 = param_1[9];
      uStack_490 = param_1[8];
      uStack_1e8 = param_1[0xb];
      uStack_1f0 = param_1[10];
      uStack_468 = param_1[0xd];
      uStack_470 = param_1[0xc];
      uStack_1c8 = param_1[0xf];
      uStack_1d0 = param_1[0xe];
      uStack_458 = param_1[0xf];
      uStack_460 = param_1[0xe];
      uStack_1b8 = param_1[0x11];
      uStack_1c0 = param_1[0x10];
      uStack_208 = param_1[7];
      uStack_210 = param_1[6];
      uStack_1f8 = param_1[9];
      uStack_200 = param_1[8];
      uStack_498 = param_1[7];
      uStack_4a0 = param_1[6];
      uStack_320 = param_2[0x1b];
      uStack_328 = param_2[0x1a];
      uStack_238 = param_2[0x1d];
      uStack_240 = param_2[0x1c];
      uStack_330 = param_2[0x19];
      uStack_338 = param_2[0x18];
      uStack_248 = param_2[0x1b];
      uStack_250 = param_2[0x1a];
      uStack_310 = param_2[0x1d];
      uStack_318 = param_2[0x1c];
      uStack_228 = param_2[0x1f];
      uStack_230 = param_2[0x1e];
      uStack_360 = param_2[0x13];
      uStack_368 = param_2[0x12];
      uStack_278 = param_2[0x15];
      uStack_280 = param_2[0x14];
      uStack_370 = param_2[0x11];
      uStack_378 = param_2[0x10];
      uStack_288 = param_2[0x13];
      uStack_290 = param_2[0x12];
      uStack_350 = param_2[0x15];
      uStack_358 = param_2[0x14];
      uStack_268 = param_2[0x17];
      uStack_270 = param_2[0x16];
      uStack_340 = param_2[0x17];
      uStack_348 = param_2[0x16];
      uStack_258 = param_2[0x19];
      uStack_260 = param_2[0x18];
      uStack_3a0 = param_2[0xb];
      uStack_3a8 = param_2[10];
      uStack_2b8 = param_2[0xd];
      uStack_2c0 = param_2[0xc];
      uStack_3b0 = param_2[9];
      uStack_3b8 = param_2[8];
      uStack_2c8 = param_2[0xb];
      uStack_2d0 = param_2[10];
      uStack_390 = param_2[0xd];
      uStack_398 = param_2[0xc];
      uStack_2a8 = param_2[0xf];
      uStack_2b0 = param_2[0xe];
      uStack_380 = param_2[0xf];
      uStack_388 = param_2[0xe];
      uStack_2a0 = param_2[0x10];
      uStack_298 = param_2[0x11];
      uStack_2e8 = param_2[7];
      uStack_2f0 = param_2[6];
      uStack_2e0 = param_2[8];
      uStack_2d8 = param_2[9];
      uStack_3c0 = param_2[7];
      uStack_3c8 = param_2[6];
      uStack_3d8 = param_1[0x1f];
      uStack_3e0 = param_1[0x1e];
      iVar2 = (int)&uStack_3c8;
      uStack_300 = param_2[0x1f];
      uStack_308 = param_2[0x1e];
      uStack_140 = param_1[0x20];
      uStack_220 = param_2[0x20];
      uStack_3d0 = param_1[0x20];
      uStack_2f8 = param_2[0x20];
      iVar1 = (int)&uStack_4a0;
      func_0x000100d6cdb4();
      if (iVar1 == 1) {
        func_0x000100d6cdb4();
        if (iVar2 == 1) {
          uStack_5a8 = uStack_3f8;
          uStack_5b0 = uStack_400;
          uStack_598 = uStack_3e8;
          uStack_5a0 = uStack_3f0;
          uStack_588 = uStack_3d8;
          uStack_590 = uStack_3e0;
          uStack_580 = uStack_3d0;
          uStack_5e8 = uStack_438;
          uStack_5f0 = uStack_440;
          uStack_5d8 = uStack_428;
          uStack_5e0 = uStack_430;
          uStack_5c8 = uStack_418;
          uStack_5d0 = uStack_420;
          uStack_5b8 = uStack_408;
          uStack_5c0 = uStack_410;
          uStack_628 = uStack_478;
          uStack_630 = uStack_480;
          uStack_618 = uStack_468;
          uStack_620 = uStack_470;
          uStack_608 = uStack_458;
          uStack_610 = uStack_460;
          uStack_5f8 = uStack_448;
          uStack_600 = uStack_450;
          uStack_648 = uStack_498;
          uStack_650 = uStack_4a0;
          uStack_638 = uStack_488;
          uStack_640 = uStack_490;
          FUN_103d0f578(&uStack_210,&uStack_130,0x113002508,&UNK_10dc7adb0);
          FUN_103d0f578(&uStack_2f0,&uStack_130,0x113002508,&UNK_10dc7adb0);
          FUN_103d1ccb8(&uStack_650,0x113002508,&UNK_10dc7adb0);
LAB_103d10198:
          uVar4 = param_1[4];
          func_0x000100e25fcc(uVar4,param_1[5],param_2[4],param_2[5]);
          uVar3 = (uint)uVar4;
          goto LAB_103d10048;
        }
      }
      else {
        uStack_688 = uStack_3f8;
        uStack_690 = uStack_400;
        uStack_678 = uStack_3e8;
        uStack_680 = uStack_3f0;
        uStack_668 = uStack_3d8;
        uStack_670 = uStack_3e0;
        uStack_660 = uStack_3d0;
        uStack_6c8 = uStack_438;
        uStack_6d0 = uStack_440;
        uStack_6b8 = uStack_428;
        uStack_6c0 = uStack_430;
        uStack_6a8 = uStack_418;
        uStack_6b0 = uStack_420;
        uStack_698 = uStack_408;
        uStack_6a0 = uStack_410;
        uStack_708 = uStack_478;
        uStack_710 = uStack_480;
        uStack_6f8 = uStack_468;
        uStack_700 = uStack_470;
        uStack_6e8 = uStack_458;
        uStack_6f0 = uStack_460;
        uStack_6d8 = uStack_448;
        uStack_6e0 = uStack_450;
        uStack_728 = uStack_498;
        uStack_730 = uStack_4a0;
        uStack_718 = uStack_488;
        uStack_720 = uStack_490;
        func_0x000100d6cdb4();
        if (iVar2 != 1) {
          uStack_768 = uStack_320;
          uStack_770 = uStack_328;
          uStack_758 = uStack_310;
          uStack_760 = uStack_318;
          uStack_748 = uStack_300;
          uStack_750 = uStack_308;
          uStack_7a8 = uStack_360;
          uStack_7b0 = uStack_368;
          uStack_798 = uStack_350;
          uStack_7a0 = uStack_358;
          uStack_788 = uStack_340;
          uStack_790 = uStack_348;
          uStack_778 = uStack_330;
          uStack_780 = uStack_338;
          uStack_7e8 = uStack_3a0;
          uStack_7f0 = uStack_3a8;
          uStack_7d8 = uStack_390;
          uStack_7e0 = uStack_398;
          uStack_7c8 = uStack_380;
          uStack_7d0 = uStack_388;
          uStack_7b8 = uStack_370;
          uStack_7c0 = uStack_378;
          uStack_808 = uStack_3c0;
          uStack_810 = uStack_3c8;
          uStack_7f8 = uStack_3b0;
          uStack_800 = uStack_3b8;
          uStack_5a8 = uStack_320;
          uStack_5b0 = uStack_328;
          uStack_598 = uStack_310;
          uStack_5a0 = uStack_318;
          uStack_588 = uStack_300;
          uStack_590 = uStack_308;
          uStack_5e8 = uStack_360;
          uStack_5f0 = uStack_368;
          uStack_5d8 = uStack_350;
          uStack_5e0 = uStack_358;
          uStack_5c8 = uStack_340;
          uStack_5d0 = uStack_348;
          uStack_5b8 = uStack_330;
          uStack_5c0 = uStack_338;
          uStack_628 = uStack_3a0;
          uStack_630 = uStack_3a8;
          uStack_618 = uStack_390;
          uStack_620 = uStack_398;
          uStack_608 = uStack_380;
          uStack_610 = uStack_388;
          uStack_5f8 = uStack_370;
          uStack_600 = uStack_378;
          uStack_740 = uStack_2f8;
          uStack_580 = uStack_2f8;
          uStack_648 = uStack_3c0;
          uStack_650 = uStack_3c8;
          uStack_638 = uStack_3b0;
          uStack_640 = uStack_3b8;
          uStack_88 = uStack_688;
          uStack_90 = uStack_690;
          uStack_78 = uStack_678;
          uStack_80 = uStack_680;
          uStack_68 = uStack_668;
          uStack_70 = uStack_670;
          uStack_60 = uStack_660;
          uStack_c8 = uStack_6c8;
          uStack_d0 = uStack_6d0;
          uStack_b8 = uStack_6b8;
          uStack_c0 = uStack_6c0;
          uStack_a8 = uStack_6a8;
          uStack_b0 = uStack_6b0;
          uStack_98 = uStack_698;
          uStack_a0 = uStack_6a0;
          uStack_108 = uStack_708;
          uStack_110 = uStack_710;
          uStack_f8 = uStack_6f8;
          uStack_100 = uStack_700;
          uStack_e8 = uStack_6e8;
          uStack_f0 = uStack_6f0;
          uStack_d8 = uStack_6d8;
          uStack_e0 = uStack_6e0;
          uStack_128 = uStack_728;
          uStack_130 = uStack_730;
          uStack_118 = uStack_718;
          uStack_120 = uStack_720;
          FUN_103d0f578(&uStack_210,auStack_8e8,0x113002508,&UNK_10dc7adb0);
          FUN_103d0f578(&uStack_2f0,auStack_8e8,0x113002508,&UNK_10dc7adb0);
          puVar5 = &uStack_130;
          FUN_103d0ec54(puVar5,&uStack_650);
          FUN_103d1ccb8(&uStack_810,0x113002508,&UNK_10dc7adb0);
          FUN_103d1ccb8(&uStack_4a0,0x113002508,&UNK_10dc7adb0);
          if (((ulong)puVar5 & 1) != 0) goto LAB_103d10198;
          goto LAB_103d10044;
        }
      }
      func_0x000107c610b4(&uStack_650,&uStack_4a0,0x1b0);
      FUN_103d0f578(&uStack_210,&uStack_130,0x113002508,&UNK_10dc7adb0);
      FUN_103d0f578(&uStack_2f0,&uStack_130,0x113002508,&UNK_10dc7adb0);
      FUN_103d1ccb8(&uStack_650,0x113002510,&UNK_10dc7adb8);
    }
  }
LAB_103d10044:
  uVar3 = 0;
LAB_103d10048:
  return (ulong)(uVar3 & 1);
}



/* Entry: 103d1022c; end: 103d10343;  */

/* WARNING: Possible PIC construction at 0x000103d10264: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d102b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d102bc) */
/* WARNING: Removing unreachable block (ram,0x000103d10268) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d1022c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  long lVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
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
  
  pbVar14 = (byte *)*param_1;
  pbVar18 = (byte *)param_1[1];
  pbVar19 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  if (pbVar14 != pbVar19 || pbVar18 != pbVar13) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar14,pbVar18,pbVar19,pbVar13,0);
    return pbVar14;
  }
  uVar15 = param_1[2];
  if (((uVar15 == param_2[2] && param_1[3] == param_2[3]) ||
      (func_0x000107c605b8(), (uVar15 & 1) != 0)) && (param_1[4] == param_2[4])) {
    pbVar14 = (byte *)param_1[5];
    pbVar18 = (byte *)param_1[6];
    pbVar19 = (byte *)param_2[5];
    pbVar13 = (byte *)param_2[6];
    if ((pbVar14 != pbVar19) || (pbVar18 != pbVar13)) goto code_r0x000107c605b8;
    uVar15 = param_1[7];
    if (((uVar15 == param_2[7]) && (param_1[8] == param_2[8])) ||
       (func_0x000107c605b8(), (uVar15 & 1) != 0)) {
      lVar16 = param_1[9];
      lVar26 = param_2[9];
      uVar1 = *(undefined1 *)(param_2 + 10);
      func_0x000103d1d830(lVar16,*(undefined1 *)(param_1 + 10));
      func_0x000103d1d830(lVar26,uVar1);
      if (lVar16 == lVar26) {
        pbVar11 = (byte *)param_1[0xb];
        pbVar27 = (byte *)param_1[0xc];
        lVar16 = param_2[0xb];
        uVar15 = param_2[0xc];
        puVar8 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
          *(byte **)(puVar8 + -0x48) = unaff_x25;
          *(byte **)(puVar8 + -0x40) = unaff_x24;
          *(byte **)(puVar8 + -0x38) = unaff_x23;
          *(ulong *)(puVar8 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
          *(ulong *)(puVar8 + -0x20) = unaff_x20;
          *(byte **)(puVar8 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar8 + -8) = unaff_x30;
          *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar5 = (uint)((ulong)pbVar27 >> 0x20);
          uVar20 = uVar5 >> 0x1e;
          uVar6 = (uint)(uVar15 >> 0x20);
          uVar23 = uVar6 >> 0x1e;
          iVar9 = (int)pbVar11;
          pbVar17 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar22 = 0;
            if (((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
               ((uVar15 >> 0x3e < 3 || ((uVar22 = 0, lVar16 != 0 || (uVar15 != 0xc000000000000000)))
                ))) goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar10 = (byte *)0x1;
          }
          else if (uVar5 >> 0x1e < 2) {
            if (uVar20 == 0) {
              uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)pbVar11 >> 0x20);
              if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar7)();
              }
              uVar22 = (ulong)(iVar21 - iVar9);
            }
joined_r0x000100e26170:
            if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar15 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar21 = (int)((ulong)lVar16 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar16)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar16)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar10 = (byte *)0x0;
          }
          else {
            if (uVar20 == 2) {
              uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
              if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar7)();
              }
              goto joined_r0x000100e26170;
            }
            uVar22 = 0;
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar16 + 0x18) - *(long *)(lVar16 + 0x10);
              if (SBORROW8(*(long *)(lVar16 + 0x18),*(long *)(lVar16 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
code_r0x000100e2608c:
              if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar22 < 1) goto code_r0x000100e26128;
              if (uVar20 < 2) {
                if (uVar20 == 0) {
                  puVar8[-0x70] = (char)pbVar11;
                  puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
                  puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
                  puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
                  puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
                  puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
                  puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
                  puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
                  puVar8[-0x68] = (char)pbVar27;
                  puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
                  puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                  puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                  puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
                  puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
                  pbVar17 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
                  pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar9;
                unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar7)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar27;
                if (pbVar11 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar11 = (byte *)0x0;
                }
                else {
                  pbVar17 = pbVar11;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar17)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar17);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar11;
                  if (pbVar11 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar17) {
                      pbVar17 = unaff_x23;
                    }
                    pbVar17 = pbVar17 + (long)pbVar11;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar17 = (byte *)0x0;
              }
              else {
                if (uVar20 != 2) {
                  *(undefined8 *)(puVar8 + -0x6a) = 0;
                  *(undefined8 *)(puVar8 + -0x70) = 0;
                  pbVar17 = puVar8 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar26 = *(long *)(pbVar11 + 0x10);
                unaff_x24 = *(byte **)(pbVar11 + 0x18);
                func_0x000107c5ec30();
                pbVar17 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar17)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar11 = pbVar11 + (lVar26 - (long)pbVar17);
                }
                unaff_x23 = unaff_x24 + -lVar26;
                if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                unaff_x25 = pbVar27;
                if (pbVar11 == (byte *)0x0) {
                  pbVar17 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar17) {
                    pbVar17 = unaff_x23;
                  }
                  pbVar17 = pbVar17 + (long)pbVar11;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar17,lVar16,uVar15);
              pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
              unaff_x22 = uVar15;
            }
            else {
              pbVar10 = (byte *)(ulong)(uVar22 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
            return pbVar10;
          }
          func_0x000107c60e78();
          *(byte **)(puVar8 + -0xc0) = unaff_x24;
          *(byte **)(puVar8 + -0xb8) = unaff_x23;
          *(ulong *)(puVar8 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
          *(ulong *)(puVar8 + -0xa0) = unaff_x20;
          *(byte **)(puVar8 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
          *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
          pbVar14 = *(byte **)pbVar10;
          pbVar11 = *(byte **)(pbVar10 + 8);
          pbVar25 = *(byte **)(pbVar10 + 0x18);
          bVar28 = pbVar10[0x28];
          pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
          pbVar18 = pbVar11;
          if (bVar28 < 3) {
            if (bVar28 == 0) {
              if (pbVar17[0x28] == 0) {
                lVar16 = *(long *)pbVar17;
                uVar12 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar14,lVar16,uVar12);
                return (byte *)(ulong)((uint)pbVar14 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar28 == 1) {
              if (pbVar17[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar19 = *(byte **)(pbVar17 + 8);
              pbVar13 = *(byte **)(pbVar17 + 0x10);
              lVar16 = *(long *)pbVar17;
              uVar12 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar14,lVar16,uVar12);
              if (((ulong)pbVar14 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar14 = pbVar11;
              pbVar18 = pbVar27;
              if ((pbVar11 == pbVar19) && (pbVar27 == pbVar13)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar17[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar19 = *(byte **)pbVar17;
              pbVar13 = *(byte **)(pbVar17 + 8);
              lVar16 = *(long *)(pbVar17 + 0x18);
              if ((pbVar14 == pbVar19) && (pbVar11 == pbVar13)) {
                if (((pbVar10[0x10] ^ pbVar17[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 != (byte *)0x0) {
                  if (lVar16 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar16);
                  func_0x000107c61174();
                  pbVar13 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar16);
                  pbVar25 = pbVar13;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar16 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar26 = *(long *)(pbVar10 + 0x20);
          if (bVar28 < 5) {
            if (bVar28 != 3) {
              if (pbVar17[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar19 = *(byte **)pbVar17;
              pbVar13 = *(byte **)(pbVar17 + 8);
              if (((pbVar14 == pbVar19) && (pbVar11 == pbVar13)) &&
                 (pbVar14 = pbVar27, pbVar18 = pbVar25, pbVar19 = *(byte **)(pbVar17 + 0x10),
                 pbVar13 = *(byte **)(pbVar17 + 0x18),
                 pbVar27 == *(byte **)(pbVar17 + 0x10) && pbVar25 == *(byte **)(pbVar17 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar17[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar17 != ((uint)pbVar14 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar13 = *(byte **)(pbVar17 + 0x10);
            lVar16 = *(long *)(pbVar17 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar13 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar13 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar19 = *(byte **)(pbVar17 + 8);
              pbVar14 = pbVar11;
              pbVar18 = pbVar27;
              if ((pbVar11 != pbVar19) || (pbVar27 != pbVar13)) goto code_r0x000107c605b8;
            }
            if (lVar26 != 0) {
              if (lVar16 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar17 + 0x18)) && (lVar26 == lVar16)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar26,*(byte **)(pbVar17 + 0x18),lVar16,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar28 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar14 == (byte *)0x0) &&
                lVar26 == 0) && pbVar27 == (byte *)0x0) {
              if (pbVar17[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar17 + 0x20);
              lVar16 = *(long *)(pbVar17 + 0x18);
              bVar28 = pbVar17[8] | (byte)lVar16;
              bVar29 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
              bVar30 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
              bVar31 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
              bVar32 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
              bVar33 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
              bVar34 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
              bVar35 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
              bVar36 = pbVar17[0x10] | (byte)lVar26;
              bVar37 = pbVar17[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar38 = pbVar17[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar39 = pbVar17[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar40 = pbVar17[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar41 = pbVar17[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar42 = pbVar17[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar43 = pbVar17[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
              auVar44 = NEON_ext(auVar44,auVar4,8,1);
              if (CONCAT17(bVar35 | auVar44[7],
                           CONCAT16(bVar34 | auVar44[6],
                                    CONCAT15(bVar33 | auVar44[5],
                                             CONCAT14(bVar32 | auVar44[4],
                                                      CONCAT13(bVar31 | auVar44[3],
                                                               CONCAT12(bVar30 | auVar44[2],
                                                                        CONCAT11(bVar29 | auVar44[1]
                                                                                 ,bVar28 | auVar44[0
                                                  ]))))))) == 0 && *(long *)pbVar17 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar14 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
                lVar26 == 0)) {
              if (pbVar17[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar17 != 1) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar17[0x28] != 6) {
                return (byte *)0x0;
              }
              if (*(long *)pbVar17 != 2) {
                return (byte *)0x0;
              }
            }
            lVar26 = *(long *)(pbVar17 + 0x20);
            lVar16 = *(long *)(pbVar17 + 0x18);
            bVar28 = pbVar17[8] | (byte)lVar16;
            bVar29 = pbVar17[9] | (byte)((ulong)lVar16 >> 8);
            bVar30 = pbVar17[10] | (byte)((ulong)lVar16 >> 0x10);
            bVar31 = pbVar17[0xb] | (byte)((ulong)lVar16 >> 0x18);
            bVar32 = pbVar17[0xc] | (byte)((ulong)lVar16 >> 0x20);
            bVar33 = pbVar17[0xd] | (byte)((ulong)lVar16 >> 0x28);
            bVar34 = pbVar17[0xe] | (byte)((ulong)lVar16 >> 0x30);
            bVar35 = pbVar17[0xf] | (byte)((ulong)lVar16 >> 0x38);
            bVar36 = pbVar17[0x10] | (byte)lVar26;
            bVar37 = pbVar17[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar38 = pbVar17[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar39 = pbVar17[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar40 = pbVar17[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar41 = pbVar17[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar42 = pbVar17[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar43 = pbVar17[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar2[1] = bVar29;
            auVar2[0] = bVar28;
            auVar2[2] = bVar30;
            auVar2[3] = bVar31;
            auVar2[4] = bVar32;
            auVar2[5] = bVar33;
            auVar2[6] = bVar34;
            auVar2[7] = bVar35;
            auVar2[8] = bVar36;
            auVar2[9] = bVar37;
            auVar2[10] = bVar38;
            auVar2[0xb] = bVar39;
            auVar2[0xc] = bVar40;
            auVar2[0xd] = bVar41;
            auVar2[0xe] = bVar42;
            auVar2[0xf] = bVar43;
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
            auVar44 = NEON_ext(auVar2,auVar3,8,1);
            lVar16 = CONCAT17(bVar35 | auVar44[7],
                              CONCAT16(bVar34 | auVar44[6],
                                       CONCAT15(bVar33 | auVar44[5],
                                                CONCAT14(bVar32 | auVar44[4],
                                                         CONCAT13(bVar31 | auVar44[3],
                                                                  CONCAT12(bVar30 | auVar44[2],
                                                                           CONCAT11(bVar29 | auVar44
                                                  [1],bVar28 | auVar44[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar17[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar16 = *(long *)(pbVar17 + 8);
          uVar15 = *(ulong *)(pbVar17 + 0x10);
          lVar26 = *(long *)pbVar17;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar14,lVar26,uVar12);
          if (((ulong)pbVar14 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
          unaff_x20 = *(ulong *)(puVar8 + -0xa0);
          unaff_x19 = *(byte **)(puVar8 + -0x98);
          unaff_x22 = *(ulong *)(puVar8 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
          unaff_x24 = *(byte **)(puVar8 + -0xc0);
          unaff_x23 = *(byte **)(puVar8 + -0xb8);
          puVar8 = puVar8 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d10344; end: 103d1064f;  */

ulong FUN_103d10344(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_b8 [24];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d103b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc7acf6)[param_2[2]] * 4 + 0x103d103bc))();
      return uVar2;
    }
    if (param_1[2] == param_2[2]) {
      uVar7 = param_1[7];
      uVar6 = param_1[6];
      uVar4 = param_1[8];
      uVar8 = param_2[7];
      uVar2 = param_2[6];
      uVar5 = param_2[8];
      uStack_a0 = uVar2;
      uStack_98 = uVar8;
      uStack_90 = uVar5;
      uStack_80 = uVar6;
      uStack_78 = uVar7;
      uStack_70 = uVar4;
      if (uVar4 == 0) {
        if (uVar5 != 0) goto LAB_103d10444;
        FUN_103d0f578(&uStack_80,auStack_b8,0x113002500,&UNK_10dc7ada8);
        FUN_103d0f578(&uStack_a0,auStack_b8,0x113002500,&UNK_10dc7ada8);
        func_0x000103d0ebc8(uVar6,uVar7,0);
      }
      else {
        if (uVar5 == 0) {
LAB_103d10444:
          FUN_103d0f578(&uStack_80,auStack_b8,0x113002500,&UNK_10dc7ada8);
          FUN_103d0f578(&uStack_a0,auStack_b8,0x113002500,&UNK_10dc7ada8);
          func_0x000103d0ebc8(uVar6,uVar7,uVar4);
LAB_103d10498:
          func_0x000103d0ebc8(uVar2,uVar8,uVar5);
          uVar1 = 0;
          goto LAB_103d1062c;
        }
        if (uVar4 == uVar5) {
          FUN_103d0f578(&uStack_80,auStack_b8,0x113002500,&UNK_10dc7ada8);
          FUN_103d0f578(&uStack_a0,auStack_b8,0x113002500,&UNK_10dc7ada8);
        }
        else {
          FUN_103d0f578(&uStack_80,auStack_b8,0x113002500,&UNK_10dc7ada8);
          FUN_103d0f578(&uStack_a0,auStack_b8,0x113002500,&UNK_10dc7ada8);
          func_0x000107c6157c(uVar4);
          func_0x000107c6157c(uVar5);
          uVar3 = uVar4;
          FUN_103d02ab0(uVar4,uVar5);
          func_0x000107c61574(uVar5);
          func_0x000107c61574(uVar4);
          if ((uVar3 & 1) == 0) {
            func_0x000103d0ebc8(uVar2,uVar8,uVar5);
            uVar2 = uVar6;
            uVar8 = uVar7;
            uVar5 = uVar4;
            goto LAB_103d10498;
          }
        }
        uVar3 = uVar6;
        func_0x000100e25fcc(uVar6,uVar7,uVar2,uVar8);
        func_0x000103d0ebc8(uVar2,uVar8,uVar5);
        func_0x000103d0ebc8(uVar6,uVar7,uVar4);
        if ((uVar3 & 1) == 0) goto LAB_103d10628;
      }
      uVar2 = param_1[4];
      func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)uVar2;
      goto LAB_103d1062c;
    }
  }
LAB_103d10628:
  uVar1 = 0;
LAB_103d1062c:
  return (ulong)(uVar1 & 1);
}



/* Entry: 103d10650; end: 103d1068f;  */

void FUN_103d10650(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002780 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7b998;
  func_0x000107c61520(&UNK_10dc7b998,&UNK_1106ff0e8);
  puRam0000000113002780 = puVar1;
  return;
}



/* Entry: 103d10690; end: 103d1082b;  */

/* WARNING: Possible PIC construction at 0x000103d106c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d106cc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d10690(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  long lVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  ulong uVar18;
  byte *pbVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  ulong unaff_x20;
  undefined8 unaff_x21;
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar19 = (byte *)param_2[1];
  if (pbVar13 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar19,0);
    return pbVar13;
  }
  if ((param_1[2] == param_2[2]) && ((double)param_1[3] == (double)param_2[3])) {
    if (*(char *)(param_2 + 5) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d10718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc7ad02)[param_2[4]] * 4 + 0x103d1071c))();
      return pbVar13;
    }
    if (param_1[4] == param_2[4]) {
      lVar14 = param_1[6];
      lVar26 = param_2[6];
      uVar1 = *(undefined1 *)(param_2 + 7);
      func_0x000103d1d830(lVar14,*(undefined1 *)(param_1 + 7));
      func_0x000103d1d830(lVar26,uVar1);
      if (((lVar14 == lVar26) && (param_1[8] == param_2[8])) && (param_1[9] == param_2[9])) {
        pbVar11 = (byte *)param_1[10];
        pbVar27 = (byte *)param_1[0xb];
        lVar14 = param_2[10];
        uVar18 = param_2[0xb];
        puVar8 = (undefined1 *)register0x00000008;
        do {
          *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
          *(byte **)(puVar8 + -0x48) = unaff_x25;
          *(byte **)(puVar8 + -0x40) = unaff_x24;
          *(byte **)(puVar8 + -0x38) = unaff_x23;
          *(ulong *)(puVar8 + -0x30) = unaff_x22;
          *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
          *(ulong *)(puVar8 + -0x20) = unaff_x20;
          *(byte **)(puVar8 + -0x18) = unaff_x19;
          *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
          *(undefined8 *)(puVar8 + -8) = unaff_x30;
          *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar5 = (uint)((ulong)pbVar27 >> 0x20);
          uVar20 = uVar5 >> 0x1e;
          uVar6 = (uint)(uVar18 >> 0x20);
          uVar23 = uVar6 >> 0x1e;
          iVar9 = (int)pbVar11;
          pbVar15 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar22 = 0;
            if (((pbVar11 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
               ((uVar18 >> 0x3e < 3 || ((uVar22 = 0, lVar14 != 0 || (uVar18 != 0xc000000000000000)))
                ))) goto joined_r0x000100e26170;
code_r0x000100e26128:
            pbVar10 = (byte *)0x1;
          }
          else if (uVar5 >> 0x1e < 2) {
            if (uVar20 == 0) {
              uVar22 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)pbVar11 >> 0x20);
              if (SBORROW4(iVar21,iVar9)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar7)();
              }
              uVar22 = (ulong)(iVar21 - iVar9);
            }
joined_r0x000100e26170:
            if (1 < uVar6 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar18 >> 0x30 & 0xff;
              goto code_r0x000100e2608c;
            }
            iVar21 = (int)((ulong)lVar14 >> 0x20);
            if (SBORROW4(iVar21,(int)lVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar7)();
            }
            if (uVar22 == (long)(iVar21 - (int)lVar14)) goto code_r0x000100e26094;
code_r0x000100e26154:
            pbVar10 = (byte *)0x0;
          }
          else {
            if (uVar20 == 2) {
              uVar22 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
              if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar7)();
              }
              goto joined_r0x000100e26170;
            }
            uVar22 = 0;
            if (uVar23 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
              if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
code_r0x000100e2608c:
              if (uVar22 != uVar24) goto code_r0x000100e26154;
code_r0x000100e26094:
              if ((long)uVar22 < 1) goto code_r0x000100e26128;
              if (uVar20 < 2) {
                if (uVar20 == 0) {
                  puVar8[-0x70] = (char)pbVar11;
                  puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
                  puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
                  puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
                  puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
                  puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
                  puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
                  puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
                  puVar8[-0x68] = (char)pbVar27;
                  puVar8[-0x67] = (char)((ulong)pbVar27 >> 8);
                  puVar8[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                  puVar8[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                  puVar8[-100] = (char)((ulong)pbVar27 >> 0x20);
                  puVar8[-99] = (char)((ulong)pbVar27 >> 0x28);
                  pbVar15 = puVar8 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
                  pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
                  goto code_r0x000100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar9;
                unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar7)();
                }
                func_0x000107c5ec30();
                unaff_x24 = pbVar27;
                if (pbVar11 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar11 = (byte *)0x0;
                }
                else {
                  pbVar15 = pbVar11;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar7)();
                  }
                  pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar15);
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar11;
                  if (pbVar11 != (byte *)0x0) {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar11;
                    goto code_r0x000100e262a4;
                  }
                }
                pbVar15 = (byte *)0x0;
              }
              else {
                if (uVar20 != 2) {
                  *(undefined8 *)(puVar8 + -0x6a) = 0;
                  *(undefined8 *)(puVar8 + -0x70) = 0;
                  pbVar15 = puVar8 + -0x70;
                  goto code_r0x000100e26260;
                }
                lVar26 = *(long *)(pbVar11 + 0x10);
                unaff_x24 = *(byte **)(pbVar11 + 0x18);
                func_0x000107c5ec30();
                pbVar15 = pbVar11;
                if (pbVar11 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar7)();
                  }
                  pbVar11 = pbVar11 + (lVar26 - (long)pbVar15);
                }
                unaff_x23 = unaff_x24 + -lVar26;
                if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                unaff_x19 = pbVar11;
                unaff_x25 = pbVar27;
                if (pbVar11 == (byte *)0x0) {
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if ((long)unaff_x23 <= (long)pbVar15) {
                    pbVar15 = unaff_x23;
                  }
                  pbVar15 = pbVar15 + (long)pbVar11;
                }
              }
code_r0x000100e262a4:
              unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              func_0x000100e25bdc(puVar8 + -0x70,pbVar11,pbVar15,lVar14,uVar18);
              pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
              unaff_x22 = uVar18;
            }
            else {
              pbVar10 = (byte *)(ulong)(uVar22 == 0);
            }
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
            return pbVar10;
          }
          func_0x000107c60e78();
          *(byte **)(puVar8 + -0xc0) = unaff_x24;
          *(byte **)(puVar8 + -0xb8) = unaff_x23;
          *(ulong *)(puVar8 + -0xb0) = unaff_x22;
          *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
          *(ulong *)(puVar8 + -0xa0) = unaff_x20;
          *(byte **)(puVar8 + -0x98) = unaff_x19;
          *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
          *(undefined **)(puVar8 + -0x88) = &UNK_100e26304;
          pbVar13 = *(byte **)pbVar10;
          pbVar11 = *(byte **)(pbVar10 + 8);
          pbVar25 = *(byte **)(pbVar10 + 0x18);
          bVar28 = pbVar10[0x28];
          pbVar27 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
          pbVar16 = pbVar11;
          if (bVar28 < 3) {
            if (bVar28 == 0) {
              if (pbVar15[0x28] == 0) {
                lVar14 = *(long *)pbVar15;
                uVar12 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar14,uVar12);
                return (byte *)(ulong)((uint)pbVar13 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar28 == 1) {
              if (pbVar15[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar19 = *(byte **)(pbVar15 + 0x10);
              lVar14 = *(long *)pbVar15;
              uVar12 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar13,lVar14,uVar12);
              if (((ulong)pbVar13 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar13 = pbVar11;
              pbVar16 = pbVar27;
              if ((pbVar11 == pbVar17) && (pbVar27 == pbVar19)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar15[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar19 = *(byte **)(pbVar15 + 8);
              lVar14 = *(long *)(pbVar15 + 0x18);
              if ((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) {
                if (((pbVar10[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 != (byte *)0x0) {
                  if (lVar14 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar14);
                  func_0x000107c61174();
                  pbVar13 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar14);
                  pbVar25 = pbVar13;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
          }
          lVar26 = *(long *)(pbVar10 + 0x20);
          if (bVar28 < 5) {
            if (bVar28 != 3) {
              if (pbVar15[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)pbVar15;
              pbVar19 = *(byte **)(pbVar15 + 8);
              if (((pbVar13 == pbVar17) && (pbVar11 == pbVar19)) &&
                 (pbVar13 = pbVar27, pbVar16 = pbVar25, pbVar17 = *(byte **)(pbVar15 + 0x10),
                 pbVar19 = *(byte **)(pbVar15 + 0x18),
                 pbVar27 == *(byte **)(pbVar15 + 0x10) && pbVar25 == *(byte **)(pbVar15 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar15[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar19 = *(byte **)(pbVar15 + 0x10);
            lVar14 = *(long *)(pbVar15 + 0x20);
            if (pbVar27 == (byte *)0x0) {
              if (pbVar19 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar19 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar17 = *(byte **)(pbVar15 + 8);
              pbVar13 = pbVar11;
              pbVar16 = pbVar27;
              if ((pbVar11 != pbVar17) || (pbVar27 != pbVar19)) goto code_r0x000107c605b8;
            }
            if (lVar26 != 0) {
              if (lVar14 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar14)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar26,*(byte **)(pbVar15 + 0x18),lVar14,0);
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
          }
          if (bVar28 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                lVar26 == 0) && pbVar27 == (byte *)0x0) {
              if (pbVar15[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar14 = *(long *)(pbVar15 + 0x18);
              bVar28 = pbVar15[8] | (byte)lVar14;
              bVar29 = pbVar15[9] | (byte)((ulong)lVar14 >> 8);
              bVar30 = pbVar15[10] | (byte)((ulong)lVar14 >> 0x10);
              bVar31 = pbVar15[0xb] | (byte)((ulong)lVar14 >> 0x18);
              bVar32 = pbVar15[0xc] | (byte)((ulong)lVar14 >> 0x20);
              bVar33 = pbVar15[0xd] | (byte)((ulong)lVar14 >> 0x28);
              bVar34 = pbVar15[0xe] | (byte)((ulong)lVar14 >> 0x30);
              bVar35 = pbVar15[0xf] | (byte)((ulong)lVar14 >> 0x38);
              bVar36 = pbVar15[0x10] | (byte)lVar26;
              bVar37 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar38 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar39 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar40 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar41 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar42 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar43 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
              auVar44 = NEON_ext(auVar44,auVar4,8,1);
              if (CONCAT17(bVar35 | auVar44[7],
                           CONCAT16(bVar34 | auVar44[6],
                                    CONCAT15(bVar33 | auVar44[5],
                                             CONCAT14(bVar32 | auVar44[4],
                                                      CONCAT13(bVar31 | auVar44[3],
                                                               CONCAT12(bVar30 | auVar44[2],
                                                                        CONCAT11(bVar29 | auVar44[1]
                                                                                 ,bVar28 | auVar44[0
                                                  ]))))))) == 0 && *(long *)pbVar15 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar13 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
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
            lVar14 = *(long *)(pbVar15 + 0x18);
            bVar28 = pbVar15[8] | (byte)lVar14;
            bVar29 = pbVar15[9] | (byte)((ulong)lVar14 >> 8);
            bVar30 = pbVar15[10] | (byte)((ulong)lVar14 >> 0x10);
            bVar31 = pbVar15[0xb] | (byte)((ulong)lVar14 >> 0x18);
            bVar32 = pbVar15[0xc] | (byte)((ulong)lVar14 >> 0x20);
            bVar33 = pbVar15[0xd] | (byte)((ulong)lVar14 >> 0x28);
            bVar34 = pbVar15[0xe] | (byte)((ulong)lVar14 >> 0x30);
            bVar35 = pbVar15[0xf] | (byte)((ulong)lVar14 >> 0x38);
            bVar36 = pbVar15[0x10] | (byte)lVar26;
            bVar37 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
            bVar38 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
            bVar39 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
            bVar40 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
            bVar41 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
            bVar42 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
            bVar43 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
            auVar2[1] = bVar29;
            auVar2[0] = bVar28;
            auVar2[2] = bVar30;
            auVar2[3] = bVar31;
            auVar2[4] = bVar32;
            auVar2[5] = bVar33;
            auVar2[6] = bVar34;
            auVar2[7] = bVar35;
            auVar2[8] = bVar36;
            auVar2[9] = bVar37;
            auVar2[10] = bVar38;
            auVar2[0xb] = bVar39;
            auVar2[0xc] = bVar40;
            auVar2[0xd] = bVar41;
            auVar2[0xe] = bVar42;
            auVar2[0xf] = bVar43;
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
            auVar44 = NEON_ext(auVar2,auVar3,8,1);
            lVar14 = CONCAT17(bVar35 | auVar44[7],
                              CONCAT16(bVar34 | auVar44[6],
                                       CONCAT15(bVar33 | auVar44[5],
                                                CONCAT14(bVar32 | auVar44[4],
                                                         CONCAT13(bVar31 | auVar44[3],
                                                                  CONCAT12(bVar30 | auVar44[2],
                                                                           CONCAT11(bVar29 | auVar44
                                                  [1],bVar28 | auVar44[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar15[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar14 = *(long *)(pbVar15 + 8);
          uVar18 = *(ulong *)(pbVar15 + 0x10);
          lVar26 = *(long *)pbVar15;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar26,uVar12);
          if (((ulong)pbVar13 & 1) == 0) {
            return (byte *)0x0;
          }
          unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
          unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
          unaff_x20 = *(ulong *)(puVar8 + -0xa0);
          unaff_x19 = *(byte **)(puVar8 + -0x98);
          unaff_x22 = *(ulong *)(puVar8 + -0xb0);
          unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
          unaff_x24 = *(byte **)(puVar8 + -0xc0);
          unaff_x23 = *(byte **)(puVar8 + -0xb8);
          puVar8 = puVar8 + -0x80;
        } while( true );
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d1082c; end: 103d1086b;  */

void FUN_103d1082c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002790 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7ba70;
  func_0x000107c61520(&UNK_10dc7ba70,&UNK_1106ff188);
  puRam0000000113002790 = puVar1;
  return;
}



/* Entry: 103d1086c; end: 103d10c57;  */

ulong FUN_103d1086c(ulong *param_1,ulong *param_2)

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
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d108e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc7ad0e)[param_2[2]] * 4 + 0x103d108e4))();
      return uVar2;
    }
    if (param_1[2] == param_2[2]) {
      uVar2 = param_1[4];
      if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[6];
        if (((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar2 = param_1[8];
          func_0x000100d6bfdc(uVar2,(char)param_1[9],param_2[8],(char)param_2[9]);
          if ((uVar2 & 1) != 0) {
            uVar4 = param_1[0x11];
            uVar2 = param_1[0x10];
            uVar8 = param_1[0x13];
            uVar6 = param_1[0x12];
            uVar5 = param_2[0x11];
            uVar3 = param_2[0x10];
            uVar9 = param_2[0x13];
            uVar7 = param_2[0x12];
            uStack_a0 = uVar3;
            uStack_98 = uVar5;
            uStack_90 = uVar7;
            uStack_88 = uVar9;
            uStack_80 = uVar2;
            uStack_78 = uVar4;
            uStack_70 = uVar6;
            uStack_68 = uVar8;
            if (uVar8 >> 0x3c < 0xf) {
              if (0xe < uVar9 >> 0x3c) goto LAB_103d10a30;
              if (uVar2 == uVar3) {
                if ((int)uVar4 == (int)uVar5) {
                  FUN_103d0f578(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
                  FUN_103d0f578(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
                  uVar3 = uVar6;
                  func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
                  func_0x0001015d38c8(uVar2,uVar5,uVar7,uVar9);
                  if ((uVar3 & 1) != 0) goto LAB_103d109c4;
                  goto LAB_103d10c2c;
                }
                FUN_103d0f578(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
                FUN_103d0f578(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
                uVar3 = uVar2;
              }
              else {
                FUN_103d0f578(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
                FUN_103d0f578(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
              }
              func_0x0001015d38c8(uVar3,uVar5,uVar7,uVar9);
            }
            else {
              if (0xe < uVar9 >> 0x3c) {
                FUN_103d0f578(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
                FUN_103d0f578(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
LAB_103d109c4:
                func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
                uVar2 = param_1[10];
                if (((uVar2 == param_2[10]) && (param_1[0xb] == param_2[0xb])) ||
                   (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                  uVar2 = param_1[0xc];
                  func_0x000100d6bfdc(uVar2,(char)param_1[0xd],param_2[0xc],(char)param_2[0xd]);
                  if ((uVar2 & 1) != 0) {
                    uVar2 = param_1[0xe];
                    func_0x000100e25fcc(uVar2,param_1[0xf],param_2[0xe],param_2[0xf]);
                    uVar1 = (uint)uVar2;
                    goto LAB_103d10c34;
                  }
                }
                goto LAB_103d10c30;
              }
LAB_103d10a30:
              FUN_103d0f578(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
              FUN_103d0f578(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
              func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
              uVar2 = uVar3;
              uVar4 = uVar5;
              uVar6 = uVar7;
              uVar8 = uVar9;
            }
LAB_103d10c2c:
            func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
          }
        }
      }
    }
  }
LAB_103d10c30:
  uVar1 = 0;
LAB_103d10c34:
  return (ulong)(uVar1 & 1);
}



/* Entry: 103d10c58; end: 103d10c97;  */

void FUN_103d10c58(void)

{
  undefined *puVar1;
  
  if (puRam00000001130027a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7bb48;
  func_0x000107c61520(&UNK_10dc7bb48,&UNK_1106ff210);
  puRam00000001130027a0 = puVar1;
  return;
}



/* Entry: 103d10c98; end: 103d110d7;  */

uint FUN_103d10c98(ulong *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined1 auStack_8e8 [216];
  ulong uStack_810;
  ulong uStack_808;
  ulong uStack_800;
  ulong uStack_7f8;
  ulong uStack_7f0;
  ulong uStack_7e8;
  ulong uStack_7e0;
  ulong uStack_7d8;
  ulong uStack_7d0;
  ulong uStack_7c8;
  ulong uStack_7c0;
  ulong uStack_7b8;
  ulong uStack_7b0;
  ulong uStack_7a8;
  ulong uStack_7a0;
  ulong uStack_798;
  ulong uStack_790;
  ulong uStack_788;
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  ulong uStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  ulong uStack_718;
  ulong uStack_710;
  ulong uStack_708;
  ulong uStack_700;
  ulong uStack_6f8;
  ulong uStack_6f0;
  ulong uStack_6e8;
  ulong uStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  ulong uStack_6c0;
  ulong uStack_6b8;
  ulong uStack_6b0;
  ulong uStack_6a8;
  ulong uStack_6a0;
  ulong uStack_698;
  ulong uStack_690;
  ulong uStack_688;
  ulong uStack_680;
  ulong uStack_678;
  ulong uStack_670;
  ulong uStack_668;
  ulong uStack_660;
  ulong uStack_650;
  ulong uStack_648;
  ulong uStack_640;
  ulong uStack_638;
  ulong uStack_630;
  ulong uStack_628;
  ulong uStack_620;
  ulong uStack_618;
  ulong uStack_610;
  ulong uStack_608;
  ulong uStack_600;
  ulong uStack_5f8;
  ulong uStack_5f0;
  ulong uStack_5e8;
  ulong uStack_5e0;
  ulong uStack_5d8;
  ulong uStack_5d0;
  ulong uStack_5c8;
  ulong uStack_5c0;
  ulong uStack_5b8;
  ulong uStack_5b0;
  ulong uStack_5a8;
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_4a0;
  ulong uStack_498;
  ulong uStack_490;
  ulong uStack_488;
  ulong uStack_480;
  ulong uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  ulong uStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  ulong uStack_440;
  ulong uStack_438;
  ulong uStack_430;
  ulong uStack_428;
  ulong uStack_420;
  ulong uStack_418;
  ulong uStack_410;
  ulong uStack_408;
  ulong uStack_400;
  ulong uStack_3f8;
  ulong uStack_3f0;
  ulong uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  ulong uStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  ulong uStack_3b0;
  ulong uStack_3a8;
  ulong uStack_3a0;
  ulong uStack_398;
  ulong uStack_390;
  ulong uStack_388;
  ulong uStack_380;
  ulong uStack_378;
  ulong uStack_370;
  ulong uStack_368;
  ulong uStack_360;
  ulong uStack_358;
  ulong uStack_350;
  ulong uStack_348;
  ulong uStack_340;
  ulong uStack_338;
  ulong uStack_330;
  ulong uStack_328;
  ulong uStack_320;
  ulong uStack_318;
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
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
  ulong uStack_e0;
  ulong uStack_d8;
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
  ulong uStack_70;
  ulong uStack_68;
  ulong uStack_60;
  
  uVar4 = *param_1;
  if ((uVar4 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar4 & 1) != 0))
  {
    uStack_3f8 = param_1[0x1b];
    uStack_400 = param_1[0x1a];
    uStack_158 = param_1[0x1d];
    uStack_160 = param_1[0x1c];
    uStack_408 = param_1[0x19];
    uStack_410 = param_1[0x18];
    uStack_168 = param_1[0x1b];
    uStack_170 = param_1[0x1a];
    uStack_3e8 = param_1[0x1d];
    uStack_3f0 = param_1[0x1c];
    uStack_148 = param_1[0x1f];
    uStack_150 = param_1[0x1e];
    uStack_438 = param_1[0x13];
    uStack_440 = param_1[0x12];
    uStack_198 = param_1[0x15];
    uStack_1a0 = param_1[0x14];
    uStack_448 = param_1[0x11];
    uStack_450 = param_1[0x10];
    uStack_1a8 = param_1[0x13];
    uStack_1b0 = param_1[0x12];
    uStack_428 = param_1[0x15];
    uStack_430 = param_1[0x14];
    uStack_188 = param_1[0x17];
    uStack_190 = param_1[0x16];
    uStack_418 = param_1[0x17];
    uStack_420 = param_1[0x16];
    uStack_178 = param_1[0x19];
    uStack_180 = param_1[0x18];
    uStack_478 = param_1[0xb];
    uStack_480 = param_1[10];
    uStack_1d8 = param_1[0xd];
    uStack_1e0 = param_1[0xc];
    uStack_488 = param_1[9];
    uStack_490 = param_1[8];
    uStack_1e8 = param_1[0xb];
    uStack_1f0 = param_1[10];
    uStack_468 = param_1[0xd];
    uStack_470 = param_1[0xc];
    uStack_1c8 = param_1[0xf];
    uStack_1d0 = param_1[0xe];
    uStack_458 = param_1[0xf];
    uStack_460 = param_1[0xe];
    uStack_1b8 = param_1[0x11];
    uStack_1c0 = param_1[0x10];
    uStack_208 = param_1[7];
    uStack_210 = param_1[6];
    uStack_1f8 = param_1[9];
    uStack_200 = param_1[8];
    uStack_498 = param_1[7];
    uStack_4a0 = param_1[6];
    uStack_320 = param_2[0x1b];
    uStack_328 = param_2[0x1a];
    uStack_238 = param_2[0x1d];
    uStack_240 = param_2[0x1c];
    uStack_330 = param_2[0x19];
    uStack_338 = param_2[0x18];
    uStack_248 = param_2[0x1b];
    uStack_250 = param_2[0x1a];
    uStack_310 = param_2[0x1d];
    uStack_318 = param_2[0x1c];
    uStack_228 = param_2[0x1f];
    uStack_230 = param_2[0x1e];
    uStack_360 = param_2[0x13];
    uStack_368 = param_2[0x12];
    uStack_278 = param_2[0x15];
    uStack_280 = param_2[0x14];
    uStack_370 = param_2[0x11];
    uStack_378 = param_2[0x10];
    uStack_288 = param_2[0x13];
    uStack_290 = param_2[0x12];
    uStack_350 = param_2[0x15];
    uStack_358 = param_2[0x14];
    uStack_268 = param_2[0x17];
    uStack_270 = param_2[0x16];
    uStack_340 = param_2[0x17];
    uStack_348 = param_2[0x16];
    uStack_258 = param_2[0x19];
    uStack_260 = param_2[0x18];
    uStack_3a0 = param_2[0xb];
    uStack_3a8 = param_2[10];
    uStack_2b8 = param_2[0xd];
    uStack_2c0 = param_2[0xc];
    uStack_3b0 = param_2[9];
    uStack_3b8 = param_2[8];
    uStack_2c8 = param_2[0xb];
    uStack_2d0 = param_2[10];
    uStack_390 = param_2[0xd];
    uStack_398 = param_2[0xc];
    uStack_2a8 = param_2[0xf];
    uStack_2b0 = param_2[0xe];
    uStack_380 = param_2[0xf];
    uStack_388 = param_2[0xe];
    uStack_2a0 = param_2[0x10];
    uStack_298 = param_2[0x11];
    uStack_2e8 = param_2[7];
    uStack_2f0 = param_2[6];
    uStack_2e0 = param_2[8];
    uStack_2d8 = param_2[9];
    uStack_3c0 = param_2[7];
    uStack_3c8 = param_2[6];
    uStack_3d8 = param_1[0x1f];
    uStack_3e0 = param_1[0x1e];
    iVar2 = (int)&uStack_3c8;
    uStack_300 = param_2[0x1f];
    uStack_308 = param_2[0x1e];
    uStack_140 = param_1[0x20];
    uStack_220 = param_2[0x20];
    uStack_3d0 = param_1[0x20];
    uStack_2f8 = param_2[0x20];
    iVar1 = (int)&uStack_4a0;
    func_0x000100d6cdb4();
    if (iVar1 == 1) {
      func_0x000100d6cdb4();
      if (iVar2 == 1) {
        uStack_5a8 = uStack_3f8;
        uStack_5b0 = uStack_400;
        uStack_598 = uStack_3e8;
        uStack_5a0 = uStack_3f0;
        uStack_588 = uStack_3d8;
        uStack_590 = uStack_3e0;
        uStack_580 = uStack_3d0;
        uStack_5e8 = uStack_438;
        uStack_5f0 = uStack_440;
        uStack_5d8 = uStack_428;
        uStack_5e0 = uStack_430;
        uStack_5c8 = uStack_418;
        uStack_5d0 = uStack_420;
        uStack_5b8 = uStack_408;
        uStack_5c0 = uStack_410;
        uStack_628 = uStack_478;
        uStack_630 = uStack_480;
        uStack_618 = uStack_468;
        uStack_620 = uStack_470;
        uStack_608 = uStack_458;
        uStack_610 = uStack_460;
        uStack_5f8 = uStack_448;
        uStack_600 = uStack_450;
        uStack_648 = uStack_498;
        uStack_650 = uStack_4a0;
        uStack_638 = uStack_488;
        uStack_640 = uStack_490;
        FUN_103d0f578(&uStack_210,&uStack_130,0x1130024e0,&UNK_10dc7ad98);
        FUN_103d0f578(&uStack_2f0,&uStack_130,0x1130024e0,&UNK_10dc7ad98);
        FUN_103d1ccb8(&uStack_650,0x1130024e0,&UNK_10dc7ad98);
LAB_103d11088:
        uVar4 = param_1[2];
        if (((uVar4 == param_2[2]) && (param_1[3] == param_2[3])) ||
           (func_0x000107c605b8(), (uVar4 & 1) != 0)) {
          uVar4 = param_1[4];
          func_0x000100e25fcc(uVar4,param_1[5],param_2[4],param_2[5]);
          uVar3 = (uint)uVar4;
          goto LAB_103d110b8;
        }
      }
      else {
LAB_103d10ef0:
        func_0x000107c610b4(&uStack_650,&uStack_4a0,0x1b0);
        FUN_103d0f578(&uStack_210,&uStack_130,0x1130024e0,&UNK_10dc7ad98);
        FUN_103d0f578(&uStack_2f0,&uStack_130,0x1130024e0,&UNK_10dc7ad98);
        FUN_103d1ccb8(&uStack_650,0x1130024e8,&UNK_10dc7ada0);
      }
    }
    else {
      uStack_688 = uStack_3f8;
      uStack_690 = uStack_400;
      uStack_678 = uStack_3e8;
      uStack_680 = uStack_3f0;
      uStack_668 = uStack_3d8;
      uStack_670 = uStack_3e0;
      uStack_660 = uStack_3d0;
      uStack_6c8 = uStack_438;
      uStack_6d0 = uStack_440;
      uStack_6b8 = uStack_428;
      uStack_6c0 = uStack_430;
      uStack_6a8 = uStack_418;
      uStack_6b0 = uStack_420;
      uStack_698 = uStack_408;
      uStack_6a0 = uStack_410;
      uStack_708 = uStack_478;
      uStack_710 = uStack_480;
      uStack_6f8 = uStack_468;
      uStack_700 = uStack_470;
      uStack_6e8 = uStack_458;
      uStack_6f0 = uStack_460;
      uStack_6d8 = uStack_448;
      uStack_6e0 = uStack_450;
      uStack_728 = uStack_498;
      uStack_730 = uStack_4a0;
      uStack_718 = uStack_488;
      uStack_720 = uStack_490;
      func_0x000100d6cdb4();
      if (iVar2 == 1) goto LAB_103d10ef0;
      uStack_768 = uStack_320;
      uStack_770 = uStack_328;
      uStack_758 = uStack_310;
      uStack_760 = uStack_318;
      uStack_748 = uStack_300;
      uStack_750 = uStack_308;
      uStack_7a8 = uStack_360;
      uStack_7b0 = uStack_368;
      uStack_798 = uStack_350;
      uStack_7a0 = uStack_358;
      uStack_788 = uStack_340;
      uStack_790 = uStack_348;
      uStack_778 = uStack_330;
      uStack_780 = uStack_338;
      uStack_7e8 = uStack_3a0;
      uStack_7f0 = uStack_3a8;
      uStack_7d8 = uStack_390;
      uStack_7e0 = uStack_398;
      uStack_7c8 = uStack_380;
      uStack_7d0 = uStack_388;
      uStack_7b8 = uStack_370;
      uStack_7c0 = uStack_378;
      uStack_808 = uStack_3c0;
      uStack_810 = uStack_3c8;
      uStack_7f8 = uStack_3b0;
      uStack_800 = uStack_3b8;
      uStack_5a8 = uStack_320;
      uStack_5b0 = uStack_328;
      uStack_598 = uStack_310;
      uStack_5a0 = uStack_318;
      uStack_588 = uStack_300;
      uStack_590 = uStack_308;
      uStack_5e8 = uStack_360;
      uStack_5f0 = uStack_368;
      uStack_5d8 = uStack_350;
      uStack_5e0 = uStack_358;
      uStack_5c8 = uStack_340;
      uStack_5d0 = uStack_348;
      uStack_5b8 = uStack_330;
      uStack_5c0 = uStack_338;
      uStack_628 = uStack_3a0;
      uStack_630 = uStack_3a8;
      uStack_618 = uStack_390;
      uStack_620 = uStack_398;
      uStack_608 = uStack_380;
      uStack_610 = uStack_388;
      uStack_5f8 = uStack_370;
      uStack_600 = uStack_378;
      uStack_740 = uStack_2f8;
      uStack_580 = uStack_2f8;
      uStack_648 = uStack_3c0;
      uStack_650 = uStack_3c8;
      uStack_638 = uStack_3b0;
      uStack_640 = uStack_3b8;
      uStack_88 = uStack_688;
      uStack_90 = uStack_690;
      uStack_78 = uStack_678;
      uStack_80 = uStack_680;
      uStack_68 = uStack_668;
      uStack_70 = uStack_670;
      uStack_60 = uStack_660;
      uStack_c8 = uStack_6c8;
      uStack_d0 = uStack_6d0;
      uStack_b8 = uStack_6b8;
      uStack_c0 = uStack_6c0;
      uStack_a8 = uStack_6a8;
      uStack_b0 = uStack_6b0;
      uStack_98 = uStack_698;
      uStack_a0 = uStack_6a0;
      uStack_108 = uStack_708;
      uStack_110 = uStack_710;
      uStack_f8 = uStack_6f8;
      uStack_100 = uStack_700;
      uStack_e8 = uStack_6e8;
      uStack_f0 = uStack_6f0;
      uStack_d8 = uStack_6d8;
      uStack_e0 = uStack_6e0;
      uStack_128 = uStack_728;
      uStack_130 = uStack_730;
      uStack_118 = uStack_718;
      uStack_120 = uStack_720;
      FUN_103d0f578(&uStack_210,auStack_8e8,0x1130024e0,&UNK_10dc7ad98);
      FUN_103d0f578(&uStack_2f0,auStack_8e8,0x1130024e0,&UNK_10dc7ad98);
      puVar5 = &uStack_130;
      FUN_103d0e658(puVar5,&uStack_650);
      FUN_103d1ccb8(&uStack_810,0x1130024e0,&UNK_10dc7ad98);
      FUN_103d1ccb8(&uStack_4a0,0x1130024e0,&UNK_10dc7ad98);
      if (((ulong)puVar5 & 1) != 0) goto LAB_103d11088;
    }
  }
  uVar3 = 0;
LAB_103d110b8:
  return uVar3 & 1;
}



/* Entry: 103d110d8; end: 103d11197;  */

void FUN_103d110d8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130027b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7bc20;
  func_0x000107c61520(&UNK_10dc7bc20,&UNK_1106ff2b0);
  puRam00000001130027b0 = puVar1;
  return;
}



/* Entry: 103d11198; end: 103d112cf;  */

/* WARNING: Possible PIC construction at 0x000103d111d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d111d4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d11198(undefined8 *param_1,undefined8 *param_2,code *param_3)

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
  if (pbVar12 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar15,pbVar16,pbVar17,0);
    return pbVar12;
  }
  if (*(char *)(param_2 + 3) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d11200. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dc7ad1a)[param_2[2]] * 4 + 0x103d11204))();
    return pbVar12;
  }
  if (param_1[2] == param_2[2]) {
    uVar13 = param_1[4];
    (*param_3)(uVar13,param_2[4]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[5];
      pbVar25 = (byte *)param_1[6];
      lVar24 = param_2[5];
      uVar13 = param_2[6];
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
              (uVar13 >> 0x3e < 3)) || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
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
  }
  return (byte *)0x0;
}



/* Entry: 103d112d0; end: 103d11753;  */

ulong FUN_103d112d0(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong auStack_f8 [3];
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d11344. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc7ad26)[param_2[2]] * 4 + 0x103d11348))();
      return uVar2;
    }
    if (param_1[2] == param_2[2]) {
      uVar2 = param_1[7];
      uVar11 = param_1[6];
      uVar9 = param_1[8];
      uVar13 = param_2[7];
      uVar12 = param_2[6];
      uVar10 = param_2[8];
      uStack_a0 = uVar12;
      uStack_98 = uVar13;
      uStack_90 = uVar10;
      uStack_80 = uVar11;
      uStack_78 = uVar2;
      uStack_70 = uVar9;
      if (uVar9 == 0) {
        if (uVar10 != 0) goto LAB_103d113d0;
        FUN_103d0f578(&uStack_80,&uStack_c0,0x113002500,&UNK_10dc7ada8);
        FUN_103d0f578(&uStack_a0,&uStack_c0,0x113002500,&UNK_10dc7ada8);
        func_0x000103d0ebc8(uVar11,uVar2,0);
LAB_103d114d4:
        uVar2 = param_1[10];
        uVar11 = param_1[9];
        uVar9 = param_1[0xb];
        uVar13 = param_2[10];
        uVar12 = param_2[9];
        uVar10 = param_2[0xb];
        uStack_e0 = uVar12;
        uStack_d8 = uVar13;
        uStack_d0 = uVar10;
        uStack_c0 = uVar11;
        uStack_b8 = uVar2;
        uStack_b0 = uVar9;
        if (uVar9 == 0) {
          if (uVar10 != 0) goto LAB_103d1154c;
          FUN_103d0f578(&uStack_c0,auStack_f8,0x113002500,&UNK_10dc7ada8);
          FUN_103d0f578(&uStack_e0,auStack_f8,0x113002500,&UNK_10dc7ada8);
          func_0x000103d0ebc8(uVar11,uVar2,0);
        }
        else {
          if (uVar10 == 0) {
LAB_103d1154c:
            FUN_103d0f578(&uStack_c0,auStack_f8,0x113002500,&UNK_10dc7ada8);
            puVar5 = &uStack_e0;
            puVar7 = auStack_f8;
            uVar8 = uVar10;
            uVar4 = uVar13;
            uVar6 = uVar12;
            goto LAB_103d11578;
          }
          if (uVar9 == uVar10) {
            FUN_103d0f578(&uStack_c0,auStack_f8,0x113002500,&UNK_10dc7ada8);
            FUN_103d0f578(&uStack_e0,auStack_f8,0x113002500,&UNK_10dc7ada8);
          }
          else {
            FUN_103d0f578(&uStack_c0,auStack_f8,0x113002500,&UNK_10dc7ada8);
            FUN_103d0f578(&uStack_e0,auStack_f8,0x113002500,&UNK_10dc7ada8);
            func_0x000107c6157c(uVar9);
            func_0x000107c6157c(uVar10);
            uVar3 = uVar9;
            FUN_103d02ab0(uVar9,uVar10);
            func_0x000107c61574(uVar10);
            func_0x000107c61574(uVar9);
            uVar4 = uVar2;
            uVar6 = uVar11;
            uVar8 = uVar9;
            if ((uVar3 & 1) == 0) goto LAB_103d116dc;
          }
          uVar4 = uVar11;
          func_0x000100e25fcc(uVar11,uVar2,uVar12,uVar13);
          func_0x000103d0ebc8(uVar12,uVar13,uVar10);
          func_0x000103d0ebc8(uVar11,uVar2,uVar9);
          if ((uVar4 & 1) == 0) goto LAB_103d115a4;
        }
        uVar2 = param_1[4];
        func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)uVar2;
        goto LAB_103d115a8;
      }
      if (uVar10 == 0) {
LAB_103d113d0:
        FUN_103d0f578(&uStack_80,&uStack_c0,0x113002500,&UNK_10dc7ada8);
        puVar5 = &uStack_a0;
        puVar7 = &uStack_c0;
        uVar8 = uVar10;
        uVar4 = uVar13;
        uVar6 = uVar12;
LAB_103d11578:
        FUN_103d0f578(puVar5,puVar7,0x113002500,&UNK_10dc7ada8);
        func_0x000103d0ebc8(uVar11,uVar2,uVar9);
      }
      else {
        if (uVar9 == uVar10) {
          FUN_103d0f578(&uStack_80,&uStack_c0,0x113002500,&UNK_10dc7ada8);
          FUN_103d0f578(&uStack_a0,&uStack_c0,0x113002500,&UNK_10dc7ada8);
LAB_103d1144c:
          uVar4 = uVar11;
          func_0x000100e25fcc(uVar11,uVar2,uVar12,uVar13);
          func_0x000103d0ebc8(uVar12,uVar13,uVar10);
          func_0x000103d0ebc8(uVar11,uVar2,uVar9);
          if ((uVar4 & 1) == 0) goto LAB_103d115a4;
          goto LAB_103d114d4;
        }
        FUN_103d0f578(&uStack_80,&uStack_c0,0x113002500,&UNK_10dc7ada8);
        FUN_103d0f578(&uStack_a0,&uStack_c0,0x113002500,&UNK_10dc7ada8);
        func_0x000107c6157c(uVar9);
        func_0x000107c6157c(uVar10);
        uVar3 = uVar9;
        FUN_103d02ab0(uVar9,uVar10);
        func_0x000107c61574(uVar10);
        func_0x000107c61574(uVar9);
        uVar4 = uVar2;
        uVar6 = uVar11;
        uVar8 = uVar9;
        if ((uVar3 & 1) != 0) goto LAB_103d1144c;
LAB_103d116dc:
        func_0x000103d0ebc8(uVar12,uVar13,uVar10);
      }
      func_0x000103d0ebc8(uVar6,uVar4,uVar8);
    }
  }
LAB_103d115a4:
  uVar1 = 0;
LAB_103d115a8:
  return (ulong)(uVar1 & 1);
}



/* Entry: 103d11754; end: 103d11793;  */

void FUN_103d11754(void)

{
  undefined *puVar1;
  
  if (puRam00000001130027e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7bea8;
  func_0x000107c61520(&UNK_10dc7bea8,&UNK_1106ff450);
  puRam00000001130027e0 = puVar1;
  return;
}



/* Entry: 103d11794; end: 103d119e3;  */

uint FUN_103d11794(ulong *param_1,ulong *param_2)

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
  if (((uVar2 != *param_2 || param_1[1] != param_2[1]) && (func_0x000107c605b8(), (uVar2 & 1) == 0))
     || ((uVar2 = param_1[2], uVar2 != param_2[2] || param_1[3] != param_2[3] &&
         (func_0x000107c605b8(), (uVar2 & 1) == 0)))) {
LAB_103d118c8:
    uVar1 = 0;
    goto LAB_103d119c0;
  }
  uVar5 = param_1[7];
  uVar4 = param_1[6];
  uVar9 = param_1[9];
  uVar7 = param_1[8];
  uVar6 = param_2[7];
  uVar2 = param_2[6];
  uVar10 = param_2[9];
  uVar8 = param_2[8];
  uStack_a0 = uVar2;
  uStack_98 = uVar6;
  uStack_90 = uVar8;
  uStack_88 = uVar10;
  uStack_80 = uVar4;
  uStack_78 = uVar5;
  uStack_70 = uVar7;
  uStack_68 = uVar9;
  if (uVar4 == 0) {
    if (uVar2 == 0) {
      FUN_103d0f578(&uStack_80,auStack_c0,0x1130024d8,&UNK_10dc7ad88);
      FUN_103d0f578(&uStack_a0,auStack_c0,0x1130024d8,&UNK_10dc7ad88);
      func_0x000103d0e014(0,uVar5,uVar7,uVar9);
LAB_103d119b4:
      uVar2 = param_1[4];
      func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
      uVar1 = (uint)uVar2;
      goto LAB_103d119c0;
    }
LAB_103d118d4:
    FUN_103d0f578(&uStack_80,auStack_c0,0x1130024d8,&UNK_10dc7ad88);
    FUN_103d0f578(&uStack_a0,auStack_c0,0x1130024d8,&UNK_10dc7ad88);
    func_0x000103d0e014(uVar4,uVar5,uVar7,uVar9);
  }
  else {
    if (uVar2 == 0) goto LAB_103d118d4;
    FUN_103d0f578(&uStack_80,auStack_c0,0x1130024d8,&UNK_10dc7ad88);
    FUN_103d0f578(&uStack_a0,auStack_c0,0x1130024d8,&UNK_10dc7ad88);
    uVar3 = uVar4;
    FUN_103d0d0a8(uVar4,uVar2);
    if (((uVar3 & 1) != 0) && ((((uint)uVar6 ^ (uint)uVar5) & 1) == 0)) {
      uVar3 = uVar7;
      func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
      func_0x000103d0e014(uVar2,uVar6,uVar8,uVar10);
      func_0x000103d0e014(uVar4,uVar5,uVar7,uVar9);
      if ((uVar3 & 1) != 0) goto LAB_103d119b4;
      goto LAB_103d118c8;
    }
    func_0x000103d0e014(uVar2,uVar6,uVar8,uVar10);
    uVar2 = uVar4;
    uVar6 = uVar5;
    uVar8 = uVar7;
    uVar10 = uVar9;
  }
  func_0x000103d0e014(uVar2,uVar6,uVar8,uVar10);
  uVar1 = 0;
LAB_103d119c0:
  return uVar1 & 1;
}



/* Entry: 103d119e4; end: 103d11ca3;  */

void FUN_103d119e4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130027f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7bf80;
  func_0x000107c61520(&UNK_10dc7bf80,&UNK_1106ff4e0);
  puRam00000001130027f0 = puVar1;
  return;
}



/* Entry: 103d11ca4; end: 103d11d1f;  */

/* WARNING: Possible PIC construction at 0x000103d11cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d11cd8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d11ca4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103d11d20; end: 103d11d5f;  */

void FUN_103d11d20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7c7f0;
  func_0x000107c61520(&UNK_10dc7c7f0,&UNK_1106ffa28);
  puRam0000000113002898 = puVar1;
  return;
}



/* Entry: 103d11d60; end: 103d11eeb;  */

/* WARNING: Possible PIC construction at 0x000103d11d90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d11e28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d11e2c) */
/* WARNING: Removing unreachable block (ram,0x000103d11d94) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d11d60(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar12 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar13 = (byte *)param_2[1];
  if (pbVar12 != pbVar17 || pbVar16 != pbVar13) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar16,pbVar17,pbVar13,0);
    return pbVar12;
  }
  pbVar13 = (byte *)param_1[2];
  if ((pbVar13 == (byte *)param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), ((ulong)pbVar13 & 1) != 0)) {
    if (*(char *)(param_2 + 5) == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000103d11de0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)(byte)(&UNK_10dc7ad32)[param_2[4]] * 4 + 0x103d11de4))();
      return pbVar13;
    }
    if (param_1[4] == param_2[4]) {
      uVar14 = param_1[6];
      func_0x000100d6bfdc(uVar14,*(undefined1 *)(param_1 + 7),param_2[6],
                          *(undefined1 *)(param_2 + 7));
      if ((uVar14 & 1) != 0) {
        pbVar12 = (byte *)param_1[8];
        pbVar16 = (byte *)param_1[9];
        pbVar17 = (byte *)param_2[8];
        pbVar13 = (byte *)param_2[9];
        if ((pbVar12 != pbVar17) || (pbVar16 != pbVar13)) goto code_r0x000107c605b8;
        uVar14 = param_1[10];
        func_0x000100d6bfdc(uVar14,*(undefined1 *)(param_1 + 0xb),param_2[10],
                            *(undefined1 *)(param_2 + 0xb));
        if ((uVar14 & 1) != 0) {
          pbVar10 = (byte *)param_1[0xc];
          pbVar25 = (byte *)param_1[0xd];
          lVar24 = param_2[0xc];
          uVar14 = param_2[0xd];
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
                uVar22 = uVar14 >> 0x30 & 0xff;
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
                    pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto code_r0x000100e26260;
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
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
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
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar24 = *(long *)pbVar15;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar12 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = *(byte **)(pbVar15 + 0x10);
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar24,uVar11);
                if (((ulong)pbVar12 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar12 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 == pbVar17) && (pbVar25 == pbVar13)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar13 = *(byte **)(pbVar15 + 8);
                lVar24 = *(long *)(pbVar15 + 0x18);
                if ((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(lVar24);
                    func_0x000107c61174();
                    pbVar13 = pbVar23;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar23);
                    func_0x000107c61170(lVar24);
                    pbVar23 = pbVar13;
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
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar13 = *(byte **)(pbVar15 + 8);
                if (((pbVar12 == pbVar17) && (pbVar10 == pbVar13)) &&
                   (pbVar12 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar13 = *(byte **)(pbVar15 + 0x18),
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar12 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar13 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)(pbVar15 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar13 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar13 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar13)) goto code_r0x000107c605b8;
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
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
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
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar26 = *(long *)pbVar15;
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
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d11eec; end: 103d1246b;  */

void FUN_103d11eec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130028a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7c8c8;
  func_0x000107c61520(&UNK_10dc7c8c8,&UNK_1106ffab0);
  puRam00000001130028a8 = puVar1;
  return;
}



/* Entry: 103d1246c; end: 103d1256f;  */

/* WARNING: Possible PIC construction at 0x000103d1249c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d124a0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d1246c(undefined8 *param_1,undefined8 *param_2)

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
  uVar13 = (ulong)(param_1[2] != 0);
  if (*(char *)(param_1 + 3) != '\x01') {
    uVar13 = param_1[2];
  }
  if (*(char *)(param_2 + 3) == '\x01') {
    if (param_2[2] == 0) {
      if (uVar13 != 0) {
        return (byte *)0x0;
      }
    }
    else if (uVar13 != 1) {
      return (byte *)0x0;
    }
  }
  else if (uVar13 != param_2[2]) {
    return (byte *)0x0;
  }
  if (((((double)param_1[4] == (double)param_2[4]) && (param_1[5] == param_2[5])) &&
      ((double)param_1[6] == (double)param_2[6])) &&
     (((double)param_1[7] == (double)param_2[7] && ((double)param_1[8] == (double)param_2[8])))) {
    uVar13 = param_1[9];
    FUN_103d0c368(uVar13,param_2[9]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[10];
      pbVar25 = (byte *)param_1[0xb];
      lVar24 = param_2[10];
      uVar13 = param_2[0xb];
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
          if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))))
             ) goto joined_r0x000100e26170;
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
                                                                               bVar27 | auVar43[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                         CONCAT11(bVar28 | auVar43[1
                                                  ],bVar27 | auVar43[0])))))));
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
  }
  return (byte *)0x0;
}



/* Entry: 103d12570; end: 103d126af;  */

void FUN_103d12570(void)

{
  undefined *puVar1;
  
  if (puRam00000001130029e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7d668;
  func_0x000107c61520(&UNK_10dc7d668,&UNK_110700520);
  puRam00000001130029e8 = puVar1;
  return;
}



/* Entry: 103d126b0; end: 103d126c3;  */

void FUN_103d126b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d126c4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d12704)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d126c4; end: 103d1276f;  */

void FUN_103d126c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7ae78;
  func_0x000107c61520(&UNK_10dc7ae78,&UNK_1106febe0);
  puRam0000000113002a30 = puVar1;
  return;
}



/* Entry: 103d12770; end: 103d12773;  */

void FUN_103d12770(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7aeb8;
  func_0x000107c61520(&UNK_10dc7aeb8,&UNK_1106febe0);
  puRam0000000113002a50 = puVar1;
  return;
}



/* Entry: 103d12774; end: 103d127b3;  */

void FUN_103d12774(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7aeb8;
  func_0x000107c61520(&UNK_10dc7aeb8,&UNK_1106febe0);
  puRam0000000113002a50 = puVar1;
  return;
}



/* Entry: 103d127b4; end: 103d127c7;  */

void FUN_103d127b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d127c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d12808)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d127c8; end: 103d12873;  */

void FUN_103d127c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7af78;
  func_0x000107c61520(&UNK_10dc7af78,&UNK_1106fec70);
  puRam0000000113002a58 = puVar1;
  return;
}



/* Entry: 103d12874; end: 103d12877;  */

void FUN_103d12874(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7afb8;
  func_0x000107c61520(&UNK_10dc7afb8,&UNK_1106fec70);
  puRam0000000113002a78 = puVar1;
  return;
}



/* Entry: 103d12878; end: 103d128b7;  */

void FUN_103d12878(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7afb8;
  func_0x000107c61520(&UNK_10dc7afb8,&UNK_1106fec70);
  puRam0000000113002a78 = puVar1;
  return;
}



/* Entry: 103d128b8; end: 103d128cb;  */

void FUN_103d128b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d128cc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d1290c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d128cc; end: 103d12977;  */

void FUN_103d128cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113002a80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc7b078;
  func_0x000107c61520(&UNK_10dc7b078,&UNK_1106fed00);
  puRam0000000113002a80 = puVar1;
  return;
}



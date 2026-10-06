/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10172c18c; end: 10172c20b;  */

uint FUN_10172c18c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101731ba0(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10172c20c; end: 10172c253;  */

void FUN_10172c20c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d984ad0,0x16,2);
  uRam0000000113803260 = uStack_38;
  uRam0000000113803258 = uStack_40;
  uRam0000000113803270 = uStack_28;
  uRam0000000113803268 = uStack_30;
  uRam0000000113803280 = uStack_18;
  uRam0000000113803278 = uStack_20;
  return;
}



/* Entry: 10172c254; end: 10172c28b;  */

undefined1  [16] FUN_10172c254(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb9a90;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 10172c28c; end: 10172c2c3;  */

uint FUN_10172c28c(long param_1,long param_2)

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
  func_0x000101738c2c();
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



/* Entry: 10172c2c4; end: 10172c363;  */

/* WARNING: Possible PIC construction at 0x00010172c310: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172c320: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172c314) */
/* WARNING: Removing unreachable block (ram,0x00010172c324) */

void FUN_10172c2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc49f0 != -1) {
    func_0x000107c61568(0x112dc49f0,FUN_10172c20c);
  }
  uVar5 = uRam0000000113803280;
  uVar4 = uRam0000000113803278;
  uVar3 = uRam0000000113803270;
  uVar2 = uRam0000000113803268;
  uVar1 = uRam0000000113803260;
  *param_1 = uRam0000000113803258;
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



/* Entry: 10172c364; end: 10172c377;  */

void FUN_10172c364(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc51e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc51e0,&UNK_10d984948);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172c378; end: 10172c3af;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10172c378(undefined8 *param_1,undefined8 param_2)

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
  FUN_10171f0f4();
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



/* Entry: 10172c3b0; end: 10172c3f7;  */

void FUN_10172c3b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d984ab0,0x1c,2);
  uRam0000000113803290 = uStack_38;
  uRam0000000113803288 = uStack_40;
  uRam00000001138032a0 = uStack_28;
  uRam0000000113803298 = uStack_30;
  uRam00000001138032b0 = uStack_18;
  uRam00000001138032a8 = uStack_20;
  return;
}



/* Entry: 10172c3f8; end: 10172c4c7;  */

void FUN_10172c3f8(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      pcVar4 = *(code **)(param_3 + 0x1a0);
      (*param_4)();
      (*pcVar4)();
    }
    else if (lVar1 == 2) {
      (**(code **)(param_3 + 0x150))(unaff_x20 + 8,param_2,param_3);
    }
  }
  return;
}



/* Entry: 10172c4c8; end: 10172c58b;  */

void FUN_10172c4c8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

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
    (*param_4)();
    (*pcVar5)(lVar4,1,param_5,uVar3,param_2,param_3);
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



/* Entry: 10172c58c; end: 10172c5c3;  */

undefined1  [16] FUN_10172c58c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb9ab0;
  auVar1._0_8_ = 0xd000000000000020;
  return auVar1;
}



/* Entry: 10172c5c4; end: 10172c60b;  */

void FUN_10172c5c4(void)

{
  FUN_10172c3f8();
  return;
}



/* Entry: 10172c60c; end: 10172c643;  */

uint FUN_10172c60c(long param_1,long param_2)

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
  func_0x000101738bec();
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



/* Entry: 10172c644; end: 10172c6f3;  */

/* WARNING: Possible PIC construction at 0x00010172c6a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010172c6a4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10172c644(undefined8 *param_1)

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
  func_0x00010172f60c(uVar18,*param_1);
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



/* Entry: 10172c6f4; end: 10172c793;  */

/* WARNING: Possible PIC construction at 0x00010172c740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172c750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172c744) */
/* WARNING: Removing unreachable block (ram,0x00010172c754) */

void FUN_10172c6f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a00 != -1) {
    func_0x000107c61568(0x112dc4a00,FUN_10172c3b0);
  }
  uVar5 = uRam00000001138032b0;
  uVar4 = uRam00000001138032a8;
  uVar3 = uRam00000001138032a0;
  uVar2 = uRam0000000113803298;
  uVar1 = uRam0000000113803290;
  *param_1 = uRam0000000113803288;
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



/* Entry: 10172c794; end: 10172c7a7;  */

void FUN_10172c794(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc51d0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc51d0,&UNK_10d984940);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172c7a8; end: 10172c7db;  */

void FUN_10172c7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10172c7dc; end: 10172c8ef;  */

void FUN_10172c7dc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10172c8f0; end: 10172c99b;  */

/* WARNING: Possible PIC construction at 0x00010172c950: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010172c954) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10172c8f0(ulong *param_1,undefined8 *param_2)

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
  func_0x00010172f60c(uVar18,*param_2);
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



/* Entry: 10172c99c; end: 10172c9e3;  */

void FUN_10172c99c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d984a90,0x16,2);
  uRam00000001138032c0 = uStack_38;
  uRam00000001138032b8 = uStack_40;
  uRam00000001138032d0 = uStack_28;
  uRam00000001138032c8 = uStack_30;
  uRam00000001138032e0 = uStack_18;
  uRam00000001138032d8 = uStack_20;
  return;
}



/* Entry: 10172c9e4; end: 10172ca1b;  */

undefined1  [16] FUN_10172c9e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb9ae0;
  auVar1._0_8_ = 0xd00000000000001e;
  return auVar1;
}



/* Entry: 10172ca1c; end: 10172ca53;  */

uint FUN_10172ca1c(long param_1,long param_2)

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
  func_0x000101738bac();
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



/* Entry: 10172ca54; end: 10172caf3;  */

/* WARNING: Possible PIC construction at 0x00010172caa0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172cab0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172caa4) */
/* WARNING: Removing unreachable block (ram,0x00010172cab4) */

void FUN_10172ca54(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a18 != -1) {
    func_0x000107c61568(0x112dc4a18,FUN_10172c99c);
  }
  uVar5 = uRam00000001138032e0;
  uVar4 = uRam00000001138032d8;
  uVar3 = uRam00000001138032d0;
  uVar2 = uRam00000001138032c8;
  uVar1 = uRam00000001138032c0;
  *param_1 = uRam00000001138032b8;
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



/* Entry: 10172caf4; end: 10172cb07;  */

void FUN_10172caf4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc51c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc51c0,&UNK_10d984938);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172cb08; end: 10172cb3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10172cb08(undefined8 *param_1,undefined8 param_2)

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
  func_0x00010171f3d0();
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



/* Entry: 10172cb40; end: 10172cb8b;  */

void FUN_10172cb40(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam00000001138032f0 = uStack_38;
  uRam00000001138032e8 = uStack_40;
  uRam0000000113803300 = uStack_28;
  uRam00000001138032f8 = uStack_30;
  uRam0000000113803310 = uStack_18;
  uRam0000000113803308 = uStack_20;
  return;
}



/* Entry: 10172cb8c; end: 10172cbc3;  */

undefined1  [16] FUN_10172cb8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb9b00;
  auVar1._0_8_ = 0xd00000000000001f;
  return auVar1;
}



/* Entry: 10172cbc4; end: 10172cbfb;  */

uint FUN_10172cbc4(long param_1,long param_2)

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
  func_0x000101738b6c();
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



/* Entry: 10172cbfc; end: 10172cc9b;  */

/* WARNING: Possible PIC construction at 0x00010172cc48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172cc58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010172cc5c) */

void FUN_10172cbfc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a28 != -1) {
    func_0x000107c61568(0x112dc4a28,FUN_10172cb40);
  }
  uVar5 = uRam0000000113803310;
  uVar4 = uRam0000000113803308;
  uVar3 = uRam0000000113803300;
  uVar2 = uRam00000001138032f8;
  uVar1 = uRam00000001138032f0;
  *param_1 = uRam00000001138032e8;
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



/* Entry: 10172cc9c; end: 10172ccaf;  */

void FUN_10172cc9c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc51b0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc51b0,&UNK_10d984930);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172ccb0; end: 10172cce7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10172ccb0(undefined8 *param_1,undefined8 param_2)

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
  func_0x00010171f410();
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



/* Entry: 10172cce8; end: 10172cd2f;  */

void FUN_10172cce8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d984a90,0x16,2);
  uRam0000000113803320 = uStack_38;
  uRam0000000113803318 = uStack_40;
  uRam0000000113803330 = uStack_28;
  uRam0000000113803328 = uStack_30;
  uRam0000000113803340 = uStack_18;
  uRam0000000113803338 = uStack_20;
  return;
}



/* Entry: 10172cd30; end: 10172cdc7;  */

void FUN_10172cd30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10172cd84:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010172cda0;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_10172cd6c;
code_r0x00010172cda0:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_10172cd6c:
    (*pcVar3)();
  }
  goto LAB_10172cd84;
}



/* Entry: 10172cdc8; end: 10172ce6b;  */

void FUN_10172cdc8(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 10172ce6c; end: 10172cea3;  */

undefined1  [16] FUN_10172ce6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb9b20;
  auVar1._0_8_ = 0xd000000000000021;
  return auVar1;
}



/* Entry: 10172cea4; end: 10172cedb;  */

uint FUN_10172cea4(long param_1,long param_2)

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
  func_0x000101738b2c();
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



/* Entry: 10172cedc; end: 10172cf7b;  */

/* WARNING: Possible PIC construction at 0x00010172cf28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172cf38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172cf2c) */
/* WARNING: Removing unreachable block (ram,0x00010172cf3c) */

void FUN_10172cedc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a38 != -1) {
    func_0x000107c61568(0x112dc4a38,FUN_10172cce8);
  }
  uVar5 = uRam0000000113803340;
  uVar4 = uRam0000000113803338;
  uVar3 = uRam0000000113803330;
  uVar2 = uRam0000000113803328;
  uVar1 = uRam0000000113803320;
  *param_1 = uRam0000000113803318;
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



/* Entry: 10172cf7c; end: 10172cf8f;  */

void FUN_10172cf7c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc51a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc51a0,&UNK_10d984928);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172cf90; end: 10172cfc3;  */

void FUN_10172cf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10172cfc4; end: 10172d0d7;  */

void FUN_10172cfc4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10172d0d8; end: 10172d10f;  */

void FUN_10172d0d8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113803350 = uStack_38;
  uRam0000000113803348 = uStack_40;
  uRam0000000113803360 = uStack_28;
  uRam0000000113803358 = uStack_30;
  uRam0000000113803370 = uStack_18;
  uRam0000000113803368 = uStack_20;
  return;
}



/* Entry: 10172d110; end: 10172d15b;  */

void FUN_10172d110(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x21;
  code *pcVar2;
  
  pcVar2 = *(code **)(param_3 + 0x10);
  do {
    lVar1 = param_3;
    (*pcVar2)(param_2);
    if (unaff_x21 != 0) {
      return;
    }
  } while (((uint)lVar1 & 0xff) != 1);
  return;
}



/* Entry: 10172d15c; end: 10172d193;  */

undefined1  [16] FUN_10172d15c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb9b50;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Entry: 10172d194; end: 10172d1cb;  */

uint FUN_10172d194(long param_1,long param_2)

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
  func_0x000101738aec();
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



/* Entry: 10172d1cc; end: 10172d26b;  */

/* WARNING: Possible PIC construction at 0x00010172d218: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172d228: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172d21c) */
/* WARNING: Removing unreachable block (ram,0x00010172d22c) */

void FUN_10172d1cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a48 != -1) {
    func_0x000107c61568(0x112dc4a48,FUN_10172d0d8);
  }
  uVar5 = uRam0000000113803370;
  uVar4 = uRam0000000113803368;
  uVar3 = uRam0000000113803360;
  uVar2 = uRam0000000113803358;
  uVar1 = uRam0000000113803350;
  *param_1 = uRam0000000113803348;
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



/* Entry: 10172d26c; end: 10172d27f;  */

void FUN_10172d26c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc5190;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc5190,&UNK_10d984920);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172d280; end: 10172d2b3;  */

void FUN_10172d280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10172d2b4; end: 10172d3a7;  */

void FUN_10172d2b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[1];
  uStack_40 = *unaff_x20;
  func_0x000107c6068c(auStack_88,0);
  func_0x000107c5fa50(auStack_88,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10172d3a8; end: 10172d3ef;  */

void FUN_10172d3a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d984a70,0x1a,2);
  uRam0000000113803380 = uStack_38;
  uRam0000000113803378 = uStack_40;
  uRam0000000113803390 = uStack_28;
  uRam0000000113803388 = uStack_30;
  uRam00000001138033a0 = uStack_18;
  uRam0000000113803398 = uStack_20;
  return;
}



/* Entry: 10172d3f0; end: 10172d4d7;  */

/* WARNING: Removing unreachable block (ram,0x00010172d4c8) */

void FUN_10172d3f0(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x48);
LAB_10172d458:
        (*pcVar4)();
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x60);
          goto LAB_10172d458;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_101734ef8();
          (*pcVar4)(unaff_x20 + 0x20,&UNK_110400d50,lVar1,param_2,param_3);
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10172d4d8; end: 10172d577;  */

void FUN_10172d4d8(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  FUN_10172d578();
  if (unaff_x21 == 0) {
    if (*unaff_x20 != 0) {
      (**(code **)(param_3 + 0x20))(*unaff_x20,2,param_2,param_3);
    }
    if ((int)unaff_x20[1] != 0) {
      (**(code **)(param_3 + 0x18))((int)unaff_x20[1],3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 10172d578; end: 10172d60b;  */

void FUN_10172d578(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  long lStack_98;
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
  
  lStack_98 = *(long *)(param_1 + 0x28);
  if (lStack_98 != 0) {
    uStack_a0 = *(undefined8 *)(param_1 + 0x20);
    uStack_68 = *(undefined8 *)(param_1 + 0x58);
    uStack_70 = *(undefined8 *)(param_1 + 0x50);
    uStack_58 = *(undefined8 *)(param_1 + 0x68);
    uStack_60 = *(undefined8 *)(param_1 + 0x60);
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    uStack_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x48);
    uStack_80 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101734ef8();
    (*pcVar1)(&uStack_a0,1,&UNK_110400d50,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10172d60c; end: 10172d657;  */

void FUN_10172d60c(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  return;
}



/* Entry: 10172d658; end: 10172d687;  */

undefined1  [16] FUN_10172d658(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10172d688; end: 10172d6bb;  */

void FUN_10172d688(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10172d6bc; end: 10172d6cf;  */

undefined1  [16] FUN_10172d6bc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10172d6cc;
  return auVar1;
}



/* Entry: 10172d6d0; end: 10172d6e3;  */

void FUN_10172d6d0(void)

{
  FUN_10172d3f0();
  return;
}



/* Entry: 10172d6e4; end: 10172d72b;  */

void FUN_10172d6e4(void)

{
  FUN_10172d4d8();
  return;
}



/* Entry: 10172d72c; end: 10172d763;  */

uint FUN_10172d72c(long param_1,long param_2)

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
  func_0x000101738aac();
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



/* Entry: 10172d764; end: 10172d7d3;  */

uint FUN_10172d764(undefined8 *param_1)

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
  uStack_58 = param_1[9];
  uStack_60 = param_1[8];
  uStack_48 = param_1[0xb];
  uStack_50 = param_1[10];
  uStack_38 = param_1[0xd];
  uStack_40 = param_1[0xc];
  uStack_28 = param_1[0xf];
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
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  func_0x000101731e58(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10172d7d4; end: 10172d873;  */

/* WARNING: Possible PIC construction at 0x00010172d820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172d830: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172d824) */
/* WARNING: Removing unreachable block (ram,0x00010172d834) */

void FUN_10172d7d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a58 != -1) {
    func_0x000107c61568(0x112dc4a58,FUN_10172d3a8);
  }
  uVar5 = uRam00000001138033a0;
  uVar4 = uRam0000000113803398;
  uVar3 = uRam0000000113803390;
  uVar2 = uRam0000000113803388;
  uVar1 = uRam0000000113803380;
  *param_1 = uRam0000000113803378;
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



/* Entry: 10172d874; end: 10172d887;  */

void FUN_10172d874(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc5180;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc5180,&UNK_10d984918);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172d888; end: 10172d8bb;  */

void FUN_10172d888(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10172d8bc; end: 10172d9e7;  */

void FUN_10172d8bc(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_58 = unaff_x20[0xb];
  uStack_60 = unaff_x20[10];
  uStack_48 = unaff_x20[0xd];
  uStack_50 = unaff_x20[0xc];
  uStack_38 = unaff_x20[0xf];
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



/* Entry: 10172d9e8; end: 10172da57;  */

uint FUN_10172d9e8(undefined8 *param_1,undefined8 *param_2)

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
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
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
  uStack_28 = param_2[0xf];
  uStack_30 = param_2[0xe];
  func_0x000101731e58(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 10172da58; end: 10172da9f;  */

void FUN_10172da58(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d984a40,0x2a,2);
  uRam00000001138033b0 = uStack_38;
  uRam00000001138033a8 = uStack_40;
  uRam00000001138033c0 = uStack_28;
  uRam00000001138033b8 = uStack_30;
  uRam00000001138033d0 = uStack_18;
  uRam00000001138033c8 = uStack_20;
  return;
}



/* Entry: 10172daa0; end: 10172dba3;  */

/* WARNING: Removing unreachable block (ram,0x00010172db78) */

void FUN_10172daa0(undefined8 param_1,long param_2,long param_3)

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
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_10172db08;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101733c24();
          (*pcVar4)(unaff_x20 + 0x10,&UNK_110400138,lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_10172db18;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_10172db08:
        (*pcVar4)();
      }
LAB_10172db18:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10172dba4; end: 10172dcbf;  */

void FUN_10172dba4(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar3 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar1 = uVar3 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar3,uVar2,1,param_2,param_3), unaff_x21 == 0)
     ) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000101733c24();
      (*pcVar4)(&uStack_50,2,&UNK_110400138,uVar3,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((*(int *)((long)unaff_x20 + 0x1c) == 0) ||
       ((**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x1c),3,param_2,param_3),
       unaff_x21 == 0)) {
      uVar3 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar3,4,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 10172dcc0; end: 10172dd23;  */

void FUN_10172dcc0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}



/* Entry: 10172dd24; end: 10172dd4b;  */

void FUN_10172dd24(void)

{
  FUN_10172daa0();
  return;
}



/* Entry: 10172dd4c; end: 10172dd83;  */

uint FUN_10172dd4c(long param_1,long param_2)

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
  func_0x000101738a6c();
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



/* Entry: 10172dd84; end: 10172ddcb;  */

uint FUN_10172dd84(undefined8 *param_1)

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
  FUN_1017325d0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10172ddcc; end: 10172de6b;  */

/* WARNING: Possible PIC construction at 0x00010172de18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172de28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172de1c) */
/* WARNING: Removing unreachable block (ram,0x00010172de2c) */

void FUN_10172ddcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a68 != -1) {
    func_0x000107c61568(0x112dc4a68,FUN_10172da58);
  }
  uVar5 = uRam00000001138033d0;
  uVar4 = uRam00000001138033c8;
  uVar3 = uRam00000001138033c0;
  uVar2 = uRam00000001138033b8;
  uVar1 = uRam00000001138033b0;
  *param_1 = uRam00000001138033a8;
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



/* Entry: 10172de6c; end: 10172de7f;  */

void FUN_10172de6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc5170;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc5170,&UNK_10d984910);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172de80; end: 10172df83;  */

void FUN_10172de80(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10172df84; end: 10172e013;  */

uint FUN_10172df84(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1017325d0(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10172e014; end: 10172e137;  */

/* WARNING: Removing unreachable block (ram,0x00010172e118) */

void FUN_10172e014(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000101733c24();
LAB_10172e09c:
          (*pcVar3)();
        }
        else if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
          lVar1 = unaff_x20 + 0x10;
LAB_10172e108:
          (*pcVar3)(lVar1,param_2,param_3);
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x1a0);
          func_0x000101733ca4();
          goto LAB_10172e09c;
        }
        if (lVar1 == 4) {
          pcVar3 = *(code **)(param_3 + 0x60);
          lVar1 = unaff_x20 + 0x28;
          goto LAB_10172e108;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10172e138; end: 10172e26b;  */

void FUN_10172e138(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  code *pcVar6;
  long lStack_60;
  undefined1 uStack_58;
  
  if (*unaff_x20 != 0) {
    uStack_58 = (undefined1)unaff_x20[1];
    pcVar6 = *(code **)(param_3 + 0x80);
    uVar3 = param_1;
    lStack_60 = *unaff_x20;
    func_0x000101733c24();
    (*pcVar6)(&lStack_60,1,&UNK_110400138,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar4 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar1 = uVar4 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) || ((**(code **)(param_3 + 0x70))(uVar4,uVar2,2,param_2,param_3), unaff_x21 == 0)
     ) {
    lVar5 = unaff_x20[4];
    if (*(long *)(lVar5 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      func_0x000101733ca4();
      (*pcVar6)(lVar5,3,&UNK_110401228,uVar4,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    if ((unaff_x20[5] == 0) ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[5],4,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
    }
  }
  return;
}



/* Entry: 10172e26c; end: 10172e2cf;  */

void FUN_10172e26c(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = puVar1;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xc000000000000000;
  return;
}



/* Entry: 10172e2d0; end: 10172e2f7;  */

void FUN_10172e2d0(void)

{
  FUN_10172e014();
  return;
}



/* Entry: 10172e2f8; end: 10172e32f;  */

uint FUN_10172e2f8(long param_1,long param_2)

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
  FUN_101738a2c();
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



/* Entry: 10172e330; end: 10172e377;  */

uint FUN_10172e330(undefined8 *param_1)

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
  func_0x0001017326b8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10172e378; end: 10172e417;  */

/* WARNING: Possible PIC construction at 0x00010172e3c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010172e3d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010172e3c8) */
/* WARNING: Removing unreachable block (ram,0x00010172e3d8) */

void FUN_10172e378(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dc4a80 != -1) {
    func_0x000107c61568(0x112dc4a80,0x10172dfcc);
  }
  uVar5 = uRam0000000113803400;
  uVar4 = uRam00000001138033f8;
  uVar3 = uRam00000001138033f0;
  uVar2 = uRam00000001138033e8;
  uVar1 = uRam00000001138033e0;
  *param_1 = uRam00000001138033d8;
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



/* Entry: 10172e418; end: 10172e42b;  */

void FUN_10172e418(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dc5160;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dc5160,&UNK_10d984908);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10172e42c; end: 10172e45f;  */

void FUN_10172e42c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10172e460; end: 10172e563;  */

void FUN_10172e460(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10172e564; end: 10172e5ab;  */

uint FUN_10172e564(undefined8 *param_1,undefined8 *param_2)

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
  func_0x0001017326b8(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10172e5ac; end: 101731887;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10172e5ac(code *******param_1,code *******param_2,code *******param_3)

{
  code *pcVar1;
  long lVar2;
  code *****pppppcVar3;
  code ******ppppppcVar4;
  code ******ppppppcVar5;
  code *****pppppcVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  code *pcVar10;
  code *******pppppppcVar11;
  code *******pppppppcVar12;
  code *******pppppppcVar13;
  code *******pppppppcVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  code ******ppppppcVar18;
  code ******ppppppcVar19;
  code ******ppppppcVar20;
  undefined8 uVar21;
  code *pcVar22;
  code *******pppppppcVar23;
  byte *pbVar24;
  long lVar25;
  uint uVar26;
  code *******pppppppcVar27;
  code *******pppppppcVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  code *******unaff_x19;
  code *******pppppppcVar33;
  code *******unaff_x20;
  code *******unaff_x21;
  long lVar34;
  code *******unaff_x22;
  code *******unaff_x23;
  code *******pppppppcVar35;
  int iVar36;
  code *******unaff_x25;
  code *******pppppppcVar37;
  code *******unaff_x26;
  code ******ppppppcVar38;
  code *******unaff_x27;
  code *******unaff_x28;
  code *******pppppppcVar39;
  code ******ppppppcVar40;
  code *******pppppppcVar41;
  code ******ppppppcVar42;
  code *******pppppppcVar43;
  byte bStack_df1;
  byte abStack_df0 [24];
  long lStack_dd8;
  code *******pppppppcStack_dd0;
  code *******pppppppcStack_dc8;
  code *******pppppppcStack_dc0;
  code *******pppppppcStack_db8;
  code *******pppppppcStack_db0;
  code *******pppppppcStack_da8;
  code *******pppppppcStack_da0;
  code *******pppppppcStack_d98;
  code *******pppppppcStack_d90;
  code *******pppppppcStack_d88;
  undefined1 ******ppppppuStack_d80;
  undefined8 uStack_d78;
  code *******pppppppcStack_d68;
  code *******pppppppcStack_d60;
  undefined8 uStack_d58;
  undefined1 uStack_d50;
  undefined1 uStack_d4f;
  undefined1 uStack_d4e;
  undefined1 uStack_d4d;
  undefined1 uStack_d4c;
  undefined1 uStack_d4b;
  byte abStack_d40 [128];
  code ******ppppppcStack_cc0;
  code *******pppppppcStack_cb8;
  code ******ppppppcStack_cb0;
  code *******pppppppcStack_ca8;
  code ******ppppppcStack_ca0;
  code *******pppppppcStack_c98;
  code ******ppppppcStack_c90;
  code *******pppppppcStack_c88;
  code ******ppppppcStack_c80;
  code *******pppppppcStack_c78;
  code ******ppppppcStack_c70;
  code *******pppppppcStack_c68;
  code ******ppppppcStack_c60;
  code *******pppppppcStack_c58;
  code ******ppppppcStack_c50;
  code *******pppppppcStack_c48;
  code ******ppppppcStack_c40;
  code *******pppppppcStack_c38;
  code ******ppppppcStack_c30;
  code *******pppppppcStack_c28;
  code ******ppppppcStack_c20;
  code *******pppppppcStack_c18;
  code ******ppppppcStack_c10;
  code *******pppppppcStack_c08;
  code ******ppppppcStack_c00;
  code *******pppppppcStack_bf8;
  code ******ppppppcStack_bf0;
  code *******pppppppcStack_be8;
  code ******ppppppcStack_be0;
  code *******pppppppcStack_bd8;
  code *******pppppppcStack_bd0;
  code *******pppppppcStack_bc8;
  long lStack_bb8;
  code *******pppppppcStack_ba0;
  code *******pppppppcStack_b98;
  code *******pppppppcStack_b90;
  code *******pppppppcStack_b88;
  code *******pppppppcStack_b80;
  code *******pppppppcStack_b78;
  code *******pppppppcStack_b70;
  code *******pppppppcStack_b68;
  code *******pppppppcStack_b60;
  code *******pppppppcStack_b58;
  undefined1 *****pppppuStack_b50;
  undefined8 uStack_b48;
  code ******ppppppcStack_b38;
  code *******pppppppcStack_b30;
  code ******ppppppcStack_b28;
  code ******ppppppcStack_b20;
  code *******pppppppcStack_b18;
  uint uStack_b10;
  uint uStack_b0c;
  code ******ppppppcStack_b08;
  uint uStack_b00;
  uint uStack_afc;
  code ******ppppppcStack_af8;
  code ******ppppppcStack_af0;
  code *******pppppppcStack_ae8;
  code *******pppppppcStack_ae0;
  code *******pppppppcStack_ad8;
  code *******pppppppcStack_ad0;
  undefined8 uStack_ac8;
  undefined1 uStack_ac0;
  undefined1 uStack_abf;
  undefined1 uStack_abe;
  undefined1 uStack_abd;
  undefined1 uStack_abc;
  undefined1 uStack_abb;
  code ******ppppppcStack_ab0;
  code ******ppppppcStack_aa8;
  code *******pppppppcStack_aa0;
  code *******pppppppcStack_a98;
  code *******pppppppcStack_a90;
  code *******pppppppcStack_a88;
  code *******pppppppcStack_a80;
  code ******ppppppcStack_a78;
  undefined8 uStack_a70;
  code ******ppppppcStack_a68;
  code ******ppppppcStack_a60;
  code *******pppppppcStack_a58;
  code ******ppppppcStack_a50;
  code ******ppppppcStack_a48;
  code *******pppppppcStack_a40;
  code *******pppppppcStack_a38;
  code *******pppppppcStack_a30;
  code *******pppppppcStack_a28;
  code *******pppppppcStack_a20;
  code ******ppppppcStack_a18;
  code ******ppppppcStack_a10;
  code ******ppppppcStack_a08;
  code ******ppppppcStack_a00;
  code *******pppppppcStack_9f8;
  code ******ppppppcStack_9f0;
  code ******ppppppcStack_9e8;
  code ******ppppppcStack_9e0;
  code ******ppppppcStack_9d8;
  code ******ppppppcStack_9d0;
  code ******ppppppcStack_9c8;
  code ******ppppppcStack_9c0;
  code ******ppppppcStack_9b8;
  code ******ppppppcStack_9b0;
  code ******ppppppcStack_9a8;
  code ******ppppppcStack_9a0;
  code ******ppppppcStack_998;
  undefined8 uStack_990;
  undefined1 uStack_988;
  undefined1 uStack_987;
  undefined1 uStack_986;
  undefined1 uStack_985;
  undefined1 uStack_984;
  undefined1 uStack_983;
  undefined2 uStack_982;
  code *******pppppppcStack_980;
  code *******pppppppcStack_978;
  code *******pppppppcStack_970;
  code *******pppppppcStack_968;
  code *******pppppppcStack_960;
  code ******ppppppcStack_958;
  undefined8 uStack_950;
  code ******ppppppcStack_948;
  code ******ppppppcStack_940;
  code *******pppppppcStack_938;
  code ******ppppppcStack_930;
  code ******ppppppcStack_928;
  code ******ppppppcStack_920;
  code ******ppppppcStack_918;
  code ******ppppppcStack_910;
  code ******ppppppcStack_908;
  code ******ppppppcStack_900;
  code ******ppppppcStack_8f8;
  code ******ppppppcStack_8f0;
  code ******ppppppcStack_8e8;
  code ******ppppppcStack_8e0;
  code ******ppppppcStack_8d8;
  code *******pppppppcStack_8d0;
  code ******ppppppcStack_8c8;
  code ******ppppppcStack_8c0;
  code *******pppppppcStack_8b8;
  code ******ppppppcStack_8b0;
  code ******ppppppcStack_8a8;
  code ******ppppppcStack_8a0;
  code ******ppppppcStack_898;
  code ******ppppppcStack_890;
  code ******ppppppcStack_888;
  code ******ppppppcStack_880;
  code ******ppppppcStack_878;
  code ******ppppppcStack_870;
  code ******ppppppcStack_868;
  code ******ppppppcStack_860;
  code ******ppppppcStack_858;
  code *******pppppppcStack_850;
  code ******ppppppcStack_848;
  code *******pppppppcStack_840;
  code *******pppppppcStack_838;
  code ******ppppppcStack_830;
  code ******ppppppcStack_828;
  code ******ppppppcStack_820;
  code ******ppppppcStack_818;
  code ******ppppppcStack_810;
  code ******ppppppcStack_808;
  code ******ppppppcStack_800;
  code ******ppppppcStack_7f8;
  code ******ppppppcStack_7f0;
  code ******ppppppcStack_7e8;
  code ******ppppppcStack_7e0;
  code ******ppppppcStack_7d8;
  long lStack_7c8;
  code *******pppppppcStack_7b0;
  code *******pppppppcStack_7a8;
  code *******pppppppcStack_7a0;
  code *******pppppppcStack_798;
  code *******pppppppcStack_790;
  code *******pppppppcStack_788;
  code *******pppppppcStack_780;
  code *******pppppppcStack_778;
  code *******pppppppcStack_770;
  code *******pppppppcStack_768;
  undefined1 ****ppppuStack_760;
  undefined8 uStack_758;
  code ******ppppppcStack_748;
  code *******pppppppcStack_740;
  code ******ppppppcStack_738;
  code ******ppppppcStack_730;
  code *******pppppppcStack_728;
  uint uStack_720;
  uint uStack_71c;
  code ******ppppppcStack_718;
  uint uStack_710;
  uint uStack_70c;
  code ******ppppppcStack_708;
  code ******ppppppcStack_700;
  code *******pppppppcStack_6f8;
  code *******pppppppcStack_6f0;
  code *******pppppppcStack_6e8;
  code *******pppppppcStack_6e0;
  undefined8 uStack_6d8;
  undefined1 uStack_6d0;
  undefined1 uStack_6cf;
  undefined1 uStack_6ce;
  undefined1 uStack_6cd;
  undefined1 uStack_6cc;
  undefined1 uStack_6cb;
  code ******ppppppcStack_6c0;
  code ******ppppppcStack_6b8;
  code *******pppppppcStack_6b0;
  code *******pppppppcStack_6a8;
  code *******pppppppcStack_6a0;
  code *******pppppppcStack_698;
  code *******pppppppcStack_690;
  code ******ppppppcStack_688;
  undefined8 uStack_680;
  code ******ppppppcStack_678;
  code ******ppppppcStack_670;
  code *******pppppppcStack_668;
  code ******ppppppcStack_660;
  code ******ppppppcStack_658;
  code *******pppppppcStack_650;
  code *******pppppppcStack_648;
  code *******pppppppcStack_640;
  code *******pppppppcStack_638;
  code *******pppppppcStack_630;
  code ******ppppppcStack_628;
  code ******ppppppcStack_620;
  code ******ppppppcStack_618;
  code ******ppppppcStack_610;
  code *******pppppppcStack_608;
  code ******ppppppcStack_600;
  code ******ppppppcStack_5f8;
  code ******ppppppcStack_5f0;
  code ******ppppppcStack_5e8;
  code ******ppppppcStack_5e0;
  code ******ppppppcStack_5d8;
  code ******ppppppcStack_5d0;
  code ******ppppppcStack_5c8;
  code ******ppppppcStack_5c0;
  code ******ppppppcStack_5b8;
  code ******ppppppcStack_5b0;
  code ******ppppppcStack_5a8;
  undefined8 uStack_5a0;
  undefined1 uStack_598;
  undefined1 uStack_597;
  undefined1 uStack_596;
  undefined1 uStack_595;
  undefined1 uStack_594;
  undefined1 uStack_593;
  undefined2 uStack_592;
  code *******pppppppcStack_590;
  code *******pppppppcStack_588;
  code *******pppppppcStack_580;
  code *******pppppppcStack_578;
  code *******pppppppcStack_570;
  code ******ppppppcStack_568;
  undefined8 uStack_560;
  code ******ppppppcStack_558;
  code ******ppppppcStack_550;
  code *******pppppppcStack_548;
  code ******ppppppcStack_540;
  code ******ppppppcStack_538;
  code ******ppppppcStack_530;
  code ******ppppppcStack_528;
  code ******ppppppcStack_520;
  code ******ppppppcStack_518;
  code ******ppppppcStack_510;
  code ******ppppppcStack_508;
  code ******ppppppcStack_500;
  code ******ppppppcStack_4f8;
  code ******ppppppcStack_4f0;
  code ******ppppppcStack_4e8;
  code *******pppppppcStack_4e0;
  code ******ppppppcStack_4d8;
  code *******pppppppcStack_4d0;
  code ******ppppppcStack_4c8;
  code ******ppppppcStack_4c0;
  code ******ppppppcStack_4b8;
  code ******ppppppcStack_4b0;
  code ******ppppppcStack_4a8;
  code ******ppppppcStack_4a0;
  code ******ppppppcStack_498;
  code ******ppppppcStack_490;
  code ******ppppppcStack_488;
  code ******ppppppcStack_480;
  code ******ppppppcStack_478;
  code ******ppppppcStack_470;
  code *******pppppppcStack_460;
  code *******pppppppcStack_458;
  code *******pppppppcStack_450;
  code ******ppppppcStack_448;
  code ******ppppppcStack_440;
  code ******ppppppcStack_438;
  code ******ppppppcStack_430;
  code ******ppppppcStack_428;
  code ******ppppppcStack_420;
  code ******ppppppcStack_418;
  code ******ppppppcStack_410;
  code ******ppppppcStack_408;
  code ******ppppppcStack_400;
  code ******ppppppcStack_3f8;
  code ******ppppppcStack_3f0;
  long lStack_3e8;
  code *******pppppppcStack_3d0;
  code *******pppppppcStack_3c8;
  code *******pppppppcStack_3c0;
  code *******pppppppcStack_3b8;
  code *******pppppppcStack_3b0;
  code *******pppppppcStack_3a8;
  code *******pppppppcStack_3a0;
  code *******pppppppcStack_398;
  code *******pppppppcStack_390;
  code *******pppppppcStack_388;
  undefined1 ***pppuStack_380;
  undefined8 uStack_378;
  code *******pppppppcStack_368;
  undefined8 uStack_360;
  undefined1 uStack_358;
  undefined1 uStack_357;
  undefined1 uStack_356;
  undefined1 uStack_355;
  undefined1 uStack_354;
  undefined1 uStack_353;
  byte abStack_348 [104];
  code ******ppppppcStack_2e0;
  code *******pppppppcStack_2d8;
  code ******ppppppcStack_2d0;
  code ******ppppppcStack_2c8;
  code *******pppppppcStack_2c0;
  code ******ppppppcStack_2b8;
  code *******pppppppcStack_2b0;
  code ******ppppppcStack_2a8;
  code *******pppppppcStack_2a0;
  code ******ppppppcStack_298;
  code *******pppppppcStack_290;
  code ******ppppppcStack_288;
  code *******pppppppcStack_280;
  code ******ppppppcStack_270;
  code *******pppppppcStack_268;
  code ******ppppppcStack_260;
  code ******ppppppcStack_258;
  code *******pppppppcStack_250;
  code ******ppppppcStack_248;
  code *******pppppppcStack_240;
  code ******ppppppcStack_238;
  code *******pppppppcStack_230;
  code ******ppppppcStack_228;
  code *******pppppppcStack_220;
  code *******pppppppcStack_218;
  code *******pppppppcStack_210;
  long lStack_200;
  code *******pppppppcStack_1f0;
  code *******pppppppcStack_1e8;
  code *******pppppppcStack_1e0;
  code *******pppppppcStack_1d8;
  code *******pppppppcStack_1d0;
  code *******pppppppcStack_1c8;
  code *******pppppppcStack_1c0;
  code *******pppppppcStack_1b8;
  code *******pppppppcStack_1b0;
  code *******pppppppcStack_1a8;
  undefined1 **ppuStack_1a0;
  undefined8 uStack_198;
  code *******pppppppcStack_188;
  code *******pppppppcStack_180;
  code *******pppppppcStack_178;
  code *******pppppppcStack_170;
  code *******pppppppcStack_168;
  code *******pppppppcStack_160;
  byte bStack_151;
  byte abStack_150 [24];
  long lStack_138;
  code *******pppppppcStack_130;
  code *******pppppppcStack_128;
  code *******pppppppcStack_120;
  code *******pppppppcStack_118;
  code *******pppppppcStack_110;
  code *******pppppppcStack_108;
  code *******pppppppcStack_100;
  code *******pppppppcStack_f8;
  code *******pppppppcStack_f0;
  code *******pppppppcStack_e8;
  undefined1 *puStack_e0;
  undefined8 uStack_d8;
  code *******pppppppcStack_d0;
  code *******pppppppcStack_c8;
  code *******pppppppcStack_c0;
  code *******pppppppcStack_b8;
  code *******pppppppcStack_b0;
  code *******pppppppcStack_a8;
  code *******pppppppcStack_a0;
  code ******ppppppcStack_98;
  code ******ppppppcStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar35 = (code *******)param_1[2];
  pppppppcVar11 = unaff_x21;
  pppppppcVar33 = unaff_x23;
  if (pppppppcVar35 == (code *******)param_2[2]) {
    if ((pppppppcVar35 != (code *******)0x0) && (param_1 != param_2)) {
      pppppppcStack_c8 = (code *******)0x0;
      unaff_x27 = param_2 + 10;
      unaff_x28 = param_1 + 5;
      do {
        pppppppcVar37 = (code *******)unaff_x28[-1];
        pppppppcVar43 = (code *******)*unaff_x28;
        unaff_x20 = (code *******)unaff_x28[1];
        pppppppcVar23 = (code *******)unaff_x28[2];
        ppppppcStack_90 = unaff_x28[3];
        unaff_x25 = (code *******)unaff_x28[4];
        unaff_x19 = (code *******)unaff_x28[5];
        param_3 = (code *******)unaff_x27[-6];
        pppppppcVar27 = (code *******)unaff_x27[-5];
        pppppppcVar13 = (code *******)unaff_x27[-4];
        unaff_x23 = (code *******)unaff_x27[-3];
        ppppppcStack_98 = unaff_x27[-2];
        unaff_x21 = (code *******)unaff_x27[-1];
        unaff_x26 = (code *******)*unaff_x27;
        if (((pppppppcVar37 != param_3) || (pppppppcVar43 != pppppppcVar27)) &&
           (param_2 = pppppppcVar43, pppppppcStack_c0 = unaff_x28, pppppppcStack_b8 = unaff_x21,
           pppppppcStack_b0 = unaff_x26, func_0x000107c605b8(), pppppppcVar11 = pppppppcStack_b8,
           unaff_x21 = pppppppcStack_b8, unaff_x22 = pppppppcVar23, pppppppcVar33 = pppppppcVar13,
           unaff_x26 = pppppppcStack_b0, unaff_x28 = pppppppcStack_c0,
           ((ulong)pppppppcVar37 & 1) == 0)) goto LAB_10172eb88;
        pppppppcVar11 = unaff_x21;
        pppppppcVar33 = unaff_x23;
        pppppppcStack_a8 = pppppppcVar27;
        pppppppcStack_a0 = pppppppcVar23;
        if ((unaff_x20 == pppppppcVar13) && (pppppppcVar23 == unaff_x23)) {
          if (ppppppcStack_90 != ppppppcStack_98) goto LAB_10172eb88;
        }
        else {
          pppppppcVar27 = unaff_x20;
          func_0x000107c605b8();
          pppppppcVar12 = (code *******)0x0;
          pppppppcVar28 = unaff_x25;
          pppppppcVar37 = pppppppcVar43;
          if ((((ulong)pppppppcVar27 & 1) == 0) ||
             (param_2 = pppppppcVar23, param_3 = pppppppcVar13, pppppppcVar28 = unaff_x19,
             unaff_x22 = unaff_x19, pppppppcVar37 = unaff_x25, ppppppcStack_90 != ppppppcStack_98))
          goto LAB_10172eb94;
        }
        uVar7 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)unaff_x26 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)unaff_x25;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar30 = 0;
          if (((unaff_x25 != (code *******)0x0) || (unaff_x19 != (code *******)0xc000000000000000))
             || (((ulong)unaff_x26 >> 0x3e < 3 ||
                 ((uVar30 = 0, unaff_x21 != (code *******)0x0 ||
                  (unaff_x26 != (code *******)0xc000000000000000)))))) goto joined_r0x00010172e988;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)unaff_x25 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebd8);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x00010172e988:
            if (uVar8 >> 0x1e < 2) goto LAB_10172e7b0;
LAB_10172e77c:
            if (uVar31 != 2) {
              if (uVar30 == 0) goto LAB_10172e60c;
              goto LAB_10172eb88;
            }
            uVar32 = (long)unaff_x21[3] - (long)unaff_x21[2];
            if (SBORROW8((long)unaff_x21[3],(long)unaff_x21[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebd4);
              (*pcVar10)();
            }
          }
          else {
            if (uVar26 == 2) {
              uVar30 = (long)unaff_x25[3] - (long)unaff_x25[2];
              if (SBORROW8((long)unaff_x25[3],(long)unaff_x25[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebdc);
                (*pcVar10)();
              }
              goto joined_r0x00010172e988;
            }
            uVar30 = 0;
            if (1 < uVar31) goto LAB_10172e77c;
LAB_10172e7b0:
            if (uVar31 == 0) {
              uVar32 = (ulong)unaff_x26 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)unaff_x21 >> 0x20);
              if (SBORROW4(iVar29,(int)unaff_x21)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebd0);
                (*pcVar10)();
              }
              uVar32 = (ulong)(iVar29 - (int)unaff_x21);
            }
          }
          if (uVar30 != uVar32) goto LAB_10172eb88;
          if (0 < (long)uVar30) {
            param_2 = unaff_x19;
            param_3 = unaff_x21;
            pppppppcStack_d0 = pppppppcVar43;
            if (uVar26 < 2) {
              if (uVar26 != 0) {
                lVar34 = (long)iVar36;
                pppppppcVar37 = (code *******)(((long)unaff_x25 >> 0x20) - lVar34);
                if ((long)unaff_x25 >> 0x20 < lVar34) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebe0);
                  pppppppcStack_b8 = unaff_x21;
                  pppppppcStack_b0 = unaff_x26;
                  (*pcVar10)();
                }
                pppppppcStack_b8 = unaff_x21;
                pppppppcStack_b0 = unaff_x26;
                func_0x000107c61434(pppppppcVar43);
                func_0x000107c61434(pppppppcStack_a0);
                func_0x00010006c00c(unaff_x25,unaff_x19);
                func_0x000107c61434(pppppppcStack_a8);
                func_0x000107c61434(unaff_x23);
                pppppppcVar11 = pppppppcStack_b8;
                func_0x00010006c00c(pppppppcStack_b8,pppppppcStack_b0);
                func_0x000107c5ec30();
                if (pppppppcVar11 == (code *******)0x0) {
                  func_0x000107c5ec38();
                  pcVar10 = (code *)0x0;
                  pcVar22 = (code *)0x0;
                }
                else {
                  pppppppcVar23 = pppppppcVar11;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar34,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebec);
                    (*pcVar10)();
                  }
                  pcVar1 = (code *)((long)pppppppcVar11 + (lVar34 - (long)pppppppcVar23));
                  func_0x000107c5ec38();
                  if ((long)pppppppcVar37 <= (long)pppppppcVar23) {
                    pppppppcVar23 = pppppppcVar37;
                  }
                  pcVar10 = (code *)0x0;
                  if (pcVar1 != (code *)0x0) {
                    pcVar10 = pcVar1;
                  }
                  pcVar22 = (code *)0x0;
                  if (pcVar1 != (code *)0x0) {
                    pcVar22 = (code *)((long)pppppppcVar23 + (long)pcVar1);
                  }
                }
                pppppppcVar27 = pppppppcStack_b0;
                pppppppcVar43 = pppppppcStack_b8;
                unaff_x21 = pppppppcStack_c8;
                param_3 = pppppppcStack_b8;
                func_0x000100e25bdc(abStack_80,pcVar10,pcVar22,pppppppcStack_b8,pppppppcStack_b0);
                pppppppcStack_c8 = unaff_x21;
                func_0x000107c6142c(unaff_x23);
                func_0x000107c6142c(pppppppcStack_a8);
                unaff_x20 = pppppppcVar43;
                unaff_x22 = pppppppcVar27;
LAB_10172eb60:
                func_0x00010006c090(pppppppcVar43,pppppppcVar27);
                func_0x000107c6142c(pppppppcStack_a0);
                func_0x000107c6142c(pppppppcStack_d0);
                func_0x00010006c090(unaff_x25);
                pppppppcVar11 = unaff_x21;
                unaff_x26 = pppppppcVar37;
                if ((abStack_80[0] & 1) != 0) goto LAB_10172e60c;
                goto LAB_10172eb88;
              }
              abStack_80[0] = (byte)unaff_x25;
              abStack_80[1] = (byte)((ulong)unaff_x25 >> 8);
              abStack_80[2] = (byte)((ulong)unaff_x25 >> 0x10);
              abStack_80[3] = (byte)((ulong)unaff_x25 >> 0x18);
              abStack_80[4] = (byte)((ulong)unaff_x25 >> 0x20);
              abStack_80[5] = (byte)((ulong)unaff_x25 >> 0x28);
              abStack_80[6] = (byte)((ulong)unaff_x25 >> 0x30);
              abStack_80[7] = (byte)((ulong)unaff_x25 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              func_0x000107c61434(pppppppcVar43);
              func_0x000107c61434(pppppppcStack_a0);
              func_0x00010006c00c(unaff_x25,unaff_x19);
              unaff_x22 = pppppppcStack_a8;
              func_0x000107c61434(pppppppcStack_a8);
              func_0x000107c61434(unaff_x23);
              func_0x00010006c00c(unaff_x21,unaff_x26);
              pppppppcVar11 = pppppppcStack_c8;
              func_0x000100e25bdc(&bStack_81,abStack_80,
                                  abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff),unaff_x21,unaff_x26
                                 );
              pppppppcStack_c8 = pppppppcVar11;
              func_0x000107c6142c(unaff_x23);
              func_0x000107c6142c(unaff_x22);
              unaff_x20 = unaff_x21;
            }
            else {
              if (uVar26 == 2) {
                pppppppcVar37 = (code *******)unaff_x25[2];
                ppppppcVar38 = unaff_x25[3];
                func_0x000107c61434(pppppppcVar43);
                func_0x000107c61434(pppppppcStack_a0);
                func_0x00010006c00c(unaff_x25,unaff_x19);
                func_0x000107c61434(pppppppcStack_a8);
                func_0x000107c61434(unaff_x23);
                pppppppcStack_b8 = unaff_x21;
                pppppppcStack_b0 = unaff_x26;
                func_0x00010006c00c(unaff_x21,unaff_x26);
                func_0x000107c5ec30();
                pppppppcVar23 = unaff_x21;
                pppppppcVar11 = unaff_x21;
                if (unaff_x21 != (code *******)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)pppppppcVar37,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebe8);
                    (*pcVar10)();
                  }
                  pppppppcVar11 =
                       (code *******)((long)unaff_x21 + ((long)pppppppcVar37 - (long)pppppppcVar23))
                  ;
                }
                pppppppcVar13 = (code *******)((long)ppppppcVar38 - (long)pppppppcVar37);
                if (SBORROW8((long)ppppppcVar38,(long)pppppppcVar37)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10172ebe4);
                  (*pcVar10)();
                }
                func_0x000107c5ec38();
                pppppppcVar27 = pppppppcStack_b0;
                pppppppcVar43 = pppppppcStack_b8;
                unaff_x21 = pppppppcStack_c8;
                if (pppppppcVar11 == (code *******)0x0) {
                  pcVar10 = (code *)0x0;
                }
                else {
                  if ((long)pppppppcVar13 <= (long)pppppppcVar23) {
                    pppppppcVar23 = pppppppcVar13;
                  }
                  pcVar10 = (code *)((long)pppppppcVar23 + (long)pppppppcVar11);
                }
                param_3 = pppppppcStack_b8;
                func_0x000100e25bdc(abStack_80,pppppppcVar11,pcVar10,pppppppcStack_b8,
                                    pppppppcStack_b0);
                pppppppcStack_c8 = unaff_x21;
                func_0x000107c6142c(unaff_x23);
                func_0x000107c6142c(pppppppcStack_a8);
                unaff_x20 = pppppppcVar27;
                unaff_x22 = pppppppcVar43;
                goto LAB_10172eb60;
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
              func_0x000107c61434(pppppppcVar43);
              func_0x000107c61434(pppppppcStack_a0);
              func_0x00010006c00c(unaff_x25,unaff_x19);
              unaff_x20 = pppppppcStack_a8;
              func_0x000107c61434(pppppppcStack_a8);
              func_0x000107c61434(unaff_x23);
              func_0x00010006c00c(unaff_x21,unaff_x26);
              pppppppcVar11 = pppppppcStack_c8;
              func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,unaff_x21,unaff_x26);
              pppppppcStack_c8 = pppppppcVar11;
              func_0x000107c6142c(unaff_x23);
              func_0x000107c6142c(unaff_x20);
              unaff_x22 = unaff_x21;
            }
            func_0x00010006c090(unaff_x21,unaff_x26);
            func_0x000107c6142c(pppppppcStack_a0);
            func_0x000107c6142c(pppppppcStack_d0);
            func_0x00010006c090(unaff_x25);
            unaff_x21 = pppppppcVar11;
            if ((bStack_81 & 1) == 0) goto LAB_10172eb88;
          }
        }
LAB_10172e60c:
        unaff_x27 = unaff_x27 + 7;
        unaff_x28 = unaff_x28 + 7;
        pppppppcVar35 = (code *******)((long)pppppppcVar35 + -1);
      } while (pppppppcVar35 != (code *******)0x0);
    }
    pppppppcVar12 = (code *******)0x1;
    pppppppcVar23 = param_2;
    pppppppcVar13 = param_3;
    pppppppcVar28 = unaff_x19;
    unaff_x19 = unaff_x22;
    pppppppcVar37 = unaff_x25;
  }
  else {
LAB_10172eb88:
    pppppppcVar12 = (code *******)0x0;
    pppppppcVar23 = param_2;
    pppppppcVar13 = param_3;
    pppppppcVar28 = unaff_x19;
    unaff_x21 = pppppppcVar11;
    unaff_x19 = unaff_x22;
    unaff_x23 = pppppppcVar33;
    pppppppcVar37 = unaff_x25;
  }
LAB_10172eb94:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uStack_d8 = 0x10172ebf0;
  lStack_138 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar33 = (code *******)pppppppcVar12[2];
  pppppppcVar11 = unaff_x27;
  pppppppcVar43 = unaff_x28;
  pppppppcStack_130 = unaff_x28;
  pppppppcStack_128 = unaff_x27;
  pppppppcStack_120 = unaff_x26;
  pppppppcStack_118 = pppppppcVar37;
  pppppppcStack_110 = pppppppcVar35;
  pppppppcStack_108 = unaff_x23;
  pppppppcStack_100 = unaff_x19;
  pppppppcStack_f8 = unaff_x21;
  pppppppcStack_f0 = unaff_x20;
  pppppppcStack_e8 = pppppppcVar28;
  puStack_e0 = &stack0xfffffffffffffff0;
  if (pppppppcVar33 == (code *******)pppppppcVar23[2]) {
    pppppppcVar27 = unaff_x21;
    if ((pppppppcVar33 != (code *******)0x0) && (pppppppcVar12 != pppppppcVar23)) {
      pppppppcStack_168 = (code *******)0x0;
      pppppppcVar11 = pppppppcVar12 + 6;
      pppppppcVar43 = pppppppcVar23 + 6;
      pppppppcStack_170 = pppppppcVar13;
      do {
        unaff_x21 = pppppppcVar13;
        pppppppcVar35 = (code *******)pppppppcVar11[-2];
        unaff_x23 = (code *******)pppppppcVar11[-1];
        unaff_x19 = (code *******)*pppppppcVar11;
        unaff_x20 = (code *******)pppppppcVar43[-2];
        unaff_x26 = (code *******)pppppppcVar43[-1];
        pppppppcVar37 = (code *******)*pppppppcVar43;
        func_0x00010006c00c(pppppppcVar35,unaff_x23);
        func_0x000107c6157c(unaff_x19);
        pppppppcStack_160 = unaff_x20;
        func_0x00010006c00c(unaff_x20,unaff_x26);
        pppppppcVar13 = pppppppcVar37;
        func_0x000107c6157c();
        pppppppcVar23 = unaff_x23;
        if (unaff_x19 != pppppppcVar37) {
          func_0x000107c6157c(unaff_x19);
          func_0x000107c6157c(pppppppcVar37);
          unaff_x20 = unaff_x19;
          (*(code *)unaff_x21)(unaff_x19,pppppppcVar37);
          func_0x000107c61574(pppppppcVar37);
          pppppppcVar13 = unaff_x19;
          func_0x000107c61574();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_10172ed34;
LAB_10172f050:
          func_0x00010006c090(pppppppcStack_160,unaff_x26);
          func_0x000107c61574(pppppppcVar37);
          func_0x00010006c090(pppppppcVar35);
          func_0x000107c61574(unaff_x19);
          goto LAB_10172f078;
        }
LAB_10172ed34:
        pppppppcVar12 = pppppppcStack_160;
        pppppppcVar28 = pppppppcStack_168;
        uVar7 = (uint)((ulong)unaff_x23 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)unaff_x26 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)pppppppcVar35;
        if ((ulong)unaff_x23 >> 0x3e == 3) {
          uVar30 = 0;
          if ((((pppppppcVar35 != (code *******)0x0) ||
               (unaff_x23 != (code *******)0xc000000000000000)) || ((ulong)unaff_x26 >> 0x3e < 3))
             || ((uVar30 = 0, pppppppcStack_160 != (code *******)0x0 ||
                 (unaff_x26 != (code *******)0xc000000000000000)))) goto joined_r0x00010172edac;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(pppppppcVar37);
          pppppppcVar13 = (code *******)0x0;
          pppppppcVar23 = (code *******)0xc000000000000000;
LAB_10172eec8:
          func_0x00010006c090(pppppppcVar13);
          func_0x000107c61574(unaff_x19);
          pppppppcVar27 = unaff_x21;
          pppppppcVar13 = pppppppcStack_168;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)pppppppcVar35 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0c0);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x00010172edac:
            if (uVar8 >> 0x1e < 2) goto LAB_10172ede8;
LAB_10172edb0:
            if (uVar31 == 2) {
              uVar32 = (long)pppppppcStack_160[3] - (long)pppppppcStack_160[2];
              if (SBORROW8((long)pppppppcStack_160[3],(long)pppppppcStack_160[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0b8);
                (*pcVar10)();
              }
              goto LAB_10172ee10;
            }
            if (uVar30 != 0) goto LAB_10172f050;
LAB_10172eeac:
            func_0x00010006c090(pppppppcStack_160,unaff_x26);
            func_0x000107c61574(pppppppcVar37);
            pppppppcVar13 = pppppppcVar35;
            goto LAB_10172eec8;
          }
          if (uVar26 == 2) {
            uVar30 = (long)pppppppcVar35[3] - (long)pppppppcVar35[2];
            if (SBORROW8((long)pppppppcVar35[3],(long)pppppppcVar35[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0c4);
              (*pcVar10)();
            }
            goto joined_r0x00010172edac;
          }
          uVar30 = 0;
          if (1 < uVar31) goto LAB_10172edb0;
LAB_10172ede8:
          if (uVar31 == 0) {
            uVar32 = (ulong)unaff_x26 >> 0x30 & 0xff;
          }
          else {
            iVar29 = (int)((ulong)pppppppcStack_160 >> 0x20);
            if (SBORROW4(iVar29,(int)pppppppcStack_160)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0bc);
              (*pcVar10)();
            }
            uVar32 = (ulong)(iVar29 - (int)pppppppcStack_160);
          }
LAB_10172ee10:
          if (uVar30 != uVar32) goto LAB_10172f050;
          if ((long)uVar30 < 1) goto LAB_10172eeac;
          if (uVar26 < 2) {
            if (uVar26 != 0) {
              lVar34 = (long)iVar36;
              pppppppcStack_178 = (code *******)(((long)pppppppcVar35 >> 0x20) - lVar34);
              if ((long)pppppppcVar35 >> 0x20 < lVar34) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0c8);
                (*pcVar10)();
              }
              func_0x000107c5ec30();
              if (pppppppcVar13 == (code *******)0x0) {
                func_0x000107c5ec38();
                pcVar10 = (code *)0x0;
                pcVar22 = (code *)0x0;
              }
              else {
                pppppppcStack_180 = pppppppcVar13;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar34,(long)pppppppcVar13)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0d4);
                  (*pcVar10)();
                }
                pcVar1 = (code *)((long)pppppppcStack_180 + (lVar34 - (long)pppppppcVar13));
                func_0x000107c5ec38();
                if ((long)pppppppcStack_178 <= (long)pppppppcVar13) {
                  pppppppcVar13 = pppppppcStack_178;
                }
                pcVar10 = (code *)0x0;
                if (pcVar1 != (code *)0x0) {
                  pcVar10 = pcVar1;
                }
                pcVar22 = (code *)0x0;
                if (pcVar1 != (code *)0x0) {
                  pcVar22 = (code *)((long)pppppppcVar13 + (long)pcVar1);
                }
              }
              goto LAB_10172f004;
            }
            abStack_150[0] = (byte)pppppppcVar35;
            abStack_150[1] = (byte)((ulong)pppppppcVar35 >> 8);
            abStack_150[2] = (byte)((ulong)pppppppcVar35 >> 0x10);
            abStack_150[3] = (byte)((ulong)pppppppcVar35 >> 0x18);
            abStack_150[4] = (byte)((ulong)pppppppcVar35 >> 0x20);
            abStack_150[5] = (byte)((ulong)pppppppcVar35 >> 0x28);
            abStack_150[6] = (byte)((ulong)pppppppcVar35 >> 0x30);
            abStack_150[7] = (byte)((ulong)pppppppcVar35 >> 0x38);
            abStack_150[8] = (byte)unaff_x23;
            abStack_150[9] = (byte)((ulong)unaff_x23 >> 8);
            abStack_150[10] = (byte)((ulong)unaff_x23 >> 0x10);
            abStack_150[0xb] = (byte)((ulong)unaff_x23 >> 0x18);
            abStack_150[0xc] = (byte)((ulong)unaff_x23 >> 0x20);
            abStack_150[0xd] = (byte)((ulong)unaff_x23 >> 0x28);
            pbVar24 = abStack_150 + ((ulong)unaff_x23 >> 0x30 & 0xff);
LAB_10172ec64:
            func_0x000100e25bdc(&bStack_151,abStack_150,pbVar24,pppppppcStack_160,unaff_x26);
            func_0x00010006c090(pppppppcVar12,unaff_x26);
            func_0x000107c61574(pppppppcVar37);
            func_0x00010006c090(pppppppcVar35);
            func_0x000107c61574(unaff_x19);
            pppppppcVar27 = pppppppcStack_170;
            unaff_x21 = pppppppcVar28;
            unaff_x20 = pppppppcVar12;
            bVar9 = bStack_151;
          }
          else {
            if (uVar26 != 2) {
              abStack_150[8] = 0;
              abStack_150[9] = 0;
              abStack_150[10] = 0;
              abStack_150[0xb] = 0;
              abStack_150[0xc] = 0;
              abStack_150[0xd] = 0;
              abStack_150[0] = 0;
              abStack_150[1] = 0;
              abStack_150[2] = 0;
              abStack_150[3] = 0;
              abStack_150[4] = 0;
              abStack_150[5] = 0;
              abStack_150[6] = 0;
              abStack_150[7] = 0;
              pbVar24 = abStack_150;
              goto LAB_10172ec64;
            }
            pppppppcStack_178 = (code *******)pppppppcVar35[2];
            pppppppcStack_180 = (code *******)pppppppcVar35[3];
            func_0x000107c5ec30();
            pppppppcStack_188 = pppppppcVar35;
            if (pppppppcVar13 == (code *******)0x0) {
              pcVar10 = (code *)0x0;
            }
            else {
              pppppppcVar35 = pppppppcVar13;
              func_0x000107c5ec3c();
              if (SBORROW8((long)pppppppcStack_178,(long)pppppppcVar35)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0d0);
                (*pcVar10)();
              }
              pcVar10 = (code *)((long)pppppppcVar13 +
                                ((long)pppppppcStack_178 - (long)pppppppcVar35));
              pppppppcVar13 = pppppppcVar35;
            }
            pppppppcVar27 = (code *******)((long)pppppppcStack_180 - (long)pppppppcStack_178);
            if (SBORROW8((long)pppppppcStack_180,(long)pppppppcStack_178)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f0cc);
              (*pcVar10)();
            }
            func_0x000107c5ec38();
            pppppppcVar35 = pppppppcStack_188;
            if (pcVar10 == (code *)0x0) {
              pcVar22 = (code *)0x0;
            }
            else {
              if ((long)pppppppcVar27 <= (long)pppppppcVar13) {
                pppppppcVar13 = pppppppcVar27;
              }
              pcVar22 = (code *)((long)pppppppcVar13 + (long)pcVar10);
            }
LAB_10172f004:
            unaff_x20 = pppppppcStack_160;
            unaff_x21 = pppppppcStack_168;
            func_0x000100e25bdc(abStack_150,pcVar10,pcVar22,pppppppcStack_160,unaff_x26);
            func_0x00010006c090(unaff_x20,unaff_x26);
            func_0x000107c61574(pppppppcVar37);
            func_0x00010006c090(pppppppcVar35);
            func_0x000107c61574(unaff_x19);
            pppppppcVar27 = pppppppcStack_170;
            bVar9 = abStack_150[0];
          }
          pppppppcStack_170 = pppppppcVar27;
          pppppppcVar13 = unaff_x21;
          if ((bVar9 & 1) == 0) goto LAB_10172f078;
        }
        pppppppcStack_168 = pppppppcVar13;
        unaff_x28 = pppppppcVar43 + 3;
        unaff_x27 = pppppppcVar11 + 3;
        pppppppcVar33 = (code *******)((long)pppppppcVar33 + -1);
        pppppppcVar13 = pppppppcVar27;
        pppppppcVar11 = unaff_x27;
        pppppppcVar43 = unaff_x28;
      } while (pppppppcVar33 != (code *******)0x0);
    }
    pppppppcVar13 = (code *******)0x1;
    unaff_x21 = pppppppcVar27;
    pppppppcVar11 = unaff_x27;
    pppppppcVar43 = unaff_x28;
  }
  else {
LAB_10172f078:
    pppppppcVar13 = (code *******)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_138) {
    return;
  }
  func_0x000107c60e78();
  uStack_198 = 0x10172f0d8;
  lStack_200 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar27 = (code *******)pppppppcVar13[2];
  pppppppcStack_1f0 = pppppppcVar43;
  pppppppcStack_1e8 = pppppppcVar11;
  pppppppcStack_1e0 = unaff_x26;
  pppppppcStack_1d8 = pppppppcVar37;
  pppppppcStack_1d0 = pppppppcVar35;
  pppppppcStack_1c8 = unaff_x23;
  pppppppcStack_1c0 = unaff_x19;
  pppppppcStack_1b8 = unaff_x21;
  pppppppcStack_1b0 = unaff_x20;
  pppppppcStack_1a8 = pppppppcVar33;
  ppuStack_1a0 = &puStack_e0;
  if (pppppppcVar27 == (code *******)pppppppcVar23[2]) {
    if ((pppppppcVar27 != (code *******)0x0) && (pppppppcVar13 != pppppppcVar23)) {
      pppppppcVar35 = pppppppcVar13 + 4;
      pppppppcVar37 = pppppppcVar23 + 4;
      pppppppcVar23 = (code *******)0x0;
      do {
        unaff_x21 = pppppppcVar23;
        unaff_x26 = (code *******)((long)pppppppcVar27 + -1);
        unaff_x23 = (code *******)0xc000000000000000;
        ppppppcStack_298 = pppppppcVar35[9];
        pppppppcStack_2a0 = (code *******)pppppppcVar35[8];
        ppppppcStack_288 = pppppppcVar35[0xb];
        pppppppcStack_290 = (code *******)pppppppcVar35[10];
        pppppppcStack_280 = (code *******)pppppppcVar35[0xc];
        pppppppcVar23 = (code *******)pppppppcVar35[1];
        ppppppcVar38 = *pppppppcVar35;
        ppppppcStack_2c8 = pppppppcVar35[3];
        ppppppcStack_2d0 = pppppppcVar35[2];
        ppppppcStack_2b8 = pppppppcVar35[5];
        pppppppcStack_2c0 = (code *******)pppppppcVar35[4];
        ppppppcStack_2a8 = pppppppcVar35[7];
        pppppppcStack_2b0 = (code *******)pppppppcVar35[6];
        pppppppcStack_268 = (code *******)pppppppcVar37[1];
        ppppppcStack_270 = *pppppppcVar37;
        ppppppcStack_258 = pppppppcVar37[3];
        ppppppcStack_260 = pppppppcVar37[2];
        ppppppcStack_248 = pppppppcVar37[5];
        pppppppcStack_250 = (code *******)pppppppcVar37[4];
        ppppppcStack_238 = pppppppcVar37[7];
        pppppppcStack_240 = (code *******)pppppppcVar37[6];
        ppppppcStack_228 = pppppppcVar37[9];
        pppppppcStack_230 = (code *******)pppppppcVar37[8];
        pppppppcStack_218 = (code *******)pppppppcVar37[0xb];
        pppppppcStack_220 = (code *******)pppppppcVar37[10];
        pppppppcStack_210 = (code *******)pppppppcVar37[0xc];
        ppppppcStack_2e0 = ppppppcVar38;
        pppppppcStack_2d8 = pppppppcVar23;
        if (((((((ppppppcVar38 != ppppppcStack_270) || (pppppppcVar23 != pppppppcStack_268)) &&
               (func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)) ||
              (ppppppcStack_2d0 != ppppppcStack_260)) ||
             (((ppppppcStack_2c8 != ppppppcStack_258 || (pppppppcStack_2c0 != pppppppcStack_250)) &&
              (ppppppcVar38 = ppppppcStack_2c8, pppppppcVar23 = pppppppcStack_2c0,
              func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)))) ||
            ((((ppppppcStack_2b8 != ppppppcStack_248 || (pppppppcStack_2b0 != pppppppcStack_240)) &&
              (ppppppcVar38 = ppppppcStack_2b8, pppppppcVar23 = pppppppcStack_2b0,
              func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)) ||
             (((ppppppcStack_2a8 != ppppppcStack_238 || (pppppppcStack_2a0 != pppppppcStack_230)) &&
              (ppppppcVar38 = ppppppcStack_2a8, pppppppcVar23 = pppppppcStack_2a0,
              func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)))))) ||
           (((pppppppcVar23 = pppppppcStack_290, ppppppcStack_298 != ppppppcStack_228 ||
             (pppppppcStack_290 != pppppppcStack_220)) &&
            (ppppppcVar38 = ppppppcStack_298, func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)
            ))) goto LAB_10172f5ac;
        pppppppcVar33 = pppppppcStack_210;
        unaff_x19 = pppppppcStack_218;
        pppppppcVar43 = pppppppcStack_280;
        uVar7 = (uint)((ulong)pppppppcStack_280 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)pppppppcStack_210 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)ppppppcStack_288;
        pppppppcVar27 = unaff_x26;
        if ((ulong)pppppppcStack_280 >> 0x3e == 3) {
          uVar30 = 0;
          if (((ppppppcStack_288 != (code ******)0x0) ||
              (pppppppcStack_280 != (code *******)0xc000000000000000)) ||
             (((ulong)pppppppcStack_210 >> 0x3e < 3 ||
              ((uVar30 = 0, pppppppcStack_218 != (code *******)0x0 ||
               (pppppppcStack_210 != (code *******)0xc000000000000000))))))
          goto joined_r0x00010172f42c;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)pppppppcStack_280 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)ppppppcStack_288 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f5f8);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x00010172f42c:
            if (uVar8 >> 0x1e < 2) goto LAB_10172f2cc;
LAB_10172f298:
            if (uVar31 != 2) {
              if (uVar30 == 0) goto joined_r0x00010172f5a0;
              goto LAB_10172f5ac;
            }
            uVar32 = (long)pppppppcStack_218[3] - (long)pppppppcStack_218[2];
            if (SBORROW8((long)pppppppcStack_218[3],(long)pppppppcStack_218[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f5ec);
              (*pcVar10)();
            }
          }
          else {
            if (uVar26 == 2) {
              uVar30 = (long)ppppppcStack_288[3] - (long)ppppppcStack_288[2];
              if (SBORROW8((long)ppppppcStack_288[3],(long)ppppppcStack_288[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f5f4);
                (*pcVar10)();
              }
              goto joined_r0x00010172f42c;
            }
            uVar30 = 0;
            if (1 < uVar31) goto LAB_10172f298;
LAB_10172f2cc:
            if (uVar31 == 0) {
              uVar32 = (ulong)pppppppcStack_210 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)pppppppcStack_218 >> 0x20);
              if (SBORROW4(iVar29,(int)pppppppcStack_218)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f5f0);
                (*pcVar10)();
              }
              uVar32 = (ulong)(iVar29 - (int)pppppppcStack_218);
            }
          }
          if (uVar30 != uVar32) goto LAB_10172f5ac;
          if (0 < (long)uVar30) {
            if (uVar26 < 2) {
              if (uVar26 == 0) {
                uStack_360._0_1_ = SUB81(ppppppcStack_288,0);
                uStack_360._1_1_ = (undefined1)((ulong)ppppppcStack_288 >> 8);
                uStack_360._2_1_ = (undefined1)((ulong)ppppppcStack_288 >> 0x10);
                uStack_360._3_1_ = (undefined1)((ulong)ppppppcStack_288 >> 0x18);
                uStack_360._4_1_ = (undefined1)((ulong)ppppppcStack_288 >> 0x20);
                uStack_360._5_1_ = (undefined1)((ulong)ppppppcStack_288 >> 0x28);
                uStack_360._6_1_ = (undefined1)((ulong)ppppppcStack_288 >> 0x30);
                uStack_360._7_1_ = (undefined1)((ulong)ppppppcStack_288 >> 0x38);
                uStack_358 = SUB81(pppppppcStack_280,0);
                uStack_357 = (undefined1)((ulong)pppppppcStack_280 >> 8);
                uStack_356 = (undefined1)((ulong)pppppppcStack_280 >> 0x10);
                uStack_355 = (undefined1)((ulong)pppppppcStack_280 >> 0x18);
                uStack_354 = (undefined1)((ulong)pppppppcStack_280 >> 0x20);
                uStack_353 = (undefined1)((ulong)pppppppcStack_280 >> 0x28);
                pppppppcVar23 =
                     (code *******)((long)&uStack_360 + ((ulong)pppppppcStack_280 >> 0x30 & 0xff));
                func_0x000101739324(&ppppppcStack_2e0,abStack_348);
                func_0x000101739324(&ppppppcStack_270,abStack_348);
                unaff_x20 = pppppppcVar23;
                goto LAB_10172f4e8;
              }
              lVar34 = (long)iVar36;
              pppppppcVar11 = (code *******)(((long)ppppppcStack_288 >> 0x20) - lVar34);
              pppppppcStack_368 = unaff_x26;
              if ((long)ppppppcStack_288 >> 0x20 < lVar34) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f5fc);
                (*pcVar10)();
              }
              func_0x000101739324(&ppppppcStack_2e0,abStack_348);
              pppppppcVar13 = &ppppppcStack_270;
              func_0x000101739324(pppppppcVar13,abStack_348);
              func_0x000107c5ec30();
              if (pppppppcVar13 == (code *******)0x0) {
                func_0x000107c5ec38();
                pcVar10 = (code *)0x0;
LAB_10172f52c:
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                pppppppcVar23 = pppppppcVar13;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar34,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f608);
                  (*pcVar10)();
                }
                pcVar10 = (code *)((long)pppppppcVar13 + (lVar34 - (long)pppppppcVar23));
                func_0x000107c5ec38();
                if (pcVar10 == (code *)0x0) goto LAB_10172f52c;
                if ((long)pppppppcVar11 <= (long)pppppppcVar23) {
                  pppppppcVar23 = pppppppcVar11;
                }
                pppppppcVar23 = (code *******)((long)pppppppcVar23 + (long)pcVar10);
              }
              unaff_x23 = (code *******)0xc000000000000000;
              func_0x000100e25bdc(abStack_348,pcVar10,pppppppcVar23,unaff_x19,pppppppcVar33);
              func_0x000101739358(&ppppppcStack_270);
              func_0x000101739358(&ppppppcStack_2e0);
              unaff_x26 = pppppppcStack_368;
            }
            else {
              if (uVar26 != 2) {
                uStack_358 = 0;
                uStack_357 = 0;
                uStack_356 = 0;
                uStack_355 = 0;
                uStack_354 = 0;
                uStack_353 = 0;
                uStack_360._0_1_ = 0;
                uStack_360._1_1_ = 0;
                uStack_360._2_1_ = 0;
                uStack_360._3_1_ = 0;
                uStack_360._4_1_ = 0;
                uStack_360._5_1_ = 0;
                uStack_360._6_1_ = 0;
                uStack_360._7_1_ = 0;
                func_0x000101739324(&ppppppcStack_2e0,abStack_348);
                func_0x000101739324(&ppppppcStack_270,abStack_348);
                pppppppcVar23 = (code *******)&uStack_360;
LAB_10172f4e8:
                func_0x000100e25bdc(abStack_348,&uStack_360,pppppppcVar23,unaff_x19,pppppppcVar33);
                func_0x000101739358(&ppppppcStack_270);
                func_0x000101739358(&ppppppcStack_2e0);
                if ((abStack_348[0] & 1) != 0) goto joined_r0x00010172f5a0;
                goto LAB_10172f5ac;
              }
              pppppppcVar11 = (code *******)ppppppcStack_288[2];
              pppppcVar3 = ppppppcStack_288[3];
              pppppppcStack_368 = unaff_x21;
              func_0x000101739324(&ppppppcStack_2e0,abStack_348);
              unaff_x23 = &ppppppcStack_270;
              func_0x000101739324(unaff_x23,abStack_348);
              func_0x000107c5ec30();
              pppppppcVar23 = unaff_x23;
              if (unaff_x23 != (code *******)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)pppppppcVar11,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f604);
                  (*pcVar10)();
                }
                unaff_x23 = (code *******)
                            ((long)unaff_x23 + ((long)pppppppcVar11 - (long)pppppppcVar23));
              }
              pppppppcVar13 = (code *******)((long)pppppcVar3 - (long)pppppppcVar11);
              if (SBORROW8((long)pppppcVar3,(long)pppppppcVar11)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10172f600);
                (*pcVar10)();
              }
              func_0x000107c5ec38();
              unaff_x21 = pppppppcStack_368;
              if (unaff_x23 == (code *******)0x0) {
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                if ((long)pppppppcVar13 <= (long)pppppppcVar23) {
                  pppppppcVar23 = pppppppcVar13;
                }
                pppppppcVar23 = (code *******)((long)pppppppcVar23 + (long)unaff_x23);
              }
              func_0x000100e25bdc(abStack_348,unaff_x23,pppppppcVar23,unaff_x19,pppppppcVar33);
              func_0x000101739358(&ppppppcStack_270);
              func_0x000101739358(&ppppppcStack_2e0);
            }
            unaff_x20 = (code *******)((ulong)pppppppcVar43 & 0x3fffffffffffffff);
            pppppppcVar27 = unaff_x26;
            if ((abStack_348[0] & 1) == 0) goto LAB_10172f5ac;
          }
        }
joined_r0x00010172f5a0:
        unaff_x23 = (code *******)0xc000000000000000;
        unaff_x26 = (code *******)0x0;
        if (pppppppcVar27 == (code *******)0x0) break;
        pppppppcVar35 = pppppppcVar35 + 0xd;
        pppppppcVar37 = pppppppcVar37 + 0xd;
        pppppppcVar23 = unaff_x21;
      } while( true );
    }
    pppppppcVar13 = (code *******)0x1;
  }
  else {
LAB_10172f5ac:
    pppppppcVar13 = (code *******)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_200) {
    return;
  }
  func_0x000107c60e78();
  uStack_378 = 0x10172f60c;
  lStack_3e8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar28 = (code *******)pppppppcVar13[2];
  pppppppcVar27 = pppppppcVar37;
  pppppppcStack_3d0 = pppppppcVar43;
  pppppppcStack_3c8 = pppppppcVar11;
  pppppppcStack_3c0 = unaff_x26;
  pppppppcStack_3b8 = pppppppcVar37;
  pppppppcStack_3b0 = pppppppcVar35;
  pppppppcStack_3a8 = unaff_x23;
  pppppppcStack_3a0 = unaff_x19;
  pppppppcStack_398 = unaff_x21;
  pppppppcStack_390 = unaff_x20;
  pppppppcStack_388 = pppppppcVar33;
  pppuStack_380 = &ppuStack_1a0;
  if (pppppppcVar28 == (code *******)pppppppcVar23[2]) {
    if ((pppppppcVar28 != (code *******)0x0) && (pppppppcVar13 != pppppppcVar23)) {
      pppppppcStack_6e0 = (code *******)0x0;
      pppppppcVar11 = pppppppcVar13 + 7;
      pppppppcVar33 = pppppppcVar23 + 7;
      pppppppcVar13 = unaff_x19;
      pppppppcVar27 = unaff_x23;
      do {
        pppppppcVar35 = (code *******)&UNK_10d982678;
        pppppppcVar43 = (code *******)0x112dc4818;
        pppppppcVar37 = (code *******)((long)pppppppcVar28 + -1);
        unaff_x26 = (code *******)&pppppppcStack_460;
        ppppppcStack_498 = pppppppcVar11[6];
        ppppppcStack_4a0 = pppppppcVar11[5];
        ppppppcStack_488 = pppppppcVar11[8];
        ppppppcStack_490 = pppppppcVar11[7];
        ppppppcStack_478 = pppppppcVar11[10];
        ppppppcStack_480 = pppppppcVar11[9];
        ppppppcStack_470 = pppppppcVar11[0xb];
        ppppppcStack_4d8 = pppppppcVar11[-2];
        pppppppcStack_4e0 = (code *******)pppppppcVar11[-3];
        ppppppcStack_4c8 = *pppppppcVar11;
        pppppppcStack_4d0 = (code *******)pppppppcVar11[-1];
        ppppppcStack_4b8 = pppppppcVar11[2];
        ppppppcStack_4c0 = pppppppcVar11[1];
        ppppppcStack_4a8 = pppppppcVar11[4];
        ppppppcStack_4b0 = pppppppcVar11[3];
        pppppppcStack_458 = (code *******)pppppppcVar33[-2];
        pppppppcStack_460 = (code *******)pppppppcVar33[-3];
        ppppppcStack_448 = *pppppppcVar33;
        pppppppcStack_450 = (code *******)pppppppcVar33[-1];
        ppppppcStack_438 = pppppppcVar33[2];
        ppppppcStack_440 = pppppppcVar33[1];
        ppppppcStack_428 = pppppppcVar33[4];
        ppppppcStack_430 = pppppppcVar33[3];
        ppppppcStack_418 = pppppppcVar33[6];
        ppppppcStack_420 = pppppppcVar33[5];
        ppppppcStack_408 = pppppppcVar33[8];
        ppppppcStack_410 = pppppppcVar33[7];
        ppppppcStack_3f8 = pppppppcVar33[10];
        ppppppcStack_400 = pppppppcVar33[9];
        ppppppcStack_3f0 = pppppppcVar33[0xb];
        pppppppcStack_578 = (code *******)pppppppcVar11[5];
        pppppppcVar39 = (code *******)pppppppcVar11[4];
        ppppppcStack_568 = pppppppcVar11[7];
        pppppppcStack_570 = (code *******)pppppppcVar11[6];
        ppppppcStack_558 = pppppppcVar11[9];
        ppppppcVar40 = pppppppcVar11[8];
        pppppppcStack_548 = (code *******)pppppppcVar11[0xb];
        ppppppcStack_550 = pppppppcVar11[10];
        ppppppcVar42 = pppppppcVar11[1];
        ppppppcVar38 = *pppppppcVar11;
        pppppppcVar12 = (code *******)pppppppcVar11[3];
        pppppppcVar28 = (code *******)pppppppcVar11[2];
        uStack_598 = SUB81(ppppppcVar42,0);
        uStack_597 = (undefined1)((ulong)ppppppcVar42 >> 8);
        uStack_596 = (undefined1)((ulong)ppppppcVar42 >> 0x10);
        uStack_595 = (undefined1)((ulong)ppppppcVar42 >> 0x18);
        uStack_594 = (undefined1)((ulong)ppppppcVar42 >> 0x20);
        uStack_593 = (undefined1)((ulong)ppppppcVar42 >> 0x28);
        uStack_592 = (undefined2)((ulong)ppppppcVar42 >> 0x30);
        uStack_5a0._0_1_ = (byte)ppppppcVar38;
        uStack_5a0._1_1_ = (undefined1)((ulong)ppppppcVar38 >> 8);
        uStack_5a0._2_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x10);
        uStack_5a0._3_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x18);
        uStack_5a0._4_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x20);
        uStack_5a0._5_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x28);
        uStack_5a0._6_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x30);
        uStack_5a0._7_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x38);
        ppppppcStack_518 = pppppppcVar33[5];
        ppppppcStack_520 = pppppppcVar33[4];
        ppppppcStack_508 = pppppppcVar33[7];
        ppppppcStack_510 = pppppppcVar33[6];
        ppppppcStack_4f8 = pppppppcVar33[9];
        ppppppcStack_500 = pppppppcVar33[8];
        ppppppcStack_4e8 = pppppppcVar33[0xb];
        ppppppcStack_4f0 = pppppppcVar33[10];
        ppppppcStack_538 = pppppppcVar33[1];
        ppppppcStack_540 = *pppppppcVar33;
        ppppppcStack_528 = pppppppcVar33[3];
        ppppppcStack_530 = pppppppcVar33[2];
        pppppppcStack_590 = pppppppcVar28;
        pppppppcStack_588 = pppppppcVar12;
        pppppppcStack_580 = pppppppcVar39;
        uStack_560 = ppppppcVar40;
        if (ppppppcVar42 != (code ******)0x0) {
          if (ppppppcStack_538 == (code ******)0x0) goto LAB_1017301b8;
          uStack_560._1_1_ = (byte)((ulong)ppppppcVar40 >> 8);
          uStack_71c = (uint)uStack_560._1_1_;
          uStack_560._0_1_ = (byte)ppppppcVar40;
          uStack_70c = (uint)(byte)uStack_560;
          ppppppcStack_6b8 = pppppppcVar33[1];
          ppppppcStack_6c0 = *pppppppcVar33;
          pppppppcVar23 = (code *******)pppppppcVar33[3];
          pppppppcVar35 = (code *******)pppppppcVar33[2];
          pppppppcVar27 = (code *******)pppppppcVar33[5];
          pppppppcVar41 = (code *******)pppppppcVar33[4];
          ppppppcStack_708 = pppppppcVar33[7];
          pppppppcVar43 = (code *******)pppppppcVar33[6];
          ppppppcStack_738 = pppppppcVar33[9];
          ppppppcVar40 = pppppppcVar33[8];
          pppppppcStack_6e8 = (code *******)pppppppcVar33[0xb];
          ppppppcStack_718 = pppppppcVar33[10];
          uStack_680._0_1_ = (byte)ppppppcVar40;
          uStack_710 = (uint)(byte)uStack_680;
          uStack_680._1_1_ = (byte)((ulong)ppppppcVar40 >> 8);
          uStack_720 = (uint)uStack_680._1_1_;
          ppppppcStack_748 = ppppppcStack_550;
          pppppppcStack_740 = pppppppcVar37;
          ppppppcStack_730 = ppppppcStack_558;
          pppppppcStack_728 = pppppppcStack_548;
          ppppppcStack_700 = ppppppcStack_568;
          pppppppcStack_6f8 = pppppppcStack_570;
          pppppppcStack_6f0 = pppppppcStack_578;
          pppppppcStack_6b0 = pppppppcVar35;
          pppppppcStack_6a8 = pppppppcVar23;
          pppppppcStack_6a0 = pppppppcVar41;
          pppppppcStack_698 = pppppppcVar27;
          pppppppcStack_690 = pppppppcVar43;
          ppppppcStack_688 = ppppppcStack_708;
          uStack_680 = ppppppcVar40;
          ppppppcStack_678 = ppppppcStack_738;
          ppppppcStack_670 = ppppppcStack_718;
          pppppppcStack_668 = pppppppcStack_6e8;
          if (((((ppppppcVar38 == ppppppcStack_6c0) && (ppppppcStack_6b8 == ppppppcVar42)) ||
               (func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) != 0)) &&
              (((pppppppcVar28 == pppppppcVar35 && (pppppppcVar12 == pppppppcVar23)) ||
               (pppppppcVar37 = pppppppcVar28,
               func_0x000107c605b8(pppppppcVar28,pppppppcVar12,pppppppcVar35,pppppppcVar23,0),
               ((ulong)pppppppcVar37 & 1) != 0)))) &&
             ((((pppppppcVar39 == pppppppcVar41 && (pppppppcStack_6f0 == pppppppcVar27)) ||
               (pppppppcVar23 = pppppppcVar39,
               func_0x000107c605b8(pppppppcVar39,pppppppcStack_6f0,pppppppcVar41,pppppppcVar27,0),
               ((ulong)pppppppcVar23 & 1) != 0)) &&
              ((((pppppppcStack_6f8 == pppppppcVar43 && (ppppppcStack_700 == ppppppcStack_708)) ||
                (pppppppcVar23 = pppppppcStack_6f8,
                func_0x000107c605b8(pppppppcStack_6f8,ppppppcStack_700,pppppppcVar43,
                                    ppppppcStack_708,0), ((ulong)pppppppcVar23 & 1) != 0)) &&
               (pppppppcVar23 = pppppppcStack_6e8, pppppppcVar13 = pppppppcStack_728,
               pppppppcVar37 = pppppppcStack_740, ((uStack_710 ^ uStack_70c) & 1) == 0)))))) {
            pppppppcVar39 = (code *******)&pppppppcStack_460;
            if ((((uStack_720 ^ uStack_71c) & 1) != 0) || (ppppppcStack_730 != ppppppcStack_738)) {
LAB_1017300e8:
              FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
              FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
              FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
              pppppppcVar37 = pppppppcVar35;
              goto LAB_10173012c;
            }
            uVar7 = (uint)((ulong)pppppppcStack_728 >> 0x20);
            uVar26 = uVar7 >> 0x1e;
            uVar8 = (uint)((ulong)pppppppcStack_6e8 >> 0x20);
            uVar31 = uVar8 >> 0x1e;
            iVar36 = (int)ppppppcStack_748;
            pppppppcVar41 = pppppppcStack_6e8;
            pppppppcVar35 = pppppppcStack_740;
            if ((ulong)pppppppcStack_728 >> 0x3e == 3) {
              uVar30 = 0;
              if (((ppppppcStack_748 != (code ******)0x0) ||
                  (pppppppcStack_728 != (code *******)0xc000000000000000)) ||
                 (((ulong)pppppppcStack_6e8 >> 0x3e < 3 ||
                  ((uVar30 = 0, ppppppcStack_718 != (code ******)0x0 ||
                   (pppppppcStack_6e8 != (code *******)0xc000000000000000))))))
              goto joined_r0x00010172f98c;
LAB_10172fa9c:
              FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
              FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
              FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
              FUN_10173194c(&ppppppcStack_448,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
              func_0x000101731994(&ppppppcStack_6c0,0x112dc4818,&UNK_10d982678);
              pppppppcVar13 = pppppppcVar28;
              goto LAB_10172fd2c;
            }
            if (uVar7 >> 0x1e < 2) {
              if (uVar26 == 0) {
                uVar30 = (ulong)pppppppcStack_728 >> 0x30 & 0xff;
              }
              else {
                iVar29 = (int)((ulong)ppppppcStack_748 >> 0x20);
                if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10173026c);
                  (*pcVar10)();
                }
                uVar30 = (ulong)(iVar29 - iVar36);
              }
joined_r0x00010172f98c:
              if (uVar8 >> 0x1e < 2) goto LAB_10172f990;
LAB_10172f958:
              pppppppcVar43 = (code *******)0x112dc4818;
              pppppppcVar12 = (code *******)&UNK_10d982678;
              if (uVar31 != 2) {
                if (uVar30 != 0) goto LAB_1017300e8;
                goto LAB_10172fa9c;
              }
              uVar32 = (long)ppppppcStack_718[3] - (long)ppppppcStack_718[2];
              if (SBORROW8((long)ppppppcStack_718[3],(long)ppppppcStack_718[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730254);
                (*pcVar10)();
              }
            }
            else {
              if (uVar26 == 2) {
                uVar30 = (long)ppppppcStack_748[3] - (long)ppppppcStack_748[2];
                if (SBORROW8((long)ppppppcStack_748[3],(long)ppppppcStack_748[2])) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730270);
                  (*pcVar10)();
                }
                goto joined_r0x00010172f98c;
              }
              uVar30 = 0;
              if (1 < uVar31) goto LAB_10172f958;
LAB_10172f990:
              if (uVar31 == 0) {
                uVar32 = (ulong)pppppppcStack_6e8 >> 0x30 & 0xff;
              }
              else {
                iVar29 = (int)((ulong)ppppppcStack_718 >> 0x20);
                if (SBORROW4(iVar29,(int)ppppppcStack_718)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730258);
                  (*pcVar10)();
                }
                uVar32 = (ulong)(iVar29 - (int)ppppppcStack_718);
              }
            }
            pppppppcVar43 = (code *******)0x112dc4818;
            pppppppcVar12 = (code *******)&UNK_10d982678;
            if (uVar30 != uVar32) goto LAB_1017300e8;
            if ((long)uVar30 < 1) goto LAB_10172fa9c;
            if (uVar26 < 2) {
              if (uVar26 == 0) {
                uStack_6d8._0_1_ = SUB81(ppppppcStack_748,0);
                uStack_6d8._1_1_ = (undefined1)((ulong)ppppppcStack_748 >> 8);
                uStack_6d8._2_1_ = (undefined1)((ulong)ppppppcStack_748 >> 0x10);
                uStack_6d8._3_1_ = (undefined1)((ulong)ppppppcStack_748 >> 0x18);
                uStack_6d8._4_1_ = (undefined1)((ulong)ppppppcStack_748 >> 0x20);
                uStack_6d8._5_1_ = (undefined1)((ulong)ppppppcStack_748 >> 0x28);
                uStack_6d8._6_1_ = (undefined1)((ulong)ppppppcStack_748 >> 0x30);
                uStack_6d8._7_1_ = (undefined1)((ulong)ppppppcStack_748 >> 0x38);
                uStack_6d0 = SUB81(pppppppcStack_728,0);
                uStack_6cf = (undefined1)((ulong)pppppppcStack_728 >> 8);
                uStack_6ce = (undefined1)((ulong)pppppppcStack_728 >> 0x10);
                uStack_6cd = (undefined1)((ulong)pppppppcStack_728 >> 0x18);
                uStack_6cc = (undefined1)((ulong)pppppppcStack_728 >> 0x20);
                uStack_6cb = (undefined1)((ulong)pppppppcStack_728 >> 0x28);
                pppppppcVar35 =
                     (code *******)((long)&uStack_6d8 + ((ulong)pppppppcStack_728 >> 0x30 & 0xff));
                FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
                FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
                FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
                FUN_10173194c(&ppppppcStack_448,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
                unaff_x20 = pppppppcVar35;
LAB_10172fcc8:
                pppppppcVar14 = (code *******)&uStack_6d8;
                pppppppcVar13 = pppppppcVar28;
              }
              else {
                pppppppcVar27 = (code *******)(long)iVar36;
                pppppppcStack_6f0 =
                     (code *******)(((long)ppppppcStack_748 >> 0x20) - (long)pppppppcVar27);
                if ((long)ppppppcStack_748 >> 0x20 < (long)pppppppcVar27) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10173027c);
                  (*pcVar10)();
                }
                FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
                FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
                FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
                pppppppcVar14 = &ppppppcStack_448;
                FUN_10173194c(pppppppcVar14,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
                func_0x000107c5ec30();
                if (pppppppcVar14 == (code *******)0x0) {
                  func_0x000107c5ec38();
                  pppppppcVar14 = (code *******)0x0;
LAB_10172fce0:
                  pppppppcVar35 = (code *******)0x0;
                }
                else {
                  pppppppcVar35 = pppppppcVar14;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)pppppppcVar27,(long)pppppppcVar35)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x101730288);
                    (*pcVar10)();
                  }
                  pppppppcVar14 =
                       (code *******)
                       ((long)pppppppcVar14 + ((long)pppppppcVar27 - (long)pppppppcVar35));
                  func_0x000107c5ec38();
                  if (pppppppcVar14 == (code *******)0x0) goto LAB_10172fce0;
                  if ((long)pppppppcStack_6f0 <= (long)pppppppcVar35) {
                    pppppppcVar35 = pppppppcStack_6f0;
                  }
                  pppppppcVar35 = (code *******)((long)pppppppcVar35 + (long)pppppppcVar14);
                }
                unaff_x20 = (code *******)((ulong)pppppppcVar13 & 0x3fffffffffffffff);
                pppppppcVar23 = pppppppcStack_6e8;
              }
            }
            else {
              if (uVar26 != 2) {
                uStack_6d0 = 0;
                uStack_6cf = 0;
                uStack_6ce = 0;
                uStack_6cd = 0;
                uStack_6cc = 0;
                uStack_6cb = 0;
                uStack_6d8._0_1_ = 0;
                uStack_6d8._1_1_ = 0;
                uStack_6d8._2_1_ = 0;
                uStack_6d8._3_1_ = 0;
                uStack_6d8._4_1_ = 0;
                uStack_6d8._5_1_ = 0;
                uStack_6d8._6_1_ = 0;
                uStack_6d8._7_1_ = 0;
                FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
                FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
                FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
                FUN_10173194c(&ppppppcStack_448,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
                pppppppcVar35 = (code *******)&uStack_6d8;
                unaff_x20 = pppppppcVar13;
                goto LAB_10172fcc8;
              }
              pppppcVar3 = ppppppcStack_748[2];
              pppppppcStack_6f0 = (code *******)ppppppcStack_748[3];
              FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
              FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
              FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
              pppppppcVar14 = &ppppppcStack_448;
              FUN_10173194c(pppppppcVar14,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
              func_0x000107c5ec30();
              pppppppcVar35 = pppppppcVar14;
              pppppppcVar27 = pppppppcVar13;
              if (pppppppcVar14 != (code *******)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)pppppcVar3,(long)pppppppcVar35)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730284);
                  (*pcVar10)();
                }
                pppppppcVar14 =
                     (code *******)((long)pppppppcVar14 + ((long)pppppcVar3 - (long)pppppppcVar35));
                pppppppcVar27 = pppppppcStack_728;
              }
              pppppppcVar13 = (code *******)((long)pppppppcStack_6f0 - (long)pppppcVar3);
              if (SBORROW8((long)pppppppcStack_6f0,(long)pppppcVar3)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730280);
                (*pcVar10)();
              }
              unaff_x20 = (code *******)((ulong)pppppppcVar27 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              pppppppcVar23 = pppppppcStack_6e8;
              if (pppppppcVar14 == (code *******)0x0) {
                pppppppcVar35 = (code *******)0x0;
              }
              else {
                if ((long)pppppppcVar13 <= (long)pppppppcVar35) {
                  pppppppcVar35 = pppppppcVar13;
                }
                pppppppcVar35 = (code *******)((long)pppppppcVar35 + (long)pppppppcVar14);
              }
            }
            pppppppcVar41 = pppppppcStack_6e0;
            func_0x000100e25bdc(&ppppppcStack_660,pppppppcVar14,pppppppcVar35,ppppppcStack_718,
                                pppppppcVar23);
            pppppppcStack_6e0 = pppppppcVar41;
            func_0x000101731994(&ppppppcStack_6c0,0x112dc4818,&UNK_10d982678);
            pppppppcVar28 = pppppppcVar13;
            if (((ulong)ppppppcStack_660 & 1) != 0) goto LAB_10172fd2c;
          }
          else {
            FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
            FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
            FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
            pppppppcVar37 = pppppppcVar35;
LAB_10173012c:
            unaff_x20 = (code *******)&UNK_10d982678;
            pppppppcVar33 = (code *******)0x112dc4818;
            FUN_10173194c(&ppppppcStack_448,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
            func_0x000101731994(&ppppppcStack_6c0,0x112dc4818,&UNK_10d982678);
          }
          pppppppcVar23 = (code *******)0x112dc4818;
          func_0x000101731994(&uStack_5a0,0x112dc4818,&UNK_10d982678);
          unaff_x26 = pppppppcVar39;
LAB_10173016c:
          unaff_x21 = pppppppcVar41;
          func_0x00010171da20(&pppppppcStack_460);
          func_0x00010171da20(&pppppppcStack_4e0);
          unaff_x19 = pppppppcVar28;
          unaff_x23 = pppppppcVar27;
          pppppppcVar35 = pppppppcVar12;
          pppppppcVar27 = pppppppcVar37;
          goto LAB_10173017c;
        }
        if (ppppppcStack_538 != (code ******)0x0) {
LAB_1017301b8:
          pppppppcVar33 = (code *******)0x112dc4818;
          unaff_x20 = (code *******)&UNK_10d982678;
          ppppppcStack_660 = ppppppcVar38;
          ppppppcStack_658 = ppppppcVar42;
          pppppppcStack_650 = pppppppcVar28;
          pppppppcStack_648 = pppppppcVar12;
          pppppppcStack_640 = pppppppcVar39;
          pppppppcStack_638 = pppppppcStack_578;
          pppppppcStack_630 = pppppppcStack_570;
          ppppppcStack_628 = ppppppcStack_568;
          ppppppcStack_620 = ppppppcVar40;
          ppppppcStack_618 = ppppppcStack_558;
          ppppppcStack_610 = ppppppcStack_550;
          pppppppcStack_608 = pppppppcStack_548;
          ppppppcStack_600 = ppppppcStack_540;
          ppppppcStack_5f8 = ppppppcStack_538;
          ppppppcStack_5f0 = ppppppcStack_530;
          ppppppcStack_5e8 = ppppppcStack_528;
          ppppppcStack_5e0 = ppppppcStack_520;
          ppppppcStack_5d8 = ppppppcStack_518;
          ppppppcStack_5d0 = ppppppcStack_510;
          ppppppcStack_5c8 = ppppppcStack_508;
          ppppppcStack_5c0 = ppppppcStack_500;
          ppppppcStack_5b8 = ppppppcStack_4f8;
          ppppppcStack_5b0 = ppppppcStack_4f0;
          ppppppcStack_5a8 = ppppppcStack_4e8;
          FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_6c0,0x112dc4818,&UNK_10d982678);
          FUN_10173194c(&ppppppcStack_448,&ppppppcStack_6c0,0x112dc4818,&UNK_10d982678);
          pppppppcVar23 = (code *******)0x112dc4820;
          func_0x000101731994(&ppppppcStack_660,0x112dc4820,&UNK_10d982680);
          unaff_x19 = pppppppcVar13;
          unaff_x23 = pppppppcVar27;
          pppppppcVar27 = pppppppcVar37;
          goto LAB_10173017c;
        }
        FUN_10171d9b0(&pppppppcStack_4e0,&ppppppcStack_660);
        FUN_10171d9b0(&pppppppcStack_460,&ppppppcStack_660);
        FUN_10173194c(&ppppppcStack_4c8,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
        FUN_10173194c(&ppppppcStack_448,&ppppppcStack_660,0x112dc4818,&UNK_10d982678);
LAB_10172fd2c:
        pppppppcVar41 = pppppppcStack_460;
        unaff_x20 = pppppppcStack_4e0;
        pppppppcVar43 = (code *******)0x112dc4818;
        unaff_x26 = (code *******)&pppppppcStack_460;
        pppppppcVar39 = (code *******)&uStack_5a0;
        pppppppcVar23 = pppppppcVar43;
        func_0x000101731994(pppppppcVar39,0x112dc4818,&UNK_10d982678);
        unaff_x23 = pppppppcStack_450;
        pppppppcVar35 = pppppppcStack_458;
        unaff_x19 = pppppppcStack_4d0;
        unaff_x21 = pppppppcStack_6e0;
        pppppppcVar28 = pppppppcVar13;
        pppppppcVar12 = (code *******)&UNK_10d982678;
        if (unaff_x20 != pppppppcVar41) goto LAB_10173016c;
        uVar7 = (uint)((ulong)pppppppcStack_4d0 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)pppppppcStack_450 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)ppppppcStack_4d8;
        pppppppcVar28 = pppppppcStack_4d0;
        pppppppcVar27 = pppppppcStack_450;
        pppppppcVar12 = pppppppcStack_458;
        if ((ulong)pppppppcStack_4d0 >> 0x3e == 3) {
          uVar30 = 0;
          if ((((ppppppcStack_4d8 != (code ******)0x0) ||
               (pppppppcStack_4d0 != (code *******)0xc000000000000000)) ||
              ((ulong)pppppppcStack_450 >> 0x3e < 3)) ||
             ((uVar30 = 0, pppppppcStack_458 != (code *******)0x0 ||
              (pppppppcStack_450 != (code *******)0xc000000000000000))))
          goto joined_r0x00010172fdac;
LAB_10172fea4:
          func_0x00010171da20(&pppppppcStack_460);
          func_0x00010171da20(&pppppppcStack_4e0);
          unaff_x21 = pppppppcVar41;
          pppppppcVar13 = pppppppcStack_6e0;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)pppppppcStack_4d0 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)ppppppcStack_4d8 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730260);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x00010172fdac:
            if (uVar8 >> 0x1e < 2) goto LAB_10172fde4;
LAB_10172fdb0:
            if (uVar31 != 2) {
              if (uVar30 != 0) goto LAB_10173016c;
              goto LAB_10172fea4;
            }
            uVar32 = (long)pppppppcStack_458[3] - (long)pppppppcStack_458[2];
            if (SBORROW8((long)pppppppcStack_458[3],(long)pppppppcStack_458[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101730250);
              (*pcVar10)();
            }
          }
          else {
            if (uVar26 == 2) {
              uVar30 = (long)ppppppcStack_4d8[3] - (long)ppppppcStack_4d8[2];
              if (SBORROW8((long)ppppppcStack_4d8[3],(long)ppppppcStack_4d8[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10173025c);
                (*pcVar10)();
              }
              goto joined_r0x00010172fdac;
            }
            uVar30 = 0;
            if (1 < uVar31) goto LAB_10172fdb0;
LAB_10172fde4:
            if (uVar31 == 0) {
              uVar32 = (ulong)pppppppcStack_450 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)pppppppcStack_458 >> 0x20);
              if (SBORROW4(iVar29,(int)pppppppcStack_458)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10173024c);
                (*pcVar10)();
              }
              uVar32 = (ulong)(iVar29 - (int)pppppppcStack_458);
            }
          }
          if (uVar30 != uVar32) goto LAB_10173016c;
          if ((long)uVar30 < 1) goto LAB_10172fea4;
          pppppppcVar27 = pppppppcVar37;
          if (uVar26 < 2) {
            if (uVar26 == 0) {
              uStack_5a0._0_1_ = (byte)ppppppcStack_4d8;
              uStack_5a0._1_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 8);
              uStack_5a0._2_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 0x10);
              uStack_5a0._3_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 0x18);
              uStack_5a0._4_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 0x20);
              uStack_5a0._5_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 0x28);
              uStack_5a0._6_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 0x30);
              uStack_5a0._7_1_ = (undefined1)((ulong)ppppppcStack_4d8 >> 0x38);
              uStack_598 = SUB81(pppppppcStack_4d0,0);
              uStack_597 = (undefined1)((ulong)pppppppcStack_4d0 >> 8);
              uStack_596 = (undefined1)((ulong)pppppppcStack_4d0 >> 0x10);
              uStack_595 = (undefined1)((ulong)pppppppcStack_4d0 >> 0x18);
              uStack_594 = (undefined1)((ulong)pppppppcStack_4d0 >> 0x20);
              uStack_593 = (undefined1)((ulong)pppppppcStack_4d0 >> 0x28);
              pppppppcVar23 =
                   (code *******)((long)&uStack_5a0 + ((ulong)pppppppcStack_4d0 >> 0x30 & 0xff));
LAB_10172ffb0:
              func_0x000100e25bdc(&ppppppcStack_660,&uStack_5a0,pppppppcVar23,pppppppcStack_458,
                                  pppppppcStack_450);
              func_0x00010171da20(&pppppppcStack_460);
              func_0x00010171da20(&pppppppcStack_4e0);
              pppppppcVar13 = unaff_x21;
              if (((ulong)ppppppcStack_660 & 1) != 0) goto LAB_101730078;
              goto LAB_10173017c;
            }
            unaff_x26 = (code *******)(long)iVar36;
            pppppppcVar27 = (code *******)(((long)ppppppcStack_4d8 >> 0x20) - (long)unaff_x26);
            if ((long)ppppppcStack_4d8 >> 0x20 < (long)unaff_x26) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101730264);
              (*pcVar10)();
            }
            func_0x000107c5ec30();
            if (pppppppcVar39 == (code *******)0x0) {
              func_0x000107c5ec38();
              lVar34 = 0;
LAB_10172ffe8:
              pppppppcVar23 = (code *******)0x0;
            }
            else {
              pppppppcVar23 = pppppppcVar39;
              func_0x000107c5ec3c();
              if (SBORROW8((long)unaff_x26,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730278);
                (*pcVar10)();
              }
              lVar34 = (long)pppppppcVar39 + ((long)unaff_x26 - (long)pppppppcVar23);
              func_0x000107c5ec38();
              if (lVar34 == 0) goto LAB_10172ffe8;
              if ((long)pppppppcVar27 <= (long)pppppppcVar23) {
                pppppppcVar23 = pppppppcVar27;
              }
              pppppppcVar23 = (code *******)((long)pppppppcVar23 + lVar34);
            }
            unaff_x21 = pppppppcStack_6e0;
            func_0x000100e25bdc(&uStack_5a0,lVar34,pppppppcVar23,pppppppcVar35,unaff_x23);
            func_0x00010171da20(&pppppppcStack_460);
            func_0x00010171da20(&pppppppcStack_4e0);
            pppppppcVar43 = pppppppcVar37;
          }
          else {
            if (uVar26 != 2) {
              uStack_598 = 0;
              uStack_597 = 0;
              uStack_596 = 0;
              uStack_595 = 0;
              uStack_594 = 0;
              uStack_593 = 0;
              uStack_5a0._0_1_ = 0;
              uStack_5a0._1_1_ = 0;
              uStack_5a0._2_1_ = 0;
              uStack_5a0._3_1_ = 0;
              uStack_5a0._4_1_ = 0;
              uStack_5a0._5_1_ = 0;
              uStack_5a0._6_1_ = 0;
              uStack_5a0._7_1_ = 0;
              pppppppcVar23 = (code *******)&uStack_5a0;
              goto LAB_10172ffb0;
            }
            pppppcVar3 = ppppppcStack_4d8[2];
            pppppcVar6 = ppppppcStack_4d8[3];
            func_0x000107c5ec30();
            pppppppcVar23 = pppppppcVar39;
            if (pppppppcVar39 != (code *******)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8((long)pppppcVar3,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730274);
                (*pcVar10)();
              }
              pppppppcVar39 =
                   (code *******)((long)pppppppcVar39 + ((long)pppppcVar3 - (long)pppppppcVar23));
            }
            pppppppcVar13 = (code *******)((long)pppppcVar6 - (long)pppppcVar3);
            if (SBORROW8((long)pppppcVar6,(long)pppppcVar3)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101730268);
              (*pcVar10)();
            }
            func_0x000107c5ec38();
            unaff_x21 = pppppppcStack_6e0;
            if (pppppppcVar39 == (code *******)0x0) {
              pppppppcVar23 = (code *******)0x0;
            }
            else {
              if ((long)pppppppcVar13 <= (long)pppppppcVar23) {
                pppppppcVar23 = pppppppcVar13;
              }
              pppppppcVar23 = (code *******)((long)pppppppcVar23 + (long)pppppppcVar39);
            }
            func_0x000100e25bdc(&uStack_5a0,pppppppcVar39,pppppppcVar23,pppppppcVar35,unaff_x23);
            func_0x00010171da20(&pppppppcStack_460);
            func_0x00010171da20(&pppppppcStack_4e0);
            unaff_x26 = (code *******)&pppppppcStack_460;
            pppppppcVar43 = (code *******)0x112dc4818;
          }
          unaff_x20 = (code *******)((ulong)unaff_x19 & 0x3fffffffffffffff);
          pppppppcVar13 = unaff_x21;
          if (((byte)uStack_5a0 & 1) == 0) goto LAB_10173017c;
        }
LAB_101730078:
        pppppppcStack_6e0 = pppppppcVar13;
        pppppppcVar43 = (code *******)0x112dc4818;
        unaff_x26 = (code *******)&pppppppcStack_460;
        pppppppcVar35 = (code *******)&UNK_10d982678;
        if (pppppppcVar37 == (code *******)0x0) break;
        pppppppcVar11 = pppppppcVar11 + 0xf;
        pppppppcVar33 = pppppppcVar33 + 0xf;
        pppppppcVar13 = unaff_x19;
        pppppppcVar27 = unaff_x23;
        pppppppcVar28 = pppppppcVar37;
      } while( true );
    }
    pppppppcVar13 = (code *******)0x1;
  }
  else {
LAB_10173017c:
    pppppppcVar13 = (code *******)0x0;
    pppppppcVar37 = pppppppcVar27;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_3e8) {
    return;
  }
  func_0x000107c60e78();
  uStack_758 = 0x10173028c;
  lStack_7c8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar27 = (code *******)pppppppcVar13[2];
  pppppppcStack_7b0 = pppppppcVar43;
  pppppppcStack_7a8 = pppppppcVar11;
  pppppppcStack_7a0 = unaff_x26;
  pppppppcStack_798 = pppppppcVar37;
  pppppppcStack_790 = pppppppcVar35;
  pppppppcStack_788 = unaff_x23;
  pppppppcStack_780 = unaff_x19;
  pppppppcStack_778 = unaff_x21;
  pppppppcStack_770 = unaff_x20;
  pppppppcStack_768 = pppppppcVar33;
  ppppuStack_760 = &pppuStack_380;
  if (pppppppcVar27 == (code *******)pppppppcVar23[2]) {
    if ((pppppppcVar27 != (code *******)0x0) && (pppppppcVar13 != pppppppcVar23)) {
      pppppppcStack_ad0 = (code *******)0x0;
      pppppppcVar11 = pppppppcVar13 + 8;
      pppppppcVar33 = pppppppcVar23 + 8;
      pppppppcVar28 = unaff_x19;
      pppppppcVar13 = unaff_x23;
      do {
        pppppppcVar35 = (code *******)&UNK_10d982678;
        pppppppcVar43 = (code *******)0x112dc4818;
        unaff_x26 = (code *******)((long)pppppppcVar27 + -1);
        pppppppcStack_968 = (code *******)pppppppcVar11[5];
        pppppppcVar23 = (code *******)pppppppcVar11[4];
        ppppppcStack_878 = pppppppcVar11[7];
        ppppppcStack_880 = pppppppcVar11[6];
        pppppppcVar12 = (code *******)pppppppcVar11[3];
        pppppppcVar27 = (code *******)pppppppcVar11[2];
        ppppppcStack_888 = pppppppcVar11[5];
        ppppppcStack_890 = pppppppcVar11[4];
        ppppppcStack_958 = pppppppcVar11[7];
        pppppppcStack_960 = (code *******)pppppppcVar11[6];
        ppppppcStack_868 = pppppppcVar11[9];
        ppppppcStack_870 = pppppppcVar11[8];
        ppppppcStack_948 = pppppppcVar11[9];
        ppppppcVar40 = pppppppcVar11[8];
        ppppppcStack_858 = pppppppcVar11[0xb];
        ppppppcStack_860 = pppppppcVar11[10];
        ppppppcStack_8c8 = pppppppcVar11[-3];
        pppppppcStack_8d0 = (code *******)pppppppcVar11[-4];
        pppppppcStack_8b8 = (code *******)pppppppcVar11[-1];
        ppppppcStack_8c0 = pppppppcVar11[-2];
        ppppppcStack_8a8 = pppppppcVar11[1];
        ppppppcStack_8b0 = *pppppppcVar11;
        ppppppcStack_898 = pppppppcVar11[3];
        ppppppcStack_8a0 = pppppppcVar11[2];
        ppppppcVar42 = pppppppcVar11[1];
        ppppppcVar38 = *pppppppcVar11;
        ppppppcStack_848 = pppppppcVar33[-3];
        pppppppcStack_850 = (code *******)pppppppcVar33[-4];
        pppppppcStack_838 = (code *******)pppppppcVar33[-1];
        pppppppcStack_840 = (code *******)pppppppcVar33[-2];
        ppppppcStack_828 = pppppppcVar33[1];
        ppppppcStack_830 = *pppppppcVar33;
        ppppppcStack_818 = pppppppcVar33[3];
        ppppppcStack_820 = pppppppcVar33[2];
        ppppppcStack_928 = pppppppcVar33[1];
        ppppppcStack_930 = *pppppppcVar33;
        ppppppcStack_918 = pppppppcVar33[3];
        ppppppcStack_920 = pppppppcVar33[2];
        pppppppcVar37 = (code *******)&pppppppcStack_850;
        ppppppcStack_8f8 = pppppppcVar33[7];
        ppppppcStack_900 = pppppppcVar33[6];
        ppppppcStack_7e8 = pppppppcVar33[9];
        ppppppcStack_7f0 = pppppppcVar33[8];
        ppppppcStack_8e8 = pppppppcVar33[9];
        ppppppcStack_8f0 = pppppppcVar33[8];
        ppppppcStack_7d8 = pppppppcVar33[0xb];
        ppppppcStack_7e0 = pppppppcVar33[10];
        ppppppcStack_908 = pppppppcVar33[5];
        ppppppcStack_910 = pppppppcVar33[4];
        ppppppcStack_7f8 = pppppppcVar33[7];
        ppppppcStack_800 = pppppppcVar33[6];
        ppppppcStack_808 = pppppppcVar33[5];
        ppppppcStack_810 = pppppppcVar33[4];
        pppppppcStack_938 = (code *******)pppppppcVar11[0xb];
        ppppppcStack_940 = pppppppcVar11[10];
        uStack_988 = SUB81(ppppppcVar42,0);
        uStack_987 = (undefined1)((ulong)ppppppcVar42 >> 8);
        uStack_986 = (undefined1)((ulong)ppppppcVar42 >> 0x10);
        uStack_985 = (undefined1)((ulong)ppppppcVar42 >> 0x18);
        uStack_984 = (undefined1)((ulong)ppppppcVar42 >> 0x20);
        uStack_983 = (undefined1)((ulong)ppppppcVar42 >> 0x28);
        uStack_982 = (undefined2)((ulong)ppppppcVar42 >> 0x30);
        uStack_990._0_1_ = (byte)ppppppcVar38;
        uStack_990._1_1_ = (undefined1)((ulong)ppppppcVar38 >> 8);
        uStack_990._2_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x10);
        uStack_990._3_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x18);
        uStack_990._4_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x20);
        uStack_990._5_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x28);
        uStack_990._6_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x30);
        uStack_990._7_1_ = (undefined1)((ulong)ppppppcVar38 >> 0x38);
        ppppppcStack_8d8 = pppppppcVar33[0xb];
        ppppppcStack_8e0 = pppppppcVar33[10];
        pppppppcStack_980 = pppppppcVar27;
        pppppppcStack_978 = pppppppcVar12;
        pppppppcStack_970 = pppppppcVar23;
        uStack_950 = ppppppcVar40;
        if (ppppppcVar42 != (code ******)0x0) {
          if (ppppppcStack_928 == (code ******)0x0) goto LAB_101730e04;
          uStack_950._1_1_ = (byte)((ulong)ppppppcVar40 >> 8);
          uStack_b0c = (uint)uStack_950._1_1_;
          uStack_950._0_1_ = (byte)ppppppcVar40;
          uStack_afc = (uint)(byte)uStack_950;
          ppppppcStack_aa8 = pppppppcVar33[1];
          ppppppcStack_ab0 = *pppppppcVar33;
          pppppppcVar35 = (code *******)pppppppcVar33[3];
          pppppppcVar37 = (code *******)pppppppcVar33[2];
          pppppppcVar13 = (code *******)pppppppcVar33[5];
          pppppppcVar39 = (code *******)pppppppcVar33[4];
          ppppppcStack_af8 = pppppppcVar33[7];
          pppppppcVar43 = (code *******)pppppppcVar33[6];
          ppppppcStack_b28 = pppppppcVar33[9];
          ppppppcVar40 = pppppppcVar33[8];
          pppppppcStack_ad8 = (code *******)pppppppcVar33[0xb];
          ppppppcStack_b08 = pppppppcVar33[10];
          uStack_a70._0_1_ = (byte)ppppppcVar40;
          uStack_b00 = (uint)(byte)uStack_a70;
          uStack_a70._1_1_ = (byte)((ulong)ppppppcVar40 >> 8);
          uStack_b10 = (uint)uStack_a70._1_1_;
          ppppppcStack_b38 = ppppppcStack_940;
          pppppppcStack_b30 = unaff_x26;
          ppppppcStack_b20 = ppppppcStack_948;
          pppppppcStack_b18 = pppppppcStack_938;
          ppppppcStack_af0 = ppppppcStack_958;
          pppppppcStack_ae8 = pppppppcStack_960;
          pppppppcStack_ae0 = pppppppcStack_968;
          pppppppcStack_aa0 = pppppppcVar37;
          pppppppcStack_a98 = pppppppcVar35;
          pppppppcStack_a90 = pppppppcVar39;
          pppppppcStack_a88 = pppppppcVar13;
          pppppppcStack_a80 = pppppppcVar43;
          ppppppcStack_a78 = ppppppcStack_af8;
          uStack_a70 = ppppppcVar40;
          ppppppcStack_a68 = ppppppcStack_b28;
          ppppppcStack_a60 = ppppppcStack_b08;
          pppppppcStack_a58 = pppppppcStack_ad8;
          if ((((ppppppcVar38 == ppppppcStack_ab0) && (ppppppcStack_aa8 == ppppppcVar42)) ||
              (func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) != 0)) &&
             (((((pppppppcVar27 == pppppppcVar37 && (pppppppcVar12 == pppppppcVar35)) ||
                (pppppppcVar28 = pppppppcVar27,
                func_0x000107c605b8(pppppppcVar27,pppppppcVar12,pppppppcVar37,pppppppcVar35,0),
                ((ulong)pppppppcVar28 & 1) != 0)) &&
               (((pppppppcVar23 == pppppppcVar39 && (pppppppcStack_ae0 == pppppppcVar13)) ||
                (pppppppcVar35 = pppppppcVar23,
                func_0x000107c605b8(pppppppcVar23,pppppppcStack_ae0,pppppppcVar39,pppppppcVar13,0),
                ((ulong)pppppppcVar35 & 1) != 0)))) &&
              ((((pppppppcStack_ae8 == pppppppcVar43 && (ppppppcStack_af0 == ppppppcStack_af8)) ||
                (pppppppcVar35 = pppppppcStack_ae8,
                func_0x000107c605b8(pppppppcStack_ae8,ppppppcStack_af0,pppppppcVar43,
                                    ppppppcStack_af8,0), ((ulong)pppppppcVar35 & 1) != 0)) &&
               (pppppppcVar35 = pppppppcStack_ad8, unaff_x20 = pppppppcStack_b18,
               unaff_x26 = pppppppcStack_b30, ((uStack_b00 ^ uStack_afc) & 1) == 0)))))) {
            pppppppcVar37 = (code *******)&pppppppcStack_850;
            if ((((uStack_b10 ^ uStack_b0c) & 1) != 0) || (ppppppcStack_b20 != ppppppcStack_b28)) {
LAB_101730d34:
              func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
              func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
              FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
              unaff_x26 = pppppppcVar23;
              goto LAB_101730d78;
            }
            uVar7 = (uint)((ulong)pppppppcStack_b18 >> 0x20);
            uVar26 = uVar7 >> 0x1e;
            uVar8 = (uint)((ulong)pppppppcStack_ad8 >> 0x20);
            uVar31 = uVar8 >> 0x1e;
            iVar36 = (int)ppppppcStack_b38;
            pppppppcVar39 = pppppppcStack_ad8;
            pppppppcVar23 = pppppppcStack_b30;
            if ((ulong)pppppppcStack_b18 >> 0x3e == 3) {
              uVar30 = 0;
              if (((ppppppcStack_b38 != (code ******)0x0) ||
                  (pppppppcStack_b18 != (code *******)0xc000000000000000)) ||
                 (((ulong)pppppppcStack_ad8 >> 0x3e < 3 ||
                  ((uVar30 = 0, ppppppcStack_b08 != (code ******)0x0 ||
                   (pppppppcStack_ad8 != (code *******)0xc000000000000000))))))
              goto joined_r0x0001017305f0;
LAB_101730700:
              func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
              func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
              FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
              FUN_10173194c(&ppppppcStack_830,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
              func_0x000101731994(&ppppppcStack_ab0,0x112dc4818,&UNK_10d982678);
              pppppppcVar28 = pppppppcVar27;
              goto LAB_101730988;
            }
            if (uVar7 >> 0x1e < 2) {
              if (uVar26 == 0) {
                uVar30 = (ulong)pppppppcStack_b18 >> 0x30 & 0xff;
              }
              else {
                iVar29 = (int)((ulong)ppppppcStack_b38 >> 0x20);
                if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730eb8);
                  (*pcVar10)();
                }
                uVar30 = (ulong)(iVar29 - iVar36);
              }
joined_r0x0001017305f0:
              if (uVar8 >> 0x1e < 2) goto LAB_1017305f4;
LAB_1017305bc:
              pppppppcVar43 = (code *******)0x112dc4818;
              pppppppcVar12 = (code *******)&UNK_10d982678;
              if (uVar31 != 2) {
                if (uVar30 != 0) goto LAB_101730d34;
                goto LAB_101730700;
              }
              uVar32 = (long)ppppppcStack_b08[3] - (long)ppppppcStack_b08[2];
              if (SBORROW8((long)ppppppcStack_b08[3],(long)ppppppcStack_b08[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ea4);
                (*pcVar10)();
              }
            }
            else {
              if (uVar26 == 2) {
                uVar30 = (long)ppppppcStack_b38[3] - (long)ppppppcStack_b38[2];
                if (SBORROW8((long)ppppppcStack_b38[3],(long)ppppppcStack_b38[2])) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ebc);
                  (*pcVar10)();
                }
                goto joined_r0x0001017305f0;
              }
              uVar30 = 0;
              if (1 < uVar31) goto LAB_1017305bc;
LAB_1017305f4:
              if (uVar31 == 0) {
                uVar32 = (ulong)pppppppcStack_ad8 >> 0x30 & 0xff;
              }
              else {
                iVar29 = (int)((ulong)ppppppcStack_b08 >> 0x20);
                if (SBORROW4(iVar29,(int)ppppppcStack_b08)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ea0);
                  (*pcVar10)();
                }
                uVar32 = (ulong)(iVar29 - (int)ppppppcStack_b08);
              }
            }
            pppppppcVar43 = (code *******)0x112dc4818;
            pppppppcVar12 = (code *******)&UNK_10d982678;
            if (uVar30 != uVar32) goto LAB_101730d34;
            if ((long)uVar30 < 1) goto LAB_101730700;
            if (uVar26 < 2) {
              if (uVar26 == 0) {
                uStack_ac8._0_1_ = SUB81(ppppppcStack_b38,0);
                uStack_ac8._1_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 8);
                uStack_ac8._2_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 0x10);
                uStack_ac8._3_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 0x18);
                uStack_ac8._4_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 0x20);
                uStack_ac8._5_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 0x28);
                uStack_ac8._6_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 0x30);
                uStack_ac8._7_1_ = (undefined1)((ulong)ppppppcStack_b38 >> 0x38);
                uStack_ac0 = SUB81(pppppppcStack_b18,0);
                uStack_abf = (undefined1)((ulong)pppppppcStack_b18 >> 8);
                uStack_abe = (undefined1)((ulong)pppppppcStack_b18 >> 0x10);
                uStack_abd = (undefined1)((ulong)pppppppcStack_b18 >> 0x18);
                uStack_abc = (undefined1)((ulong)pppppppcStack_b18 >> 0x20);
                uStack_abb = (undefined1)((ulong)pppppppcStack_b18 >> 0x28);
                pppppppcVar23 =
                     (code *******)((long)&uStack_ac8 + ((ulong)pppppppcStack_b18 >> 0x30 & 0xff));
                func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
                func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
                FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
                FUN_10173194c(&ppppppcStack_830,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
                unaff_x20 = pppppppcVar23;
LAB_10173091c:
                pppppppcVar28 = (code *******)&uStack_ac8;
              }
              else {
                pppppppcVar13 = (code *******)(long)iVar36;
                pppppppcVar27 =
                     (code *******)(((long)ppppppcStack_b38 >> 0x20) - (long)pppppppcVar13);
                if ((long)ppppppcStack_b38 >> 0x20 < (long)pppppppcVar13) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ec0);
                  (*pcVar10)();
                }
                func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
                func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
                FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
                pppppppcVar28 = &ppppppcStack_830;
                FUN_10173194c(pppppppcVar28,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
                func_0x000107c5ec30();
                if (pppppppcVar28 == (code *******)0x0) {
                  func_0x000107c5ec38();
                  pppppppcVar28 = (code *******)0x0;
LAB_101730934:
                  pppppppcVar23 = (code *******)0x0;
                }
                else {
                  pppppppcVar23 = pppppppcVar28;
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)pppppppcVar13,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ed4);
                    (*pcVar10)();
                  }
                  pppppppcVar28 =
                       (code *******)
                       ((long)pppppppcVar28 + ((long)pppppppcVar13 - (long)pppppppcVar23));
                  func_0x000107c5ec38();
                  if (pppppppcVar28 == (code *******)0x0) goto LAB_101730934;
                  if ((long)pppppppcVar27 <= (long)pppppppcVar23) {
                    pppppppcVar23 = pppppppcVar27;
                  }
                  pppppppcVar23 = (code *******)((long)pppppppcVar23 + (long)pppppppcVar28);
                }
                unaff_x20 = (code *******)((ulong)unaff_x20 & 0x3fffffffffffffff);
                pppppppcVar35 = pppppppcStack_ad8;
              }
            }
            else {
              if (uVar26 != 2) {
                uStack_ac0 = 0;
                uStack_abf = 0;
                uStack_abe = 0;
                uStack_abd = 0;
                uStack_abc = 0;
                uStack_abb = 0;
                uStack_ac8._0_1_ = 0;
                uStack_ac8._1_1_ = 0;
                uStack_ac8._2_1_ = 0;
                uStack_ac8._3_1_ = 0;
                uStack_ac8._4_1_ = 0;
                uStack_ac8._5_1_ = 0;
                uStack_ac8._6_1_ = 0;
                uStack_ac8._7_1_ = 0;
                func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
                func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
                FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
                FUN_10173194c(&ppppppcStack_830,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
                pppppppcVar23 = (code *******)&uStack_ac8;
                goto LAB_10173091c;
              }
              pppppcVar3 = ppppppcStack_b38[2];
              pppppppcVar13 = (code *******)ppppppcStack_b38[3];
              func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
              func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
              FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
              pppppppcVar28 = &ppppppcStack_830;
              FUN_10173194c(pppppppcVar28,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
              func_0x000107c5ec30();
              pppppppcVar23 = pppppppcVar28;
              if (pppppppcVar28 != (code *******)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)pppppcVar3,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ed0);
                  (*pcVar10)();
                }
                pppppppcVar28 =
                     (code *******)((long)pppppppcVar28 + ((long)pppppcVar3 - (long)pppppppcVar23));
                unaff_x20 = pppppppcStack_b18;
              }
              pppppppcVar27 = (code *******)((long)pppppppcVar13 - (long)pppppcVar3);
              if (SBORROW8((long)pppppppcVar13,(long)pppppcVar3)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ec4);
                (*pcVar10)();
              }
              unaff_x20 = (code *******)((ulong)unaff_x20 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              pppppppcVar35 = pppppppcStack_ad8;
              if (pppppppcVar28 == (code *******)0x0) {
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                if ((long)pppppppcVar27 <= (long)pppppppcVar23) {
                  pppppppcVar23 = pppppppcVar27;
                }
                pppppppcVar23 = (code *******)((long)pppppppcVar23 + (long)pppppppcVar28);
              }
            }
            pppppppcVar39 = pppppppcStack_ad0;
            pppppppcVar37 = (code *******)&pppppppcStack_850;
            func_0x000100e25bdc(&ppppppcStack_a50,pppppppcVar28,pppppppcVar23,ppppppcStack_b08,
                                pppppppcVar35);
            pppppppcStack_ad0 = pppppppcVar39;
            func_0x000101731994(&ppppppcStack_ab0,0x112dc4818,&UNK_10d982678);
            pppppppcVar28 = pppppppcVar27;
            if (((ulong)ppppppcStack_a50 & 1) != 0) goto LAB_101730988;
          }
          else {
            func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
            func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
            FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
            unaff_x26 = pppppppcVar23;
LAB_101730d78:
            unaff_x20 = (code *******)&UNK_10d982678;
            pppppppcVar33 = (code *******)0x112dc4818;
            FUN_10173194c(&ppppppcStack_830,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
            func_0x000101731994(&ppppppcStack_ab0,0x112dc4818,&UNK_10d982678);
          }
          pppppppcVar23 = (code *******)0x112dc4818;
          func_0x000101731994(&uStack_990,0x112dc4818,&UNK_10d982678);
LAB_101730db8:
          unaff_x21 = pppppppcVar39;
          func_0x000101739260(&pppppppcStack_850);
          func_0x000101739260(&pppppppcStack_8d0);
          unaff_x19 = pppppppcVar27;
          unaff_x23 = pppppppcVar13;
          pppppppcVar35 = pppppppcVar12;
          goto LAB_101730dc8;
        }
        if (ppppppcStack_928 != (code ******)0x0) {
LAB_101730e04:
          pppppppcVar33 = (code *******)0x112dc4818;
          unaff_x20 = (code *******)&UNK_10d982678;
          ppppppcStack_a50 = ppppppcVar38;
          ppppppcStack_a48 = ppppppcVar42;
          pppppppcStack_a40 = pppppppcVar27;
          pppppppcStack_a38 = pppppppcVar12;
          pppppppcStack_a30 = pppppppcVar23;
          pppppppcStack_a28 = pppppppcStack_968;
          pppppppcStack_a20 = pppppppcStack_960;
          ppppppcStack_a18 = ppppppcStack_958;
          ppppppcStack_a10 = ppppppcVar40;
          ppppppcStack_a08 = ppppppcStack_948;
          ppppppcStack_a00 = ppppppcStack_940;
          pppppppcStack_9f8 = pppppppcStack_938;
          ppppppcStack_9f0 = ppppppcStack_930;
          ppppppcStack_9e8 = ppppppcStack_928;
          ppppppcStack_9e0 = ppppppcStack_920;
          ppppppcStack_9d8 = ppppppcStack_918;
          ppppppcStack_9d0 = ppppppcStack_910;
          ppppppcStack_9c8 = ppppppcStack_908;
          ppppppcStack_9c0 = ppppppcStack_900;
          ppppppcStack_9b8 = ppppppcStack_8f8;
          ppppppcStack_9b0 = ppppppcStack_8f0;
          ppppppcStack_9a8 = ppppppcStack_8e8;
          ppppppcStack_9a0 = ppppppcStack_8e0;
          ppppppcStack_998 = ppppppcStack_8d8;
          FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_ab0,0x112dc4818,&UNK_10d982678);
          FUN_10173194c(&ppppppcStack_830,&ppppppcStack_ab0,0x112dc4818,&UNK_10d982678);
          pppppppcVar23 = (code *******)0x112dc4820;
          func_0x000101731994(&ppppppcStack_a50,0x112dc4820,&UNK_10d982680);
          unaff_x19 = pppppppcVar28;
          unaff_x23 = pppppppcVar13;
          goto LAB_101730dc8;
        }
        func_0x00010173922c(&pppppppcStack_8d0,&ppppppcStack_a50);
        func_0x00010173922c(&pppppppcStack_850,&ppppppcStack_a50);
        FUN_10173194c(&ppppppcStack_8b0,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
        FUN_10173194c(&ppppppcStack_830,&ppppppcStack_a50,0x112dc4818,&UNK_10d982678);
LAB_101730988:
        pppppppcVar39 = pppppppcStack_850;
        unaff_x20 = pppppppcStack_8d0;
        pppppppcVar43 = (code *******)0x112dc4818;
        pppppppcVar37 = (code *******)&pppppppcStack_850;
        puVar17 = &uStack_990;
        pppppppcVar23 = pppppppcVar43;
        func_0x000101731994(puVar17,0x112dc4818,&UNK_10d982678);
        unaff_x23 = pppppppcStack_838;
        pppppppcVar35 = pppppppcStack_840;
        unaff_x19 = pppppppcStack_8b8;
        unaff_x21 = pppppppcStack_ad0;
        pppppppcVar27 = pppppppcVar28;
        pppppppcVar12 = (code *******)&UNK_10d982678;
        if (unaff_x20 != pppppppcVar39) goto LAB_101730db8;
        if ((int)ppppppcStack_8c8 != (int)ppppppcStack_848) goto LAB_101730db8;
        uVar7 = (uint)((ulong)pppppppcStack_8b8 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)pppppppcStack_838 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)ppppppcStack_8c0;
        pppppppcVar27 = pppppppcStack_8b8;
        pppppppcVar13 = pppppppcStack_838;
        pppppppcVar12 = pppppppcStack_840;
        if ((ulong)pppppppcStack_8b8 >> 0x3e == 3) {
          uVar30 = 0;
          if ((((ppppppcStack_8c0 != (code ******)0x0) ||
               (pppppppcStack_8b8 != (code *******)0xc000000000000000)) ||
              ((ulong)pppppppcStack_838 >> 0x3e < 3)) ||
             ((uVar30 = 0, pppppppcStack_840 != (code *******)0x0 ||
              (pppppppcStack_838 != (code *******)0xc000000000000000))))
          goto joined_r0x000101730b94;
LAB_101730b10:
          func_0x000101739260(&pppppppcStack_850);
          func_0x000101739260(&pppppppcStack_8d0);
          unaff_x21 = pppppppcVar39;
          pppppppcVar13 = pppppppcStack_ad0;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)pppppppcStack_8b8 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)ppppppcStack_8c0 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ea8);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x000101730b94:
            if (uVar8 >> 0x1e < 2) goto LAB_101730a50;
LAB_101730a1c:
            if (uVar31 != 2) {
              if (uVar30 != 0) goto LAB_101730db8;
              goto LAB_101730b10;
            }
            uVar32 = (long)pppppppcStack_840[3] - (long)pppppppcStack_840[2];
            if (SBORROW8((long)pppppppcStack_840[3],(long)pppppppcStack_840[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101730e98);
              (*pcVar10)();
            }
          }
          else {
            if (uVar26 == 2) {
              uVar30 = (long)ppppppcStack_8c0[3] - (long)ppppppcStack_8c0[2];
              if (SBORROW8((long)ppppppcStack_8c0[3],(long)ppppppcStack_8c0[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730eac);
                (*pcVar10)();
              }
              goto joined_r0x000101730b94;
            }
            uVar30 = 0;
            if (1 < uVar31) goto LAB_101730a1c;
LAB_101730a50:
            if (uVar31 == 0) {
              uVar32 = (ulong)pppppppcStack_838 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)pppppppcStack_840 >> 0x20);
              if (SBORROW4(iVar29,(int)pppppppcStack_840)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730e9c);
                (*pcVar10)();
              }
              uVar32 = (ulong)(iVar29 - (int)pppppppcStack_840);
            }
          }
          if (uVar30 != uVar32) goto LAB_101730db8;
          if ((long)uVar30 < 1) goto LAB_101730b10;
          if (uVar26 < 2) {
            if (uVar26 != 0) {
              lVar34 = (long)iVar36;
              puVar15 = (undefined8 *)(((long)ppppppcStack_8c0 >> 0x20) - lVar34);
              if ((long)ppppppcStack_8c0 >> 0x20 < lVar34) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730eb0);
                (*pcVar10)();
              }
              func_0x000107c5ec30();
              if (puVar17 == (undefined8 *)0x0) {
                func_0x000107c5ec38();
                puVar17 = (undefined8 *)0x0;
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                puVar16 = puVar17;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar34,(long)puVar16)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ecc);
                  (*pcVar10)();
                }
                puVar17 = (undefined8 *)((long)puVar17 + (lVar34 - (long)puVar16));
                func_0x000107c5ec38();
                if (puVar17 == (undefined8 *)0x0) {
                  pppppppcVar23 = (code *******)0x0;
                }
                else {
                  if ((long)puVar15 <= (long)puVar16) {
                    puVar16 = puVar15;
                  }
                  pppppppcVar23 = (code *******)((long)puVar16 + (long)puVar17);
                }
              }
LAB_101730c98:
              unaff_x21 = pppppppcStack_ad0;
              pppppppcVar43 = (code *******)0x112dc4818;
              pppppppcVar37 = (code *******)&pppppppcStack_850;
              unaff_x20 = (code *******)((ulong)unaff_x19 & 0x3fffffffffffffff);
              func_0x000100e25bdc(&uStack_990,puVar17,pppppppcVar23,pppppppcVar35,unaff_x23);
              func_0x000101739260(&pppppppcStack_850);
              func_0x000101739260(&pppppppcStack_8d0);
              pppppppcVar13 = unaff_x21;
              if (((byte)uStack_990 & 1) != 0) goto LAB_101730cc4;
              goto LAB_101730dc8;
            }
            uStack_990._0_1_ = (byte)ppppppcStack_8c0;
            uStack_990._1_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 8);
            uStack_990._2_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 0x10);
            uStack_990._3_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 0x18);
            uStack_990._4_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 0x20);
            uStack_990._5_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 0x28);
            uStack_990._6_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 0x30);
            uStack_990._7_1_ = (undefined1)((ulong)ppppppcStack_8c0 >> 0x38);
            uStack_988 = SUB81(pppppppcStack_8b8,0);
            uStack_987 = (undefined1)((ulong)pppppppcStack_8b8 >> 8);
            uStack_986 = (undefined1)((ulong)pppppppcStack_8b8 >> 0x10);
            uStack_985 = (undefined1)((ulong)pppppppcStack_8b8 >> 0x18);
            uStack_984 = (undefined1)((ulong)pppppppcStack_8b8 >> 0x20);
            uStack_983 = (undefined1)((ulong)pppppppcStack_8b8 >> 0x28);
            pppppppcVar23 =
                 (code *******)((long)&uStack_990 + ((ulong)pppppppcStack_8b8 >> 0x30 & 0xff));
          }
          else {
            if (uVar26 == 2) {
              pppppcVar3 = ppppppcStack_8c0[2];
              pppppcVar6 = ppppppcStack_8c0[3];
              func_0x000107c5ec30();
              puVar15 = puVar17;
              if (puVar17 != (undefined8 *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)pppppcVar3,(long)puVar15)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101730ec8);
                  (*pcVar10)();
                }
                puVar17 = (undefined8 *)((long)puVar17 + ((long)pppppcVar3 - (long)puVar15));
              }
              puVar16 = (undefined8 *)((long)pppppcVar6 - (long)pppppcVar3);
              if (SBORROW8((long)pppppcVar6,(long)pppppcVar3)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101730eb4);
                (*pcVar10)();
              }
              func_0x000107c5ec38();
              if (puVar17 == (undefined8 *)0x0) {
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                if ((long)puVar16 <= (long)puVar15) {
                  puVar15 = puVar16;
                }
                pppppppcVar23 = (code *******)((long)puVar15 + (long)puVar17);
              }
              goto LAB_101730c98;
            }
            uStack_988 = 0;
            uStack_987 = 0;
            uStack_986 = 0;
            uStack_985 = 0;
            uStack_984 = 0;
            uStack_983 = 0;
            uStack_990._0_1_ = 0;
            uStack_990._1_1_ = 0;
            uStack_990._2_1_ = 0;
            uStack_990._3_1_ = 0;
            uStack_990._4_1_ = 0;
            uStack_990._5_1_ = 0;
            uStack_990._6_1_ = 0;
            uStack_990._7_1_ = 0;
            pppppppcVar23 = (code *******)&uStack_990;
          }
          func_0x000100e25bdc(&ppppppcStack_a50,&uStack_990,pppppppcVar23,pppppppcStack_840,
                              pppppppcStack_838);
          func_0x000101739260(&pppppppcStack_850);
          func_0x000101739260(&pppppppcStack_8d0);
          pppppppcVar13 = unaff_x21;
          if (((ulong)ppppppcStack_a50 & 1) == 0) goto LAB_101730dc8;
        }
LAB_101730cc4:
        pppppppcStack_ad0 = pppppppcVar13;
        pppppppcVar43 = (code *******)0x112dc4818;
        pppppppcVar37 = (code *******)&pppppppcStack_850;
        pppppppcVar35 = (code *******)&UNK_10d982678;
        if (unaff_x26 == (code *******)0x0) break;
        pppppppcVar11 = pppppppcVar11 + 0x10;
        pppppppcVar33 = pppppppcVar33 + 0x10;
        pppppppcVar28 = unaff_x19;
        pppppppcVar13 = unaff_x23;
        pppppppcVar27 = unaff_x26;
      } while( true );
    }
    pppppppcVar13 = (code *******)0x1;
  }
  else {
LAB_101730dc8:
    pppppppcVar13 = (code *******)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_7c8) {
    return;
  }
  func_0x000107c60e78();
  uStack_b48 = 0x101730ed8;
  lStack_bb8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pppppppcVar28 = (code *******)pppppppcVar13[2];
  pppppppcVar27 = unaff_x26;
  pppppppcStack_ba0 = pppppppcVar43;
  pppppppcStack_b98 = pppppppcVar11;
  pppppppcStack_b90 = unaff_x26;
  pppppppcStack_b88 = pppppppcVar37;
  pppppppcStack_b80 = pppppppcVar35;
  pppppppcStack_b78 = unaff_x23;
  pppppppcStack_b70 = unaff_x19;
  pppppppcStack_b68 = unaff_x21;
  pppppppcStack_b60 = unaff_x20;
  pppppppcStack_b58 = pppppppcVar33;
  pppppuStack_b50 = &ppppuStack_760;
  if (pppppppcVar28 == (code *******)pppppppcVar23[2]) {
    if ((pppppppcVar28 != (code *******)0x0) && (pppppppcVar13 != pppppppcVar23)) {
      pppppppcVar35 = &ppppppcStack_cc0;
      pppppppcVar37 = pppppppcVar13 + 4;
      pppppppcVar27 = pppppppcVar23 + 4;
      pppppppcVar11 = (code *******)0x0;
      do {
        unaff_x21 = pppppppcVar11;
        unaff_x23 = (code *******)((long)pppppppcVar28 + -1);
        pppppppcVar11 = (code *******)0xc000000000000000;
        pppppppcStack_c78 = (code *******)pppppppcVar37[9];
        ppppppcStack_c80 = pppppppcVar37[8];
        pppppppcStack_c68 = (code *******)pppppppcVar37[0xb];
        ppppppcStack_c70 = pppppppcVar37[10];
        pppppppcStack_c58 = (code *******)pppppppcVar37[0xd];
        ppppppcStack_c60 = pppppppcVar37[0xc];
        pppppppcStack_c48 = (code *******)pppppppcVar37[0xf];
        ppppppcStack_c50 = pppppppcVar37[0xe];
        pppppppcVar23 = (code *******)pppppppcVar37[1];
        ppppppcVar38 = *pppppppcVar37;
        pppppppcStack_ca8 = (code *******)pppppppcVar37[3];
        ppppppcStack_cb0 = pppppppcVar37[2];
        pppppppcStack_c98 = (code *******)pppppppcVar37[5];
        ppppppcStack_ca0 = pppppppcVar37[4];
        pppppppcStack_c88 = (code *******)pppppppcVar37[7];
        ppppppcStack_c90 = pppppppcVar37[6];
        pppppppcStack_c38 = (code *******)pppppppcVar27[1];
        ppppppcStack_c40 = *pppppppcVar27;
        pppppppcStack_c28 = (code *******)pppppppcVar27[3];
        ppppppcStack_c30 = pppppppcVar27[2];
        pppppppcStack_c18 = (code *******)pppppppcVar27[5];
        ppppppcStack_c20 = pppppppcVar27[4];
        pppppppcStack_c08 = (code *******)pppppppcVar27[7];
        ppppppcStack_c10 = pppppppcVar27[6];
        pppppppcStack_bf8 = (code *******)pppppppcVar27[9];
        ppppppcStack_c00 = pppppppcVar27[8];
        pppppppcStack_be8 = (code *******)pppppppcVar27[0xb];
        ppppppcStack_bf0 = pppppppcVar27[10];
        pppppppcStack_bd8 = (code *******)pppppppcVar27[0xd];
        ppppppcStack_be0 = pppppppcVar27[0xc];
        pppppppcStack_bc8 = (code *******)pppppppcVar27[0xf];
        pppppppcStack_bd0 = (code *******)pppppppcVar27[0xe];
        ppppppcStack_cc0 = ppppppcVar38;
        pppppppcStack_cb8 = pppppppcVar23;
        if (((((((ppppppcVar38 != ppppppcStack_c40) || (pppppppcVar23 != pppppppcStack_c38)) &&
               (func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)) ||
              (((ppppppcStack_cb0 != ppppppcStack_c30 || (pppppppcStack_ca8 != pppppppcStack_c28))
               && (ppppppcVar38 = ppppppcStack_cb0, pppppppcVar23 = pppppppcStack_ca8,
                  func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)))) ||
             (((ppppppcStack_ca0 != ppppppcStack_c20 || (pppppppcStack_c98 != pppppppcStack_c18)) &&
              (ppppppcVar38 = ppppppcStack_ca0, pppppppcVar23 = pppppppcStack_c98,
              func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)))) ||
            (((ppppppcStack_c90 != ppppppcStack_c10 || (pppppppcStack_c88 != pppppppcStack_c08)) &&
             (ppppppcVar38 = ppppppcStack_c90, pppppppcVar23 = pppppppcStack_c88,
             func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)))) ||
           ((((ppppppcStack_c80 != ppppppcStack_c00 || (pppppppcStack_c78 != pppppppcStack_bf8)) &&
             (ppppppcVar38 = ppppppcStack_c80, pppppppcVar23 = pppppppcStack_c78,
             func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)) ||
            ((((ppppppcStack_c70 != ppppppcStack_bf0 || (pppppppcStack_c68 != pppppppcStack_be8)) &&
              (ppppppcVar38 = ppppppcStack_c70, pppppppcVar23 = pppppppcStack_c68,
              func_0x000107c605b8(), ((ulong)ppppppcVar38 & 1) == 0)) ||
             (((pppppppcVar23 = pppppppcStack_c58, ppppppcStack_c60 != ppppppcStack_be0 ||
               (pppppppcStack_c58 != pppppppcStack_bd8)) &&
              (ppppppcVar38 = ppppppcStack_c60, func_0x000107c605b8(),
              ((ulong)ppppppcVar38 & 1) == 0)))))))) goto LAB_1017313e4;
        pppppppcVar33 = pppppppcStack_bc8;
        unaff_x19 = pppppppcStack_bd0;
        pppppppcVar43 = pppppppcStack_c48;
        uVar7 = (uint)((ulong)pppppppcStack_c48 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)pppppppcStack_bc8 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)ppppppcStack_c50;
        pppppppcVar28 = unaff_x23;
        if ((ulong)pppppppcStack_c48 >> 0x3e == 3) {
          uVar30 = 0;
          if (((ppppppcStack_c50 != (code ******)0x0) ||
              (pppppppcStack_c48 != (code *******)0xc000000000000000)) ||
             (((ulong)pppppppcStack_bc8 >> 0x3e < 3 ||
              ((uVar30 = 0, pppppppcStack_bd0 != (code *******)0x0 ||
               (pppppppcStack_bc8 != (code *******)0xc000000000000000))))))
          goto joined_r0x00010173126c;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)pppppppcStack_c48 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)ppppppcStack_c50 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x10173142c);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x00010173126c:
            if (uVar8 >> 0x1e < 2) goto LAB_101731108;
LAB_1017310d4:
            if (uVar31 != 2) {
              if (uVar30 == 0) goto joined_r0x0001017313d8;
              goto LAB_1017313e4;
            }
            uVar32 = (long)pppppppcStack_bd0[3] - (long)pppppppcStack_bd0[2];
            if (SBORROW8((long)pppppppcStack_bd0[3],(long)pppppppcStack_bd0[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x101731428);
              (*pcVar10)();
            }
          }
          else {
            if (uVar26 == 2) {
              uVar30 = (long)ppppppcStack_c50[3] - (long)ppppppcStack_c50[2];
              if (SBORROW8((long)ppppppcStack_c50[3],(long)ppppppcStack_c50[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731430);
                (*pcVar10)();
              }
              goto joined_r0x00010173126c;
            }
            uVar30 = 0;
            if (1 < uVar31) goto LAB_1017310d4;
LAB_101731108:
            if (uVar31 == 0) {
              uVar32 = (ulong)pppppppcStack_bc8 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)pppppppcStack_bd0 >> 0x20);
              if (SBORROW4(iVar29,(int)pppppppcStack_bd0)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731424);
                (*pcVar10)();
              }
              uVar32 = (ulong)(iVar29 - (int)pppppppcStack_bd0);
            }
          }
          if (uVar30 != uVar32) goto LAB_1017313e4;
          if (0 < (long)uVar30) {
            if (uVar26 < 2) {
              if (uVar26 == 0) {
                uStack_d58._0_1_ = SUB81(ppppppcStack_c50,0);
                uStack_d58._1_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 8);
                uStack_d58._2_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 0x10);
                uStack_d58._3_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 0x18);
                uStack_d58._4_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 0x20);
                uStack_d58._5_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 0x28);
                uStack_d58._6_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 0x30);
                uStack_d58._7_1_ = (undefined1)((ulong)ppppppcStack_c50 >> 0x38);
                uStack_d50 = SUB81(pppppppcStack_c48,0);
                uStack_d4f = (undefined1)((ulong)pppppppcStack_c48 >> 8);
                uStack_d4e = (undefined1)((ulong)pppppppcStack_c48 >> 0x10);
                uStack_d4d = (undefined1)((ulong)pppppppcStack_c48 >> 0x18);
                uStack_d4c = (undefined1)((ulong)pppppppcStack_c48 >> 0x20);
                uStack_d4b = (undefined1)((ulong)pppppppcStack_c48 >> 0x28);
                pppppppcVar23 =
                     (code *******)((long)&uStack_d58 + ((ulong)pppppppcStack_c48 >> 0x30 & 0xff));
                func_0x00010173928c(&ppppppcStack_cc0,abStack_d40);
                func_0x00010173928c(&ppppppcStack_c40,abStack_d40);
                unaff_x20 = pppppppcVar23;
                goto LAB_101731324;
              }
              lVar34 = (long)iVar36;
              ppppppcVar38 = (code ******)(((long)ppppppcStack_c50 >> 0x20) - lVar34);
              if ((long)ppppppcStack_c50 >> 0x20 < lVar34) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731434);
                pppppppcStack_d68 = unaff_x23;
                pppppppcStack_d60 = unaff_x21;
                (*pcVar10)();
              }
              pppppppcStack_d68 = unaff_x23;
              pppppppcStack_d60 = unaff_x21;
              func_0x00010173928c(&ppppppcStack_cc0,abStack_d40);
              ppppppcVar40 = (code ******)&ppppppcStack_c40;
              func_0x00010173928c(ppppppcVar40,abStack_d40);
              func_0x000107c5ec30();
              if (ppppppcVar40 == (code ******)0x0) {
                func_0x000107c5ec38();
                lVar34 = 0;
LAB_101731368:
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                ppppppcVar42 = ppppppcVar40;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar34,(long)ppppppcVar42)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101731440);
                  (*pcVar10)();
                }
                lVar34 = (lVar34 - (long)ppppppcVar42) + (long)ppppppcVar40;
                func_0x000107c5ec38();
                if (lVar34 == 0) goto LAB_101731368;
                if ((long)ppppppcVar38 <= (long)ppppppcVar42) {
                  ppppppcVar42 = ppppppcVar38;
                }
                pppppppcVar23 = (code *******)((long)ppppppcVar42 + lVar34);
              }
              unaff_x21 = pppppppcStack_d60;
              unaff_x23 = pppppppcStack_d68;
              func_0x000100e25bdc(abStack_d40,lVar34,pppppppcVar23,unaff_x19,pppppppcVar33);
              func_0x0001017392c0(&ppppppcStack_c40);
              func_0x0001017392c0(&ppppppcStack_cc0);
              pppppppcVar28 = unaff_x23;
            }
            else {
              if (uVar26 != 2) {
                uStack_d50 = 0;
                uStack_d4f = 0;
                uStack_d4e = 0;
                uStack_d4d = 0;
                uStack_d4c = 0;
                uStack_d4b = 0;
                uStack_d58._0_1_ = 0;
                uStack_d58._1_1_ = 0;
                uStack_d58._2_1_ = 0;
                uStack_d58._3_1_ = 0;
                uStack_d58._4_1_ = 0;
                uStack_d58._5_1_ = 0;
                uStack_d58._6_1_ = 0;
                uStack_d58._7_1_ = 0;
                func_0x00010173928c(&ppppppcStack_cc0,abStack_d40);
                func_0x00010173928c(&ppppppcStack_c40,abStack_d40);
                pppppppcVar23 = (code *******)&uStack_d58;
LAB_101731324:
                func_0x000100e25bdc(abStack_d40,&uStack_d58,pppppppcVar23,unaff_x19,pppppppcVar33);
                func_0x0001017392c0(&ppppppcStack_c40);
                func_0x0001017392c0(&ppppppcStack_cc0);
                if ((abStack_d40[0] & 1) != 0) goto joined_r0x0001017313d8;
                goto LAB_1017313e4;
              }
              pppppcVar3 = ppppppcStack_c50[2];
              pppppcVar6 = ppppppcStack_c50[3];
              pppppppcStack_d68 = unaff_x23;
              pppppppcStack_d60 = unaff_x21;
              func_0x00010173928c(&ppppppcStack_cc0,abStack_d40);
              unaff_x23 = &ppppppcStack_c40;
              func_0x00010173928c(unaff_x23,abStack_d40);
              func_0x000107c5ec30();
              pppppppcVar23 = unaff_x23;
              if (unaff_x23 != (code *******)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)pppppcVar3,(long)pppppppcVar23)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10173143c);
                  (*pcVar10)();
                }
                unaff_x23 = (code *******)
                            ((long)unaff_x23 + ((long)pppppcVar3 - (long)pppppppcVar23));
              }
              pppppppcVar11 = (code *******)((long)pppppcVar6 - (long)pppppcVar3);
              if (SBORROW8((long)pppppcVar6,(long)pppppcVar3)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731438);
                (*pcVar10)();
              }
              func_0x000107c5ec38();
              unaff_x21 = pppppppcStack_d60;
              if (unaff_x23 == (code *******)0x0) {
                pppppppcVar23 = (code *******)0x0;
              }
              else {
                if ((long)pppppppcVar11 <= (long)pppppppcVar23) {
                  pppppppcVar23 = pppppppcVar11;
                }
                pppppppcVar23 = (code *******)((long)pppppppcVar23 + (long)unaff_x23);
              }
              func_0x000100e25bdc(abStack_d40,unaff_x23,pppppppcVar23,unaff_x19,pppppppcVar33);
              func_0x0001017392c0(&ppppppcStack_c40);
              func_0x0001017392c0(&ppppppcStack_cc0);
              pppppppcVar28 = pppppppcStack_d68;
            }
            unaff_x20 = (code *******)((ulong)pppppppcVar43 & 0x3fffffffffffffff);
            pppppppcVar11 = (code *******)0xc000000000000000;
            if ((abStack_d40[0] & 1) == 0) goto LAB_1017313e4;
          }
        }
joined_r0x0001017313d8:
        pppppppcVar11 = (code *******)0xc000000000000000;
        unaff_x23 = (code *******)0x0;
        if (pppppppcVar28 == (code *******)0x0) break;
        pppppppcVar37 = pppppppcVar37 + 0x10;
        pppppppcVar27 = pppppppcVar27 + 0x10;
        pppppppcVar11 = unaff_x21;
      } while( true );
    }
    pppppppcVar13 = (code *******)0x1;
  }
  else {
LAB_1017313e4:
    pppppppcVar13 = (code *******)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_bb8) {
    return;
  }
  func_0x000107c60e78();
  uStack_d78 = 0x101731444;
  lStack_dd8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppppppcVar38 = pppppppcVar13[2];
  pppppppcStack_dd0 = pppppppcVar43;
  pppppppcStack_dc8 = pppppppcVar11;
  pppppppcStack_dc0 = pppppppcVar27;
  pppppppcStack_db8 = pppppppcVar37;
  pppppppcStack_db0 = pppppppcVar35;
  pppppppcStack_da8 = unaff_x23;
  pppppppcStack_da0 = unaff_x19;
  pppppppcStack_d98 = unaff_x21;
  pppppppcStack_d90 = unaff_x20;
  pppppppcStack_d88 = pppppppcVar33;
  ppppppuStack_d80 = &pppppuStack_b50;
  if (ppppppcVar38 == pppppppcVar23[2]) {
    if ((ppppppcVar38 != (code ******)0x0) && (pppppppcVar13 != pppppppcVar23)) {
      pppppppcVar23 = pppppppcVar23 + 5;
      pppppppcVar13 = pppppppcVar13 + 5;
      do {
        ppppppcVar40 = pppppppcVar13[-1];
        ppppppcVar4 = *pppppppcVar13;
        ppppppcVar42 = pppppppcVar23[-1];
        ppppppcVar5 = *pppppppcVar23;
        uVar7 = (uint)((ulong)ppppppcVar4 >> 0x20);
        uVar26 = uVar7 >> 0x1e;
        uVar8 = (uint)((ulong)ppppppcVar5 >> 0x20);
        uVar31 = uVar8 >> 0x1e;
        iVar36 = (int)ppppppcVar40;
        if ((ulong)ppppppcVar4 >> 0x3e == 3) {
          uVar30 = 0;
          if ((((ppppppcVar40 != (code ******)0x0 || ppppppcVar4 != (code ******)0xc000000000000000)
                || (ulong)ppppppcVar5 >> 0x3e < 3) || (ppppppcVar42 != (code ******)0x0)) ||
             (ppppppcVar5 != (code ******)0xc000000000000000)) goto joined_r0x0001017316a0;
        }
        else {
          if (uVar7 >> 0x1e < 2) {
            if (uVar26 == 0) {
              uVar30 = (ulong)ppppppcVar4 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)ppppppcVar40 >> 0x20);
              if (SBORROW4(iVar29,iVar36)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731870);
                (*pcVar10)();
              }
              uVar30 = (ulong)(iVar29 - iVar36);
            }
joined_r0x0001017316a0:
            if (uVar8 >> 0x1e < 2) goto LAB_101731540;
LAB_10173150c:
            if (uVar31 != 2) {
              if (uVar30 == 0) goto LAB_1017314a8;
              goto LAB_101731820;
            }
            uVar32 = (long)ppppppcVar42[3] - (long)ppppppcVar42[2];
            if (SBORROW8((long)ppppppcVar42[3],(long)ppppppcVar42[2])) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10173186c);
              (*pcVar10)();
            }
          }
          else {
            if (uVar26 == 2) {
              uVar30 = (long)ppppppcVar40[3] - (long)ppppppcVar40[2];
              if (SBORROW8((long)ppppppcVar40[3],(long)ppppppcVar40[2])) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731874);
                (*pcVar10)();
              }
              goto joined_r0x0001017316a0;
            }
            uVar30 = 0;
            if (1 < uVar31) goto LAB_10173150c;
LAB_101731540:
            if (uVar31 == 0) {
              uVar32 = (ulong)ppppppcVar5 >> 0x30 & 0xff;
            }
            else {
              iVar29 = (int)((ulong)ppppppcVar42 >> 0x20);
              if (SBORROW4(iVar29,(int)ppppppcVar42)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x101731868);
                (*pcVar10)();
              }
              uVar32 = (ulong)(iVar29 - (int)ppppppcVar42);
            }
          }
          if (uVar30 != uVar32) goto LAB_101731820;
          if (0 < (long)uVar30) {
            if (uVar26 < 2) {
              if (uVar26 != 0) {
                lVar34 = (long)iVar36;
                ppppppcVar18 = (code ******)(((long)ppppppcVar40 >> 0x20) - lVar34);
                if ((long)ppppppcVar40 >> 0x20 < lVar34) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x101731878);
                  (*pcVar10)();
                }
                func_0x00010006c00c(ppppppcVar40,ppppppcVar4);
                ppppppcVar19 = ppppppcVar42;
                func_0x00010006c00c(ppppppcVar42,ppppppcVar5);
                func_0x000107c5ec30();
                if (ppppppcVar19 == (code ******)0x0) {
                  func_0x000107c5ec38();
                  lVar34 = 0;
                  lVar25 = 0;
                }
                else {
                  ppppppcVar20 = ppppppcVar19;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar34,(long)ppppppcVar20)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x101731884);
                    (*pcVar10)();
                  }
                  lVar2 = (long)ppppppcVar19 + (lVar34 - (long)ppppppcVar20);
                  func_0x000107c5ec38();
                  if ((long)ppppppcVar18 <= (long)ppppppcVar20) {
                    ppppppcVar20 = ppppppcVar18;
                  }
                  lVar34 = 0;
                  if (lVar2 != 0) {
                    lVar34 = lVar2;
                  }
                  lVar25 = 0;
                  if (lVar2 != 0) {
                    lVar25 = (long)ppppppcVar20 + lVar2;
                  }
                }
                func_0x000100e25bdc(abStack_df0,lVar34,lVar25,ppppppcVar42,ppppppcVar5);
                func_0x00010006c090(ppppppcVar42,ppppppcVar5);
                func_0x00010006c090(ppppppcVar40,ppppppcVar4);
joined_r0x000101731814:
                if ((abStack_df0[0] & 1) != 0) goto LAB_1017314a8;
                goto LAB_101731820;
              }
              abStack_df0[0] = (byte)ppppppcVar40;
              abStack_df0[1] = (byte)((ulong)ppppppcVar40 >> 8);
              abStack_df0[2] = (byte)((ulong)ppppppcVar40 >> 0x10);
              abStack_df0[3] = (byte)((ulong)ppppppcVar40 >> 0x18);
              abStack_df0[4] = (byte)((ulong)ppppppcVar40 >> 0x20);
              abStack_df0[5] = (byte)((ulong)ppppppcVar40 >> 0x28);
              abStack_df0[6] = (byte)((ulong)ppppppcVar40 >> 0x30);
              abStack_df0[7] = (byte)((ulong)ppppppcVar40 >> 0x38);
              abStack_df0[8] = (byte)ppppppcVar4;
              abStack_df0[9] = (byte)((ulong)ppppppcVar4 >> 8);
              abStack_df0[10] = (byte)((ulong)ppppppcVar4 >> 0x10);
              abStack_df0[0xb] = (byte)((ulong)ppppppcVar4 >> 0x18);
              abStack_df0[0xc] = (byte)((ulong)ppppppcVar4 >> 0x20);
              abStack_df0[0xd] = (byte)((ulong)ppppppcVar4 >> 0x28);
              pbVar24 = abStack_df0 + ((ulong)ppppppcVar4 >> 0x30 & 0xff);
              func_0x00010006c00c(ppppppcVar40,ppppppcVar4);
              func_0x00010006c00c(ppppppcVar42,ppppppcVar5);
            }
            else {
              if (uVar26 == 2) {
                pppppcVar3 = ppppppcVar40[2];
                pppppcVar6 = ppppppcVar40[3];
                func_0x00010006c00c(ppppppcVar40,ppppppcVar4);
                ppppppcVar18 = ppppppcVar42;
                func_0x00010006c00c(ppppppcVar42,ppppppcVar5);
                func_0x000107c5ec30();
                ppppppcVar19 = ppppppcVar18;
                if (ppppppcVar18 != (code ******)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)pppppcVar3,(long)ppppppcVar19)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x101731880);
                    (*pcVar10)();
                  }
                  ppppppcVar18 = (code ******)
                                 ((long)ppppppcVar18 + ((long)pppppcVar3 - (long)ppppppcVar19));
                }
                ppppppcVar20 = (code ******)((long)pppppcVar6 - (long)pppppcVar3);
                if (SBORROW8((long)pppppcVar6,(long)pppppcVar3)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x10173187c);
                  (*pcVar10)();
                }
                func_0x000107c5ec38();
                if (ppppppcVar18 == (code ******)0x0) {
                  lVar34 = 0;
                }
                else {
                  if ((long)ppppppcVar20 <= (long)ppppppcVar19) {
                    ppppppcVar19 = ppppppcVar20;
                  }
                  lVar34 = (long)ppppppcVar19 + (long)ppppppcVar18;
                }
                func_0x000100e25bdc(abStack_df0,ppppppcVar18,lVar34,ppppppcVar42,ppppppcVar5);
                func_0x00010006c090(ppppppcVar42,ppppppcVar5);
                func_0x00010006c090(ppppppcVar40,ppppppcVar4);
                goto joined_r0x000101731814;
              }
              abStack_df0[8] = 0;
              abStack_df0[9] = 0;
              abStack_df0[10] = 0;
              abStack_df0[0xb] = 0;
              abStack_df0[0xc] = 0;
              abStack_df0[0xd] = 0;
              abStack_df0[0] = 0;
              abStack_df0[1] = 0;
              abStack_df0[2] = 0;
              abStack_df0[3] = 0;
              abStack_df0[4] = 0;
              abStack_df0[5] = 0;
              abStack_df0[6] = 0;
              abStack_df0[7] = 0;
              func_0x00010006c00c(ppppppcVar40,ppppppcVar4);
              func_0x00010006c00c(ppppppcVar42,ppppppcVar5);
              pbVar24 = abStack_df0;
            }
            func_0x000100e25bdc(&bStack_df1,abStack_df0,pbVar24,ppppppcVar42,ppppppcVar5);
            func_0x00010006c090(ppppppcVar42,ppppppcVar5);
            func_0x00010006c090(ppppppcVar40,ppppppcVar4);
            if ((bStack_df1 & 1) == 0) goto LAB_101731820;
          }
        }
LAB_1017314a8:
        pppppppcVar23 = pppppppcVar23 + 2;
        pppppppcVar13 = pppppppcVar13 + 2;
        ppppppcVar38 = (code ******)((long)ppppppcVar38 + -1);
      } while (ppppppcVar38 != (code ******)0x0);
    }
    uVar21 = 1;
  }
  else {
LAB_101731820:
    uVar21 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_dd8) {
    func_0x000107c60e78(uVar21);
    return;
  }
  return;
}



/* Entry: 101731888; end: 101731893;  */

void FUN_101731888(void)

{
  return;
}



/* Entry: 101731894; end: 10173192b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101731894(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,ulong param_7)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar1 = (uint)(param_7 >> 0x3e);
  if (uVar1 == 1) {
    param_6 = param_7 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_6);
  return;
}



/* Entry: 10173192c; end: 10173194b;  */

void FUN_10173192c(void)

{
  func_0x000107c61168(&PTR_PTR_112dc4d40);
  return;
}



/* Entry: 10173194c; end: 101731ac7;  */

undefined8 FUN_10173194c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101731ac8; end: 101731ae7;  */

void FUN_101731ac8(void)

{
  func_0x000107c61168(&PTR_PTR_112dc4f40);
  return;
}



/* Entry: 101731ae8; end: 101731b1f;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_101731ae8(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
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



/* Entry: 101731b20; end: 101731b9f;  */

void FUN_101731b20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9828c0;
  func_0x000107c61520(&DAT_10d9828c0,&UNK_110400230);
  puRam0000000112dc4858 = puVar1;
  return;
}



/* Entry: 101731ba0; end: 1017320d3;  */

uint FUN_101731ba0(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_3a0 [96];
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  long lStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
  long lStack_190;
  long lStack_188;
  long lStack_180;
  long lStack_178;
  long lStack_170;
  long lStack_168;
  long lStack_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  long lVar3;
  
  lStack_d8 = param_1[8];
  lStack_e0 = param_1[7];
  lStack_c8 = param_1[10];
  lStack_d0 = param_1[9];
  lStack_b8 = param_1[0xc];
  lStack_c0 = param_1[0xb];
  lStack_a8 = param_1[0xe];
  lStack_b0 = param_1[0xd];
  lStack_f8 = param_1[4];
  lStack_100 = param_1[3];
  lStack_e8 = param_1[6];
  lStack_f0 = param_1[5];
  lStack_138 = param_2[8];
  lStack_140 = param_2[7];
  lStack_128 = param_2[10];
  lStack_130 = param_2[9];
  lStack_118 = param_2[0xc];
  lStack_120 = param_2[0xb];
  lStack_108 = param_2[0xe];
  lStack_110 = param_2[0xd];
  lStack_158 = param_2[4];
  lStack_160 = param_2[3];
  lStack_148 = param_2[6];
  lStack_150 = param_2[5];
  lStack_1f8 = param_1[8];
  lStack_200 = param_1[7];
  lStack_1e8 = param_1[10];
  lStack_1f0 = param_1[9];
  lStack_1d8 = param_1[0xc];
  lStack_1e0 = param_1[0xb];
  lStack_1c8 = param_1[0xe];
  lStack_1d0 = param_1[0xd];
  lStack_218 = param_1[4];
  lStack_220 = param_1[3];
  lStack_208 = param_1[6];
  lStack_210 = param_1[5];
  lStack_258 = param_2[8];
  lStack_260 = param_2[7];
  lStack_248 = param_2[10];
  lStack_250 = param_2[9];
  lStack_238 = param_2[0xc];
  lStack_240 = param_2[0xb];
  lStack_228 = param_2[0xe];
  lStack_230 = param_2[0xd];
  lStack_278 = param_2[4];
  lStack_280 = param_2[3];
  lStack_268 = param_2[6];
  lStack_270 = param_2[5];
  lStack_1c0 = lStack_280;
  lStack_1b8 = lStack_278;
  lStack_1b0 = lStack_270;
  lStack_1a8 = lStack_268;
  lStack_1a0 = lStack_260;
  lStack_198 = lStack_258;
  lStack_190 = lStack_250;
  lStack_188 = lStack_248;
  lStack_180 = lStack_240;
  lStack_178 = lStack_238;
  lStack_170 = lStack_230;
  lStack_168 = lStack_228;
  if (lStack_218 == 0) {
    if (lStack_278 != 0) goto LAB_101731d28;
    lStack_2b8 = param_1[8];
    lStack_2c0 = param_1[7];
    lStack_2a8 = param_1[10];
    lStack_2b0 = param_1[9];
    lStack_298 = param_1[0xc];
    lStack_2a0 = param_1[0xb];
    lStack_288 = param_1[0xe];
    lStack_290 = param_1[0xd];
    lStack_2d8 = param_1[4];
    lStack_2e0 = param_1[3];
    lStack_2c8 = param_1[6];
    lStack_2d0 = param_1[5];
    FUN_10173194c(&lStack_100,&lStack_a0,0x112dc4818,&UNK_10d982678);
    FUN_10173194c(&lStack_160,&lStack_a0,0x112dc4818,&UNK_10d982678);
    func_0x000101731994(&lStack_2e0,0x112dc4818,&UNK_10d982678);
LAB_101731e18:
    if (*param_1 == *param_2) {
      lVar3 = param_1[1];
      func_0x000100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)lVar3;
      goto LAB_101731e3c;
    }
  }
  else if (lStack_278 == 0) {
LAB_101731d28:
    lStack_2e0 = lStack_220;
    lStack_2d8 = lStack_218;
    lStack_2d0 = lStack_210;
    lStack_2c8 = lStack_208;
    lStack_2c0 = lStack_200;
    lStack_2b8 = lStack_1f8;
    lStack_2b0 = lStack_1f0;
    lStack_2a8 = lStack_1e8;
    lStack_2a0 = lStack_1e0;
    lStack_298 = lStack_1d8;
    lStack_290 = lStack_1d0;
    lStack_288 = lStack_1c8;
    FUN_10173194c(&lStack_100,&lStack_a0,0x112dc4818,&UNK_10d982678);
    FUN_10173194c(&lStack_160,&lStack_a0,0x112dc4818,&UNK_10d982678);
    func_0x000101731994(&lStack_2e0,0x112dc4820,&UNK_10d982680);
  }
  else {
    lStack_318 = param_2[8];
    lStack_320 = param_2[7];
    lStack_308 = param_2[10];
    lStack_310 = param_2[9];
    lStack_2f8 = param_2[0xc];
    lStack_300 = param_2[0xb];
    lStack_2e8 = param_2[0xe];
    lStack_2f0 = param_2[0xd];
    lStack_338 = param_2[4];
    lStack_340 = param_2[3];
    lStack_328 = param_2[6];
    lStack_330 = param_2[5];
    lStack_78 = param_1[8];
    lStack_80 = param_1[7];
    lStack_68 = param_1[10];
    lStack_70 = param_1[9];
    lStack_58 = param_1[0xc];
    lStack_60 = param_1[0xb];
    lStack_48 = param_1[0xe];
    lStack_50 = param_1[0xd];
    lStack_98 = param_1[4];
    lStack_a0 = param_1[3];
    lStack_88 = param_1[6];
    lStack_90 = param_1[5];
    lStack_2e0 = lStack_340;
    lStack_2d8 = lStack_338;
    lStack_2d0 = lStack_330;
    lStack_2c8 = lStack_328;
    lStack_2c0 = lStack_320;
    lStack_2b8 = lStack_318;
    lStack_2b0 = lStack_310;
    lStack_2a8 = lStack_308;
    lStack_2a0 = lStack_300;
    lStack_298 = lStack_2f8;
    lStack_290 = lStack_2f0;
    lStack_288 = lStack_2e8;
    FUN_10173194c(&lStack_100,auStack_3a0,0x112dc4818,&UNK_10d982678);
    FUN_10173194c(&lStack_160,auStack_3a0,0x112dc4818,&UNK_10d982678);
    plVar2 = &lStack_a0;
    func_0x0001017319d4(plVar2,&lStack_2e0);
    func_0x000101731994(&lStack_340,0x112dc4818,&UNK_10d982678);
    func_0x000101731994(&lStack_220,0x112dc4818,&UNK_10d982678);
    if (((ulong)plVar2 & 1) != 0) goto LAB_101731e18;
  }
  uVar1 = 0;
LAB_101731e3c:
  return uVar1 & 1;
}



/* Entry: 1017320d4; end: 10173215f;  */

/* WARNING: Possible PIC construction at 0x000101732104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101732108) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1017320d4(undefined8 *param_1,undefined8 *param_2)

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
  if (((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
      (func_0x000107c605b8(), (uVar13 & 1) == 0)) || (param_1[4] != param_2[4])) {
    return (byte *)0x0;
  }
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
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))))
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



/* Entry: 101732160; end: 1017321df;  */

void FUN_101732160(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dc4870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d982930;
  func_0x000107c61520(&UNK_10d982930,&UNK_110400230);
  puRam0000000112dc4870 = puVar1;
  return;
}



/* Entry: 1017321e0; end: 1017325cf;  */

uint FUN_1017321e0(ulong *param_1,ulong *param_2)

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
  ulong uVar15;
  ulong uVar16;
  undefined1 auStack_128 [56];
  ulong uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar9 = param_1[8];
  uVar5 = param_1[7];
  uVar10 = param_1[10];
  uVar6 = param_1[9];
  uVar15 = param_1[0xc];
  uVar13 = param_1[0xb];
  uVar3 = param_1[0xd];
  uVar11 = param_2[8];
  uVar7 = param_2[7];
  uVar16 = param_2[10];
  uVar14 = param_2[9];
  uVar12 = param_2[0xc];
  uVar8 = param_2[0xb];
  uVar4 = param_2[0xd];
  uStack_f0 = uVar7;
  uStack_e8 = uVar11;
  uStack_e0 = uVar14;
  uStack_d8 = uVar16;
  uStack_d0 = uVar8;
  uStack_c8 = uVar12;
  uStack_c0 = uVar4;
  uStack_b0 = uVar5;
  uStack_a8 = uVar9;
  uStack_a0 = uVar6;
  uStack_98 = uVar10;
  uStack_90 = uVar13;
  uStack_88 = uVar15;
  uStack_80 = uVar3;
  if (uVar9 == 0) {
    if (uVar11 != 0) goto LAB_10173238c;
    FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
    FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
LAB_101732474:
    func_0x0001017318e0(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar3);
    uVar5 = *param_1;
    if (((uVar5 == *param_2) && (param_1[1] == param_2[1])) ||
       (func_0x000107c605b8(), (uVar5 & 1) != 0)) {
      uVar5 = param_1[2];
      if (((((uVar5 == param_2[2]) && (param_1[3] == param_2[3])) ||
           (func_0x000107c605b8(), (uVar5 & 1) != 0)) &&
          (((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0 &&
           (((*(byte *)((long)param_1 + 0x21) ^ *(byte *)((long)param_2 + 0x21)) & 1) == 0)))) &&
         ((((*(byte *)((long)param_1 + 0x22) ^ *(byte *)((long)param_2 + 0x22)) & 1) == 0 &&
          ((((*(byte *)((long)param_1 + 0x23) ^ *(byte *)((long)param_2 + 0x23)) & 1) == 0 &&
           (((*(byte *)((long)param_1 + 0x24) ^ *(byte *)((long)param_2 + 0x24)) & 1) == 0)))))) {
        uVar5 = param_1[5];
        func_0x000100e25fcc(uVar5,param_1[6],param_2[5],param_2[6]);
        uVar1 = (uint)uVar5;
        goto LAB_1017325ac;
      }
    }
  }
  else {
    if (uVar11 == 0) {
LAB_10173238c:
      FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
      FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
      func_0x0001017318e0(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar3);
      uVar5 = uVar7;
      uVar9 = uVar11;
      uVar6 = uVar14;
      uVar10 = uVar16;
      uVar13 = uVar8;
      uVar15 = uVar12;
      uVar3 = uVar4;
    }
    else {
      if (((uVar5 == uVar7) && (uVar9 == uVar11)) ||
         (uVar2 = uVar5, func_0x000107c605b8(uVar5,uVar9,uVar7,uVar11,0), (uVar2 & 1) != 0)) {
        if ((((uVar6 == uVar14) && (uVar10 == uVar16)) ||
            (uVar2 = uVar6, func_0x000107c605b8(uVar6,uVar10,uVar14,uVar16,0), (uVar2 & 1) != 0)) &&
           (uVar13 == uVar8)) {
          FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
          FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
          uVar8 = uVar15;
          func_0x000100e25fcc(uVar15,uVar3,uVar12,uVar4);
          func_0x0001017318e0(uVar7,uVar11,uVar14,uVar16,uVar13,uVar12,uVar4);
          if ((uVar8 & 1) != 0) goto LAB_101732474;
          goto LAB_1017325a0;
        }
        FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
        FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
      }
      else {
        FUN_10173194c(&uStack_b0,auStack_128,0x112dc4810,&UNK_10d982670);
        FUN_10173194c(&uStack_f0,auStack_128,0x112dc4810,&UNK_10d982670);
      }
      func_0x0001017318e0(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar4);
    }
LAB_1017325a0:
    func_0x0001017318e0(uVar5,uVar9,uVar6,uVar10,uVar13,uVar15,uVar3);
  }
  uVar1 = 0;
LAB_1017325ac:
  return uVar1 & 1;
}



/* Entry: 1017325d0; end: 101732787;  */

/* WARNING: Possible PIC construction at 0x000101732600: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101732604) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1017325d0(undefined8 *param_1,undefined8 *param_2)

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
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  if (*(char *)(param_2 + 3) == '\x01') {
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
  if (*(int *)((long)param_1 + 0x1c) == *(int *)((long)param_2 + 0x1c)) {
    uVar13 = param_1[4];
    if (((uVar13 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
      pbVar10 = (byte *)param_1[6];
      pbVar26 = (byte *)param_1[7];
      lVar19 = param_2[6];
      uVar13 = param_2[7];
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
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar26;
        if ((ulong)pbVar26 >> 0x3e == 3) {
          uVar21 = 0;
          if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
             ((uVar13 >> 0x3e < 3 || ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000)))))
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
            uVar24 = uVar13 >> 0x30 & 0xff;
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
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
            unaff_x22 = uVar13;
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
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar19 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar19,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar26;
            if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar19 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
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
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
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
          pbVar17 = *(byte **)(pbVar14 + 0x10);
          lVar19 = *(long *)(pbVar14 + 0x20);
          if (pbVar26 == (byte *)0x0) {
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
            pbVar15 = pbVar26;
            if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
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
        uVar13 = *(ulong *)(pbVar14 + 0x10);
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



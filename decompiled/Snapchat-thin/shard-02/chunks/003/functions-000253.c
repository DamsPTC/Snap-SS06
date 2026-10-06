/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c47c80; end: 101c47d1f;  */

/* WARNING: Possible PIC construction at 0x000101c47ccc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c47cdc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c47cd0) */
/* WARNING: Removing unreachable block (ram,0x000101c47ce0) */

void FUN_101c47c80(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0b410 != -1) {
    func_0x000107c61568(0x112e0b410,FUN_101c47c38);
  }
  uVar5 = uRam00000001138044d0;
  uVar4 = uRam00000001138044c8;
  uVar3 = uRam00000001138044c0;
  uVar2 = uRam00000001138044b8;
  uVar1 = uRam00000001138044b0;
  *param_1 = uRam00000001138044a8;
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



/* Entry: 101c47d20; end: 101c47d67;  */

void FUN_101c47d20(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4bef,0xc,2);
  uRam00000001138044e0 = uStack_38;
  uRam00000001138044d8 = uStack_40;
  uRam00000001138044f0 = uStack_28;
  uRam00000001138044e8 = uStack_30;
  uRam0000000113804500 = uStack_18;
  uRam00000001138044f8 = uStack_20;
  return;
}



/* Entry: 101c47d68; end: 101c47deb;  */

void FUN_101c47d68(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 101c47dec; end: 101c47e73;  */

void FUN_101c47dec(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 101c47e74; end: 101c47eaf;  */

void FUN_101c47e74(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 101c47eb0; end: 101c47edf;  */

undefined1  [16] FUN_101c47eb0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 101c47ee0; end: 101c47f13;  */

void FUN_101c47ee0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 101c47f14; end: 101c47f27;  */

undefined1  [16] FUN_101c47f14(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x101c47f24;
  return auVar1;
}



/* Entry: 101c47f28; end: 101c47f5f;  */

void FUN_101c47f28(void)

{
  FUN_101c47d68();
  return;
}



/* Entry: 101c47f60; end: 101c47f63;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c47f60(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c47f64; end: 101c47f9b;  */

uint FUN_101c47f64(long param_1,long param_2)

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
  func_0x000101c49034();
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



/* Entry: 101c47f9c; end: 101c480b3;  */

/* WARNING: Possible PIC construction at 0x000101c47fd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c47fd4) */
/* WARNING: Removing unreachable block (ram,0x000101c47ffc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c47f9c(undefined8 *param_1)

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
  undefined8 *unaff_x20;
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
  
  lVar23 = param_1[2];
  uVar15 = param_1[3];
  pbVar9 = (byte *)unaff_x20[2];
  pbVar24 = (byte *)unaff_x20[3];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  do {
    *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
    *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
    *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
    *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
    *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
    *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
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
          (uVar15 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar15 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar15 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar21 = *(long *)(lVar23 + 0x18) - *(long *)(lVar23 + 0x10);
        if (SBORROW8(*(long *)(lVar23 + 0x18),*(long *)(lVar23 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar15);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
          if (pbVar22 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
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
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
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
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101c480b4; end: 101c480ef;  */

void FUN_101c480b4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b498;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b498,&UNK_10d9e4bc0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c480f0; end: 101c4826b;  */

void FUN_101c480f0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_48 = unaff_x20[1];
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101c4826c; end: 101c482b3;  */

void FUN_101c4826c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9e4bd0,0x1e,2);
  uRam0000000113804510 = uStack_38;
  uRam0000000113804508 = uStack_40;
  uRam0000000113804520 = uStack_28;
  uRam0000000113804518 = uStack_30;
  uRam0000000113804530 = uStack_18;
  uRam0000000113804528 = uStack_20;
  return;
}



/* Entry: 101c482b4; end: 101c4834b;  */

void FUN_101c482b4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_101c48308:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x000101c48324;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_101c482f0;
code_r0x000101c48324:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_101c482f0:
    (*pcVar3)();
  }
  goto LAB_101c48308;
}



/* Entry: 101c4834c; end: 101c483ef;  */

void FUN_101c4834c(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c483f0; end: 101c4842f;  */

void FUN_101c483f0(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 101c48430; end: 101c4845f;  */

undefined1  [16] FUN_101c48430(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 101c48460; end: 101c48493;  */

void FUN_101c48460(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 101c48494; end: 101c484a7;  */

undefined1  [16] FUN_101c48494(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x101c484a4;
  return auVar1;
}



/* Entry: 101c484a8; end: 101c484cf;  */

void FUN_101c484a8(void)

{
  FUN_101c482b4();
  return;
}



/* Entry: 101c484d0; end: 101c484d3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101c484d0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101c484d4; end: 101c4850b;  */

uint FUN_101c484d4(long param_1,long param_2)

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
  FUN_101c48ff4();
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



/* Entry: 101c4850c; end: 101c48553;  */

uint FUN_101c4850c(undefined8 *param_1)

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
  FUN_101c487c8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c48554; end: 101c485f3;  */

/* WARNING: Possible PIC construction at 0x000101c485a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c485b0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c485a4) */
/* WARNING: Removing unreachable block (ram,0x000101c485b4) */

void FUN_101c48554(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112e0b428 != -1) {
    func_0x000107c61568(0x112e0b428,FUN_101c4826c);
  }
  uVar5 = uRam0000000113804530;
  uVar4 = uRam0000000113804528;
  uVar3 = uRam0000000113804520;
  uVar2 = uRam0000000113804518;
  uVar1 = uRam0000000113804510;
  *param_1 = uRam0000000113804508;
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



/* Entry: 101c485f4; end: 101c4862f;  */

void FUN_101c485f4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112e0b488;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112e0b488,&UNK_10d9e4bb8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101c48630; end: 101c48743;  */

void FUN_101c48630(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101c48744; end: 101c487c7;  */

uint FUN_101c48744(undefined8 *param_1,undefined8 *param_2)

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
  FUN_101c487c8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101c487c8; end: 101c48843;  */

/* WARNING: Possible PIC construction at 0x000101c487f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101c487fc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101c487c8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c48844; end: 101c48883;  */

void FUN_101c48844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b430 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4aa0;
  func_0x000107c61520(&UNK_10d9e4aa0,&UNK_11045bf98);
  puRam0000000112e0b430 = puVar1;
  return;
}



/* Entry: 101c48884; end: 101c48897;  */

void FUN_101c48884(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c48898();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101c488d8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c48898; end: 101c48917;  */

void FUN_101c48898(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b438 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e48e0;
  func_0x000107c61520(&UNK_10d9e48e0,&UNK_11045bea0);
  puRam0000000112e0b438 = puVar1;
  return;
}



/* Entry: 101c48918; end: 101c4891b;  */

void FUN_101c48918(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0b448 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0b450;
  func_0x00010002969c(0x112e0b450,&UNK_10d9e4868);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0b448 = puVar2;
  return;
}



/* Entry: 101c4891c; end: 101c4896b;  */

void FUN_101c4891c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112e0b448 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112e0b450;
  func_0x00010002969c(0x112e0b450,&UNK_10d9e4868);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112e0b448 = puVar2;
  return;
}



/* Entry: 101c4896c; end: 101c4896f;  */

void FUN_101c4896c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4920;
  func_0x000107c61520(&UNK_10d9e4920,&UNK_11045bea0);
  puRam0000000112e0b458 = puVar1;
  return;
}



/* Entry: 101c48970; end: 101c489af;  */

void FUN_101c48970(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4920;
  func_0x000107c61520(&UNK_10d9e4920,&UNK_11045bea0);
  puRam0000000112e0b458 = puVar1;
  return;
}



/* Entry: 101c489b0; end: 101c489d3;  */

void FUN_101c489b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c489d4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c489d4; end: 101c48a13;  */

void FUN_101c489d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e49a0;
  func_0x000107c61520(&UNK_10d9e49a0,&UNK_11045bf18);
  puRam0000000112e0b460 = puVar1;
  return;
}



/* Entry: 101c48a14; end: 101c48a2b;  */

void FUN_101c48a14(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101c48788)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c3cc60();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c48a2c; end: 101c48a6b;  */

void FUN_101c48a2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b468 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4a08;
  func_0x000107c61520(&UNK_10d9e4a08,&UNK_11045bf18);
  puRam0000000112e0b468 = puVar1;
  return;
}



/* Entry: 101c48a6c; end: 101c48a8f;  */

void FUN_101c48a6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c48a90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101c48a90; end: 101c48acf;  */

void FUN_101c48a90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b470 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4a78;
  func_0x000107c61520(&UNK_10d9e4a78,&UNK_11045bf98);
  puRam0000000112e0b470 = puVar1;
  return;
}



/* Entry: 101c48ad0; end: 101c48ae3;  */

void FUN_101c48ad0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101c48844();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101c48b14();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c48ae4; end: 101c48b13;  */

void FUN_101c48ae4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101c48b14; end: 101c48b53;  */

void FUN_101c48b14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e4a30;
  func_0x000107c61520(&DAT_10d9e4a30,&UNK_11045bf98);
  puRam0000000112e0b478 = puVar1;
  return;
}



/* Entry: 101c48b54; end: 101c48b57;  */

void FUN_101c48b54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4ae0;
  func_0x000107c61520(&UNK_10d9e4ae0,&UNK_11045bf98);
  puRam0000000112e0b480 = puVar1;
  return;
}



/* Entry: 101c48b58; end: 101c48b97;  */

void FUN_101c48b58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b480 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9e4ae0;
  func_0x000107c61520(&UNK_10d9e4ae0,&UNK_11045bf98);
  puRam0000000112e0b480 = puVar1;
  return;
}



/* Entry: 101c48b98; end: 101c48c37;  */

int FUN_101c48b98(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 101c48c38; end: 101c48c5f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c48c38(long param_1)

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



/* Entry: 101c48c60; end: 101c48d0f;  */

undefined8 * FUN_101c48c60(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c48d10; end: 101c48d53;  */

undefined8 * FUN_101c48d10(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c48d54; end: 101c48deb;  */

int FUN_101c48d54(int *param_1,int param_2)

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



/* Entry: 101c48dec; end: 101c48e1b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101c48dec(long param_1)

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



/* Entry: 101c48e1c; end: 101c48efb;  */

undefined8 * FUN_101c48e1c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c48efc; end: 101c48f4f;  */

undefined8 * FUN_101c48efc(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101c48f50; end: 101c48ff3;  */

int FUN_101c48f50(int *param_1,int param_2)

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



/* Entry: 101c48ff4; end: 101c49073;  */

void FUN_101c48ff4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112e0b490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9e4a4c;
  func_0x000107c61520(&DAT_10d9e4a4c,&UNK_11045bf98);
  puRam0000000112e0b490 = puVar1;
  return;
}



/* Entry: 101c49074; end: 101c4907b;  */

long FUN_101c49074(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101c4907c; end: 101c493bb;  */

undefined *
FUN_101c4907c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  code *pcStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  
  uVar2 = param_1;
  FUN_101c493bc();
  uVar16 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = param_3;
  FUN_101c4c614(param_3,param_4);
  uVar4 = uVar3;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = param_1;
  FUN_101c4fca4(param_1,param_2);
  uVar14 = uVar3;
  func_0x000107c421ac();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar14;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(uVar14);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x28);
  puVar5 = &UNK_11045c3c8;
  func_0x000107c613fc(&UNK_11045c3c8,0x48,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar16;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  *(undefined8 *)(puVar5 + 0x28) = uVar17;
  *(undefined8 *)(puVar5 + 0x30) = uVar14;
  *(undefined8 *)(puVar5 + 0x38) = param_5;
  *(undefined8 *)(puVar5 + 0x40) = param_6;
  puVar6 = &UNK_11045c3f0;
  func_0x000107c613fc(&UNK_11045c3f0,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar16;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_1;
  *(undefined8 *)(puVar6 + 0x30) = param_2;
  puVar7 = &UNK_11045c418;
  func_0x000107c613fc(&UNK_11045c418,0x28,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar15;
  *(undefined8 *)(puVar7 + 0x18) = param_1;
  *(undefined8 *)(puVar7 + 0x20) = param_2;
  puVar8 = &UNK_11045c440;
  func_0x000107c613fc(&UNK_11045c440,0x30,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar16;
  *(undefined8 *)(puVar8 + 0x18) = param_3;
  *(undefined8 *)(puVar8 + 0x20) = param_4;
  *(undefined8 *)(puVar8 + 0x28) = uVar17;
  puVar9 = PTR_PTR_1126a8c88;
  func_0x000107c610f8();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101c4b91c;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_11045c458;
  ppuVar10 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4(ppuVar10);
  pcStack_b8 = FUN_101c4b930;
  puStack_d8 = puVar1;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_1000f6b44;
  puStack_c0 = &UNK_11045c480;
  ppuVar11 = &puStack_d8;
  puStack_b0 = puVar6;
  func_0x000107c60bc4(ppuVar11);
  uStack_e8 = 0x101c4b95c;
  puStack_108 = puVar1;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_11045c4a8;
  ppuVar12 = &puStack_108;
  puStack_e0 = puVar7;
  func_0x000107c60bc4(ppuVar12);
  uStack_118 = 0x101c4b984;
  puStack_138 = puVar1;
  uStack_130 = 0x42000000;
  puStack_128 = &UNK_1000f6b44;
  puStack_120 = &UNK_11045c4d0;
  ppuVar13 = &puStack_138;
  puStack_110 = puVar8;
  func_0x000107c60bc4();
  func_0x000107c61580(uVar16,3);
  func_0x000107c61438(param_2,3);
  func_0x000107c61580(uVar17,2);
  func_0x000107c61438(param_4,2);
  func_0x000107c6157c(uVar14);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(uVar15);
  func_0x000107c48e28(puVar9);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar3);
  func_0x000107c60bd0(ppuVar13);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar10);
  func_0x000107c61574(puStack_110);
  func_0x000107c61574(puStack_e0);
  func_0x000107c61574(puStack_b0);
  func_0x000107c61574(puStack_80);
  return puVar9;
}



/* Entry: 101c493bc; end: 101c494cb;  */

undefined * FUN_101c493bc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  uVar5 = *unaff_x20;
  puVar1 = &UNK_11045c260;
  func_0x000107c613fc(&UNK_11045c260,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  uVar4 = unaff_x20[2];
  puVar2 = &UNK_11045c288;
  func_0x000107c613fc(&UNK_11045c288,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  puVar1 = PTR_PTR_1126b3c88;
  func_0x000107c610f8(PTR_PTR_1126b3c88);
  uStack_50 = 0x101c4af94;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  uStack_60 = 0x101c4add0;
  puStack_58 = &UNK_11045c2a0;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  func_0x000107c6157c(uVar4);
  func_0x000107c61434(param_2);
  func_0x000107c48b30(puVar1);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(puStack_48);
  return puVar1;
}



/* Entry: 101c494cc; end: 101c49857;  */

void FUN_101c494cc(undefined8 param_1,byte *param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  byte *pbVar14;
  byte **ppbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbStack_60;
  ulong uStack_58;
  
  FUN_101c4be68();
  uVar10 = (ulong)param_2 & 0xffffffffffff;
  uVar12 = param_3 >> 0x38 & 0xf;
  uVar11 = uVar10;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar11 = uVar12;
  }
  if (uVar11 == 0) {
    return;
  }
  if ((param_3 >> 0x3c & 1) == 0) {
    if ((param_3 >> 0x3d & 1) == 0) {
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        func_0x000107c60358();
      }
      else {
        param_2 = (byte *)((param_3 & 0xfffffffffffffff) + 0x20);
        param_3 = uVar10;
      }
      if (*param_2 == 0x2b) {
        lVar13 = param_3 - 1;
        if ((long)param_3 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c49854);
          (*pcVar7)();
        }
        if (lVar13 == 0) {
          return;
        }
        pbVar16 = (byte *)0x0;
        do {
          param_2 = param_2 + 1;
          if (9 < *param_2 - 0x30) {
            return;
          }
          auVar3._8_8_ = 0;
          auVar3._0_8_ = pbVar16;
          if (SUB168(auVar3 * ZEXT816(10),8) != 0) {
            return;
          }
          uVar12 = (long)pbVar16 * 10;
          uVar11 = (ulong)(byte)(*param_2 - 0x30);
          pbVar16 = (byte *)(uVar12 + uVar11);
          if (CARRY8(uVar12,uVar11)) {
            return;
          }
          uVar17 = 0;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      else if (*param_2 == 0x2d) {
        lVar13 = param_3 - 1;
        if ((long)param_3 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c4984c);
          (*pcVar7)();
        }
        if (lVar13 == 0) {
          return;
        }
        pbVar16 = (byte *)0x0;
        do {
          param_2 = param_2 + 1;
          if (9 < *param_2 - 0x30) {
            return;
          }
          auVar1._8_8_ = 0;
          auVar1._0_8_ = pbVar16;
          if (SUB168(auVar1 * ZEXT816(10),8) != 0) {
            return;
          }
          uVar12 = (long)pbVar16 * 10;
          uVar11 = (ulong)(byte)(*param_2 - 0x30);
          pbVar16 = (byte *)(uVar12 - uVar11);
          if (uVar12 < uVar11) {
            return;
          }
          uVar17 = 0;
          lVar13 = lVar13 + -1;
        } while (lVar13 != 0);
      }
      else {
        if (param_2 == (byte *)0x0) {
          return;
        }
        if (param_3 == 0) {
          return;
        }
        pbVar16 = (byte *)0x0;
        do {
          if (9 < *param_2 - 0x30) {
            return;
          }
          auVar5._8_8_ = 0;
          auVar5._0_8_ = pbVar16;
          if (SUB168(auVar5 * ZEXT816(10),8) != 0) {
            return;
          }
          uVar12 = (long)pbVar16 * 10;
          uVar11 = (ulong)(byte)(*param_2 - 0x30);
          pbVar16 = (byte *)(uVar12 + uVar11);
          if (CARRY8(uVar12,uVar11)) {
            return;
          }
          uVar17 = 0;
          param_3 = param_3 - 1;
          param_2 = param_2 + 1;
        } while (param_3 != 0);
      }
    }
    else {
      pbStack_60 = param_2;
      uStack_58 = param_3 & 0xffffffffffffff;
      uVar17 = (uint)param_2 & 0xff;
      if (uVar17 == 0x2b) {
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c49858);
          (*pcVar7)();
        }
        lVar13 = uVar12 - 1;
        if (lVar13 != 0) {
          pbVar16 = (byte *)0x0;
          pbVar14 = (byte *)((ulong)&pbStack_60 | 1);
          do {
            if (((9 < *pbVar14 - 0x30) ||
                (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar16, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
               (uVar12 = (long)pbVar16 * 10, uVar11 = (ulong)(byte)(*pbVar14 - 0x30),
               pbVar16 = (byte *)(uVar12 + uVar11), CARRY8(uVar12,uVar11))) goto LAB_101c49750;
            uVar17 = 0;
            lVar13 = lVar13 + -1;
            pbVar14 = pbVar14 + 1;
          } while (lVar13 != 0);
          goto LAB_101c49758;
        }
      }
      else if (uVar17 == 0x2d) {
        if (uVar12 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c49850);
          (*pcVar7)();
        }
        lVar13 = uVar12 - 1;
        if (lVar13 != 0) {
          pbVar16 = (byte *)0x0;
          pbVar14 = (byte *)((ulong)&pbStack_60 | 1);
          do {
            if (((9 < *pbVar14 - 0x30) ||
                (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar16, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
               (uVar12 = (long)pbVar16 * 10, uVar11 = (ulong)(byte)(*pbVar14 - 0x30),
               pbVar16 = (byte *)(uVar12 - uVar11), uVar12 < uVar11)) goto LAB_101c49750;
            uVar17 = 0;
            lVar13 = lVar13 + -1;
            pbVar14 = pbVar14 + 1;
          } while (lVar13 != 0);
          goto LAB_101c49758;
        }
      }
      else if (uVar12 != 0) {
        pbVar16 = (byte *)0x0;
        ppbVar15 = &pbStack_60;
        do {
          if (((9 < *(byte *)ppbVar15 - 0x30) ||
              (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar16, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
             (uVar10 = (long)pbVar16 * 10, uVar11 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
             pbVar16 = (byte *)(uVar10 + uVar11), CARRY8(uVar10,uVar11))) goto LAB_101c49750;
          uVar17 = 0;
          uVar12 = uVar12 - 1;
          ppbVar15 = (byte **)((long)ppbVar15 + 1);
        } while (uVar12 != 0);
        goto LAB_101c49758;
      }
LAB_101c49750:
      uVar17 = 1;
      pbVar16 = (byte *)0x0;
    }
  }
  else {
    func_0x000107c61434(param_3);
    uVar11 = param_3;
    func_0x000100f5015c(param_2,param_3,10);
    uVar17 = (uint)uVar11;
    func_0x000107c6142c(param_3);
    pbVar16 = param_2;
  }
LAB_101c49758:
  if (((uVar17 & 0xff) != 1) && (pbVar16 != (byte *)0x0)) {
    puVar8 = &UNK_11045c508;
    func_0x000107c613fc(&UNK_11045c508,0x30,7);
    *(undefined8 *)(puVar8 + 0x10) = param_5;
    *(byte **)(puVar8 + 0x18) = pbVar16;
    *(undefined8 *)(puVar8 + 0x20) = param_6;
    *(undefined8 *)(puVar8 + 0x28) = param_7;
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_7);
    uVar9 = 0xb;
    func_0x0001001ca524(0xb,3,0x50,4,0,0,&UNK_10d9e4e18,puVar8,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar8);
    FUN_101c49ba4(uVar9);
    func_0x000107c61574(uVar9);
  }
  return;
}



/* Entry: 101c49858; end: 101c498bb;  */

void FUN_101c49858(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_2;
  *(undefined8 *)(unaff_x22 + 0x48) = param_3;
  lVar1 = 0;
  func_0x000107c5fcbc();
  *(long *)(unaff_x22 + 0x60) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c498bc,0,0);
  return;
}



/* Entry: 101c498bc; end: 101c4997b;  */

void FUN_101c498bc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  uVar4 = 0x112e0b708;
  func_0x0001000285a8(0x112e0b708,&UNK_10d9e4df0);
  func_0x000107c61538();
  FUN_101c4b0b4();
  *(undefined8 *)(unaff_x22 + 0x78) = uVar4;
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x80) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c4997c;
                    /* WARNING: Could not recover jumptable at 0x000101c49978. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x48),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c4997c; end: 101c499e3;  */

void FUN_101c4997c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x78);
  *(undefined8 *)(lVar3 + 0x88) = param_1;
  *(long *)(lVar3 + 0x90) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0x80));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101c499e4;
  }
  else {
    pcVar2 = FUN_101c49b10;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c499e4; end: 101c49a87;  */

void FUN_101c499e4(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x88);
  uVar1 = unaff_x22 + 0x10;
  func_0x0001000834e4();
  if (lVar4 != 0) {
    func_0x000107c5fd5c();
    if ((uVar1 & 1) == 0) {
      uVar2 = 0;
      func_0x000107c5fcec();
      uVar3 = uVar2;
      func_0x000107c5fce8();
      *(undefined8 *)(unaff_x22 + 0x98) = uVar3;
      func_0x000100eea164();
      func_0x000107c5fca8(uVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_task_switch_110350130)(FUN_101c49a88,uVar2,uVar3);
      return;
    }
    func_0x000107c61170(lVar4);
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101c49a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c49a88; end: 101c49b0f;  */

void FUN_101c49a88(void)

{
  ulong uVar1;
  long unaff_x22;
  
  uVar1 = *(ulong *)(unaff_x22 + 0x98);
  func_0x000107c61574();
  func_0x000107c5fd5c();
  if ((uVar1 & 1) == 0) {
    (**(code **)(unaff_x22 + 0x50))(*(undefined8 *)(unaff_x22 + 0x88));
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(0x101c49ad8,0,0);
  return;
}



/* Entry: 101c49b10; end: 101c49ba3;  */

void FUN_101c49b10(void)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar2 = *(ulong *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  func_0x0001000834e4(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar3;
  uVar3 = 0x112d393f0;
  func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
  func_0x000107c6147c(uVar2,(undefined8 *)(unaff_x22 + 0x38),uVar3,uVar1,6);
  if ((uVar2 & 1) != 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x68) + 8))
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x60));
  }
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000101c49ba0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c49ba4; end: 101c49c23;  */

void FUN_101c49ba4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b940(uVar2);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  func_0x000107c6157c(param_1);
  func_0x000107c5d278(uVar2);
  if (lVar1 != 0) {
    func_0x000107c6157c(lVar1);
    func_0x000107c5fd50();
    func_0x000107c61578(lVar1,2);
  }
  return;
}



/* Entry: 101c49c24; end: 101c49eab;  */

undefined * FUN_101c49c24(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined8 uStack_80;
  
  FUN_101c493bc();
  puVar1 = PTR_PTR_1126ae6b8;
  func_0x000107c61168(PTR_PTR_1126ae6b8);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  puVar3 = puVar1;
  func_0x000107c4a8a4(puVar1,param_2,puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar3;
  func_0x000107c5cb24(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c4a8a4(puVar1,param_2,puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  puVar3 = puVar1;
  func_0x000107c5cb24(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar4 = PTR_PTR_1126a8c88;
  func_0x000107c610f8(PTR_PTR_1126a8c88);
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_101c49eac;
  uStack_80 = 0;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1000f6b44;
  puStack_90 = &UNK_11045c1b0;
  ppuVar5 = &puStack_a8;
  func_0x000107c60bc4(ppuVar5);
  uStack_b8 = 0x101c49eb0;
  uStack_b0 = 0;
  puStack_d8 = puVar1;
  uStack_d0 = 0x42000000;
  puStack_c8 = &UNK_1000f6b44;
  puStack_c0 = &UNK_11045c1d8;
  ppuVar6 = &puStack_d8;
  func_0x000107c60bc4(ppuVar6);
  uStack_e8 = 0x101c49eb4;
  uStack_e0 = 0;
  puStack_108 = puVar1;
  uStack_100 = 0x42000000;
  puStack_f8 = &UNK_1000f6b44;
  puStack_f0 = &UNK_11045c200;
  ppuVar7 = &puStack_108;
  func_0x000107c60bc4(ppuVar7);
  uStack_118 = 0x101c49eb8;
  uStack_110 = 0;
  puStack_138 = puVar1;
  uStack_130 = 0x42000000;
  puStack_128 = &UNK_1000f6b44;
  puStack_120 = &UNK_11045c228;
  ppuVar8 = &puStack_138;
  func_0x000107c60bc4();
  func_0x000107c48e28(puVar4,param_2,param_1,puVar2,puVar3,ppuVar5,ppuVar6,ppuVar7,ppuVar8);
  func_0x000107c61170(param_1);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar3);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(uStack_110);
  func_0x000107c61574(uStack_e0);
  func_0x000107c61574(uStack_b0);
  func_0x000107c61574(uStack_80);
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c55128(puVar4,param_2,puVar1);
  func_0x000107c61170(puVar1);
  return puVar4;
}



/* Entry: 101c49eac; end: 101c49ebb;  */

void FUN_101c49eac(void)

{
  return;
}



/* Entry: 101c49ebc; end: 101c49fd3;  */

void FUN_101c49ebc(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  char cStack_41;
  
  ppuVar3 = &puStack_80;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,param_3);
  puStack_68 = (undefined *)param_1;
  pcStack_60 = (code *)param_2;
  func_0x000107c6157c(uVar4);
  func_0x000100075034(&cStack_41,FUN_101c4b8c8,&puStack_80,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar4);
  if (cStack_41 == '\x01') {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    puVar2 = &UNK_11045c378;
    func_0x000107c613fc(&UNK_11045c378,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar4;
    *(undefined8 *)(puVar2 + 0x18) = param_1;
    *(undefined8 *)(puVar2 + 0x20) = param_2;
    pcStack_60 = FUN_101c4b8e4;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11045c390;
    puStack_58 = puVar2;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c61174(uVar4);
    func_0x000107c61434(param_2);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar1);
    func_0x000107c60bd0(ppuVar3);
  }
  return;
}



/* Entry: 101c49fd4; end: 101c4a06b;  */

void FUN_101c49fd4(byte *param_1,undefined8 param_2,ulong param_3,undefined8 param_4,long param_5)

{
  byte bVar1;
  undefined1 auStack_40 [8];
  undefined8 uStack_38;
  
  bVar1 = 0;
  if ((param_3 & 1) == 0) {
    func_0x0001010af1e4(param_4);
    if (param_5 == 0) {
      bVar1 = 0;
    }
    else {
      func_0x000107c6142c(param_5);
      bVar1 = 1;
    }
  }
  else {
    func_0x000107c61434(param_5);
    func_0x000100403b00(auStack_40,param_4,param_5);
    func_0x000107c6142c(uStack_38);
  }
  *param_1 = bVar1 & 1;
  return;
}



/* Entry: 101c4a06c; end: 101c4a53b;  */

void FUN_101c4a06c(code *param_1,undefined8 param_2,byte *param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  byte *pbVar14;
  byte **ppbVar15;
  byte *pbVar16;
  uint uVar17;
  byte *pbStack_70;
  ulong uStack_68;
  
  uVar11 = (ulong)param_3 & 0xffffffffffff;
  uVar13 = param_4 >> 0x38 & 0xf;
  uVar12 = uVar11;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar12 = uVar13;
  }
  if (uVar12 == 0) goto LAB_101c4a434;
  if ((param_4 >> 0x3c & 1) == 0) {
    if ((param_4 >> 0x3d & 1) == 0) {
      if (((ulong)param_3 >> 0x3c & 1) == 0) {
        pbVar14 = param_3;
        uVar11 = param_4;
        func_0x000107c60358();
      }
      else {
        pbVar14 = (byte *)((param_4 & 0xfffffffffffffff) + 0x20);
      }
      if (*pbVar14 == 0x2b) {
        lVar8 = uVar11 - 1;
        if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c4a538);
          (*pcVar7)();
        }
        if (lVar8 == 0) goto LAB_101c4a434;
        pbVar16 = (byte *)0x0;
        do {
          pbVar14 = pbVar14 + 1;
          if (((9 < *pbVar14 - 0x30) ||
              (auVar3._8_8_ = 0, auVar3._0_8_ = pbVar16, SUB168(auVar3 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar16 * 10, uVar12 = (ulong)(byte)(*pbVar14 - 0x30),
             pbVar16 = (byte *)(uVar11 + uVar12), CARRY8(uVar11,uVar12))) goto LAB_101c4a434;
          uVar17 = 0;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else if (*pbVar14 == 0x2d) {
        lVar8 = uVar11 - 1;
        if ((long)uVar11 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c4a530);
          (*pcVar7)();
        }
        if (lVar8 == 0) goto LAB_101c4a434;
        pbVar16 = (byte *)0x0;
        do {
          pbVar14 = pbVar14 + 1;
          if (((9 < *pbVar14 - 0x30) ||
              (auVar1._8_8_ = 0, auVar1._0_8_ = pbVar16, SUB168(auVar1 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar16 * 10, uVar12 = (ulong)(byte)(*pbVar14 - 0x30),
             pbVar16 = (byte *)(uVar11 - uVar12), uVar11 < uVar12)) goto LAB_101c4a434;
          uVar17 = 0;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      else {
        if ((pbVar14 == (byte *)0x0) || (uVar11 == 0)) goto LAB_101c4a434;
        pbVar16 = (byte *)0x0;
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (auVar5._8_8_ = 0, auVar5._0_8_ = pbVar16, SUB168(auVar5 * ZEXT816(10),8) != 0)) ||
             (uVar13 = (long)pbVar16 * 10, uVar12 = (ulong)(byte)(*pbVar14 - 0x30),
             pbVar16 = (byte *)(uVar13 + uVar12), CARRY8(uVar13,uVar12))) goto LAB_101c4a434;
          uVar17 = 0;
          uVar11 = uVar11 - 1;
          pbVar14 = pbVar14 + 1;
        } while (uVar11 != 0);
      }
    }
    else {
      pbStack_70 = param_3;
      uStack_68 = param_4 & 0xffffffffffffff;
      uVar17 = (uint)param_3 & 0xff;
      if (uVar17 == 0x2b) {
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c4a53c);
          (*pcVar7)();
        }
        lVar8 = uVar13 - 1;
        if (lVar8 == 0) goto LAB_101c4a2dc;
        pbVar16 = (byte *)0x0;
        pbVar14 = (byte *)((ulong)&pbStack_70 | 1);
        do {
          if (((9 < *pbVar14 - 0x30) ||
              (auVar4._8_8_ = 0, auVar4._0_8_ = pbVar16, SUB168(auVar4 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar16 * 10, uVar12 = (ulong)(byte)(*pbVar14 - 0x30),
             pbVar16 = (byte *)(uVar11 + uVar12), CARRY8(uVar11,uVar12))) goto LAB_101c4a2dc;
          uVar17 = 0;
          lVar8 = lVar8 + -1;
          pbVar14 = pbVar14 + 1;
        } while (lVar8 != 0);
      }
      else if (uVar17 == 0x2d) {
        if (uVar13 == 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x101c4a534);
          (*pcVar7)();
        }
        lVar8 = uVar13 - 1;
        if (lVar8 == 0) {
LAB_101c4a2dc:
          pbVar16 = (byte *)0x0;
          uVar17 = 1;
        }
        else {
          pbVar16 = (byte *)0x0;
          pbVar14 = (byte *)((ulong)&pbStack_70 | 1);
          do {
            if (((9 < *pbVar14 - 0x30) ||
                (auVar2._8_8_ = 0, auVar2._0_8_ = pbVar16, SUB168(auVar2 * ZEXT816(10),8) != 0)) ||
               (uVar11 = (long)pbVar16 * 10, uVar12 = (ulong)(byte)(*pbVar14 - 0x30),
               pbVar16 = (byte *)(uVar11 - uVar12), uVar11 < uVar12)) goto LAB_101c4a2dc;
            uVar17 = 0;
            lVar8 = lVar8 + -1;
            pbVar14 = pbVar14 + 1;
          } while (lVar8 != 0);
        }
      }
      else {
        if (uVar13 == 0) goto LAB_101c4a2dc;
        pbVar16 = (byte *)0x0;
        ppbVar15 = &pbStack_70;
        do {
          if (((9 < *(byte *)ppbVar15 - 0x30) ||
              (auVar6._8_8_ = 0, auVar6._0_8_ = pbVar16, SUB168(auVar6 * ZEXT816(10),8) != 0)) ||
             (uVar11 = (long)pbVar16 * 10, uVar12 = (ulong)(byte)(*(byte *)ppbVar15 - 0x30),
             pbVar16 = (byte *)(uVar11 + uVar12), CARRY8(uVar11,uVar12))) goto LAB_101c4a2dc;
          uVar17 = 0;
          uVar13 = uVar13 - 1;
          ppbVar15 = (byte **)((long)ppbVar15 + 1);
        } while (uVar13 != 0);
      }
    }
  }
  else {
    func_0x000107c61434(param_4);
    pbVar16 = param_3;
    uVar12 = param_4;
    func_0x000100f5015c(param_3,param_4,10);
    uVar17 = (uint)uVar12;
    func_0x000107c6142c(param_4);
  }
  if (((uVar17 & 0xff) != 1) && (pbVar16 != (byte *)0x0)) {
    lVar8 = 0;
    func_0x000101c4ad14();
    func_0x000107c613fc();
    puVar9 = PTR__OBJC_CLASS___NSRecursiveLock_1126b3138;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar8 + 0x10) = puVar9;
    *(undefined1 *)(lVar8 + 0x18) = 0;
    puVar9 = &UNK_11045c328;
    func_0x000107c613fc(&UNK_11045c328,0x58,7);
    *(undefined8 *)(puVar9 + 0x10) = param_5;
    *(byte **)(puVar9 + 0x18) = pbVar16;
    *(undefined8 *)(puVar9 + 0x20) = param_6;
    *(byte **)(puVar9 + 0x28) = param_3;
    *(ulong *)(puVar9 + 0x30) = param_4;
    *(long *)(puVar9 + 0x38) = lVar8;
    *(code **)(puVar9 + 0x40) = param_1;
    *(undefined8 *)(puVar9 + 0x48) = param_2;
    *(undefined8 *)(puVar9 + 0x50) = param_7;
    func_0x000107c61434(param_4);
    func_0x000107c6157c(param_5);
    func_0x000107c6157c(param_6);
    func_0x000107c6157c(lVar8);
    func_0x000107c6157c(param_2);
    uVar10 = 0xb;
    func_0x0001001ca524(0xb,3,0x50,4,0,0,&UNK_10d9e4de8,puVar9,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar9);
    puVar9 = &UNK_11045c350;
    func_0x000107c613fc(&UNK_11045c350,0x20,7);
    *(long *)(puVar9 + 0x10) = lVar8;
    *(undefined8 *)(puVar9 + 0x18) = uVar10;
    func_0x000107c6157c(lVar8);
    func_0x000107c6157c(uVar10);
    (*param_1)(0,FUN_101c4b054,puVar9,0,0);
    func_0x000107c61574(lVar8);
    func_0x000107c61574(uVar10);
    func_0x000107c61574(puVar9);
    return;
  }
LAB_101c4a434:
  (*param_1)(1,0,0,0,0);
  (*param_1)(3,0,0,0,0);
  (*param_1)(0,FUN_101c4a53c,0,0,0);
  return;
}



/* Entry: 101c4a53c; end: 101c4a56b;  */

void FUN_101c4a53c(void)

{
  return;
}



/* Entry: 101c4a56c; end: 101c4a62b;  */

void FUN_101c4a56c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  uVar4 = 0x112e0b708;
  func_0x0001000285a8(0x112e0b708,&UNK_10d9e4df0);
  func_0x000107c61538();
  FUN_101c4b0b4();
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar4;
  piVar6 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0xb8) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101c4a62c;
                    /* WARNING: Could not recover jumptable at 0x000101c4a628. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x78),uVar4,uVar2,lVar3);
  return;
}



/* Entry: 101c4a62c; end: 101c4a693;  */

void FUN_101c4a62c(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0xb0);
  *(undefined8 *)(lVar3 + 0xc0) = param_1;
  *(long *)(lVar3 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar3 + 0xb8));
  func_0x000107c6142c(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_101c4a694;
  }
  else {
    pcVar2 = FUN_101c4a7a8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar2,0,0);
  return;
}



/* Entry: 101c4a694; end: 101c4a7a7;  */

void FUN_101c4a694(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x22 + 0xc0);
  func_0x0001000834e4(unaff_x22 + 0x10);
  if (lVar3 == 0) {
    lVar3 = 0;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0xc0);
    func_0x000107c61174(lVar2);
    lVar3 = lVar2;
    FUN_101c4b6c8();
    func_0x000107c61170(lVar2);
  }
  lVar2 = *(long *)(unaff_x22 + 0x80);
  func_0x000107c61428(lVar2 + 0x10,unaff_x22 + 0x50,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    FUN_101c49ebc(*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x90),lVar3 != 0);
    func_0x000107c61574(lVar2);
  }
  lVar2 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(lVar2 + 0x10);
  func_0x000107c4b940(uVar5);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xc0);
  if ((*(byte *)(lVar2 + 0x18) & 1) == 0) {
    pcVar1 = *(code **)(unaff_x22 + 0xa0);
    (*pcVar1)(1,0,0,lVar3,0);
    (*pcVar1)(3,0,0,0,0);
  }
  func_0x000107c5d278(uVar5);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar4);
                    /* WARNING: Could not recover jumptable at 0x000101c4a7a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c4a7a8; end: 101c4a8af;  */

void FUN_101c4a7a8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  lVar6 = *(long *)(unaff_x22 + 0x98);
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(lVar6 + 0x10);
  func_0x000107c4b940(uVar5);
  if ((*(byte *)(lVar6 + 0x18) & 1) == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
    pcVar1 = *(code **)(unaff_x22 + 0xa0);
    func_0x000107c614cc(uVar7,unaff_x22 + 0x68,unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    func_0x000107c60640(uVar2,uVar4);
    puVar3 = PTR_PTR_1126df708;
    func_0x000107c610f8(PTR_PTR_1126df708);
    func_0x000107c5fadc(uVar2,uVar4);
    func_0x000107c6142c(uVar4);
    func_0x000107c47794(puVar3);
    func_0x000107c61170(uVar2);
    (*pcVar1)(2,0,0,0,puVar3);
    func_0x000107c61170(puVar3);
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 200);
  }
  func_0x000107c5d278(uVar5);
  func_0x000107c614ac(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000101c4a8ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c4a8b0; end: 101c4a91b;  */

void FUN_101c4a8b0(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c4a91c; end: 101c4a93b;  */

void FUN_101c4a91c(void)

{
  FUN_101c4907c();
  return;
}



/* Entry: 101c4a93c; end: 101c4a9a3;  */

undefined1 FUN_101c4a93c(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 uStack_31;
  
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x30);
  uStack_50 = param_1;
  uStack_48 = param_2;
  func_0x000107c6157c(uVar1);
  func_0x000100075034(&uStack_31,FUN_101c4af3c,auStack_60,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  return uStack_31;
}



/* Entry: 101c4a9a4; end: 101c4a9af;  */

void FUN_101c4a9a4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(*unaff_x20 + 0x38));
  return;
}



/* Entry: 101c4a9b0; end: 101c4a9df;  */

void FUN_101c4a9b0(void)

{
  FUN_101c49ba4(0);
  FUN_101c4be68();
  return;
}



/* Entry: 101c4a9e0; end: 101c4aa27;  */

void FUN_101c4a9e0(undefined8 param_1,undefined8 param_2)

{
  FUN_101c49ba4(0);
  func_0x000101c4c24c(param_1,param_2);
  return;
}



/* Entry: 101c4aa28; end: 101c4aa77;  */

void FUN_101c4aa28(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c4aa78; end: 101c4acc3;  */

void FUN_101c4aa78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  code *pcVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  undefined *puStack_68;
  
  func_0x0001000285a8(0x112e0b740,&UNK_10d9e4e28);
  func_0x000107c6157c(param_6);
  pcVar1 = FUN_101c4ba6c;
  func_0x0001000823a8(FUN_101c4ba6c,param_6);
  pcVar2 = pcVar1;
  FUN_101c4acd4();
  pcVar3 = pcVar2;
  func_0x000107c613fc();
  lVar4 = 0;
  func_0x000101c4acf4();
  func_0x000107c613fc();
  puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x10) = puVar5;
  *(undefined8 *)(lVar4 + 0x18) = 0;
  *(long *)(pcVar3 + 0x28) = lVar4;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
  func_0x000107c613fc();
  ppuVar6 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(pcVar3 + 0x30) = ppuVar6;
  puVar5 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(pcVar3 + 0x38) = puVar5;
  puVar5 = &UNK_10d9e4ca0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(pcVar3 + 0x40) = puVar5;
  *(undefined8 *)(pcVar3 + 0x10) = param_2;
  func_0x000101c4c5f4(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,2);
  func_0x000107c6157c(pcVar1);
  func_0x000107c6157c(param_3);
  uVar7 = param_2;
  func_0x000101c4c3ac(param_2,param_3,pcVar1);
  *(undefined8 *)(pcVar3 + 0x18) = uVar7;
  lVar4 = 0;
  func_0x000101c511a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x30) = 1;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d8468();
  *(undefined **)(lVar4 + 0x38) = puVar8;
  puVar8 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x40) = puVar8;
  func_0x000101c4bb68();
  *(undefined **)(lVar4 + 0x48) = puVar5;
  *(undefined **)(lVar4 + 0x50) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined1 *)(lVar4 + 0x58) = 0;
  puVar5 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar4 + 0x60) = puVar5;
  pcVar9 = "SoundShareSaveCoordinator";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar4 + 0x68) = pcVar9;
  *(undefined8 *)(lVar4 + 0x10) = param_4;
  *(undefined8 *)(lVar4 + 0x18) = param_5;
  *(undefined8 *)(lVar4 + 0x20) = param_2;
  *(code **)(lVar4 + 0x28) = pcVar1;
  *(long *)(pcVar3 + 0x20) = lVar4;
  param_1[3] = pcVar2;
  param_1[4] = &PTR_DAT_11045c170;
  *param_1 = pcVar3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  return;
}



/* Entry: 101c4acc4; end: 101c4acd3;  */

void FUN_101c4acc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  code *pcVar6;
  code *pcVar7;
  long lVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  long unaff_x20;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112e0b740,&UNK_10d9e4e28);
  func_0x000107c6157c(uVar13);
  pcVar5 = FUN_101c4ba6c;
  func_0x0001000823a8(FUN_101c4ba6c,uVar13);
  pcVar6 = pcVar5;
  FUN_101c4acd4();
  pcVar7 = pcVar6;
  func_0x000107c613fc();
  lVar8 = 0;
  func_0x000101c4acf4();
  func_0x000107c613fc();
  puVar9 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x10) = puVar9;
  *(undefined8 *)(lVar8 + 0x18) = 0;
  *(long *)(pcVar7 + 0x28) = lVar8;
  puStack_68 = PTR___swiftEmptySetSingleton_11034f1d8;
  func_0x0001000285a8(0x112d70da8,&UNK_10d9e4e30);
  func_0x000107c613fc();
  ppuVar10 = &puStack_68;
  func_0x00010006c248();
  *(undefined ***)(pcVar7 + 0x30) = ppuVar10;
  puVar9 = PTR_PTR_1126ae568;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(pcVar7 + 0x38) = puVar9;
  puVar9 = &UNK_10d9e4ca0;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(pcVar7 + 0x40) = puVar9;
  *(undefined8 *)(pcVar7 + 0x10) = uVar1;
  func_0x000101c4c5f4(0);
  func_0x000107c613fc();
  func_0x000107c61580(uVar1,2);
  func_0x000107c6157c(pcVar5);
  func_0x000107c6157c(uVar3);
  uVar13 = uVar1;
  func_0x000101c4c3ac(uVar1,uVar3,pcVar5);
  *(undefined8 *)(pcVar7 + 0x18) = uVar13;
  lVar8 = 0;
  func_0x000101c511a8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar8 + 0x30) = 1;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001003d8468();
  *(undefined **)(lVar8 + 0x38) = puVar11;
  puVar11 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x40) = puVar11;
  func_0x000101c4bb68();
  *(undefined **)(lVar8 + 0x48) = puVar9;
  *(undefined **)(lVar8 + 0x50) = PTR___swiftEmptySetSingleton_11034f1d8;
  *(undefined1 *)(lVar8 + 0x58) = 0;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + 0x60) = puVar9;
  pcVar12 = "SoundShareSaveCoordinator";
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(char **)(lVar8 + 0x68) = pcVar12;
  *(undefined8 *)(lVar8 + 0x10) = uVar2;
  *(undefined8 *)(lVar8 + 0x18) = uVar4;
  *(undefined8 *)(lVar8 + 0x20) = uVar1;
  *(code **)(lVar8 + 0x28) = pcVar5;
  *(long *)(pcVar7 + 0x20) = lVar8;
  param_1[3] = pcVar6;
  param_1[4] = &PTR_DAT_11045c170;
  *param_1 = pcVar7;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar4);
  return;
}



/* Entry: 101c4acd4; end: 101c4ad33;  */

void FUN_101c4acd4(void)

{
  func_0x000107c61168(&PTR_PTR_112e0b4f0);
  return;
}



/* Entry: 101c4ad34; end: 101c4ad57;  */

undefined1  [16] FUN_101c4ad34(void)

{
  return ZEXT816(0x11045c140);
}



/* Entry: 101c4ad58; end: 101c4ae3f;  */

void FUN_101c4ad58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4d1f8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101c4ae40; end: 101c4af0b;  */

void FUN_101c4ae40(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  ppuVar2 = &puStack_80;
  if (param_2 == 0) {
    ppuVar2 = (undefined **)0x0;
  }
  else {
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11045c2f0;
    lStack_60 = param_2;
    uStack_58 = param_3;
    func_0x000107c60bc4(&puStack_80);
    uVar1 = uStack_58;
    func_0x000107c6157c(param_3);
    func_0x000107c61574(uVar1);
  }
  (**(code **)(param_6 + 0x10))(param_6,param_1,ppuVar2,param_4,param_5);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 101c4af0c; end: 101c4af3b;  */

bool FUN_101c4af0c(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101c4af3c; end: 101c4af77;  */

void FUN_101c4af3c(byte *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000f66f0(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*param_2);
  *param_1 = (byte)uVar1 & 1;
  return;
}



/* Entry: 101c4af78; end: 101c4afab;  */

void FUN_101c4af78(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar1);
  return;
}



/* Entry: 101c4afac; end: 101c4b053;  */

void FUN_101c4afac(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar6 = *(long *)(unaff_x20 + 0x28);
  lVar3 = *(long *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  plVar9 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = 0x101c4bd18;
  plVar9[0x14] = lVar4;
  plVar9[0x15] = lVar8;
  plVar9[0x12] = lVar3;
  plVar9[0x13] = lVar7;
  plVar9[0x10] = lVar2;
  plVar9[0x11] = lVar6;
  plVar9[0xe] = lVar1;
  plVar9[0xf] = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c4a56c,0,0);
  return;
}



/* Entry: 101c4b054; end: 101c4b0b3;  */

void FUN_101c4b054(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c4b940(uVar3);
  *(undefined1 *)(lVar1 + 0x18) = 1;
  func_0x000107c5d278(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sScT6cancelyyF_11034fdc8)
            (uVar2,PTR___sytN_11034f1b0 + 8,PTR___ss5NeverON_11034ee88,
             PTR___ss5NeverOs5ErrorsWP_11034ee90);
  return;
}



/* Entry: 101c4b0b4; end: 101c4b1eb;  */

undefined * FUN_101c4b0b4(long param_1)

{
  byte bVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined1 auStack_a8 [72];
  
  puVar9 = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_11034f1d8;
  if (puVar9 != (undefined *)0x0) {
    func_0x0001000285a8(0x112dc3298,&UNK_10d9e4e00);
    puVar3 = puVar9;
    func_0x000107c602e8();
    puVar11 = (undefined *)0x0;
    do {
      bVar1 = puVar11[param_1 + 0x20];
      uVar10 = (ulong)bVar1;
      func_0x000107c6068c(auStack_a8,*(undefined8 *)(puVar3 + 0x28));
      func_0x000107c60690();
      func_0x000107c606a8();
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar10 = uVar10 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar10 >> 6;
      uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar10 & 0x3f);
      lVar4 = *(long *)(puVar3 + 0x30);
      if ((uVar7 & uVar6) != 0) {
        do {
          if (*(byte *)(lVar4 + uVar10) == bVar1) goto LAB_101c4b138;
          uVar10 = uVar10 + 1 & ~uVar8;
          uVar5 = uVar10 >> 6;
          uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar10 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar3 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(byte *)(lVar4 + uVar10) = bVar1;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x101c4b1ec);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_101c4b138:
      puVar11 = puVar11 + 1;
    } while (puVar11 != puVar9);
  }
  return puVar3;
}



/* Entry: 101c4b1ec; end: 101c4b56f;  */

undefined1  [16] FUN_101c4b1ec(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar1 = param_1;
  func_0x000107c5c384();
  func_0x000107c61180();
  uVar11 = param_2;
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000107c42164();
    func_0x000107c61180();
    func_0x000107c61170(uVar1);
    uVar11 = param_2;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar2 != 0) {
      uVar3 = uVar2;
      func_0x000107c5faec();
      uVar11 = param_2;
      func_0x000107c61170(uVar2);
      uVar1 = uVar3 & 0xffffffffffff;
      if ((param_2 & 0x2000000000000000) != 0) {
        uVar1 = param_2 >> 0x38 & 0xf;
      }
      if (uVar1 == 0) {
        func_0x000107c6142c(param_2);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar4 = (undefined *)0x0;
        uVar11 = 1;
        func_0x0001000d182c(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar2 = *(ulong *)(puVar4 + 0x10);
        uVar1 = uVar2 + 1;
        puVar10 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar2) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          uVar11 = uVar1;
          func_0x0001000d182c(puVar10,uVar1,1,puVar4);
        }
        *(ulong *)(puVar10 + 0x10) = uVar1;
        *(ulong *)(puVar10 + uVar2 * 0x10 + 0x20) = uVar3;
        *(ulong *)(puVar10 + uVar2 * 0x10 + 0x28) = param_2;
      }
    }
  }
  uVar2 = param_1;
  func_0x000107c5c384();
  func_0x000107c61180();
  uVar1 = uVar11;
  if (uVar2 != 0) {
    uVar3 = uVar2;
    func_0x000107c42390();
    func_0x000107c61180();
    func_0x000107c61170(uVar2);
    uVar1 = uVar11;
    if (uVar3 != 0) {
      uVar5 = uVar3;
      func_0x000107c5faec();
      uVar1 = uVar11;
      func_0x000107c61170(uVar3);
      uVar2 = uVar5 & 0xffffffffffff;
      if ((uVar11 & 0x2000000000000000) != 0) {
        uVar2 = uVar11 >> 0x38 & 0xf;
      }
      if (uVar2 == 0) {
        func_0x000107c6142c(uVar11);
      }
      else {
        puVar4 = puVar10;
        func_0x000107c61558();
        puVar9 = puVar10;
        if (((ulong)puVar4 & 1) == 0) {
          uVar1 = *(long *)(puVar10 + 0x10) + 1;
          puVar9 = (undefined *)0x0;
          func_0x0001000d182c(0,uVar1,1,puVar10);
        }
        uVar3 = *(ulong *)(puVar9 + 0x10);
        uVar2 = uVar3 + 1;
        puVar10 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar3) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          uVar1 = uVar2;
          func_0x0001000d182c(puVar10,uVar2,1,puVar9);
        }
        *(ulong *)(puVar10 + 0x10) = uVar2;
        *(ulong *)(puVar10 + uVar3 * 0x10 + 0x20) = uVar5;
        *(ulong *)(puVar10 + uVar3 * 0x10 + 0x28) = uVar11;
      }
    }
  }
  func_0x000107c5c384();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar11 = param_1;
    func_0x000107c5b624();
    func_0x000107c61180();
    func_0x000107c61170(param_1);
    if (uVar11 != 0) {
      uVar3 = uVar11;
      func_0x000107c5faec();
      uVar5 = uVar1;
      func_0x000107c61170();
      uVar2 = uVar3 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar2 = uVar1 >> 0x38 & 0xf;
      }
      if (uVar2 != 0) {
        func_0x000107e48328();
        func_0x000107c61180();
        if (uVar11 != 0) {
          uVar2 = uVar11;
          func_0x000107c5faec();
          func_0x000107c61170(uVar11);
          func_0x000107c5fb78(0x20,0xe100000000000000);
          func_0x000107c5fb78(uVar2,uVar5);
          func_0x000107c6142c(uVar5);
          puVar4 = puVar10;
          func_0x000107c61558();
          puVar9 = puVar10;
          if (((ulong)puVar4 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            func_0x0001000d182c(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
          }
          uVar11 = *(ulong *)(puVar9 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar11) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
            func_0x0001000d182c(puVar10,uVar11 + 1,1,puVar9);
          }
          *(ulong *)(puVar10 + 0x10) = uVar11 + 1;
          *(ulong *)(puVar10 + uVar11 * 0x10 + 0x20) = uVar3;
          *(ulong *)(puVar10 + uVar11 * 0x10 + 0x28) = uVar1;
          goto LAB_101c4b43c;
        }
      }
      func_0x000107c6142c(uVar1);
      lVar13 = *(long *)(puVar10 + 0x10);
      goto joined_r0x000101c4b49c;
    }
  }
LAB_101c4b43c:
  lVar13 = *(long *)(puVar10 + 0x10);
joined_r0x000101c4b49c:
  if (lVar13 == 0) {
    func_0x000107c6142c(puVar10);
    uVar8 = 0;
    uVar12 = 0;
  }
  else {
    uVar6 = 0x112d38270;
    func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
    uVar7 = uVar6;
    func_0x00010011d734();
    uVar8 = 0x20b7c220;
    uVar12 = 0xa400000000000000;
    func_0x000107c5fa80(0x20b7c220,0xa400000000000000,uVar6,uVar7);
    func_0x000107c6142c(puVar10);
  }
  auVar14._8_8_ = uVar12;
  auVar14._0_8_ = uVar8;
  return auVar14;
}



/* Entry: 101c4b570; end: 101c4b6c7;  */

void FUN_101c4b570(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined *puVar5;
  long extraout_x8;
  ulong uVar6;
  long lVar7;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar1 = 0;
  func_0x000107c5eb9c();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  uVar6 = (long)&lStack_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  func_0x000107c4fd3c();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c61170();
    func_0x000107c5c384();
    func_0x000107c61180();
    if (param_1 != 0) {
      lVar2 = param_1;
      func_0x000107c3d97c();
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      if (lVar2 != 0) {
        lVar3 = lVar2;
        func_0x000107c5faec();
        func_0x000107c61170(lVar2);
        lStack_60 = lVar3;
        uStack_58 = param_2;
        func_0x000107c5eb88(uVar6);
        func_0x000100e8b654();
        uVar4 = uVar6;
        puVar5 = PTR___sSSN_11034da80;
        func_0x000107c601f0(uVar6,PTR___sSSN_11034da80,lVar2);
        (**(code **)(lVar7 + 8))(uVar6,lVar1);
        func_0x000107c6142c(puVar5);
        uVar6 = uVar4 & 0xffffffffffff;
        if (((ulong)puVar5 & 0x2000000000000000) != 0) {
          uVar6 = (ulong)puVar5 >> 0x38 & 0xf;
        }
        if (uVar6 == 0) {
          func_0x000107c6142c(param_2);
        }
      }
    }
  }
  return;
}



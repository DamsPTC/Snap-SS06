/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d5f718; end: 103d5f747;  */

undefined1  [16] FUN_103d5f718(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103d5f748; end: 103d5f77b;  */

void FUN_103d5f748(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103d5f77c; end: 103d5f78f;  */

undefined1  [16] FUN_103d5f77c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103d5f78c;
  return auVar1;
}



/* Entry: 103d5f790; end: 103d5f7b7;  */

void FUN_103d5f790(void)

{
  FUN_103d5f538();
  return;
}



/* Entry: 103d5f7b8; end: 103d5f7bb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d5f7b8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d5f7bc; end: 103d5f7f3;  */

uint FUN_103d5f7bc(long param_1,long param_2)

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
  func_0x000103d633e4();
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



/* Entry: 103d5f7f4; end: 103d5f88f;  */

/* WARNING: Possible PIC construction at 0x000103d5f834: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d5f838) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5f7f4(undefined8 *param_1)

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
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar25;
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
  
  lVar22 = param_1[3];
  uVar25 = param_1[4];
  uVar18 = unaff_x20[2];
  pbVar9 = (byte *)unaff_x20[3];
  pbVar23 = (byte *)unaff_x20[4];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  FUN_103c85cd8(uVar18,param_1[2]);
  if ((uVar18 & 1) == 0) {
    return (byte *)0x0;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d5f890; end: 103d5f92f;  */

/* WARNING: Possible PIC construction at 0x000103d5f8dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5f8ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5f8e0) */
/* WARNING: Removing unreachable block (ram,0x000103d5f8f0) */

void FUN_103d5f890(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006840 != -1) {
    func_0x000107c61568(0x113006840,0x103d5f4f0);
  }
  uVar5 = uRam0000000113811038;
  uVar4 = uRam0000000113811030;
  uVar3 = uRam0000000113811028;
  uVar2 = uRam0000000113811020;
  uVar1 = uRam0000000113811018;
  *param_1 = uRam0000000113811010;
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



/* Entry: 103d5f930; end: 103d5f96b;  */

void FUN_103d5f930(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130069a0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130069a0,&UNK_10dc89df8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5f96c; end: 103d5fa77;  */

void FUN_103d5f96c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d5fa78; end: 103d5fb0f;  */

/* WARNING: Possible PIC construction at 0x000103d5fabc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d5fac0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5fa78(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 unaff_x21;
  byte *pbVar23;
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
  
  uVar18 = param_1[2];
  pbVar9 = (byte *)param_1[3];
  pbVar23 = (byte *)param_1[4];
  lVar22 = param_2[3];
  uVar24 = param_2[4];
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar14 = (byte *)*param_2;
  pbVar15 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  FUN_103c85cd8(uVar18,param_2[2]);
  if ((uVar18 & 1) == 0) {
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



/* Entry: 103d5fb10; end: 103d5fb57;  */

void FUN_103d5fb10(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89e48,0xb,2);
  uRam0000000113811048 = uStack_38;
  uRam0000000113811040 = uStack_40;
  uRam0000000113811058 = uStack_28;
  uRam0000000113811050 = uStack_30;
  uRam0000000113811068 = uStack_18;
  uRam0000000113811060 = uStack_20;
  return;
}



/* Entry: 103d5fb58; end: 103d5fb8f;  */

undefined1  [16] FUN_103d5fb58(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6920;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 103d5fb90; end: 103d5fbe7;  */

void FUN_103d5fb90(void)

{
  FUN_103d6034c();
  return;
}



/* Entry: 103d5fbe8; end: 103d5fc1f;  */

uint FUN_103d5fbe8(long param_1,long param_2)

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
  func_0x000103d633a4();
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



/* Entry: 103d5fc20; end: 103d5fc33;  */

uint FUN_103d5fc20(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 != *(long *)(lVar1 + 0x10)) {
    return 0;
  }
  if (lVar9 == 0 || lVar2 == lVar1) {
LAB_103d613a0:
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar5 = (uint)lVar6;
LAB_103d617dc:
    return uVar5 & 1;
  }
  puVar11 = (ulong *)(lVar2 + 0x58);
  puVar10 = (ulong *)(lVar1 + 0x58);
  do {
    lVar9 = lVar9 + -1;
    uStack_118 = puVar11[2];
    uStack_120 = puVar11[1];
    uStack_108 = puVar11[4];
    uStack_110 = puVar11[3];
    uStack_f8 = puVar11[6];
    uStack_100 = puVar11[5];
    uStack_f0 = puVar11[7];
    uStack_158 = puVar11[-6];
    uStack_160 = puVar11[-7];
    uStack_148 = puVar11[-4];
    uStack_150 = puVar11[-5];
    uStack_138 = puVar11[-2];
    uStack_140 = puVar11[-3];
    uStack_128 = *puVar11;
    uStack_130 = puVar11[-1];
    uStack_d8 = puVar10[-6];
    uStack_e0 = puVar10[-7];
    uStack_c8 = puVar10[-4];
    uStack_d0 = puVar10[-5];
    uStack_b8 = puVar10[-2];
    uStack_c0 = puVar10[-3];
    uStack_a8 = *puVar10;
    uStack_b0 = puVar10[-1];
    uStack_98 = puVar10[2];
    uStack_a0 = puVar10[1];
    uStack_88 = puVar10[4];
    uStack_90 = puVar10[3];
    uStack_78 = puVar10[6];
    uStack_80 = puVar10[5];
    uStack_70 = puVar10[7];
    uStack_258 = puVar11[1];
    uVar12 = *puVar11;
    uStack_248 = puVar11[3];
    uVar17 = puVar11[2];
    uVar15 = puVar11[5];
    uVar13 = puVar11[4];
    uVar21 = puVar11[7];
    uVar18 = puVar11[6];
    uStack_218 = puVar10[1];
    uStack_220 = *puVar10;
    uStack_208 = puVar10[3];
    uStack_210 = puVar10[2];
    uStack_1f8 = puVar10[5];
    uStack_200 = puVar10[4];
    uStack_1e8 = puVar10[7];
    uStack_1f0 = puVar10[6];
    uStack_1e0 = uVar12;
    uStack_1d8 = uStack_258;
    uStack_1d0 = uVar17;
    uStack_1c8 = uStack_248;
    uStack_1c0 = uVar13;
    uStack_1b8 = uVar15;
    uStack_1b0 = uVar18;
    uStack_1a8 = uVar21;
    uStack_1a0 = uStack_220;
    uStack_198 = uStack_218;
    uStack_190 = uStack_210;
    uStack_188 = uStack_208;
    uStack_180 = uStack_200;
    uStack_178 = uStack_1f8;
    uStack_170 = uStack_1f0;
    uStack_168 = uStack_1e8;
    if (uStack_258 != 0) {
      if (uStack_218 != 0) {
        uStack_298 = puVar10[1];
        uStack_2a0 = *puVar10;
        uStack_288 = puVar10[3];
        uVar19 = puVar10[2];
        uVar16 = puVar10[5];
        uVar14 = puVar10[4];
        uVar22 = puVar10[7];
        uVar20 = puVar10[6];
        cVar4 = (char)uStack_288;
        uStack_290 = uVar19;
        uStack_280 = uVar14;
        uStack_278 = uVar16;
        uStack_270 = uVar20;
        uStack_268 = uVar22;
        if (((uVar12 == uStack_2a0) && (uStack_298 == uStack_258)) ||
           (func_0x000107c605b8(), (uVar12 & 1) != 0)) {
          if (cVar4 == '\x01') {
            if ((long)uVar19 < 2) {
              if (uVar19 == 0) {
                if (uVar17 == 0) {
LAB_103d6154c:
                  if (((uVar13 == uVar14) && (uVar15 == uVar16)) ||
                     (func_0x000107c605b8(uVar13,uVar15,uVar14,uVar16,0), (uVar13 & 1) != 0)) {
                    func_0x000103d63544(&uStack_160,&uStack_260);
                    func_0x000103d63544(&uStack_e0,&uStack_260);
                    FUN_103d60c04(&uStack_128,&uStack_260);
                    FUN_103d60c04(&uStack_a8,&uStack_260);
                    func_0x000100e25fcc(uVar18,uVar21,uVar20,uVar22);
                    func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
                    func_0x000103d60c54(&uStack_1e0,0x112ffecc0,&UNK_10dc6e370);
                    if ((uVar18 & 1) != 0) goto LAB_103d61600;
                    goto LAB_103d6176c;
                  }
                }
              }
              else if (uVar17 == 1) goto LAB_103d6154c;
            }
            else if (uVar19 == 2) {
              if (uVar17 == 2) goto LAB_103d6154c;
            }
            else if (uVar17 == 3) goto LAB_103d6154c;
          }
          else if (uVar17 == uVar19) goto LAB_103d6154c;
        }
        func_0x000103d63544(&uStack_160,&uStack_260);
        func_0x000103d63544(&uStack_e0,&uStack_260);
        FUN_103d60c04(&uStack_128,&uStack_260);
        FUN_103d60c04(&uStack_a8,&uStack_260);
        func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
        func_0x000103d60c54(&uStack_1e0,0x112ffecc0,&UNK_10dc6e370);
        goto LAB_103d6176c;
      }
LAB_103d61780:
      uStack_260 = uVar12;
      uStack_250 = uVar17;
      uStack_240 = uVar13;
      uStack_238 = uVar15;
      uStack_230 = uVar18;
      uStack_228 = uVar21;
      FUN_103d60c04(&uStack_128,&uStack_2a0);
      FUN_103d60c04(&uStack_a8,&uStack_2a0);
      func_0x000103d60c54(&uStack_260,0x112ffecc8,&UNK_10dc89440);
LAB_103d617d8:
      uVar5 = 0;
      goto LAB_103d617dc;
    }
    if (uStack_218 != 0) goto LAB_103d61780;
    uStack_298 = puVar11[1];
    uStack_2a0 = *puVar11;
    uStack_288 = puVar11[3];
    uStack_290 = puVar11[2];
    uStack_278 = puVar11[5];
    uStack_280 = puVar11[4];
    uStack_268 = puVar11[7];
    uStack_270 = puVar11[6];
    func_0x000103d63544(&uStack_160,&uStack_260);
    func_0x000103d63544(&uStack_e0,&uStack_260);
    FUN_103d60c04(&uStack_128,&uStack_260);
    FUN_103d60c04(&uStack_a8,&uStack_260);
    func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
LAB_103d61600:
    if (((uStack_160 != uStack_e0) || (uStack_158 != uStack_d8)) &&
       (uVar12 = uStack_160, func_0x000107c605b8(), (uVar12 & 1) == 0)) {
LAB_103d6176c:
      func_0x000103d63578(&uStack_e0);
      func_0x000103d63578(&uStack_160);
      goto LAB_103d617d8;
    }
    if ((char)uStack_150 != (char)uStack_d0) goto LAB_103d6176c;
    if ((char)uStack_c0 != '\x01') {
      if (uStack_148 == uStack_c8) goto LAB_103d61674;
      goto LAB_103d6176c;
    }
    if ((long)uStack_c8 < 2) {
      if (uStack_c8 == 0) {
        if (uStack_148 != 0) goto LAB_103d6176c;
      }
      else if (uStack_148 != 1) goto LAB_103d6176c;
    }
    else if (uStack_c8 == 2) {
      if (uStack_148 != 2) goto LAB_103d6176c;
    }
    else if (uStack_c8 == 3) {
      if (uStack_148 != 3) goto LAB_103d6176c;
    }
    else if (uStack_148 != 4) goto LAB_103d6176c;
LAB_103d61674:
    uVar12 = uStack_138;
    func_0x000100e25fcc(uStack_138,uStack_130,uStack_b8,uStack_b0);
    func_0x000103d63578(&uStack_e0);
    func_0x000103d63578(&uStack_160);
    if ((uVar12 & 1) == 0) goto LAB_103d617d8;
    if (lVar9 == 0) goto LAB_103d613a0;
    puVar11 = puVar11 + 0xf;
    puVar10 = puVar10 + 0xf;
  } while( true );
}



/* Entry: 103d5fc34; end: 103d5fcd3;  */

/* WARNING: Possible PIC construction at 0x000103d5fc80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5fc90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5fc84) */
/* WARNING: Removing unreachable block (ram,0x000103d5fc94) */

void FUN_103d5fc34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006850 != -1) {
    func_0x000107c61568(0x113006850,FUN_103d5fb10);
  }
  uVar5 = uRam0000000113811068;
  uVar4 = uRam0000000113811060;
  uVar3 = uRam0000000113811058;
  uVar2 = uRam0000000113811050;
  uVar1 = uRam0000000113811048;
  *param_1 = uRam0000000113811040;
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



/* Entry: 103d5fcd4; end: 103d5fce7;  */

void FUN_103d5fcd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006990;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006990,&UNK_10dc89df0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5fce8; end: 103d5fd1f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d5fce8(undefined8 *param_1,undefined8 param_2)

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
  FUN_103d61fd8();
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



/* Entry: 103d5fd20; end: 103d5fd3b;  */

uint FUN_103d5fd20(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  ulong *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 != *(long *)(lVar2 + 0x10)) {
    return 0;
  }
  if (lVar9 == 0 || lVar1 == lVar2) {
LAB_103d613a0:
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar5 = (uint)lVar6;
LAB_103d617dc:
    return uVar5 & 1;
  }
  puVar11 = (ulong *)(lVar1 + 0x58);
  puVar10 = (ulong *)(lVar2 + 0x58);
  do {
    lVar9 = lVar9 + -1;
    uStack_118 = puVar11[2];
    uStack_120 = puVar11[1];
    uStack_108 = puVar11[4];
    uStack_110 = puVar11[3];
    uStack_f8 = puVar11[6];
    uStack_100 = puVar11[5];
    uStack_f0 = puVar11[7];
    uStack_158 = puVar11[-6];
    uStack_160 = puVar11[-7];
    uStack_148 = puVar11[-4];
    uStack_150 = puVar11[-5];
    uStack_138 = puVar11[-2];
    uStack_140 = puVar11[-3];
    uStack_128 = *puVar11;
    uStack_130 = puVar11[-1];
    uStack_d8 = puVar10[-6];
    uStack_e0 = puVar10[-7];
    uStack_c8 = puVar10[-4];
    uStack_d0 = puVar10[-5];
    uStack_b8 = puVar10[-2];
    uStack_c0 = puVar10[-3];
    uStack_a8 = *puVar10;
    uStack_b0 = puVar10[-1];
    uStack_98 = puVar10[2];
    uStack_a0 = puVar10[1];
    uStack_88 = puVar10[4];
    uStack_90 = puVar10[3];
    uStack_78 = puVar10[6];
    uStack_80 = puVar10[5];
    uStack_70 = puVar10[7];
    uStack_258 = puVar11[1];
    uVar12 = *puVar11;
    uStack_248 = puVar11[3];
    uVar17 = puVar11[2];
    uVar15 = puVar11[5];
    uVar13 = puVar11[4];
    uVar21 = puVar11[7];
    uVar18 = puVar11[6];
    uStack_218 = puVar10[1];
    uStack_220 = *puVar10;
    uStack_208 = puVar10[3];
    uStack_210 = puVar10[2];
    uStack_1f8 = puVar10[5];
    uStack_200 = puVar10[4];
    uStack_1e8 = puVar10[7];
    uStack_1f0 = puVar10[6];
    uStack_1e0 = uVar12;
    uStack_1d8 = uStack_258;
    uStack_1d0 = uVar17;
    uStack_1c8 = uStack_248;
    uStack_1c0 = uVar13;
    uStack_1b8 = uVar15;
    uStack_1b0 = uVar18;
    uStack_1a8 = uVar21;
    uStack_1a0 = uStack_220;
    uStack_198 = uStack_218;
    uStack_190 = uStack_210;
    uStack_188 = uStack_208;
    uStack_180 = uStack_200;
    uStack_178 = uStack_1f8;
    uStack_170 = uStack_1f0;
    uStack_168 = uStack_1e8;
    if (uStack_258 != 0) {
      if (uStack_218 != 0) {
        uStack_298 = puVar10[1];
        uStack_2a0 = *puVar10;
        uStack_288 = puVar10[3];
        uVar19 = puVar10[2];
        uVar16 = puVar10[5];
        uVar14 = puVar10[4];
        uVar22 = puVar10[7];
        uVar20 = puVar10[6];
        cVar4 = (char)uStack_288;
        uStack_290 = uVar19;
        uStack_280 = uVar14;
        uStack_278 = uVar16;
        uStack_270 = uVar20;
        uStack_268 = uVar22;
        if (((uVar12 == uStack_2a0) && (uStack_298 == uStack_258)) ||
           (func_0x000107c605b8(), (uVar12 & 1) != 0)) {
          if (cVar4 == '\x01') {
            if ((long)uVar19 < 2) {
              if (uVar19 == 0) {
                if (uVar17 == 0) {
LAB_103d6154c:
                  if (((uVar13 == uVar14) && (uVar15 == uVar16)) ||
                     (func_0x000107c605b8(uVar13,uVar15,uVar14,uVar16,0), (uVar13 & 1) != 0)) {
                    func_0x000103d63544(&uStack_160,&uStack_260);
                    func_0x000103d63544(&uStack_e0,&uStack_260);
                    FUN_103d60c04(&uStack_128,&uStack_260);
                    FUN_103d60c04(&uStack_a8,&uStack_260);
                    func_0x000100e25fcc(uVar18,uVar21,uVar20,uVar22);
                    func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
                    func_0x000103d60c54(&uStack_1e0,0x112ffecc0,&UNK_10dc6e370);
                    if ((uVar18 & 1) != 0) goto LAB_103d61600;
                    goto LAB_103d6176c;
                  }
                }
              }
              else if (uVar17 == 1) goto LAB_103d6154c;
            }
            else if (uVar19 == 2) {
              if (uVar17 == 2) goto LAB_103d6154c;
            }
            else if (uVar17 == 3) goto LAB_103d6154c;
          }
          else if (uVar17 == uVar19) goto LAB_103d6154c;
        }
        func_0x000103d63544(&uStack_160,&uStack_260);
        func_0x000103d63544(&uStack_e0,&uStack_260);
        FUN_103d60c04(&uStack_128,&uStack_260);
        FUN_103d60c04(&uStack_a8,&uStack_260);
        func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
        func_0x000103d60c54(&uStack_1e0,0x112ffecc0,&UNK_10dc6e370);
        goto LAB_103d6176c;
      }
LAB_103d61780:
      uStack_260 = uVar12;
      uStack_250 = uVar17;
      uStack_240 = uVar13;
      uStack_238 = uVar15;
      uStack_230 = uVar18;
      uStack_228 = uVar21;
      FUN_103d60c04(&uStack_128,&uStack_2a0);
      FUN_103d60c04(&uStack_a8,&uStack_2a0);
      func_0x000103d60c54(&uStack_260,0x112ffecc8,&UNK_10dc89440);
LAB_103d617d8:
      uVar5 = 0;
      goto LAB_103d617dc;
    }
    if (uStack_218 != 0) goto LAB_103d61780;
    uStack_298 = puVar11[1];
    uStack_2a0 = *puVar11;
    uStack_288 = puVar11[3];
    uStack_290 = puVar11[2];
    uStack_278 = puVar11[5];
    uStack_280 = puVar11[4];
    uStack_268 = puVar11[7];
    uStack_270 = puVar11[6];
    func_0x000103d63544(&uStack_160,&uStack_260);
    func_0x000103d63544(&uStack_e0,&uStack_260);
    FUN_103d60c04(&uStack_128,&uStack_260);
    FUN_103d60c04(&uStack_a8,&uStack_260);
    func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
LAB_103d61600:
    if (((uStack_160 != uStack_e0) || (uStack_158 != uStack_d8)) &&
       (uVar12 = uStack_160, func_0x000107c605b8(), (uVar12 & 1) == 0)) {
LAB_103d6176c:
      func_0x000103d63578(&uStack_e0);
      func_0x000103d63578(&uStack_160);
      goto LAB_103d617d8;
    }
    if ((char)uStack_150 != (char)uStack_d0) goto LAB_103d6176c;
    if ((char)uStack_c0 != '\x01') {
      if (uStack_148 == uStack_c8) goto LAB_103d61674;
      goto LAB_103d6176c;
    }
    if ((long)uStack_c8 < 2) {
      if (uStack_c8 == 0) {
        if (uStack_148 != 0) goto LAB_103d6176c;
      }
      else if (uStack_148 != 1) goto LAB_103d6176c;
    }
    else if (uStack_c8 == 2) {
      if (uStack_148 != 2) goto LAB_103d6176c;
    }
    else if (uStack_c8 == 3) {
      if (uStack_148 != 3) goto LAB_103d6176c;
    }
    else if (uStack_148 != 4) goto LAB_103d6176c;
LAB_103d61674:
    uVar12 = uStack_138;
    func_0x000100e25fcc(uStack_138,uStack_130,uStack_b8,uStack_b0);
    func_0x000103d63578(&uStack_e0);
    func_0x000103d63578(&uStack_160);
    if ((uVar12 & 1) == 0) goto LAB_103d617d8;
    if (lVar9 == 0) goto LAB_103d613a0;
    puVar11 = puVar11 + 0xf;
    puVar10 = puVar10 + 0xf;
  } while( true );
}



/* Entry: 103d5fd3c; end: 103d5fd83;  */

void FUN_103d5fd3c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89e20,0x27,2);
  uRam0000000113811078 = uStack_38;
  uRam0000000113811070 = uStack_40;
  uRam0000000113811088 = uStack_28;
  uRam0000000113811080 = uStack_30;
  uRam0000000113811098 = uStack_18;
  uRam0000000113811090 = uStack_20;
  return;
}



/* Entry: 103d5fd84; end: 103d5fe6b;  */

/* WARNING: Removing unreachable block (ram,0x000103d5fe68) */

void FUN_103d5fd84(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 4) {
        pcVar3 = *(code **)(param_3 + 400);
        func_0x000103c87e6c();
        (*pcVar3)(unaff_x20 + 0x18,&UNK_110708388,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x160);
        }
        else {
          if (lVar1 != 1) goto LAB_103d5fe10;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_103d5fe10:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103d5fe6c; end: 103d5ff53;  */

void FUN_103d5fe6c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = unaff_x20[2], *(long *)(uVar1 + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x100))(uVar1,3,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[3];
    if (*(long *)(uVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 400);
      func_0x000103c87e6c();
      (*pcVar3)(uVar2,4,&UNK_110708388,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103d5ff54; end: 103d5ff9b;  */

void FUN_103d5ff54(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = puVar1;
  param_1[3] = puVar1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103d5ff9c; end: 103d5ffcb;  */

undefined1  [16] FUN_103d5ff9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103d5ffcc; end: 103d5ffff;  */

void FUN_103d5ffcc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103d60000; end: 103d60013;  */

undefined1  [16] FUN_103d60000(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103d60010;
  return auVar1;
}



/* Entry: 103d60014; end: 103d6003b;  */

void FUN_103d60014(void)

{
  FUN_103d5fd84();
  return;
}



/* Entry: 103d6003c; end: 103d6003f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d6003c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d60040; end: 103d60077;  */

uint FUN_103d60040(long param_1,long param_2)

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
  func_0x000103d63364();
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



/* Entry: 103d60078; end: 103d600bf;  */

uint FUN_103d60078(undefined8 *param_1)

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
  FUN_103d61840(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d600c0; end: 103d6015f;  */

/* WARNING: Possible PIC construction at 0x000103d6010c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d6011c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d60110) */
/* WARNING: Removing unreachable block (ram,0x000103d60120) */

void FUN_103d600c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006868 != -1) {
    func_0x000107c61568(0x113006868,FUN_103d5fd3c);
  }
  uVar5 = uRam0000000113811098;
  uVar4 = uRam0000000113811090;
  uVar3 = uRam0000000113811088;
  uVar2 = uRam0000000113811080;
  uVar1 = uRam0000000113811078;
  *param_1 = uRam0000000113811070;
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



/* Entry: 103d60160; end: 103d6019b;  */

void FUN_103d60160(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006980;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006980,&UNK_10dc89de8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d6019c; end: 103d602bf;  */

void FUN_103d6019c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d602c0; end: 103d6034b;  */

uint FUN_103d602c0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103d61840(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d6034c; end: 103d603fb;  */

void FUN_103d6034c(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  long lVar1;
  long lVar2;
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
  }
  return;
}



/* Entry: 103d603fc; end: 103d6049f;  */

void FUN_103d603fc(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    (*param_7)();
    (*pcVar2)(param_2,1,param_8,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103d604a0; end: 103d604d7;  */

undefined1  [16] FUN_103d604a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6980;
  auVar1._0_8_ = 0xd00000000000002f;
  return auVar1;
}



/* Entry: 103d604d8; end: 103d6052f;  */

void FUN_103d604d8(void)

{
  FUN_103d6034c();
  return;
}



/* Entry: 103d60530; end: 103d60567;  */

uint FUN_103d60530(long param_1,long param_2)

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
  FUN_103d63324();
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



/* Entry: 103d60568; end: 103d6066f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d60568(undefined8 *param_1)

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
  ulong uVar25;
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
  
  lVar22 = param_1[1];
  uVar25 = param_1[2];
  uVar18 = *unaff_x20;
  pbVar9 = (byte *)unaff_x20[1];
  pbVar23 = (byte *)unaff_x20[2];
  FUN_103d60820(uVar18,*param_1);
  if ((uVar18 & 1) == 0) {
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
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
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
joined_r0x000100e266a4:
          if (((ulong)pbVar21 & 1) == 0) {
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
      )(pbVar11,pbVar13,pbVar14,pbVar15,0);
      return pbVar11;
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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



/* Entry: 103d60670; end: 103d60683;  */

void FUN_103d60670(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006970;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006970,&UNK_10dc89de0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d60684; end: 103d606b7;  */

void FUN_103d60684(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d606b8; end: 103d6081f;  */

void FUN_103d606b8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d60820; end: 103d60bf7;  */

uint FUN_103d60820(long param_1,long param_2)

{
  char cVar1;
  long lVar2;
  ulong *puVar3;
  ulong *puVar4;
  uint uVar5;
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar5 = 1;
    }
    else {
      puVar4 = (ulong *)(param_1 + 0x38);
      puVar3 = (ulong *)(param_2 + 0x38);
      while( true ) {
        lVar2 = lVar2 + -1;
        uStack_f8 = puVar4[2];
        uStack_100 = puVar4[1];
        uStack_e8 = puVar4[4];
        uStack_f0 = puVar4[3];
        uStack_d8 = puVar4[6];
        uStack_e0 = puVar4[5];
        uStack_d0 = puVar4[7];
        uStack_118 = puVar4[-2];
        uStack_120 = puVar4[-3];
        uStack_108 = *puVar4;
        uStack_110 = puVar4[-1];
        uStack_98 = puVar3[2];
        uStack_a0 = puVar3[1];
        uStack_88 = puVar3[4];
        uStack_90 = puVar3[3];
        uStack_78 = puVar3[6];
        uStack_80 = puVar3[5];
        uStack_70 = puVar3[7];
        uStack_b8 = puVar3[-2];
        uStack_c0 = puVar3[-3];
        uStack_a8 = *puVar3;
        uStack_b0 = puVar3[-1];
        uStack_218 = puVar4[1];
        uVar6 = *puVar4;
        uStack_208 = puVar4[3];
        uVar11 = puVar4[2];
        uVar9 = puVar4[5];
        uVar7 = puVar4[4];
        uVar15 = puVar4[7];
        uVar12 = puVar4[6];
        uStack_1d8 = puVar3[1];
        uStack_1e0 = *puVar3;
        uStack_1c8 = puVar3[3];
        uStack_1d0 = puVar3[2];
        uStack_1b8 = puVar3[5];
        uStack_1c0 = puVar3[4];
        uStack_1a8 = puVar3[7];
        uStack_1b0 = puVar3[6];
        uStack_1a0 = uVar6;
        uStack_198 = uStack_218;
        uStack_190 = uVar11;
        uStack_188 = uStack_208;
        uStack_180 = uVar7;
        uStack_178 = uVar9;
        uStack_170 = uVar12;
        uStack_168 = uVar15;
        uStack_160 = uStack_1e0;
        uStack_158 = uStack_1d8;
        uStack_150 = uStack_1d0;
        uStack_148 = uStack_1c8;
        uStack_140 = uStack_1c0;
        uStack_138 = uStack_1b8;
        uStack_130 = uStack_1b0;
        uStack_128 = uStack_1a8;
        if (uStack_218 != 0) break;
        if (uStack_1d8 != 0) goto LAB_103d60b98;
        uStack_258 = puVar4[1];
        uStack_260 = *puVar4;
        uStack_248 = puVar4[3];
        uStack_250 = puVar4[2];
        uStack_238 = puVar4[5];
        uStack_240 = puVar4[4];
        uStack_228 = puVar4[7];
        uStack_230 = puVar4[6];
        FUN_103d634e4(&uStack_120,&uStack_220);
        FUN_103d634e4(&uStack_c0,&uStack_220);
        FUN_103d60c04(&uStack_108,&uStack_220);
        FUN_103d60c04(&uStack_a8,&uStack_220);
        func_0x000103d60c54(&uStack_260,0x112ffecc0,&UNK_10dc6e370);
LAB_103d60a7c:
        if (uStack_120 != uStack_c0) goto LAB_103d60b58;
        uVar6 = uStack_118;
        func_0x000100e25fcc(uStack_118,uStack_110,uStack_b8,uStack_b0);
        uVar5 = (uint)uVar6;
        func_0x000103d63518(&uStack_c0);
        func_0x000103d63518(&uStack_120);
        if (((uVar6 & 1) == 0) || (lVar2 == 0)) goto LAB_103d60b74;
        puVar4 = puVar4 + 0xb;
        puVar3 = puVar3 + 0xb;
      }
      if (uStack_1d8 != 0) {
        uStack_258 = puVar3[1];
        uStack_260 = *puVar3;
        uStack_248 = puVar3[3];
        uVar13 = puVar3[2];
        uVar10 = puVar3[5];
        uVar8 = puVar3[4];
        uVar16 = puVar3[7];
        uVar14 = puVar3[6];
        cVar1 = (char)uStack_248;
        uStack_250 = uVar13;
        uStack_240 = uVar8;
        uStack_238 = uVar10;
        uStack_230 = uVar14;
        uStack_228 = uVar16;
        if (((uVar6 == uStack_260) && (uStack_258 == uStack_218)) ||
           (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
          if (cVar1 == '\x01') {
            if ((long)uVar13 < 2) {
              if (uVar13 == 0) {
                if (uVar11 == 0) {
LAB_103d609d4:
                  if (((uVar7 == uVar8) && (uVar9 == uVar10)) ||
                     (func_0x000107c605b8(uVar7,uVar9,uVar8,uVar10,0), (uVar7 & 1) != 0)) {
                    FUN_103d634e4(&uStack_120,&uStack_220);
                    FUN_103d634e4(&uStack_c0,&uStack_220);
                    FUN_103d60c04(&uStack_108,&uStack_220);
                    FUN_103d60c04(&uStack_a8,&uStack_220);
                    func_0x000100e25fcc(uVar12,uVar15,uVar14,uVar16);
                    func_0x000103d60c54(&uStack_260,0x112ffecc0,&UNK_10dc6e370);
                    func_0x000103d60c54(&uStack_1a0,0x112ffecc0,&UNK_10dc6e370);
                    if ((uVar12 & 1) != 0) goto LAB_103d60a7c;
                    goto LAB_103d60b58;
                  }
                }
              }
              else if (uVar11 == 1) goto LAB_103d609d4;
            }
            else if (uVar13 == 2) {
              if (uVar11 == 2) goto LAB_103d609d4;
            }
            else if (uVar11 == 3) goto LAB_103d609d4;
          }
          else if (uVar11 == uVar13) goto LAB_103d609d4;
        }
        FUN_103d634e4(&uStack_120,&uStack_220);
        FUN_103d634e4(&uStack_c0,&uStack_220);
        FUN_103d60c04(&uStack_108,&uStack_220);
        FUN_103d60c04(&uStack_a8,&uStack_220);
        func_0x000103d60c54(&uStack_260,0x112ffecc0,&UNK_10dc6e370);
        func_0x000103d60c54(&uStack_1a0,0x112ffecc0,&UNK_10dc6e370);
LAB_103d60b58:
        func_0x000103d63518(&uStack_c0);
        func_0x000103d63518(&uStack_120);
        goto LAB_103d60b68;
      }
LAB_103d60b98:
      uStack_220 = uVar6;
      uStack_210 = uVar11;
      uStack_200 = uVar7;
      uStack_1f8 = uVar9;
      uStack_1f0 = uVar12;
      uStack_1e8 = uVar15;
      FUN_103d60c04(&uStack_108,&uStack_260);
      FUN_103d60c04(&uStack_a8,&uStack_260);
      func_0x000103d60c54(&uStack_220,0x112ffecc8,&UNK_10dc89440);
      uVar5 = 0;
    }
  }
  else {
LAB_103d60b68:
    uVar5 = 0;
  }
LAB_103d60b74:
  return uVar5 & 1;
}



/* Entry: 103d60bf8; end: 103d60c03;  */

void FUN_103d60bf8(void)

{
  return;
}



/* Entry: 103d60c04; end: 103d60d6b;  */

undefined8 FUN_103d60c04(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112ffecc0;
  func_0x0001000285a8(0x112ffecc0,&UNK_10dc6e370);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 103d60d6c; end: 103d60d77;  */

void FUN_103d60d6c(void)

{
  return;
}



/* Entry: 103d60d78; end: 103d60db7;  */

void FUN_103d60d78(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006810 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc896d0;
  func_0x000107c61520(&UNK_10dc896d0,&UNK_110708400);
  puRam0000000113006810 = puVar1;
  return;
}



/* Entry: 103d60db8; end: 103d61053;  */

uint FUN_103d60db8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 auStack_280 [64];
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
  
  uStack_b8 = param_1[8];
  uStack_c0 = param_1[7];
  uStack_a8 = param_1[10];
  uStack_b0 = param_1[9];
  uStack_98 = param_1[0xc];
  uStack_a0 = param_1[0xb];
  uStack_88 = param_1[0xe];
  uStack_90 = param_1[0xd];
  uStack_f8 = param_2[8];
  uStack_100 = param_2[7];
  uStack_e8 = param_2[10];
  uStack_f0 = param_2[9];
  uStack_d8 = param_2[0xc];
  uStack_e0 = param_2[0xb];
  uStack_c8 = param_2[0xe];
  uStack_d0 = param_2[0xd];
  uStack_178 = param_1[8];
  uStack_180 = param_1[7];
  uStack_168 = param_1[10];
  uStack_170 = param_1[9];
  uStack_158 = param_1[0xc];
  uStack_160 = param_1[0xb];
  uStack_148 = param_1[0xe];
  uStack_150 = param_1[0xd];
  uStack_1b8 = param_2[8];
  uStack_1c0 = param_2[7];
  uStack_1a8 = param_2[10];
  uStack_1b0 = param_2[9];
  uStack_198 = param_2[0xc];
  uStack_1a0 = param_2[0xb];
  uStack_188 = param_2[0xe];
  uStack_190 = param_2[0xd];
  uStack_140 = uStack_1c0;
  uStack_138 = uStack_1b8;
  uStack_130 = uStack_1b0;
  uStack_128 = uStack_1a8;
  uStack_120 = uStack_1a0;
  uStack_118 = uStack_198;
  uStack_110 = uStack_190;
  uStack_108 = uStack_188;
  if (uStack_178 == 0) {
    if (uStack_1b8 != 0) goto LAB_103d60ee4;
    uStack_1f8 = param_1[8];
    uStack_200 = param_1[7];
    uStack_1e8 = param_1[10];
    uStack_1f0 = param_1[9];
    uStack_1d8 = param_1[0xc];
    uStack_1e0 = param_1[0xb];
    uStack_1c8 = param_1[0xe];
    uStack_1d0 = param_1[0xd];
    FUN_103d60c04(&uStack_c0,&uStack_80);
    FUN_103d60c04(&uStack_100,&uStack_80);
    func_0x000103d60c54(&uStack_200,0x112ffecc0,&UNK_10dc6e370);
LAB_103d60f80:
    uVar3 = *param_1;
    if ((((uVar3 == *param_2) && (param_1[1] == param_2[1])) ||
        (func_0x000107c605b8(), (uVar3 & 1) != 0)) &&
       ((((byte)param_1[2] ^ (byte)param_2[2]) & 1) == 0)) {
      uVar3 = param_1[3];
      uVar4 = param_2[3];
      if ((char)param_2[4] == '\x01') {
        if ((long)uVar4 < 2) {
          if (uVar4 == 0) {
            if (uVar3 == 0) {
LAB_103d61014:
              uVar3 = param_1[5];
              func_0x000100e25fcc(uVar3,param_1[6],param_2[5],param_2[6]);
              uVar1 = (uint)uVar3;
              goto LAB_103d60fb8;
            }
          }
          else if (uVar3 == 1) goto LAB_103d61014;
        }
        else if (uVar4 == 2) {
          if (uVar3 == 2) goto LAB_103d61014;
        }
        else if (uVar4 == 3) {
          if (uVar3 == 3) goto LAB_103d61014;
        }
        else if (uVar3 == 4) goto LAB_103d61014;
      }
      else if (uVar3 == uVar4) goto LAB_103d61014;
    }
  }
  else {
    if (uStack_1b8 != 0) {
      uStack_238 = param_2[8];
      uStack_240 = param_2[7];
      uStack_228 = param_2[10];
      uStack_230 = param_2[9];
      uStack_218 = param_2[0xc];
      uStack_220 = param_2[0xb];
      uStack_208 = param_2[0xe];
      uStack_210 = param_2[0xd];
      uStack_78 = param_1[8];
      uStack_80 = param_1[7];
      uStack_68 = param_1[10];
      uStack_70 = param_1[9];
      uStack_58 = param_1[0xc];
      uStack_60 = param_1[0xb];
      uStack_48 = param_1[0xe];
      uStack_50 = param_1[0xd];
      uStack_200 = uStack_240;
      uStack_1f8 = uStack_238;
      uStack_1f0 = uStack_230;
      uStack_1e8 = uStack_228;
      uStack_1e0 = uStack_220;
      uStack_1d8 = uStack_218;
      uStack_1d0 = uStack_210;
      uStack_1c8 = uStack_208;
      FUN_103d60c04(&uStack_c0,auStack_280);
      FUN_103d60c04(&uStack_100,auStack_280);
      puVar2 = &uStack_80;
      func_0x000103d60c94(puVar2,&uStack_200);
      func_0x000103d60c54(&uStack_240,0x112ffecc0,&UNK_10dc6e370);
      func_0x000103d60c54(&uStack_180,0x112ffecc0,&UNK_10dc6e370);
      if (((ulong)puVar2 & 1) != 0) goto LAB_103d60f80;
      goto LAB_103d60fb4;
    }
LAB_103d60ee4:
    uStack_200 = uStack_180;
    uStack_1f8 = uStack_178;
    uStack_1f0 = uStack_170;
    uStack_1e8 = uStack_168;
    uStack_1e0 = uStack_160;
    uStack_1d8 = uStack_158;
    uStack_1d0 = uStack_150;
    uStack_1c8 = uStack_148;
    FUN_103d60c04(&uStack_c0,&uStack_80);
    FUN_103d60c04(&uStack_100,&uStack_80);
    func_0x000103d60c54(&uStack_200,0x112ffecc8,&UNK_10dc89440);
  }
LAB_103d60fb4:
  uVar1 = 0;
LAB_103d60fb8:
  return uVar1 & 1;
}



/* Entry: 103d61054; end: 103d61093;  */

void FUN_103d61054(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc897a8;
  func_0x000107c61520(&UNK_10dc897a8,&UNK_110708488);
  puRam0000000113006820 = puVar1;
  return;
}



/* Entry: 103d61094; end: 103d6129b;  */

uint FUN_103d61094(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  undefined1 auStack_280 [64];
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
  
  lStack_b8 = param_1[4];
  lStack_c0 = param_1[3];
  lStack_a8 = param_1[6];
  lStack_b0 = param_1[5];
  lStack_98 = param_1[8];
  lStack_a0 = param_1[7];
  lStack_88 = param_1[10];
  lStack_90 = param_1[9];
  lStack_f8 = param_2[4];
  lStack_100 = param_2[3];
  lStack_e8 = param_2[6];
  lStack_f0 = param_2[5];
  lStack_d8 = param_2[8];
  lStack_e0 = param_2[7];
  lStack_c8 = param_2[10];
  lStack_d0 = param_2[9];
  lStack_178 = param_1[4];
  lStack_180 = param_1[3];
  lStack_168 = param_1[6];
  lStack_170 = param_1[5];
  lStack_158 = param_1[8];
  lStack_160 = param_1[7];
  lStack_148 = param_1[10];
  lStack_150 = param_1[9];
  lStack_1b8 = param_2[4];
  lStack_1c0 = param_2[3];
  lStack_1a8 = param_2[6];
  lStack_1b0 = param_2[5];
  lStack_198 = param_2[8];
  lStack_1a0 = param_2[7];
  lStack_188 = param_2[10];
  lStack_190 = param_2[9];
  lStack_140 = lStack_1c0;
  lStack_138 = lStack_1b8;
  lStack_130 = lStack_1b0;
  lStack_128 = lStack_1a8;
  lStack_120 = lStack_1a0;
  lStack_118 = lStack_198;
  lStack_110 = lStack_190;
  lStack_108 = lStack_188;
  if (lStack_178 == 0) {
    if (lStack_1b8 != 0) goto LAB_103d611c0;
    lStack_1f8 = param_1[4];
    lStack_200 = param_1[3];
    lStack_1e8 = param_1[6];
    lStack_1f0 = param_1[5];
    lStack_1d8 = param_1[8];
    lStack_1e0 = param_1[7];
    lStack_1c8 = param_1[10];
    lStack_1d0 = param_1[9];
    FUN_103d60c04(&lStack_c0,&lStack_80);
    FUN_103d60c04(&lStack_100,&lStack_80);
    func_0x000103d60c54(&lStack_200,0x112ffecc0,&UNK_10dc6e370);
LAB_103d6125c:
    if (*param_1 == *param_2) {
      lVar3 = param_1[1];
      func_0x000100e25fcc(lVar3,param_1[2],param_2[1],param_2[2]);
      uVar1 = (uint)lVar3;
      goto LAB_103d61280;
    }
  }
  else if (lStack_1b8 == 0) {
LAB_103d611c0:
    lStack_200 = lStack_180;
    lStack_1f8 = lStack_178;
    lStack_1f0 = lStack_170;
    lStack_1e8 = lStack_168;
    lStack_1e0 = lStack_160;
    lStack_1d8 = lStack_158;
    lStack_1d0 = lStack_150;
    lStack_1c8 = lStack_148;
    FUN_103d60c04(&lStack_c0,&lStack_80);
    FUN_103d60c04(&lStack_100,&lStack_80);
    func_0x000103d60c54(&lStack_200,0x112ffecc8,&UNK_10dc89440);
  }
  else {
    lStack_238 = param_2[4];
    lStack_240 = param_2[3];
    lStack_228 = param_2[6];
    lStack_230 = param_2[5];
    lStack_218 = param_2[8];
    lStack_220 = param_2[7];
    lStack_208 = param_2[10];
    lStack_210 = param_2[9];
    lStack_78 = param_1[4];
    lStack_80 = param_1[3];
    lStack_68 = param_1[6];
    lStack_70 = param_1[5];
    lStack_58 = param_1[8];
    lStack_60 = param_1[7];
    lStack_48 = param_1[10];
    lStack_50 = param_1[9];
    lStack_200 = lStack_240;
    lStack_1f8 = lStack_238;
    lStack_1f0 = lStack_230;
    lStack_1e8 = lStack_228;
    lStack_1e0 = lStack_220;
    lStack_1d8 = lStack_218;
    lStack_1d0 = lStack_210;
    lStack_1c8 = lStack_208;
    FUN_103d60c04(&lStack_c0,auStack_280);
    FUN_103d60c04(&lStack_100,auStack_280);
    plVar2 = &lStack_80;
    func_0x000103d60c94(plVar2,&lStack_200);
    func_0x000103d60c54(&lStack_240,0x112ffecc0,&UNK_10dc6e370);
    func_0x000103d60c54(&lStack_180,0x112ffecc0,&UNK_10dc6e370);
    if (((ulong)plVar2 & 1) != 0) goto LAB_103d6125c;
  }
  uVar1 = 0;
LAB_103d61280:
  return uVar1 & 1;
}



/* Entry: 103d6129c; end: 103d6135b;  */

void FUN_103d6129c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89890;
  func_0x000107c61520(&UNK_10dc89890,&UNK_1107085a8);
  puRam0000000113006838 = puVar1;
  return;
}



/* Entry: 103d6135c; end: 103d617ff;  */

uint FUN_103d6135c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  char cVar1;
  uint uVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
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
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != *(long *)(param_4 + 0x10)) {
    return 0;
  }
  if (lVar3 == 0 || param_1 == param_4) {
LAB_103d613a0:
    func_0x000100e25fcc(param_2,param_3,param_5,param_6);
    uVar2 = (uint)param_2;
LAB_103d617dc:
    return uVar2 & 1;
  }
  puVar5 = (ulong *)(param_1 + 0x58);
  puVar4 = (ulong *)(param_4 + 0x58);
  do {
    lVar3 = lVar3 + -1;
    uStack_118 = puVar5[2];
    uStack_120 = puVar5[1];
    uStack_108 = puVar5[4];
    uStack_110 = puVar5[3];
    uStack_f8 = puVar5[6];
    uStack_100 = puVar5[5];
    uStack_f0 = puVar5[7];
    uStack_158 = puVar5[-6];
    uStack_160 = puVar5[-7];
    uStack_148 = puVar5[-4];
    uStack_150 = puVar5[-5];
    uStack_138 = puVar5[-2];
    uStack_140 = puVar5[-3];
    uStack_128 = *puVar5;
    uStack_130 = puVar5[-1];
    uStack_d8 = puVar4[-6];
    uStack_e0 = puVar4[-7];
    uStack_c8 = puVar4[-4];
    uStack_d0 = puVar4[-5];
    uStack_b8 = puVar4[-2];
    uStack_c0 = puVar4[-3];
    uStack_a8 = *puVar4;
    uStack_b0 = puVar4[-1];
    uStack_98 = puVar4[2];
    uStack_a0 = puVar4[1];
    uStack_88 = puVar4[4];
    uStack_90 = puVar4[3];
    uStack_78 = puVar4[6];
    uStack_80 = puVar4[5];
    uStack_70 = puVar4[7];
    uStack_258 = puVar5[1];
    uVar6 = *puVar5;
    uStack_248 = puVar5[3];
    uVar11 = puVar5[2];
    uVar9 = puVar5[5];
    uVar7 = puVar5[4];
    uVar15 = puVar5[7];
    uVar12 = puVar5[6];
    uStack_218 = puVar4[1];
    uStack_220 = *puVar4;
    uStack_208 = puVar4[3];
    uStack_210 = puVar4[2];
    uStack_1f8 = puVar4[5];
    uStack_200 = puVar4[4];
    uStack_1e8 = puVar4[7];
    uStack_1f0 = puVar4[6];
    uStack_1e0 = uVar6;
    uStack_1d8 = uStack_258;
    uStack_1d0 = uVar11;
    uStack_1c8 = uStack_248;
    uStack_1c0 = uVar7;
    uStack_1b8 = uVar9;
    uStack_1b0 = uVar12;
    uStack_1a8 = uVar15;
    uStack_1a0 = uStack_220;
    uStack_198 = uStack_218;
    uStack_190 = uStack_210;
    uStack_188 = uStack_208;
    uStack_180 = uStack_200;
    uStack_178 = uStack_1f8;
    uStack_170 = uStack_1f0;
    uStack_168 = uStack_1e8;
    if (uStack_258 != 0) {
      if (uStack_218 != 0) {
        uStack_298 = puVar4[1];
        uStack_2a0 = *puVar4;
        uStack_288 = puVar4[3];
        uVar13 = puVar4[2];
        uVar10 = puVar4[5];
        uVar8 = puVar4[4];
        uVar16 = puVar4[7];
        uVar14 = puVar4[6];
        cVar1 = (char)uStack_288;
        uStack_290 = uVar13;
        uStack_280 = uVar8;
        uStack_278 = uVar10;
        uStack_270 = uVar14;
        uStack_268 = uVar16;
        if (((uVar6 == uStack_2a0) && (uStack_298 == uStack_258)) ||
           (func_0x000107c605b8(), (uVar6 & 1) != 0)) {
          if (cVar1 == '\x01') {
            if ((long)uVar13 < 2) {
              if (uVar13 == 0) {
                if (uVar11 == 0) {
LAB_103d6154c:
                  if (((uVar7 == uVar8) && (uVar9 == uVar10)) ||
                     (func_0x000107c605b8(uVar7,uVar9,uVar8,uVar10,0), (uVar7 & 1) != 0)) {
                    func_0x000103d63544(&uStack_160,&uStack_260);
                    func_0x000103d63544(&uStack_e0,&uStack_260);
                    FUN_103d60c04(&uStack_128,&uStack_260);
                    FUN_103d60c04(&uStack_a8,&uStack_260);
                    func_0x000100e25fcc(uVar12,uVar15,uVar14,uVar16);
                    func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
                    func_0x000103d60c54(&uStack_1e0,0x112ffecc0,&UNK_10dc6e370);
                    if ((uVar12 & 1) != 0) goto LAB_103d61600;
                    goto LAB_103d6176c;
                  }
                }
              }
              else if (uVar11 == 1) goto LAB_103d6154c;
            }
            else if (uVar13 == 2) {
              if (uVar11 == 2) goto LAB_103d6154c;
            }
            else if (uVar11 == 3) goto LAB_103d6154c;
          }
          else if (uVar11 == uVar13) goto LAB_103d6154c;
        }
        func_0x000103d63544(&uStack_160,&uStack_260);
        func_0x000103d63544(&uStack_e0,&uStack_260);
        FUN_103d60c04(&uStack_128,&uStack_260);
        FUN_103d60c04(&uStack_a8,&uStack_260);
        func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
        func_0x000103d60c54(&uStack_1e0,0x112ffecc0,&UNK_10dc6e370);
        goto LAB_103d6176c;
      }
LAB_103d61780:
      uStack_260 = uVar6;
      uStack_250 = uVar11;
      uStack_240 = uVar7;
      uStack_238 = uVar9;
      uStack_230 = uVar12;
      uStack_228 = uVar15;
      FUN_103d60c04(&uStack_128,&uStack_2a0);
      FUN_103d60c04(&uStack_a8,&uStack_2a0);
      func_0x000103d60c54(&uStack_260,0x112ffecc8,&UNK_10dc89440);
LAB_103d617d8:
      uVar2 = 0;
      goto LAB_103d617dc;
    }
    if (uStack_218 != 0) goto LAB_103d61780;
    uStack_298 = puVar5[1];
    uStack_2a0 = *puVar5;
    uStack_288 = puVar5[3];
    uStack_290 = puVar5[2];
    uStack_278 = puVar5[5];
    uStack_280 = puVar5[4];
    uStack_268 = puVar5[7];
    uStack_270 = puVar5[6];
    func_0x000103d63544(&uStack_160,&uStack_260);
    func_0x000103d63544(&uStack_e0,&uStack_260);
    FUN_103d60c04(&uStack_128,&uStack_260);
    FUN_103d60c04(&uStack_a8,&uStack_260);
    func_0x000103d60c54(&uStack_2a0,0x112ffecc0,&UNK_10dc6e370);
LAB_103d61600:
    if (((uStack_160 != uStack_e0) || (uStack_158 != uStack_d8)) &&
       (uVar6 = uStack_160, func_0x000107c605b8(), (uVar6 & 1) == 0)) {
LAB_103d6176c:
      func_0x000103d63578(&uStack_e0);
      func_0x000103d63578(&uStack_160);
      goto LAB_103d617d8;
    }
    if ((char)uStack_150 != (char)uStack_d0) goto LAB_103d6176c;
    if ((char)uStack_c0 != '\x01') {
      if (uStack_148 == uStack_c8) goto LAB_103d61674;
      goto LAB_103d6176c;
    }
    if ((long)uStack_c8 < 2) {
      if (uStack_c8 == 0) {
        if (uStack_148 != 0) goto LAB_103d6176c;
      }
      else if (uStack_148 != 1) goto LAB_103d6176c;
    }
    else if (uStack_c8 == 2) {
      if (uStack_148 != 2) goto LAB_103d6176c;
    }
    else if (uStack_c8 == 3) {
      if (uStack_148 != 3) goto LAB_103d6176c;
    }
    else if (uStack_148 != 4) goto LAB_103d6176c;
LAB_103d61674:
    uVar6 = uStack_138;
    func_0x000100e25fcc(uStack_138,uStack_130,uStack_b8,uStack_b0);
    func_0x000103d63578(&uStack_e0);
    func_0x000103d63578(&uStack_160);
    if ((uVar6 & 1) == 0) goto LAB_103d617d8;
    if (lVar3 == 0) goto LAB_103d613a0;
    puVar5 = puVar5 + 0xf;
    puVar4 = puVar4 + 0xf;
  } while( true );
}



/* Entry: 103d61800; end: 103d6183f;  */

void FUN_103d61800(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89a40;
  func_0x000107c61520(&UNK_10dc89a40,&UNK_1107086b8);
  puRam0000000113006860 = puVar1;
  return;
}



/* Entry: 103d61840; end: 103d61923;  */

/* WARNING: Possible PIC construction at 0x000103d61878: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d61904: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d6187c) */
/* WARNING: Removing unreachable block (ram,0x000103d61908) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d61840(undefined8 *param_1,undefined8 *param_2)

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
  long lVar26;
  byte *pbVar27;
  ulong unaff_x22;
  undefined8 *puVar28;
  byte *unaff_x23;
  undefined8 *puVar29;
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
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 == *(long *)(lVar22 + 0x10)) {
    if (lVar26 != 0 && lVar19 != lVar22) {
      puVar28 = (undefined8 *)(lVar22 + 0x28);
      puVar29 = (undefined8 *)(lVar19 + 0x28);
      do {
        pbVar12 = (byte *)puVar29[-1];
        pbVar15 = (byte *)*puVar29;
        pbVar16 = (byte *)puVar28[-1];
        pbVar17 = (byte *)*puVar28;
        if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
        goto code_r0x000107c605b8;
        puVar28 = puVar28 + 2;
        puVar29 = puVar29 + 2;
        lVar26 = lVar26 + -1;
      } while (lVar26 != 0);
    }
    uVar13 = param_1[3];
    FUN_103c85cd8(uVar13,param_2[3]);
    if ((uVar13 & 1) != 0) {
      pbVar10 = (byte *)param_1[4];
      pbVar27 = (byte *)param_1[5];
      lVar26 = param_2[4];
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
        uVar4 = (uint)((ulong)pbVar27 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar13 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar14 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar13 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar13 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
code_r0x000100e26128:
          pbVar9 = (byte *)0x1;
        }
        else if (uVar4 >> 0x1e < 2) {
          if (uVar18 == 0) {
            uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
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
          iVar20 = (int)((ulong)lVar26 >> 0x20);
          if (SBORROW4(iVar20,(int)lVar26)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar6)();
          }
          if (uVar21 == (long)(iVar20 - (int)lVar26)) goto code_r0x000100e26094;
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
            uVar24 = *(long *)(lVar26 + 0x18) - *(long *)(lVar26 + 0x10);
            if (SBORROW8(*(long *)(lVar26 + 0x18),*(long *)(lVar26 + 0x10))) {
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
                puVar7[-0x68] = (char)pbVar27;
                puVar7[-0x67] = (char)((ulong)pbVar27 >> 8);
                puVar7[-0x66] = (char)((ulong)pbVar27 >> 0x10);
                puVar7[-0x65] = (char)((ulong)pbVar27 >> 0x18);
                puVar7[-100] = (char)((ulong)pbVar27 >> 0x20);
                puVar7[-99] = (char)((ulong)pbVar27 >> 0x28);
                pbVar14 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
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
              unaff_x24 = pbVar27;
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
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar19;
              if (SBORROW8((long)unaff_x24,lVar19)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar6)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar10;
              unaff_x25 = pbVar27;
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
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar26,uVar13);
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
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar15 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar26 = *(long *)pbVar14;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)(pbVar14 + 8);
            pbVar17 = *(byte **)(pbVar14 + 0x10);
            lVar26 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar15 = pbVar27;
            if ((pbVar10 == pbVar16) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            lVar26 = *(long *)(pbVar14 + 0x18);
            if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar25 != (byte *)0x0) {
                if (lVar26 == 0) {
                  return (byte *)0x0;
                }
                func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar26);
                func_0x000107c61174();
                pbVar12 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar26);
                pbVar25 = pbVar12;
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar26 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
          }
          goto code_r0x000107c605b8;
        }
        lVar19 = *(long *)(pbVar9 + 0x20);
        if (bVar30 < 5) {
          if (bVar30 != 3) {
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar16 = *(byte **)pbVar14;
            pbVar17 = *(byte **)(pbVar14 + 8);
            if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
               pbVar17 = *(byte **)(pbVar14 + 0x18),
               pbVar27 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))) {
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
          lVar26 = *(long *)(pbVar14 + 0x20);
          if (pbVar27 == (byte *)0x0) {
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
            pbVar15 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar14 + 0x18),lVar26,0);
joined_r0x000100e266a4:
            if (((ulong)pbVar25 & 1) == 0) {
              return (byte *)0x0;
            }
            return (byte *)0x1;
          }
          goto joined_r0x000100e26620;
        }
        if (bVar30 != 5) {
          if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
              lVar19 == 0) && pbVar27 == (byte *)0x0) {
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar14 + 0x20);
            lVar26 = *(long *)(pbVar14 + 0x18);
            bVar30 = pbVar14[8] | (byte)lVar26;
            bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar14[0x10] | (byte)lVar19;
            bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
                                                                               bVar30 | auVar46[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
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
          lVar19 = *(long *)(pbVar14 + 0x20);
          lVar26 = *(long *)(pbVar14 + 0x18);
          bVar30 = pbVar14[8] | (byte)lVar26;
          bVar31 = pbVar14[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar14[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar14[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar14[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar14[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar14[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar14[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar14[0x10] | (byte)lVar19;
          bVar39 = pbVar14[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar14[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar14[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar14[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar14[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar14[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar14[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
          lVar26 = CONCAT17(bVar37 | auVar46[7],
                            CONCAT16(bVar36 | auVar46[6],
                                     CONCAT15(bVar35 | auVar46[5],
                                              CONCAT14(bVar34 | auVar46[4],
                                                       CONCAT13(bVar33 | auVar46[3],
                                                                CONCAT12(bVar32 | auVar46[2],
                                                                         CONCAT11(bVar31 | auVar46[1
                                                  ],bVar30 | auVar46[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 8);
        uVar13 = *(ulong *)(pbVar14 + 0x10);
        lVar19 = *(long *)pbVar14;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar19,uVar11);
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



/* Entry: 103d61924; end: 103d619e3;  */

void FUN_103d61924(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006870 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89b18;
  func_0x000107c61520(&UNK_10dc89b18,&UNK_110708738);
  puRam0000000113006870 = puVar1;
  return;
}



/* Entry: 103d619e4; end: 103d619f7;  */

void FUN_103d619e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d619f8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d61a38)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d619f8; end: 103d61aa3;  */

void FUN_103d619f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc894e8;
  func_0x000107c61520(&UNK_10dc894e8,&UNK_110708388);
  puRam0000000113006890 = puVar1;
  return;
}



/* Entry: 103d61aa4; end: 103d61aa7;  */

void FUN_103d61aa4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89528;
  func_0x000107c61520(&UNK_10dc89528,&UNK_110708388);
  puRam00000001130068b0 = puVar1;
  return;
}



/* Entry: 103d61aa8; end: 103d61ae7;  */

void FUN_103d61aa8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89528;
  func_0x000107c61520(&UNK_10dc89528,&UNK_110708388);
  puRam00000001130068b0 = puVar1;
  return;
}



/* Entry: 103d61ae8; end: 103d61afb;  */

void FUN_103d61ae8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61afc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d61b3c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d61afc; end: 103d61ba7;  */

void FUN_103d61afc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc895e8;
  func_0x000107c61520(&UNK_10dc895e8,&UNK_110708530);
  puRam00000001130068b8 = puVar1;
  return;
}



/* Entry: 103d61ba8; end: 103d61beb;  */

void FUN_103d61ba8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    func_0x00010002969c(param_2,param_3);
    puVar1 = PTR___sSayxGSlsMc_11034dd20;
    func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Entry: 103d61bec; end: 103d61bef;  */

void FUN_103d61bec(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89628;
  func_0x000107c61520(&UNK_10dc89628,&UNK_110708530);
  puRam00000001130068d8 = puVar1;
  return;
}



/* Entry: 103d61bf0; end: 103d61c2f;  */

void FUN_103d61bf0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89628;
  func_0x000107c61520(&UNK_10dc89628,&UNK_110708530);
  puRam00000001130068d8 = puVar1;
  return;
}



/* Entry: 103d61c30; end: 103d61c53;  */

void FUN_103d61c30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61c54();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d61c54; end: 103d61c93;  */

void FUN_103d61c54(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc896a8;
  func_0x000107c61520(&UNK_10dc896a8,&UNK_110708400);
  puRam00000001130068e0 = puVar1;
  return;
}



/* Entry: 103d61c94; end: 103d61cab;  */

void FUN_103d61c94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d60d78();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103ccc490)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d61cac; end: 103d61ceb;  */

void FUN_103d61cac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89710;
  func_0x000107c61520(&UNK_10dc89710,&UNK_110708400);
  puRam00000001130068e8 = puVar1;
  return;
}



/* Entry: 103d61cec; end: 103d61d0f;  */

void FUN_103d61cec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61d10();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d61d10; end: 103d61d4f;  */

void FUN_103d61d10(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89780;
  func_0x000107c61520(&UNK_10dc89780,&UNK_110708488);
  puRam00000001130068f0 = puVar1;
  return;
}



/* Entry: 103d61d50; end: 103d61d67;  */

void FUN_103d61d50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61054();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d6131c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d61d68; end: 103d61da7;  */

void FUN_103d61d68(void)

{
  undefined *puVar1;
  
  if (puRam00000001130068f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc897e8;
  func_0x000107c61520(&UNK_10dc897e8,&UNK_110708488);
  puRam00000001130068f8 = puVar1;
  return;
}



/* Entry: 103d61da8; end: 103d61dcb;  */

void FUN_103d61da8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61dcc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d61dcc; end: 103d61e0b;  */

void FUN_103d61dcc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006900 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89868;
  func_0x000107c61520(&UNK_10dc89868,&UNK_1107085a8);
  puRam0000000113006900 = puVar1;
  return;
}



/* Entry: 103d61e0c; end: 103d61e23;  */

void FUN_103d61e0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d6129c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d61964)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d61e24; end: 103d61e63;  */

void FUN_103d61e24(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006908 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc898d0;
  func_0x000107c61520(&UNK_10dc898d0,&UNK_1107085a8);
  puRam0000000113006908 = puVar1;
  return;
}



/* Entry: 103d61e64; end: 103d61e87;  */

void FUN_103d61e64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61e88();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d61e88; end: 103d61ec7;  */

void FUN_103d61e88(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006910 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89940;
  func_0x000107c61520(&UNK_10dc89940,&UNK_110708630);
  puRam0000000113006910 = puVar1;
  return;
}



/* Entry: 103d61ec8; end: 103d61edb;  */

void FUN_103d61ec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d612dc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d61edc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d61edc; end: 103d61f1b;  */

void FUN_103d61edc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006918 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc898f8;
  func_0x000107c61520(&DAT_10dc898f8,&UNK_110708630);
  puRam0000000113006918 = puVar1;
  return;
}



/* Entry: 103d61f1c; end: 103d61f1f;  */

void FUN_103d61f1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc899a8;
  func_0x000107c61520(&UNK_10dc899a8,&UNK_110708630);
  puRam0000000113006920 = puVar1;
  return;
}



/* Entry: 103d61f20; end: 103d61f5f;  */

void FUN_103d61f20(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006920 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc899a8;
  func_0x000107c61520(&UNK_10dc899a8,&UNK_110708630);
  puRam0000000113006920 = puVar1;
  return;
}



/* Entry: 103d61f60; end: 103d61f83;  */

void FUN_103d61f60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61f84();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d61f84; end: 103d61fc3;  */

void FUN_103d61f84(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006928 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89a18;
  func_0x000107c61520(&UNK_10dc89a18,&UNK_1107086b8);
  puRam0000000113006928 = puVar1;
  return;
}



/* Entry: 103d61fc4; end: 103d61fd7;  */

void FUN_103d61fc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61800();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d61fd8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d61fd8; end: 103d62017;  */

void FUN_103d61fd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006930 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc899d0;
  func_0x000107c61520(&DAT_10dc899d0,&UNK_1107086b8);
  puRam0000000113006930 = puVar1;
  return;
}



/* Entry: 103d62018; end: 103d6201b;  */

void FUN_103d62018(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89a80;
  func_0x000107c61520(&UNK_10dc89a80,&UNK_1107086b8);
  puRam0000000113006938 = puVar1;
  return;
}



/* Entry: 103d6201c; end: 103d6205b;  */

void FUN_103d6201c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006938 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89a80;
  func_0x000107c61520(&UNK_10dc89a80,&UNK_1107086b8);
  puRam0000000113006938 = puVar1;
  return;
}



/* Entry: 103d6205c; end: 103d6207f;  */

void FUN_103d6205c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d62080();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d62080; end: 103d620bf;  */

void FUN_103d62080(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006940 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89af0;
  func_0x000107c61520(&UNK_10dc89af0,&UNK_110708738);
  puRam0000000113006940 = puVar1;
  return;
}



/* Entry: 103d620c0; end: 103d620d3;  */

void FUN_103d620c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d61924();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d620d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d620d4; end: 103d62113;  */

void FUN_103d620d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006948 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc89aa8;
  func_0x000107c61520(&DAT_10dc89aa8,&UNK_110708738);
  puRam0000000113006948 = puVar1;
  return;
}



/* Entry: 103d62114; end: 103d62117;  */

void FUN_103d62114(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89b58;
  func_0x000107c61520(&UNK_10dc89b58,&UNK_110708738);
  puRam0000000113006950 = puVar1;
  return;
}



/* Entry: 103d62118; end: 103d62157;  */

void FUN_103d62118(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89b58;
  func_0x000107c61520(&UNK_10dc89b58,&UNK_110708738);
  puRam0000000113006950 = puVar1;
  return;
}



/* Entry: 103d62158; end: 103d6217b;  */

void FUN_103d62158(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d6217c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d6217c; end: 103d621bb;  */

void FUN_103d6217c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006958 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc89bc8;
  func_0x000107c61520(&UNK_10dc89bc8,&UNK_1107087c0);
  puRam0000000113006958 = puVar1;
  return;
}



/* Entry: 103d621bc; end: 103d621cf;  */

void FUN_103d621bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d619a4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d62200();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d621d0; end: 103d621ff;  */

void FUN_103d621d0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



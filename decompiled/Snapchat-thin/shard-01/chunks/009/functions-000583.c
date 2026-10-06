/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015d878c; end: 1015d87bb;  */

undefined1  [16] FUN_1015d878c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1015d87bc; end: 1015d87ef;  */

void FUN_1015d87bc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1015d87f0; end: 1015d8803;  */

undefined1  [16] FUN_1015d87f0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1015d8800;
  return auVar1;
}



/* Entry: 1015d8804; end: 1015d883b;  */

void FUN_1015d8804(void)

{
  FUN_1015d8644();
  return;
}



/* Entry: 1015d883c; end: 1015d883f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d883c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d8840; end: 1015d8877;  */

uint FUN_1015d8840(long param_1,long param_2)

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
  FUN_1015d8e3c();
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



/* Entry: 1015d8878; end: 1015d898f;  */

/* WARNING: Possible PIC construction at 0x0001015d88ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015d88b0) */
/* WARNING: Removing unreachable block (ram,0x0001015d88d8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d8878(undefined8 *param_1)

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
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,uVar15)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar15;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
      }
    }
LAB_100e262b0:
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
          if (pbVar22 != (byte *)0x0) {
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015d8990; end: 1015d89cb;  */

void FUN_1015d8990(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db82f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db82f8,&UNK_10d967c88);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d89cc; end: 1015d8b47;  */

void FUN_1015d89cc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015d8b48; end: 1015d8b87;  */

void FUN_1015d8b48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967bd0;
  func_0x000107c61520(&UNK_10d967bd0,&UNK_1103e4938);
  puRam0000000112db82e0 = puVar1;
  return;
}



/* Entry: 1015d8b88; end: 1015d8bab;  */

void FUN_1015d8b88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d8bac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d8bac; end: 1015d8beb;  */

void FUN_1015d8bac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967ba8;
  func_0x000107c61520(&UNK_10d967ba8,&UNK_1103e4938);
  puRam0000000112db82e8 = puVar1;
  return;
}



/* Entry: 1015d8bec; end: 1015d8c17;  */

void FUN_1015d8bec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d8b48();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015d52e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d8c18; end: 1015d8c1b;  */

void FUN_1015d8c18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967c10;
  func_0x000107c61520(&UNK_10d967c10,&UNK_1103e4938);
  puRam0000000112db82f0 = puVar1;
  return;
}



/* Entry: 1015d8c1c; end: 1015d8c5b;  */

void FUN_1015d8c1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967c10;
  func_0x000107c61520(&UNK_10d967c10,&UNK_1103e4938);
  puRam0000000112db82f0 = puVar1;
  return;
}



/* Entry: 1015d8c5c; end: 1015d8caf;  */

long FUN_1015d8c5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015d8cb0; end: 1015d8d5f;  */

undefined8 * FUN_1015d8cb0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015d8d60; end: 1015d8da3;  */

undefined8 * FUN_1015d8d60(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015d8da4; end: 1015d8e3b;  */

int FUN_1015d8da4(int *param_1,int param_2)

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



/* Entry: 1015d8e3c; end: 1015d8e7b;  */

void FUN_1015d8e3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d967b7c;
  func_0x000107c61520(&DAT_10d967b7c,&UNK_1103e4938);
  puRam0000000112db8300 = puVar1;
  return;
}



/* Entry: 1015d8e7c; end: 1015d90f3;  */

uint FUN_1015d8e7c(void)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  long unaff_x20;
  undefined1 auStack_530 [128];
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
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
  undefined8 uStack_338;
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
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  undefined8 uStack_128;
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
  
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_1b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_198 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_188 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_190 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_178 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_180 = *(undefined8 *)(unaff_x20 + 0x60);
  FUN_1015d90f4(&uStack_b0);
  uStack_268 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_270 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_258 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_260 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_248 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_250 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_238 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_240 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_2a8 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_2b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_298 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_2a0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_288 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_290 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_278 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_280 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_208 = uStack_88;
  uStack_210 = uStack_90;
  uStack_1f8 = uStack_78;
  uStack_200 = uStack_80;
  uStack_228 = uStack_a8;
  uStack_230 = uStack_b0;
  uStack_218 = uStack_98;
  uStack_220 = uStack_a0;
  uStack_1c8 = uStack_48;
  uStack_1d0 = uStack_50;
  uStack_1b8 = uStack_38;
  uStack_1c0 = uStack_40;
  uStack_1e8 = uStack_68;
  uStack_1f0 = uStack_70;
  uStack_1d8 = uStack_58;
  uStack_1e0 = uStack_60;
  iVar1 = (int)&uStack_2b0;
  FUN_1015542cc();
  if (iVar1 == 1) {
    iVar1 = (int)&uStack_230;
    FUN_1015542cc();
    if (iVar1 == 1) {
      uStack_368 = uStack_268;
      uStack_370 = uStack_270;
      uStack_358 = uStack_258;
      uStack_360 = uStack_260;
      uStack_348 = uStack_248;
      uStack_350 = uStack_250;
      uStack_338 = uStack_238;
      uStack_340 = uStack_240;
      uStack_3a8 = uStack_2a8;
      uStack_3b0 = uStack_2b0;
      uStack_398 = uStack_298;
      uStack_3a0 = uStack_2a0;
      uStack_388 = uStack_288;
      uStack_390 = uStack_290;
      uStack_378 = uStack_278;
      uStack_380 = uStack_280;
      FUN_1015dc5ec(&uStack_1b0,&uStack_130,0x112db3e80,&UNK_10d95e3d0);
      func_0x0001015df100(&uStack_3b0,0x112db3e80,&UNK_10d95e3d0);
      uVar3 = 0;
      goto LAB_1015d90dc;
    }
  }
  else {
    uStack_3e8 = uStack_268;
    uStack_3f0 = uStack_270;
    uStack_3d8 = uStack_258;
    uStack_3e0 = uStack_260;
    uStack_3c8 = uStack_248;
    uStack_3d0 = uStack_250;
    uStack_3b8 = uStack_238;
    uStack_3c0 = uStack_240;
    uStack_428 = uStack_2a8;
    uStack_430 = uStack_2b0;
    uStack_418 = uStack_298;
    uStack_420 = uStack_2a0;
    uStack_408 = uStack_288;
    uStack_410 = uStack_290;
    uStack_3f8 = uStack_278;
    uStack_400 = uStack_280;
    iVar1 = (int)&uStack_230;
    FUN_1015542cc();
    if (iVar1 != 1) {
      uStack_468 = uStack_1e8;
      uStack_470 = uStack_1f0;
      uStack_458 = uStack_1d8;
      uStack_460 = uStack_1e0;
      uStack_448 = uStack_1c8;
      uStack_450 = uStack_1d0;
      uStack_438 = uStack_1b8;
      uStack_440 = uStack_1c0;
      uStack_4a8 = uStack_228;
      uStack_4b0 = uStack_230;
      uStack_498 = uStack_218;
      uStack_4a0 = uStack_220;
      uStack_488 = uStack_208;
      uStack_490 = uStack_210;
      uStack_478 = uStack_1f8;
      uStack_480 = uStack_200;
      uStack_348 = uStack_1c8;
      uStack_350 = uStack_1d0;
      uStack_338 = uStack_1b8;
      uStack_340 = uStack_1c0;
      uStack_368 = uStack_1e8;
      uStack_370 = uStack_1f0;
      uStack_358 = uStack_1d8;
      uStack_360 = uStack_1e0;
      uStack_388 = uStack_208;
      uStack_390 = uStack_210;
      uStack_378 = uStack_1f8;
      uStack_380 = uStack_200;
      uStack_3a8 = uStack_228;
      uStack_3b0 = uStack_230;
      uStack_398 = uStack_218;
      uStack_3a0 = uStack_220;
      uStack_e8 = uStack_3e8;
      uStack_f0 = uStack_3f0;
      uStack_d8 = uStack_3d8;
      uStack_e0 = uStack_3e0;
      uStack_c8 = uStack_3c8;
      uStack_d0 = uStack_3d0;
      uStack_b8 = uStack_3b8;
      uStack_c0 = uStack_3c0;
      uStack_128 = uStack_428;
      uStack_130 = uStack_430;
      uStack_118 = uStack_418;
      uStack_120 = uStack_420;
      uStack_108 = uStack_408;
      uStack_110 = uStack_410;
      uStack_f8 = uStack_3f8;
      uStack_100 = uStack_400;
      FUN_1015dc5ec(&uStack_1b0,auStack_530,0x112db3e80,&UNK_10d95e3d0);
      puVar2 = &uStack_130;
      FUN_1015dc304(puVar2,&uStack_3b0);
      func_0x0001015df100(&uStack_4b0,0x112db3e80,&UNK_10d95e3d0);
      func_0x0001015df100(&uStack_2b0,0x112db3e80,&UNK_10d95e3d0);
      uVar3 = (uint)puVar2 ^ 1;
      goto LAB_1015d90dc;
    }
  }
  uStack_2e8 = uStack_1e8;
  uStack_2f0 = uStack_1f0;
  uStack_2d8 = uStack_1d8;
  uStack_2e0 = uStack_1e0;
  uStack_2c8 = uStack_1c8;
  uStack_2d0 = uStack_1d0;
  uStack_2b8 = uStack_1b8;
  uStack_2c0 = uStack_1c0;
  uStack_328 = uStack_228;
  uStack_330 = uStack_230;
  uStack_318 = uStack_218;
  uStack_320 = uStack_220;
  uStack_308 = uStack_208;
  uStack_310 = uStack_210;
  uStack_2f8 = uStack_1f8;
  uStack_300 = uStack_200;
  uStack_368 = uStack_268;
  uStack_370 = uStack_270;
  uStack_358 = uStack_258;
  uStack_360 = uStack_260;
  uStack_348 = uStack_248;
  uStack_350 = uStack_250;
  uStack_338 = uStack_238;
  uStack_340 = uStack_240;
  uStack_3a8 = uStack_2a8;
  uStack_3b0 = uStack_2b0;
  uStack_398 = uStack_298;
  uStack_3a0 = uStack_2a0;
  uStack_388 = uStack_288;
  uStack_390 = uStack_290;
  uStack_378 = uStack_278;
  uStack_380 = uStack_280;
  FUN_1015dc5ec(&uStack_1b0,&uStack_130,0x112db3e80,&UNK_10d95e3d0);
  func_0x0001015df100(&uStack_3b0,0x112db8308,&UNK_10d967ca8);
  uVar3 = 1;
LAB_1015d90dc:
  return uVar3 & 1;
}



/* Entry: 1015d90f4; end: 1015d9113;  */

void FUN_1015d90f4(undefined8 *param_1)

{
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0xf000000000000000;
  return;
}



/* Entry: 1015d9114; end: 1015d918f;  */

void FUN_1015d9114(undefined8 *param_1)

{
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
  
  FUN_1015d90f4(&uStack_a0);
  param_1[0x11] = uStack_48;
  param_1[0x10] = uStack_50;
  param_1[0x13] = uStack_38;
  param_1[0x12] = uStack_40;
  param_1[0x15] = uStack_28;
  param_1[0x14] = uStack_30;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xd] = uStack_68;
  param_1[0xc] = uStack_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xf000000000000000;
  return;
}



/* Entry: 1015d9190; end: 1015d923b;  */

uint FUN_1015d9190(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015dc1d0(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 1015d923c; end: 1015d938f;  */

/* WARNING: Removing unreachable block (ram,0x0001015d9384) */

void FUN_1015d923c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
LAB_1015d9374:
          (*pcVar4)();
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_1015dd370();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1103e4d20;
          goto LAB_1015d92c0;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x1a0);
          FUN_1015dc634();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_1103e4c90;
        }
        else {
          if (lVar1 == 4) {
            pcVar4 = *(code **)(param_3 + 0x138);
            goto LAB_1015d9374;
          }
          if (lVar1 != 5) goto LAB_1015d92d4;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0xb0;
          puVar3 = &UNK_110790b00;
        }
LAB_1015d92c0:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1015d92d4:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1015d9390; end: 1015d94af;  */

void FUN_1015d9390(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar1 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar3 = uVar1 >> 0x38 & 0xf;
  }
  if (((uVar3 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar1,1,param_2,param_3), unaff_x21 == 0)) &&
     (puVar2 = unaff_x20, FUN_1015d94b0(), unaff_x21 == 0)) {
    uVar3 = unaff_x20[2];
    if (*(long *)(uVar3 + 0x10) != 0) {
      pcVar4 = *(code **)(param_3 + 0x118);
      FUN_1015dc634();
      (*pcVar4)(uVar3,3,&UNK_1103e4c90,puVar2,param_2,param_3);
    }
    if ((char)unaff_x20[3] == '\x01') {
      (**(code **)(param_3 + 0x68))(1,4,param_2,param_3);
    }
    FUN_1015d9574();
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 1015d94b0; end: 1015d9573;  */

void FUN_1015d94b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x78);
  uStack_80 = *(undefined8 *)(param_1 + 0x70);
  uStack_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  uStack_58 = *(undefined8 *)(param_1 + 0x98);
  uStack_60 = *(undefined8 *)(param_1 + 0x90);
  uStack_48 = *(undefined8 *)(param_1 + 0xa8);
  uStack_50 = *(undefined8 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  uStack_c0 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  uStack_b0 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = *(undefined8 *)(param_1 + 0x58);
  uStack_a0 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  uStack_90 = *(undefined8 *)(param_1 + 0x60);
  puVar1 = &uStack_c0;
  FUN_1015542cc();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015dd370();
    (*pcVar2)(&uStack_140,2,&UNK_1103e4d20,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d9574; end: 1015d95fb;  */

void FUN_1015d9574(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,5,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d95fc; end: 1015d95ff;  */

uint FUN_1015d95fc(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_570 [128];
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
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
  
  uVar3 = *param_1;
  if ((uVar3 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar3 & 1) != 0))
  {
    uStack_2a8 = param_1[0xf];
    uStack_2b0 = param_1[0xe];
    uStack_118 = param_1[0x11];
    uStack_120 = param_1[0x10];
    uStack_2b8 = param_1[0xd];
    uStack_2c0 = param_1[0xc];
    uStack_128 = param_1[0xf];
    uStack_130 = param_1[0xe];
    uStack_298 = param_1[0x11];
    uStack_2a0 = param_1[0x10];
    uStack_108 = param_1[0x13];
    uStack_110 = param_1[0x12];
    uStack_288 = param_1[0x13];
    uStack_290 = param_1[0x12];
    uStack_f8 = param_1[0x15];
    uStack_100 = param_1[0x14];
    uStack_168 = param_1[7];
    uStack_170 = param_1[6];
    uStack_158 = param_1[9];
    uStack_160 = param_1[8];
    uStack_148 = param_1[0xb];
    uStack_150 = param_1[10];
    uStack_138 = param_1[0xd];
    uStack_140 = param_1[0xc];
    uStack_2e8 = param_1[7];
    uStack_2f0 = param_1[6];
    uStack_2d8 = param_1[9];
    uStack_2e0 = param_1[8];
    uStack_2c8 = param_1[0xb];
    uStack_2d0 = param_1[10];
    uStack_1e8 = param_2[7];
    uStack_1f0 = param_2[6];
    uStack_258 = param_2[9];
    uStack_260 = param_2[8];
    uStack_1c8 = param_2[0xb];
    uStack_1d0 = param_2[10];
    uStack_1b8 = param_2[0xd];
    uStack_1c0 = param_2[0xc];
    uStack_1d8 = param_2[9];
    uStack_1e0 = param_2[8];
    uStack_248 = param_2[0xb];
    uStack_250 = param_2[10];
    uStack_268 = param_2[7];
    uStack_270 = param_2[6];
    uStack_218 = param_2[0x11];
    uStack_220 = param_2[0x10];
    uStack_188 = param_2[0x13];
    uStack_190 = param_2[0x12];
    uStack_208 = param_2[0x13];
    uStack_210 = param_2[0x12];
    uStack_178 = param_2[0x15];
    uStack_180 = param_2[0x14];
    uStack_238 = param_2[0xd];
    uStack_240 = param_2[0xc];
    uStack_1a8 = param_2[0xf];
    uStack_1b0 = param_2[0xe];
    uStack_228 = param_2[0xf];
    uStack_230 = param_2[0xe];
    uStack_198 = param_2[0x11];
    uStack_1a0 = param_2[0x10];
    uStack_278 = param_1[0x15];
    uStack_280 = param_1[0x14];
    uStack_1f8 = param_2[0x15];
    uStack_200 = param_2[0x14];
    iVar1 = (int)&uStack_2f0;
    FUN_1015542cc();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_270;
      FUN_1015542cc();
      if (iVar1 == 1) {
        uStack_3a8 = uStack_2a8;
        uStack_3b0 = uStack_2b0;
        uStack_398 = uStack_298;
        uStack_3a0 = uStack_2a0;
        uStack_388 = uStack_288;
        uStack_390 = uStack_290;
        uStack_378 = uStack_278;
        uStack_380 = uStack_280;
        uStack_3e8 = uStack_2e8;
        uStack_3f0 = uStack_2f0;
        uStack_3d8 = uStack_2d8;
        uStack_3e0 = uStack_2e0;
        uStack_3c8 = uStack_2c8;
        uStack_3d0 = uStack_2d0;
        uStack_3b8 = uStack_2b8;
        uStack_3c0 = uStack_2c0;
        FUN_1015dc5ec(&uStack_170,&uStack_f0,0x112db3e80,&UNK_10d95e3d0);
        FUN_1015dc5ec(&uStack_1f0,&uStack_f0,0x112db3e80,&UNK_10d95e3d0);
        func_0x0001015df100(&uStack_3f0,0x112db3e80,&UNK_10d95e3d0);
LAB_1015dce80:
        uVar3 = param_1[2];
        FUN_1015db588(uVar3,param_2[2]);
        if (((uVar3 & 1) == 0) || ((((byte)param_1[3] ^ (byte)param_2[3]) & 1) != 0))
        goto LAB_1015dd068;
        uVar9 = param_1[0x17];
        uVar3 = param_1[0x16];
        uVar6 = param_1[0x18];
        uVar10 = param_2[0x17];
        uVar8 = param_2[0x16];
        uVar7 = param_2[0x18];
        uStack_470 = uVar8;
        uStack_468 = uVar10;
        uStack_460 = uVar7;
        uStack_2f0 = uVar3;
        uStack_2e8 = uVar9;
        uStack_2e0 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar7 >> 0x3c) goto LAB_1015dcf48;
          if ((int)uVar3 == (int)uVar8) {
            FUN_1015dc5ec(&uStack_2f0,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
            FUN_1015dc5ec(&uStack_470,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
            uVar5 = uVar9;
            FUN_100e25fcc(uVar9,uVar6,uVar10,uVar7);
            func_0x0001015dc5d0(uVar8,uVar10,uVar7);
            if ((uVar5 & 1) != 0) goto LAB_1015dcf1c;
          }
          else {
            FUN_1015dc5ec(&uStack_2f0,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
            FUN_1015dc5ec(&uStack_470,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
            func_0x0001015dc5d0(uVar8,uVar10,uVar7);
          }
        }
        else {
          if (0xe < uVar7 >> 0x3c) {
            FUN_1015dc5ec(&uStack_2f0,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
            FUN_1015dc5ec(&uStack_470,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
LAB_1015dcf1c:
            func_0x0001015dc5d0(uVar3,uVar9,uVar6);
            uVar3 = param_1[4];
            FUN_100e25fcc(uVar3,param_1[5],param_2[4],param_2[5]);
            uVar2 = (uint)uVar3;
            goto LAB_1015dd06c;
          }
LAB_1015dcf48:
          FUN_1015dc5ec(&uStack_2f0,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
          FUN_1015dc5ec(&uStack_470,&uStack_4f0,0x112db80f8,&UNK_10d9671e0);
          func_0x0001015dc5d0(uVar3,uVar9,uVar6);
          uVar3 = uVar8;
          uVar9 = uVar10;
          uVar6 = uVar7;
        }
        func_0x0001015dc5d0(uVar3,uVar9,uVar6);
      }
      else {
LAB_1015dcd30:
        uStack_328 = uStack_228;
        uStack_330 = uStack_230;
        uStack_318 = uStack_218;
        uStack_320 = uStack_220;
        uStack_308 = uStack_208;
        uStack_310 = uStack_210;
        uStack_2f8 = uStack_1f8;
        uStack_300 = uStack_200;
        uStack_368 = uStack_268;
        uStack_370 = uStack_270;
        uStack_358 = uStack_258;
        uStack_360 = uStack_260;
        uStack_348 = uStack_248;
        uStack_350 = uStack_250;
        uStack_338 = uStack_238;
        uStack_340 = uStack_240;
        uStack_3a8 = uStack_2a8;
        uStack_3b0 = uStack_2b0;
        uStack_398 = uStack_298;
        uStack_3a0 = uStack_2a0;
        uStack_388 = uStack_288;
        uStack_390 = uStack_290;
        uStack_378 = uStack_278;
        uStack_380 = uStack_280;
        uStack_3e8 = uStack_2e8;
        uStack_3f0 = uStack_2f0;
        uStack_3d8 = uStack_2d8;
        uStack_3e0 = uStack_2e0;
        uStack_3c8 = uStack_2c8;
        uStack_3d0 = uStack_2d0;
        uStack_3b8 = uStack_2b8;
        uStack_3c0 = uStack_2c0;
        FUN_1015dc5ec(&uStack_170,&uStack_f0,0x112db3e80,&UNK_10d95e3d0);
        FUN_1015dc5ec(&uStack_1f0,&uStack_f0,0x112db3e80,&UNK_10d95e3d0);
        func_0x0001015df100(&uStack_3f0,0x112db8308,&UNK_10d967ca8);
      }
    }
    else {
      uStack_428 = uStack_2a8;
      uStack_430 = uStack_2b0;
      uStack_418 = uStack_298;
      uStack_420 = uStack_2a0;
      uStack_408 = uStack_288;
      uStack_410 = uStack_290;
      uStack_3f8 = uStack_278;
      uStack_400 = uStack_280;
      uStack_468 = uStack_2e8;
      uStack_470 = uStack_2f0;
      uStack_458 = uStack_2d8;
      uStack_460 = uStack_2e0;
      uStack_448 = uStack_2c8;
      uStack_450 = uStack_2d0;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      iVar1 = (int)&uStack_270;
      FUN_1015542cc();
      if (iVar1 == 1) goto LAB_1015dcd30;
      uStack_4a8 = uStack_228;
      uStack_4b0 = uStack_230;
      uStack_498 = uStack_218;
      uStack_4a0 = uStack_220;
      uStack_488 = uStack_208;
      uStack_490 = uStack_210;
      uStack_478 = uStack_1f8;
      uStack_480 = uStack_200;
      uStack_4e8 = uStack_268;
      uStack_4f0 = uStack_270;
      uStack_4d8 = uStack_258;
      uStack_4e0 = uStack_260;
      uStack_4c8 = uStack_248;
      uStack_4d0 = uStack_250;
      uStack_4b8 = uStack_238;
      uStack_4c0 = uStack_240;
      uStack_388 = uStack_208;
      uStack_390 = uStack_210;
      uStack_378 = uStack_1f8;
      uStack_380 = uStack_200;
      uStack_3a8 = uStack_228;
      uStack_3b0 = uStack_230;
      uStack_398 = uStack_218;
      uStack_3a0 = uStack_220;
      uStack_3c8 = uStack_248;
      uStack_3d0 = uStack_250;
      uStack_3b8 = uStack_238;
      uStack_3c0 = uStack_240;
      uStack_3e8 = uStack_268;
      uStack_3f0 = uStack_270;
      uStack_3d8 = uStack_258;
      uStack_3e0 = uStack_260;
      uStack_a8 = uStack_428;
      uStack_b0 = uStack_430;
      uStack_98 = uStack_418;
      uStack_a0 = uStack_420;
      uStack_88 = uStack_408;
      uStack_90 = uStack_410;
      uStack_78 = uStack_3f8;
      uStack_80 = uStack_400;
      uStack_e8 = uStack_468;
      uStack_f0 = uStack_470;
      uStack_d8 = uStack_458;
      uStack_e0 = uStack_460;
      uStack_c8 = uStack_448;
      uStack_d0 = uStack_450;
      uStack_b8 = uStack_438;
      uStack_c0 = uStack_440;
      FUN_1015dc5ec(&uStack_170,auStack_570,0x112db3e80,&UNK_10d95e3d0);
      FUN_1015dc5ec(&uStack_1f0,auStack_570,0x112db3e80,&UNK_10d95e3d0);
      puVar4 = &uStack_f0;
      FUN_1015dc304(puVar4,&uStack_3f0);
      func_0x0001015df100(&uStack_4f0,0x112db3e80,&UNK_10d95e3d0);
      func_0x0001015df100(&uStack_2f0,0x112db3e80,&UNK_10d95e3d0);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1015dce80;
    }
  }
LAB_1015dd068:
  uVar2 = 0;
LAB_1015dd06c:
  return uVar2 & 1;
}



/* Entry: 1015d9600; end: 1015d967b;  */

void FUN_1015d9600(undefined8 *param_1)

{
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
  
  FUN_1015d90f4(&uStack_a0);
  param_1[0x11] = uStack_48;
  param_1[0x10] = uStack_50;
  param_1[0x13] = uStack_38;
  param_1[0x12] = uStack_40;
  param_1[0x15] = uStack_28;
  param_1[0x14] = uStack_30;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = uStack_98;
  param_1[6] = uStack_a0;
  param_1[9] = uStack_88;
  param_1[8] = uStack_90;
  param_1[0xb] = uStack_78;
  param_1[10] = uStack_80;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[0xd] = uStack_68;
  param_1[0xc] = uStack_70;
  param_1[0xf] = uStack_58;
  param_1[0xe] = uStack_60;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xf000000000000000;
  return;
}



/* Entry: 1015d967c; end: 1015d969f;  */

undefined1  [16] FUN_1015d967c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb32c0;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Entry: 1015d96a0; end: 1015d96cf;  */

undefined1  [16] FUN_1015d96a0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1015d96d0; end: 1015d9703;  */

void FUN_1015d96d0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1015d9704; end: 1015d9717;  */

undefined1  [16] FUN_1015d9704(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1015d9714;
  return auVar1;
}



/* Entry: 1015d9718; end: 1015d972b;  */

void FUN_1015d9718(void)

{
  FUN_1015d923c();
  return;
}



/* Entry: 1015d972c; end: 1015d978b;  */

void FUN_1015d972c(void)

{
  FUN_1015d9390();
  return;
}



/* Entry: 1015d978c; end: 1015d978f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d978c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d9790; end: 1015d97c7;  */

uint FUN_1015d9790(long param_1,long param_2)

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
  func_0x0001015df094();
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



/* Entry: 1015d97c8; end: 1015d9867;  */

uint FUN_1015d97c8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  
  uVar1 = 0;
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  func_0x0001015dcb8c(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1015d9868; end: 1015d9907;  */

/* WARNING: Possible PIC construction at 0x0001015d98b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d98c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d98b8) */
/* WARNING: Removing unreachable block (ram,0x0001015d98c8) */

void FUN_1015d9868(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8318 != -1) {
    func_0x000107c61568(0x112db8318,0x1015d91f4);
  }
  uVar5 = uRam0000000113800d20;
  uVar4 = uRam0000000113800d18;
  uVar3 = uRam0000000113800d10;
  uVar2 = uRam0000000113800d08;
  uVar1 = uRam0000000113800d00;
  *param_1 = uRam0000000113800cf8;
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



/* Entry: 1015d9908; end: 1015d9943;  */

void FUN_1015d9908(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db83a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db83a8,&UNK_10d968060);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d9944; end: 1015d9a9f;  */

void FUN_1015d9944(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015d9aa0; end: 1015d9b3f;  */

uint FUN_1015d9aa0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
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
  
  uVar1 = 0;
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  func_0x0001015dcb8c(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1015d9b40; end: 1015d9b87;  */

void FUN_1015d9b40(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9680c0,0x34,2);
  uRam0000000113800d30 = uStack_38;
  uRam0000000113800d28 = uStack_40;
  uRam0000000113800d40 = uStack_28;
  uRam0000000113800d38 = uStack_30;
  uRam0000000113800d50 = uStack_18;
  uRam0000000113800d48 = uStack_20;
  return;
}



/* Entry: 1015d9b88; end: 1015d9cab;  */

/* WARNING: Removing unreachable block (ram,0x0001015d9ca8) */

void FUN_1015d9b88(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1015cabb8();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110679698;
        }
        else {
          if (lVar1 != 2) goto LAB_1015d9c10;
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_1015dd370();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_1103e4d20;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 4) goto LAB_1015d9c10;
          pcVar5 = *(code **)(param_3 + 0x60);
        }
        (*pcVar5)();
      }
LAB_1015d9c10:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1015d9cac; end: 1015d9d73;  */

void FUN_1015d9cac(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  
  FUN_1015d9d74();
  if (unaff_x21 == 0) {
    FUN_1015d9dfc();
    uVar2 = unaff_x20[1];
    uVar1 = *unaff_x20 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      (**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,3,param_2,param_3);
    }
    if (unaff_x20[2] != 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[2],4,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 1015d9d74; end: 1015d9dfb;  */

void FUN_1015d9d74(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x38);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x30);
    uStack_70 = *(undefined8 *)(param_1 + 0x28);
    uStack_50 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,1,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d9dfc; end: 1015d9ebf;  */

void FUN_1015d9dfc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x98);
  uStack_80 = *(undefined8 *)(param_1 + 0x90);
  uStack_68 = *(undefined8 *)(param_1 + 0xa8);
  uStack_70 = *(undefined8 *)(param_1 + 0xa0);
  uStack_58 = *(undefined8 *)(param_1 + 0xb8);
  uStack_60 = *(undefined8 *)(param_1 + 0xb0);
  uStack_48 = *(undefined8 *)(param_1 + 200);
  uStack_50 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x58);
  uStack_c0 = *(undefined8 *)(param_1 + 0x50);
  uStack_a8 = *(undefined8 *)(param_1 + 0x68);
  uStack_b0 = *(undefined8 *)(param_1 + 0x60);
  uStack_98 = *(undefined8 *)(param_1 + 0x78);
  uStack_a0 = *(undefined8 *)(param_1 + 0x70);
  uStack_88 = *(undefined8 *)(param_1 + 0x88);
  uStack_90 = *(undefined8 *)(param_1 + 0x80);
  puVar1 = &uStack_c0;
  FUN_1015542cc();
  if ((int)puVar1 != 1) {
    uStack_f8 = uStack_78;
    uStack_100 = uStack_80;
    uStack_e8 = uStack_68;
    uStack_f0 = uStack_70;
    uStack_d8 = uStack_58;
    uStack_e0 = uStack_60;
    uStack_c8 = uStack_48;
    uStack_d0 = uStack_50;
    uStack_138 = uStack_b8;
    uStack_140 = uStack_c0;
    uStack_128 = uStack_a8;
    uStack_130 = uStack_b0;
    uStack_118 = uStack_98;
    uStack_120 = uStack_a0;
    uStack_108 = uStack_88;
    uStack_110 = uStack_90;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_1015dd370();
    (*pcVar2)(&uStack_140,2,&UNK_1103e4d20,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 1015d9ec0; end: 1015d9f2f;  */

void FUN_1015d9ec0(undefined8 *param_1)

{
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
  
  FUN_1015d90f4(&uStack_a0);
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[0x13] = uStack_58;
  param_1[0x12] = uStack_60;
  param_1[0x15] = uStack_48;
  param_1[0x14] = uStack_50;
  param_1[0x17] = uStack_38;
  param_1[0x16] = uStack_40;
  param_1[0x19] = uStack_28;
  param_1[0x18] = uStack_30;
  param_1[0xb] = uStack_98;
  param_1[10] = uStack_a0;
  param_1[0xd] = uStack_88;
  param_1[0xc] = uStack_90;
  param_1[0xf] = uStack_78;
  param_1[0xe] = uStack_80;
  param_1[0x11] = uStack_68;
  param_1[0x10] = uStack_70;
  return;
}



/* Entry: 1015d9f30; end: 1015d9f53;  */

undefined1  [16] FUN_1015d9f30(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010efb32f0;
  auVar1._0_8_ = 0xd000000000000029;
  return auVar1;
}



/* Entry: 1015d9f54; end: 1015d9f83;  */

undefined1  [16] FUN_1015d9f54(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 1015d9f84; end: 1015d9fb7;  */

void FUN_1015d9f84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 1015d9fb8; end: 1015d9fcb;  */

undefined1  [16] FUN_1015d9fb8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1015d9fc8;
  return auVar1;
}



/* Entry: 1015d9fcc; end: 1015d9fdf;  */

void FUN_1015d9fcc(void)

{
  FUN_1015d9b88();
  return;
}



/* Entry: 1015d9fe0; end: 1015da03f;  */

void FUN_1015d9fe0(void)

{
  FUN_1015d9cac();
  return;
}



/* Entry: 1015da040; end: 1015da043;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015da040(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015da044; end: 1015da07b;  */

uint FUN_1015da044(long param_1,long param_2)

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
  func_0x0001015df054();
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



/* Entry: 1015da07c; end: 1015da11b;  */

uint FUN_1015da07c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_128;
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
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_28 = param_1[0x19];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_f8 = unaff_x20[0x19];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  FUN_1015dc674(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1015da11c; end: 1015da1bb;  */

/* WARNING: Possible PIC construction at 0x0001015da168: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015da178: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015da16c) */
/* WARNING: Removing unreachable block (ram,0x0001015da17c) */

void FUN_1015da11c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8330 != -1) {
    func_0x000107c61568(0x112db8330,FUN_1015d9b40);
  }
  uVar5 = uRam0000000113800d50;
  uVar4 = uRam0000000113800d48;
  uVar3 = uRam0000000113800d40;
  uVar2 = uRam0000000113800d38;
  uVar1 = uRam0000000113800d30;
  *param_1 = uRam0000000113800d28;
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



/* Entry: 1015da1bc; end: 1015da1f7;  */

void FUN_1015da1bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8398;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8398,&UNK_10d968058);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015da1f8; end: 1015da353;  */

void FUN_1015da1f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_38 = unaff_x20[0x19];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015da354; end: 1015da3f3;  */

uint FUN_1015da354(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_128;
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
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_f8 = param_1[0x19];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_28 = param_2[0x19];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_1015dc674(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 1015da3f4; end: 1015da43b;  */

void FUN_1015da3f4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d968070,0x42,2);
  uRam0000000113800d60 = uStack_38;
  uRam0000000113800d58 = uStack_40;
  uRam0000000113800d70 = uStack_28;
  uRam0000000113800d68 = uStack_30;
  uRam0000000113800d80 = uStack_18;
  uRam0000000113800d78 = uStack_20;
  return;
}



/* Entry: 1015da43c; end: 1015da52f;  */

/* WARNING: Removing unreachable block (ram,0x0001015da4d4) */
/* WARNING: Removing unreachable block (ram,0x0001015da500) */

void FUN_1015da43c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 3) {
      if (lVar1 == 1) {
        FUN_1015da530();
      }
      else if (lVar1 == 2) {
        FUN_1015da6fc();
      }
    }
    else if (lVar1 == 3) {
      FUN_1015da8d8();
    }
    else if (lVar1 == 4) {
      FUN_1015daab4();
    }
  }
  return;
}



/* Entry: 1015da530; end: 1015da6fb;  */

/* WARNING: Removing unreachable block (ram,0x0001015da690) */

void FUN_1015da530(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [112];
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
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
  ulong uStack_78;
  long lStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uVar6 = param_1[1];
  uVar1 = param_1[3] & 0x3000000000000000;
  puVar3 = param_1;
  if (uVar1 == 0) {
    lVar4 = param_1[2];
    uVar7 = *param_1;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_88 = param_1[0xd];
    uStack_90 = param_1[0xc];
    uStack_f0 = uVar7;
    uStack_e8 = uVar6;
    lStack_e0 = lVar4;
    uStack_d8 = param_1[3];
    func_0x000101554328(&uStack_f0,auStack_160);
    puVar3 = (undefined8 *)0x0;
    FUN_1015df0d4(0,0,0);
    uStack_80 = uVar7;
    uStack_78 = uVar6;
    lStack_70 = lVar4;
  }
  pcVar5 = *(code **)(param_4 + 0x198);
  func_0x0001015d5160();
  (*pcVar5)(&uStack_80,&UNK_110666f08,puVar3,param_3,param_4);
  lVar4 = lStack_70;
  uVar2 = uStack_78;
  uVar7 = uStack_80;
  if (unaff_x21 == 0) {
    if (lStack_70 != 0) {
      if ((uVar1 & uVar6) == 0x3000000000000000) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
      }
      else {
        pcVar5 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar4);
        (*pcVar5)(param_3,param_4);
      }
      FUN_1015df0d4(uStack_80,uStack_78,lStack_70);
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      uStack_a0 = param_1[10];
      uStack_88 = param_1[0xd];
      uStack_90 = param_1[0xc];
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      lStack_e0 = param_1[2];
      uStack_c8 = param_1[5];
      uStack_d0 = param_1[4];
      uStack_b8 = param_1[7];
      uStack_c0 = param_1[6];
      *param_1 = uVar7;
      param_1[1] = uVar2 & 0xcfffffffffffffff;
      param_1[2] = lVar4;
      param_1[3] = 0;
      func_0x0001015df100(&uStack_f0,0x112db8310,&UNK_10d967cb0);
      return;
    }
    lVar4 = 0;
  }
  FUN_1015df0d4(uStack_80,uStack_78,lVar4);
  return;
}



/* Entry: 1015da6fc; end: 1015da8d7;  */

/* WARNING: Removing unreachable block (ram,0x0001015da84c) */

void FUN_1015da6fc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [112];
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
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
  ulong uStack_78;
  long lStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uVar3 = param_1[1];
  uVar2 = param_1[3] & 0x3000000000000000;
  uVar5 = uVar2 & uVar3;
  puVar1 = param_1;
  if (uVar2 == 0x1000000000000000 && uVar5 != 0x3000000000000000) {
    lVar6 = param_1[2];
    uVar7 = *param_1;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_88 = param_1[0xd];
    uStack_90 = param_1[0xc];
    uStack_f0 = uVar7;
    uStack_e8 = uVar3;
    lStack_e0 = lVar6;
    uStack_d8 = param_1[3];
    func_0x000101554328(&uStack_f0,auStack_160);
    puVar1 = (undefined8 *)0x0;
    FUN_1015df0d4(0,0,0);
    uStack_80 = uVar7;
    uStack_78 = uVar3;
    lStack_70 = lVar6;
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x0001015d51e0();
  (*pcVar4)(&uStack_80,&UNK_1103ed2f8,puVar1,param_3,param_4);
  lVar6 = lStack_70;
  uVar2 = uStack_78;
  uVar7 = uStack_80;
  if (unaff_x21 == 0) {
    if (lStack_70 != 0) {
      if (uVar5 == 0x3000000000000000) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar6);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar6);
        (*pcVar4)(param_3,param_4);
      }
      FUN_1015df0d4(uStack_80,uStack_78,lStack_70);
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      uStack_a0 = param_1[10];
      uStack_88 = param_1[0xd];
      uStack_90 = param_1[0xc];
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      lStack_e0 = param_1[2];
      uStack_c8 = param_1[5];
      uStack_d0 = param_1[4];
      uStack_b8 = param_1[7];
      uStack_c0 = param_1[6];
      *param_1 = uVar7;
      param_1[1] = uVar2 & 0xcfffffffffffffff;
      param_1[2] = lVar6;
      param_1[3] = 0x1000000000000000;
      func_0x0001015df100(&uStack_f0,0x112db8310,&UNK_10d967cb0);
      return;
    }
    lVar6 = 0;
  }
  FUN_1015df0d4(uStack_80,uStack_78,lVar6);
  return;
}



/* Entry: 1015da8d8; end: 1015daab3;  */

/* WARNING: Removing unreachable block (ram,0x0001015daa28) */

void FUN_1015da8d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  ulong uVar2;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_160 [112];
  undefined8 uStack_f0;
  ulong uStack_e8;
  long lStack_e0;
  ulong uStack_d8;
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
  ulong uStack_78;
  long lStack_70;
  
  uStack_80 = 0;
  uStack_78 = 0;
  lStack_70 = 0;
  uVar3 = param_1[1];
  uVar2 = param_1[3] & 0x3000000000000000;
  uVar5 = uVar2 & uVar3;
  puVar1 = param_1;
  if (uVar2 == 0x2000000000000000 && uVar5 != 0x3000000000000000) {
    lVar6 = param_1[2];
    uVar7 = *param_1;
    uStack_c8 = param_1[5];
    uStack_d0 = param_1[4];
    uStack_b8 = param_1[7];
    uStack_c0 = param_1[6];
    uStack_a8 = param_1[9];
    uStack_b0 = param_1[8];
    uStack_98 = param_1[0xb];
    uStack_a0 = param_1[10];
    uStack_88 = param_1[0xd];
    uStack_90 = param_1[0xc];
    uStack_f0 = uVar7;
    uStack_e8 = uVar3;
    lStack_e0 = lVar6;
    uStack_d8 = param_1[3];
    func_0x000101554328(&uStack_f0,auStack_160);
    puVar1 = (undefined8 *)0x0;
    FUN_1015df0d4(0,0,0);
    uStack_80 = uVar7;
    uStack_78 = uVar3;
    lStack_70 = lVar6;
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x0001015d51a0();
  (*pcVar4)(&uStack_80,&UNK_1106673e8,puVar1,param_3,param_4);
  lVar6 = lStack_70;
  uVar2 = uStack_78;
  uVar7 = uStack_80;
  if (unaff_x21 == 0) {
    if (lStack_70 != 0) {
      if (uVar5 == 0x3000000000000000) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar6);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar6);
        (*pcVar4)(param_3,param_4);
      }
      FUN_1015df0d4(uStack_80,uStack_78,lStack_70);
      uStack_a8 = param_1[9];
      uStack_b0 = param_1[8];
      uStack_98 = param_1[0xb];
      uStack_a0 = param_1[10];
      uStack_88 = param_1[0xd];
      uStack_90 = param_1[0xc];
      uStack_e8 = param_1[1];
      uStack_f0 = *param_1;
      uStack_d8 = param_1[3];
      lStack_e0 = param_1[2];
      uStack_c8 = param_1[5];
      uStack_d0 = param_1[4];
      uStack_b8 = param_1[7];
      uStack_c0 = param_1[6];
      *param_1 = uVar7;
      param_1[1] = uVar2 & 0xcfffffffffffffff;
      param_1[2] = lVar6;
      param_1[3] = 0x2000000000000000;
      func_0x0001015df100(&uStack_f0,0x112db8310,&UNK_10d967cb0);
      return;
    }
    lVar6 = 0;
  }
  FUN_1015df0d4(uStack_80,uStack_78,lVar6);
  return;
}



/* Entry: 1015daab4; end: 1015dae0b;  */

/* WARNING: Removing unreachable block (ram,0x0001015dad28) */

void FUN_1015daab4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long unaff_x21;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined1 auStack_230 [112];
  undefined8 uStack_1c0;
  ulong uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  long lStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uStack_a0 = 0;
  uStack_a8 = 0;
  uStack_90 = 0;
  uStack_98 = 0;
  uStack_80 = 0;
  uStack_88 = 0;
  lStack_b0 = 1;
  uStack_78 = 0;
  uVar18 = param_1[1];
  uVar11 = param_1[3];
  uVar15 = uVar11 & 0x3000000000000000 & uVar18;
  puVar8 = param_1;
  if ((uVar11 & 0x3000000000000000) == 0x3000000000000000 && uVar15 != 0x3000000000000000) {
    uVar9 = param_1[0xc];
    uVar4 = param_1[0xd];
    uVar1 = param_1[10];
    uVar5 = param_1[0xb];
    uVar12 = param_1[9];
    uVar2 = param_1[7];
    uVar6 = param_1[8];
    uVar3 = param_1[5];
    lVar7 = param_1[6];
    uVar16 = param_1[4];
    uVar17 = param_1[2];
    uVar13 = *param_1;
    uStack_178 = 0;
    uStack_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    uStack_158 = 0;
    uStack_160 = 0;
    uStack_1b8 = 0;
    uStack_1c0 = 0;
    uStack_1a8 = 0;
    uStack_1b0 = 0;
    uStack_198 = 0;
    uStack_1a0 = 0;
    uStack_188 = 0;
    lStack_190 = 1;
    uStack_150 = uVar13;
    uStack_148 = uVar18;
    uStack_140 = uVar17;
    uStack_138 = uVar11;
    uStack_130 = uVar16;
    uStack_128 = uVar3;
    lStack_120 = lVar7;
    uStack_118 = uVar2;
    uStack_110 = uVar6;
    uStack_108 = uVar12;
    uStack_100 = uVar1;
    uStack_f8 = uVar5;
    uStack_f0 = uVar9;
    uStack_e8 = uVar4;
    func_0x000101554328(&uStack_150,auStack_230);
    puVar8 = &uStack_1c0;
    func_0x0001015df100(puVar8,0x112db81f8,&UNK_10d967498);
    uStack_e0 = uVar13;
    uStack_d8 = uVar18;
    uStack_d0 = uVar17;
    uStack_c8 = uVar11 & 0xcfffffffffffffff;
    uStack_c0 = uVar16;
    uStack_b8 = uVar3;
    lStack_b0 = lVar7;
    uStack_a8 = uVar2;
    uStack_a0 = uVar6;
    uStack_98 = uVar12;
    uStack_90 = uVar1;
    uStack_88 = uVar5;
    uStack_80 = uVar9;
    uStack_78 = uVar4;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  func_0x0001015d5320();
  (*pcVar14)(&uStack_e0,&UNK_1103e67e0,puVar8,param_3,param_4);
  uVar17 = uStack_78;
  uVar16 = uStack_80;
  uVar13 = uStack_88;
  uVar12 = uStack_90;
  uVar6 = uStack_98;
  uVar5 = uStack_a0;
  uVar4 = uStack_a8;
  lVar7 = lStack_b0;
  uVar3 = uStack_b8;
  uVar2 = uStack_c0;
  uVar18 = uStack_c8;
  uVar1 = uStack_d0;
  uVar11 = uStack_d8;
  uVar9 = uStack_e0;
  if (unaff_x21 == 0) {
    uStack_148 = uStack_d8;
    uStack_150 = uStack_e0;
    uStack_138 = uStack_c8;
    uStack_140 = uStack_d0;
    uStack_128 = uStack_b8;
    uStack_130 = uStack_c0;
    uStack_118 = uStack_a8;
    lStack_120 = lStack_b0;
    uStack_108 = uStack_98;
    uStack_110 = uStack_a0;
    uStack_f8 = uStack_88;
    uStack_100 = uStack_90;
    uStack_e8 = uStack_78;
    uStack_f0 = uStack_80;
    if (lStack_b0 != 1) {
      if (uVar15 == 0x3000000000000000) {
        uStack_178 = uStack_98;
        uStack_180 = uStack_a0;
        uStack_168 = uStack_88;
        uStack_170 = uStack_90;
        uStack_158 = uStack_78;
        uStack_160 = uStack_80;
        uStack_1b8 = uStack_d8;
        uStack_1c0 = uStack_e0;
        uStack_1a8 = uStack_c8;
        uStack_1b0 = uStack_d0;
        uStack_198 = uStack_b8;
        uStack_1a0 = uStack_c0;
        uStack_188 = uStack_a8;
        lStack_190 = lStack_b0;
        FUN_1015cad34(&uStack_1c0,auStack_230);
      }
      else {
        pcVar14 = *(code **)(param_4 + 8);
        uStack_178 = uStack_98;
        uStack_180 = uStack_a0;
        uStack_168 = uStack_88;
        uStack_170 = uStack_90;
        uStack_158 = uStack_78;
        uStack_160 = uStack_80;
        uStack_1b8 = uStack_d8;
        uStack_1c0 = uStack_e0;
        uStack_1a8 = uStack_c8;
        uStack_1b0 = uStack_d0;
        uStack_198 = uStack_b8;
        uStack_1a0 = uStack_c0;
        uStack_188 = uStack_a8;
        lStack_190 = lStack_b0;
        FUN_1015cad34(&uStack_1c0,auStack_230);
        (*pcVar14)(param_3,param_4);
      }
      func_0x0001015df100(&uStack_e0,0x112db81f8,&UNK_10d967498);
      uStack_178 = param_1[9];
      uStack_180 = param_1[8];
      uStack_168 = param_1[0xb];
      uStack_170 = param_1[10];
      uStack_158 = param_1[0xd];
      uStack_160 = param_1[0xc];
      uStack_1b8 = param_1[1];
      uStack_1c0 = *param_1;
      uStack_1a8 = param_1[3];
      uStack_1b0 = param_1[2];
      uStack_198 = param_1[5];
      uStack_1a0 = param_1[4];
      uStack_188 = param_1[7];
      lStack_190 = param_1[6];
      *param_1 = uVar9;
      param_1[1] = uVar11 & 0xcfffffffffffffff;
      param_1[2] = uVar1;
      param_1[3] = uVar18 | 0x3000000000000000;
      param_1[5] = uVar3;
      param_1[4] = uVar2;
      param_1[7] = uVar4;
      param_1[6] = lVar7;
      param_1[9] = uVar6;
      param_1[8] = uVar5;
      param_1[0xb] = uVar13;
      param_1[10] = uVar12;
      param_1[0xc] = uVar16;
      param_1[0xd] = uVar17;
      uVar9 = 0x112db8310;
      puVar10 = &UNK_10d967cb0;
      puVar8 = &uStack_1c0;
      goto LAB_1015dac84;
    }
  }
  uVar9 = 0x112db81f8;
  puVar10 = &UNK_10d967498;
  puVar8 = &uStack_e0;
LAB_1015dac84:
  func_0x0001015df100(puVar8,uVar9,puVar10);
  return;
}



/* Entry: 1015dae0c; end: 1015daebb;  */

void FUN_1015dae0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 8) & *(ulong *)(unaff_x20 + 0x18) ^ 0xffffffffffffffff) &
      0x3000000000000000) != 0) {
    uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x18) >> 0x3c) & 3;
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        FUN_1015daebc();
      }
      else {
        FUN_1015daf48();
      }
    }
    else if (uVar1 == 2) {
      FUN_1015dafe8();
    }
    else {
      FUN_1015db088();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                      param_2,param_3);
  return;
}



/* Entry: 1015daebc; end: 1015daf47;  */

void FUN_1015daebc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  if ((*(byte *)((long)param_1 + 0x1f) & 0x30) == 0) {
    uStack_50 = param_1[2];
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5160();
    (*pcVar1)(&uStack_60,1,&UNK_110666f08,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015daf48);
  (*pcVar1)();
}



/* Entry: 1015daf48; end: 1015dafe7;  */

void FUN_1015daf48(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1[1];
  if ((param_1[3] & 0x3000000000000000) == 0x1000000000000000 &&
      (param_1[3] & 0x3000000000000000 & uStack_50) != 0x3000000000000000) {
    uStack_48 = param_1[2];
    uStack_58 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d51e0();
    (*pcVar1)(&uStack_58,2,&UNK_1103ed2f8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015dafe8);
  (*pcVar1)();
}



/* Entry: 1015dafe8; end: 1015db087;  */

void FUN_1015dafe8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_58;
  ulong uStack_50;
  undefined8 uStack_48;
  
  uStack_50 = param_1[1];
  if ((param_1[3] & 0x3000000000000000) == 0x2000000000000000 &&
      (param_1[3] & 0x3000000000000000 & uStack_50) != 0x3000000000000000) {
    uStack_48 = param_1[2];
    uStack_58 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d51a0();
    (*pcVar1)(&uStack_58,3,&UNK_1106673e8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015db088);
  (*pcVar1)();
}



/* Entry: 1015db088; end: 1015db143;  */

void FUN_1015db088(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
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
  
  uStack_a8 = param_1[1];
  uVar1 = param_1[3] & 0x3000000000000000;
  if (uVar1 == 0x3000000000000000 && (uVar1 & uStack_a8) != 0x3000000000000000) {
    uStack_a0 = param_1[2];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3] & 0xcfffffffffffffff;
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_58 = param_1[0xb];
    uStack_60 = param_1[10];
    uStack_48 = param_1[0xd];
    uStack_50 = param_1[0xc];
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015d5320();
    (*pcVar2)(&uStack_b0,4,&UNK_1103e67e0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1015db144);
  (*pcVar2)();
}



/* Entry: 1015db144; end: 1015db18f;  */

void FUN_1015db144(undefined8 *param_1)

{
  param_1[1] = 0x3000000000000000;
  *param_1 = 0;
  param_1[3] = 0x3000000000000000;
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
  param_1[0xe] = 0;
  param_1[0xf] = 0xc000000000000000;
  return;
}



/* Entry: 1015db190; end: 1015db1bf;  */

undefined1  [16] FUN_1015db190(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x70);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x70),
                      *(undefined8 *)(unaff_x20 + 0x78));
  return auVar1;
}



/* Entry: 1015db1c0; end: 1015db1f3;  */

void FUN_1015db1c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  *(undefined8 *)(unaff_x20 + 0x70) = param_1;
  *(undefined8 *)(unaff_x20 + 0x78) = param_2;
  return;
}



/* Entry: 1015db1f4; end: 1015db207;  */

undefined1  [16] FUN_1015db1f4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x70;
  auVar1._0_8_ = 0x1015db204;
  return auVar1;
}



/* Entry: 1015db208; end: 1015db21b;  */

void FUN_1015db208(void)

{
  FUN_1015da43c();
  return;
}



/* Entry: 1015db21c; end: 1015db263;  */

void FUN_1015db21c(void)

{
  FUN_1015dae0c();
  return;
}



/* Entry: 1015db264; end: 1015db267;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015db264(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015db268; end: 1015db29f;  */

uint FUN_1015db268(long param_1,long param_2)

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
  FUN_1015df014();
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



/* Entry: 1015db2a0; end: 1015db30f;  */

uint FUN_1015db2a0(undefined8 *param_1)

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
  FUN_1015dc304(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1015db310; end: 1015db3af;  */

/* WARNING: Possible PIC construction at 0x0001015db35c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015db36c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015db360) */
/* WARNING: Removing unreachable block (ram,0x0001015db370) */

void FUN_1015db310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8340 != -1) {
    func_0x000107c61568(0x112db8340,FUN_1015da3f4);
  }
  uVar5 = uRam0000000113800d80;
  uVar4 = uRam0000000113800d78;
  uVar3 = uRam0000000113800d70;
  uVar2 = uRam0000000113800d68;
  uVar1 = uRam0000000113800d60;
  *param_1 = uRam0000000113800d58;
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



/* Entry: 1015db3b0; end: 1015db3eb;  */

void FUN_1015db3b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8388;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8388,&UNK_10d968050);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015db3ec; end: 1015db517;  */

void FUN_1015db3ec(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015db518; end: 1015db587;  */

uint FUN_1015db518(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015dc304(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1015db588; end: 1015dc1cf;  */

uint FUN_1015db588(long param_1,long param_2)

{
  undefined8 **ppuVar1;
  undefined8 **ppuVar2;
  undefined8 **ppuVar3;
  int iVar4;
  ulong *puVar5;
  undefined8 ***pppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long lVar9;
  ulong *puVar10;
  uint uVar11;
  ulong *puVar12;
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
  undefined8 **ppuStack_8a0;
  ulong uStack_898;
  undefined8 **ppuStack_890;
  ulong uStack_888;
  undefined8 **ppuStack_880;
  ulong uStack_878;
  undefined8 **ppuStack_870;
  ulong uStack_868;
  undefined8 **ppuStack_860;
  ulong uStack_858;
  undefined8 **ppuStack_850;
  ulong uStack_848;
  undefined8 **ppuStack_840;
  ulong uStack_838;
  undefined8 **ppuStack_820;
  ulong uStack_818;
  undefined8 **ppuStack_810;
  ulong uStack_808;
  undefined8 **ppuStack_800;
  ulong uStack_7f8;
  undefined8 **ppuStack_7f0;
  ulong uStack_7e8;
  undefined8 **ppuStack_7e0;
  ulong uStack_7d8;
  undefined8 **ppuStack_7d0;
  ulong uStack_7c8;
  undefined8 **ppuStack_7c0;
  ulong uStack_7b8;
  undefined8 **ppuStack_7b0;
  ulong uStack_7a8;
  undefined8 **ppuStack_7a0;
  ulong uStack_798;
  undefined8 **ppuStack_790;
  ulong uStack_788;
  undefined8 **ppuStack_780;
  ulong uStack_778;
  undefined8 **ppuStack_770;
  ulong uStack_768;
  undefined8 **ppuStack_760;
  ulong uStack_758;
  undefined8 **ppuStack_750;
  ulong uStack_748;
  undefined8 **ppuStack_740;
  ulong uStack_738;
  undefined8 **ppuStack_730;
  ulong uStack_728;
  undefined8 **ppuStack_720;
  ulong uStack_718;
  undefined8 **ppuStack_710;
  ulong uStack_708;
  undefined8 **ppuStack_700;
  ulong uStack_6f8;
  undefined8 **ppuStack_6f0;
  ulong uStack_6e8;
  undefined8 **ppuStack_6e0;
  ulong uStack_6d8;
  ulong uStack_6d0;
  ulong uStack_6c8;
  undefined8 **ppuStack_6c0;
  ulong uStack_6b8;
  undefined8 **ppuStack_6b0;
  ulong uStack_6a8;
  undefined8 **ppuStack_6a0;
  ulong uStack_698;
  undefined8 **ppuStack_690;
  ulong uStack_688;
  undefined8 **ppuStack_680;
  ulong uStack_678;
  undefined8 **ppuStack_670;
  ulong uStack_668;
  undefined8 **ppuStack_660;
  ulong uStack_658;
  ulong uStack_650;
  ulong uStack_648;
  undefined8 **ppuStack_640;
  ulong uStack_638;
  undefined8 **ppuStack_630;
  ulong uStack_628;
  undefined8 **ppuStack_620;
  ulong uStack_618;
  undefined8 **ppuStack_610;
  ulong uStack_608;
  undefined8 **ppuStack_600;
  ulong uStack_5f8;
  undefined8 **ppuStack_5f0;
  ulong uStack_5e8;
  undefined8 **ppuStack_5e0;
  ulong uStack_5d8;
  undefined8 **ppuStack_5d0;
  ulong uStack_5c8;
  undefined8 **ppuStack_5c0;
  ulong uStack_5b8;
  undefined8 **ppuStack_5b0;
  ulong uStack_5a8;
  undefined8 **ppuStack_5a0;
  ulong uStack_598;
  undefined8 **ppuStack_590;
  ulong uStack_588;
  undefined8 **ppuStack_580;
  ulong uStack_578;
  undefined8 **ppuStack_570;
  ulong uStack_568;
  undefined8 **ppuStack_560;
  ulong uStack_558;
  undefined8 **ppuStack_550;
  ulong uStack_548;
  undefined8 **ppuStack_540;
  ulong uStack_538;
  undefined8 **ppuStack_530;
  ulong uStack_528;
  undefined8 **ppuStack_520;
  ulong uStack_518;
  undefined8 **ppuStack_510;
  ulong uStack_508;
  undefined8 **ppuStack_500;
  ulong uStack_4f8;
  undefined8 **ppuStack_4f0;
  ulong uStack_4e8;
  undefined8 **ppuStack_4e0;
  ulong uStack_4d8;
  undefined8 **ppuStack_4d0;
  ulong uStack_4c8;
  undefined8 **ppuStack_4c0;
  ulong uStack_4b8;
  undefined8 **ppuStack_4b0;
  ulong uStack_4a8;
  undefined8 **ppuStack_4a0;
  ulong uStack_498;
  undefined8 **ppuStack_490;
  ulong uStack_488;
  undefined8 **ppuStack_480;
  ulong uStack_478;
  undefined8 **ppuStack_470;
  ulong uStack_468;
  undefined8 **ppuStack_460;
  ulong uStack_458;
  ulong uStack_450;
  ulong uStack_448;
  undefined8 **ppuStack_440;
  ulong uStack_438;
  undefined8 **ppuStack_430;
  ulong uStack_428;
  undefined8 **ppuStack_420;
  ulong uStack_418;
  undefined8 **ppuStack_410;
  ulong uStack_408;
  undefined8 **ppuStack_400;
  ulong uStack_3f8;
  undefined8 **ppuStack_3f0;
  ulong uStack_3e8;
  undefined8 **ppuStack_3e0;
  ulong uStack_3d8;
  undefined8 **ppuStack_3d0;
  ulong uStack_3c8;
  undefined8 **ppuStack_3c0;
  ulong uStack_3b8;
  undefined8 **ppuStack_3b0;
  ulong uStack_3a8;
  undefined8 **ppuStack_3a0;
  ulong uStack_398;
  undefined8 **ppuStack_390;
  ulong uStack_388;
  undefined8 **ppuStack_380;
  ulong uStack_378;
  undefined8 **ppuStack_370;
  ulong uStack_368;
  undefined8 **ppuStack_360;
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
  undefined8 **ppuStack_2f0;
  ulong uStack_2e8;
  undefined8 **ppuStack_2e0;
  ulong uStack_2d8;
  undefined8 **ppuStack_2d0;
  ulong uStack_2c8;
  undefined8 **ppuStack_2c0;
  ulong uStack_2b8;
  undefined8 **ppuStack_2b0;
  ulong uStack_2a8;
  undefined8 **ppuStack_2a0;
  ulong uStack_298;
  undefined8 **ppuStack_290;
  ulong uStack_288;
  undefined8 **ppuStack_280;
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
  undefined8 **ppuStack_220;
  ulong uStack_218;
  undefined8 **ppuStack_210;
  ulong uStack_208;
  undefined8 **ppuStack_200;
  ulong uStack_1f8;
  undefined8 **ppuStack_1f0;
  ulong uStack_1e8;
  undefined8 **ppuStack_1e0;
  ulong uStack_1d8;
  undefined8 **ppuStack_1d0;
  ulong uStack_1c8;
  undefined8 **ppuStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined8 **ppuStack_198;
  ulong uStack_190;
  undefined8 **ppuStack_188;
  ulong uStack_180;
  undefined8 **ppuStack_178;
  ulong uStack_170;
  undefined8 **ppuStack_168;
  ulong uStack_160;
  undefined8 **ppuStack_158;
  ulong uStack_150;
  undefined8 **ppuStack_148;
  ulong uStack_140;
  undefined8 **ppuStack_138;
  ulong uStack_130;
  undefined8 **ppuStack_128;
  ulong uStack_120;
  undefined8 **ppuStack_118;
  ulong uStack_110;
  undefined8 **ppuStack_108;
  ulong uStack_100;
  undefined8 **ppuStack_f8;
  ulong uStack_f0;
  undefined8 **ppuStack_e8;
  ulong uStack_e0;
  undefined8 **ppuStack_d8;
  ulong uStack_d0;
  undefined8 **ppuStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 != 0) && (param_1 != param_2)) {
      puVar10 = (ulong *)(param_1 + 0x20);
      puVar12 = (ulong *)(param_2 + 0x20);
      do {
        lVar9 = lVar9 + -1;
        uStack_298 = puVar10[0x15];
        ppuStack_2a0 = (undefined8 **)puVar10[0x14];
        uStack_288 = puVar10[0x17];
        ppuStack_290 = (undefined8 **)puVar10[0x16];
        uStack_278 = puVar10[0x19];
        ppuStack_280 = (undefined8 **)puVar10[0x18];
        uStack_2d8 = puVar10[0xd];
        ppuStack_2e0 = (undefined8 **)puVar10[0xc];
        uStack_2c8 = puVar10[0xf];
        ppuStack_2d0 = (undefined8 **)puVar10[0xe];
        uStack_2b8 = puVar10[0x11];
        ppuStack_2c0 = (undefined8 **)puVar10[0x10];
        uStack_2a8 = puVar10[0x13];
        ppuStack_2b0 = (undefined8 **)puVar10[0x12];
        uVar13 = puVar10[5];
        uStack_320 = puVar10[4];
        uVar19 = puVar10[7];
        uVar15 = puVar10[6];
        uVar20 = puVar10[9];
        uVar16 = puVar10[8];
        uStack_2e8 = puVar10[0xb];
        ppuStack_2f0 = (undefined8 **)puVar10[10];
        uStack_338 = puVar10[1];
        uStack_340 = *puVar10;
        uStack_328 = puVar10[3];
        uStack_330 = puVar10[2];
        uStack_1c8 = puVar12[0x15];
        ppuStack_1d0 = (undefined8 **)puVar12[0x14];
        uStack_1b8 = puVar12[0x17];
        ppuStack_1c0 = (undefined8 **)puVar12[0x16];
        uStack_1a8 = puVar12[0x19];
        uStack_1b0 = puVar12[0x18];
        uStack_208 = puVar12[0xd];
        ppuStack_210 = (undefined8 **)puVar12[0xc];
        uStack_1f8 = puVar12[0xf];
        ppuStack_200 = (undefined8 **)puVar12[0xe];
        uStack_1e8 = puVar12[0x11];
        ppuStack_1f0 = (undefined8 **)puVar12[0x10];
        uStack_1d8 = puVar12[0x13];
        ppuStack_1e0 = (undefined8 **)puVar12[0x12];
        uVar14 = puVar12[5];
        uStack_250 = puVar12[4];
        uVar21 = puVar12[7];
        uVar17 = puVar12[6];
        uVar22 = puVar12[9];
        uVar18 = puVar12[8];
        uStack_218 = puVar12[0xb];
        ppuStack_220 = (undefined8 **)puVar12[10];
        uStack_268 = puVar12[1];
        uStack_270 = *puVar12;
        uStack_258 = puVar12[3];
        uStack_260 = puVar12[2];
        uStack_318 = uVar13;
        uStack_310 = uVar15;
        uStack_308 = uVar19;
        uStack_300 = uVar16;
        uStack_2f8 = uVar20;
        uStack_248 = uVar14;
        uStack_240 = uVar17;
        uStack_238 = uVar21;
        uStack_230 = uVar18;
        uStack_228 = uVar22;
        if (uVar19 != 0) {
          if (uVar21 == 0) goto LAB_1015dbec8;
          uStack_88 = (undefined1)uVar17;
          uStack_b0 = (undefined1)uVar15;
          uStack_b8 = uVar13;
          uStack_a8 = uVar19;
          uStack_a0 = uVar16;
          uStack_98 = uVar20;
          uStack_90 = uVar14;
          uStack_80 = uVar21;
          uStack_78 = uVar18;
          uStack_70 = uVar22;
          func_0x00010155425c(&uStack_340,&ppuStack_440);
          func_0x00010155425c(&uStack_270,&ppuStack_440);
          func_0x000101541428(uVar13,uVar15,uVar19,uVar16,uVar20);
          func_0x000101541428(uVar14,uVar17,uVar21,uVar18,uVar22);
          puVar5 = &uStack_b8;
          func_0x00010368c758(puVar5,&uStack_90);
          FUN_101553bdc(uVar14,uVar17,uVar21,uVar18,uVar22);
          FUN_101553bdc(uVar13,uVar15,uVar19,uVar16,uVar20);
          if (((ulong)puVar5 & 1) != 0) goto LAB_1015db7b8;
LAB_1015dc198:
          func_0x000101554298(&uStack_270);
          func_0x000101554298(&uStack_340);
          goto LAB_1015dc1a8;
        }
        if (uVar21 != 0) {
LAB_1015dbec8:
          func_0x000101541428(uVar13,uVar15,uVar19,uVar16,uVar20);
          func_0x000101541428(uVar14,uVar17,uVar21,uVar18,uVar22);
          FUN_101553bdc(uVar13,uVar15,uVar19,uVar16,uVar20);
          FUN_101553bdc(uVar14,uVar17,uVar21,uVar18,uVar22);
          goto LAB_1015dc1a8;
        }
        func_0x00010155425c(&uStack_340,&ppuStack_440);
        func_0x00010155425c(&uStack_270,&ppuStack_440);
        func_0x000101541428(uVar13,uVar15,0,uVar16,uVar20);
        func_0x000101541428(uVar14,uVar17,0,uVar18,uVar22);
        FUN_101553bdc(uVar13,uVar15,0,uVar16,uVar20);
LAB_1015db7b8:
        uStack_3f8 = uStack_2a8;
        ppuStack_400 = ppuStack_2b0;
        uStack_3e8 = uStack_298;
        ppuStack_3f0 = ppuStack_2a0;
        uStack_3d8 = uStack_288;
        ppuStack_3e0 = ppuStack_290;
        uStack_3c8 = uStack_278;
        ppuStack_3d0 = ppuStack_280;
        uStack_438 = uStack_2e8;
        ppuStack_440 = ppuStack_2f0;
        uStack_428 = uStack_2d8;
        ppuStack_430 = ppuStack_2e0;
        uStack_418 = uStack_2c8;
        ppuStack_420 = ppuStack_2d0;
        uStack_408 = uStack_2b8;
        ppuStack_410 = ppuStack_2c0;
        uStack_398 = uStack_1f8;
        ppuStack_3a0 = ppuStack_200;
        uStack_388 = uStack_1e8;
        ppuStack_390 = ppuStack_1f0;
        uStack_3b8 = uStack_218;
        ppuStack_3c0 = ppuStack_220;
        uStack_3a8 = uStack_208;
        ppuStack_3b0 = ppuStack_210;
        uStack_358 = uStack_1b8;
        ppuStack_360 = ppuStack_1c0;
        uStack_348 = uStack_1a8;
        uStack_350 = uStack_1b0;
        uStack_378 = uStack_1d8;
        ppuStack_380 = ppuStack_1e0;
        uStack_368 = uStack_1c8;
        ppuStack_370 = ppuStack_1d0;
        iVar4 = (int)&ppuStack_440;
        FUN_1015542cc();
        if (iVar4 != 1) {
          uStack_578 = uStack_3f8;
          ppuStack_580 = ppuStack_400;
          uStack_568 = uStack_3e8;
          ppuStack_570 = ppuStack_3f0;
          uStack_558 = uStack_3d8;
          ppuStack_560 = ppuStack_3e0;
          uStack_548 = uStack_3c8;
          ppuStack_550 = ppuStack_3d0;
          uStack_5b8 = uStack_438;
          ppuStack_5c0 = ppuStack_440;
          uStack_5a8 = uStack_428;
          ppuStack_5b0 = ppuStack_430;
          uStack_598 = uStack_418;
          ppuStack_5a0 = ppuStack_420;
          uStack_588 = uStack_408;
          ppuStack_590 = ppuStack_410;
          iVar4 = (int)&ppuStack_3c0;
          FUN_1015542cc();
          ppuVar3 = ppuStack_3b0;
          uVar14 = uStack_3b8;
          ppuVar2 = ppuStack_3c0;
          ppuVar1 = ppuStack_5b0;
          uVar13 = uStack_5b8;
          pppuVar6 = (undefined8 ***)ppuStack_5c0;
          if (iVar4 == 1) goto LAB_1015dbf2c;
          uStack_6f8 = uStack_378;
          ppuStack_700 = ppuStack_380;
          uStack_6e8 = uStack_368;
          ppuStack_6f0 = ppuStack_370;
          uStack_6d8 = uStack_358;
          ppuStack_6e0 = ppuStack_360;
          uStack_6c8 = uStack_348;
          uStack_6d0 = uStack_350;
          uStack_738 = uStack_3b8;
          ppuStack_740 = ppuStack_3c0;
          uStack_728 = uStack_3a8;
          ppuStack_730 = ppuStack_3b0;
          uStack_718 = uStack_398;
          ppuStack_720 = ppuStack_3a0;
          uStack_708 = uStack_388;
          ppuStack_710 = ppuStack_390;
          uStack_658 = uStack_358;
          ppuStack_660 = ppuStack_360;
          uStack_648 = uStack_348;
          uStack_650 = uStack_350;
          uStack_678 = uStack_378;
          ppuStack_680 = ppuStack_380;
          uStack_668 = uStack_368;
          ppuStack_670 = ppuStack_370;
          uStack_698 = uStack_398;
          ppuStack_6a0 = ppuStack_3a0;
          uStack_688 = uStack_388;
          ppuStack_690 = ppuStack_390;
          uStack_6b8 = uStack_3b8;
          ppuStack_6c0 = ppuStack_3c0;
          uStack_6a8 = uStack_3a8;
          ppuStack_6b0 = ppuStack_3b0;
          uStack_618 = uStack_598;
          ppuStack_620 = ppuStack_5a0;
          uStack_608 = uStack_588;
          ppuStack_610 = ppuStack_590;
          uStack_638 = uStack_5b8;
          ppuStack_640 = ppuStack_5c0;
          uStack_628 = uStack_5a8;
          ppuStack_630 = ppuStack_5b0;
          uStack_5d8 = uStack_558;
          ppuStack_5e0 = ppuStack_560;
          uStack_5c8 = uStack_548;
          ppuStack_5d0 = ppuStack_550;
          uStack_5f8 = uStack_578;
          ppuStack_600 = ppuStack_580;
          uStack_5e8 = uStack_568;
          ppuStack_5f0 = ppuStack_570;
          uStack_4f8 = uStack_578;
          ppuStack_500 = ppuStack_580;
          uStack_4e8 = uStack_568;
          ppuStack_4f0 = ppuStack_570;
          uStack_4d8 = uStack_558;
          ppuStack_4e0 = ppuStack_560;
          uStack_538 = uStack_5b8;
          ppuStack_540 = ppuStack_5c0;
          uStack_528 = uStack_5a8;
          ppuStack_530 = ppuStack_5b0;
          uStack_518 = uStack_598;
          ppuStack_520 = ppuStack_5a0;
          uStack_508 = uStack_588;
          ppuStack_510 = ppuStack_590;
          uStack_4c8 = uStack_3b8;
          ppuStack_4d0 = ppuStack_3c0;
          uStack_4b8 = uStack_3a8;
          ppuStack_4c0 = ppuStack_3b0;
          uStack_478 = uStack_368;
          ppuStack_480 = ppuStack_370;
          uStack_468 = uStack_358;
          ppuStack_470 = ppuStack_360;
          uStack_498 = uStack_388;
          ppuStack_4a0 = ppuStack_390;
          uStack_488 = uStack_378;
          ppuStack_490 = ppuStack_380;
          uStack_4a8 = uStack_398;
          ppuStack_4b0 = ppuStack_3a0;
          if (((uStack_5b8 & uStack_5a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
            if (((uStack_3b8 & uStack_3a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
              uStack_858 = uStack_578;
              ppuStack_860 = ppuStack_580;
              uStack_848 = uStack_568;
              ppuStack_850 = ppuStack_570;
              uStack_838 = uStack_558;
              ppuStack_840 = ppuStack_560;
              uStack_898 = uStack_5b8;
              ppuStack_8a0 = ppuStack_5c0;
              uStack_888 = uStack_5a8;
              ppuStack_890 = ppuStack_5b0;
              uStack_878 = uStack_598;
              ppuStack_880 = ppuStack_5a0;
              uStack_868 = uStack_588;
              ppuStack_870 = ppuStack_590;
              FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
              FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
              FUN_1015dc5ec(&ppuStack_640,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
              FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
              pppuVar6 = &ppuStack_8a0;
LAB_1015dbdf8:
              func_0x0001015df100(pppuVar6,0x112db8310,&UNK_10d967cb0);
LAB_1015dbdfc:
              pppuVar6 = (undefined8 ***)ppuStack_5d0;
              FUN_100e25fcc(ppuStack_5d0,uStack_5c8,uStack_650,uStack_648);
              func_0x0001015df100(&ppuStack_740,0x112db3e80,&UNK_10d95e3d0);
              func_0x0001015df100(&ppuStack_440,0x112db3e80,&UNK_10d95e3d0);
              if (((ulong)pppuVar6 & 1) == 0) goto LAB_1015dc198;
              goto LAB_1015dbe38;
            }
LAB_1015dbfec:
            uStack_778 = uStack_388;
            ppuStack_780 = ppuStack_390;
            uStack_768 = uStack_378;
            ppuStack_770 = ppuStack_380;
            uStack_758 = uStack_368;
            ppuStack_760 = ppuStack_370;
            uStack_748 = uStack_358;
            ppuStack_750 = ppuStack_360;
            uStack_7b8 = uStack_558;
            ppuStack_7c0 = ppuStack_560;
            uStack_7a8 = uStack_3b8;
            ppuStack_7b0 = ppuStack_3c0;
            uStack_798 = uStack_3a8;
            ppuStack_7a0 = ppuStack_3b0;
            uStack_788 = uStack_398;
            ppuStack_790 = ppuStack_3a0;
            uStack_7f8 = uStack_598;
            ppuStack_800 = ppuStack_5a0;
            uStack_7e8 = uStack_588;
            ppuStack_7f0 = ppuStack_590;
            uStack_7d8 = uStack_578;
            ppuStack_7e0 = ppuStack_580;
            uStack_7c8 = uStack_568;
            ppuStack_7d0 = ppuStack_570;
            uStack_818 = uStack_5b8;
            ppuStack_820 = ppuStack_5c0;
            uStack_808 = uStack_5a8;
            ppuStack_810 = ppuStack_5b0;
            FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_8a0,0x112db3e80,&UNK_10d95e3d0);
            FUN_1015dc5ec(&ppuStack_220,&ppuStack_8a0,0x112db3e80,&UNK_10d95e3d0);
            FUN_1015dc5ec(&ppuStack_640,&ppuStack_8a0,0x112db8310,&UNK_10d967cb0);
            FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_8a0,0x112db8310,&UNK_10d967cb0);
            func_0x0001015df100(&ppuStack_820,0x112db83b8,&UNK_10d9680f8);
          }
          else {
            if (((uStack_3b8 & uStack_3a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0)
            goto LAB_1015dbfec;
            uStack_898 = uStack_3b8;
            ppuStack_8a0 = ppuStack_3c0;
            uStack_888 = uStack_3a8;
            ppuStack_890 = ppuStack_3b0;
            uStack_878 = uStack_398;
            ppuStack_880 = ppuStack_3a0;
            uStack_868 = uStack_388;
            ppuStack_870 = ppuStack_390;
            uStack_858 = uStack_378;
            ppuStack_860 = ppuStack_380;
            uStack_848 = uStack_368;
            ppuStack_850 = ppuStack_370;
            uStack_838 = uStack_358;
            ppuStack_840 = ppuStack_360;
            uVar11 = (uint)(uStack_5a8 >> 0x3c) & 3;
            if (uVar11 < 2) {
              if (uVar11 != 0) {
                if ((uStack_3a8 & 0x3000000000000000) == 0x1000000000000000) {
                  FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
                  FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
                  FUN_1015dc5ec(&ppuStack_640,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
                  FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
                  FUN_101646fd8(pppuVar6,uVar13,ppuVar1,ppuVar2,uVar14,ppuVar3);
                  goto LAB_1015dbdd0;
                }
LAB_1015dc0c8:
                FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
                FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
                FUN_1015dc5ec(&ppuStack_640,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
                FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
                func_0x0001015df100(&ppuStack_8a0,0x112db8310,&UNK_10d967cb0);
                goto LAB_1015dc150;
              }
              if ((uStack_3a8 & 0x3000000000000000) != 0) goto LAB_1015dc0c8;
              FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
              FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
              FUN_1015dc5ec(&ppuStack_640,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
              FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
              func_0x000103586e1c(pppuVar6,uVar13,ppuVar1,ppuVar2,uVar14,ppuVar3);
              func_0x0001015df100(&ppuStack_8a0,0x112db8310,&UNK_10d967cb0);
              func_0x0001015df100(&ppuStack_540,0x112db8310,&UNK_10d967cb0);
              if (((ulong)pppuVar6 & 1) != 0) goto LAB_1015dbdfc;
            }
            else {
              if (uVar11 != 2) {
                uStack_180 = uStack_5a8 & 0xcfffffffffffffff;
                ppuStack_198 = ppuStack_5c0;
                uStack_190 = uStack_5b8;
                ppuStack_188 = ppuStack_5b0;
                uStack_170 = uStack_598;
                ppuStack_178 = ppuStack_5a0;
                uStack_160 = uStack_588;
                ppuStack_168 = ppuStack_590;
                uStack_150 = uStack_578;
                ppuStack_158 = ppuStack_580;
                uStack_140 = uStack_568;
                ppuStack_148 = ppuStack_570;
                uStack_130 = uStack_558;
                ppuStack_138 = ppuStack_560;
                if (((uStack_3a8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
                  uStack_110 = uStack_3a8 & 0xcfffffffffffffff;
                  ppuStack_128 = ppuStack_3c0;
                  uStack_120 = uStack_3b8;
                  ppuStack_118 = ppuStack_3b0;
                  uStack_100 = uStack_398;
                  ppuStack_108 = ppuStack_3a0;
                  uStack_f0 = uStack_388;
                  ppuStack_f8 = ppuStack_390;
                  uStack_e0 = uStack_378;
                  ppuStack_e8 = ppuStack_380;
                  uStack_d0 = uStack_368;
                  ppuStack_d8 = ppuStack_370;
                  uStack_c0 = uStack_358;
                  ppuStack_c8 = ppuStack_360;
                  FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
                  FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
                  FUN_1015dc5ec(&ppuStack_640,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
                  FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
                  pppuVar6 = &ppuStack_198;
                  FUN_1015f50d8(pppuVar6,&ppuStack_128);
                  goto LAB_1015dbdd0;
                }
                goto LAB_1015dc0c8;
              }
              if ((uStack_3a8 & 0x3000000000000000) != 0x2000000000000000) goto LAB_1015dc0c8;
              FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
              FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
              FUN_1015dc5ec(&ppuStack_640,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
              FUN_1015dc5ec(&ppuStack_6c0,&ppuStack_820,0x112db8310,&UNK_10d967cb0);
              func_0x00010358db24(pppuVar6,uVar13,ppuVar1,ppuVar2,uVar14,ppuVar3);
LAB_1015dbdd0:
              func_0x0001015df100(&ppuStack_8a0,0x112db8310,&UNK_10d967cb0);
              if (((ulong)pppuVar6 & 1) != 0) {
                pppuVar6 = &ppuStack_540;
                goto LAB_1015dbdf8;
              }
LAB_1015dc150:
              func_0x0001015df100(&ppuStack_540,0x112db8310,&UNK_10d967cb0);
            }
          }
          func_0x0001015df100(&ppuStack_740,0x112db3e80,&UNK_10d95e3d0);
          uVar7 = 0x112db3e80;
          puVar8 = &UNK_10d95e3d0;
          pppuVar6 = &ppuStack_440;
LAB_1015dc194:
          func_0x0001015df100(pppuVar6,uVar7,puVar8);
          goto LAB_1015dc198;
        }
        iVar4 = (int)&ppuStack_3c0;
        FUN_1015542cc();
        if (iVar4 != 1) {
LAB_1015dbf2c:
          uStack_478 = uStack_378;
          ppuStack_480 = ppuStack_380;
          uStack_468 = uStack_368;
          ppuStack_470 = ppuStack_370;
          uStack_458 = uStack_358;
          ppuStack_460 = ppuStack_360;
          uStack_448 = uStack_348;
          uStack_450 = uStack_350;
          uStack_4a8 = uStack_3a8;
          ppuStack_4b0 = ppuStack_3b0;
          uStack_498 = uStack_398;
          ppuStack_4a0 = ppuStack_3a0;
          uStack_488 = uStack_388;
          ppuStack_490 = ppuStack_390;
          uStack_4f8 = uStack_3f8;
          ppuStack_500 = ppuStack_400;
          uStack_4e8 = uStack_3e8;
          ppuStack_4f0 = ppuStack_3f0;
          uStack_4d8 = uStack_3d8;
          ppuStack_4e0 = ppuStack_3e0;
          uStack_4c8 = uStack_3c8;
          ppuStack_4d0 = ppuStack_3d0;
          uStack_4b8 = uStack_3b8;
          ppuStack_4c0 = ppuStack_3c0;
          uStack_538 = uStack_438;
          ppuStack_540 = ppuStack_440;
          uStack_528 = uStack_428;
          ppuStack_530 = ppuStack_430;
          uStack_518 = uStack_418;
          ppuStack_520 = ppuStack_420;
          uStack_508 = uStack_408;
          ppuStack_510 = ppuStack_410;
          FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
          FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
          uVar7 = 0x112db8308;
          puVar8 = &UNK_10d967ca8;
          pppuVar6 = &ppuStack_540;
          goto LAB_1015dc194;
        }
        uStack_4f8 = uStack_3f8;
        ppuStack_500 = ppuStack_400;
        uStack_4e8 = uStack_3e8;
        ppuStack_4f0 = ppuStack_3f0;
        uStack_4d8 = uStack_3d8;
        ppuStack_4e0 = ppuStack_3e0;
        uStack_4c8 = uStack_3c8;
        ppuStack_4d0 = ppuStack_3d0;
        uStack_538 = uStack_438;
        ppuStack_540 = ppuStack_440;
        uStack_528 = uStack_428;
        ppuStack_530 = ppuStack_430;
        uStack_518 = uStack_418;
        ppuStack_520 = ppuStack_420;
        uStack_508 = uStack_408;
        ppuStack_510 = ppuStack_410;
        FUN_1015dc5ec(&ppuStack_2f0,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
        FUN_1015dc5ec(&ppuStack_220,&ppuStack_820,0x112db3e80,&UNK_10d95e3d0);
        func_0x0001015df100(&ppuStack_540,0x112db3e80,&UNK_10d95e3d0);
LAB_1015dbe38:
        if ((((uStack_340 != uStack_270) || (uStack_338 != uStack_268)) &&
            (uVar13 = uStack_340, func_0x000107c605b8(), (uVar13 & 1) == 0)) ||
           (uStack_330 != uStack_260)) goto LAB_1015dc198;
        uVar13 = uStack_328;
        FUN_100e25fcc(uStack_328,uStack_320,uStack_258,uStack_250);
        uVar11 = (uint)uVar13;
        func_0x000101554298(&uStack_270);
        func_0x000101554298(&uStack_340);
        if (((uVar13 & 1) == 0) || (lVar9 == 0)) goto LAB_1015dc1ac;
        puVar10 = puVar10 + 0x1a;
        puVar12 = puVar12 + 0x1a;
      } while( true );
    }
    uVar11 = 1;
  }
  else {
LAB_1015dc1a8:
    uVar11 = 0;
  }
LAB_1015dc1ac:
  return uVar11 & 1;
}



/* Entry: 1015dc1d0; end: 1015dc303;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015dc1d0(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte **ppbVar11;
  ulong uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  uint uVar24;
  byte *pbVar25;
  byte *unaff_x19;
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
  long lStack_f0;
  long lStack_e8;
  long lStack_e0;
  ulong uStack_d8;
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
  byte *pbStack_80;
  byte *pbStack_78;
  ulong uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  pbVar10 = (byte *)*param_1;
  pbVar26 = (byte *)param_1[1];
  uVar21 = param_1[2];
  uVar24 = (uint)((ulong)param_1[3] >> 0x3c) & 3;
  if (uVar24 < 2) {
    if (uVar24 == 0) {
      if ((*(byte *)((long)param_2 + 0x1f) & 0x30) == 0) {
        uVar16 = param_2[1];
        uVar23 = param_2[2];
        lVar17 = *param_2;
        if (uVar21 != uVar23) {
          func_0x000107c6157c(uVar21);
          func_0x000107c6157c(uVar23);
          uVar12 = uVar21;
          func_0x000103586ecc(uVar21,uVar23);
          func_0x000107c61574(uVar23);
          func_0x000107c61574(uVar21);
          if ((uVar12 & 1) == 0) {
            return (byte *)0x0;
          }
        }
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
          uVar24 = (uint)((ulong)pbVar26 >> 0x20);
          uVar19 = uVar24 >> 0x1e;
          uVar4 = (uint)(uVar16 >> 0x20);
          uVar22 = uVar4 >> 0x1e;
          iVar6 = (int)pbVar10;
          pbVar13 = pbVar26;
          if ((ulong)pbVar26 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar17 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
            pbVar7 = (byte *)0x1;
          }
          else if (uVar24 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar6)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar5)();
              }
              uVar21 = (ulong)(iVar20 - iVar6);
            }
joined_r0x000100e26170:
            if (1 < uVar4 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar22 == 0) {
              uVar23 = uVar16 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar20 = (int)((ulong)lVar17 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar17)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar5)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar17)) goto LAB_100e26094;
LAB_100e26154:
            pbVar7 = (byte *)0x0;
          }
          else {
            if (uVar19 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar5)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar22 == 2) {
              uVar23 = *(long *)(lVar17 + 0x18) - *(long *)(lVar17 + 0x10);
              if (SBORROW8(*(long *)(lVar17 + 0x18),*(long *)(lVar17 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar5)();
              }
LAB_100e2608c:
              if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar21 < 1) goto LAB_100e26128;
              if (uVar19 < 2) {
                if (uVar19 == 0) {
                  *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                  *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                  *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                  *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                  *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                  *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                  *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                  *(char *)((long)register0x00000008 + -0x68) = (char)pbVar26;
                  *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar26 >> 8);
                  *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar26 >> 0x10);
                  *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar26 >> 0x18);
                  *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar26 >> 0x20);
                  *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar26 >> 0x28);
                  pbVar13 = (byte *)((long)register0x00000008 +
                                    (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                  unaff_x21 = 0;
                  FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
                  pbVar7 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                  goto LAB_100e262b0;
                }
                unaff_x25 = (byte *)(long)iVar6;
                unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                  (*pcVar5)();
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
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26300);
                    (*pcVar5)();
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
                if (uVar19 != 2) {
                  *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                  *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                  pbVar13 = (byte *)((long)register0x00000008 + -0x70);
                  goto LAB_100e26260;
                }
                lVar27 = *(long *)(pbVar10 + 0x10);
                unaff_x24 = *(byte **)(pbVar10 + 0x18);
                func_0x000107c5ec30();
                pbVar13 = pbVar10;
                if (pbVar10 != (byte *)0x0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar27,(long)pbVar13)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                    (*pcVar5)();
                  }
                  pbVar10 = pbVar10 + (lVar27 - (long)pbVar13);
                }
                unaff_x23 = unaff_x24 + -lVar27;
                if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                  (*pcVar5)();
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
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar13,lVar17,
                            uVar16);
              pbVar7 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
              unaff_x22 = uVar16;
            }
            else {
              pbVar7 = (byte *)(ulong)(uVar21 == 0);
            }
          }
LAB_100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            return pbVar7;
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
          pbVar9 = *(byte **)pbVar7;
          pbVar10 = *(byte **)(pbVar7 + 8);
          pbVar25 = *(byte **)(pbVar7 + 0x18);
          bVar28 = pbVar7[0x28];
          pbVar26 = (byte *)((ulong)*(uint *)(pbVar7 + 0x11) << 8 |
                             (ulong)*(uint3 *)(pbVar7 + 0x15) << 0x28 | (ulong)pbVar7[0x10]);
          pbVar14 = pbVar10;
          if (bVar28 < 3) {
            if (bVar28 == 0) {
              if (pbVar13[0x28] == 0) {
                lVar17 = *(long *)pbVar13;
                uVar8 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar9,lVar17,uVar8);
                return (byte *)(ulong)((uint)pbVar9 & 1);
              }
              return (byte *)0x0;
            }
            if (bVar28 == 1) {
              if (pbVar13[0x28] != 1) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar18 = *(byte **)(pbVar13 + 0x10);
              lVar17 = *(long *)pbVar13;
              uVar8 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar9,lVar17,uVar8);
              if (((ulong)pbVar9 & 1) == 0) {
                return (byte *)0x0;
              }
              pbVar9 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 == pbVar15) && (pbVar26 == pbVar18)) {
                return (byte *)0x1;
              }
            }
            else {
              if (pbVar13[0x28] != 2) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar18 = *(byte **)(pbVar13 + 8);
              lVar17 = *(long *)(pbVar13 + 0x18);
              if ((pbVar9 == pbVar15) && (pbVar10 == pbVar18)) {
                if (((pbVar7[0x10] ^ pbVar13[0x10]) & 1) != 0) {
                  return (byte *)0x0;
                }
                if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                if (lVar17 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar17);
                func_0x000107c61174();
                pbVar10 = pbVar25;
                func_0x000107c60118();
                func_0x000107c61170(pbVar25);
                func_0x000107c61170(lVar17);
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
            )(pbVar9,pbVar14,pbVar15,pbVar18,0);
            return pbVar9;
          }
          lVar27 = *(long *)(pbVar7 + 0x20);
          if (bVar28 < 5) {
            if (bVar28 != 3) {
              if (pbVar13[0x28] != 4) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)pbVar13;
              pbVar18 = *(byte **)(pbVar13 + 8);
              if (((pbVar9 == pbVar15) && (pbVar10 == pbVar18)) &&
                 (pbVar9 = pbVar26, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
                 pbVar18 = *(byte **)(pbVar13 + 0x18),
                 pbVar26 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
                return (byte *)0x1;
              }
              goto code_r0x000107c605b8;
            }
            if (pbVar13[0x28] != 3) {
              return (byte *)0x0;
            }
            if ((uint)*pbVar13 != ((uint)pbVar9 & 0xff)) {
              return (byte *)0x0;
            }
            pbVar18 = *(byte **)(pbVar13 + 0x10);
            lVar17 = *(long *)(pbVar13 + 0x20);
            if (pbVar26 == (byte *)0x0) {
              if (pbVar18 != (byte *)0x0) {
                return (byte *)0x0;
              }
            }
            else {
              if (pbVar18 == (byte *)0x0) {
                return (byte *)0x0;
              }
              pbVar15 = *(byte **)(pbVar13 + 8);
              pbVar9 = pbVar10;
              pbVar14 = pbVar26;
              if ((pbVar10 != pbVar15) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
            }
            if (lVar27 != 0) {
              if (lVar17 == 0) {
                return (byte *)0x0;
              }
              if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar27 == lVar17)) {
                return (byte *)0x1;
              }
              func_0x000107c605b8(pbVar25,lVar27,*(byte **)(pbVar13 + 0x18),lVar17,0);
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar17 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if (bVar28 != 5) {
            if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar9 == (byte *)0x0) &&
                lVar27 == 0) && pbVar26 == (byte *)0x0) {
              if (pbVar13[0x28] != 6) {
                return (byte *)0x0;
              }
              lVar27 = *(long *)(pbVar13 + 0x20);
              lVar17 = *(long *)(pbVar13 + 0x18);
              bVar28 = pbVar13[8] | (byte)lVar17;
              bVar29 = pbVar13[9] | (byte)((ulong)lVar17 >> 8);
              bVar30 = pbVar13[10] | (byte)((ulong)lVar17 >> 0x10);
              bVar31 = pbVar13[0xb] | (byte)((ulong)lVar17 >> 0x18);
              bVar32 = pbVar13[0xc] | (byte)((ulong)lVar17 >> 0x20);
              bVar33 = pbVar13[0xd] | (byte)((ulong)lVar17 >> 0x28);
              bVar34 = pbVar13[0xe] | (byte)((ulong)lVar17 >> 0x30);
              bVar35 = pbVar13[0xf] | (byte)((ulong)lVar17 >> 0x38);
              bVar36 = pbVar13[0x10] | (byte)lVar27;
              bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
              bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
              bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
              bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
              bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
              bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
              bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
              auVar44 = NEON_ext(auVar44,auVar3,8,1);
              if (CONCAT17(bVar35 | auVar44[7],
                           CONCAT16(bVar34 | auVar44[6],
                                    CONCAT15(bVar33 | auVar44[5],
                                             CONCAT14(bVar32 | auVar44[4],
                                                      CONCAT13(bVar31 | auVar44[3],
                                                               CONCAT12(bVar30 | auVar44[2],
                                                                        CONCAT11(bVar29 | auVar44[1]
                                                                                 ,bVar28 | auVar44[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if ((pbVar9 == (byte *)0x1) &&
               (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
                lVar27 == 0)) {
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
            lVar27 = *(long *)(pbVar13 + 0x20);
            lVar17 = *(long *)(pbVar13 + 0x18);
            bVar28 = pbVar13[8] | (byte)lVar17;
            bVar29 = pbVar13[9] | (byte)((ulong)lVar17 >> 8);
            bVar30 = pbVar13[10] | (byte)((ulong)lVar17 >> 0x10);
            bVar31 = pbVar13[0xb] | (byte)((ulong)lVar17 >> 0x18);
            bVar32 = pbVar13[0xc] | (byte)((ulong)lVar17 >> 0x20);
            bVar33 = pbVar13[0xd] | (byte)((ulong)lVar17 >> 0x28);
            bVar34 = pbVar13[0xe] | (byte)((ulong)lVar17 >> 0x30);
            bVar35 = pbVar13[0xf] | (byte)((ulong)lVar17 >> 0x38);
            bVar36 = pbVar13[0x10] | (byte)lVar27;
            bVar37 = pbVar13[0x11] | (byte)((ulong)lVar27 >> 8);
            bVar38 = pbVar13[0x12] | (byte)((ulong)lVar27 >> 0x10);
            bVar39 = pbVar13[0x13] | (byte)((ulong)lVar27 >> 0x18);
            bVar40 = pbVar13[0x14] | (byte)((ulong)lVar27 >> 0x20);
            bVar41 = pbVar13[0x15] | (byte)((ulong)lVar27 >> 0x28);
            bVar42 = pbVar13[0x16] | (byte)((ulong)lVar27 >> 0x30);
            bVar43 = pbVar13[0x17] | (byte)((ulong)lVar27 >> 0x38);
            auVar1[1] = bVar29;
            auVar1[0] = bVar28;
            auVar1[2] = bVar30;
            auVar1[3] = bVar31;
            auVar1[4] = bVar32;
            auVar1[5] = bVar33;
            auVar1[6] = bVar34;
            auVar1[7] = bVar35;
            auVar1[8] = bVar36;
            auVar1[9] = bVar37;
            auVar1[10] = bVar38;
            auVar1[0xb] = bVar39;
            auVar1[0xc] = bVar40;
            auVar1[0xd] = bVar41;
            auVar1[0xe] = bVar42;
            auVar1[0xf] = bVar43;
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
            auVar44 = NEON_ext(auVar1,auVar2,8,1);
            lVar17 = CONCAT17(bVar35 | auVar44[7],
                              CONCAT16(bVar34 | auVar44[6],
                                       CONCAT15(bVar33 | auVar44[5],
                                                CONCAT14(bVar32 | auVar44[4],
                                                         CONCAT13(bVar31 | auVar44[3],
                                                                  CONCAT12(bVar30 | auVar44[2],
                                                                           CONCAT11(bVar29 | auVar44
                                                  [1],bVar28 | auVar44[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar17 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar27 = *(long *)pbVar13;
          uVar8 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar9,lVar27,uVar8);
          if (((ulong)pbVar9 & 1) == 0) {
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
    else if ((param_2[3] & 0x3000000000000000U) == 0x1000000000000000) {
      uVar16 = param_2[1];
      uVar23 = param_2[2];
      lVar17 = *param_2;
      if (uVar21 != uVar23) {
        func_0x000107c6157c(uVar21);
        func_0x000107c6157c(uVar23);
        uVar12 = uVar21;
        FUN_101647088(uVar21,uVar23);
        func_0x000107c61574(uVar23);
        func_0x000107c61574(uVar21);
        if ((uVar12 & 1) == 0) {
          return (byte *)0x0;
        }
      }
      goto FUN_100e25fcc;
    }
  }
  else if (uVar24 == 2) {
    if ((param_2[3] & 0x3000000000000000U) == 0x2000000000000000) {
      uVar16 = param_2[1];
      uVar23 = param_2[2];
      lVar17 = *param_2;
      if (uVar21 != uVar23) {
        func_0x000107c6157c(uVar21);
        func_0x000107c6157c(uVar23);
        uVar12 = uVar21;
        func_0x00010358dbd4(uVar21,uVar23);
        func_0x000107c61574(uVar23);
        func_0x000107c61574(uVar21);
        if ((uVar12 & 1) == 0) {
          return (byte *)0x0;
        }
      }
      goto FUN_100e25fcc;
    }
  }
  else {
    uStack_68 = param_1[3] & 0xcfffffffffffffff;
    uStack_58 = param_1[5];
    uStack_60 = param_1[4];
    if (((param_2[3] ^ 0xffffffffffffffffU) & 0x3000000000000000) == 0) {
      lStack_e0 = param_2[2];
      uStack_d8 = param_2[3] & 0xcfffffffffffffff;
      lStack_e8 = param_2[1];
      lStack_f0 = *param_2;
      lStack_c8 = param_2[5];
      lStack_d0 = param_2[4];
      lStack_c0 = param_2[6];
      lStack_b8 = param_2[7];
      lStack_a8 = param_2[9];
      lStack_b0 = param_2[8];
      lStack_a0 = param_2[10];
      lStack_98 = param_2[0xb];
      lStack_88 = param_2[0xd];
      lStack_90 = param_2[0xc];
      ppbVar11 = &pbStack_80;
      pbStack_80 = pbVar10;
      pbStack_78 = pbVar26;
      uStack_70 = uVar21;
      FUN_1015f50d8(ppbVar11,&lStack_f0);
      uVar24 = (uint)ppbVar11;
      goto LAB_1015dc2f4;
    }
  }
  uVar24 = 0;
LAB_1015dc2f4:
  return (byte *)(ulong)(uVar24 & 1);
}



/* Entry: 1015dc304; end: 1015dc5b3;  */

uint FUN_1015dc304(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar4;
  undefined1 auStack_430 [112];
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
  ulong uStack_348;
  undefined8 uStack_340;
  ulong uStack_338;
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
  ulong uStack_2d8;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
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
  ulong uStack_268;
  undefined8 uStack_260;
  ulong uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
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
  undefined8 uStack_128;
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
  undefined8 uVar3;
  
  uStack_238 = param_1[7];
  uStack_240 = param_1[6];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_228 = param_1[9];
  uStack_230 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_218 = param_1[0xb];
  uStack_220 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_268 = param_1[1];
  uStack_270 = *param_1;
  uStack_258 = param_1[3];
  uStack_260 = param_1[2];
  uStack_248 = param_1[5];
  uStack_250 = param_1[4];
  uStack_188 = param_2[1];
  uStack_190 = *param_2;
  uStack_178 = param_2[3];
  uStack_180 = param_2[2];
  uStack_288 = param_2[0xb];
  uStack_290 = param_2[10];
  uStack_128 = param_2[0xd];
  uStack_130 = param_2[0xc];
  uStack_2a8 = param_2[7];
  uStack_2b0 = param_2[6];
  uStack_148 = param_2[9];
  uStack_150 = param_2[8];
  uStack_298 = param_2[9];
  uStack_2a0 = param_2[8];
  uStack_138 = param_2[0xb];
  uStack_140 = param_2[10];
  uStack_168 = param_2[5];
  uStack_170 = param_2[4];
  uStack_158 = param_2[7];
  uStack_160 = param_2[6];
  uStack_2d8 = param_2[1];
  uStack_2e0 = *param_2;
  uStack_2c8 = param_2[3];
  uStack_2d0 = param_2[2];
  uStack_2b8 = param_2[5];
  uStack_2c0 = param_2[4];
  uStack_208 = param_1[0xd];
  uStack_210 = param_1[0xc];
  uStack_278 = param_2[0xd];
  uStack_280 = param_2[0xc];
  uVar4 = uStack_2d8 & uStack_2c8 & 0x3000000000000000;
  uStack_200 = uStack_2e0;
  uStack_1f8 = uStack_2d8;
  uStack_1f0 = uStack_2d0;
  uStack_1e8 = uStack_2c8;
  uStack_1e0 = uStack_2c0;
  uStack_1d8 = uStack_2b8;
  uStack_1d0 = uStack_2b0;
  uStack_1c8 = uStack_2a8;
  uStack_1c0 = uStack_2a0;
  uStack_1b8 = uStack_298;
  uStack_1b0 = uStack_290;
  uStack_1a8 = uStack_288;
  uStack_1a0 = uStack_280;
  uStack_198 = uStack_278;
  if (((uStack_268 & uStack_258 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) {
    if (uVar4 == 0x3000000000000000) {
      uStack_308 = param_1[9];
      uStack_310 = param_1[8];
      uStack_2f8 = param_1[0xb];
      uStack_300 = param_1[10];
      uStack_2e8 = param_1[0xd];
      uStack_2f0 = param_1[0xc];
      uStack_348 = param_1[1];
      uStack_350 = *param_1;
      uStack_338 = param_1[3];
      uStack_340 = param_1[2];
      uStack_328 = param_1[5];
      uStack_330 = param_1[4];
      uStack_318 = param_1[7];
      uStack_320 = param_1[6];
      FUN_1015dc5ec(&uStack_120,&uStack_b0,0x112db8310,&UNK_10d967cb0);
      FUN_1015dc5ec(&uStack_190,&uStack_b0,0x112db8310,&UNK_10d967cb0);
      func_0x0001015df100(&uStack_350,0x112db8310,&UNK_10d967cb0);
LAB_1015dc58c:
      uVar3 = param_1[0xe];
      FUN_100e25fcc(uVar3,param_1[0xf],param_2[0xe],param_2[0xf]);
      uVar1 = (uint)uVar3;
      goto LAB_1015dc598;
    }
LAB_1015dc444:
    uStack_350 = uStack_270;
    uStack_348 = uStack_268;
    uStack_340 = uStack_260;
    uStack_338 = uStack_258;
    uStack_330 = uStack_250;
    uStack_328 = uStack_248;
    uStack_320 = uStack_240;
    uStack_318 = uStack_238;
    uStack_310 = uStack_230;
    uStack_308 = uStack_228;
    uStack_300 = uStack_220;
    uStack_2f8 = uStack_218;
    uStack_2f0 = uStack_210;
    uStack_2e8 = uStack_208;
    FUN_1015dc5ec(&uStack_120,&uStack_b0,0x112db8310,&UNK_10d967cb0);
    FUN_1015dc5ec(&uStack_190,&uStack_b0,0x112db8310,&UNK_10d967cb0);
    func_0x0001015df100(&uStack_350,0x112db83b8,&UNK_10d9680f8);
  }
  else {
    if (uVar4 == 0x3000000000000000) goto LAB_1015dc444;
    uStack_378 = param_2[9];
    uStack_380 = param_2[8];
    uStack_368 = param_2[0xb];
    uStack_370 = param_2[10];
    uStack_358 = param_2[0xd];
    uStack_360 = param_2[0xc];
    uStack_3b8 = param_2[1];
    uStack_3c0 = *param_2;
    uStack_3a8 = param_2[3];
    uStack_3b0 = param_2[2];
    uStack_398 = param_2[5];
    uStack_3a0 = param_2[4];
    uStack_388 = param_2[7];
    uStack_390 = param_2[6];
    uStack_68 = param_1[9];
    uStack_70 = param_1[8];
    uStack_58 = param_1[0xb];
    uStack_60 = param_1[10];
    uStack_48 = param_1[0xd];
    uStack_50 = param_1[0xc];
    uStack_a8 = param_1[1];
    uStack_b0 = *param_1;
    uStack_98 = param_1[3];
    uStack_a0 = param_1[2];
    uStack_88 = param_1[5];
    uStack_90 = param_1[4];
    uStack_78 = param_1[7];
    uStack_80 = param_1[6];
    uStack_350 = uStack_3c0;
    uStack_348 = uStack_3b8;
    uStack_340 = uStack_3b0;
    uStack_338 = uStack_3a8;
    uStack_330 = uStack_3a0;
    uStack_328 = uStack_398;
    uStack_320 = uStack_390;
    uStack_318 = uStack_388;
    uStack_310 = uStack_380;
    uStack_308 = uStack_378;
    uStack_300 = uStack_370;
    uStack_2f8 = uStack_368;
    uStack_2f0 = uStack_360;
    uStack_2e8 = uStack_358;
    FUN_1015dc5ec(&uStack_120,auStack_430,0x112db8310,&UNK_10d967cb0);
    FUN_1015dc5ec(&uStack_190,auStack_430,0x112db8310,&UNK_10d967cb0);
    puVar2 = &uStack_b0;
    FUN_1015dc1d0(puVar2,&uStack_350);
    func_0x0001015df100(&uStack_3c0,0x112db8310,&UNK_10d967cb0);
    func_0x0001015df100(&uStack_270,0x112db8310,&UNK_10d967cb0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1015dc58c;
  }
  uVar1 = 0;
LAB_1015dc598:
  return uVar1 & 1;
}



/* Entry: 1015dc5b4; end: 1015dc5eb;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015dc5b4(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  
  if (0xe < param_3 >> 0x3c) {
    return;
  }
  uVar1 = (uint)(param_3 >> 0x3e);
  if (uVar1 == 1) {
    param_2 = param_3 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 1015dc5ec; end: 1015dc633;  */

undefined8 FUN_1015dc5ec(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015dc634; end: 1015dc673;  */

void FUN_1015dc634(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d967db8;
  func_0x000107c61520(&DAT_10d967db8,&UNK_1103e4c90);
  puRam0000000112db8320 = puVar1;
  return;
}



/* Entry: 1015dc674; end: 1015dd08f;  */

uint FUN_1015dc674(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong *puVar3;
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
  undefined1 auStack_620 [128];
  ulong uStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_588;
  ulong uStack_580;
  ulong uStack_578;
  ulong uStack_570;
  ulong uStack_568;
  ulong uStack_560;
  ulong uStack_558;
  ulong uStack_550;
  ulong uStack_548;
  ulong uStack_540;
  ulong uStack_538;
  ulong uStack_530;
  ulong uStack_528;
  ulong uStack_520;
  ulong uStack_518;
  ulong uStack_510;
  ulong uStack_508;
  ulong uStack_500;
  ulong uStack_4f8;
  ulong uStack_4f0;
  ulong uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  ulong uStack_4d0;
  ulong uStack_4c8;
  ulong uStack_4c0;
  ulong uStack_4b8;
  ulong uStack_4b0;
  ulong uStack_4a8;
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
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
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
  ulong uStack_b8;
  undefined1 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  undefined1 uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  uVar8 = param_1[6];
  uVar6 = param_1[5];
  uVar12 = param_1[8];
  uVar10 = param_1[7];
  uVar4 = param_1[9];
  uVar9 = param_2[6];
  uVar7 = param_2[5];
  uVar13 = param_2[8];
  uVar11 = param_2[7];
  uVar5 = param_2[9];
  uStack_1a0 = uVar7;
  uStack_198 = uVar9;
  uStack_190 = uVar11;
  uStack_188 = uVar13;
  uStack_180 = uVar5;
  uStack_170 = uVar6;
  uStack_168 = uVar8;
  uStack_160 = uVar10;
  uStack_158 = uVar12;
  uStack_150 = uVar4;
  if (uVar10 == 0) {
    if (uVar11 != 0) goto LAB_1015dc798;
    FUN_1015dc5ec(&uStack_170,&uStack_3a0,0x112db8098,&UNK_10d966ff0);
    FUN_1015dc5ec(&uStack_1a0,&uStack_3a0,0x112db8098,&UNK_10d966ff0);
    FUN_101553bdc(uVar6,uVar8,0,uVar12,uVar4);
LAB_1015dc864:
    uStack_358 = param_1[0x13];
    uStack_360 = param_1[0x12];
    uStack_1c8 = param_1[0x15];
    uStack_1d0 = param_1[0x14];
    uStack_368 = param_1[0x11];
    uStack_370 = param_1[0x10];
    uStack_1d8 = param_1[0x13];
    uStack_1e0 = param_1[0x12];
    uStack_348 = param_1[0x15];
    uStack_350 = param_1[0x14];
    uStack_1b8 = param_1[0x17];
    uStack_1c0 = param_1[0x16];
    uStack_338 = param_1[0x17];
    uStack_340 = param_1[0x16];
    uStack_1a8 = param_1[0x19];
    uStack_1b0 = param_1[0x18];
    uStack_218 = param_1[0xb];
    uStack_220 = param_1[10];
    uStack_208 = param_1[0xd];
    uStack_210 = param_1[0xc];
    uStack_1f8 = param_1[0xf];
    uStack_200 = param_1[0xe];
    uStack_1e8 = param_1[0x11];
    uStack_1f0 = param_1[0x10];
    uStack_398 = param_1[0xb];
    uStack_3a0 = param_1[10];
    uStack_388 = param_1[0xd];
    uStack_390 = param_1[0xc];
    uStack_378 = param_1[0xf];
    uStack_380 = param_1[0xe];
    uStack_298 = param_2[0xb];
    uStack_2a0 = param_2[10];
    uStack_308 = param_2[0xd];
    uStack_310 = param_2[0xc];
    uStack_278 = param_2[0xf];
    uStack_280 = param_2[0xe];
    uStack_268 = param_2[0x11];
    uStack_270 = param_2[0x10];
    uStack_288 = param_2[0xd];
    uStack_290 = param_2[0xc];
    uStack_2f8 = param_2[0xf];
    uStack_300 = param_2[0xe];
    uStack_318 = param_2[0xb];
    uStack_320 = param_2[10];
    uStack_2c8 = param_2[0x15];
    uStack_2d0 = param_2[0x14];
    uStack_238 = param_2[0x17];
    uStack_240 = param_2[0x16];
    uStack_2b8 = param_2[0x17];
    uStack_2c0 = param_2[0x16];
    uStack_228 = param_2[0x19];
    uStack_230 = param_2[0x18];
    uStack_2e8 = param_2[0x11];
    uStack_2f0 = param_2[0x10];
    uStack_258 = param_2[0x13];
    uStack_260 = param_2[0x12];
    uStack_2d8 = param_2[0x13];
    uStack_2e0 = param_2[0x12];
    uStack_248 = param_2[0x15];
    uStack_250 = param_2[0x14];
    uStack_328 = param_1[0x19];
    uStack_330 = param_1[0x18];
    uStack_2a8 = param_2[0x19];
    uStack_2b0 = param_2[0x18];
    iVar1 = (int)&uStack_3a0;
    FUN_1015542cc();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_320;
      FUN_1015542cc();
      if (iVar1 != 1) {
LAB_1015dc9c0:
        uStack_3d8 = uStack_2d8;
        uStack_3e0 = uStack_2e0;
        uStack_3c8 = uStack_2c8;
        uStack_3d0 = uStack_2d0;
        uStack_3b8 = uStack_2b8;
        uStack_3c0 = uStack_2c0;
        uStack_3a8 = uStack_2a8;
        uStack_3b0 = uStack_2b0;
        uStack_418 = uStack_318;
        uStack_420 = uStack_320;
        uStack_408 = uStack_308;
        uStack_410 = uStack_310;
        uStack_3f8 = uStack_2f8;
        uStack_400 = uStack_300;
        uStack_3e8 = uStack_2e8;
        uStack_3f0 = uStack_2f0;
        uStack_458 = uStack_358;
        uStack_460 = uStack_360;
        uStack_448 = uStack_348;
        uStack_450 = uStack_350;
        uStack_438 = uStack_338;
        uStack_440 = uStack_340;
        uStack_428 = uStack_328;
        uStack_430 = uStack_330;
        uStack_498 = uStack_398;
        uStack_4a0 = uStack_3a0;
        uStack_488 = uStack_388;
        uStack_490 = uStack_390;
        uStack_478 = uStack_378;
        uStack_480 = uStack_380;
        uStack_468 = uStack_368;
        uStack_470 = uStack_370;
        FUN_1015dc5ec(&uStack_220,&uStack_140,0x112db3e80,&UNK_10d95e3d0);
        FUN_1015dc5ec(&uStack_2a0,&uStack_140,0x112db3e80,&UNK_10d95e3d0);
        func_0x0001015df100(&uStack_4a0,0x112db8308,&UNK_10d967ca8);
        goto LAB_1015dcb64;
      }
      uStack_458 = uStack_358;
      uStack_460 = uStack_360;
      uStack_448 = uStack_348;
      uStack_450 = uStack_350;
      uStack_438 = uStack_338;
      uStack_440 = uStack_340;
      uStack_428 = uStack_328;
      uStack_430 = uStack_330;
      uStack_498 = uStack_398;
      uStack_4a0 = uStack_3a0;
      uStack_488 = uStack_388;
      uStack_490 = uStack_390;
      uStack_478 = uStack_378;
      uStack_480 = uStack_380;
      uStack_468 = uStack_368;
      uStack_470 = uStack_370;
      FUN_1015dc5ec(&uStack_220,&uStack_140,0x112db3e80,&UNK_10d95e3d0);
      FUN_1015dc5ec(&uStack_2a0,&uStack_140,0x112db3e80,&UNK_10d95e3d0);
      func_0x0001015df100(&uStack_4a0,0x112db3e80,&UNK_10d95e3d0);
    }
    else {
      uStack_4d8 = uStack_358;
      uStack_4e0 = uStack_360;
      uStack_4c8 = uStack_348;
      uStack_4d0 = uStack_350;
      uStack_4b8 = uStack_338;
      uStack_4c0 = uStack_340;
      uStack_4a8 = uStack_328;
      uStack_4b0 = uStack_330;
      uStack_518 = uStack_398;
      uStack_520 = uStack_3a0;
      uStack_508 = uStack_388;
      uStack_510 = uStack_390;
      uStack_4f8 = uStack_378;
      uStack_500 = uStack_380;
      uStack_4e8 = uStack_368;
      uStack_4f0 = uStack_370;
      iVar1 = (int)&uStack_320;
      FUN_1015542cc();
      if (iVar1 == 1) goto LAB_1015dc9c0;
      uStack_558 = uStack_2d8;
      uStack_560 = uStack_2e0;
      uStack_548 = uStack_2c8;
      uStack_550 = uStack_2d0;
      uStack_538 = uStack_2b8;
      uStack_540 = uStack_2c0;
      uStack_528 = uStack_2a8;
      uStack_530 = uStack_2b0;
      uStack_598 = uStack_318;
      uStack_5a0 = uStack_320;
      uStack_588 = uStack_308;
      uStack_590 = uStack_310;
      uStack_578 = uStack_2f8;
      uStack_580 = uStack_300;
      uStack_568 = uStack_2e8;
      uStack_570 = uStack_2f0;
      uStack_438 = uStack_2b8;
      uStack_440 = uStack_2c0;
      uStack_428 = uStack_2a8;
      uStack_430 = uStack_2b0;
      uStack_458 = uStack_2d8;
      uStack_460 = uStack_2e0;
      uStack_448 = uStack_2c8;
      uStack_450 = uStack_2d0;
      uStack_478 = uStack_2f8;
      uStack_480 = uStack_300;
      uStack_468 = uStack_2e8;
      uStack_470 = uStack_2f0;
      uStack_498 = uStack_318;
      uStack_4a0 = uStack_320;
      uStack_488 = uStack_308;
      uStack_490 = uStack_310;
      uStack_f8 = uStack_4d8;
      uStack_100 = uStack_4e0;
      uStack_e8 = uStack_4c8;
      uStack_f0 = uStack_4d0;
      uStack_d8 = uStack_4b8;
      uStack_e0 = uStack_4c0;
      uStack_c8 = uStack_4a8;
      uStack_d0 = uStack_4b0;
      uStack_138 = uStack_518;
      uStack_140 = uStack_520;
      uStack_128 = uStack_508;
      uStack_130 = uStack_510;
      uStack_118 = uStack_4f8;
      uStack_120 = uStack_500;
      uStack_108 = uStack_4e8;
      uStack_110 = uStack_4f0;
      FUN_1015dc5ec(&uStack_220,auStack_620,0x112db3e80,&UNK_10d95e3d0);
      FUN_1015dc5ec(&uStack_2a0,auStack_620,0x112db3e80,&UNK_10d95e3d0);
      puVar3 = &uStack_140;
      FUN_1015dc304(puVar3,&uStack_4a0);
      func_0x0001015df100(&uStack_5a0,0x112db3e80,&UNK_10d95e3d0);
      func_0x0001015df100(&uStack_3a0,0x112db3e80,&UNK_10d95e3d0);
      if (((ulong)puVar3 & 1) == 0) goto LAB_1015dcb64;
    }
    uVar4 = *param_1;
    if ((((uVar4 == *param_2) && (param_1[1] == param_2[1])) ||
        (func_0x000107c605b8(), (uVar4 & 1) != 0)) && (param_1[2] == param_2[2])) {
      uVar4 = param_1[3];
      FUN_100e25fcc(uVar4,param_1[4],param_2[3],param_2[4]);
      uVar2 = (uint)uVar4;
      goto LAB_1015dcb68;
    }
  }
  else if (uVar11 == 0) {
LAB_1015dc798:
    FUN_1015dc5ec(&uStack_170,&uStack_3a0,0x112db8098,&UNK_10d966ff0);
    FUN_1015dc5ec(&uStack_1a0,&uStack_3a0,0x112db8098,&UNK_10d966ff0);
    FUN_101553bdc(uVar6,uVar8,uVar10,uVar12,uVar4);
    FUN_101553bdc(uVar7,uVar9,uVar11,uVar13,uVar5);
  }
  else {
    uStack_88 = (undefined1)uVar9;
    uStack_b0 = (undefined1)uVar8;
    uStack_b8 = uVar6;
    uStack_a8 = uVar10;
    uStack_a0 = uVar12;
    uStack_98 = uVar4;
    uStack_90 = uVar7;
    uStack_80 = uVar11;
    uStack_78 = uVar13;
    uStack_70 = uVar5;
    FUN_1015dc5ec(&uStack_170,&uStack_3a0,0x112db8098,&UNK_10d966ff0);
    FUN_1015dc5ec(&uStack_1a0,&uStack_3a0,0x112db8098,&UNK_10d966ff0);
    puVar3 = &uStack_b8;
    func_0x00010368c758(puVar3,&uStack_90);
    FUN_101553bdc(uVar7,uVar9,uVar11,uVar13,uVar5);
    FUN_101553bdc(uVar6,uVar8,uVar10,uVar12,uVar4);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1015dc864;
  }
LAB_1015dcb64:
  uVar2 = 0;
LAB_1015dcb68:
  return uVar2 & 1;
}



/* Entry: 1015dd090; end: 1015dd14f;  */

void FUN_1015dd090(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967d50;
  func_0x000107c61520(&UNK_10d967d50,&UNK_1103e4c00);
  puRam0000000112db8328 = puVar1;
  return;
}



/* Entry: 1015dd150; end: 1015dd173;  */

void FUN_1015dd150(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015dd174();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015dd174; end: 1015dd1b3;  */

void FUN_1015dd174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967d28;
  func_0x000107c61520(&UNK_10d967d28,&UNK_1103e4c00);
  puRam0000000112db8350 = puVar1;
  return;
}



/* Entry: 1015dd1b4; end: 1015dd1cb;  */

void FUN_1015dd1b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015dd090();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015d5220)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015dd1cc; end: 1015dd20b;  */

void FUN_1015dd1cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967d90;
  func_0x000107c61520(&UNK_10d967d90,&UNK_1103e4c00);
  puRam0000000112db8358 = puVar1;
  return;
}



/* Entry: 1015dd20c; end: 1015dd22f;  */

void FUN_1015dd20c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015dd230();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015dd230; end: 1015dd26f;  */

void FUN_1015dd230(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967e00;
  func_0x000107c61520(&UNK_10d967e00,&UNK_1103e4c90);
  puRam0000000112db8360 = puVar1;
  return;
}



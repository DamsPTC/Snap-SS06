/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d8bdb4; end: 103d8bde3;  */

undefined1  [16] FUN_103d8bdb4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 103d8bde4; end: 103d8be17;  */

void FUN_103d8bde4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 103d8be18; end: 103d8be2b;  */

undefined1  [16] FUN_103d8be18(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x103d8be28;
  return auVar1;
}



/* Entry: 103d8be2c; end: 103d8be63;  */

void FUN_103d8be2c(void)

{
  FUN_103d8bc6c();
  return;
}



/* Entry: 103d8be64; end: 103d8be67;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8be64(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d8be68; end: 103d8be9f;  */

uint FUN_103d8be68(long param_1,long param_2)

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
  func_0x000103da2824();
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



/* Entry: 103d8bea0; end: 103d8bfb7;  */

/* WARNING: Possible PIC construction at 0x000103d8bed4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d8bed8) */
/* WARNING: Removing unreachable block (ram,0x000103d8bf00) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d8bea0(undefined8 *param_1)

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



/* Entry: 103d8bfb8; end: 103d8bff3;  */

void FUN_103d8bfb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009218;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009218,&UNK_10dc8fab8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8bff4; end: 103d8c16f;  */

void FUN_103d8bff4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d8c170; end: 103d8c1b7;  */

void FUN_103d8c170(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc902b0,0x2a,2);
  uRam0000000113811a88 = uStack_38;
  uRam0000000113811a80 = uStack_40;
  uRam0000000113811a98 = uStack_28;
  uRam0000000113811a90 = uStack_30;
  uRam0000000113811aa8 = uStack_18;
  uRam0000000113811aa0 = uStack_20;
  return;
}



/* Entry: 103d8c1b8; end: 103d8c1ef;  */

undefined1  [16] FUN_103d8c1b8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6ea0;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Entry: 103d8c1f0; end: 103d8c227;  */

uint FUN_103d8c1f0(long param_1,long param_2)

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
  func_0x000103da27e4();
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



/* Entry: 103d8c228; end: 103d8c2c7;  */

/* WARNING: Possible PIC construction at 0x000103d8c274: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8c284: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8c278) */
/* WARNING: Removing unreachable block (ram,0x000103d8c288) */

void FUN_103d8c228(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008808 != -1) {
    func_0x000107c61568(0x113008808,FUN_103d8c170);
  }
  uVar5 = uRam0000000113811aa8;
  uVar4 = uRam0000000113811aa0;
  uVar3 = uRam0000000113811a98;
  uVar2 = uRam0000000113811a90;
  uVar1 = uRam0000000113811a88;
  *param_1 = uRam0000000113811a80;
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



/* Entry: 103d8c2c8; end: 103d8c2db;  */

void FUN_103d8c2c8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113009208;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113009208,&UNK_10dc8fab0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8c2dc; end: 103d8c313;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8c2dc(undefined8 *param_1,undefined8 param_2)

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
  FUN_103d9c7e4();
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



/* Entry: 103d8c314; end: 103d8c35b;  */

void FUN_103d8c314(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90210,0x90,2);
  uRam0000000113811ab8 = uStack_38;
  uRam0000000113811ab0 = uStack_40;
  uRam0000000113811ac8 = uStack_28;
  uRam0000000113811ac0 = uStack_30;
  uRam0000000113811ad8 = uStack_18;
  uRam0000000113811ad0 = uStack_20;
  return;
}



/* Entry: 103d8c35c; end: 103d8c427;  */

void FUN_103d8c35c(void)

{
  long lVar1;
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
  
  lVar1 = 0;
  FUN_103d98a98();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x28) = 0;
  *(undefined8 *)(lVar1 + 0x20) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0xf000000000000000;
  func_0x000103d99e50(&uStack_e0);
  *(undefined8 *)(lVar1 + 0xc0) = uStack_58;
  *(undefined8 *)(lVar1 + 0xb8) = uStack_60;
  *(undefined8 *)(lVar1 + 0xd0) = uStack_48;
  *(undefined8 *)(lVar1 + 200) = uStack_50;
  *(undefined8 *)(lVar1 + 0xe0) = uStack_38;
  *(undefined8 *)(lVar1 + 0xd8) = uStack_40;
  *(undefined8 *)(lVar1 + 0xf0) = uStack_28;
  *(undefined8 *)(lVar1 + 0xe8) = uStack_30;
  *(undefined8 *)(lVar1 + 0x80) = uStack_98;
  *(undefined8 *)(lVar1 + 0x78) = uStack_a0;
  *(undefined8 *)(lVar1 + 0x90) = uStack_88;
  *(undefined8 *)(lVar1 + 0x88) = uStack_90;
  *(undefined8 *)(lVar1 + 0xa0) = uStack_78;
  *(undefined8 *)(lVar1 + 0x98) = uStack_80;
  *(undefined8 *)(lVar1 + 0xb0) = uStack_68;
  *(undefined8 *)(lVar1 + 0xa8) = uStack_70;
  *(undefined8 *)(lVar1 + 0x40) = uStack_d8;
  *(undefined8 *)(lVar1 + 0x38) = uStack_e0;
  *(undefined8 *)(lVar1 + 0x50) = uStack_c8;
  *(undefined8 *)(lVar1 + 0x48) = uStack_d0;
  *(undefined8 *)(lVar1 + 0x60) = uStack_b8;
  *(undefined8 *)(lVar1 + 0x58) = uStack_c0;
  *(undefined8 *)(lVar1 + 0x70) = uStack_a8;
  *(undefined8 *)(lVar1 + 0x68) = uStack_b0;
  *(undefined8 *)(lVar1 + 0x100) = 0;
  *(undefined8 *)(lVar1 + 0xf8) = 0;
  *(undefined8 *)(lVar1 + 0x180) = 0;
  *(undefined8 *)(lVar1 + 0x178) = 0;
  *(undefined8 *)(lVar1 + 400) = 0;
  *(undefined8 *)(lVar1 + 0x188) = 0;
  *(undefined8 *)(lVar1 + 0x160) = 0;
  *(undefined8 *)(lVar1 + 0x158) = 0;
  *(undefined8 *)(lVar1 + 0x170) = 0;
  *(undefined8 *)(lVar1 + 0x168) = 0;
  *(undefined8 *)(lVar1 + 0x140) = 0;
  *(undefined8 *)(lVar1 + 0x138) = 0;
  *(undefined8 *)(lVar1 + 0x150) = 0;
  *(undefined8 *)(lVar1 + 0x148) = 0;
  *(undefined8 *)(lVar1 + 0x120) = 0;
  *(undefined8 *)(lVar1 + 0x118) = 0;
  *(undefined8 *)(lVar1 + 0x130) = 0;
  *(undefined8 *)(lVar1 + 0x128) = 0;
  *(undefined8 *)(lVar1 + 0x110) = 0;
  *(undefined8 *)(lVar1 + 0x108) = 0;
  *(undefined **)(lVar1 + 0x198) = PTR___swiftEmptyArrayStorage_11034f1c8;
  lRam00000001130085e0 = lVar1;
  return;
}



/* Entry: 103d8c428; end: 103d8c8ff;  */

void FUN_103d8c428(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_558 [24];
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [64];
  undefined1 auStack_4d0 [24];
  undefined1 auStack_4b8 [24];
  undefined1 auStack_4a0 [24];
  undefined1 auStack_488 [24];
  undefined1 auStack_470 [24];
  undefined1 auStack_458 [24];
  undefined1 auStack_440 [24];
  undefined1 auStack_428 [24];
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
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
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  puVar9 = (undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *puVar9 = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0xf000000000000000;
  func_0x000103d99e50(&uStack_2f0);
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_258;
  *(undefined8 *)(unaff_x20 + 200) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_280;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_2c0;
  puVar6 = (undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x180) = 0;
  *(undefined8 *)(unaff_x20 + 0x178) = 0;
  *(undefined8 *)(unaff_x20 + 400) = 0;
  *(undefined8 *)(unaff_x20 + 0x188) = 0;
  *(undefined8 *)(unaff_x20 + 0x160) = 0;
  *(undefined8 *)(unaff_x20 + 0x158) = 0;
  *(undefined8 *)(unaff_x20 + 0x170) = 0;
  *(undefined8 *)(unaff_x20 + 0x168) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x150) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined8 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x110) = 0;
  *(undefined8 *)(unaff_x20 + 0x108) = 0;
  *(undefined **)(unaff_x20 + 0x198) = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c61428(param_1 + 0x10,auStack_308,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar8 = *(undefined8 *)(param_1 + 0x20);
  uVar11 = *(undefined8 *)(param_1 + 0x28);
  uVar12 = *(undefined8 *)(param_1 + 0x30);
  func_0x000107c61428(puVar9,auStack_320,1,0);
  uVar5 = *puVar9;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  *puVar9 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar12;
  FUN_103d98a1c(uVar7,uVar10,uVar8,uVar11,uVar12);
  FUN_103d98ab8(uVar5,uVar1,uVar3,uVar2,uVar4);
  func_0x000107c61428(param_1 + 0x38,auStack_338,0,0);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_228 = *(undefined8 *)(param_1 + 0x40);
  uStack_230 = *(undefined8 *)(param_1 + 0x38);
  uStack_218 = *(undefined8 *)(param_1 + 0x50);
  uStack_220 = *(undefined8 *)(param_1 + 0x48);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  uStack_210 = *(undefined8 *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(unaff_x20 + 0x38,auStack_350,1,0);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 200);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_168 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_170 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_158 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_160 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x68);
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 200) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_230;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_220;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_200;
  func_0x000103da2a94(&uStack_230,&uStack_410,0x1130085b8,&UNK_10dc8da18);
  func_0x000103da2994(&uStack_170,0x1130085b8,&UNK_10dc8da18);
  func_0x000107c61428(param_1 + 0xf8,auStack_428,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0xf8);
  uVar1 = *(undefined8 *)(param_1 + 0x100);
  uVar10 = *(undefined8 *)(param_1 + 0x108);
  func_0x000107c61428(puVar6,auStack_440,1,0);
  uVar11 = *puVar6;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x108);
  *puVar6 = uVar7;
  *(undefined8 *)(unaff_x20 + 0x100) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x108) = uVar10;
  FUN_103d9aac8(uVar7,uVar1,uVar10);
  func_0x000103da2928(uVar11,uVar8,uVar2);
  func_0x000107c61428(param_1 + 0x110,auStack_458,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x110);
  uVar10 = *(undefined8 *)(param_1 + 0x118);
  uVar8 = *(undefined8 *)(param_1 + 0x120);
  uVar11 = *(undefined8 *)(param_1 + 0x128);
  uVar12 = *(undefined8 *)(param_1 + 0x130);
  func_0x000107c61428(unaff_x20 + 0x110,auStack_470,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x110);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x118);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x120);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined8 *)(unaff_x20 + 0x110) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x118) = uVar10;
  *(undefined8 *)(unaff_x20 + 0x120) = uVar8;
  *(undefined8 *)(unaff_x20 + 0x128) = uVar11;
  *(undefined8 *)(unaff_x20 + 0x130) = uVar12;
  FUN_103d9aa20(uVar7,uVar10,uVar8,uVar11,uVar12);
  func_0x000103d9aa74(uVar1,uVar3,uVar2,uVar4,uVar5);
  func_0x000107c61428(param_1 + 0x138,auStack_488,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x138);
  func_0x000107c61428(unaff_x20 + 0x138,auStack_4a0,1,0);
  *(undefined8 *)(unaff_x20 + 0x138) = uVar7;
  func_0x000107c61428(param_1 + 0x140,auStack_4b8,0,0);
  uStack_a8 = *(undefined8 *)(param_1 + 0x148);
  uStack_b0 = *(undefined8 *)(param_1 + 0x140);
  uStack_98 = *(undefined8 *)(param_1 + 0x158);
  uStack_a0 = *(undefined8 *)(param_1 + 0x150);
  uStack_88 = *(undefined8 *)(param_1 + 0x168);
  uStack_90 = *(undefined8 *)(param_1 + 0x160);
  uStack_78 = *(undefined8 *)(param_1 + 0x178);
  uStack_80 = *(undefined8 *)(param_1 + 0x170);
  func_0x000107c61428(unaff_x20 + 0x140,auStack_4d0,1,0);
  uStack_408 = *(undefined8 *)(unaff_x20 + 0x148);
  uStack_410 = *(undefined8 *)(unaff_x20 + 0x140);
  uStack_3f8 = *(undefined8 *)(unaff_x20 + 0x158);
  uStack_400 = *(undefined8 *)(unaff_x20 + 0x150);
  uStack_3e8 = *(undefined8 *)(unaff_x20 + 0x168);
  uStack_3f0 = *(undefined8 *)(unaff_x20 + 0x160);
  uStack_3d8 = *(undefined8 *)(unaff_x20 + 0x178);
  uStack_3e0 = *(undefined8 *)(unaff_x20 + 0x170);
  *(undefined8 *)(unaff_x20 + 0x148) = uStack_a8;
  *(undefined8 *)(unaff_x20 + 0x140) = uStack_b0;
  *(undefined8 *)(unaff_x20 + 0x158) = uStack_98;
  *(undefined8 *)(unaff_x20 + 0x150) = uStack_a0;
  *(undefined8 *)(unaff_x20 + 0x168) = uStack_88;
  *(undefined8 *)(unaff_x20 + 0x160) = uStack_90;
  *(undefined8 *)(unaff_x20 + 0x178) = uStack_78;
  *(undefined8 *)(unaff_x20 + 0x170) = uStack_80;
  func_0x000103da2a94(&uStack_b0,auStack_510,0x1130085c8,&UNK_10dc8da28);
  func_0x000103da2994(&uStack_410,0x1130085c8,&UNK_10dc8da28);
  func_0x000107c61428(param_1 + 0x180,auStack_510,0,0);
  uVar7 = *(undefined8 *)(param_1 + 0x180);
  uVar1 = *(undefined8 *)(param_1 + 0x188);
  uVar10 = *(undefined8 *)(param_1 + 400);
  func_0x000107c61428(unaff_x20 + 0x180,auStack_528,1,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x180);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x188);
  uVar11 = *(undefined8 *)(unaff_x20 + 400);
  *(undefined8 *)(unaff_x20 + 0x180) = uVar7;
  *(undefined8 *)(unaff_x20 + 0x188) = uVar1;
  *(undefined8 *)(unaff_x20 + 400) = uVar10;
  FUN_103d9aac8(uVar7,uVar1,uVar10);
  func_0x000103da2928(uVar8,uVar2,uVar11);
  func_0x000107c61428(param_1 + 0x198,auStack_540,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x198);
  func_0x000107c61434(uVar8);
  func_0x000107c61574(param_1);
  func_0x000107c61428(unaff_x20 + 0x198,auStack_558,1,0);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x198);
  *(undefined8 *)(unaff_x20 + 0x198) = uVar8;
  func_0x000107c6142c(uVar7);
  return;
}



/* Entry: 103d8c900; end: 103d8c99b;  */

void FUN_103d8c900(void)

{
  long unaff_x20;
  
  FUN_103d98ab8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000103da2994(unaff_x20 + 0x38,0x1130085b8,&UNK_10dc8da18);
  func_0x000103da2928(*(undefined8 *)(unaff_x20 + 0xf8),*(undefined8 *)(unaff_x20 + 0x100),
                      *(undefined8 *)(unaff_x20 + 0x108));
  func_0x000103d9aa74(*(undefined8 *)(unaff_x20 + 0x110),*(undefined8 *)(unaff_x20 + 0x118),
                      *(undefined8 *)(unaff_x20 + 0x120),*(undefined8 *)(unaff_x20 + 0x128),
                      *(undefined8 *)(unaff_x20 + 0x130));
  FUN_103da228c(*(undefined8 *)(unaff_x20 + 0x140),*(undefined8 *)(unaff_x20 + 0x148),
                *(undefined8 *)(unaff_x20 + 0x150),*(undefined8 *)(unaff_x20 + 0x158),
                *(undefined8 *)(unaff_x20 + 0x160),*(undefined8 *)(unaff_x20 + 0x168),
                *(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178));
  func_0x000103da2928(*(undefined8 *)(unaff_x20 + 0x180),*(undefined8 *)(unaff_x20 + 0x188),
                      *(undefined8 *)(unaff_x20 + 400));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x198));
  return;
}



/* Entry: 103d8c99c; end: 103d8cb6b;  */

/* WARNING: Removing unreachable block (ram,0x000103d8caf0) */
/* WARNING: Removing unreachable block (ram,0x000103d8ca74) */
/* WARNING: Removing unreachable block (ram,0x000103d8caa0) */
/* WARNING: Removing unreachable block (ram,0x000103d8ca40) */
/* WARNING: Removing unreachable block (ram,0x000103d8cb38) */

void FUN_103d8c99c(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_58 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
LAB_103d8c9f4:
  do {
    while( true ) {
      while( true ) {
        lVar1 = param_3;
        lVar2 = param_4;
        (*pcVar4)();
        if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
          return;
        }
        if (4 < lVar1) break;
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            FUN_103d8cb6c(param_2,param_1,param_3,param_4);
          }
          else if (lVar1 == 2) {
            FUN_103d8cc00(param_2,param_1,param_3,param_4);
          }
        }
        else if (lVar1 == 3) {
          FUN_103d8cc94(param_2,param_1,param_3,param_4);
        }
        else if (lVar1 == 4) {
          FUN_103d8cd28(param_2,param_1,param_3,param_4);
        }
      }
      if (6 < lVar1) break;
      if (lVar1 == 5) {
        func_0x000107c61428(param_1 + 0x138,auStack_58,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x90);
        lVar1 = param_1 + 0x138;
LAB_103d8cb14:
        (*pcVar3)(lVar1,param_3,param_4);
        func_0x000107c614a8(auStack_58);
      }
      else if (lVar1 == 6) {
        FUN_103d8cdbc(param_2,param_1,param_3,param_4);
      }
    }
    if (lVar1 != 7) {
      if (lVar1 == 8) {
        func_0x000107c61428(param_1 + 0x198,auStack_58,0x21,0);
        pcVar3 = *(code **)(param_4 + 0x160);
        lVar1 = param_1 + 0x198;
        goto LAB_103d8cb14;
      }
      goto LAB_103d8c9f4;
    }
    FUN_103d8ce50(param_2,param_1,param_3,param_4);
  } while( true );
}



/* Entry: 103d8cb6c; end: 103d8cbff;  */

void FUN_103d8cb6c(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d9c99c();
  (*pcVar2)(param_2 + 0x10,&UNK_11070cdd0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d8cc00; end: 103d8cc93;  */

void FUN_103d8cc00(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x38;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d9cd88();
  (*pcVar2)(param_2 + 0x38,&UNK_11070d118,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d8cc94; end: 103d8cd27;  */

void FUN_103d8cc94(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d9cf80();
  (*pcVar2)(param_2 + 0xf8,&UNK_11070d2d8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d8cd28; end: 103d8cdbb;  */

void FUN_103d8cd28(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d9d138();
  (*pcVar2)(param_2 + 0x110,&UNK_11070d3e0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d8cdbc; end: 103d8ce4f;  */

void FUN_103d8cdbc(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d9da04();
  (*pcVar2)(param_2 + 0x140,&UNK_11070dac8,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d8ce50; end: 103d8cee3;  */

void FUN_103d8ce50(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  FUN_103d9d234();
  (*pcVar2)(param_2 + 0x180,&UNK_11070d468,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 103d8cee4; end: 103d8d037;  */

void FUN_103d8cee4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long unaff_x21;
  long lVar1;
  code *pcVar2;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_103d8d038();
  if (unaff_x21 == 0) {
    FUN_103d8d0e0(param_1,param_2,param_3,param_4);
    FUN_103d8d23c(param_1,param_2,param_3,param_4);
    FUN_103d8d2dc(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x138,auStack_58,0,0);
    if (*(long *)(param_1 + 0x138) != 0) {
      (**(code **)(param_4 + 0x30))(*(long *)(param_1 + 0x138),5,param_3,param_4);
    }
    FUN_103d8d384(param_1,param_2,param_3,param_4);
    FUN_103d8d434(param_1,param_2,param_3,param_4);
    func_0x000107c61428(param_1 + 0x198,auStack_70,0,0);
    lVar1 = *(long *)(param_1 + 0x198);
    if (*(long *)(lVar1 + 0x10) != 0) {
      pcVar2 = *(code **)(param_4 + 0x100);
      func_0x000107c61434(lVar1);
      (*pcVar2)();
      func_0x000107c6142c(lVar1);
    }
  }
  return;
}



/* Entry: 103d8d038; end: 103d8d0df;  */

void FUN_103d8d038(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x30);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_68 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d9c99c();
    (*pcVar2)(&uStack_80,1,&UNK_11070cdd0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8d0e0; end: 103d8d23b;  */

void FUN_103d8d0e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  undefined1 auStack_1d8 [24];
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
  
  func_0x000107c61428(param_1 + 0x38,auStack_1d8,0,0);
  uStack_138 = *(undefined8 *)(param_1 + 0xc0);
  uStack_140 = *(undefined8 *)(param_1 + 0xb8);
  uStack_128 = *(undefined8 *)(param_1 + 0xd0);
  uStack_130 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0xe0);
  uStack_120 = *(undefined8 *)(param_1 + 0xd8);
  uStack_108 = *(undefined8 *)(param_1 + 0xf0);
  uStack_110 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x80);
  uStack_180 = *(undefined8 *)(param_1 + 0x78);
  uStack_168 = *(undefined8 *)(param_1 + 0x90);
  uStack_170 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0xa0);
  uStack_160 = *(undefined8 *)(param_1 + 0x98);
  uStack_148 = *(undefined8 *)(param_1 + 0xb0);
  uStack_150 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x40);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x38);
  uStack_1a8 = *(undefined8 *)(param_1 + 0x50);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x48);
  uStack_198 = *(undefined8 *)(param_1 + 0x60);
  uStack_1a0 = *(undefined8 *)(param_1 + 0x58);
  uStack_188 = *(undefined8 *)(param_1 + 0x70);
  uStack_190 = *(undefined8 *)(param_1 + 0x68);
  uStack_78 = *(undefined8 *)(param_1 + 0xc0);
  uStack_80 = *(undefined8 *)(param_1 + 0xb8);
  uStack_68 = *(undefined8 *)(param_1 + 0xd0);
  uStack_70 = *(undefined8 *)(param_1 + 200);
  uStack_58 = *(undefined8 *)(param_1 + 0xe0);
  uStack_60 = *(undefined8 *)(param_1 + 0xd8);
  uStack_48 = *(undefined8 *)(param_1 + 0xf0);
  uStack_50 = *(undefined8 *)(param_1 + 0xe8);
  uStack_b8 = *(undefined8 *)(param_1 + 0x80);
  uStack_c0 = *(undefined8 *)(param_1 + 0x78);
  uStack_a8 = *(undefined8 *)(param_1 + 0x90);
  uStack_b0 = *(undefined8 *)(param_1 + 0x88);
  uStack_98 = *(undefined8 *)(param_1 + 0xa0);
  uStack_a0 = *(undefined8 *)(param_1 + 0x98);
  uStack_88 = *(undefined8 *)(param_1 + 0xb0);
  uStack_90 = *(undefined8 *)(param_1 + 0xa8);
  uStack_f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_100 = *(undefined8 *)(param_1 + 0x38);
  uStack_e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_f0 = *(undefined8 *)(param_1 + 0x48);
  uStack_d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_e0 = *(undefined8 *)(param_1 + 0x58);
  uStack_c8 = *(undefined8 *)(param_1 + 0x70);
  uStack_d0 = *(undefined8 *)(param_1 + 0x68);
  puVar1 = &uStack_1c0;
  FUN_103d99e38();
  if ((int)puVar1 != 1) {
    uStack_218 = uStack_78;
    uStack_220 = uStack_80;
    uStack_208 = uStack_68;
    uStack_210 = uStack_70;
    uStack_1f8 = uStack_58;
    uStack_200 = uStack_60;
    uStack_1e8 = uStack_48;
    uStack_1f0 = uStack_50;
    uStack_258 = uStack_b8;
    uStack_260 = uStack_c0;
    uStack_248 = uStack_a8;
    uStack_250 = uStack_b0;
    uStack_238 = uStack_98;
    uStack_240 = uStack_a0;
    uStack_228 = uStack_88;
    uStack_230 = uStack_90;
    uStack_298 = uStack_f8;
    uStack_2a0 = uStack_100;
    uStack_288 = uStack_e8;
    uStack_290 = uStack_f0;
    uStack_278 = uStack_d8;
    uStack_280 = uStack_e0;
    uStack_268 = uStack_c8;
    uStack_270 = uStack_d0;
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d9cd88();
    (*pcVar2)(&uStack_2a0,2,&UNK_11070d118,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8d23c; end: 103d8d2db;  */

void FUN_103d8d23c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0xf8;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0xf8);
  if (lStack_70 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x108);
    uStack_68 = *(undefined8 *)(param_1 + 0x100);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d9cf80();
    (*pcVar2)(&lStack_70,3,&UNK_11070d2d8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8d2dc; end: 103d8d383;  */

void FUN_103d8d2dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x110;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_80 = *(long *)(param_1 + 0x110);
  if (lStack_80 != 0) {
    uStack_70 = *(undefined8 *)(param_1 + 0x120);
    uStack_78 = *(undefined8 *)(param_1 + 0x118);
    uStack_60 = *(undefined8 *)(param_1 + 0x130);
    uStack_68 = *(undefined8 *)(param_1 + 0x128);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d9d138();
    (*pcVar2)(&lStack_80,4,&UNK_11070d3e0,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8d384; end: 103d8d433;  */

void FUN_103d8d384(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x140;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_90 = *(long *)(param_1 + 0x148);
  if (lStack_90 != 0) {
    uStack_98 = *(undefined8 *)(param_1 + 0x140);
    uStack_80 = *(undefined8 *)(param_1 + 0x158);
    uStack_88 = *(undefined8 *)(param_1 + 0x150);
    uStack_70 = *(undefined8 *)(param_1 + 0x168);
    uStack_78 = *(undefined8 *)(param_1 + 0x160);
    uStack_60 = *(undefined8 *)(param_1 + 0x178);
    uStack_68 = *(undefined8 *)(param_1 + 0x170);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d9da04();
    (*pcVar2)(&uStack_98,6,&UNK_11070dac8,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8d434; end: 103d8d4d7;  */

void FUN_103d8d434(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x180;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x180);
  if (lStack_70 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 400);
    uStack_68 = *(undefined8 *)(param_1 + 0x188);
    pcVar2 = *(code **)(param_4 + 0x88);
    FUN_103d9d234();
    (*pcVar2)(&lStack_70,7,&UNK_11070d468,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8d4d8; end: 103d8e24b;  */

uint FUN_103d8d4d8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  int iVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  ulong uVar26;
  ulong uStack_9c0;
  long lStack_9b8;
  ulong uStack_9b0;
  long lStack_9a8;
  ulong uStack_9a0;
  long lStack_998;
  ulong uStack_990;
  undefined8 uStack_988;
  ulong uStack_900;
  long lStack_8f8;
  ulong uStack_8f0;
  long lStack_8e8;
  ulong uStack_8e0;
  long lStack_8d8;
  ulong uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  long lStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  ulong uStack_840;
  long lStack_838;
  ulong uStack_830;
  long lStack_828;
  ulong uStack_820;
  long lStack_818;
  ulong uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  long lStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined1 auStack_778 [24];
  undefined1 auStack_760 [64];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  ulong uStack_660;
  long lStack_658;
  ulong uStack_650;
  long lStack_648;
  ulong uStack_640;
  long lStack_638;
  ulong uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  long lStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  ulong uStack_4e0;
  long lStack_4d8;
  ulong uStack_4d0;
  long lStack_4c8;
  ulong uStack_4c0;
  long lStack_4b8;
  ulong uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  long lStack_498;
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
  ulong uStack_420;
  long lStack_418;
  ulong uStack_410;
  long lStack_408;
  ulong uStack_400;
  long lStack_3f8;
  ulong uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  long lStack_3d8;
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
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
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
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  ulong uStack_180;
  long lStack_178;
  ulong uStack_170;
  long lStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long lStack_138;
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
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  
  func_0x000107c61428(param_1 + 0x10,auStack_198,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_1b0,0,0);
  uVar13 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar18 = *(undefined8 *)(param_1 + 0x20);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar15 = *(ulong *)(param_1 + 0x30);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar5 = *(undefined8 *)(param_2 + 0x28);
  uVar17 = *(ulong *)(param_2 + 0x30);
  if (uVar15 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_103d8d5b0;
    uStack_b8 = uVar13;
    uStack_b0 = uVar2;
    uStack_a8 = uVar18;
    uStack_a0 = uVar3;
    uStack_98 = uVar15;
    uStack_90 = uVar16;
    uStack_88 = uVar4;
    uStack_80 = uVar1;
    uStack_78 = uVar5;
    uStack_70 = uVar17;
    FUN_103d98a1c(uVar13,uVar2,uVar18,uVar3,uVar15);
    FUN_103d98a1c(uVar16,uVar4,uVar1,uVar5,uVar17);
    puVar9 = &uStack_b8;
    func_0x000103d99bac(puVar9,&uStack_90);
    FUN_103d98ab8(uVar16,uVar4,uVar1,uVar5,uVar17);
    FUN_103d98ab8(uVar13,uVar2,uVar18,uVar3,uVar15);
    if (((ulong)puVar9 & 1) != 0) goto LAB_103d8d6a4;
  }
  else if (uVar17 >> 0x3c < 0xf) {
LAB_103d8d5b0:
    FUN_103d98a1c(uVar13,uVar2,uVar18,uVar3,uVar15);
    FUN_103d98a1c(uVar16,uVar4,uVar1,uVar5,uVar17);
    FUN_103d98ab8(uVar13,uVar2,uVar18,uVar3,uVar15);
    FUN_103d98ab8(uVar16,uVar4,uVar1,uVar5,uVar17);
  }
  else {
    FUN_103d98a1c(uVar13,uVar2,uVar18,uVar3,uVar15);
    FUN_103d98a1c(uVar16,uVar4,uVar1,uVar5,uVar17);
    FUN_103d98ab8(uVar13,uVar2,uVar18,uVar3,uVar15);
LAB_103d8d6a4:
    func_0x000107c61428(param_1 + 0x38,auStack_348,0,0);
    func_0x000107c61428(param_2 + 0x38,auStack_360,0,0);
    uStack_2a8 = *(undefined8 *)(param_1 + 0xc0);
    uStack_2b0 = *(undefined8 *)(param_1 + 0xb8);
    uStack_298 = *(undefined8 *)(param_1 + 0xd0);
    uStack_2a0 = *(undefined8 *)(param_1 + 200);
    uStack_288 = *(undefined8 *)(param_1 + 0xe0);
    uStack_290 = *(undefined8 *)(param_1 + 0xd8);
    uStack_278 = *(undefined8 *)(param_1 + 0xf0);
    uStack_280 = *(undefined8 *)(param_1 + 0xe8);
    uStack_2e8 = *(undefined8 *)(param_1 + 0x80);
    uStack_2f0 = *(undefined8 *)(param_1 + 0x78);
    uStack_2d8 = *(undefined8 *)(param_1 + 0x90);
    uStack_2e0 = *(undefined8 *)(param_1 + 0x88);
    uStack_2c8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_2d0 = *(undefined8 *)(param_1 + 0x98);
    uStack_2b8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_2c0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_328 = *(undefined8 *)(param_1 + 0x40);
    uStack_330 = *(undefined8 *)(param_1 + 0x38);
    uStack_318 = *(undefined8 *)(param_1 + 0x50);
    uStack_320 = *(undefined8 *)(param_1 + 0x48);
    uStack_308 = *(undefined8 *)(param_1 + 0x60);
    uStack_310 = *(undefined8 *)(param_1 + 0x58);
    uStack_2f8 = *(undefined8 *)(param_1 + 0x70);
    uStack_300 = *(undefined8 *)(param_1 + 0x68);
    uStack_458 = *(undefined8 *)(param_1 + 0xc0);
    uStack_460 = *(undefined8 *)(param_1 + 0xb8);
    uStack_448 = *(undefined8 *)(param_1 + 0xd0);
    uStack_450 = *(undefined8 *)(param_1 + 200);
    uStack_438 = *(undefined8 *)(param_1 + 0xe0);
    uStack_440 = *(undefined8 *)(param_1 + 0xd8);
    uStack_428 = *(undefined8 *)(param_1 + 0xf0);
    uStack_430 = *(undefined8 *)(param_1 + 0xe8);
    lStack_498 = *(long *)(param_1 + 0x80);
    uStack_4a0 = *(undefined8 *)(param_1 + 0x78);
    uStack_488 = *(undefined8 *)(param_1 + 0x90);
    uStack_490 = *(undefined8 *)(param_1 + 0x88);
    uStack_478 = *(undefined8 *)(param_1 + 0xa0);
    uStack_480 = *(undefined8 *)(param_1 + 0x98);
    uStack_468 = *(undefined8 *)(param_1 + 0xb0);
    uStack_470 = *(undefined8 *)(param_1 + 0xa8);
    lStack_4d8 = *(long *)(param_1 + 0x40);
    uStack_4e0 = *(ulong *)(param_1 + 0x38);
    lStack_4c8 = *(long *)(param_1 + 0x50);
    uStack_4d0 = *(ulong *)(param_1 + 0x48);
    lStack_4b8 = *(long *)(param_1 + 0x60);
    uStack_4c0 = *(ulong *)(param_1 + 0x58);
    uStack_4a8 = *(undefined8 *)(param_1 + 0x70);
    uStack_4b0 = *(ulong *)(param_1 + 0x68);
    uStack_1e8 = *(undefined8 *)(param_2 + 0xc0);
    uStack_1f0 = *(undefined8 *)(param_2 + 0xb8);
    uStack_1d8 = *(undefined8 *)(param_2 + 0xd0);
    uStack_1e0 = *(undefined8 *)(param_2 + 200);
    uStack_1c8 = *(undefined8 *)(param_2 + 0xe0);
    uStack_1d0 = *(undefined8 *)(param_2 + 0xd8);
    uStack_1b8 = *(undefined8 *)(param_2 + 0xf0);
    uStack_1c0 = *(undefined8 *)(param_2 + 0xe8);
    uStack_228 = *(undefined8 *)(param_2 + 0x80);
    uStack_230 = *(undefined8 *)(param_2 + 0x78);
    uStack_218 = *(undefined8 *)(param_2 + 0x90);
    uStack_220 = *(undefined8 *)(param_2 + 0x88);
    uStack_208 = *(undefined8 *)(param_2 + 0xa0);
    uStack_210 = *(undefined8 *)(param_2 + 0x98);
    uStack_1f8 = *(undefined8 *)(param_2 + 0xb0);
    uStack_200 = *(undefined8 *)(param_2 + 0xa8);
    uStack_268 = *(undefined8 *)(param_2 + 0x40);
    uStack_270 = *(undefined8 *)(param_2 + 0x38);
    uStack_258 = *(undefined8 *)(param_2 + 0x50);
    uStack_260 = *(undefined8 *)(param_2 + 0x48);
    uStack_248 = *(undefined8 *)(param_2 + 0x60);
    uStack_250 = *(undefined8 *)(param_2 + 0x58);
    uStack_238 = *(undefined8 *)(param_2 + 0x70);
    uStack_240 = *(undefined8 *)(param_2 + 0x68);
    uStack_398 = *(undefined8 *)(param_2 + 0xc0);
    uStack_3a0 = *(undefined8 *)(param_2 + 0xb8);
    uStack_388 = *(undefined8 *)(param_2 + 0xd0);
    uStack_390 = *(undefined8 *)(param_2 + 200);
    uStack_378 = *(undefined8 *)(param_2 + 0xe0);
    uStack_380 = *(undefined8 *)(param_2 + 0xd8);
    uStack_368 = *(undefined8 *)(param_2 + 0xf0);
    uStack_370 = *(undefined8 *)(param_2 + 0xe8);
    lStack_3d8 = *(long *)(param_2 + 0x80);
    uStack_3e0 = *(undefined8 *)(param_2 + 0x78);
    uStack_3c8 = *(undefined8 *)(param_2 + 0x90);
    uStack_3d0 = *(undefined8 *)(param_2 + 0x88);
    uStack_3b8 = *(undefined8 *)(param_2 + 0xa0);
    uStack_3c0 = *(undefined8 *)(param_2 + 0x98);
    uStack_3a8 = *(undefined8 *)(param_2 + 0xb0);
    uStack_3b0 = *(undefined8 *)(param_2 + 0xa8);
    lStack_418 = *(long *)(param_2 + 0x40);
    uStack_420 = *(ulong *)(param_2 + 0x38);
    lStack_408 = *(long *)(param_2 + 0x50);
    uStack_410 = *(ulong *)(param_2 + 0x48);
    lStack_3f8 = *(long *)(param_2 + 0x60);
    uStack_400 = *(ulong *)(param_2 + 0x58);
    uStack_3e8 = *(undefined8 *)(param_2 + 0x70);
    uStack_3f0 = *(ulong *)(param_2 + 0x68);
    iVar7 = (int)&uStack_4e0;
    FUN_103d99e38();
    if (iVar7 == 1) {
      iVar7 = (int)&uStack_420;
      FUN_103d99e38();
      if (iVar7 != 1) {
LAB_103d8d96c:
        func_0x000107c610b4(&uStack_660,&uStack_4e0,0x180);
        func_0x000103da2a94(&uStack_330,&uStack_180,0x1130085b8,&UNK_10dc8da18);
        func_0x000103da2a94(&uStack_270,&uStack_180,0x1130085b8,&UNK_10dc8da18);
        func_0x000103da2994(&uStack_660,0x1130085c0,&UNK_10dc8da20);
        goto LAB_103d8e198;
      }
      uStack_5c8 = uStack_448;
      uStack_5d0 = uStack_450;
      uStack_5b8 = uStack_438;
      uStack_5c0 = uStack_440;
      uStack_5a8 = uStack_428;
      uStack_5b0 = uStack_430;
      lStack_618 = lStack_498;
      uStack_620 = uStack_4a0;
      uStack_608 = uStack_488;
      uStack_610 = uStack_490;
      uStack_5f8 = uStack_478;
      uStack_600 = uStack_480;
      uStack_5e8 = uStack_468;
      uStack_5f0 = uStack_470;
      uStack_5d8 = uStack_458;
      uStack_5e0 = uStack_460;
      lStack_658 = lStack_4d8;
      uStack_660 = uStack_4e0;
      lStack_648 = lStack_4c8;
      uStack_650 = uStack_4d0;
      lStack_638 = lStack_4b8;
      uStack_640 = uStack_4c0;
      uStack_628 = uStack_4a8;
      uStack_630 = uStack_4b0;
      func_0x000103da2a94(&uStack_330,&uStack_180,0x1130085b8,&UNK_10dc8da18);
      func_0x000103da2a94(&uStack_270,&uStack_180,0x1130085b8,&UNK_10dc8da18);
      func_0x000103da2994(&uStack_660,0x1130085b8,&UNK_10dc8da18);
    }
    else {
      uStack_7b8 = uStack_458;
      uStack_7c0 = uStack_460;
      uStack_7a8 = uStack_448;
      uStack_7b0 = uStack_450;
      uStack_798 = uStack_438;
      uStack_7a0 = uStack_440;
      uStack_788 = uStack_428;
      uStack_790 = uStack_430;
      lStack_7f8 = lStack_498;
      uStack_800 = uStack_4a0;
      uStack_7e8 = uStack_488;
      uStack_7f0 = uStack_490;
      uStack_7d8 = uStack_478;
      uStack_7e0 = uStack_480;
      uStack_7c8 = uStack_468;
      uStack_7d0 = uStack_470;
      lStack_838 = lStack_4d8;
      uStack_840 = uStack_4e0;
      lStack_828 = lStack_4c8;
      uStack_830 = uStack_4d0;
      lStack_818 = lStack_4b8;
      uStack_820 = uStack_4c0;
      uStack_808 = uStack_4a8;
      uStack_810 = uStack_4b0;
      iVar7 = (int)&uStack_420;
      FUN_103d99e38();
      if (iVar7 == 1) goto LAB_103d8d96c;
      uStack_878 = uStack_398;
      uStack_880 = uStack_3a0;
      uStack_868 = uStack_388;
      uStack_870 = uStack_390;
      uStack_858 = uStack_378;
      uStack_860 = uStack_380;
      uStack_848 = uStack_368;
      uStack_850 = uStack_370;
      lStack_8b8 = lStack_3d8;
      uStack_8c0 = uStack_3e0;
      uStack_8a8 = uStack_3c8;
      uStack_8b0 = uStack_3d0;
      uStack_898 = uStack_3b8;
      uStack_8a0 = uStack_3c0;
      uStack_888 = uStack_3a8;
      uStack_890 = uStack_3b0;
      lStack_8f8 = lStack_418;
      uStack_900 = uStack_420;
      lStack_8e8 = lStack_408;
      uStack_8f0 = uStack_410;
      lStack_8d8 = lStack_3f8;
      uStack_8e0 = uStack_400;
      uStack_8c8 = uStack_3e8;
      uStack_8d0 = uStack_3f0;
      uStack_5e8 = uStack_3a8;
      uStack_5f0 = uStack_3b0;
      uStack_5d8 = uStack_398;
      uStack_5e0 = uStack_3a0;
      uStack_5c8 = uStack_388;
      uStack_5d0 = uStack_390;
      uStack_5b8 = uStack_378;
      uStack_5c0 = uStack_380;
      uStack_5a8 = uStack_368;
      uStack_5b0 = uStack_370;
      lStack_618 = lStack_3d8;
      uStack_620 = uStack_3e0;
      uStack_608 = uStack_3c8;
      uStack_610 = uStack_3d0;
      uStack_5f8 = uStack_3b8;
      uStack_600 = uStack_3c0;
      lStack_658 = lStack_418;
      uStack_660 = uStack_420;
      lStack_648 = lStack_408;
      uStack_650 = uStack_410;
      lStack_638 = lStack_3f8;
      uStack_640 = uStack_400;
      uStack_628 = uStack_3e8;
      uStack_630 = uStack_3f0;
      uStack_f8 = uStack_7b8;
      uStack_100 = uStack_7c0;
      uStack_e8 = uStack_7a8;
      uStack_f0 = uStack_7b0;
      uStack_d8 = uStack_798;
      uStack_e0 = uStack_7a0;
      uStack_c8 = uStack_788;
      uStack_d0 = uStack_790;
      lStack_138 = lStack_7f8;
      uStack_140 = uStack_800;
      uStack_128 = uStack_7e8;
      uStack_130 = uStack_7f0;
      uStack_118 = uStack_7d8;
      uStack_120 = uStack_7e0;
      uStack_108 = uStack_7c8;
      uStack_110 = uStack_7d0;
      lStack_178 = lStack_838;
      uStack_180 = uStack_840;
      lStack_168 = lStack_828;
      uStack_170 = uStack_830;
      lStack_158 = lStack_818;
      uStack_160 = uStack_820;
      uStack_148 = uStack_808;
      uStack_150 = uStack_810;
      func_0x000103da2a94(&uStack_330,&uStack_9c0,0x1130085b8,&UNK_10dc8da18);
      func_0x000103da2a94(&uStack_270,&uStack_9c0,0x1130085b8,&UNK_10dc8da18);
      puVar10 = &uStack_180;
      FUN_103d99f80(puVar10,&uStack_660);
      func_0x000103da2994(&uStack_900,0x1130085b8,&UNK_10dc8da18);
      func_0x000103da2994(&uStack_4e0,0x1130085b8,&UNK_10dc8da18);
      if (((ulong)puVar10 & 1) == 0) goto LAB_103d8e198;
    }
    func_0x000107c61428(param_1 + 0xf8,auStack_678,0,0);
    func_0x000107c61428(param_2 + 0xf8,auStack_690,0,0);
    uVar17 = *(ulong *)(param_1 + 0xf8);
    uVar26 = *(ulong *)(param_1 + 0x100);
    uVar16 = *(undefined8 *)(param_1 + 0x108);
    uVar15 = *(ulong *)(param_2 + 0xf8);
    uVar24 = *(ulong *)(param_2 + 0x100);
    uVar13 = *(undefined8 *)(param_2 + 0x108);
    uVar18 = uVar16;
    uVar19 = uVar26;
    uVar21 = uVar17;
    if (uVar17 == 0) {
      if (uVar15 == 0) {
        FUN_103d9aac8(0,uVar26,uVar16);
        FUN_103d9aac8(0,uVar24,uVar13);
LAB_103d8dbf4:
        func_0x000103da2928(uVar17,uVar26,uVar16);
        func_0x000107c61428(param_1 + 0x110,auStack_6a8,0,0);
        func_0x000107c61428(param_2 + 0x110,auStack_6c0,0,0);
        uVar15 = *(ulong *)(param_1 + 0x110);
        uVar19 = *(ulong *)(param_1 + 0x118);
        uVar17 = *(ulong *)(param_1 + 0x120);
        uVar21 = *(ulong *)(param_1 + 0x128);
        uVar13 = *(undefined8 *)(param_1 + 0x130);
        uVar24 = *(ulong *)(param_2 + 0x110);
        uVar22 = *(ulong *)(param_2 + 0x118);
        uVar26 = *(ulong *)(param_2 + 0x120);
        uVar6 = *(ulong *)(param_2 + 0x128);
        uVar18 = *(undefined8 *)(param_2 + 0x130);
        if (uVar15 == 0) {
          if (uVar24 == 0) {
            FUN_103d9aa20(0,uVar19,uVar17,uVar21,uVar13);
            FUN_103d9aa20(0,uVar22,uVar26,uVar6,uVar18);
LAB_103d8ddb0:
            func_0x000103d9aa74(uVar15,uVar19,uVar17,uVar21,uVar13);
            func_0x000107c61428(param_1 + 0x138,auStack_6d8,0,0);
            lVar14 = *(long *)(param_1 + 0x138);
            func_0x000107c61428(param_2 + 0x138,auStack_6f0,0,0);
            if (lVar14 != *(long *)(param_2 + 0x138)) goto LAB_103d8e198;
            func_0x000107c61428(param_1 + 0x140,auStack_708,0,0);
            func_0x000107c61428(param_2 + 0x140,auStack_720,0,0);
            lStack_9b8 = *(long *)(param_1 + 0x148);
            uVar15 = *(ulong *)(param_1 + 0x140);
            lVar14 = *(long *)(param_1 + 0x158);
            uVar17 = *(ulong *)(param_1 + 0x150);
            lVar25 = *(long *)(param_1 + 0x168);
            uVar24 = *(ulong *)(param_1 + 0x160);
            uVar13 = *(undefined8 *)(param_1 + 0x178);
            uVar26 = *(ulong *)(param_1 + 0x170);
            lStack_8f8 = *(long *)(param_2 + 0x148);
            uStack_900 = *(ulong *)(param_2 + 0x140);
            lStack_8e8 = *(long *)(param_2 + 0x158);
            uStack_8f0 = *(ulong *)(param_2 + 0x150);
            lStack_498 = *(long *)(param_2 + 0x148);
            uStack_4a0 = *(undefined8 *)(param_2 + 0x140);
            uStack_488 = *(undefined8 *)(param_2 + 0x158);
            uStack_490 = *(undefined8 *)(param_2 + 0x150);
            uStack_478 = *(undefined8 *)(param_2 + 0x168);
            uStack_480 = *(undefined8 *)(param_2 + 0x160);
            uStack_8c8 = *(undefined8 *)(param_2 + 0x178);
            uStack_8d0 = *(ulong *)(param_2 + 0x170);
            lStack_8d8 = *(long *)(param_2 + 0x168);
            uStack_8e0 = *(ulong *)(param_2 + 0x160);
            uStack_468 = *(undefined8 *)(param_2 + 0x178);
            uStack_470 = *(undefined8 *)(param_2 + 0x170);
            uStack_9c0 = uVar15;
            uStack_9b0 = uVar17;
            lStack_9a8 = lVar14;
            uStack_9a0 = uVar24;
            lStack_998 = lVar25;
            uStack_990 = uVar26;
            uStack_988 = uVar13;
            uStack_4e0 = uVar15;
            lStack_4d8 = lStack_9b8;
            uStack_4d0 = uVar17;
            lStack_4c8 = lVar14;
            uStack_4c0 = uVar24;
            lStack_4b8 = lVar25;
            uStack_4b0 = uVar26;
            uStack_4a8 = uVar13;
            if (lStack_9b8 == 0) {
              if (lStack_498 == 0) {
                func_0x000103da2a94(&uStack_9c0,&uStack_840,0x1130085c8,&UNK_10dc8da28);
                func_0x000103da2a94(&uStack_900,&uStack_840,0x1130085c8,&UNK_10dc8da28);
LAB_103d8e0c0:
                func_0x000103da2994(&uStack_4e0,0x1130085c8,&UNK_10dc8da28);
                func_0x000107c61428(param_1 + 0x180,&uStack_4e0,0,0);
                func_0x000107c61428(param_2 + 0x180,&uStack_840,0,0);
                uVar17 = *(ulong *)(param_1 + 0x180);
                uVar26 = *(ulong *)(param_1 + 0x188);
                uVar16 = *(undefined8 *)(param_1 + 400);
                uVar15 = *(ulong *)(param_2 + 0x180);
                uVar24 = *(ulong *)(param_2 + 0x188);
                uVar13 = *(undefined8 *)(param_2 + 400);
                uVar18 = uVar16;
                uVar19 = uVar26;
                uVar21 = uVar17;
                if (uVar17 == 0) {
                  if (uVar15 != 0) goto LAB_103d8db94;
                  FUN_103d9aac8(0,uVar26,uVar16);
                  FUN_103d9aac8(0,uVar24,uVar13);
                }
                else {
                  if (uVar15 == 0) goto LAB_103d8db94;
                  FUN_103d9aac8(uVar17,uVar26,uVar16);
                  FUN_103d9aac8(uVar15,uVar24,uVar13);
                  uVar19 = uVar17;
                  func_0x000103d97868(uVar17,uVar15);
                  if ((uVar19 & 1) == 0) goto LAB_103d8e178;
                  uVar19 = uVar26;
                  func_0x000100e25fcc(uVar26,uVar16,uVar24,uVar13);
                  func_0x000103da2928(uVar15,uVar24,uVar13);
                  if ((uVar19 & 1) == 0) goto LAB_103d8e194;
                }
                func_0x000103da2928(uVar17,uVar26,uVar16);
                func_0x000107c61428(param_1 + 0x198,auStack_760,0,0);
                uVar13 = *(undefined8 *)(param_1 + 0x198);
                func_0x000107c61428(param_2 + 0x198,auStack_778,0,0);
                func_0x00010142cfc4(uVar13,*(undefined8 *)(param_2 + 0x198));
                uVar8 = (uint)uVar13;
                goto LAB_103d8e19c;
              }
LAB_103d8dfb0:
              uStack_840 = uVar15;
              lStack_838 = lStack_9b8;
              uStack_830 = uVar17;
              lStack_828 = lVar14;
              uStack_820 = uVar24;
              lStack_818 = lVar25;
              uStack_810 = uVar26;
              uStack_808 = uVar13;
              uStack_800 = uStack_4a0;
              lStack_7f8 = lStack_498;
              uStack_7f0 = uStack_490;
              uStack_7e8 = uStack_488;
              uStack_7e0 = uStack_480;
              uStack_7d8 = uStack_478;
              uStack_7d0 = uStack_470;
              uStack_7c8 = uStack_468;
              func_0x000103da2a94(&uStack_9c0,auStack_760,0x1130085c8,&UNK_10dc8da28);
              func_0x000103da2a94(&uStack_900,auStack_760,0x1130085c8,&UNK_10dc8da28);
              uVar13 = 0x1130085d0;
              puVar12 = &UNK_10dc8da30;
              puVar10 = &uStack_840;
            }
            else {
              if (lStack_498 == 0) goto LAB_103d8dfb0;
              lStack_838 = *(long *)(param_2 + 0x148);
              uStack_840 = *(ulong *)(param_2 + 0x140);
              lVar23 = *(long *)(param_2 + 0x158);
              uVar21 = *(ulong *)(param_2 + 0x150);
              lVar20 = *(long *)(param_2 + 0x168);
              uVar19 = *(ulong *)(param_2 + 0x160);
              uVar18 = *(undefined8 *)(param_2 + 0x178);
              uVar22 = *(ulong *)(param_2 + 0x170);
              uStack_830 = uVar21;
              lStack_828 = lVar23;
              uStack_820 = uVar19;
              lStack_818 = lVar20;
              uStack_810 = uVar22;
              uStack_808 = uVar18;
              if (((((uVar15 == uStack_840) && (lStack_838 == lStack_9b8)) ||
                   (func_0x000107c605b8(), (uVar15 & 1) != 0)) &&
                  (((uVar17 == uVar21 && (lVar14 == lVar23)) ||
                   (func_0x000107c605b8(uVar17,lVar14,uVar21,lVar23,0), (uVar17 & 1) != 0)))) &&
                 (((uVar24 == uVar19 && (lVar25 == lVar20)) ||
                  (func_0x000107c605b8(uVar24,lVar25,uVar19,lVar20,0), (uVar24 & 1) != 0)))) {
                func_0x000103da2a94(&uStack_9c0,auStack_760,0x1130085c8,&UNK_10dc8da28);
                func_0x000103da2a94(&uStack_900,auStack_760,0x1130085c8,&UNK_10dc8da28);
                func_0x000100e25fcc(uVar26,uVar13,uVar22,uVar18);
                func_0x000103da2994(&uStack_840,0x1130085c8,&UNK_10dc8da28);
                if ((uVar26 & 1) != 0) goto LAB_103d8e0c0;
                uVar13 = 0x1130085c8;
                puVar12 = &UNK_10dc8da28;
                puVar10 = &uStack_4e0;
              }
              else {
                uVar13 = 0x1130085c8;
                puVar12 = &UNK_10dc8da28;
                func_0x000103da2a94(&uStack_9c0,auStack_760,0x1130085c8,&UNK_10dc8da28);
                func_0x000103da2a94(&uStack_900,auStack_760,0x1130085c8,&UNK_10dc8da28);
                func_0x000103da2994(&uStack_840,0x1130085c8,&UNK_10dc8da28);
                puVar10 = &uStack_4e0;
              }
            }
            func_0x000103da2994(puVar10,uVar13,puVar12);
            goto LAB_103d8e198;
          }
LAB_103d8dcec:
          FUN_103d9aa20(uVar15,uVar19,uVar17,uVar21,uVar13);
          FUN_103d9aa20(uVar24,uVar22,uVar26,uVar6,uVar18);
          func_0x000103d9aa74(uVar15,uVar19,uVar17,uVar21,uVar13);
          uVar15 = uVar24;
          uVar19 = uVar22;
          uVar17 = uVar26;
          uVar21 = uVar6;
          uVar13 = uVar18;
        }
        else {
          if (uVar24 == 0) goto LAB_103d8dcec;
          FUN_103d9aa20(uVar15,uVar19,uVar17,uVar21,uVar13);
          FUN_103d9aa20(uVar24,uVar22,uVar26,uVar6,uVar18);
          uVar11 = uVar15;
          func_0x000103d97868(uVar15,uVar24);
          if ((((uVar11 & 1) == 0) ||
              (uVar11 = uVar19, FUN_103d97f28(uVar19,uVar22), (uVar11 & 1) == 0)) ||
             (uVar11 = uVar17, func_0x000103d97868(uVar17,uVar26), (uVar11 & 1) == 0)) {
            func_0x000103d9aa74(uVar24,uVar22,uVar26,uVar6,uVar18);
          }
          else {
            uVar11 = uVar21;
            func_0x000100e25fcc(uVar21,uVar13,uVar6,uVar18);
            func_0x000103d9aa74(uVar24,uVar22,uVar26,uVar6,uVar18);
            if ((uVar11 & 1) != 0) goto LAB_103d8ddb0;
          }
        }
        func_0x000103d9aa74(uVar15,uVar19,uVar17,uVar21,uVar13);
        goto LAB_103d8e198;
      }
LAB_103d8db94:
      uVar17 = uVar15;
      uVar26 = uVar24;
      uVar16 = uVar13;
      FUN_103d9aac8(uVar21,uVar19,uVar18);
      FUN_103d9aac8(uVar17,uVar26,uVar16);
      func_0x000103da2928(uVar21,uVar19,uVar18);
    }
    else {
      if (uVar15 == 0) goto LAB_103d8db94;
      FUN_103d9aac8(uVar17,uVar26,uVar16);
      FUN_103d9aac8(uVar15,uVar24,uVar13);
      uVar19 = uVar17;
      FUN_103d97634(uVar17,uVar15);
      if ((uVar19 & 1) == 0) {
LAB_103d8e178:
        func_0x000103da2928(uVar15,uVar24,uVar13);
      }
      else {
        uVar19 = uVar26;
        func_0x000100e25fcc(uVar26,uVar16,uVar24,uVar13);
        func_0x000103da2928(uVar15,uVar24,uVar13);
        if ((uVar19 & 1) != 0) goto LAB_103d8dbf4;
      }
    }
LAB_103d8e194:
    func_0x000103da2928(uVar17,uVar26,uVar16);
  }
LAB_103d8e198:
  uVar8 = 0;
LAB_103d8e19c:
  return uVar8 & 1;
}



/* Entry: 103d8e24c; end: 103d8e29f;  */

void FUN_103d8e24c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam00000001130085d8 != -1) {
    func_0x000107c61568(0x1130085d8,FUN_103d8c35c);
  }
  uVar1 = uRam00000001130085e0;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103d8e2a0; end: 103d8e2fb;  */

void FUN_103d8e2a0(void)

{
  FUN_103d931a0();
  return;
}



/* Entry: 103d8e2fc; end: 103d8e333;  */

uint FUN_103d8e2fc(long param_1,long param_2)

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
  func_0x000103da27a4();
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



/* Entry: 103d8e334; end: 103d8e33f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d8e334(long *param_1)

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
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
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
  
  lVar22 = *param_1;
  uVar16 = param_1[1];
  uVar26 = param_1[2];
  pbVar9 = (byte *)*unaff_x20;
  pbVar23 = (byte *)unaff_x20[1];
  uVar25 = unaff_x20[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103d8d4d8(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
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
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
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
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
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
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
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



/* Entry: 103d8e340; end: 103d8e3df;  */

/* WARNING: Possible PIC construction at 0x000103d8e38c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8e39c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8e390) */
/* WARNING: Removing unreachable block (ram,0x000103d8e3a0) */

void FUN_103d8e340(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008818 != -1) {
    func_0x000107c61568(0x113008818,FUN_103d8c314);
  }
  uVar5 = uRam0000000113811ad8;
  uVar4 = uRam0000000113811ad0;
  uVar3 = uRam0000000113811ac8;
  uVar2 = uRam0000000113811ac0;
  uVar1 = uRam0000000113811ab8;
  *param_1 = uRam0000000113811ab0;
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



/* Entry: 103d8e3e0; end: 103d8e3f3;  */

void FUN_103d8e3e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130091f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130091f8,&UNK_10dc8faa8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8e3f4; end: 103d8e42b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8e3f4(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103cd1978();
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



/* Entry: 103d8e42c; end: 103d8e437;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d8e42c(undefined8 *param_1,long *param_2)

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
  uint uVar20;
  byte *pbVar21;
  byte *unaff_x19;
  long lVar22;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  long lVar24;
  byte *unaff_x23;
  ulong uVar25;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar26;
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
  
  pbVar9 = (byte *)*param_1;
  pbVar23 = (byte *)param_1[1];
  uVar25 = param_1[2];
  lVar22 = *param_2;
  uVar16 = param_2[1];
  uVar26 = param_2[2];
  if (uVar25 != uVar26) {
    func_0x000107c6157c(uVar25);
    func_0x000107c6157c(uVar26);
    uVar12 = uVar25;
    FUN_103d8d4d8(uVar25,uVar26);
    func_0x000107c61574(uVar26);
    func_0x000107c61574(uVar25);
    if ((uVar12 & 1) == 0) {
      return (byte *)0x0;
    }
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
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar25 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar25 = 0, lVar22 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar25 = (ulong)pbVar23 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar25 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar26 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar25 == (long)(iVar19 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar25 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar25 = 0;
      if (uVar20 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar20 == 2) {
        uVar26 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar25 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar25 < 1) goto code_r0x000100e26128;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar23;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar23 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar23 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar23 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar23 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar23 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar23 >> 0x30 & 0xff) - 0x70));
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
          lVar24 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar24,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar24 - (long)pbVar13);
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
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar22,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar25 == 0);
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
    bVar27 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar14 = pbVar9;
    if (bVar27 < 3) {
      if (bVar27 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar22 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar22,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar27 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar22 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar22,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar23;
        if ((pbVar9 == pbVar15) && (pbVar23 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar22 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
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
      )(pbVar11,pbVar14,pbVar15,pbVar17,0);
      return pbVar11;
    }
    lVar24 = *(long *)(pbVar8 + 0x20);
    if (bVar27 < 5) {
      if (bVar27 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar23, pbVar14 = pbVar21, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar23 == *(byte **)(pbVar13 + 0x10) && pbVar21 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar22 = *(long *)(pbVar13 + 0x20);
      if (pbVar23 == (byte *)0x0) {
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
        pbVar14 = pbVar23;
        if ((pbVar9 != pbVar15) || (pbVar23 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar24 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar13 + 0x18)) && (lVar24 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar24,*(byte **)(pbVar13 + 0x18),lVar22,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar22 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar27 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar24 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar24 = *(long *)(pbVar13 + 0x20);
        lVar22 = *(long *)(pbVar13 + 0x18);
        bVar27 = pbVar13[8] | (byte)lVar22;
        bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
        bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
        bVar35 = pbVar13[0x10] | (byte)lVar24;
        bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
        bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
        bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
        bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
        bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
        bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
        bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
          lVar24 == 0)) {
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
      lVar24 = *(long *)(pbVar13 + 0x20);
      lVar22 = *(long *)(pbVar13 + 0x18);
      bVar27 = pbVar13[8] | (byte)lVar22;
      bVar28 = pbVar13[9] | (byte)((ulong)lVar22 >> 8);
      bVar29 = pbVar13[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar30 = pbVar13[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar31 = pbVar13[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar32 = pbVar13[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar33 = pbVar13[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar34 = pbVar13[0xf] | (byte)((ulong)lVar22 >> 0x38);
      bVar35 = pbVar13[0x10] | (byte)lVar24;
      bVar36 = pbVar13[0x11] | (byte)((ulong)lVar24 >> 8);
      bVar37 = pbVar13[0x12] | (byte)((ulong)lVar24 >> 0x10);
      bVar38 = pbVar13[0x13] | (byte)((ulong)lVar24 >> 0x18);
      bVar39 = pbVar13[0x14] | (byte)((ulong)lVar24 >> 0x20);
      bVar40 = pbVar13[0x15] | (byte)((ulong)lVar24 >> 0x28);
      bVar41 = pbVar13[0x16] | (byte)((ulong)lVar24 >> 0x30);
      bVar42 = pbVar13[0x17] | (byte)((ulong)lVar24 >> 0x38);
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
      lVar22 = CONCAT17(bVar34 | auVar43[7],
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
    lVar22 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar24 = *(long *)pbVar13;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar24,uVar10);
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



/* Entry: 103d8e438; end: 103d8e47f;  */

void FUN_103d8e438(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc901e0,0x20,2);
  uRam0000000113811ae8 = uStack_38;
  uRam0000000113811ae0 = uStack_40;
  uRam0000000113811af8 = uStack_28;
  uRam0000000113811af0 = uStack_30;
  uRam0000000113811b08 = uStack_18;
  uRam0000000113811b00 = uStack_20;
  return;
}



/* Entry: 103d8e480; end: 103d8e523;  */

void FUN_103d8e480(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      FUN_103d8e524();
    }
    else if (lVar1 == 2) {
      FUN_103d8e68c();
    }
  }
  return;
}



/* Entry: 103d8e524; end: 103d8e68b;  */

/* WARNING: Removing unreachable block (ram,0x000103d8e654) */

void FUN_103d8e524(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  plVar6 = param_1;
  if ((uVar9 >> 0x3d & 1) == 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_103d98a6c(lVar1,lVar3,uVar9);
    plVar6 = (long *)0x0;
    FUN_103da2928(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar9;
  }
  pcVar8 = *(code **)(param_4 + 0x198);
  func_0x000103ccc558();
  (*pcVar8)(&lStack_78,&UNK_11070cee0,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar9 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar8 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar8)(param_3,param_4);
    }
    FUN_103da2928(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5;
    FUN_103d98af4(lVar2,lVar4,lVar7);
  }
  else {
    FUN_103da2928(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 103d8e68c; end: 103d8e807;  */

/* WARNING: Removing unreachable block (ram,0x000103d8e7cc) */

void FUN_103d8e68c(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x21;
  code *pcVar9;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar7 = param_1[2];
  plVar6 = param_1;
  if ((uVar7 & 0x3000000000000000) != 0x3000000000000000 && (uVar7 & 0x2000000000000000) != 0) {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_103d98a6c(lVar1,lVar3);
    plVar6 = (long *)0x0;
    FUN_103da2928(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar7 & 0xdfffffffffffffff;
  }
  pcVar9 = *(code **)(param_4 + 0x198);
  FUN_103ccc518();
  (*pcVar9)(&lStack_78,&UNK_11070cff8,plVar6,param_3,param_4);
  uVar5 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if ((uVar7 & 0x3000000000000000) == 0x3000000000000000) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
    }
    else {
      pcVar9 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar3,uVar5);
      (*pcVar9)(param_3,param_4);
    }
    FUN_103da2928(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar5 | 0x2000000000000000;
    FUN_103d98af4(lVar2,lVar4,lVar8);
  }
  else {
    FUN_103da2928(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 103d8e808; end: 103d8e883;  */

void FUN_103d8e808(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long unaff_x21;
  
  if (((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) {
    if ((*(ulong *)(unaff_x20 + 0x10) >> 0x3d & 1) == 0) {
      FUN_103d8e884();
    }
    else {
      FUN_103d8e908();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      param_2,param_3);
  return;
}



/* Entry: 103d8e884; end: 103d8e907;  */

void FUN_103d8e884(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if ((uStack_50 >> 0x3d & 1) == 0) {
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103ccc558();
    (*pcVar1)(&uStack_60,1,&UNK_11070cee0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103d8e908);
  (*pcVar1)();
}



/* Entry: 103d8e908; end: 103d8e9a3;  */

void FUN_103d8e908(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = param_1[2];
  if (((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0 &&
      (uStack_50 & 0x2000000000000000) != 0) {
    uStack_50 = uStack_50 & 0xdfffffffffffffff;
    uStack_58 = param_1[1];
    uStack_60 = *param_1;
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103ccc518();
    (*pcVar1)(&uStack_60,2,&UNK_11070cff8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103d8e9a4);
  (*pcVar1)();
}



/* Entry: 103d8e9a4; end: 103d8e9f7;  */

void FUN_103d8e9a4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[2] = 0x3000000000000000;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 103d8e9f8; end: 103d8ea0b;  */

void FUN_103d8e9f8(void)

{
  FUN_103d8e480();
  return;
}



/* Entry: 103d8ea0c; end: 103d8ea43;  */

void FUN_103d8ea0c(void)

{
  FUN_103d8e808();
  return;
}



/* Entry: 103d8ea44; end: 103d8ea7b;  */

uint FUN_103d8ea44(long param_1,long param_2)

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
  func_0x000103da2764();
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



/* Entry: 103d8ea7c; end: 103d8eac3;  */

uint FUN_103d8ea7c(undefined8 *param_1)

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
  func_0x000103d99bac(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d8eac4; end: 103d8eb63;  */

/* WARNING: Possible PIC construction at 0x000103d8eb10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8eb20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8eb14) */
/* WARNING: Removing unreachable block (ram,0x000103d8eb24) */

void FUN_103d8eac4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008828 != -1) {
    func_0x000107c61568(0x113008828,FUN_103d8e438);
  }
  uVar5 = uRam0000000113811b08;
  uVar4 = uRam0000000113811b00;
  uVar3 = uRam0000000113811af8;
  uVar2 = uRam0000000113811af0;
  uVar1 = uRam0000000113811ae8;
  *param_1 = uRam0000000113811ae0;
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



/* Entry: 103d8eb64; end: 103d8eb77;  */

void FUN_103d8eb64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130091e8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130091e8,&UNK_10dc8faa0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8eb78; end: 103d8ec7b;  */

void FUN_103d8eb78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d8ec7c; end: 103d8ed0b;  */

uint FUN_103d8ec7c(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000103d99bac(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103d8ed0c; end: 103d8ed43;  */

undefined1  [16] FUN_103d8ed0c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6f30;
  auVar1._0_8_ = 0xd000000000000022;
  return auVar1;
}



/* Entry: 103d8ed44; end: 103d8ed9b;  */

void FUN_103d8ed44(void)

{
  FUN_103d925f4();
  return;
}



/* Entry: 103d8ed9c; end: 103d8edd3;  */

uint FUN_103d8ed9c(long param_1,long param_2)

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
  func_0x000103da2724();
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



/* Entry: 103d8edd4; end: 103d8eddf;  */

uint FUN_103d8edd4(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_268 [168];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 == *(long *)(lVar1 + 0x10)) {
    if (lVar9 != 0 && lVar2 != lVar1) {
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      puVar11 = (undefined8 *)(lVar1 + 0x20);
      do {
        uStack_138 = puVar10[0x11];
        uStack_140 = puVar10[0x10];
        uStack_128 = puVar10[0x13];
        uStack_130 = puVar10[0x12];
        uStack_120 = puVar10[0x14];
        uStack_178 = puVar10[9];
        uStack_180 = puVar10[8];
        uStack_168 = puVar10[0xb];
        uStack_170 = puVar10[10];
        uStack_158 = puVar10[0xd];
        uStack_160 = puVar10[0xc];
        uStack_148 = puVar10[0xf];
        uStack_150 = puVar10[0xe];
        uStack_1b8 = puVar10[1];
        uStack_1c0 = *puVar10;
        uStack_1a8 = puVar10[3];
        uStack_1b0 = puVar10[2];
        uStack_198 = puVar10[5];
        uStack_1a0 = puVar10[4];
        uStack_188 = puVar10[7];
        uStack_190 = puVar10[6];
        uStack_88 = puVar11[0x11];
        uStack_90 = puVar11[0x10];
        uStack_78 = puVar11[0x13];
        uStack_80 = puVar11[0x12];
        uStack_70 = puVar11[0x14];
        uStack_c8 = puVar11[9];
        uStack_d0 = puVar11[8];
        uStack_b8 = puVar11[0xb];
        uStack_c0 = puVar11[10];
        uStack_a8 = puVar11[0xd];
        uStack_b0 = puVar11[0xc];
        uStack_98 = puVar11[0xf];
        uStack_a0 = puVar11[0xe];
        uStack_108 = puVar11[1];
        uStack_110 = *puVar11;
        uStack_f8 = puVar11[3];
        uStack_100 = puVar11[2];
        uStack_e8 = puVar11[5];
        uStack_f0 = puVar11[4];
        uStack_d8 = puVar11[7];
        uStack_e0 = puVar11[6];
        func_0x000103da2a34(&uStack_1c0,auStack_268);
        func_0x000103da2a34(&uStack_110,auStack_268);
        puVar5 = &uStack_1c0;
        func_0x000103d98df8(puVar5,&uStack_110);
        func_0x000103da2a68(&uStack_110);
        func_0x000103da2a68(&uStack_1c0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_103d99514;
        puVar11 = puVar11 + 0x15;
        puVar10 = puVar10 + 0x15;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_103d99514:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103d8ede0; end: 103d8ee7f;  */

/* WARNING: Possible PIC construction at 0x000103d8ee2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8ee3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8ee30) */
/* WARNING: Removing unreachable block (ram,0x000103d8ee40) */

void FUN_103d8ede0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008838 != -1) {
    func_0x000107c61568(0x113008838,0x103d8ecc4);
  }
  uVar5 = uRam0000000113811b38;
  uVar4 = uRam0000000113811b30;
  uVar3 = uRam0000000113811b28;
  uVar2 = uRam0000000113811b20;
  uVar1 = uRam0000000113811b18;
  *param_1 = uRam0000000113811b10;
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



/* Entry: 103d8ee80; end: 103d8ee93;  */

void FUN_103d8ee80(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130091d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130091d8,&UNK_10dc8fa98);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8ee94; end: 103d8eecb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8ee94(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103ccc558();
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



/* Entry: 103d8eecc; end: 103d8eed7;  */

uint FUN_103d8eecc(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_268 [168];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_138 = puVar10[0x11];
        uStack_140 = puVar10[0x10];
        uStack_128 = puVar10[0x13];
        uStack_130 = puVar10[0x12];
        uStack_120 = puVar10[0x14];
        uStack_178 = puVar10[9];
        uStack_180 = puVar10[8];
        uStack_168 = puVar10[0xb];
        uStack_170 = puVar10[10];
        uStack_158 = puVar10[0xd];
        uStack_160 = puVar10[0xc];
        uStack_148 = puVar10[0xf];
        uStack_150 = puVar10[0xe];
        uStack_1b8 = puVar10[1];
        uStack_1c0 = *puVar10;
        uStack_1a8 = puVar10[3];
        uStack_1b0 = puVar10[2];
        uStack_198 = puVar10[5];
        uStack_1a0 = puVar10[4];
        uStack_188 = puVar10[7];
        uStack_190 = puVar10[6];
        uStack_88 = puVar11[0x11];
        uStack_90 = puVar11[0x10];
        uStack_78 = puVar11[0x13];
        uStack_80 = puVar11[0x12];
        uStack_70 = puVar11[0x14];
        uStack_c8 = puVar11[9];
        uStack_d0 = puVar11[8];
        uStack_b8 = puVar11[0xb];
        uStack_c0 = puVar11[10];
        uStack_a8 = puVar11[0xd];
        uStack_b0 = puVar11[0xc];
        uStack_98 = puVar11[0xf];
        uStack_a0 = puVar11[0xe];
        uStack_108 = puVar11[1];
        uStack_110 = *puVar11;
        uStack_f8 = puVar11[3];
        uStack_100 = puVar11[2];
        uStack_e8 = puVar11[5];
        uStack_f0 = puVar11[4];
        uStack_d8 = puVar11[7];
        uStack_e0 = puVar11[6];
        func_0x000103da2a34(&uStack_1c0,auStack_268);
        func_0x000103da2a34(&uStack_110,auStack_268);
        puVar5 = &uStack_1c0;
        func_0x000103d98df8(puVar5,&uStack_110);
        func_0x000103da2a68(&uStack_110);
        func_0x000103da2a68(&uStack_1c0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_103d99514;
        puVar11 = puVar11 + 0x15;
        puVar10 = puVar10 + 0x15;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_103d99514:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103d8eed8; end: 103d8ef43;  */

void FUN_103d8eed8(void)

{
  func_0x000107c5fb78(0x6c50656c7070412e,0xea00000000006e61);
  uRam0000000113811b40 = 0xd000000000000022;
  uRam0000000113811b48 = 0x800000010f1b6f30;
  return;
}



/* Entry: 103d8ef44; end: 103d8ef8b;  */

void FUN_103d8ef44(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc90160,0x71,2);
  uRam0000000113811b58 = uStack_38;
  uRam0000000113811b50 = uStack_40;
  uRam0000000113811b68 = uStack_28;
  uRam0000000113811b60 = uStack_30;
  uRam0000000113811b78 = uStack_18;
  uRam0000000113811b70 = uStack_20;
  return;
}



/* Entry: 103d8ef8c; end: 103d8f0eb;  */

/* WARNING: Removing unreachable block (ram,0x000103d8f0e8) */

void FUN_103d8ef8c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 3) goto LAB_103d8f014;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
        (*pcVar4)();
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103d9d5e4();
          lVar2 = unaff_x20 + 0x40;
          puVar3 = &UNK_11070d830;
        }
        else if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103d9d6e0();
          lVar2 = unaff_x20 + 0x78;
          puVar3 = &UNK_11070d8b0;
        }
        else {
          if (lVar1 != 6) goto LAB_103d8f014;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103d9d7dc();
          lVar2 = unaff_x20 + 0x90;
          puVar3 = &UNK_11070d930;
        }
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103d8f014:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103d8f0ec; end: 103d8f207;  */

void FUN_103d8f0ec(undefined8 param_1,undefined8 param_2,long param_3)

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
      if (((uVar1 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) &&
         (FUN_103d8f208(), unaff_x21 == 0)) {
        FUN_103d8f29c();
        FUN_103d8f324();
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103d8f208; end: 103d8f29b;  */

void FUN_103d8f208(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_70 = *(ulong *)(param_1 + 0x48);
  if (uStack_70 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_68 = *(undefined8 *)(param_1 + 0x50);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d9d5e4();
    (*pcVar1)(&uStack_78,4,&UNK_11070d830,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8f29c; end: 103d8f323;  */

void FUN_103d8f29c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x88);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x80);
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d9d6e0();
    (*pcVar1)(&uStack_60,5,&UNK_11070d8b0,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8f324; end: 103d8f3ab;  */

void FUN_103d8f324(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d9d7dc();
    (*pcVar1)(&uStack_60,6,&UNK_11070d930,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103d8f3ac; end: 103d8f417;  */

void FUN_103d8f3ac(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  param_1[9] = 0xf000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0xf000000000000000;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0xf000000000000000;
  return;
}



/* Entry: 103d8f418; end: 103d8f447;  */

undefined1  [16] FUN_103d8f418(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 103d8f448; end: 103d8f47b;  */

void FUN_103d8f448(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 103d8f47c; end: 103d8f48f;  */

undefined1  [16] FUN_103d8f47c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x103d8f48c;
  return auVar1;
}



/* Entry: 103d8f490; end: 103d8f4a3;  */

void FUN_103d8f490(void)

{
  FUN_103d8ef8c();
  return;
}



/* Entry: 103d8f4a4; end: 103d8f4fb;  */

void FUN_103d8f4a4(void)

{
  FUN_103d8f0ec();
  return;
}



/* Entry: 103d8f4fc; end: 103d8f4ff;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8f4fc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d8f500; end: 103d8f537;  */

uint FUN_103d8f500(long param_1,long param_2)

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
  func_0x000103da26e4();
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



/* Entry: 103d8f538; end: 103d8f5c7;  */

uint FUN_103d8f538(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_30 = param_1[0x14];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_e8 = unaff_x20[0x13];
  uStack_f0 = unaff_x20[0x12];
  uStack_e0 = unaff_x20[0x14];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  func_0x000103d98df8(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103d8f5c8; end: 103d8f667;  */

/* WARNING: Possible PIC construction at 0x000103d8f614: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8f624: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8f618) */
/* WARNING: Removing unreachable block (ram,0x000103d8f628) */

void FUN_103d8f5c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008858 != -1) {
    func_0x000107c61568(0x113008858,FUN_103d8ef44);
  }
  uVar5 = uRam0000000113811b78;
  uVar4 = uRam0000000113811b70;
  uVar3 = uRam0000000113811b68;
  uVar2 = uRam0000000113811b60;
  uVar1 = uRam0000000113811b58;
  *param_1 = uRam0000000113811b50;
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



/* Entry: 103d8f668; end: 103d8f6a3;  */

void FUN_103d8f668(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130091c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130091c8,&UNK_10dc8fa90);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8f6a4; end: 103d8f7ef;  */

void FUN_103d8f6a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
  uStack_40 = unaff_x20[0x14];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d8f7f0; end: 103d8f87f;  */

uint FUN_103d8f7f0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  func_0x000103d98df8(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 103d8f880; end: 103d8f8c7;  */

void FUN_103d8f880(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc9014e,8,2);
  uRam0000000113811b88 = uStack_38;
  uRam0000000113811b80 = uStack_40;
  uRam0000000113811b98 = uStack_28;
  uRam0000000113811b90 = uStack_30;
  uRam0000000113811ba8 = uStack_18;
  uRam0000000113811ba0 = uStack_20;
  return;
}



/* Entry: 103d8f8c8; end: 103d8f8ff;  */

undefined1  [16] FUN_103d8f8c8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b6f60;
  auVar1._0_8_ = 0xd000000000000023;
  return auVar1;
}



/* Entry: 103d8f900; end: 103d8f957;  */

void FUN_103d8f900(void)

{
  FUN_103d925f4();
  return;
}



/* Entry: 103d8f958; end: 103d8f98f;  */

uint FUN_103d8f958(long param_1,long param_2)

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
  func_0x000103da26a4();
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



/* Entry: 103d8f990; end: 103d8f9b3;  */

uint FUN_103d8f990(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_298 [184];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 == *(long *)(lVar1 + 0x10)) {
    if (lVar9 != 0 && lVar2 != lVar1) {
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      puVar11 = (undefined8 *)(lVar1 + 0x20);
      do {
        uStack_158 = puVar10[0x11];
        uStack_160 = puVar10[0x10];
        uStack_148 = puVar10[0x13];
        uStack_150 = puVar10[0x12];
        uStack_138 = puVar10[0x15];
        uStack_140 = puVar10[0x14];
        uStack_130 = puVar10[0x16];
        uStack_198 = puVar10[9];
        uStack_1a0 = puVar10[8];
        uStack_188 = puVar10[0xb];
        uStack_190 = puVar10[10];
        uStack_178 = puVar10[0xd];
        uStack_180 = puVar10[0xc];
        uStack_168 = puVar10[0xf];
        uStack_170 = puVar10[0xe];
        uStack_1d8 = puVar10[1];
        uStack_1e0 = *puVar10;
        uStack_1c8 = puVar10[3];
        uStack_1d0 = puVar10[2];
        uStack_1b8 = puVar10[5];
        uStack_1c0 = puVar10[4];
        uStack_1a8 = puVar10[7];
        uStack_1b0 = puVar10[6];
        uStack_98 = puVar11[0x11];
        uStack_a0 = puVar11[0x10];
        uStack_88 = puVar11[0x13];
        uStack_90 = puVar11[0x12];
        uStack_78 = puVar11[0x15];
        uStack_80 = puVar11[0x14];
        uStack_70 = puVar11[0x16];
        uStack_d8 = puVar11[9];
        uStack_e0 = puVar11[8];
        uStack_c8 = puVar11[0xb];
        uStack_d0 = puVar11[10];
        uStack_b8 = puVar11[0xd];
        uStack_c0 = puVar11[0xc];
        uStack_a8 = puVar11[0xf];
        uStack_b0 = puVar11[0xe];
        uStack_118 = puVar11[1];
        uStack_120 = *puVar11;
        uStack_108 = puVar11[3];
        uStack_110 = puVar11[2];
        uStack_f8 = puVar11[5];
        uStack_100 = puVar11[4];
        uStack_e8 = puVar11[7];
        uStack_f0 = puVar11[6];
        func_0x000103da29d4(&uStack_1e0,auStack_298);
        func_0x000103da29d4(&uStack_120,auStack_298);
        puVar5 = &uStack_1e0;
        func_0x000103d9953c(puVar5,&uStack_120);
        func_0x000103da2a08(&uStack_120);
        func_0x000103da2a08(&uStack_1e0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_103d9ae88;
        puVar11 = puVar11 + 0x17;
        puVar10 = puVar10 + 0x17;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_103d9ae88:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103d8f9b4; end: 103d8fa53;  */

/* WARNING: Possible PIC construction at 0x000103d8fa00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d8fa10: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d8fa04) */
/* WARNING: Removing unreachable block (ram,0x000103d8fa14) */

void FUN_103d8f9b4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113008868 != -1) {
    func_0x000107c61568(0x113008868,FUN_103d8f880);
  }
  uVar5 = uRam0000000113811ba8;
  uVar4 = uRam0000000113811ba0;
  uVar3 = uRam0000000113811b98;
  uVar2 = uRam0000000113811b90;
  uVar1 = uRam0000000113811b88;
  *param_1 = uRam0000000113811b80;
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



/* Entry: 103d8fa54; end: 103d8fa67;  */

void FUN_103d8fa54(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130091b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130091b8,&UNK_10dc8fa88);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d8fa68; end: 103d8fa9f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d8fa68(undefined8 *param_1,undefined8 param_2)

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
  FUN_103ccc518();
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



/* Entry: 103d8faa0; end: 103d8facb;  */

uint FUN_103d8faa0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_298 [184];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_158 = puVar10[0x11];
        uStack_160 = puVar10[0x10];
        uStack_148 = puVar10[0x13];
        uStack_150 = puVar10[0x12];
        uStack_138 = puVar10[0x15];
        uStack_140 = puVar10[0x14];
        uStack_130 = puVar10[0x16];
        uStack_198 = puVar10[9];
        uStack_1a0 = puVar10[8];
        uStack_188 = puVar10[0xb];
        uStack_190 = puVar10[10];
        uStack_178 = puVar10[0xd];
        uStack_180 = puVar10[0xc];
        uStack_168 = puVar10[0xf];
        uStack_170 = puVar10[0xe];
        uStack_1d8 = puVar10[1];
        uStack_1e0 = *puVar10;
        uStack_1c8 = puVar10[3];
        uStack_1d0 = puVar10[2];
        uStack_1b8 = puVar10[5];
        uStack_1c0 = puVar10[4];
        uStack_1a8 = puVar10[7];
        uStack_1b0 = puVar10[6];
        uStack_98 = puVar11[0x11];
        uStack_a0 = puVar11[0x10];
        uStack_88 = puVar11[0x13];
        uStack_90 = puVar11[0x12];
        uStack_78 = puVar11[0x15];
        uStack_80 = puVar11[0x14];
        uStack_70 = puVar11[0x16];
        uStack_d8 = puVar11[9];
        uStack_e0 = puVar11[8];
        uStack_c8 = puVar11[0xb];
        uStack_d0 = puVar11[10];
        uStack_b8 = puVar11[0xd];
        uStack_c0 = puVar11[0xc];
        uStack_a8 = puVar11[0xf];
        uStack_b0 = puVar11[0xe];
        uStack_118 = puVar11[1];
        uStack_120 = *puVar11;
        uStack_108 = puVar11[3];
        uStack_110 = puVar11[2];
        uStack_f8 = puVar11[5];
        uStack_100 = puVar11[4];
        uStack_e8 = puVar11[7];
        uStack_f0 = puVar11[6];
        func_0x000103da29d4(&uStack_1e0,auStack_298);
        func_0x000103da29d4(&uStack_120,auStack_298);
        puVar5 = &uStack_1e0;
        func_0x000103d9953c(puVar5,&uStack_120);
        func_0x000103da2a08(&uStack_120);
        func_0x000103da2a08(&uStack_1e0);
        if (((ulong)puVar5 & 1) == 0) goto LAB_103d9ae88;
        puVar11 = puVar11 + 0x17;
        puVar10 = puVar10 + 0x17;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
LAB_103d9ae88:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103d8facc; end: 103d8fb3b;  */

void FUN_103d8facc(void)

{
  func_0x000107c5fb78(0x50656c676f6f472e,0xeb000000006e616c);
  uRam0000000113811bb0 = 0xd000000000000023;
  uRam0000000113811bb8 = 0x800000010f1b6f60;
  return;
}



/* Entry: 103d8fb3c; end: 103d8fb83;  */

void FUN_103d8fb3c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc900c0,0x8d,2);
  uRam0000000113811bc8 = uStack_38;
  uRam0000000113811bc0 = uStack_40;
  uRam0000000113811bd8 = uStack_28;
  uRam0000000113811bd0 = uStack_30;
  uRam0000000113811be8 = uStack_18;
  uRam0000000113811be0 = uStack_20;
  return;
}



/* Entry: 103d8fb84; end: 103d8fd1b;  */

/* WARNING: Removing unreachable block (ram,0x000103d8fd18) */

void FUN_103d8fb84(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar4 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 2) goto LAB_103d8fc0c;
            pcVar4 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x160);
        }
        else {
          if (lVar1 != 4) goto LAB_103d8fc0c;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_103d8fbfc:
        (*pcVar4)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x160);
            goto LAB_103d8fbfc;
          }
          if (lVar1 != 6) goto LAB_103d8fc0c;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103d9d5e4();
          lVar2 = unaff_x20 + 0x50;
          puVar3 = &UNK_11070d830;
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103d9d6e0();
          lVar2 = unaff_x20 + 0x88;
          puVar3 = &UNK_11070d8b0;
        }
        else {
          if (lVar1 != 8) goto LAB_103d8fc0c;
          pcVar4 = *(code **)(param_3 + 0x198);
          FUN_103d9d7dc();
          lVar2 = unaff_x20 + 0xa0;
          puVar3 = &UNK_11070d930;
        }
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103d8fc0c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103d8fd1c; end: 103d8fe7f;  */

void FUN_103d8fd1c(undefined8 param_1,undefined8 param_2,long param_3)

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
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       ((*(long *)(unaff_x20[4] + 0x10) == 0 ||
        ((**(code **)(param_3 + 0x100))(unaff_x20[4],3,param_2,param_3), unaff_x21 == 0)))) {
      uVar2 = unaff_x20[6];
      uVar1 = unaff_x20[5] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if (((uVar1 == 0) ||
          ((**(code **)(param_3 + 0x70))(unaff_x20[5],uVar2,4,param_2,param_3), unaff_x21 == 0)) &&
         (((*(long *)(unaff_x20[7] + 0x10) == 0 ||
           ((**(code **)(param_3 + 0x100))(unaff_x20[7],5,param_2,param_3), unaff_x21 == 0)) &&
          (FUN_103d8fe80(), unaff_x21 == 0)))) {
        FUN_103d8ff14();
        FUN_103d8ff9c();
        func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103d8fe80; end: 103d8ff13;  */

void FUN_103d8fe80(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_70 = *(ulong *)(param_1 + 0x58);
  if (uStack_70 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103d9d5e4();
    (*pcVar1)(&uStack_78,6,&UNK_11070d830,param_1,param_3,param_4);
  }
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103633d40; end: 103633d43;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103633d40(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103633d44; end: 103633d7b;  */

uint FUN_103633d44(long param_1,long param_2)

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
  FUN_10363677c();
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



/* Entry: 103633d7c; end: 103633e93;  */

/* WARNING: Possible PIC construction at 0x000103633db0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103633db4) */
/* WARNING: Removing unreachable block (ram,0x000103633ddc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103633d7c(undefined8 *param_1)

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



/* Entry: 103633e94; end: 103633ecf;  */

void FUN_103633e94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80fd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80fd8,&UNK_10dbf00f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103633ed0; end: 103634123;  */

void FUN_103633ed0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103634124; end: 10363477b;  */

uint FUN_103634124(ulong *param_1,ulong *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  char cVar9;
  ulong uVar10;
  ulong uVar11;
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
  undefined1 auStack_dc0 [320];
  undefined1 auStack_c80 [320];
  undefined1 auStack_b40 [320];
  ulong auStack_a00 [80];
  ulong uStack_780;
  ulong uStack_778;
  ulong uStack_770;
  ulong uStack_768;
  ulong uStack_760;
  ulong uStack_758;
  char cStack_750;
  ulong uStack_748;
  ulong uStack_740;
  ulong uStack_738;
  ulong uStack_730;
  ulong uStack_728;
  ulong uStack_720;
  char cStack_718;
  undefined1 auStack_640 [320];
  undefined1 auStack_500 [320];
  undefined1 auStack_3c0 [320];
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  char cStack_250;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  char cStack_210;
  undefined1 auStack_208 [320];
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
  
  uVar14 = param_1[1];
  uVar10 = *param_1;
  uVar20 = param_1[3];
  uVar18 = param_1[2];
  uVar15 = param_1[5];
  uVar11 = param_1[4];
  cVar7 = (char)param_1[6];
  uVar16 = param_2[1];
  uVar12 = *param_2;
  uVar21 = param_2[3];
  uVar19 = param_2[2];
  uVar17 = param_2[5];
  uVar13 = param_2[4];
  cVar9 = (char)param_2[6];
  uStack_280 = uVar12;
  uStack_278 = uVar16;
  uStack_270 = uVar19;
  uStack_268 = uVar21;
  uStack_260 = uVar13;
  uStack_258 = uVar17;
  cStack_250 = cVar9;
  uStack_240 = uVar10;
  uStack_238 = uVar14;
  uStack_230 = uVar18;
  uStack_228 = uVar20;
  uStack_220 = uVar11;
  uStack_218 = uVar15;
  cStack_210 = cVar7;
  if (cVar7 == -1) {
    if (cVar9 != -1) goto LAB_10363429c;
    FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
    FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
    uVar8 = 0xff;
LAB_1036343d0:
    func_0x0001034bb624(uVar10,uVar14,uVar18,uVar20,uVar11,uVar15,uVar8);
LAB_1036344f8:
    func_0x000107c610b4(auStack_3c0,param_1 + 9,0x140);
    func_0x000107c610b4(auStack_500,param_2 + 9,0x140);
    func_0x000107c610b4(&uStack_780,param_1 + 9,0x140);
    func_0x000107c610b4(auStack_640,param_2 + 9,0x140);
    iVar1 = (int)&uStack_780;
    FUN_103632e98();
    if (iVar1 == 1) {
      iVar1 = (int)auStack_640;
      FUN_103632e98();
      if (iVar1 != 1) {
LAB_1036345d8:
        func_0x000107c610b4(auStack_a00,&uStack_780,0x280);
        FUN_103632ec8(auStack_3c0,auStack_208,0x112f732c8,&UNK_10dbce9a8);
        FUN_103632ec8(auStack_500,auStack_208,0x112f732c8,&UNK_10dbce9a8);
        uVar8 = 0x112f80f88;
        puVar6 = &UNK_10dbefe70;
        puVar4 = auStack_a00;
        goto LAB_103634320;
      }
      func_0x000107c610b4(auStack_a00,&uStack_780,0x140);
      FUN_103632ec8(auStack_3c0,auStack_208,0x112f732c8,&UNK_10dbce9a8);
      FUN_103632ec8(auStack_500,auStack_208,0x112f732c8,&UNK_10dbce9a8);
      FUN_1036367fc(auStack_a00,0x112f732c8,&UNK_10dbce9a8);
    }
    else {
      func_0x000107c610b4(auStack_b40,&uStack_780,0x140);
      iVar1 = (int)auStack_640;
      FUN_103632e98();
      if (iVar1 == 1) goto LAB_1036345d8;
      func_0x000107c610b4(auStack_c80,auStack_640,0x140);
      func_0x000107c610b4(auStack_a00,auStack_640,0x140);
      func_0x000107c610b4(auStack_208,auStack_b40,0x140);
      FUN_103632ec8(auStack_3c0,auStack_dc0,0x112f732c8,&UNK_10dbce9a8);
      FUN_103632ec8(auStack_500,auStack_dc0,0x112f732c8,&UNK_10dbce9a8);
      puVar5 = auStack_208;
      FUN_103637188(puVar5,auStack_a00);
      FUN_1036367fc(auStack_c80,0x112f732c8,&UNK_10dbce9a8);
      FUN_1036367fc(&uStack_780,0x112f732c8,&UNK_10dbce9a8);
      if (((ulong)puVar5 & 1) == 0) goto LAB_103634754;
    }
    uVar10 = param_1[7];
    func_0x000100e25fcc(uVar10,param_1[8],param_2[7],param_2[8]);
    uVar2 = (uint)uVar10;
  }
  else {
    if (cVar9 == -1) {
LAB_10363429c:
      uStack_780 = uVar10;
      uStack_778 = uVar14;
      uStack_770 = uVar18;
      uStack_768 = uVar20;
      uStack_760 = uVar11;
      uStack_758 = uVar15;
      cStack_750 = cVar7;
      uStack_748 = uVar12;
      uStack_740 = uVar16;
      uStack_738 = uVar19;
      uStack_730 = uVar21;
      uStack_728 = uVar13;
      uStack_720 = uVar17;
      cStack_718 = cVar9;
      FUN_103632ec8(&uStack_240,auStack_a00,0x112f80f80,&UNK_10dbefe60);
      FUN_103632ec8(&uStack_280,auStack_a00,0x112f80f80,&UNK_10dbefe60);
      uVar8 = 0x112f80ff8;
      puVar6 = &UNK_10dbf0128;
      puVar4 = &uStack_780;
LAB_103634320:
      FUN_1036367fc(puVar4,uVar8,puVar6);
    }
    else if (cVar7 == '\x01') {
      if (cVar9 == '\x01') {
        if (((uVar10 == uVar12) && (uVar14 == uVar16)) ||
           (uVar3 = uVar10, func_0x000107c605b8(uVar10,uVar14,uVar12,uVar16,0), (uVar3 & 1) != 0)) {
          FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          uVar3 = uVar18;
          func_0x000100e25fcc(uVar18,uVar20,uVar19,uVar21);
          uVar8 = 1;
          func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,1);
          if ((uVar3 & 1) != 0) goto LAB_1036343d0;
        }
        else {
          FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
          func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,1);
        }
        cVar7 = '\x01';
      }
      else {
        FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
        FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
LAB_10363442c:
        func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,cVar9);
      }
      func_0x0001034bb624(uVar10,uVar14,uVar18,uVar20,uVar11,uVar15,cVar7);
    }
    else {
      uStack_c8 = uVar10;
      uStack_c0 = uVar14;
      uStack_b8 = uVar18;
      uStack_b0 = uVar20;
      uStack_a8 = uVar11;
      uStack_a0 = uVar15;
      if (cVar9 == '\x01') {
        FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
        FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
        cVar9 = '\x01';
        goto LAB_10363442c;
      }
      uStack_98 = uVar12;
      uStack_90 = uVar16;
      uStack_88 = uVar19;
      uStack_80 = uVar21;
      uStack_78 = uVar13;
      uStack_70 = uVar17;
      FUN_103632ec8(&uStack_240,&uStack_780,0x112f80f80,&UNK_10dbefe60);
      FUN_103632ec8(&uStack_280,&uStack_780,0x112f80f80,&UNK_10dbefe60);
      puVar4 = &uStack_c8;
      FUN_10363b3fc(puVar4,&uStack_98);
      func_0x0001034bb624(uVar12,uVar16,uVar19,uVar21,uVar13,uVar17,cVar9);
      func_0x0001034bb624(uVar10,uVar14,uVar18,uVar20,uVar11,uVar15,cVar7);
      if (((ulong)puVar4 & 1) != 0) goto LAB_1036344f8;
    }
LAB_103634754:
    uVar2 = 0;
  }
  return uVar2 & 1;
}



/* Entry: 10363477c; end: 1036347fb;  */

void FUN_10363477c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80f98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeff10;
  func_0x000107c61520(&UNK_10dbeff10,&UNK_110673618);
  puRam0000000112f80f98 = puVar1;
  return;
}



/* Entry: 1036347fc; end: 10363481f;  */

void FUN_1036347fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103634820();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103634820; end: 10363485f;  */

void FUN_103634820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbefee8;
  func_0x000107c61520(&UNK_10dbefee8,&UNK_110673618);
  puRam0000000112f80fb0 = puVar1;
  return;
}



/* Entry: 103634860; end: 103634877;  */

void FUN_103634860(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363477c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035e0b38();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103634878; end: 1036348b7;  */

void FUN_103634878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeff50;
  func_0x000107c61520(&UNK_10dbeff50,&UNK_110673618);
  puRam0000000112f80fb8 = puVar1;
  return;
}



/* Entry: 1036348b8; end: 1036348db;  */

void FUN_1036348b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036348dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036348dc; end: 10363491b;  */

void FUN_1036348dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeffc0;
  func_0x000107c61520(&UNK_10dbeffc0,&UNK_110673730);
  puRam0000000112f80fc0 = puVar1;
  return;
}



/* Entry: 10363491c; end: 10363492f;  */

void FUN_10363491c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1036347bc)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103634960();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103634930; end: 10363495f;  */

void FUN_103634930(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103634960; end: 10363499f;  */

void FUN_103634960(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbeff78;
  func_0x000107c61520(&DAT_10dbeff78,&UNK_110673730);
  puRam0000000112f80fc8 = puVar1;
  return;
}



/* Entry: 1036349a0; end: 1036349a3;  */

void FUN_1036349a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0028;
  func_0x000107c61520(&UNK_10dbf0028,&UNK_110673730);
  puRam0000000112f80fd0 = puVar1;
  return;
}



/* Entry: 1036349a4; end: 1036349e3;  */

void FUN_1036349a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0028;
  func_0x000107c61520(&UNK_10dbf0028,&UNK_110673730);
  puRam0000000112f80fd0 = puVar1;
  return;
}



/* Entry: 1036349e4; end: 103634b6f;  */

/* WARNING: Possible PIC construction at 0x000103634a18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103634a40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103634a68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103634a90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103634ac0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103634af0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103634b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103634a44) */
/* WARNING: Removing unreachable block (ram,0x000103634a4c) */
/* WARNING: Removing unreachable block (ram,0x000103634a54) */
/* WARNING: Removing unreachable block (ram,0x000103634a6c) */
/* WARNING: Removing unreachable block (ram,0x000103634a7c) */
/* WARNING: Removing unreachable block (ram,0x000103634a64) */
/* WARNING: Removing unreachable block (ram,0x000103634a1c) */
/* WARNING: Removing unreachable block (ram,0x000103634a28) */
/* WARNING: Removing unreachable block (ram,0x000103634a84) */
/* WARNING: Removing unreachable block (ram,0x000103634a94) */
/* WARNING: Removing unreachable block (ram,0x000103634aa4) */
/* WARNING: Removing unreachable block (ram,0x000103634aac) */
/* WARNING: Removing unreachable block (ram,0x000103634ac4) */
/* WARNING: Removing unreachable block (ram,0x000103634ad4) */
/* WARNING: Removing unreachable block (ram,0x000103634adc) */
/* WARNING: Removing unreachable block (ram,0x000103634af4) */
/* WARNING: Removing unreachable block (ram,0x000103634b04) */
/* WARNING: Removing unreachable block (ram,0x000103634b0c) */
/* WARNING: Removing unreachable block (ram,0x000103634b24) */
/* WARNING: Removing unreachable block (ram,0x000103634b34) */
/* WARNING: Removing unreachable block (ram,0x000103634b3c) */
/* WARNING: Removing unreachable block (ram,0x000103634b5c) */
/* WARNING: Removing unreachable block (ram,0x000103634b4c) */
/* WARNING: Removing unreachable block (ram,0x000103634b1c) */
/* WARNING: Removing unreachable block (ram,0x000103634aec) */
/* WARNING: Removing unreachable block (ram,0x000103634abc) */
/* WARNING: Removing unreachable block (ram,0x000103634a8c) */
/* WARNING: Removing unreachable block (ram,0x000103634a3c) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1036349e4(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if (*(char *)(param_1 + 6) != -1) {
    FUN_1034bb638(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5]);
  }
  uVar1 = param_1[7];
  uVar2 = (uint)((ulong)param_1[8] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[8] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103634b70; end: 103635cf7;  */

undefined8 * FUN_103634b70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  ulong uVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  cVar4 = *(char *)(param_2 + 6);
  if (cVar4 == -1) {
    uVar8 = *param_2;
    uVar10 = param_2[3];
    uVar9 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar8;
    param_1[3] = uVar10;
    param_1[2] = uVar9;
    uVar8 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar8;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    uVar8 = *param_2;
    uVar1 = param_2[1];
    uVar9 = param_2[2];
    uVar2 = param_2[3];
    uVar10 = param_2[4];
    uVar3 = param_2[5];
    FUN_103632e10(uVar8,uVar1,uVar9,uVar2,uVar10,uVar3,cVar4);
    *param_1 = uVar8;
    param_1[1] = uVar1;
    param_1[2] = uVar9;
    param_1[3] = uVar2;
    param_1[4] = uVar10;
    param_1[5] = uVar3;
    *(char *)(param_1 + 6) = cVar4;
  }
  uVar8 = param_2[7];
  uVar9 = param_2[8];
  func_0x00010006c00c(uVar8,uVar9);
  param_1[7] = uVar8;
  param_1[8] = uVar9;
  pcVar6 = (char *)(param_2 + 0x16);
  if (*pcVar6 == '\x03') {
    func_0x000107c610b4(param_1 + 9,param_2 + 9,0x140);
  }
  else {
    uVar8 = param_2[9];
    uVar9 = param_2[10];
    func_0x00010006c00c(uVar8,uVar9);
    param_1[9] = uVar8;
    param_1[10] = uVar9;
    pcVar7 = (char *)(param_2 + 0xd);
    if (*pcVar7 == '\x03') {
      uVar8 = param_2[0xf];
      uVar10 = param_2[0x12];
      uVar9 = param_2[0x11];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar8;
      param_1[0x12] = uVar10;
      param_1[0x11] = uVar9;
      uVar8 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar8;
      param_1[0x15] = param_2[0x15];
      uVar8 = param_2[0xb];
      uVar10 = param_2[0xe];
      uVar9 = *(undefined8 *)pcVar7;
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar8;
      param_1[0xe] = uVar10;
      param_1[0xd] = uVar9;
    }
    else {
      uVar8 = param_2[0xb];
      uVar9 = param_2[0xc];
      func_0x00010006c00c(uVar8,uVar9);
      param_1[0xb] = uVar8;
      param_1[0xc] = uVar9;
      if (*(char *)(param_2 + 0xd) == '\x02') {
        uVar8 = *(undefined8 *)pcVar7;
        param_1[0xe] = param_2[0xe];
        param_1[0xd] = uVar8;
        param_1[0xf] = param_2[0xf];
      }
      else {
        *(char *)(param_1 + 0xd) = *(char *)(param_2 + 0xd);
        uVar8 = param_2[0xe];
        uVar9 = param_2[0xf];
        func_0x00010006c00c(uVar8,uVar9);
        param_1[0xe] = uVar8;
        param_1[0xf] = uVar9;
      }
      uVar5 = param_2[0x12];
      if (uVar5 >> 0x3c < 0xf) {
        uVar8 = param_2[0x11];
        param_1[0x10] = param_2[0x10];
        func_0x00010006c00c(uVar8,uVar5);
        param_1[0x11] = uVar8;
        param_1[0x12] = uVar5;
      }
      else {
        uVar8 = param_2[0x10];
        param_1[0x11] = param_2[0x11];
        param_1[0x10] = uVar8;
        param_1[0x12] = param_2[0x12];
      }
      uVar5 = param_2[0x15];
      if (uVar5 >> 0x3c < 0xf) {
        uVar8 = param_2[0x14];
        param_1[0x13] = param_2[0x13];
        func_0x00010006c00c(uVar8,uVar5);
        param_1[0x14] = uVar8;
        param_1[0x15] = uVar5;
      }
      else {
        uVar8 = param_2[0x13];
        param_1[0x14] = param_2[0x14];
        param_1[0x13] = uVar8;
        param_1[0x15] = param_2[0x15];
      }
    }
    if (*pcVar6 == '\x02') {
      uVar8 = *(undefined8 *)pcVar6;
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar8;
      param_1[0x18] = param_2[0x18];
    }
    else {
      *(char *)(param_1 + 0x16) = *pcVar6;
      uVar8 = param_2[0x17];
      uVar9 = param_2[0x18];
      func_0x00010006c00c(uVar8,uVar9);
      param_1[0x17] = uVar8;
      param_1[0x18] = uVar9;
    }
    uVar5 = param_2[0x1b];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x1a];
      param_1[0x19] = param_2[0x19];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x1a] = uVar8;
      param_1[0x1b] = uVar5;
    }
    else {
      uVar8 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar8;
      param_1[0x1b] = param_2[0x1b];
    }
    uVar5 = param_2[0x1e];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x1d];
      param_1[0x1c] = param_2[0x1c];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x1d] = uVar8;
      param_1[0x1e] = uVar5;
    }
    else {
      uVar8 = param_2[0x1c];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar8;
      param_1[0x1e] = param_2[0x1e];
    }
    uVar5 = param_2[0x21];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x20];
      param_1[0x1f] = param_2[0x1f];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x20] = uVar8;
      param_1[0x21] = uVar5;
    }
    else {
      uVar8 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar8;
      param_1[0x21] = param_2[0x21];
    }
    uVar5 = param_2[0x24];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x23];
      param_1[0x22] = param_2[0x22];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x23] = uVar8;
      param_1[0x24] = uVar5;
    }
    else {
      uVar8 = param_2[0x22];
      param_1[0x23] = param_2[0x23];
      param_1[0x22] = uVar8;
      param_1[0x24] = param_2[0x24];
    }
    uVar5 = param_2[0x27];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x26];
      param_1[0x25] = param_2[0x25];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x26] = uVar8;
      param_1[0x27] = uVar5;
    }
    else {
      uVar8 = param_2[0x25];
      param_1[0x26] = param_2[0x26];
      param_1[0x25] = uVar8;
      param_1[0x27] = param_2[0x27];
    }
    uVar5 = param_2[0x2a];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x29];
      param_1[0x28] = param_2[0x28];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x29] = uVar8;
      param_1[0x2a] = uVar5;
    }
    else {
      uVar8 = param_2[0x28];
      param_1[0x29] = param_2[0x29];
      param_1[0x28] = uVar8;
      param_1[0x2a] = param_2[0x2a];
    }
    uVar5 = param_2[0x2d];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x2c];
      param_1[0x2b] = param_2[0x2b];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x2c] = uVar8;
      param_1[0x2d] = uVar5;
    }
    else {
      uVar8 = param_2[0x2b];
      param_1[0x2c] = param_2[0x2c];
      param_1[0x2b] = uVar8;
      param_1[0x2d] = param_2[0x2d];
    }
    uVar5 = param_2[0x30];
    if (uVar5 >> 0x3c < 0xf) {
      uVar8 = param_2[0x2f];
      param_1[0x2e] = param_2[0x2e];
      func_0x00010006c00c(uVar8,uVar5);
      param_1[0x2f] = uVar8;
      param_1[0x30] = uVar5;
    }
    else {
      uVar8 = param_2[0x2e];
      param_1[0x2f] = param_2[0x2f];
      param_1[0x2e] = uVar8;
      param_1[0x30] = param_2[0x30];
    }
  }
  return param_1;
}



/* Entry: 103635cf8; end: 103635d2f;  */

undefined8 * FUN_103635cf8(undefined8 *param_1)

{
  FUN_1034bb638(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],
                *(undefined1 *)(param_1 + 6));
  return param_1;
}



/* Entry: 103635d30; end: 103635d37;  */

void FUN_103635d30(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x188);
  return;
}



/* Entry: 103635d38; end: 103636293;  */

undefined8 * FUN_103635d38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  ulong uVar6;
  char *pcVar7;
  char *pcVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  if (*(char *)(param_1 + 6) == -1) {
LAB_103635da0:
    uVar5 = *param_2;
    uVar12 = param_2[3];
    uVar14 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar5;
    param_1[3] = uVar12;
    param_1[2] = uVar14;
    uVar5 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar5;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    cVar4 = *(char *)(param_2 + 6);
    if (cVar4 == -1) {
      FUN_103635cf8(param_1);
      goto LAB_103635da0;
    }
    uVar5 = *param_1;
    uVar1 = param_1[1];
    uVar14 = param_1[2];
    uVar2 = param_1[3];
    uVar12 = param_1[4];
    uVar3 = param_1[5];
    uVar11 = *param_2;
    uVar15 = param_2[3];
    uVar13 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    param_1[3] = uVar15;
    param_1[2] = uVar13;
    uVar11 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    *(char *)(param_1 + 6) = cVar4;
    FUN_1034bb638(uVar5,uVar1,uVar14,uVar2,uVar12,uVar3);
  }
  uVar5 = param_1[7];
  uVar14 = param_1[8];
  uVar12 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar12;
  func_0x00010006c090(uVar5,uVar14);
  pcVar7 = (char *)(param_1 + 0x16);
  if (*pcVar7 == '\x03') {
code_r0x000103635ddc:
    func_0x000107c610b4(param_1 + 9,param_2 + 9,0x140);
    return param_1;
  }
  pbVar9 = (byte *)(param_2 + 0x16);
  if (*pbVar9 == 3) {
    func_0x000103632f10(param_1 + 9);
    goto code_r0x000103635ddc;
  }
  uVar5 = param_1[9];
  uVar14 = param_1[10];
  uVar12 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar12;
  func_0x00010006c090(uVar5,uVar14);
  pcVar8 = (char *)(param_1 + 0xd);
  if (*pcVar8 == '\x03') {
LAB_103635e64:
    uVar5 = param_2[0xf];
    uVar12 = param_2[0x12];
    uVar14 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    param_1[0x12] = uVar12;
    param_1[0x11] = uVar14;
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    param_1[0x15] = param_2[0x15];
    uVar5 = param_2[0xb];
    uVar12 = param_2[0xe];
    uVar14 = param_2[0xd];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar5;
    param_1[0xe] = uVar12;
    *(undefined8 *)pcVar8 = uVar14;
  }
  else {
    pbVar10 = (byte *)(param_2 + 0xd);
    if (*pbVar10 == 3) {
      func_0x000101556228(param_1 + 0xb);
      goto LAB_103635e64;
    }
    uVar5 = param_1[0xb];
    uVar14 = param_1[0xc];
    uVar12 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar12;
    func_0x00010006c090(uVar5,uVar14);
    if (*(char *)(param_1 + 0xd) == '\x02') {
LAB_103635ef0:
      uVar5 = *(undefined8 *)pbVar10;
      param_1[0xe] = param_2[0xe];
      *(undefined8 *)pcVar8 = uVar5;
      param_1[0xf] = param_2[0xf];
    }
    else {
      if (*pbVar10 == 2) {
        func_0x0001015fd618(pcVar8);
        goto LAB_103635ef0;
      }
      *(byte *)(param_1 + 0xd) = *pbVar10 & 1;
      uVar5 = param_1[0xe];
      uVar14 = param_1[0xf];
      uVar12 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar12;
      func_0x00010006c090(uVar5,uVar14);
    }
    if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
      uVar6 = param_2[0x12];
      if (0xe < uVar6 >> 0x3c) {
        func_0x0001015bf2c0(param_1 + 0x10);
        goto LAB_103636210;
      }
      param_1[0x10] = param_2[0x10];
      uVar5 = param_1[0x11];
      param_1[0x11] = param_2[0x11];
      param_1[0x12] = uVar6;
      func_0x00010006c090(uVar5);
    }
    else {
LAB_103636210:
      uVar5 = param_2[0x10];
      param_1[0x11] = param_2[0x11];
      param_1[0x10] = uVar5;
      param_1[0x12] = param_2[0x12];
    }
    if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
      uVar6 = param_2[0x15];
      if (0xe < uVar6 >> 0x3c) {
        func_0x0001015bf2c0(param_1 + 0x13);
        goto LAB_103636264;
      }
      param_1[0x13] = param_2[0x13];
      uVar5 = param_1[0x14];
      param_1[0x14] = param_2[0x14];
      param_1[0x15] = uVar6;
      func_0x00010006c090(uVar5);
    }
    else {
LAB_103636264:
      uVar5 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar5;
      param_1[0x15] = param_2[0x15];
    }
  }
  if (*pcVar7 == '\x02') {
LAB_103635eac:
    uVar5 = *(undefined8 *)pbVar9;
    param_1[0x17] = param_2[0x17];
    *(undefined8 *)pcVar7 = uVar5;
    param_1[0x18] = param_2[0x18];
  }
  else {
    if (*pbVar9 == 2) {
      func_0x0001015fd618(pcVar7);
      goto LAB_103635eac;
    }
    *(byte *)(param_1 + 0x16) = *pbVar9 & 1;
    uVar5 = param_1[0x17];
    uVar14 = param_1[0x18];
    uVar12 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar12;
    func_0x00010006c090(uVar5,uVar14);
  }
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar6 = param_2[0x1b];
    if (0xe < uVar6 >> 0x3c) {
      func_0x0001015bf2c0(param_1 + 0x19);
      goto LAB_103635f44;
    }
    param_1[0x19] = param_2[0x19];
    uVar5 = param_1[0x1a];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x1b] = uVar6;
    func_0x00010006c090(uVar5);
  }
  else {
LAB_103635f44:
    uVar5 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar5;
    param_1[0x1b] = param_2[0x1b];
  }
  if ((ulong)param_1[0x1e] >> 0x3c < 0xf) {
    uVar6 = param_2[0x1e];
    if (0xe < uVar6 >> 0x3c) {
      func_0x0001015bf2c0(param_1 + 0x1c);
      goto LAB_103635f98;
    }
    param_1[0x1c] = param_2[0x1c];
    uVar5 = param_1[0x1d];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1e] = uVar6;
    func_0x00010006c090(uVar5);
  }
  else {
LAB_103635f98:
    uVar5 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar5;
    param_1[0x1e] = param_2[0x1e];
  }
  if ((ulong)param_1[0x21] >> 0x3c < 0xf) {
    uVar6 = param_2[0x21];
    if (0xe < uVar6 >> 0x3c) {
      func_0x0001015bf2c0(param_1 + 0x1f);
      goto LAB_103635fec;
    }
    param_1[0x1f] = param_2[0x1f];
    uVar5 = param_1[0x20];
    param_1[0x20] = param_2[0x20];
    param_1[0x21] = uVar6;
    func_0x00010006c090(uVar5);
  }
  else {
LAB_103635fec:
    uVar5 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar5;
    param_1[0x21] = param_2[0x21];
  }
  if ((ulong)param_1[0x24] >> 0x3c < 0xf) {
    uVar6 = param_2[0x24];
    if (0xe < uVar6 >> 0x3c) {
      func_0x0001015bf2c0(param_1 + 0x22);
      goto LAB_103636040;
    }
    param_1[0x22] = param_2[0x22];
    uVar5 = param_1[0x23];
    param_1[0x23] = param_2[0x23];
    param_1[0x24] = uVar6;
    func_0x00010006c090(uVar5);
  }
  else {
LAB_103636040:
    uVar5 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar5;
    param_1[0x24] = param_2[0x24];
  }
  if ((ulong)param_1[0x27] >> 0x3c < 0xf) {
    uVar6 = param_2[0x27];
    if (0xe < uVar6 >> 0x3c) {
      func_0x0001015bf2c0(param_1 + 0x25);
      goto LAB_10363609c;
    }
    param_1[0x25] = param_2[0x25];
    uVar5 = param_1[0x26];
    param_1[0x26] = param_2[0x26];
    param_1[0x27] = uVar6;
    func_0x00010006c090(uVar5);
  }
  else {
LAB_10363609c:
    uVar5 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar5;
    param_1[0x27] = param_2[0x27];
  }
  if ((ulong)param_1[0x2a] >> 0x3c < 0xf) {
    uVar6 = param_2[0x2a];
    if (0xe < uVar6 >> 0x3c) {
      func_0x0001015bf2c0(param_1 + 0x28);
      goto LAB_1036360f0;
    }
    param_1[0x28] = param_2[0x28];
    uVar5 = param_1[0x29];
    param_1[0x29] = param_2[0x29];
    param_1[0x2a] = uVar6;
    func_0x00010006c090(uVar5);
  }
  else {
LAB_1036360f0:
    uVar5 = param_2[0x28];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = uVar5;
    param_1[0x2a] = param_2[0x2a];
  }
  if ((ulong)param_1[0x2d] >> 0x3c < 0xf) {
    uVar6 = param_2[0x2d];
    if (uVar6 >> 0x3c < 0xf) {
      param_1[0x2b] = param_2[0x2b];
      uVar5 = param_1[0x2c];
      param_1[0x2c] = param_2[0x2c];
      param_1[0x2d] = uVar6;
      func_0x00010006c090(uVar5);
      goto LAB_103636178;
    }
    func_0x0001015bf2c0(param_1 + 0x2b);
  }
  uVar5 = param_2[0x2b];
  param_1[0x2c] = param_2[0x2c];
  param_1[0x2b] = uVar5;
  param_1[0x2d] = param_2[0x2d];
LAB_103636178:
  if ((ulong)param_1[0x30] >> 0x3c < 0xf) {
    uVar6 = param_2[0x30];
    if (uVar6 >> 0x3c < 0xf) {
      param_1[0x2e] = param_2[0x2e];
      uVar5 = param_1[0x2f];
      param_1[0x2f] = param_2[0x2f];
      param_1[0x30] = uVar6;
      func_0x00010006c090(uVar5);
      return param_1;
    }
    func_0x0001015bf2c0(param_1 + 0x2e);
  }
  uVar5 = param_2[0x2e];
  param_1[0x2f] = param_2[0x2f];
  param_1[0x2e] = uVar5;
  param_1[0x30] = param_2[0x30];
  return param_1;
}



/* Entry: 103636294; end: 1036363af;  */

int FUN_103636294(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x62] != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = (*(byte *)(param_1 + 0xc) ^ 0xff) - 1;
  if (*(byte *)(param_1 + 0xc) < 2) {
    iVar1 = -1;
  }
  return iVar1 + 1;
}



/* Entry: 1036363b0; end: 1036364b3;  */

undefined8 * FUN_1036363b0(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103632e10(uVar1,uVar4,uVar2,uVar5,uVar3,uVar6,uVar7);
  *param_1 = uVar1;
  param_1[1] = uVar4;
  param_1[2] = uVar2;
  param_1[3] = uVar5;
  param_1[4] = uVar3;
  param_1[5] = uVar6;
  *(undefined1 *)(param_1 + 6) = uVar7;
  return param_1;
}



/* Entry: 1036364b4; end: 103636507;  */

undefined8 * FUN_1036364b4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1034bb638(uVar7,uVar1,uVar3,uVar2,uVar4,uVar8,uVar6);
  return param_1;
}



/* Entry: 103636508; end: 1036365c7;  */

int FUN_103636508(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x31) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 0xc) ^ 0xff;
  if (*(byte *)(param_1 + 0xc) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036365c8; end: 1036365ef;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1036365c8(long param_1)

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



/* Entry: 1036365f0; end: 10363669f;  */

undefined8 * FUN_1036365f0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1036366a0; end: 1036366e3;  */

undefined8 * FUN_1036366a0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1036366e4; end: 10363677b;  */

int FUN_1036366e4(int *param_1,int param_2)

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



/* Entry: 10363677c; end: 1036367fb;  */

void FUN_10363677c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80fe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbeff94;
  func_0x000107c61520(&DAT_10dbeff94,&UNK_110673730);
  puRam0000000112f80fe0 = puVar1;
  return;
}



/* Entry: 1036367fc; end: 10363683b;  */

undefined8 FUN_1036367fc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10363683c; end: 10363687b;  */

void FUN_10363683c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81000 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf0180;
  func_0x000107c61520(&DAT_10dbf0180,&UNK_1106738d8);
  puRam0000000112f81000 = puVar1;
  return;
}



/* Entry: 10363687c; end: 1036368b3;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10363687c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c6142c(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1036368b4; end: 1036368bf;  */

long FUN_1036368b4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1036368c0; end: 1036368ff;  */

undefined8 FUN_1036368c0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103636900; end: 103636947;  */

void FUN_103636900(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf02b0,0x11a,2);
  uRam000000011380acd8 = uStack_38;
  uRam000000011380acd0 = uStack_40;
  uRam000000011380ace8 = uStack_28;
  uRam000000011380ace0 = uStack_30;
  uRam000000011380acf8 = uStack_18;
  uRam000000011380acf0 = uStack_20;
  return;
}



/* Entry: 103636948; end: 103636adf;  */

/* WARNING: Removing unreachable block (ram,0x000103636adc) */

void FUN_103636948(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110790900;
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fe02c();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_110673aa8;
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x68;
        puVar3 = &UNK_110790c00;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0x80;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0x98;
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0xb0;
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 200;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0xe0;
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0xf8;
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0x110;
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0x128;
        break;
      default:
        goto LAB_103636acc;
      }
      (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_103636acc:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103636ae0; end: 103636c13;  */

void FUN_103636ae0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103636c14();
  if (unaff_x21 == 0) {
    FUN_103636cbc();
    FUN_103636d44();
    FUN_103636dcc();
    FUN_103636e54();
    FUN_103636edc();
    FUN_103636f64();
    FUN_103636fec();
    FUN_103637074();
    FUN_1036370fc();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103636c14; end: 103636cbb;  */

void FUN_103636c14(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_90 = *(ulong *)(param_1 + 0x20);
  if ((uStack_90 & 0xff) != 3) {
    uStack_98 = *(undefined8 *)(param_1 + 0x18);
    uStack_a0 = *(undefined8 *)(param_1 + 0x10);
    uStack_80 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x28);
    uStack_70 = *(undefined8 *)(param_1 + 0x40);
    uStack_78 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x48);
    uStack_50 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fe02c();
    (*pcVar1)(&uStack_a0,1,&UNK_110673aa8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636cbc; end: 103636d43;  */

void FUN_103636cbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x68);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x78);
    uStack_50 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,2,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636d44; end: 103636dcb;  */

void FUN_103636d44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x90);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,3,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636dcc; end: 103636e53;  */

void FUN_103636dcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,4,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636e54; end: 103636edb;  */

void FUN_103636e54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,5,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636edc; end: 103636f63;  */

void FUN_103636edc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xd8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd0);
    uStack_60 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,6,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636f64; end: 103636feb;  */

void FUN_103636f64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xe8);
    uStack_60 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,7,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103636fec; end: 103637073;  */

void FUN_103636fec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x108);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x100);
    uStack_60 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,8,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103637074; end: 1036370fb;  */

void FUN_103637074(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x120);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uStack_60 = *(undefined8 *)(param_1 + 0x110);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,9,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036370fc; end: 103637187;  */

void FUN_1036370fc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x138);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x130);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,10,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103637188; end: 10363721b;  */

uint FUN_103637188(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  ulong uVar14;
  ulong uVar15;
  double dStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double adStack_4e8 [3];
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
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
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  double dStack_370;
  ulong uStack_368;
  ulong uStack_360;
  double dStack_350;
  ulong uStack_348;
  ulong uStack_340;
  double dStack_330;
  ulong uStack_328;
  ulong uStack_320;
  double dStack_310;
  ulong uStack_308;
  ulong uStack_300;
  double dStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  double dStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  double dStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  double dStack_290;
  ulong uStack_288;
  ulong uStack_280;
  double dStack_270;
  ulong uStack_268;
  ulong uStack_260;
  double dStack_250;
  ulong uStack_248;
  ulong uStack_240;
  double dStack_230;
  ulong uStack_228;
  ulong uStack_220;
  double dStack_210;
  ulong uStack_208;
  ulong uStack_200;
  double dStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  double dStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  double dStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
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
  
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_418 = param_1[3];
  uStack_420 = param_1[2];
  uStack_408 = param_1[5];
  uStack_410 = param_1[4];
  uStack_3e8 = param_1[9];
  uStack_3f0 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_3f8 = param_1[7];
  uStack_400 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uStack_178 = param_2[5];
  uStack_180 = param_2[4];
  uStack_470 = param_2[3];
  uStack_478 = param_2[2];
  uStack_460 = param_2[5];
  uStack_468 = param_2[4];
  uStack_440 = param_2[9];
  uStack_448 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  uStack_450 = param_2[7];
  uStack_458 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_3d8 = param_1[0xb];
  uStack_3e0 = param_1[10];
  uStack_e0 = param_1[0xc];
  uStack_140 = param_2[0xc];
  uStack_3d0 = param_1[0xc];
  uStack_430 = param_2[0xb];
  uStack_438 = param_2[10];
  uStack_428 = param_2[0xc];
  uStack_3c8 = uStack_478;
  uStack_3c0 = uStack_470;
  uStack_3b8 = uStack_468;
  uStack_3b0 = uStack_460;
  uStack_3a8 = uStack_458;
  uStack_3a0 = uStack_450;
  uStack_398 = uStack_448;
  uStack_390 = uStack_440;
  uStack_388 = uStack_438;
  uStack_380 = uStack_430;
  uStack_378 = uStack_428;
  if ((char)uStack_410 == '\x03') {
    if ((uStack_468 & 0xff) == 3) {
      uStack_4a8 = param_1[7];
      uStack_4b0 = param_1[6];
      uStack_498 = param_1[9];
      uStack_4a0 = param_1[8];
      uStack_488 = param_1[0xb];
      uStack_490 = param_1[10];
      uStack_480 = param_1[0xc];
      uStack_4c8 = param_1[3];
      uStack_4d0 = param_1[2];
      uStack_4b8 = param_1[5];
      uStack_4c0 = param_1[4];
      func_0x0001036375d8(&uStack_130,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      func_0x0001036375d8(&uStack_190,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      FUN_1036368c0(&uStack_4d0,0x112db3fd8,&UNK_10d96aef0);
LAB_1036378b0:
      uVar14 = param_1[0xe];
      uVar7 = param_1[0xd];
      uVar6 = param_1[0xf];
      uVar15 = param_2[0xe];
      uVar11 = param_2[0xd];
      uVar10 = param_2[0xf];
      uStack_540 = uVar11;
      uStack_538 = uVar15;
      uStack_530 = uVar10;
      uStack_420 = uVar7;
      uStack_418 = uVar14;
      uStack_410 = uVar6;
      if ((uVar7 & 0xff) == 2) {
        if ((uVar11 & 0xff) == 2) {
          func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
LAB_103637928:
          func_0x000101556278(uVar7,uVar14,uVar6);
          uVar14 = param_1[0x11];
          dVar12 = (double)param_1[0x10];
          uVar7 = param_1[0x12];
          uVar15 = param_2[0x11];
          dVar13 = (double)param_2[0x10];
          uVar11 = param_2[0x12];
          dStack_5a0 = dVar12;
          uStack_598 = uVar14;
          uStack_590 = uVar7;
          dStack_1b0 = dVar13;
          uStack_1a8 = uVar15;
          uStack_1a0 = uVar11;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar11 >> 0x3c) goto LAB_103637a74;
            if (dVar12 == dVar13) {
              func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              func_0x0001036375d8(&dStack_1b0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              uVar3 = uVar14;
              func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
              func_0x0001015c5ecc(dVar13,uVar15,uVar11);
              if ((uVar3 & 1) != 0) goto LAB_103637b90;
            }
            else {
              func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              pdVar4 = &dStack_1b0;
              pdVar5 = &dStack_1d0;
LAB_103638628:
              func_0x0001036375d8(pdVar4,pdVar5,0x112db6f70,&UNK_10d964940);
              func_0x0001015c5ecc(dVar13,uVar15,uVar11);
            }
          }
          else {
            if (0xe < uVar11 >> 0x3c) {
              func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              func_0x0001036375d8(&dStack_1b0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
LAB_103637b90:
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x14];
              dVar12 = (double)param_1[0x13];
              uVar7 = param_1[0x15];
              uVar15 = param_2[0x14];
              dVar13 = (double)param_2[0x13];
              uVar11 = param_2[0x15];
              dStack_1f0 = dVar13;
              uStack_1e8 = uVar15;
              uStack_1e0 = uVar11;
              dStack_1d0 = dVar12;
              uStack_1c8 = uVar14;
              uStack_1c0 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103637c2c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_1f0;
                  pdVar5 = &dStack_210;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_1f0,&dStack_210,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103637c2c:
                  func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_1f0;
                  pdVar5 = &dStack_210;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_1f0,&dStack_210,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x17];
              dVar12 = (double)param_1[0x16];
              uVar7 = param_1[0x18];
              uVar15 = param_2[0x17];
              dVar13 = (double)param_2[0x16];
              uVar11 = param_2[0x18];
              dStack_230 = dVar13;
              uStack_228 = uVar15;
              uStack_220 = uVar11;
              dStack_210 = dVar12;
              uStack_208 = uVar14;
              uStack_200 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103637d9c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_230;
                  pdVar5 = &dStack_250;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_230,&dStack_250,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103637d9c:
                  func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_230;
                  pdVar5 = &dStack_250;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_230,&dStack_250,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x1a];
              dVar12 = (double)param_1[0x19];
              uVar7 = param_1[0x1b];
              uVar15 = param_2[0x1a];
              dVar13 = (double)param_2[0x19];
              uVar11 = param_2[0x1b];
              dStack_270 = dVar13;
              uStack_268 = uVar15;
              uStack_260 = uVar11;
              dStack_250 = dVar12;
              uStack_248 = uVar14;
              uStack_240 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103637f0c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_270;
                  pdVar5 = &dStack_290;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_270,&dStack_290,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103637f0c:
                  func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_270;
                  pdVar5 = &dStack_290;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_270,&dStack_290,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x1d];
              dVar12 = (double)param_1[0x1c];
              uVar7 = param_1[0x1e];
              uVar15 = param_2[0x1d];
              dVar13 = (double)param_2[0x1c];
              uVar11 = param_2[0x1e];
              dStack_2b0 = dVar13;
              uStack_2a8 = uVar15;
              uStack_2a0 = uVar11;
              dStack_290 = dVar12;
              uStack_288 = uVar14;
              uStack_280 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_10363807c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2b0;
                  pdVar5 = &dStack_2d0;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2b0,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_10363807c:
                  func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2b0;
                  pdVar5 = &dStack_2d0;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2b0,&dStack_2d0,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x20];
              dVar12 = (double)param_1[0x1f];
              uVar7 = param_1[0x21];
              uVar15 = param_2[0x20];
              dVar13 = (double)param_2[0x1f];
              uVar11 = param_2[0x21];
              dStack_2f0 = dVar13;
              uStack_2e8 = uVar15;
              uStack_2e0 = uVar11;
              dStack_2d0 = dVar12;
              uStack_2c8 = uVar14;
              uStack_2c0 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_1036381f0;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2f0;
                  pdVar5 = &dStack_310;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2f0,&dStack_310,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_1036381f0:
                  func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2f0;
                  pdVar5 = &dStack_310;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2f0,&dStack_310,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x23];
              dVar12 = (double)param_1[0x22];
              uVar7 = param_1[0x24];
              uVar15 = param_2[0x23];
              dVar13 = (double)param_2[0x22];
              uVar11 = param_2[0x24];
              dStack_330 = dVar13;
              uStack_328 = uVar15;
              uStack_320 = uVar11;
              dStack_310 = dVar12;
              uStack_308 = uVar14;
              uStack_300 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103638364;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_330;
                  pdVar5 = &dStack_350;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_330,&dStack_350,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103638364:
                  func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_330;
                  pdVar5 = &dStack_350;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_330,&dStack_350,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x26];
              dVar12 = (double)param_1[0x25];
              uVar7 = param_1[0x27];
              uVar15 = param_2[0x26];
              dVar13 = (double)param_2[0x25];
              uVar11 = param_2[0x27];
              dStack_370 = dVar13;
              uStack_368 = uVar15;
              uStack_360 = uVar11;
              dStack_350 = dVar12;
              uStack_348 = uVar14;
              uStack_340 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_1036384e0;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_370;
                  pdVar5 = adStack_4e8;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_370,adStack_4e8,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_1036384e0:
                  func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_370;
                  pdVar5 = adStack_4e8;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_370,adStack_4e8,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar6 = *param_1;
              func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
              uVar1 = (uint)uVar6;
              goto LAB_103638658;
            }
LAB_103637a74:
            func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
            pdVar4 = &dStack_1b0;
            pdVar5 = &dStack_1d0;
            uVar3 = uVar7;
            uVar8 = uVar14;
            dVar9 = dVar12;
            uVar7 = uVar11;
            uVar14 = uVar15;
            dVar12 = dVar13;
LAB_10363850c:
            func_0x0001036375d8(pdVar4,pdVar5,0x112db6f70,&UNK_10d964940);
            func_0x0001015c5ecc(dVar9,uVar8,uVar3);
          }
LAB_103638650:
          func_0x0001015c5ecc(dVar12,uVar14,uVar7);
          goto LAB_103638654;
        }
LAB_1036379c0:
        func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
        func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar7,uVar14,uVar6);
        uVar7 = uVar11;
        uVar14 = uVar15;
        uVar6 = uVar10;
      }
      else {
        if ((uVar11 & 0xff) == 2) goto LAB_1036379c0;
        if ((((uint)uVar11 ^ (uint)uVar7) & 1) == 0) {
          func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          uVar3 = uVar14;
          func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar10);
          func_0x000101556278(uVar11,uVar15,uVar10);
          if ((uVar3 & 1) != 0) goto LAB_103637928;
        }
        else {
          func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar11,uVar15,uVar10);
        }
      }
      func_0x000101556278(uVar7,uVar14,uVar6);
    }
    else {
LAB_103637770:
      uStack_4d0 = uStack_420;
      uStack_4c8 = uStack_418;
      uStack_4c0 = uStack_410;
      uStack_4b8 = uStack_408;
      uStack_4b0 = uStack_400;
      uStack_4a8 = uStack_3f8;
      uStack_4a0 = uStack_3f0;
      uStack_498 = uStack_3e8;
      uStack_490 = uStack_3e0;
      uStack_488 = uStack_3d8;
      uStack_480 = uStack_3d0;
      func_0x0001036375d8(&uStack_130,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      func_0x0001036375d8(&uStack_190,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      FUN_1036368c0(&uStack_4d0,0x112db94e8,&UNK_10d96aef8);
    }
  }
  else {
    if ((uStack_468 & 0xff) == 3) goto LAB_103637770;
    uStack_518 = param_2[7];
    uStack_520 = param_2[6];
    uStack_508 = param_2[9];
    uStack_510 = param_2[8];
    uStack_4f8 = param_2[0xb];
    uStack_500 = param_2[10];
    uStack_4f0 = param_2[0xc];
    uStack_538 = param_2[3];
    uStack_540 = param_2[2];
    uStack_528 = param_2[5];
    uStack_530 = param_2[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_80 = param_1[0xc];
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_4d0 = uStack_540;
    uStack_4c8 = uStack_538;
    uStack_4c0 = uStack_530;
    uStack_4b8 = uStack_528;
    uStack_4b0 = uStack_520;
    uStack_4a8 = uStack_518;
    uStack_4a0 = uStack_510;
    uStack_498 = uStack_508;
    uStack_490 = uStack_500;
    uStack_488 = uStack_4f8;
    uStack_480 = uStack_4f0;
    func_0x0001036375d8(&uStack_130,&dStack_5a0,0x112db3fd8,&UNK_10d96aef0);
    func_0x0001036375d8(&uStack_190,&dStack_5a0,0x112db3fd8,&UNK_10d96aef0);
    puVar2 = &uStack_d0;
    FUN_10363a074(puVar2,&uStack_4d0);
    FUN_1036368c0(&uStack_540,0x112db3fd8,&UNK_10d96aef0);
    FUN_1036368c0(&uStack_420,0x112db3fd8,&UNK_10d96aef0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1036378b0;
  }
LAB_103638654:
  uVar1 = 0;
LAB_103638658:
  return uVar1 & 1;
}



/* Entry: 10363721c; end: 10363724b;  */

undefined1  [16] FUN_10363721c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10363724c; end: 10363727f;  */

void FUN_10363724c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103637280; end: 103637293;  */

undefined8 FUN_103637280(void)

{
  return 0x103637290;
}



/* Entry: 103637294; end: 1036372a7;  */

void FUN_103637294(void)

{
  FUN_103636948();
  return;
}



/* Entry: 1036372a8; end: 10363730f;  */

void FUN_1036372a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_180);
  FUN_103636ae0(param_1,param_2,param_3);
  return;
}



/* Entry: 103637310; end: 103637313;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103637310(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103637314; end: 10363734b;  */

uint FUN_103637314(long param_1,long param_2)

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
  FUN_103639ae4();
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



/* Entry: 10363734c; end: 10363739b;  */

uint FUN_10363734c(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_160,param_1,0x140);
  func_0x000107c610b4(auStack_2a0);
  FUN_103637620(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 10363739c; end: 10363743b;  */

/* WARNING: Possible PIC construction at 0x0001036373e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036373f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036373ec) */
/* WARNING: Removing unreachable block (ram,0x0001036373fc) */

void FUN_10363739c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81008 != -1) {
    func_0x000107c61568(0x112f81008,FUN_103636900);
  }
  uVar5 = uRam000000011380acf8;
  uVar4 = uRam000000011380acf0;
  uVar3 = uRam000000011380ace8;
  uVar2 = uRam000000011380ace0;
  uVar1 = uRam000000011380acd8;
  *param_1 = uRam000000011380acd0;
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



/* Entry: 10363743c; end: 103637477;  */

void FUN_10363743c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81028;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81028,&UNK_10dbf02a8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103637478; end: 103637583;  */

void FUN_103637478(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [320];
  
  func_0x000107c610b4(auStack_170);
  func_0x000107c6068c(auStack_1b8,0);
  func_0x000107c5fa50(auStack_1b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103637584; end: 10363761f;  */

uint FUN_103637584(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2a0,param_1,0x140);
  func_0x000107c610b4(auStack_160,param_2,0x140);
  FUN_103637620(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 103637620; end: 10363867b;  */

uint FUN_103637620(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  double *pdVar4;
  double *pdVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  double dVar9;
  undefined8 uVar10;
  ulong uVar11;
  double dVar12;
  double dVar13;
  ulong uVar14;
  ulong uVar15;
  double dStack_5a0;
  ulong uStack_598;
  ulong uStack_590;
  ulong uStack_540;
  ulong uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double adStack_4e8 [3];
  ulong uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  ulong uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  ulong uStack_420;
  ulong uStack_418;
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
  ulong uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  double dStack_370;
  ulong uStack_368;
  ulong uStack_360;
  double dStack_350;
  ulong uStack_348;
  ulong uStack_340;
  double dStack_330;
  ulong uStack_328;
  ulong uStack_320;
  double dStack_310;
  ulong uStack_308;
  ulong uStack_300;
  double dStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  double dStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  double dStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  double dStack_290;
  ulong uStack_288;
  ulong uStack_280;
  double dStack_270;
  ulong uStack_268;
  ulong uStack_260;
  double dStack_250;
  ulong uStack_248;
  ulong uStack_240;
  double dStack_230;
  ulong uStack_228;
  ulong uStack_220;
  double dStack_210;
  ulong uStack_208;
  ulong uStack_200;
  double dStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  double dStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  double dStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
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
  
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_418 = param_1[3];
  uStack_420 = param_1[2];
  uStack_408 = param_1[5];
  uStack_410 = param_1[4];
  uStack_3e8 = param_1[9];
  uStack_3f0 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_3f8 = param_1[7];
  uStack_400 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_188 = param_2[3];
  uStack_190 = param_2[2];
  uStack_178 = param_2[5];
  uStack_180 = param_2[4];
  uStack_470 = param_2[3];
  uStack_478 = param_2[2];
  uStack_460 = param_2[5];
  uStack_468 = param_2[4];
  uStack_440 = param_2[9];
  uStack_448 = param_2[8];
  uStack_148 = param_2[0xb];
  uStack_150 = param_2[10];
  uStack_450 = param_2[7];
  uStack_458 = param_2[6];
  uStack_158 = param_2[9];
  uStack_160 = param_2[8];
  uStack_168 = param_2[7];
  uStack_170 = param_2[6];
  uStack_3d8 = param_1[0xb];
  uStack_3e0 = param_1[10];
  uStack_e0 = param_1[0xc];
  uStack_140 = param_2[0xc];
  uStack_3d0 = param_1[0xc];
  uStack_430 = param_2[0xb];
  uStack_438 = param_2[10];
  uStack_428 = param_2[0xc];
  uStack_3c8 = uStack_478;
  uStack_3c0 = uStack_470;
  uStack_3b8 = uStack_468;
  uStack_3b0 = uStack_460;
  uStack_3a8 = uStack_458;
  uStack_3a0 = uStack_450;
  uStack_398 = uStack_448;
  uStack_390 = uStack_440;
  uStack_388 = uStack_438;
  uStack_380 = uStack_430;
  uStack_378 = uStack_428;
  if ((char)uStack_410 == '\x03') {
    if ((uStack_468 & 0xff) == 3) {
      uStack_4a8 = param_1[7];
      uStack_4b0 = param_1[6];
      uStack_498 = param_1[9];
      uStack_4a0 = param_1[8];
      uStack_488 = param_1[0xb];
      uStack_490 = param_1[10];
      uStack_480 = param_1[0xc];
      uStack_4c8 = param_1[3];
      uStack_4d0 = param_1[2];
      uStack_4b8 = param_1[5];
      uStack_4c0 = param_1[4];
      func_0x0001036375d8(&uStack_130,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      func_0x0001036375d8(&uStack_190,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      FUN_1036368c0(&uStack_4d0,0x112db3fd8,&UNK_10d96aef0);
LAB_1036378b0:
      uVar14 = param_1[0xe];
      uVar7 = param_1[0xd];
      uVar6 = param_1[0xf];
      uVar15 = param_2[0xe];
      uVar11 = param_2[0xd];
      uVar10 = param_2[0xf];
      uStack_540 = uVar11;
      uStack_538 = uVar15;
      uStack_530 = uVar10;
      uStack_420 = uVar7;
      uStack_418 = uVar14;
      uStack_410 = uVar6;
      if ((uVar7 & 0xff) == 2) {
        if ((uVar11 & 0xff) == 2) {
          func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
LAB_103637928:
          func_0x000101556278(uVar7,uVar14,uVar6);
          uVar14 = param_1[0x11];
          dVar12 = (double)param_1[0x10];
          uVar7 = param_1[0x12];
          uVar15 = param_2[0x11];
          dVar13 = (double)param_2[0x10];
          uVar11 = param_2[0x12];
          dStack_5a0 = dVar12;
          uStack_598 = uVar14;
          uStack_590 = uVar7;
          dStack_1b0 = dVar13;
          uStack_1a8 = uVar15;
          uStack_1a0 = uVar11;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar11 >> 0x3c) goto LAB_103637a74;
            if (dVar12 == dVar13) {
              func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              func_0x0001036375d8(&dStack_1b0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              uVar3 = uVar14;
              func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
              func_0x0001015c5ecc(dVar13,uVar15,uVar11);
              if ((uVar3 & 1) != 0) goto LAB_103637b90;
            }
            else {
              func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              pdVar4 = &dStack_1b0;
              pdVar5 = &dStack_1d0;
LAB_103638628:
              func_0x0001036375d8(pdVar4,pdVar5,0x112db6f70,&UNK_10d964940);
              func_0x0001015c5ecc(dVar13,uVar15,uVar11);
            }
          }
          else {
            if (0xe < uVar11 >> 0x3c) {
              func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
              func_0x0001036375d8(&dStack_1b0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
LAB_103637b90:
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x14];
              dVar12 = (double)param_1[0x13];
              uVar7 = param_1[0x15];
              uVar15 = param_2[0x14];
              dVar13 = (double)param_2[0x13];
              uVar11 = param_2[0x15];
              dStack_1f0 = dVar13;
              uStack_1e8 = uVar15;
              uStack_1e0 = uVar11;
              dStack_1d0 = dVar12;
              uStack_1c8 = uVar14;
              uStack_1c0 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103637c2c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_1f0;
                  pdVar5 = &dStack_210;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_1f0,&dStack_210,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103637c2c:
                  func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_1f0;
                  pdVar5 = &dStack_210;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_1d0,&dStack_210,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_1f0,&dStack_210,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x17];
              dVar12 = (double)param_1[0x16];
              uVar7 = param_1[0x18];
              uVar15 = param_2[0x17];
              dVar13 = (double)param_2[0x16];
              uVar11 = param_2[0x18];
              dStack_230 = dVar13;
              uStack_228 = uVar15;
              uStack_220 = uVar11;
              dStack_210 = dVar12;
              uStack_208 = uVar14;
              uStack_200 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103637d9c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_230;
                  pdVar5 = &dStack_250;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_230,&dStack_250,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103637d9c:
                  func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_230;
                  pdVar5 = &dStack_250;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_210,&dStack_250,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_230,&dStack_250,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x1a];
              dVar12 = (double)param_1[0x19];
              uVar7 = param_1[0x1b];
              uVar15 = param_2[0x1a];
              dVar13 = (double)param_2[0x19];
              uVar11 = param_2[0x1b];
              dStack_270 = dVar13;
              uStack_268 = uVar15;
              uStack_260 = uVar11;
              dStack_250 = dVar12;
              uStack_248 = uVar14;
              uStack_240 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103637f0c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_270;
                  pdVar5 = &dStack_290;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_270,&dStack_290,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103637f0c:
                  func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_270;
                  pdVar5 = &dStack_290;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_250,&dStack_290,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_270,&dStack_290,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x1d];
              dVar12 = (double)param_1[0x1c];
              uVar7 = param_1[0x1e];
              uVar15 = param_2[0x1d];
              dVar13 = (double)param_2[0x1c];
              uVar11 = param_2[0x1e];
              dStack_2b0 = dVar13;
              uStack_2a8 = uVar15;
              uStack_2a0 = uVar11;
              dStack_290 = dVar12;
              uStack_288 = uVar14;
              uStack_280 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_10363807c;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2b0;
                  pdVar5 = &dStack_2d0;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2b0,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_10363807c:
                  func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2b0;
                  pdVar5 = &dStack_2d0;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_290,&dStack_2d0,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2b0,&dStack_2d0,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x20];
              dVar12 = (double)param_1[0x1f];
              uVar7 = param_1[0x21];
              uVar15 = param_2[0x20];
              dVar13 = (double)param_2[0x1f];
              uVar11 = param_2[0x21];
              dStack_2f0 = dVar13;
              uStack_2e8 = uVar15;
              uStack_2e0 = uVar11;
              dStack_2d0 = dVar12;
              uStack_2c8 = uVar14;
              uStack_2c0 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_1036381f0;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2f0;
                  pdVar5 = &dStack_310;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2f0,&dStack_310,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_1036381f0:
                  func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_2f0;
                  pdVar5 = &dStack_310;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_2d0,&dStack_310,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_2f0,&dStack_310,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x23];
              dVar12 = (double)param_1[0x22];
              uVar7 = param_1[0x24];
              uVar15 = param_2[0x23];
              dVar13 = (double)param_2[0x22];
              uVar11 = param_2[0x24];
              dStack_330 = dVar13;
              uStack_328 = uVar15;
              uStack_320 = uVar11;
              dStack_310 = dVar12;
              uStack_308 = uVar14;
              uStack_300 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_103638364;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_330;
                  pdVar5 = &dStack_350;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_330,&dStack_350,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_103638364:
                  func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_330;
                  pdVar5 = &dStack_350;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_310,&dStack_350,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_330,&dStack_350,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar14 = param_1[0x26];
              dVar12 = (double)param_1[0x25];
              uVar7 = param_1[0x27];
              uVar15 = param_2[0x26];
              dVar13 = (double)param_2[0x25];
              uVar11 = param_2[0x27];
              dStack_370 = dVar13;
              uStack_368 = uVar15;
              uStack_360 = uVar11;
              dStack_350 = dVar12;
              uStack_348 = uVar14;
              uStack_340 = uVar7;
              if (uVar7 >> 0x3c < 0xf) {
                if (0xe < uVar11 >> 0x3c) goto LAB_1036384e0;
                if (dVar12 != dVar13) {
                  func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_370;
                  pdVar5 = adStack_4e8;
                  goto LAB_103638628;
                }
                func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_370,adStack_4e8,0x112db6f70,&UNK_10d964940);
                uVar3 = uVar14;
                func_0x000100e25fcc(uVar14,uVar7,uVar15,uVar11);
                func_0x0001015c5ecc(dVar13,uVar15,uVar11);
                if ((uVar3 & 1) == 0) goto LAB_103638650;
              }
              else {
                if (uVar11 >> 0x3c < 0xf) {
LAB_1036384e0:
                  func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                  pdVar4 = &dStack_370;
                  pdVar5 = adStack_4e8;
                  uVar3 = uVar7;
                  uVar8 = uVar14;
                  dVar9 = dVar12;
                  uVar7 = uVar11;
                  uVar14 = uVar15;
                  dVar12 = dVar13;
                  goto LAB_10363850c;
                }
                func_0x0001036375d8(&dStack_350,adStack_4e8,0x112db6f70,&UNK_10d964940);
                func_0x0001036375d8(&dStack_370,adStack_4e8,0x112db6f70,&UNK_10d964940);
              }
              func_0x0001015c5ecc(dVar12,uVar14,uVar7);
              uVar6 = *param_1;
              func_0x000100e25fcc(uVar6,param_1[1],*param_2,param_2[1]);
              uVar1 = (uint)uVar6;
              goto LAB_103638658;
            }
LAB_103637a74:
            func_0x0001036375d8(&dStack_5a0,&dStack_1d0,0x112db6f70,&UNK_10d964940);
            pdVar4 = &dStack_1b0;
            pdVar5 = &dStack_1d0;
            uVar3 = uVar7;
            uVar8 = uVar14;
            dVar9 = dVar12;
            uVar7 = uVar11;
            uVar14 = uVar15;
            dVar12 = dVar13;
LAB_10363850c:
            func_0x0001036375d8(pdVar4,pdVar5,0x112db6f70,&UNK_10d964940);
            func_0x0001015c5ecc(dVar9,uVar8,uVar3);
          }
LAB_103638650:
          func_0x0001015c5ecc(dVar12,uVar14,uVar7);
          goto LAB_103638654;
        }
LAB_1036379c0:
        func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
        func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar7,uVar14,uVar6);
        uVar7 = uVar11;
        uVar14 = uVar15;
        uVar6 = uVar10;
      }
      else {
        if ((uVar11 & 0xff) == 2) goto LAB_1036379c0;
        if ((((uint)uVar11 ^ (uint)uVar7) & 1) == 0) {
          func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          uVar3 = uVar14;
          func_0x000100e25fcc(uVar14,uVar6,uVar15,uVar10);
          func_0x000101556278(uVar11,uVar15,uVar10);
          if ((uVar3 & 1) != 0) goto LAB_103637928;
        }
        else {
          func_0x0001036375d8(&uStack_420,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x0001036375d8(&uStack_540,&dStack_5a0,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar11,uVar15,uVar10);
        }
      }
      func_0x000101556278(uVar7,uVar14,uVar6);
    }
    else {
LAB_103637770:
      uStack_4d0 = uStack_420;
      uStack_4c8 = uStack_418;
      uStack_4c0 = uStack_410;
      uStack_4b8 = uStack_408;
      uStack_4b0 = uStack_400;
      uStack_4a8 = uStack_3f8;
      uStack_4a0 = uStack_3f0;
      uStack_498 = uStack_3e8;
      uStack_490 = uStack_3e0;
      uStack_488 = uStack_3d8;
      uStack_480 = uStack_3d0;
      func_0x0001036375d8(&uStack_130,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      func_0x0001036375d8(&uStack_190,&uStack_d0,0x112db3fd8,&UNK_10d96aef0);
      FUN_1036368c0(&uStack_4d0,0x112db94e8,&UNK_10d96aef8);
    }
  }
  else {
    if ((uStack_468 & 0xff) == 3) goto LAB_103637770;
    uStack_518 = param_2[7];
    uStack_520 = param_2[6];
    uStack_508 = param_2[9];
    uStack_510 = param_2[8];
    uStack_4f8 = param_2[0xb];
    uStack_500 = param_2[10];
    uStack_4f0 = param_2[0xc];
    uStack_538 = param_2[3];
    uStack_540 = param_2[2];
    uStack_528 = param_2[5];
    uStack_530 = param_2[4];
    uStack_a8 = param_1[7];
    uStack_b0 = param_1[6];
    uStack_98 = param_1[9];
    uStack_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    uStack_90 = param_1[10];
    uStack_80 = param_1[0xc];
    uStack_c8 = param_1[3];
    uStack_d0 = param_1[2];
    uStack_b8 = param_1[5];
    uStack_c0 = param_1[4];
    uStack_4d0 = uStack_540;
    uStack_4c8 = uStack_538;
    uStack_4c0 = uStack_530;
    uStack_4b8 = uStack_528;
    uStack_4b0 = uStack_520;
    uStack_4a8 = uStack_518;
    uStack_4a0 = uStack_510;
    uStack_498 = uStack_508;
    uStack_490 = uStack_500;
    uStack_488 = uStack_4f8;
    uStack_480 = uStack_4f0;
    func_0x0001036375d8(&uStack_130,&dStack_5a0,0x112db3fd8,&UNK_10d96aef0);
    func_0x0001036375d8(&uStack_190,&dStack_5a0,0x112db3fd8,&UNK_10d96aef0);
    puVar2 = &uStack_d0;
    FUN_10363a074(puVar2,&uStack_4d0);
    FUN_1036368c0(&uStack_540,0x112db3fd8,&UNK_10d96aef0);
    FUN_1036368c0(&uStack_420,0x112db3fd8,&UNK_10d96aef0);
    if (((ulong)puVar2 & 1) != 0) goto LAB_1036378b0;
  }
LAB_103638654:
  uVar1 = 0;
LAB_103638658:
  return uVar1 & 1;
}



/* Entry: 10363867c; end: 1036386bb;  */

void FUN_10363867c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81010 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf01f0;
  func_0x000107c61520(&UNK_10dbf01f0,&UNK_1106738d8);
  puRam0000000112f81010 = puVar1;
  return;
}



/* Entry: 1036386bc; end: 1036386df;  */

void FUN_1036386bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036386e0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1036386e0; end: 10363871f;  */

void FUN_1036386e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81018 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf01c8;
  func_0x000107c61520(&UNK_10dbf01c8,&UNK_1106738d8);
  puRam0000000112f81018 = puVar1;
  return;
}



/* Entry: 103638720; end: 10363874b;  */

void FUN_103638720(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363867c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10363683c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10363874c; end: 10363874f;  */

void FUN_10363874c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0230;
  func_0x000107c61520(&UNK_10dbf0230,&UNK_1106738d8);
  puRam0000000112f81020 = puVar1;
  return;
}



/* Entry: 103638750; end: 10363878f;  */

void FUN_103638750(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81020 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0230;
  func_0x000107c61520(&UNK_10dbf0230,&UNK_1106738d8);
  puRam0000000112f81020 = puVar1;
  return;
}



/* Entry: 103638790; end: 103638913;  */

long FUN_103638790(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103638914; end: 1036399db;  */

undefined8 * FUN_103638914(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar4 = *param_2;
  uVar5 = param_2[1];
  func_0x00010006c00c(uVar4,uVar5);
  *param_1 = uVar4;
  param_1[1] = uVar5;
  pcVar3 = (char *)(param_2 + 4);
  cVar1 = *pcVar3;
  if (cVar1 == '\x03') {
    uVar4 = param_2[6];
    uVar6 = param_2[9];
    uVar5 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar4;
    param_1[9] = uVar6;
    param_1[8] = uVar5;
    uVar4 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xc] = param_2[0xc];
    uVar4 = param_2[2];
    uVar6 = param_2[5];
    uVar5 = *(undefined8 *)pcVar3;
    param_1[3] = param_2[3];
    param_1[2] = uVar4;
    param_1[5] = uVar6;
    param_1[4] = uVar5;
  }
  else {
    uVar4 = param_2[2];
    uVar5 = param_2[3];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[2] = uVar4;
    param_1[3] = uVar5;
    if (cVar1 == '\x02') {
      uVar4 = *(undefined8 *)pcVar3;
      param_1[5] = param_2[5];
      param_1[4] = uVar4;
      param_1[6] = param_2[6];
    }
    else {
      *(char *)(param_1 + 4) = cVar1;
      uVar4 = param_2[5];
      uVar5 = param_2[6];
      func_0x00010006c00c(uVar4,uVar5);
      param_1[5] = uVar4;
      param_1[6] = uVar5;
    }
    uVar2 = param_2[9];
    if (uVar2 >> 0x3c < 0xf) {
      uVar4 = param_2[8];
      param_1[7] = param_2[7];
      func_0x00010006c00c(uVar4,uVar2);
      param_1[8] = uVar4;
      param_1[9] = uVar2;
    }
    else {
      uVar4 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar4;
      param_1[9] = param_2[9];
    }
    uVar2 = param_2[0xc];
    if (uVar2 >> 0x3c < 0xf) {
      uVar4 = param_2[0xb];
      param_1[10] = param_2[10];
      func_0x00010006c00c(uVar4,uVar2);
      param_1[0xb] = uVar4;
      param_1[0xc] = uVar2;
    }
    else {
      uVar4 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      param_1[0xc] = param_2[0xc];
    }
  }
  cVar1 = *(char *)(param_2 + 0xd);
  if (cVar1 == '\x02') {
    uVar4 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar4;
    param_1[0xf] = param_2[0xf];
  }
  else {
    *(char *)(param_1 + 0xd) = cVar1;
    uVar4 = param_2[0xe];
    uVar5 = param_2[0xf];
    func_0x00010006c00c(uVar4,uVar5);
    param_1[0xe] = uVar4;
    param_1[0xf] = uVar5;
  }
  uVar2 = param_2[0x12];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x11];
    param_1[0x10] = param_2[0x10];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x11] = uVar4;
    param_1[0x12] = uVar2;
  }
  else {
    uVar4 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar4;
    param_1[0x12] = param_2[0x12];
  }
  uVar2 = param_2[0x15];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x14] = uVar4;
    param_1[0x15] = uVar2;
  }
  else {
    uVar4 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar4;
    param_1[0x15] = param_2[0x15];
  }
  uVar2 = param_2[0x18];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x17] = uVar4;
    param_1[0x18] = uVar2;
  }
  else {
    uVar4 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar4;
    param_1[0x18] = param_2[0x18];
  }
  uVar2 = param_2[0x1b];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x1a] = uVar4;
    param_1[0x1b] = uVar2;
  }
  else {
    uVar4 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar4;
    param_1[0x1b] = param_2[0x1b];
  }
  uVar2 = param_2[0x1e];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x1d];
    param_1[0x1c] = param_2[0x1c];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x1d] = uVar4;
    param_1[0x1e] = uVar2;
  }
  else {
    uVar4 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar4;
    param_1[0x1e] = param_2[0x1e];
  }
  uVar2 = param_2[0x21];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x20];
    param_1[0x1f] = param_2[0x1f];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x20] = uVar4;
    param_1[0x21] = uVar2;
  }
  else {
    uVar4 = param_2[0x1f];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar4;
    param_1[0x21] = param_2[0x21];
  }
  uVar2 = param_2[0x24];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x23] = uVar4;
    param_1[0x24] = uVar2;
  }
  else {
    uVar4 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar4;
    param_1[0x24] = param_2[0x24];
  }
  uVar2 = param_2[0x27];
  if (uVar2 >> 0x3c < 0xf) {
    uVar4 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    func_0x00010006c00c(uVar4,uVar2);
    param_1[0x26] = uVar4;
    param_1[0x27] = uVar2;
  }
  else {
    uVar4 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar4;
    param_1[0x27] = param_2[0x27];
  }
  return param_1;
}



/* Entry: 1036399dc; end: 103639ae3;  */

int FUN_1036399dc(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x50] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 0x1a)) {
    uVar1 = (*(byte *)(param_1 + 0x1a) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103639ae4; end: 103639b23;  */

void FUN_103639ae4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81030 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf019c;
  func_0x000107c61520(&DAT_10dbf019c,&UNK_1106738d8);
  puRam0000000112f81030 = puVar1;
  return;
}



/* Entry: 103639b24; end: 103639d03;  */

bool FUN_103639b24(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  ulong uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = uVar1 & 0xff;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 == 2) {
    FUN_10363a4ac(&uStack_50,auStack_68,0x112db94f0,&UNK_10d96af00);
  }
  else {
    FUN_10363a4ac(&uStack_50,auStack_68,0x112db94f0,&UNK_10d96af00);
    func_0x000101556278(uVar1,uVar2,uVar3);
    uVar1 = 2;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x000101556278(uVar1,uVar2,uVar3);
  return uVar4 != 2;
}



/* Entry: 103639d04; end: 103639d4b;  */

void FUN_103639d04(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf0520,0x5a,2);
  uRam000000011380ad08 = uStack_38;
  uRam000000011380ad00 = uStack_40;
  uRam000000011380ad18 = uStack_28;
  uRam000000011380ad10 = uStack_30;
  uRam000000011380ad28 = uStack_18;
  uRam000000011380ad20 = uStack_20;
  return;
}



/* Entry: 103639d4c; end: 103639e4f;  */

void FUN_103639d4c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015c5d3c();
        lVar2 = unaff_x20 + 0x40;
LAB_103639dd0:
        puVar3 = &UNK_110790900;
LAB_103639dd4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015c5d3c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_103639dd0;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x0001015fdfec();
          lVar2 = unaff_x20 + 0x10;
          puVar3 = &UNK_110790c00;
          goto LAB_103639dd4;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103639e50; end: 103639edb;  */

void FUN_103639e50(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103639edc();
  if (unaff_x21 == 0) {
    FUN_103639f64();
    FUN_103639fec();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103639edc; end: 103639f63;  */

void FUN_103639edc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x10);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x20);
    uStack_50 = *(undefined8 *)(param_1 + 0x18);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,1,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103639f64; end: 103639feb;  */

void FUN_103639f64(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,2,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103639fec; end: 10363a073;  */

void FUN_103639fec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x50);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x48);
    uStack_60 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5d3c();
    (*pcVar1)(&uStack_60,3,&UNK_110790900,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10363a074; end: 10363a0cb;  */

uint FUN_10363a074(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  double adStack_148 [3];
  double dStack_130;
  ulong uStack_128;
  ulong uStack_120;
  double dStack_110;
  ulong uStack_108;
  ulong uStack_100;
  double dStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  double dStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  uVar13 = param_1[3];
  uVar6 = param_1[2];
  uVar5 = param_1[4];
  uVar14 = param_2[3];
  uVar10 = param_2[2];
  uVar9 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar14;
  uStack_a0 = uVar9;
  uStack_90 = uVar6;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  if ((uVar6 & 0xff) == 2) {
    if ((uVar10 & 0xff) != 2) {
LAB_10363a62c:
      FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar13,uVar5);
      uVar6 = uVar10;
      uVar13 = uVar14;
      uVar5 = uVar9;
      goto LAB_10363a784;
    }
    FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
    FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
LAB_10363a598:
    func_0x000101556278(uVar6,uVar13,uVar5);
    uVar13 = param_1[6];
    dVar11 = (double)param_1[5];
    uVar6 = param_1[7];
    uVar14 = param_2[6];
    dVar12 = (double)param_2[5];
    uVar10 = param_2[7];
    dStack_f0 = dVar12;
    uStack_e8 = uVar14;
    uStack_e0 = uVar10;
    dStack_d0 = dVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_10363a6e4;
      if (dVar11 == dVar12) {
        FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        FUN_10363a4ac(&dStack_f0,&dStack_110,0x112db6f70,&UNK_10d964940);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar6,uVar14,uVar10);
        func_0x0001015c5ecc(dVar12,uVar14,uVar10);
        if ((uVar2 & 1) != 0) goto LAB_10363a800;
      }
      else {
        FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        pdVar3 = &dStack_f0;
        pdVar4 = &dStack_110;
LAB_10363a9e0:
        FUN_10363a4ac(pdVar3,pdVar4,0x112db6f70,&UNK_10d964940);
        func_0x0001015c5ecc(dVar12,uVar14,uVar10);
      }
    }
    else {
      if (0xe < uVar10 >> 0x3c) {
        FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        FUN_10363a4ac(&dStack_f0,&dStack_110,0x112db6f70,&UNK_10d964940);
LAB_10363a800:
        func_0x0001015c5ecc(dVar11,uVar13,uVar6);
        uVar13 = param_1[9];
        dVar11 = (double)param_1[8];
        uVar6 = param_1[10];
        uVar14 = param_2[9];
        dVar12 = (double)param_2[8];
        uVar10 = param_2[10];
        dStack_130 = dVar12;
        uStack_128 = uVar14;
        uStack_120 = uVar10;
        dStack_110 = dVar11;
        uStack_108 = uVar13;
        uStack_100 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_10363a898;
          if (dVar11 != dVar12) {
            FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
            pdVar3 = &dStack_130;
            pdVar4 = adStack_148;
            goto LAB_10363a9e0;
          }
          FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
          FUN_10363a4ac(&dStack_130,adStack_148,0x112db6f70,&UNK_10d964940);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar6,uVar14,uVar10);
          func_0x0001015c5ecc(dVar12,uVar14,uVar10);
          if ((uVar2 & 1) == 0) goto LAB_10363aa08;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_10363a898:
            FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
            pdVar3 = &dStack_130;
            pdVar4 = adStack_148;
            uVar2 = uVar6;
            uVar7 = uVar13;
            dVar8 = dVar11;
            uVar6 = uVar10;
            uVar13 = uVar14;
            dVar11 = dVar12;
            goto LAB_10363a8c4;
          }
          FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
          FUN_10363a4ac(&dStack_130,adStack_148,0x112db6f70,&UNK_10d964940);
        }
        func_0x0001015c5ecc(dVar11,uVar13,uVar6);
        uVar5 = *param_1;
        func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar5;
        goto LAB_10363aa10;
      }
LAB_10363a6e4:
      FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
      pdVar3 = &dStack_f0;
      pdVar4 = &dStack_110;
      uVar2 = uVar6;
      uVar7 = uVar13;
      dVar8 = dVar11;
      uVar6 = uVar10;
      uVar13 = uVar14;
      dVar11 = dVar12;
LAB_10363a8c4:
      FUN_10363a4ac(pdVar3,pdVar4,0x112db6f70,&UNK_10d964940);
      func_0x0001015c5ecc(dVar8,uVar7,uVar2);
    }
LAB_10363aa08:
    func_0x0001015c5ecc(dVar11,uVar13,uVar6);
  }
  else {
    if ((uVar10 & 0xff) == 2) goto LAB_10363a62c;
    if ((((uint)uVar10 ^ (uint)uVar6) & 1) == 0) {
      FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
      func_0x000101556278(uVar10,uVar14,uVar9);
      if ((uVar2 & 1) != 0) goto LAB_10363a598;
    }
    else {
      FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar10,uVar14,uVar9);
    }
LAB_10363a784:
    func_0x000101556278(uVar6,uVar13,uVar5);
  }
  uVar1 = 0;
LAB_10363aa10:
  return uVar1 & 1;
}



/* Entry: 10363a0cc; end: 10363a0fb;  */

undefined1  [16] FUN_10363a0cc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10363a0fc; end: 10363a12f;  */

void FUN_10363a0fc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10363a130; end: 10363a143;  */

undefined8 FUN_10363a130(void)

{
  return 0x10363a140;
}



/* Entry: 10363a144; end: 10363a157;  */

void FUN_10363a144(void)

{
  FUN_103639d4c();
  return;
}



/* Entry: 10363a158; end: 10363a19f;  */

void FUN_10363a158(void)

{
  FUN_103639e50();
  return;
}



/* Entry: 10363a1a0; end: 10363a1a3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10363a1a0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10363a1a4; end: 10363a1db;  */

uint FUN_10363a1a4(long param_1,long param_2)

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
  FUN_10363b0f8();
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



/* Entry: 10363a1dc; end: 10363a243;  */

uint FUN_10363a1dc(undefined8 *param_1)

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
  FUN_10363a4f4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10363a244; end: 10363a2e3;  */

/* WARNING: Possible PIC construction at 0x00010363a290: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010363a2a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010363a294) */
/* WARNING: Removing unreachable block (ram,0x00010363a2a4) */

void FUN_10363a244(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81038 != -1) {
    func_0x000107c61568(0x112f81038,FUN_103639d04);
  }
  uVar5 = uRam000000011380ad28;
  uVar4 = uRam000000011380ad20;
  uVar3 = uRam000000011380ad18;
  uVar2 = uRam000000011380ad10;
  uVar1 = uRam000000011380ad08;
  *param_1 = uRam000000011380ad00;
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



/* Entry: 10363a2e4; end: 10363a31f;  */

void FUN_10363a2e4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81058;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81058,&UNK_10dbf0518);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10363a320; end: 10363a443;  */

void FUN_10363a320(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10363a444; end: 10363a4ab;  */

uint FUN_10363a444(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10363a4f4(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10363a4ac; end: 10363a4f3;  */

undefined8 FUN_10363a4ac(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10363a4f4; end: 10363aa33;  */

uint FUN_10363a4f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  double *pdVar3;
  double *pdVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  double dVar8;
  undefined8 uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  ulong uVar13;
  ulong uVar14;
  double adStack_148 [3];
  double dStack_130;
  ulong uStack_128;
  ulong uStack_120;
  double dStack_110;
  ulong uStack_108;
  ulong uStack_100;
  double dStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  double dStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  ulong uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  uVar13 = param_1[3];
  uVar6 = param_1[2];
  uVar5 = param_1[4];
  uVar14 = param_2[3];
  uVar10 = param_2[2];
  uVar9 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar14;
  uStack_a0 = uVar9;
  uStack_90 = uVar6;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  if ((uVar6 & 0xff) == 2) {
    if ((uVar10 & 0xff) != 2) {
LAB_10363a62c:
      FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar6,uVar13,uVar5);
      uVar6 = uVar10;
      uVar13 = uVar14;
      uVar5 = uVar9;
      goto LAB_10363a784;
    }
    FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
    FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
LAB_10363a598:
    func_0x000101556278(uVar6,uVar13,uVar5);
    uVar13 = param_1[6];
    dVar11 = (double)param_1[5];
    uVar6 = param_1[7];
    uVar14 = param_2[6];
    dVar12 = (double)param_2[5];
    uVar10 = param_2[7];
    dStack_f0 = dVar12;
    uStack_e8 = uVar14;
    uStack_e0 = uVar10;
    dStack_d0 = dVar11;
    uStack_c8 = uVar13;
    uStack_c0 = uVar6;
    if (uVar6 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_10363a6e4;
      if (dVar11 == dVar12) {
        FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        FUN_10363a4ac(&dStack_f0,&dStack_110,0x112db6f70,&UNK_10d964940);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar6,uVar14,uVar10);
        func_0x0001015c5ecc(dVar12,uVar14,uVar10);
        if ((uVar2 & 1) != 0) goto LAB_10363a800;
      }
      else {
        FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        pdVar3 = &dStack_f0;
        pdVar4 = &dStack_110;
LAB_10363a9e0:
        FUN_10363a4ac(pdVar3,pdVar4,0x112db6f70,&UNK_10d964940);
        func_0x0001015c5ecc(dVar12,uVar14,uVar10);
      }
    }
    else {
      if (0xe < uVar10 >> 0x3c) {
        FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
        FUN_10363a4ac(&dStack_f0,&dStack_110,0x112db6f70,&UNK_10d964940);
LAB_10363a800:
        func_0x0001015c5ecc(dVar11,uVar13,uVar6);
        uVar13 = param_1[9];
        dVar11 = (double)param_1[8];
        uVar6 = param_1[10];
        uVar14 = param_2[9];
        dVar12 = (double)param_2[8];
        uVar10 = param_2[10];
        dStack_130 = dVar12;
        uStack_128 = uVar14;
        uStack_120 = uVar10;
        dStack_110 = dVar11;
        uStack_108 = uVar13;
        uStack_100 = uVar6;
        if (uVar6 >> 0x3c < 0xf) {
          if (0xe < uVar10 >> 0x3c) goto LAB_10363a898;
          if (dVar11 != dVar12) {
            FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
            pdVar3 = &dStack_130;
            pdVar4 = adStack_148;
            goto LAB_10363a9e0;
          }
          FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
          FUN_10363a4ac(&dStack_130,adStack_148,0x112db6f70,&UNK_10d964940);
          uVar2 = uVar13;
          func_0x000100e25fcc(uVar13,uVar6,uVar14,uVar10);
          func_0x0001015c5ecc(dVar12,uVar14,uVar10);
          if ((uVar2 & 1) == 0) goto LAB_10363aa08;
        }
        else {
          if (uVar10 >> 0x3c < 0xf) {
LAB_10363a898:
            FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
            pdVar3 = &dStack_130;
            pdVar4 = adStack_148;
            uVar2 = uVar6;
            uVar7 = uVar13;
            dVar8 = dVar11;
            uVar6 = uVar10;
            uVar13 = uVar14;
            dVar11 = dVar12;
            goto LAB_10363a8c4;
          }
          FUN_10363a4ac(&dStack_110,adStack_148,0x112db6f70,&UNK_10d964940);
          FUN_10363a4ac(&dStack_130,adStack_148,0x112db6f70,&UNK_10d964940);
        }
        func_0x0001015c5ecc(dVar11,uVar13,uVar6);
        uVar5 = *param_1;
        func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
        uVar1 = (uint)uVar5;
        goto LAB_10363aa10;
      }
LAB_10363a6e4:
      FUN_10363a4ac(&dStack_d0,&dStack_110,0x112db6f70,&UNK_10d964940);
      pdVar3 = &dStack_f0;
      pdVar4 = &dStack_110;
      uVar2 = uVar6;
      uVar7 = uVar13;
      dVar8 = dVar11;
      uVar6 = uVar10;
      uVar13 = uVar14;
      dVar11 = dVar12;
LAB_10363a8c4:
      FUN_10363a4ac(pdVar3,pdVar4,0x112db6f70,&UNK_10d964940);
      func_0x0001015c5ecc(dVar8,uVar7,uVar2);
    }
LAB_10363aa08:
    func_0x0001015c5ecc(dVar11,uVar13,uVar6);
  }
  else {
    if ((uVar10 & 0xff) == 2) goto LAB_10363a62c;
    if ((((uint)uVar10 ^ (uint)uVar6) & 1) == 0) {
      FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar9);
      func_0x000101556278(uVar10,uVar14,uVar9);
      if ((uVar2 & 1) != 0) goto LAB_10363a598;
    }
    else {
      FUN_10363a4ac(&uStack_90,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      FUN_10363a4ac(&uStack_b0,&dStack_d0,0x112db94f0,&UNK_10d96af00);
      func_0x000101556278(uVar10,uVar14,uVar9);
    }
LAB_10363a784:
    func_0x000101556278(uVar6,uVar13,uVar5);
  }
  uVar1 = 0;
LAB_10363aa10:
  return uVar1 & 1;
}



/* Entry: 10363aa34; end: 10363aa73;  */

void FUN_10363aa34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81040 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0440;
  func_0x000107c61520(&UNK_10dbf0440,&UNK_110673aa8);
  puRam0000000112f81040 = puVar1;
  return;
}



/* Entry: 10363aa74; end: 10363aa97;  */

void FUN_10363aa74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363aa98();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10363aa98; end: 10363aad7;  */

void FUN_10363aa98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf0418;
  func_0x000107c61520(&UNK_10dbf0418,&UNK_110673aa8);
  puRam0000000112f81048 = puVar1;
  return;
}



/* Entry: 10363aad8; end: 10363ab03;  */

void FUN_10363aad8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10363aa34();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015fe02c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



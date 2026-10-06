/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d54434; end: 103d54447;  */

void FUN_103d54434(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006370;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006370,&UNK_10dc88190);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d54448; end: 103d5447b;  */

void FUN_103d54448(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d5447c; end: 103d5458f;  */

void FUN_103d5447c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = unaff_x20[1];
  uStack_48 = unaff_x20[2];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d54590; end: 103d54623;  */

/* WARNING: Possible PIC construction at 0x000103d545d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d545dc) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d54590(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar9 = (byte *)param_1[3];
  pbVar24 = (byte *)param_1[4];
  lVar23 = param_2[3];
  uVar15 = param_2[4];
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar14 = (byte *)*param_2;
  pbVar16 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar16,0);
    return pbVar11;
  }
  if ((double)param_1[2] != (double)param_2[2]) {
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
        unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
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
    unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 103d54624; end: 103d554f3;  */

void FUN_103d54624(ulong param_1,ulong param_2)

{
  byte *pbVar1;
  long lVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uVar14;
  byte *pbVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  int iVar21;
  ulong uVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  ulong unaff_x19;
  byte *unaff_x20;
  undefined8 unaff_x21;
  int iVar26;
  ulong unaff_x22;
  ulong unaff_x23;
  ulong *puVar27;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong *puVar28;
  long lVar29;
  long lVar30;
  ulong *unaff_x27;
  ulong *unaff_x28;
  double dVar31;
  double dVar32;
  byte bStack_271;
  byte abStack_270 [24];
  long lStack_258;
  byte bStack_1c1;
  byte abStack_1c0 [24];
  long lStack_1a8;
  ulong *puStack_1a0;
  ulong *puStack_198;
  long lStack_190;
  byte *pbStack_188;
  byte *pbStack_180;
  ulong uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  byte *pbStack_160;
  ulong uStack_158;
  undefined1 **ppuStack_150;
  undefined8 uStack_148;
  byte *pbStack_138;
  undefined8 uStack_130;
  byte bStack_121;
  byte abStack_120 [24];
  long lStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  long lStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  undefined8 uStack_c8;
  byte *pbStack_c0;
  ulong uStack_b8;
  undefined1 *puStack_b0;
  undefined8 uStack_a8;
  byte *pbStack_98;
  undefined8 uStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = *(long *)(param_1 + 0x10);
  if (lVar29 == *(long *)(param_2 + 0x10)) {
    if ((lVar29 != 0) && (param_1 != param_2)) {
      unaff_x21 = 0;
      unaff_x27 = (ulong *)(param_1 + 0x40);
      unaff_x28 = (ulong *)(param_2 + 0x40);
      do {
        unaff_x25 = (byte *)0xc000000000000000;
        uVar19 = unaff_x27[-4];
        dVar31 = (double)unaff_x27[-2];
        unaff_x22 = unaff_x27[-1];
        unaff_x19 = *unaff_x27;
        uVar22 = unaff_x28[-4];
        dVar32 = (double)unaff_x28[-2];
        unaff_x24 = (byte *)unaff_x28[-1];
        unaff_x23 = *unaff_x28;
        if ((char)unaff_x28[-3] == '\x01') {
          if (uVar22 != 0) {
            if (uVar22 == 1) {
              bVar8 = false;
              if ((uVar19 == 1) && (bVar8 = false, !NAN(dVar31) && !NAN(dVar32))) {
                bVar8 = dVar31 == dVar32;
              }
            }
            else {
              bVar8 = false;
              if ((uVar19 == 2) && (bVar8 = false, !NAN(dVar31) && !NAN(dVar32))) {
                bVar8 = dVar31 == dVar32;
              }
            }
            goto joined_r0x000103d54704;
          }
          uVar22 = 0;
          if ((uVar19 != 0) || (dVar31 != dVar32)) goto LAB_103d54a7c;
        }
        else {
          bVar8 = false;
          if ((uVar19 == uVar22) && (bVar8 = false, !NAN(dVar31) && !NAN(dVar32))) {
            bVar8 = dVar31 == dVar32;
          }
joined_r0x000103d54704:
          if (!bVar8) goto LAB_103d54a70;
        }
        uVar4 = (uint)(unaff_x19 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(unaff_x23 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar26 = (int)unaff_x22;
        if (unaff_x19 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((unaff_x22 != 0) || (unaff_x19 != 0xc000000000000000)) || (unaff_x23 >> 0x3e < 3))
             || ((uVar19 = 0, unaff_x24 != (byte *)0x0 || (unaff_x23 != 0xc000000000000000))))
          goto joined_r0x000103d548f0;
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar19 = unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar21,iVar26)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ac0);
                (*pcVar7)();
              }
              uVar19 = (ulong)(iVar21 - iVar26);
            }
joined_r0x000103d548f0:
            if (1 < uVar5 >> 0x1e) goto LAB_103d5475c;
LAB_103d54790:
            if (uVar24 == 0) {
              uVar22 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)unaff_x24 >> 0x20);
              if (SBORROW4(iVar21,(int)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54abc);
                (*pcVar7)();
              }
              uVar22 = (ulong)(iVar21 - (int)unaff_x24);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar19 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ac4);
                (*pcVar7)();
              }
              goto joined_r0x000103d548f0;
            }
            uVar19 = 0;
            if (uVar24 < 2) goto LAB_103d54790;
LAB_103d5475c:
            if (uVar24 != 2) {
              if (uVar19 == 0) goto LAB_103d54688;
              goto LAB_103d54a70;
            }
            uVar22 = *(long *)(unaff_x24 + 0x18) - *(long *)(unaff_x24 + 0x10);
            if (SBORROW8(*(long *)(unaff_x24 + 0x18),*(long *)(unaff_x24 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ab8);
              (*pcVar7)();
            }
          }
          if (uVar19 != uVar22) goto LAB_103d54a70;
          if (0 < (long)uVar19) {
            param_2 = unaff_x19;
            if (uVar18 < 2) {
              if (uVar18 != 0) {
                lVar30 = (long)iVar26;
                pbStack_98 = (byte *)(((long)unaff_x22 >> 0x20) - lVar30);
                if ((long)unaff_x22 >> 0x20 < lVar30) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ac8);
                  uStack_90 = unaff_x21;
                  (*pcVar7)();
                }
                uStack_90 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                pbVar16 = unaff_x24;
                func_0x00010006c00c(unaff_x24,unaff_x23);
                func_0x000107c5ec30();
                if (pbVar16 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar11 = (byte *)0x0;
                  pbVar15 = (byte *)0x0;
                }
                else {
                  pbVar9 = pbVar16;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar30,(long)pbVar9)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ad4);
                    (*pcVar7)();
                  }
                  pbVar16 = pbVar16 + (lVar30 - (long)pbVar9);
                  func_0x000107c5ec38();
                  if ((long)pbStack_98 <= (long)pbVar9) {
                    pbVar9 = pbStack_98;
                  }
                  pbVar11 = (byte *)0x0;
                  if (pbVar16 != (byte *)0x0) {
                    pbVar11 = pbVar16;
                  }
                  pbVar15 = (byte *)0x0;
                  if (pbVar16 != (byte *)0x0) {
                    pbVar15 = pbVar9 + (long)pbVar16;
                  }
                }
                unaff_x21 = uStack_90;
                unaff_x20 = (byte *)(unaff_x19 & 0x3fffffffffffffff);
                func_0x000100e25bdc(abStack_80,pbVar11,pbVar15,unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x24,unaff_x23);
                func_0x00010006c090(unaff_x22);
                unaff_x25 = (byte *)0xc000000000000000;
                if ((abStack_80[0] & 1) != 0) goto LAB_103d54688;
                goto LAB_103d54a70;
              }
              abStack_80[0] = (byte)unaff_x22;
              abStack_80[1] = (byte)(unaff_x22 >> 8);
              abStack_80[2] = (byte)(unaff_x22 >> 0x10);
              abStack_80[3] = (byte)(unaff_x22 >> 0x18);
              abStack_80[4] = (byte)(unaff_x22 >> 0x20);
              abStack_80[5] = (byte)(unaff_x22 >> 0x28);
              abStack_80[6] = (byte)(unaff_x22 >> 0x30);
              abStack_80[7] = (byte)(unaff_x22 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)(unaff_x19 >> 8);
              abStack_80[10] = (byte)(unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)(unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)(unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)(unaff_x19 >> 0x28);
              pbVar16 = abStack_80 + (unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x24,unaff_x23);
              unaff_x20 = pbVar16;
LAB_103d549b0:
              func_0x000100e25bdc(&bStack_81,abStack_80,pbVar16,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar6 = bStack_81;
            }
            else {
              if (uVar18 != 2) {
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
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x00010006c00c(unaff_x24,unaff_x23);
                pbVar16 = abStack_80;
                goto LAB_103d549b0;
              }
              lVar30 = *(long *)(unaff_x22 + 0x10);
              pbStack_98 = *(byte **)(unaff_x22 + 0x18);
              uStack_90 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              unaff_x25 = unaff_x24;
              func_0x00010006c00c(unaff_x24,unaff_x23);
              func_0x000107c5ec30();
              pbVar16 = unaff_x25;
              if (unaff_x25 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar30,(long)pbVar16)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ad0);
                  (*pcVar7)();
                }
                unaff_x25 = unaff_x25 + (lVar30 - (long)pbVar16);
              }
              pbVar11 = pbStack_98 + -lVar30;
              if (SBORROW8((long)pbStack_98,lVar30)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54acc);
                (*pcVar7)();
              }
              unaff_x20 = (byte *)(unaff_x19 & 0x3fffffffffffffff);
              func_0x000107c5ec38();
              unaff_x21 = uStack_90;
              if (unaff_x25 == (byte *)0x0) {
                pbVar16 = (byte *)0x0;
              }
              else {
                if ((long)pbVar11 <= (long)pbVar16) {
                  pbVar16 = pbVar11;
                }
                pbVar16 = pbVar16 + (long)unaff_x25;
              }
              func_0x000100e25bdc(abStack_80,unaff_x25,pbVar16,unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x24,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar6 = abStack_80[0];
            }
            if ((bVar6 & 1) == 0) goto LAB_103d54a70;
          }
        }
LAB_103d54688:
        unaff_x25 = (byte *)0xc000000000000000;
        unaff_x27 = unaff_x27 + 5;
        unaff_x28 = unaff_x28 + 5;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    uVar22 = 1;
  }
  else {
LAB_103d54a70:
    uVar22 = 0;
  }
LAB_103d54a7c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  uStack_a8 = 0x103d54ad8;
  lStack_108 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar30 = *(long *)(uVar22 + 0x10);
  pbVar16 = unaff_x25;
  puVar27 = unaff_x27;
  puVar28 = unaff_x28;
  puStack_100 = unaff_x28;
  puStack_f8 = unaff_x27;
  lStack_f0 = lVar29;
  pbStack_e8 = unaff_x25;
  pbStack_e0 = unaff_x24;
  uStack_d8 = unaff_x23;
  uStack_d0 = unaff_x22;
  uStack_c8 = unaff_x21;
  pbStack_c0 = unaff_x20;
  uStack_b8 = unaff_x19;
  puStack_b0 = &stack0xfffffffffffffff0;
  if (lVar30 == *(long *)(param_2 + 0x10)) {
    if ((lVar30 != 0) && (uVar22 != param_2)) {
      uVar13 = 0;
      puVar27 = (ulong *)(uVar22 + 0x40);
      puVar28 = (ulong *)(param_2 + 0x40);
      do {
        unaff_x21 = uVar13;
        unaff_x24 = (byte *)0xc000000000000000;
        uVar19 = puVar27[-4];
        dVar31 = (double)puVar27[-2];
        unaff_x22 = puVar27[-1];
        unaff_x19 = *puVar27;
        uVar22 = puVar28[-4];
        dVar32 = (double)puVar28[-2];
        unaff_x25 = (byte *)puVar28[-1];
        unaff_x23 = *puVar28;
        pbVar16 = unaff_x25;
        if ((char)puVar28[-3] == '\x01') {
          if ((long)uVar22 < 4) {
            if ((long)uVar22 < 2) {
              uVar10 = 0;
              if (uVar22 == 0) {
                if (uVar19 != 0) goto LAB_103d54f9c;
              }
              else if (uVar19 != 1) goto LAB_103d54f9c;
            }
            else if (uVar22 == 2) {
              uVar10 = 0;
              if (uVar19 != 2) goto LAB_103d54f9c;
            }
            else {
              uVar10 = 0;
              if (uVar19 != 3) goto LAB_103d54f9c;
            }
          }
          else if ((long)uVar22 < 6) {
            if (uVar22 == 4) {
              uVar10 = 0;
              if (uVar19 != 4) goto LAB_103d54f9c;
            }
            else {
              uVar10 = 0;
              if (uVar19 != 5) goto LAB_103d54f9c;
            }
          }
          else if (uVar22 == 6) {
            uVar10 = 0;
            if (uVar19 != 6) goto LAB_103d54f9c;
          }
          else {
            uVar10 = 0;
            if (uVar19 != 7) goto LAB_103d54f9c;
          }
          uVar10 = 0;
          if (dVar31 != dVar32) goto LAB_103d54f9c;
        }
        else {
          bVar8 = false;
          if ((uVar19 == uVar22) && (bVar8 = false, !NAN(dVar31) && !NAN(dVar32))) {
            bVar8 = dVar31 == dVar32;
          }
          if (!bVar8) goto LAB_103d54f90;
        }
        uVar4 = (uint)(unaff_x19 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(unaff_x23 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar26 = (int)unaff_x22;
        if (unaff_x19 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((unaff_x22 != 0) || (unaff_x19 != 0xc000000000000000)) || (unaff_x23 >> 0x3e < 3))
             || ((uVar19 = 0, unaff_x25 != (byte *)0x0 || (unaff_x23 != 0xc000000000000000))))
          goto joined_r0x000103d54e14;
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar19 = unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)(unaff_x22 >> 0x20);
              if (SBORROW4(iVar21,iVar26)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54fe0);
                (*pcVar7)();
              }
              uVar19 = (ulong)(iVar21 - iVar26);
            }
joined_r0x000103d54e14:
            if (1 < uVar5 >> 0x1e) goto LAB_103d54c84;
LAB_103d54cb8:
            if (uVar24 == 0) {
              uVar22 = unaff_x23 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)((ulong)unaff_x25 >> 0x20);
              if (SBORROW4(iVar21,(int)unaff_x25)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54fd8);
                (*pcVar7)();
              }
              uVar22 = (ulong)(iVar21 - (int)unaff_x25);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar19 = *(long *)(unaff_x22 + 0x18) - *(long *)(unaff_x22 + 0x10);
              if (SBORROW8(*(long *)(unaff_x22 + 0x18),*(long *)(unaff_x22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54fe4);
                (*pcVar7)();
              }
              goto joined_r0x000103d54e14;
            }
            uVar19 = 0;
            if (uVar24 < 2) goto LAB_103d54cb8;
LAB_103d54c84:
            if (uVar24 != 2) {
              if (uVar19 == 0) goto LAB_103d54b3c;
              goto LAB_103d54f90;
            }
            uVar22 = *(long *)(unaff_x25 + 0x18) - *(long *)(unaff_x25 + 0x10);
            if (SBORROW8(*(long *)(unaff_x25 + 0x18),*(long *)(unaff_x25 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54fdc);
              (*pcVar7)();
            }
          }
          if (uVar19 != uVar22) goto LAB_103d54f90;
          if (0 < (long)uVar19) {
            param_2 = unaff_x19;
            if (uVar18 < 2) {
              if (uVar18 != 0) {
                lVar29 = (long)iVar26;
                pbVar11 = (byte *)(((long)unaff_x22 >> 0x20) - lVar29);
                if ((long)unaff_x22 >> 0x20 < lVar29) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54fe8);
                  uStack_130 = unaff_x21;
                  (*pcVar7)();
                }
                uStack_130 = unaff_x21;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                pbStack_138 = unaff_x25;
                func_0x00010006c00c(unaff_x25,unaff_x23);
                func_0x000107c5ec30();
                if (pbVar16 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar11 = (byte *)0x0;
                  pbVar15 = (byte *)0x0;
                  pbVar16 = unaff_x25;
                }
                else {
                  pbVar9 = pbVar16;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar29,(long)pbVar9)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ff4);
                    (*pcVar7)();
                  }
                  pbVar1 = pbVar16 + (lVar29 - (long)pbVar9);
                  func_0x000107c5ec38();
                  if ((long)pbVar11 <= (long)pbVar9) {
                    pbVar9 = pbVar11;
                  }
                  pbVar11 = (byte *)0x0;
                  if (pbVar1 != (byte *)0x0) {
                    pbVar11 = pbVar1;
                  }
                  pbVar15 = (byte *)0x0;
                  if (pbVar1 != (byte *)0x0) {
                    pbVar15 = pbVar9 + (long)pbVar1;
                  }
                }
                unaff_x21 = uStack_130;
                unaff_x20 = pbStack_138;
                func_0x000100e25bdc(abStack_120,pbVar11,pbVar15,pbStack_138,unaff_x23);
                func_0x00010006c090(unaff_x20,unaff_x23);
                func_0x00010006c090(unaff_x22);
                unaff_x24 = (byte *)0xc000000000000000;
                unaff_x25 = pbVar16;
                if ((abStack_120[0] & 1) != 0) goto LAB_103d54b3c;
                goto LAB_103d54f90;
              }
              abStack_120[0] = (byte)unaff_x22;
              abStack_120[1] = (byte)(unaff_x22 >> 8);
              abStack_120[2] = (byte)(unaff_x22 >> 0x10);
              abStack_120[3] = (byte)(unaff_x22 >> 0x18);
              abStack_120[4] = (byte)(unaff_x22 >> 0x20);
              abStack_120[5] = (byte)(unaff_x22 >> 0x28);
              abStack_120[6] = (byte)(unaff_x22 >> 0x30);
              abStack_120[7] = (byte)(unaff_x22 >> 0x38);
              abStack_120[8] = (byte)unaff_x19;
              abStack_120[9] = (byte)(unaff_x19 >> 8);
              abStack_120[10] = (byte)(unaff_x19 >> 0x10);
              abStack_120[0xb] = (byte)(unaff_x19 >> 0x18);
              abStack_120[0xc] = (byte)(unaff_x19 >> 0x20);
              abStack_120[0xd] = (byte)(unaff_x19 >> 0x28);
              pbVar16 = abStack_120 + (unaff_x19 >> 0x30 & 0xff);
              func_0x00010006c00c(unaff_x22,unaff_x19);
              func_0x00010006c00c(unaff_x25,unaff_x23);
              unaff_x20 = pbVar16;
LAB_103d54ed0:
              func_0x000100e25bdc(&bStack_121,abStack_120,pbVar16,unaff_x25,unaff_x23);
              func_0x00010006c090(unaff_x25,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar6 = bStack_121;
            }
            else {
              if (uVar18 != 2) {
                abStack_120[8] = 0;
                abStack_120[9] = 0;
                abStack_120[10] = 0;
                abStack_120[0xb] = 0;
                abStack_120[0xc] = 0;
                abStack_120[0xd] = 0;
                abStack_120[0] = 0;
                abStack_120[1] = 0;
                abStack_120[2] = 0;
                abStack_120[3] = 0;
                abStack_120[4] = 0;
                abStack_120[5] = 0;
                abStack_120[6] = 0;
                abStack_120[7] = 0;
                func_0x00010006c00c(unaff_x22,unaff_x19);
                func_0x00010006c00c(unaff_x25,unaff_x23);
                pbVar16 = abStack_120;
                goto LAB_103d54ed0;
              }
              unaff_x24 = *(byte **)(unaff_x22 + 0x10);
              lVar29 = *(long *)(unaff_x22 + 0x18);
              uStack_130 = unaff_x21;
              func_0x00010006c00c(unaff_x22,unaff_x19);
              pbStack_138 = unaff_x25;
              func_0x00010006c00c(unaff_x25,unaff_x23);
              func_0x000107c5ec30();
              pbVar16 = unaff_x25;
              if (unaff_x25 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x24,(long)pbVar16)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54ff0);
                  (*pcVar7)();
                }
                unaff_x25 = unaff_x25 + ((long)unaff_x24 - (long)pbVar16);
              }
              pbVar11 = (byte *)(lVar29 - (long)unaff_x24);
              if (SBORROW8(lVar29,(long)unaff_x24)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d54fec);
                (*pcVar7)();
              }
              func_0x000107c5ec38();
              unaff_x21 = uStack_130;
              unaff_x20 = pbStack_138;
              if (unaff_x25 == (byte *)0x0) {
                pbVar16 = (byte *)0x0;
              }
              else {
                if ((long)pbVar11 <= (long)pbVar16) {
                  pbVar16 = pbVar11;
                }
                pbVar16 = pbVar16 + (long)unaff_x25;
              }
              func_0x000100e25bdc(abStack_120,unaff_x25,pbVar16,pbStack_138,unaff_x23);
              func_0x00010006c090(unaff_x20,unaff_x23);
              func_0x00010006c090(unaff_x22);
              bVar6 = abStack_120[0];
            }
            pbVar16 = unaff_x25;
            if ((bVar6 & 1) == 0) goto LAB_103d54f90;
          }
        }
LAB_103d54b3c:
        unaff_x24 = (byte *)0xc000000000000000;
        unaff_x27 = puVar27 + 5;
        unaff_x28 = puVar28 + 5;
        lVar30 = lVar30 + -1;
        uVar13 = unaff_x21;
        puVar27 = unaff_x27;
        puVar28 = unaff_x28;
      } while (lVar30 != 0);
    }
    uVar10 = 1;
    puVar27 = unaff_x27;
    puVar28 = unaff_x28;
  }
  else {
LAB_103d54f90:
    uVar10 = 0;
    unaff_x25 = pbVar16;
  }
LAB_103d54f9c:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_108) {
    return;
  }
  func_0x000107c60e78();
  uStack_148 = 0x103d54ff8;
  lStack_1a8 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = *(long *)(uVar10 + 0x10);
  puStack_1a0 = puVar28;
  puStack_198 = puVar27;
  lStack_190 = lVar30;
  pbStack_188 = unaff_x25;
  pbStack_180 = unaff_x24;
  uStack_178 = unaff_x23;
  uStack_170 = unaff_x22;
  uStack_168 = unaff_x21;
  pbStack_160 = unaff_x20;
  uStack_158 = unaff_x19;
  ppuStack_150 = &puStack_b0;
  if (lVar29 == *(long *)(param_2 + 0x10)) {
    if ((lVar29 != 0) && (uVar10 != param_2)) {
      puVar27 = (ulong *)(uVar10 + 0x40);
      puVar28 = (ulong *)(param_2 + 0x40);
      do {
        uVar20 = puVar27[-4];
        dVar31 = (double)puVar27[-2];
        uVar19 = puVar27[-1];
        uVar10 = *puVar27;
        uVar23 = puVar28[-4];
        dVar32 = (double)puVar28[-2];
        uVar22 = puVar28[-1];
        uVar3 = *puVar28;
        if ((char)puVar28[-3] == '\x01') {
          if ((long)uVar23 < 3) {
            if (uVar23 == 0) {
              uVar23 = 0;
              if (uVar20 != 0) goto LAB_103d55498;
            }
            else if (uVar23 == 1) {
              uVar23 = 0;
              if (uVar20 != 1) goto LAB_103d55498;
            }
            else {
              uVar23 = 0;
              if (uVar20 != 2) goto LAB_103d55498;
            }
          }
          else {
            if (uVar23 == 3) {
              bVar8 = false;
              if ((uVar20 == 3) && (bVar8 = false, !NAN(dVar31) && !NAN(dVar32))) {
                bVar8 = dVar31 == dVar32;
              }
              if (bVar8) goto LAB_103d55124;
              goto LAB_103d5548c;
            }
            if (uVar23 == 4) {
              uVar23 = 0;
              if (uVar20 != 4) goto LAB_103d55498;
            }
            else {
              uVar23 = 0;
              if (uVar20 != 5) goto LAB_103d55498;
            }
          }
          uVar23 = 0;
          if (dVar31 != dVar32) goto LAB_103d55498;
        }
        else {
          bVar8 = false;
          if ((uVar20 == uVar23) && (bVar8 = false, !NAN(dVar31) && !NAN(dVar32))) {
            bVar8 = dVar31 == dVar32;
          }
          if (!bVar8) goto LAB_103d5548c;
        }
LAB_103d55124:
        uVar4 = (uint)(uVar10 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar3 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar26 = (int)uVar19;
        if (uVar10 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((uVar19 != 0) || (uVar10 != 0xc000000000000000)) || (uVar3 >> 0x3e < 3)) ||
             ((uVar20 = 0, uVar22 != 0 || (uVar3 != 0xc000000000000000))))
          goto joined_r0x000103d5530c;
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = uVar10 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)(uVar19 >> 0x20);
              if (SBORROW4(iVar21,iVar26)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554dc);
                (*pcVar7)();
              }
              uVar20 = (ulong)(iVar21 - iVar26);
            }
joined_r0x000103d5530c:
            if (1 < uVar5 >> 0x1e) goto LAB_103d55178;
LAB_103d551ac:
            if (uVar24 == 0) {
              uVar23 = uVar3 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)(uVar22 >> 0x20);
              if (SBORROW4(iVar21,(int)uVar22)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554d8);
                (*pcVar7)();
              }
              uVar23 = (ulong)(iVar21 - (int)uVar22);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar20 = *(long *)(uVar19 + 0x18) - *(long *)(uVar19 + 0x10);
              if (SBORROW8(*(long *)(uVar19 + 0x18),*(long *)(uVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554e0);
                (*pcVar7)();
              }
              goto joined_r0x000103d5530c;
            }
            uVar20 = 0;
            if (uVar24 < 2) goto LAB_103d551ac;
LAB_103d55178:
            if (uVar24 != 2) {
              if (uVar20 == 0) goto LAB_103d5505c;
              goto LAB_103d5548c;
            }
            uVar23 = *(long *)(uVar22 + 0x18) - *(long *)(uVar22 + 0x10);
            if (SBORROW8(*(long *)(uVar22 + 0x18),*(long *)(uVar22 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554d4);
              (*pcVar7)();
            }
          }
          if (uVar20 != uVar23) goto LAB_103d5548c;
          if (0 < (long)uVar20) {
            if (uVar18 < 2) {
              if (uVar18 != 0) {
                lVar30 = (long)iVar26;
                uVar20 = ((long)uVar19 >> 0x20) - lVar30;
                if ((long)uVar19 >> 0x20 < lVar30) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554e4);
                  (*pcVar7)();
                }
                func_0x00010006c00c(uVar19,uVar10);
                uVar23 = uVar22;
                func_0x00010006c00c(uVar22,uVar3);
                func_0x000107c5ec30();
                if (uVar23 == 0) {
                  func_0x000107c5ec38();
                  lVar30 = 0;
                  lVar17 = 0;
                }
                else {
                  uVar12 = uVar23;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar30,uVar12)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554f0);
                    (*pcVar7)();
                  }
                  lVar2 = (lVar30 - uVar12) + uVar23;
                  func_0x000107c5ec38();
                  if ((long)uVar20 <= (long)uVar12) {
                    uVar12 = uVar20;
                  }
                  lVar30 = 0;
                  if (lVar2 != 0) {
                    lVar30 = lVar2;
                  }
                  lVar17 = 0;
                  if (lVar2 != 0) {
                    lVar17 = uVar12 + lVar2;
                  }
                }
                func_0x000100e25bdc(abStack_1c0,lVar30,lVar17,uVar22,uVar3);
                func_0x00010006c090(uVar22,uVar3);
                func_0x00010006c090(uVar19);
                param_2 = uVar10;
                if ((abStack_1c0[0] & 1) != 0) goto LAB_103d5505c;
                goto LAB_103d5548c;
              }
              abStack_1c0[0] = (byte)uVar19;
              abStack_1c0[1] = (byte)(uVar19 >> 8);
              abStack_1c0[2] = (byte)(uVar19 >> 0x10);
              abStack_1c0[3] = (byte)(uVar19 >> 0x18);
              abStack_1c0[4] = (byte)(uVar19 >> 0x20);
              abStack_1c0[5] = (byte)(uVar19 >> 0x28);
              abStack_1c0[6] = (byte)(uVar19 >> 0x30);
              abStack_1c0[7] = (byte)(uVar19 >> 0x38);
              abStack_1c0[8] = (byte)uVar10;
              abStack_1c0[9] = (byte)(uVar10 >> 8);
              abStack_1c0[10] = (byte)(uVar10 >> 0x10);
              abStack_1c0[0xb] = (byte)(uVar10 >> 0x18);
              abStack_1c0[0xc] = (byte)(uVar10 >> 0x20);
              abStack_1c0[0xd] = (byte)(uVar10 >> 0x28);
              pbVar16 = abStack_1c0 + (uVar10 >> 0x30 & 0xff);
              func_0x00010006c00c(uVar19,uVar10);
              func_0x00010006c00c(uVar22,uVar3);
LAB_103d553cc:
              func_0x000100e25bdc(&bStack_1c1,abStack_1c0,pbVar16,uVar22,uVar3);
              func_0x00010006c090(uVar22,uVar3);
              func_0x00010006c090(uVar19);
              bVar6 = bStack_1c1;
            }
            else {
              if (uVar18 != 2) {
                abStack_1c0[8] = 0;
                abStack_1c0[9] = 0;
                abStack_1c0[10] = 0;
                abStack_1c0[0xb] = 0;
                abStack_1c0[0xc] = 0;
                abStack_1c0[0xd] = 0;
                abStack_1c0[0] = 0;
                abStack_1c0[1] = 0;
                abStack_1c0[2] = 0;
                abStack_1c0[3] = 0;
                abStack_1c0[4] = 0;
                abStack_1c0[5] = 0;
                abStack_1c0[6] = 0;
                abStack_1c0[7] = 0;
                func_0x00010006c00c(uVar19,uVar10);
                func_0x00010006c00c(uVar22,uVar3);
                pbVar16 = abStack_1c0;
                goto LAB_103d553cc;
              }
              lVar30 = *(long *)(uVar19 + 0x10);
              lVar17 = *(long *)(uVar19 + 0x18);
              func_0x00010006c00c(uVar19,uVar10);
              uVar20 = uVar22;
              func_0x00010006c00c(uVar22,uVar3);
              func_0x000107c5ec30();
              uVar23 = uVar20;
              if (uVar20 != 0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar30,uVar23)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554ec);
                  (*pcVar7)();
                }
                uVar20 = (lVar30 - uVar23) + uVar20;
              }
              uVar12 = lVar17 - lVar30;
              if (SBORROW8(lVar17,lVar30)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d554e8);
                (*pcVar7)();
              }
              func_0x000107c5ec38();
              if (uVar20 == 0) {
                lVar30 = 0;
              }
              else {
                if ((long)uVar12 <= (long)uVar23) {
                  uVar23 = uVar12;
                }
                lVar30 = uVar23 + uVar20;
              }
              func_0x000100e25bdc(abStack_1c0,uVar20,lVar30,uVar22,uVar3);
              func_0x00010006c090(uVar22,uVar3);
              func_0x00010006c090(uVar19);
              bVar6 = abStack_1c0[0];
            }
            param_2 = uVar10;
            if ((bVar6 & 1) == 0) goto LAB_103d5548c;
          }
        }
LAB_103d5505c:
        puVar27 = puVar27 + 5;
        puVar28 = puVar28 + 5;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    uVar23 = 1;
  }
  else {
LAB_103d5548c:
    uVar23 = 0;
  }
LAB_103d55498:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_1a8) {
    return;
  }
  func_0x000107c60e78();
  lStack_258 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar29 = *(long *)(uVar23 + 0x10);
  if (lVar29 == *(long *)(param_2 + 0x10)) {
    if ((lVar29 != 0) && (uVar23 != param_2)) {
      puVar27 = (ulong *)(uVar23 + 0x40);
      puVar28 = (ulong *)(param_2 + 0x40);
      do {
        uVar19 = puVar27[-4];
        uVar3 = puVar27[-3];
        dVar31 = (double)puVar27[-2];
        uVar22 = puVar27[-1];
        uVar20 = *puVar27;
        uVar23 = puVar28[-3];
        dVar32 = (double)puVar28[-2];
        uVar10 = puVar28[-1];
        uVar12 = *puVar28;
        if (uVar19 == puVar28[-4] && uVar3 == uVar23) {
          if (dVar31 != dVar32) goto LAB_103d55994;
        }
        else {
          func_0x000107c605b8(uVar19,uVar3,puVar28[-4],uVar23,0);
          uVar13 = 0;
          if (((uVar19 & 1) == 0) || (dVar31 != dVar32)) goto LAB_103d559a0;
        }
        uVar4 = (uint)(uVar20 >> 0x20);
        uVar18 = uVar4 >> 0x1e;
        uVar5 = (uint)(uVar12 >> 0x20);
        uVar24 = uVar5 >> 0x1e;
        iVar26 = (int)uVar22;
        if (uVar20 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((uVar22 != 0) || (uVar20 != 0xc000000000000000)) || (uVar12 >> 0x3e < 3)) ||
             ((uVar19 = 0, uVar10 != 0 || (uVar12 != 0xc000000000000000))))
          goto joined_r0x000103d557dc;
        }
        else {
          if (uVar4 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar19 = uVar20 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)(uVar22 >> 0x20);
              if (SBORROW4(iVar21,iVar26)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559e8);
                (*pcVar7)();
              }
              uVar19 = (ulong)(iVar21 - iVar26);
            }
joined_r0x000103d557dc:
            if (1 < uVar5 >> 0x1e) goto LAB_103d55614;
LAB_103d55648:
            if (uVar24 == 0) {
              uVar25 = uVar12 >> 0x30 & 0xff;
            }
            else {
              iVar21 = (int)(uVar10 >> 0x20);
              if (SBORROW4(iVar21,(int)uVar10)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559e0);
                (*pcVar7)();
              }
              uVar25 = (ulong)(iVar21 - (int)uVar10);
            }
          }
          else {
            if (uVar18 == 2) {
              uVar19 = *(long *)(uVar22 + 0x18) - *(long *)(uVar22 + 0x10);
              if (SBORROW8(*(long *)(uVar22 + 0x18),*(long *)(uVar22 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559ec);
                (*pcVar7)();
              }
              goto joined_r0x000103d557dc;
            }
            uVar19 = 0;
            if (uVar24 < 2) goto LAB_103d55648;
LAB_103d55614:
            if (uVar24 != 2) {
              if (uVar19 == 0) goto LAB_103d55558;
              goto LAB_103d55994;
            }
            uVar25 = *(long *)(uVar10 + 0x18) - *(long *)(uVar10 + 0x10);
            if (SBORROW8(*(long *)(uVar10 + 0x18),*(long *)(uVar10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559e4);
              (*pcVar7)();
            }
          }
          if (uVar19 != uVar25) goto LAB_103d55994;
          if (0 < (long)uVar19) {
            if (uVar18 < 2) {
              if (uVar18 != 0) {
                lVar30 = (long)iVar26;
                uVar19 = ((long)uVar22 >> 0x20) - lVar30;
                if ((long)uVar22 >> 0x20 < lVar30) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559f0);
                  (*pcVar7)();
                }
                func_0x000107c61434(uVar3);
                func_0x00010006c00c(uVar22,uVar20);
                func_0x000107c61434(uVar23);
                uVar25 = uVar10;
                func_0x00010006c00c(uVar10,uVar12);
                func_0x000107c5ec30();
                if (uVar25 == 0) {
                  func_0x000107c5ec38();
                  lVar30 = 0;
                  lVar17 = 0;
                }
                else {
                  uVar14 = uVar25;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar30,uVar14)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559fc);
                    (*pcVar7)();
                  }
                  lVar2 = (lVar30 - uVar14) + uVar25;
                  func_0x000107c5ec38();
                  if ((long)uVar19 <= (long)uVar14) {
                    uVar14 = uVar19;
                  }
                  lVar30 = 0;
                  if (lVar2 != 0) {
                    lVar30 = lVar2;
                  }
                  lVar17 = 0;
                  if (lVar2 != 0) {
                    lVar17 = uVar14 + lVar2;
                  }
                }
                func_0x000100e25bdc(abStack_270,lVar30,lVar17,uVar10,uVar12);
                func_0x000107c6142c(uVar23);
                func_0x00010006c090(uVar10,uVar12);
LAB_103d5597c:
                func_0x000107c6142c(uVar3);
                func_0x00010006c090(uVar22,uVar20);
                if ((abStack_270[0] & 1) != 0) goto LAB_103d55558;
                goto LAB_103d55994;
              }
              abStack_270[0] = (byte)uVar22;
              abStack_270[1] = (byte)(uVar22 >> 8);
              abStack_270[2] = (byte)(uVar22 >> 0x10);
              abStack_270[3] = (byte)(uVar22 >> 0x18);
              abStack_270[4] = (byte)(uVar22 >> 0x20);
              abStack_270[5] = (byte)(uVar22 >> 0x28);
              abStack_270[6] = (byte)(uVar22 >> 0x30);
              abStack_270[7] = (byte)(uVar22 >> 0x38);
              abStack_270[8] = (byte)uVar20;
              abStack_270[9] = (byte)(uVar20 >> 8);
              abStack_270[10] = (byte)(uVar20 >> 0x10);
              abStack_270[0xb] = (byte)(uVar20 >> 0x18);
              abStack_270[0xc] = (byte)(uVar20 >> 0x20);
              abStack_270[0xd] = (byte)(uVar20 >> 0x28);
              pbVar16 = abStack_270 + (uVar20 >> 0x30 & 0xff);
              func_0x000107c61434(uVar3);
              func_0x00010006c00c(uVar22,uVar20);
              func_0x000107c61434(uVar23);
              func_0x00010006c00c(uVar10,uVar12);
            }
            else {
              if (uVar18 == 2) {
                lVar30 = *(long *)(uVar22 + 0x10);
                lVar17 = *(long *)(uVar22 + 0x18);
                func_0x000107c61434(uVar3);
                func_0x00010006c00c(uVar22,uVar20);
                func_0x000107c61434(uVar23);
                uVar19 = uVar10;
                func_0x00010006c00c(uVar10,uVar12);
                func_0x000107c5ec30();
                uVar25 = uVar19;
                if (uVar19 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar30,uVar25)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559f8);
                    (*pcVar7)();
                  }
                  uVar19 = (lVar30 - uVar25) + uVar19;
                }
                uVar14 = lVar17 - lVar30;
                if (SBORROW8(lVar17,lVar30)) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x103d559f4);
                  (*pcVar7)();
                }
                func_0x000107c5ec38();
                if (uVar19 == 0) {
                  lVar30 = 0;
                }
                else {
                  if ((long)uVar14 <= (long)uVar25) {
                    uVar25 = uVar14;
                  }
                  lVar30 = uVar25 + uVar19;
                }
                func_0x000100e25bdc(abStack_270,uVar19,lVar30,uVar10,uVar12);
                func_0x000107c6142c(uVar23);
                func_0x00010006c090(uVar10,uVar12);
                goto LAB_103d5597c;
              }
              abStack_270[8] = 0;
              abStack_270[9] = 0;
              abStack_270[10] = 0;
              abStack_270[0xb] = 0;
              abStack_270[0xc] = 0;
              abStack_270[0xd] = 0;
              abStack_270[0] = 0;
              abStack_270[1] = 0;
              abStack_270[2] = 0;
              abStack_270[3] = 0;
              abStack_270[4] = 0;
              abStack_270[5] = 0;
              abStack_270[6] = 0;
              abStack_270[7] = 0;
              func_0x000107c61434(uVar3);
              func_0x00010006c00c(uVar22,uVar20);
              func_0x000107c61434(uVar23);
              func_0x00010006c00c(uVar10,uVar12);
              pbVar16 = abStack_270;
            }
            func_0x000100e25bdc(&bStack_271,abStack_270,pbVar16,uVar10,uVar12);
            func_0x000107c6142c(uVar23);
            func_0x00010006c090(uVar10,uVar12);
            func_0x000107c6142c(uVar3);
            func_0x00010006c090(uVar22,uVar20);
            if ((bStack_271 & 1) == 0) goto LAB_103d55994;
          }
        }
LAB_103d55558:
        puVar27 = puVar27 + 5;
        puVar28 = puVar28 + 5;
        lVar29 = lVar29 + -1;
      } while (lVar29 != 0);
    }
    uVar13 = 1;
  }
  else {
LAB_103d55994:
    uVar13 = 0;
  }
LAB_103d559a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_258) {
    return;
  }
  func_0x000107c60e78(uVar13);
  return;
}



/* Entry: 103d554f4; end: 103d559ff;  */

void FUN_103d554f4(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  undefined8 uVar11;
  ulong uVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  long lVar20;
  int iVar21;
  ulong *puVar22;
  ulong *puVar23;
  long lVar24;
  double dVar25;
  double dVar26;
  byte bStack_91;
  byte abStack_90 [24];
  long lStack_78;
  
  lStack_78 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar24 = *(long *)(param_1 + 0x10);
  if (lVar24 == *(long *)(param_2 + 0x10)) {
    if ((lVar24 != 0) && (param_1 != param_2)) {
      puVar22 = (ulong *)(param_1 + 0x40);
      puVar23 = (ulong *)(param_2 + 0x40);
      do {
        uVar17 = puVar22[-4];
        uVar4 = puVar22[-3];
        dVar25 = (double)puVar22[-2];
        uVar2 = puVar22[-1];
        uVar5 = *puVar22;
        uVar6 = puVar23[-3];
        dVar26 = (double)puVar23[-2];
        uVar3 = puVar23[-1];
        uVar7 = *puVar23;
        if (uVar17 == puVar23[-4] && uVar4 == uVar6) {
          if (dVar25 != dVar26) goto LAB_103d55994;
        }
        else {
          func_0x000107c605b8(uVar17,uVar4,puVar23[-4],uVar6,0);
          uVar11 = 0;
          if (((uVar17 & 1) == 0) || (dVar25 != dVar26)) goto LAB_103d559a0;
        }
        uVar8 = (uint)(uVar5 >> 0x20);
        uVar15 = uVar8 >> 0x1e;
        uVar9 = (uint)(uVar7 >> 0x20);
        uVar18 = uVar9 >> 0x1e;
        iVar21 = (int)uVar2;
        if (uVar5 >> 0x3e == 3) {
          uVar17 = 0;
          if ((((uVar2 != 0) || (uVar5 != 0xc000000000000000)) || (uVar7 >> 0x3e < 3)) ||
             ((uVar17 = 0, uVar3 != 0 || (uVar7 != 0xc000000000000000))))
          goto joined_r0x000103d557dc;
        }
        else {
          if (uVar8 >> 0x1e < 2) {
            if (uVar15 == 0) {
              uVar17 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar16,iVar21)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559e8);
                (*pcVar10)();
              }
              uVar17 = (ulong)(iVar16 - iVar21);
            }
joined_r0x000103d557dc:
            if (uVar9 >> 0x1e < 2) goto LAB_103d55648;
LAB_103d55614:
            if (uVar18 != 2) {
              if (uVar17 == 0) goto LAB_103d55558;
              goto LAB_103d55994;
            }
            uVar19 = *(long *)(uVar3 + 0x18) - *(long *)(uVar3 + 0x10);
            if (SBORROW8(*(long *)(uVar3 + 0x18),*(long *)(uVar3 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559e4);
              (*pcVar10)();
            }
          }
          else {
            if (uVar15 == 2) {
              uVar17 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
              if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559ec);
                (*pcVar10)();
              }
              goto joined_r0x000103d557dc;
            }
            uVar17 = 0;
            if (1 < uVar18) goto LAB_103d55614;
LAB_103d55648:
            if (uVar18 == 0) {
              uVar19 = uVar7 >> 0x30 & 0xff;
            }
            else {
              iVar16 = (int)(uVar3 >> 0x20);
              if (SBORROW4(iVar16,(int)uVar3)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559e0);
                (*pcVar10)();
              }
              uVar19 = (ulong)(iVar16 - (int)uVar3);
            }
          }
          if (uVar17 != uVar19) goto LAB_103d55994;
          if (0 < (long)uVar17) {
            if (uVar15 < 2) {
              if (uVar15 != 0) {
                lVar20 = (long)iVar21;
                uVar17 = ((long)uVar2 >> 0x20) - lVar20;
                if ((long)uVar2 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559f0);
                  (*pcVar10)();
                }
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar2,uVar5);
                func_0x000107c61434(uVar6);
                uVar19 = uVar3;
                func_0x00010006c00c(uVar3,uVar7);
                func_0x000107c5ec30();
                if (uVar19 == 0) {
                  func_0x000107c5ec38();
                  lVar20 = 0;
                  lVar14 = 0;
                }
                else {
                  uVar12 = uVar19;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,uVar12)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559fc);
                    (*pcVar10)();
                  }
                  lVar1 = (lVar20 - uVar12) + uVar19;
                  func_0x000107c5ec38();
                  if ((long)uVar17 <= (long)uVar12) {
                    uVar12 = uVar17;
                  }
                  lVar20 = 0;
                  if (lVar1 != 0) {
                    lVar20 = lVar1;
                  }
                  lVar14 = 0;
                  if (lVar1 != 0) {
                    lVar14 = uVar12 + lVar1;
                  }
                }
                func_0x000100e25bdc(abStack_90,lVar20,lVar14,uVar3,uVar7);
                func_0x000107c6142c(uVar6);
                func_0x00010006c090(uVar3,uVar7);
LAB_103d5597c:
                func_0x000107c6142c(uVar4);
                func_0x00010006c090(uVar2,uVar5);
                if ((abStack_90[0] & 1) != 0) goto LAB_103d55558;
                goto LAB_103d55994;
              }
              abStack_90[0] = (byte)uVar2;
              abStack_90[1] = (byte)(uVar2 >> 8);
              abStack_90[2] = (byte)(uVar2 >> 0x10);
              abStack_90[3] = (byte)(uVar2 >> 0x18);
              abStack_90[4] = (byte)(uVar2 >> 0x20);
              abStack_90[5] = (byte)(uVar2 >> 0x28);
              abStack_90[6] = (byte)(uVar2 >> 0x30);
              abStack_90[7] = (byte)(uVar2 >> 0x38);
              abStack_90[8] = (byte)uVar5;
              abStack_90[9] = (byte)(uVar5 >> 8);
              abStack_90[10] = (byte)(uVar5 >> 0x10);
              abStack_90[0xb] = (byte)(uVar5 >> 0x18);
              abStack_90[0xc] = (byte)(uVar5 >> 0x20);
              abStack_90[0xd] = (byte)(uVar5 >> 0x28);
              pbVar13 = abStack_90 + (uVar5 >> 0x30 & 0xff);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar2,uVar5);
              func_0x000107c61434(uVar6);
              func_0x00010006c00c(uVar3,uVar7);
            }
            else {
              if (uVar15 == 2) {
                lVar20 = *(long *)(uVar2 + 0x10);
                lVar14 = *(long *)(uVar2 + 0x18);
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar2,uVar5);
                func_0x000107c61434(uVar6);
                uVar17 = uVar3;
                func_0x00010006c00c(uVar3,uVar7);
                func_0x000107c5ec30();
                uVar19 = uVar17;
                if (uVar17 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar20,uVar19)) {
                    /* WARNING: Does not return */
                    pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559f8);
                    (*pcVar10)();
                  }
                  uVar17 = (lVar20 - uVar19) + uVar17;
                }
                uVar12 = lVar14 - lVar20;
                if (SBORROW8(lVar14,lVar20)) {
                    /* WARNING: Does not return */
                  pcVar10 = (code *)SoftwareBreakpoint(1,0x103d559f4);
                  (*pcVar10)();
                }
                func_0x000107c5ec38();
                if (uVar17 == 0) {
                  lVar20 = 0;
                }
                else {
                  if ((long)uVar12 <= (long)uVar19) {
                    uVar19 = uVar12;
                  }
                  lVar20 = uVar19 + uVar17;
                }
                func_0x000100e25bdc(abStack_90,uVar17,lVar20,uVar3,uVar7);
                func_0x000107c6142c(uVar6);
                func_0x00010006c090(uVar3,uVar7);
                goto LAB_103d5597c;
              }
              abStack_90[8] = 0;
              abStack_90[9] = 0;
              abStack_90[10] = 0;
              abStack_90[0xb] = 0;
              abStack_90[0xc] = 0;
              abStack_90[0xd] = 0;
              abStack_90[0] = 0;
              abStack_90[1] = 0;
              abStack_90[2] = 0;
              abStack_90[3] = 0;
              abStack_90[4] = 0;
              abStack_90[5] = 0;
              abStack_90[6] = 0;
              abStack_90[7] = 0;
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar2,uVar5);
              func_0x000107c61434(uVar6);
              func_0x00010006c00c(uVar3,uVar7);
              pbVar13 = abStack_90;
            }
            func_0x000100e25bdc(&bStack_91,abStack_90,pbVar13,uVar3,uVar7);
            func_0x000107c6142c(uVar6);
            func_0x00010006c090(uVar3,uVar7);
            func_0x000107c6142c(uVar4);
            func_0x00010006c090(uVar2,uVar5);
            if ((bStack_91 & 1) == 0) goto LAB_103d55994;
          }
        }
LAB_103d55558:
        puVar22 = puVar22 + 5;
        puVar23 = puVar23 + 5;
        lVar24 = lVar24 + -1;
      } while (lVar24 != 0);
    }
    uVar11 = 1;
  }
  else {
LAB_103d55994:
    uVar11 = 0;
  }
LAB_103d559a0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_78) {
    func_0x000107c60e78(uVar11);
    return;
  }
  return;
}



/* Entry: 103d55a00; end: 103d55a17;  */

void FUN_103d55a00(void)

{
  return;
}



/* Entry: 103d55a18; end: 103d55a97;  */

void FUN_103d55a18(void)

{
  undefined *puVar1;
  
  if (puRam00000001130061b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc87e08;
  func_0x000107c61520(&DAT_10dc87e08,&UNK_110706ed8);
  puRam00000001130061b8 = puVar1;
  return;
}



/* Entry: 103d55a98; end: 103d55da7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d55a98(long *param_1,long *param_2)

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
  
  lVar19 = *param_1;
  lVar22 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar22 == 0) {
      if (lVar19 != 0) {
        return (byte *)0x0;
      }
    }
    else if (lVar22 == 1) {
      if (lVar19 != 1) {
        return (byte *)0x0;
      }
    }
    else if (lVar19 != 2) {
      return (byte *)0x0;
    }
  }
  else if (lVar19 != lVar22) {
    return (byte *)0x0;
  }
  if ((double)param_1[2] != (double)param_2[2]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[3];
  pbVar26 = (byte *)param_1[4];
  lVar19 = param_2[3];
  uVar16 = param_2[4];
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
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar19 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
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
                                                                  CONCAT11(bVar28 | auVar43[1],
                                                                           bVar27 | auVar43[0]))))))
                    ) == 0 && *(long *)pbVar13 == 0) {
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
                                                                     CONCAT11(bVar28 | auVar43[1],
                                                                              bVar27 | auVar43[0])))
                                                  ))));
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



/* Entry: 103d55da8; end: 103d55e3f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d55da8(ulong *param_1,undefined8 *param_2)

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
  
  uVar13 = *param_1;
  FUN_103d54624(uVar13,*param_2);
  if ((uVar13 & 1) != 0) {
    uVar13 = param_1[1];
    func_0x000103d54ad8(uVar13,param_2[1]);
    if ((uVar13 & 1) != 0) {
      uVar13 = param_1[2];
      FUN_103d3bea0(uVar13,param_2[2]);
      if ((uVar13 & 1) != 0) {
        uVar13 = param_1[3];
        func_0x000103d54ff8(uVar13,param_2[3]);
        if ((uVar13 & 1) != 0) {
          uVar13 = param_1[4];
          FUN_103d554f4(uVar13,param_2[4]);
          if ((uVar13 & 1) != 0) {
            uVar13 = param_1[5];
            FUN_103d554f4(uVar13,param_2[5]);
            if ((uVar13 & 1) != 0) {
              pbVar10 = (byte *)param_1[6];
              pbVar25 = (byte *)param_1[7];
              lVar24 = param_2[6];
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
                uVar4 = (uint)((ulong)pbVar25 >> 0x20);
                uVar18 = uVar4 >> 0x1e;
                uVar5 = (uint)(uVar13 >> 0x20);
                uVar21 = uVar5 >> 0x1e;
                iVar8 = (int)pbVar10;
                pbVar14 = pbVar25;
                if ((ulong)pbVar25 >> 0x3e == 3) {
                  uVar20 = 0;
                  if ((((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                      (uVar13 >> 0x3e < 3)) ||
                     ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000))))
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
                  )(pbVar12,pbVar15,pbVar16,pbVar17,0);
                  return pbVar12;
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
                       pbVar25 == *(byte **)(pbVar14 + 0x10) &&
                       pbVar23 == *(byte **)(pbVar14 + 0x18))) {
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
                    goto joined_r0x000100e266a4;
                  }
joined_r0x000100e26620:
                  if (lVar24 == 0) {
                    return (byte *)0x1;
                  }
                  return (byte *)0x0;
                }
                if (bVar27 != 5) {
                  if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0
                       ) && lVar26 == 0) && pbVar25 == (byte *)0x0) {
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
                                                                              CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0]))))))) == 0 &&
                        *(long *)pbVar14 == 0) {
                      return (byte *)0x1;
                    }
                    return (byte *)0x0;
                  }
                  if ((pbVar12 == (byte *)0x1) &&
                     (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0)
                      && lVar26 == 0)) {
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
                                                                        CONCAT12(bVar29 | auVar43[2]
                                                                                 ,CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
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
        }
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 103d55e40; end: 103d560bf;  */

void FUN_103d55e40(void)

{
  undefined *puVar1;
  
  if (puRam00000001130061c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87b08;
  func_0x000107c61520(&UNK_10dc87b08,&UNK_110706c18);
  puRam00000001130061c8 = puVar1;
  return;
}



/* Entry: 103d560c0; end: 103d560d3;  */

void FUN_103d560c0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d560d4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d56114)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d560d4; end: 103d5617f;  */

void FUN_103d560d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87810;
  func_0x000107c61520(&UNK_10dc87810,&UNK_110706b10);
  puRam0000000113006280 = puVar1;
  return;
}



/* Entry: 103d56180; end: 103d56183;  */

void FUN_103d56180(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87850;
  func_0x000107c61520(&UNK_10dc87850,&UNK_110706b10);
  puRam00000001130062a0 = puVar1;
  return;
}



/* Entry: 103d56184; end: 103d561c3;  */

void FUN_103d56184(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87850;
  func_0x000107c61520(&UNK_10dc87850,&UNK_110706b10);
  puRam00000001130062a0 = puVar1;
  return;
}



/* Entry: 103d561c4; end: 103d561d7;  */

void FUN_103d561c4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d561d8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d56218)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d561d8; end: 103d56283;  */

void FUN_103d561d8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87910;
  func_0x000107c61520(&UNK_10dc87910,&UNK_110706ba0);
  puRam00000001130062a8 = puVar1;
  return;
}



/* Entry: 103d56284; end: 103d56287;  */

void FUN_103d56284(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87950;
  func_0x000107c61520(&UNK_10dc87950,&UNK_110706ba0);
  puRam00000001130062c8 = puVar1;
  return;
}



/* Entry: 103d56288; end: 103d562c7;  */

void FUN_103d56288(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87950;
  func_0x000107c61520(&UNK_10dc87950,&UNK_110706ba0);
  puRam00000001130062c8 = puVar1;
  return;
}



/* Entry: 103d562c8; end: 103d562db;  */

void FUN_103d562c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d562dc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d5631c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d562dc; end: 103d56387;  */

void FUN_103d562dc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87a10;
  func_0x000107c61520(&UNK_10dc87a10,&UNK_110706cc8);
  puRam00000001130062d0 = puVar1;
  return;
}



/* Entry: 103d56388; end: 103d563cb;  */

void FUN_103d56388(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103d563cc; end: 103d563cf;  */

void FUN_103d563cc(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87a50;
  func_0x000107c61520(&UNK_10dc87a50,&UNK_110706cc8);
  puRam00000001130062f0 = puVar1;
  return;
}



/* Entry: 103d563d0; end: 103d5640f;  */

void FUN_103d563d0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87a50;
  func_0x000107c61520(&UNK_10dc87a50,&UNK_110706cc8);
  puRam00000001130062f0 = puVar1;
  return;
}



/* Entry: 103d56410; end: 103d56433;  */

void FUN_103d56410(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d56434();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d56434; end: 103d56473;  */

void FUN_103d56434(void)

{
  undefined *puVar1;
  
  if (puRam00000001130062f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87ae0;
  func_0x000107c61520(&UNK_10dc87ae0,&UNK_110706c18);
  puRam00000001130062f8 = puVar1;
  return;
}



/* Entry: 103d56474; end: 103d56487;  */

void FUN_103d56474(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d55e40();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d56488();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56488; end: 103d564c7;  */

void FUN_103d56488(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc87a98;
  func_0x000107c61520(&DAT_10dc87a98,&UNK_110706c18);
  puRam0000000113006300 = puVar1;
  return;
}



/* Entry: 103d564c8; end: 103d564cb;  */

void FUN_103d564c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87b48;
  func_0x000107c61520(&UNK_10dc87b48,&UNK_110706c18);
  puRam0000000113006308 = puVar1;
  return;
}



/* Entry: 103d564cc; end: 103d5650b;  */

void FUN_103d564cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87b48;
  func_0x000107c61520(&UNK_10dc87b48,&UNK_110706c18);
  puRam0000000113006308 = puVar1;
  return;
}



/* Entry: 103d5650c; end: 103d5652f;  */

void FUN_103d5650c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d56530();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d56530; end: 103d5656f;  */

void FUN_103d56530(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87bc8;
  func_0x000107c61520(&UNK_10dc87bc8,&UNK_110706d40);
  puRam0000000113006310 = puVar1;
  return;
}



/* Entry: 103d56570; end: 103d56587;  */

void FUN_103d56570(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d55ec0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5108c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56588; end: 103d565c7;  */

void FUN_103d56588(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87c30;
  func_0x000107c61520(&UNK_10dc87c30,&UNK_110706d40);
  puRam0000000113006318 = puVar1;
  return;
}



/* Entry: 103d565c8; end: 103d565eb;  */

void FUN_103d565c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d565ec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d565ec; end: 103d5662b;  */

void FUN_103d565ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87ca0;
  func_0x000107c61520(&UNK_10dc87ca0,&UNK_110706dc8);
  puRam0000000113006320 = puVar1;
  return;
}



/* Entry: 103d5662c; end: 103d56643;  */

void FUN_103d5662c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d55f40)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d510cc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56644; end: 103d56683;  */

void FUN_103d56644(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87d08;
  func_0x000107c61520(&UNK_10dc87d08,&UNK_110706dc8);
  puRam0000000113006328 = puVar1;
  return;
}



/* Entry: 103d56684; end: 103d566a7;  */

void FUN_103d56684(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d566a8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d566a8; end: 103d566e7;  */

void FUN_103d566a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87d78;
  func_0x000107c61520(&UNK_10dc87d78,&UNK_110706e50);
  puRam0000000113006330 = puVar1;
  return;
}



/* Entry: 103d566e8; end: 103d566ff;  */

void FUN_103d566e8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d55f80)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d5110c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56700; end: 103d5673f;  */

void FUN_103d56700(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87de0;
  func_0x000107c61520(&UNK_10dc87de0,&UNK_110706e50);
  puRam0000000113006338 = puVar1;
  return;
}



/* Entry: 103d56740; end: 103d56763;  */

void FUN_103d56740(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d56764();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d56764; end: 103d567a3;  */

void FUN_103d56764(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87e50;
  func_0x000107c61520(&UNK_10dc87e50,&UNK_110706ed8);
  puRam0000000113006340 = puVar1;
  return;
}



/* Entry: 103d567a4; end: 103d567bb;  */

void FUN_103d567a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d56000)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d55a18();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d567bc; end: 103d567fb;  */

void FUN_103d567bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87eb8;
  func_0x000107c61520(&UNK_10dc87eb8,&UNK_110706ed8);
  puRam0000000113006348 = puVar1;
  return;
}



/* Entry: 103d567fc; end: 103d5681f;  */

void FUN_103d567fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d56820();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d56820; end: 103d5685f;  */

void FUN_103d56820(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87f28;
  func_0x000107c61520(&UNK_10dc87f28,&UNK_110706f60);
  puRam0000000113006350 = puVar1;
  return;
}



/* Entry: 103d56860; end: 103d56877;  */

void FUN_103d56860(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d56040)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d55a58)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56878; end: 103d568b7;  */

void FUN_103d56878(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc87f90;
  func_0x000107c61520(&UNK_10dc87f90,&UNK_110706f60);
  puRam0000000113006358 = puVar1;
  return;
}



/* Entry: 103d568b8; end: 103d568db;  */

void FUN_103d568b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d568dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d568dc; end: 103d5691b;  */

void FUN_103d568dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88000;
  func_0x000107c61520(&UNK_10dc88000,&UNK_110706fe8);
  puRam0000000113006360 = puVar1;
  return;
}



/* Entry: 103d5691c; end: 103d5692f;  */

void FUN_103d5691c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d56080)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d5114c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56930; end: 103d5695f;  */

void FUN_103d56930(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d56960; end: 103d56963;  */

void FUN_103d56960(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88068;
  func_0x000107c61520(&UNK_10dc88068,&UNK_110706fe8);
  puRam0000000113006368 = puVar1;
  return;
}



/* Entry: 103d56964; end: 103d569a3;  */

void FUN_103d56964(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88068;
  func_0x000107c61520(&UNK_10dc88068,&UNK_110706fe8);
  puRam0000000113006368 = puVar1;
  return;
}



/* Entry: 103d569a4; end: 103d569cb;  */

void FUN_103d569a4(void)

{
  return;
}



/* Entry: 103d569cc; end: 103d56a1b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d569cc(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[1]);
  func_0x000107c6142c(param_1[2]);
  func_0x000107c6142c(param_1[3]);
  func_0x000107c6142c(param_1[4]);
  func_0x000107c6142c(param_1[5]);
  uVar1 = param_1[6];
  uVar2 = (uint)((ulong)param_1[7] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[7] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d56a1c; end: 103d56aab;  */

undefined8 * FUN_103d56a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar5 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar5;
  uVar2 = param_2[4];
  uVar6 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar6;
  uVar3 = param_2[6];
  uVar7 = param_2[7];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar6);
  func_0x00010006c00c(uVar3,uVar7);
  param_1[6] = uVar3;
  param_1[7] = uVar7;
  return param_1;
}



/* Entry: 103d56aac; end: 103d56b83;  */

undefined8 * FUN_103d56aac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar4 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[6];
  uVar2 = param_2[7];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[6];
  uVar3 = param_1[7];
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 103d56b84; end: 103d56bff;  */

undefined8 * FUN_103d56b84(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c6142c(uVar1);
  func_0x000107c6142c(param_1[4]);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d56c00; end: 103d56ce7;  */

int FUN_103d56c00(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d56ce8; end: 103d56db7;  */

undefined8 * FUN_103d56ce8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 103d56db8; end: 103d56e17;  */

undefined8 * FUN_103d56db8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d56e18; end: 103d56ed7;  */

int FUN_103d56e18(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d56ed8; end: 103d56f87;  */

undefined8 * FUN_103d56ed8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 103d56f88; end: 103d56fd7;  */

undefined8 * FUN_103d56f88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d56fd8; end: 103d570a3;  */

int FUN_103d56fd8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103d570a4; end: 103d570cb;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103d570a4(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x20) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x20) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103d570cc; end: 103d5718b;  */

undefined8 * FUN_103d570cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 103d5718c; end: 103d571d7;  */

undefined8 * FUN_103d5718c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103d571d8; end: 103d57277;  */

int FUN_103d571d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103d57278; end: 103d57437;  */

void FUN_103d57278(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc87fd4;
  func_0x000107c61520(&DAT_10dc87fd4,&UNK_110706fe8);
  puRam0000000113006378 = puVar1;
  return;
}



/* Entry: 103d57438; end: 103d575c3;  */

void FUN_103d57438(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103d575c4; end: 103d57613;  */

void FUN_103d575c4(void)

{
  func_0x000100d6e058();
  return;
}



/* Entry: 103d57614; end: 103d57637;  */

void FUN_103d57614(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 103d57638; end: 103d57667;  */

void FUN_103d57638(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  func_0x000103d5ab88();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103d57668; end: 103d5766f;  */

undefined8 FUN_103d57668(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103d57670; end: 103d576e3;  */

void FUN_103d57670(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x113006478;
  func_0x0001000285a8(0x113006478,&UNK_10dc88460);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103d576e4; end: 103d576ef;  */

void FUN_103d576e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103d576f0; end: 103d5779b;  */

void FUN_103d576f0(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d5779c; end: 103d577af;  */

bool FUN_103d5779c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103d577b0; end: 103d577f7;  */

void FUN_103d577b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89320,0xfc,2);
  uRam0000000113810ce8 = uStack_38;
  uRam0000000113810ce0 = uStack_40;
  uRam0000000113810cf8 = uStack_28;
  uRam0000000113810cf0 = uStack_30;
  uRam0000000113810d08 = uStack_18;
  uRam0000000113810d00 = uStack_20;
  return;
}



/* Entry: 103d577f8; end: 103d57897;  */

/* WARNING: Possible PIC construction at 0x000103d57844: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d57854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d57848) */
/* WARNING: Removing unreachable block (ram,0x000103d57858) */

void FUN_103d577f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006480 != -1) {
    func_0x000107c61568(0x113006480,FUN_103d577b0);
  }
  uVar5 = uRam0000000113810d08;
  uVar4 = uRam0000000113810d00;
  uVar3 = uRam0000000113810cf8;
  uVar2 = uRam0000000113810cf0;
  uVar1 = uRam0000000113810ce8;
  *param_1 = uRam0000000113810ce0;
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



/* Entry: 103d57898; end: 103d578cf;  */

void FUN_103d57898(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113810d18 = uStack_38;
  uRam0000000113810d10 = uStack_40;
  uRam0000000113810d28 = uStack_28;
  uRam0000000113810d20 = uStack_30;
  uRam0000000113810d38 = uStack_18;
  uRam0000000113810d30 = uStack_20;
  return;
}



/* Entry: 103d578d0; end: 103d5791b;  */

void FUN_103d578d0(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d5791c; end: 103d5792f;  */

void FUN_103d5791c(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 103d57930; end: 103d57963;  */

void FUN_103d57930(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 103d57964; end: 103d57993;  */

undefined1  [16] FUN_103d57964(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103d57994; end: 103d579c7;  */

void FUN_103d57994(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103d579c8; end: 103d579db;  */

undefined8 FUN_103d579c8(void)

{
  return 0x103d579d8;
}



/* Entry: 103d579dc; end: 103d57a0f;  */

void FUN_103d579dc(void)

{
  FUN_103d578d0();
  return;
}



/* Entry: 103d57a10; end: 103d57a13;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d57a10(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d57a14; end: 103d57a4b;  */

uint FUN_103d57a14(long param_1,long param_2)

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
  func_0x000103d5dbd8();
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



/* Entry: 103d57a4c; end: 103d57a57;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d57a4c(long *param_1)

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
  undefined8 *unaff_x20;
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
  
  lVar24 = *param_1;
  uVar16 = param_1[1];
  pbVar10 = (byte *)*unaff_x20;
  pbVar25 = (byte *)unaff_x20[1];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(undefined8 **)(puVar7 + -0x20) = unaff_x20;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
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
    *(undefined8 **)(puVar7 + -0xa0) = unaff_x20;
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
    unaff_x20 = *(undefined8 **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d57a58; end: 103d57af7;  */

/* WARNING: Possible PIC construction at 0x000103d57aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d57ab4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d57aa8) */
/* WARNING: Removing unreachable block (ram,0x000103d57ab8) */

void FUN_103d57a58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006488 != -1) {
    func_0x000107c61568(0x113006488,FUN_103d57898);
  }
  uVar5 = uRam0000000113810d38;
  uVar4 = uRam0000000113810d30;
  uVar3 = uRam0000000113810d28;
  uVar2 = uRam0000000113810d20;
  uVar1 = uRam0000000113810d18;
  *param_1 = uRam0000000113810d10;
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



/* Entry: 103d57af8; end: 103d57b33;  */

void FUN_103d57af8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006700;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006700,&UNK_10dc89168);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d57b34; end: 103d57c27;  */

void FUN_103d57b34(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d57c28; end: 103d57c3b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d57c28(undefined8 *param_1,long *param_2)

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
  
  pbVar10 = (byte *)*param_1;
  pbVar25 = (byte *)param_1[1];
  lVar24 = *param_2;
  uVar16 = param_2[1];
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



/* Entry: 103d57c3c; end: 103d57c83;  */

void FUN_103d57c3c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc892c0,0x5f,2);
  uRam0000000113810d48 = uStack_38;
  uRam0000000113810d40 = uStack_40;
  uRam0000000113810d58 = uStack_28;
  uRam0000000113810d50 = uStack_30;
  uRam0000000113810d68 = uStack_18;
  uRam0000000113810d60 = uStack_20;
  return;
}



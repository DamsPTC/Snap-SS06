/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015f82e8; end: 1015f83ff;  */

/* WARNING: Possible PIC construction at 0x0001015f831c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015f8320) */
/* WARNING: Removing unreachable block (ram,0x0001015f8348) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015f82e8(undefined8 *param_1)

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



/* Entry: 1015f8400; end: 1015f843b;  */

void FUN_1015f8400(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db94d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db94d8,&UNK_10d96aea0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015f843c; end: 1015f85b7;  */

void FUN_1015f843c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015f85b8; end: 1015f85f7;  */

void FUN_1015f85b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db94c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ade0;
  func_0x000107c61520(&UNK_10d96ade0,&UNK_1103e6f98);
  puRam0000000112db94c0 = puVar1;
  return;
}



/* Entry: 1015f85f8; end: 1015f861b;  */

void FUN_1015f85f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f861c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015f861c; end: 1015f865b;  */

void FUN_1015f861c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db94c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96adb8;
  func_0x000107c61520(&UNK_10d96adb8,&UNK_1103e6f98);
  puRam0000000112db94c8 = puVar1;
  return;
}



/* Entry: 1015f865c; end: 1015f8687;  */

void FUN_1015f865c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015f85b8();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101571a3c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015f8688; end: 1015f868b;  */

void FUN_1015f8688(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db94d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ae20;
  func_0x000107c61520(&UNK_10d96ae20,&UNK_1103e6f98);
  puRam0000000112db94d0 = puVar1;
  return;
}



/* Entry: 1015f868c; end: 1015f86cb;  */

void FUN_1015f868c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db94d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96ae20;
  func_0x000107c61520(&UNK_10d96ae20,&UNK_1103e6f98);
  puRam0000000112db94d0 = puVar1;
  return;
}



/* Entry: 1015f86cc; end: 1015f871f;  */

long FUN_1015f86cc(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015f8720; end: 1015f87cf;  */

undefined8 * FUN_1015f8720(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015f87d0; end: 1015f8813;  */

undefined8 * FUN_1015f87d0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015f8814; end: 1015f88ab;  */

int FUN_1015f8814(int *param_1,int param_2)

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



/* Entry: 1015f88ac; end: 1015f88eb;  */

void FUN_1015f88ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db94e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96ad8c;
  func_0x000107c61520(&DAT_10d96ad8c,&UNK_1103e6f98);
  puRam0000000112db94e0 = puVar1;
  return;
}



/* Entry: 1015f88ec; end: 1015f8adf;  */

/* WARNING: Possible PIC construction at 0x0001015f896c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f8aac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f8a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f89ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f8a48) */
/* WARNING: Removing unreachable block (ram,0x0001015f8ab0) */
/* WARNING: Removing unreachable block (ram,0x0001015f8ae0) */
/* WARNING: Removing unreachable block (ram,0x0001015f8b28) */
/* WARNING: Removing unreachable block (ram,0x0001015f8ae4) */
/* WARNING: Removing unreachable block (ram,0x0001015f8970) */
/* WARNING: Removing unreachable block (ram,0x0001015f8a58) */
/* WARNING: Removing unreachable block (ram,0x0001015d316c) */
/* WARNING: Removing unreachable block (ram,0x0001015d317c) */
/* WARNING: Removing unreachable block (ram,0x0001015d3178) */
/* WARNING: Removing unreachable block (ram,0x0001015f89b0) */
/* WARNING: Removing unreachable block (ram,0x000101541428) */
/* WARNING: Removing unreachable block (ram,0x00010154145c) */
/* WARNING: Removing unreachable block (ram,0x00010154142c) */

void FUN_1015f88ec(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,ulong param_7,undefined8 param_8,ulong param_9,ulong param_10)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_stack_00000028;
  byte in_stack_00000030;
  
  uVar4 = in_stack_00000028;
  uVar3 = param_10;
  uVar2 = param_9;
  puVar1 = &stack0xfffffffffffffff0;
  uVar5 = (uint)(param_10 >> 0x3c) & 3 | (in_stack_00000030 & 0x3f) << 2;
  if (uVar5 < 4) {
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        func_0x000107c61434();
        param_1 = param_2;
        goto code_r0x00010006c00c;
      }
      if (uVar5 != 1) {
        return;
      }
    }
    else if ((uVar5 != 2) && (uVar5 != 3)) {
      return;
    }
    unaff_x30 = 0x1015f89b0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_3 = param_2;
    unaff_x19 = param_6;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
  }
  else if (uVar5 < 6) {
    if (uVar5 == 4) {
      func_0x000107c61434(param_2);
      param_1 = param_6;
      param_3 = param_7;
    }
    else {
      param_3 = param_2;
      if (uVar5 != 5) {
        return;
      }
    }
  }
  else if (uVar5 == 6) {
    func_0x000107c61434(param_4);
    func_0x000107c61434(param_6);
    func_0x000107c61434(param_8);
    unaff_x30 = 0x1015f8a48;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_1 = uVar2;
    param_3 = uVar3 & 0xcfffffffffffffff;
    unaff_x19 = param_6;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
  }
  else if (uVar5 == 7) {
    func_0x000107c61434();
    unaff_x30 = 0x1015f8ab0;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_1 = param_2;
    unaff_x19 = param_6;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
  }
  else {
    if (uVar5 != 8) {
      return;
    }
    func_0x000107c61434(param_2);
    unaff_x30 = 0x1015f8970;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_1 = param_3;
    param_3 = param_4;
    unaff_x19 = param_6;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
  }
code_r0x00010006c00c:
  uVar5 = (uint)(param_3 >> 0x3e);
  if (uVar5 != 1) {
    if (uVar5 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c6157c(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015f8ae0; end: 1015f8b2b;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1015f8ae0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  uVar1 = (uint)(param_6 >> 0x3e);
  if (uVar1 == 1) {
    param_5 = param_6 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_5);
  return;
}



/* Entry: 1015f8b2c; end: 1015f8c13;  */

undefined8 FUN_1015f8b2c(undefined8 param_1,undefined8 param_2)

{
  FUN_1015fda60(param_2,param_1,&UNK_1103e72f8);
  return param_2;
}



/* Entry: 1015f8c14; end: 1015f8de7;  */

bool FUN_1015f8c14(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long unaff_x20;
  ulong uVar3;
  undefined1 auStack_198 [88];
  undefined8 uStack_140;
  undefined8 uStack_138;
  ulong uStack_130;
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
  ulong uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_78 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_130 = *(ulong *)(unaff_x20 + 0xa8);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_70 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_60 = *(undefined8 *)(unaff_x20 + 200);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_50 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = uStack_130 & 0xff;
  uStack_80 = uStack_130;
  if (uVar3 == 3) {
    uStack_138 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_110 = *(undefined8 *)(unaff_x20 + 200);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0xe8);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar1 = 0x112db3fd8;
    puVar2 = &UNK_10d96aef0;
    FUN_1015f8de8(&uStack_90,auStack_198,0x112db3fd8,&UNK_10d96aef0);
  }
  else {
    uStack_138 = *(undefined8 *)(unaff_x20 + 0xa0);
    uStack_140 = *(undefined8 *)(unaff_x20 + 0x98);
    uStack_120 = *(undefined8 *)(unaff_x20 + 0xb8);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_110 = *(undefined8 *)(unaff_x20 + 200);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0xc0);
    uStack_100 = *(undefined8 *)(unaff_x20 + 0xd8);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0xd0);
    uStack_f0 = *(undefined8 *)(unaff_x20 + 0xe8);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0xe0);
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 3;
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    FUN_1015f8de8(&uStack_90,auStack_198,0x112db3fd8,&UNK_10d96aef0);
    uVar1 = 0x112db94e8;
    puVar2 = &UNK_10d96aef8;
  }
  FUN_1015fe14c(&uStack_140,uVar1,puVar2);
  return uVar3 != 3;
}



/* Entry: 1015f8de8; end: 1015f8e2f;  */

undefined8 FUN_1015f8de8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1015f8e30; end: 1015f8eaf;  */

uint FUN_1015f8e30(undefined8 *param_1,undefined8 *param_2)

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
  undefined1 uStack_b0;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_b0 = *(undefined1 *)(param_1 + 0xe);
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
  uStack_30 = *(undefined1 *)(param_2 + 0xe);
  FUN_1015fba8c(&uStack_120,&uStack_a0);
  return uVar1 & 1;
}



/* Entry: 1015f8eb0; end: 1015f8ee7;  */

void FUN_1015f8eb0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam0000000113801320 = uStack_38;
  uRam0000000113801318 = uStack_40;
  uRam0000000113801330 = uStack_28;
  uRam0000000113801328 = uStack_30;
  uRam0000000113801340 = uStack_18;
  uRam0000000113801338 = uStack_20;
  return;
}



/* Entry: 1015f8ee8; end: 1015f8f33;  */

void FUN_1015f8ee8(undefined8 param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015f8f34; end: 1015f8f47;  */

void FUN_1015f8f34(void)

{
  func_0x000100076224();
  return;
}



/* Entry: 1015f8f48; end: 1015f8f7b;  */

void FUN_1015f8f48(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  return;
}



/* Entry: 1015f8f7c; end: 1015f8fab;  */

undefined1  [16] FUN_1015f8f7c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1015f8fac; end: 1015f8fdf;  */

void FUN_1015f8fac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1015f8fe0; end: 1015f8ff3;  */

undefined8 FUN_1015f8fe0(void)

{
  return 0x1015f8ff0;
}



/* Entry: 1015f8ff4; end: 1015f9027;  */

void FUN_1015f8ff4(void)

{
  FUN_1015f8ee8();
  return;
}



/* Entry: 1015f9028; end: 1015f902b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015f9028(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015f902c; end: 1015f9063;  */

uint FUN_1015f902c(long param_1,long param_2)

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
  func_0x0001015fde6c();
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



/* Entry: 1015f9064; end: 1015f906f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015f9064(long *param_1)

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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015f9070; end: 1015f910f;  */

/* WARNING: Possible PIC construction at 0x0001015f90bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015f90cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015f90c0) */
/* WARNING: Removing unreachable block (ram,0x0001015f90d0) */

void FUN_1015f9070(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db94f8 != -1) {
    func_0x000107c61568(0x112db94f8,FUN_1015f8eb0);
  }
  uVar5 = uRam0000000113801340;
  uVar4 = uRam0000000113801338;
  uVar3 = uRam0000000113801330;
  uVar2 = uRam0000000113801328;
  uVar1 = uRam0000000113801320;
  *param_1 = uRam0000000113801318;
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



/* Entry: 1015f9110; end: 1015f914b;  */

void FUN_1015f9110(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db9558;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db9558,&UNK_10d96b180);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015f914c; end: 1015f923f;  */

void FUN_1015f914c(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015f9240; end: 1015f9253;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015f9240(undefined8 *param_1,long *param_2)

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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar16 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar7 + -0x71,puVar7 + -0x70);
            pbVar9 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar13 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar13 = puVar7 + -0x70;
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar24,uVar16);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar16;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
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
    *(code **)(puVar7 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015f9254; end: 1015f929b;  */

void FUN_1015f9254(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96b1b0,200,2);
  uRam0000000113801350 = uStack_38;
  uRam0000000113801348 = uStack_40;
  uRam0000000113801360 = uStack_28;
  uRam0000000113801358 = uStack_30;
  uRam0000000113801370 = uStack_18;
  uRam0000000113801368 = uStack_20;
  return;
}



/* Entry: 1015f929c; end: 1015f94ab;  */

/* WARNING: Removing unreachable block (ram,0x0001015f938c) */
/* WARNING: Removing unreachable block (ram,0x0001015f93e0) */
/* WARNING: Removing unreachable block (ram,0x0001015f94a8) */
/* WARNING: Removing unreachable block (ram,0x0001015f948c) */
/* WARNING: Removing unreachable block (ram,0x0001015f93c4) */
/* WARNING: Removing unreachable block (ram,0x0001015f9418) */
/* WARNING: Removing unreachable block (ram,0x0001015f93fc) */
/* WARNING: Removing unreachable block (ram,0x0001015f9434) */
/* WARNING: Removing unreachable block (ram,0x0001015f93a8) */

void FUN_1015f929c(undefined8 param_1,undefined8 param_2,long param_3)

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
      switch(uVar1) {
      case 1:
        FUN_1015f94ac();
        break;
      case 2:
        FUN_1015f96a0();
        break;
      case 3:
        FUN_1015f9960();
        break;
      case 4:
        FUN_1015f9c20();
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fe02c();
        lVar2 = unaff_x20 + 0x98;
        puVar3 = &UNK_110673aa8;
        goto code_r0x0001015f9328;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0xf0;
        puVar3 = &UNK_110790c00;
        goto code_r0x0001015f9328;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x0001015fbe6c();
        lVar2 = unaff_x20 + 0x78;
        puVar3 = &UNK_1103e7460;
code_r0x0001015f9328:
        (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
        break;
      case 8:
        FUN_1015f9ee0();
        break;
      case 9:
        FUN_1015fa194();
        break;
      case 10:
        FUN_1015fa37c();
        break;
      case 0xb:
        FUN_1015fa6bc();
        break;
      case 0xc:
        FUN_1015fa9a8();
      }
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1015f94ac; end: 1015f969f;  */

/* WARNING: Removing unreachable block (ram,0x0001015f95c0) */

void FUN_1015f94ac(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  bool bVar4;
  long *plVar5;
  long lVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_178 [120];
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
  byte bStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  
  lStack_88 = 0;
  lStack_80 = 0;
  lStack_78 = 0;
  bVar3 = *(byte *)(param_1 + 0xe);
  bVar4 = ((param_1[9] ^ 0xffffffffffffffffU) & 0x3000000000000000) == 0;
  plVar5 = param_1;
  if ((!bVar4 || bVar3 != 0xff) &&
      (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03) == 0 && (bVar3 & 0x3f) == 0)) {
    lVar1 = *param_1;
    lVar2 = param_1[1];
    lStack_e8 = param_1[3];
    lStack_f0 = param_1[2];
    lStack_d8 = param_1[5];
    lStack_e0 = param_1[4];
    lVar6 = param_1[2];
    lStack_c8 = param_1[7];
    lStack_d0 = param_1[6];
    lStack_b8 = param_1[9];
    lStack_c0 = param_1[8];
    lStack_a8 = param_1[0xb];
    lStack_b0 = param_1[10];
    lStack_98 = param_1[0xd];
    lStack_a0 = param_1[0xc];
    lStack_100 = lVar1;
    lStack_f8 = lVar2;
    bStack_90 = bVar3;
    FUN_1015f8b2c(&lStack_100,auStack_178);
    plVar5 = (long *)0x0;
    FUN_1015fe06c(0,0,0);
    lStack_88 = lVar1;
    lStack_80 = lVar2;
    lStack_78 = lVar6;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x0001015d53a0();
  (*pcVar7)(&lStack_88,&UNK_1103e83c8,plVar5,param_3,param_4);
  lVar6 = lStack_78;
  lVar2 = lStack_80;
  lVar1 = lStack_88;
  if ((unaff_x21 == 0) && (lStack_88 != 0)) {
    if (bVar4 && bVar3 == 0xff) {
      func_0x000107c61434();
      func_0x00010006c00c(lVar2,lVar6);
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x000107c61434();
      func_0x00010006c00c(lVar2,lVar6);
      (*pcVar7)(param_3,param_4);
    }
    FUN_1015fe06c(lStack_88,lStack_80,lStack_78);
    lStack_b8 = param_1[9];
    lStack_c0 = param_1[8];
    lStack_a8 = param_1[0xb];
    lStack_b0 = param_1[10];
    lStack_98 = param_1[0xd];
    lStack_a0 = param_1[0xc];
    lStack_f8 = param_1[1];
    lStack_100 = *param_1;
    lStack_e8 = param_1[3];
    lStack_f0 = param_1[2];
    lStack_d8 = param_1[5];
    lStack_e0 = param_1[4];
    lStack_c8 = param_1[7];
    lStack_d0 = param_1[6];
    bStack_90 = (byte)param_1[0xe];
    *param_1 = lVar1;
    param_1[1] = lVar2;
    param_1[2] = lVar6;
    param_1[9] = 0;
    *(undefined1 *)(param_1 + 0xe) = 0;
    FUN_1015fe14c(&lStack_100,0x112db3fe0,&UNK_10d95e560);
  }
  else {
    FUN_1015fe06c(lStack_88,lStack_80,lStack_78);
  }
  return;
}



/* Entry: 1015f96a0; end: 1015f995f;  */

/* WARNING: Removing unreachable block (ram,0x0001015f9880) */

void FUN_1015f96a0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long unaff_x21;
  code *pcVar12;
  undefined1 auStack_1a8 [120];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 1;
  bVar7 = *(byte *)(param_1 + 0xe);
  bVar8 = ((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar10 = (uint)bVar7;
  puVar9 = param_1;
  if ((!bVar8 || uVar10 != 0xff) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar10 & 0x3f) << 2) == 1)) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    lVar3 = param_1[4];
    uVar6 = param_1[5];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uVar11 = param_1[6];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_130 = uVar1;
    uStack_128 = uVar4;
    uStack_120 = uVar2;
    uStack_118 = uVar5;
    lStack_110 = lVar3;
    uStack_108 = uVar6;
    bStack_c0 = bVar7;
    FUN_1015f8b2c(&uStack_130,auStack_1a8);
    puVar9 = (undefined8 *)0x0;
    FUN_1015fe0a0(0,0,0,0,1,0,0);
    uStack_b0 = uVar1;
    uStack_a8 = uVar4;
    uStack_a0 = uVar2;
    uStack_98 = uVar5;
    lStack_90 = lVar3;
    uStack_88 = uVar6;
    uStack_80 = uVar11;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  func_0x0001015fdeac();
  (*pcVar12)(&uStack_b0,&UNK_1103e8040,puVar9,param_3,param_4);
  uVar11 = uStack_80;
  uVar6 = uStack_88;
  lVar3 = lStack_90;
  uVar5 = uStack_98;
  uVar4 = uStack_a0;
  uVar2 = uStack_a8;
  uVar1 = uStack_b0;
  if (unaff_x21 == 0) {
    if (lStack_90 == 1) {
      FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,1);
    }
    else {
      if (bVar8 && uVar10 == 0xff) {
        func_0x00010006c00c(uStack_b0,uStack_a8);
        func_0x000101541428(uVar4,uVar5,lVar3,uVar6,uVar11);
      }
      else {
        pcVar12 = *(code **)(param_4 + 8);
        func_0x00010006c00c(uStack_b0,uStack_a8);
        func_0x000101541428(uVar4,uVar5,lVar3,uVar6,uVar11);
        (*pcVar12)(param_3,param_4);
      }
      FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,lStack_90,uStack_88,uStack_80);
      uStack_e8 = param_1[9];
      uStack_f0 = param_1[8];
      uStack_d8 = param_1[0xb];
      uStack_e0 = param_1[10];
      uStack_c8 = param_1[0xd];
      uStack_d0 = param_1[0xc];
      uStack_128 = param_1[1];
      uStack_130 = *param_1;
      uStack_118 = param_1[3];
      uStack_120 = param_1[2];
      uStack_108 = param_1[5];
      lStack_110 = param_1[4];
      uStack_f8 = param_1[7];
      uStack_100 = param_1[6];
      bStack_c0 = *(byte *)(param_1 + 0xe);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = lVar3;
      param_1[5] = uVar6;
      param_1[6] = uVar11;
      param_1[9] = 0x1000000000000000;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_1015fe14c(&uStack_130,0x112db3fe0,&UNK_10d95e560);
    }
  }
  else {
    FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,lStack_90,uStack_88,uStack_80);
  }
  return;
}



/* Entry: 1015f9960; end: 1015f9c1f;  */

/* WARNING: Removing unreachable block (ram,0x0001015f9b40) */

void FUN_1015f9960(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long unaff_x21;
  code *pcVar12;
  undefined1 auStack_1a8 [120];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 1;
  bVar7 = *(byte *)(param_1 + 0xe);
  bVar8 = ((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar10 = (uint)bVar7;
  puVar9 = param_1;
  if ((!bVar8 || uVar10 != 0xff) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar10 & 0x3f) << 2) == 2)) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    lVar3 = param_1[4];
    uVar6 = param_1[5];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uVar11 = param_1[6];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_130 = uVar1;
    uStack_128 = uVar4;
    uStack_120 = uVar2;
    uStack_118 = uVar5;
    lStack_110 = lVar3;
    uStack_108 = uVar6;
    bStack_c0 = bVar7;
    FUN_1015f8b2c(&uStack_130,auStack_1a8);
    puVar9 = (undefined8 *)0x0;
    FUN_1015fe0a0(0,0,0,0,1,0,0);
    uStack_b0 = uVar1;
    uStack_a8 = uVar4;
    uStack_a0 = uVar2;
    uStack_98 = uVar5;
    lStack_90 = lVar3;
    uStack_88 = uVar6;
    uStack_80 = uVar11;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  func_0x0001015fdeac();
  (*pcVar12)(&uStack_b0,&UNK_1103e8040,puVar9,param_3,param_4);
  uVar11 = uStack_80;
  uVar6 = uStack_88;
  lVar3 = lStack_90;
  uVar5 = uStack_98;
  uVar4 = uStack_a0;
  uVar2 = uStack_a8;
  uVar1 = uStack_b0;
  if (unaff_x21 == 0) {
    if (lStack_90 == 1) {
      FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,1);
    }
    else {
      if (bVar8 && uVar10 == 0xff) {
        func_0x00010006c00c(uStack_b0,uStack_a8);
        func_0x000101541428(uVar4,uVar5,lVar3,uVar6,uVar11);
      }
      else {
        pcVar12 = *(code **)(param_4 + 8);
        func_0x00010006c00c(uStack_b0,uStack_a8);
        func_0x000101541428(uVar4,uVar5,lVar3,uVar6,uVar11);
        (*pcVar12)(param_3,param_4);
      }
      FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,lStack_90,uStack_88,uStack_80);
      uStack_e8 = param_1[9];
      uStack_f0 = param_1[8];
      uStack_d8 = param_1[0xb];
      uStack_e0 = param_1[10];
      uStack_c8 = param_1[0xd];
      uStack_d0 = param_1[0xc];
      uStack_128 = param_1[1];
      uStack_130 = *param_1;
      uStack_118 = param_1[3];
      uStack_120 = param_1[2];
      uStack_108 = param_1[5];
      lStack_110 = param_1[4];
      uStack_f8 = param_1[7];
      uStack_100 = param_1[6];
      bStack_c0 = *(byte *)(param_1 + 0xe);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = lVar3;
      param_1[5] = uVar6;
      param_1[6] = uVar11;
      param_1[9] = 0x2000000000000000;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_1015fe14c(&uStack_130,0x112db3fe0,&UNK_10d95e560);
    }
  }
  else {
    FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,lStack_90,uStack_88,uStack_80);
  }
  return;
}



/* Entry: 1015f9c20; end: 1015f9edf;  */

/* WARNING: Removing unreachable block (ram,0x0001015f9e00) */

void FUN_1015f9c20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  bool bVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 uVar11;
  long unaff_x21;
  code *pcVar12;
  undefined1 auStack_1a8 [120];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  long lStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  byte bStack_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_80 = 0;
  lStack_90 = 1;
  bVar7 = *(byte *)(param_1 + 0xe);
  bVar8 = ((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar10 = (uint)bVar7;
  puVar9 = param_1;
  if ((!bVar8 || uVar10 != 0xff) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar10 & 0x3f) << 2) == 3)) {
    uVar1 = *param_1;
    uVar4 = param_1[1];
    uVar2 = param_1[2];
    uVar5 = param_1[3];
    lVar3 = param_1[4];
    uVar6 = param_1[5];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uVar11 = param_1[6];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_130 = uVar1;
    uStack_128 = uVar4;
    uStack_120 = uVar2;
    uStack_118 = uVar5;
    lStack_110 = lVar3;
    uStack_108 = uVar6;
    bStack_c0 = bVar7;
    FUN_1015f8b2c(&uStack_130,auStack_1a8);
    puVar9 = (undefined8 *)0x0;
    FUN_1015fe0a0(0,0,0,0,1,0,0);
    uStack_b0 = uVar1;
    uStack_a8 = uVar4;
    uStack_a0 = uVar2;
    uStack_98 = uVar5;
    lStack_90 = lVar3;
    uStack_88 = uVar6;
    uStack_80 = uVar11;
  }
  pcVar12 = *(code **)(param_4 + 0x198);
  func_0x0001015fdeac();
  (*pcVar12)(&uStack_b0,&UNK_1103e8040,puVar9,param_3,param_4);
  uVar11 = uStack_80;
  uVar6 = uStack_88;
  lVar3 = lStack_90;
  uVar5 = uStack_98;
  uVar4 = uStack_a0;
  uVar2 = uStack_a8;
  uVar1 = uStack_b0;
  if (unaff_x21 == 0) {
    if (lStack_90 == 1) {
      FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,1);
    }
    else {
      if (bVar8 && uVar10 == 0xff) {
        func_0x00010006c00c(uStack_b0,uStack_a8);
        func_0x000101541428(uVar4,uVar5,lVar3,uVar6,uVar11);
      }
      else {
        pcVar12 = *(code **)(param_4 + 8);
        func_0x00010006c00c(uStack_b0,uStack_a8);
        func_0x000101541428(uVar4,uVar5,lVar3,uVar6,uVar11);
        (*pcVar12)(param_3,param_4);
      }
      FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,lStack_90,uStack_88,uStack_80);
      uStack_e8 = param_1[9];
      uStack_f0 = param_1[8];
      uStack_d8 = param_1[0xb];
      uStack_e0 = param_1[10];
      uStack_c8 = param_1[0xd];
      uStack_d0 = param_1[0xc];
      uStack_128 = param_1[1];
      uStack_130 = *param_1;
      uStack_118 = param_1[3];
      uStack_120 = param_1[2];
      uStack_108 = param_1[5];
      lStack_110 = param_1[4];
      uStack_f8 = param_1[7];
      uStack_100 = param_1[6];
      bStack_c0 = *(byte *)(param_1 + 0xe);
      *param_1 = uVar1;
      param_1[1] = uVar2;
      param_1[2] = uVar4;
      param_1[3] = uVar5;
      param_1[4] = lVar3;
      param_1[5] = uVar6;
      param_1[6] = uVar11;
      param_1[9] = 0x3000000000000000;
      *(undefined1 *)(param_1 + 0xe) = 0;
      FUN_1015fe14c(&uStack_130,0x112db3fe0,&UNK_10d95e560);
    }
  }
  else {
    FUN_1015fe0a0(uStack_b0,uStack_a8,uStack_a0,uStack_98,lStack_90,uStack_88,uStack_80);
  }
  return;
}



/* Entry: 1015f9ee0; end: 1015fa193;  */

/* WARNING: Removing unreachable block (ram,0x0001015fa0d0) */

void FUN_1015f9ee0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  byte bVar8;
  ulong uVar9;
  bool bVar10;
  undefined8 *puVar11;
  uint uVar12;
  long unaff_x21;
  code *pcVar13;
  undefined1 auStack_1a8 [120];
  undefined8 uStack_130;
  long lStack_128;
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
  byte bStack_c0;
  undefined8 uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  uStack_80 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  bVar7 = *(byte *)(param_1 + 0xe);
  bVar10 = ((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar12 = (uint)bVar7;
  puVar11 = param_1;
  if ((!bVar10 || uVar12 != 0xff) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar12 & 0x3f) << 2) == 4)) {
    uVar1 = *param_1;
    lVar4 = param_1[1];
    bVar8 = *(byte *)(param_1 + 2);
    uStack_120 = param_1[2];
    uVar2 = param_1[3];
    uVar5 = param_1[4];
    uVar3 = param_1[5];
    uVar6 = param_1[6];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    uStack_130 = uVar1;
    lStack_128 = lVar4;
    uStack_118 = uVar2;
    uStack_110 = uVar5;
    uStack_108 = uVar3;
    bStack_c0 = bVar7;
    FUN_1015f8b2c(&uStack_130,auStack_1a8);
    puVar11 = (undefined8 *)0x0;
    FUN_1015fe100(0,0,0,0,0,0,0);
    uStack_a0 = (ulong)bVar8 & 1;
    uStack_b0 = uVar1;
    lStack_a8 = lVar4;
    uStack_98 = uVar2;
    uStack_90 = uVar5;
    uStack_88 = uVar3;
    uStack_80 = uVar6;
  }
  pcVar13 = *(code **)(param_4 + 0x198);
  func_0x0001015fdeec();
  (*pcVar13)(&uStack_b0,&UNK_1103e7628,puVar11,param_3,param_4);
  uVar6 = uStack_80;
  uVar5 = uStack_88;
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar9 = uStack_a0;
  lVar4 = lStack_a8;
  uVar1 = uStack_b0;
  if ((unaff_x21 == 0) && (lStack_a8 != 0)) {
    if (bVar10 && uVar12 == 0xff) {
      func_0x000107c61434(lStack_a8);
      func_0x00010006c00c(uVar5,uVar6);
    }
    else {
      pcVar13 = *(code **)(param_4 + 8);
      func_0x000107c61434(lStack_a8);
      func_0x00010006c00c(uVar5,uVar6);
      (*pcVar13)(param_3,param_4);
    }
    FUN_1015fe100(uStack_b0,lStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
    uStack_e8 = param_1[9];
    uStack_f0 = param_1[8];
    uStack_d8 = param_1[0xb];
    uStack_e0 = param_1[10];
    uStack_c8 = param_1[0xd];
    uStack_d0 = param_1[0xc];
    lStack_128 = param_1[1];
    uStack_130 = *param_1;
    uStack_118 = param_1[3];
    uStack_120 = param_1[2];
    uStack_108 = param_1[5];
    uStack_110 = param_1[4];
    uStack_f8 = param_1[7];
    uStack_100 = param_1[6];
    bStack_c0 = *(byte *)(param_1 + 0xe);
    *param_1 = uVar1;
    param_1[1] = lVar4;
    param_1[2] = uVar9 & 1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar5;
    param_1[6] = uVar6;
    param_1[9] = 0;
    *(undefined1 *)(param_1 + 0xe) = 1;
    FUN_1015fe14c(&uStack_130,0x112db3fe0,&UNK_10d95e560);
  }
  else {
    FUN_1015fe100(uStack_b0,lStack_a8,uStack_a0,uStack_98,uStack_90,uStack_88,uStack_80);
  }
  return;
}



/* Entry: 1015fa194; end: 1015fa37b;  */

/* WARNING: Removing unreachable block (ram,0x0001015fa2d8) */

void FUN_1015fa194(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  uint uVar6;
  long unaff_x21;
  code *pcVar7;
  undefined1 auStack_178 [120];
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
  byte bStack_90;
  undefined8 uStack_80;
  ulong uStack_78;
  
  uStack_78 = 0xf000000000000000;
  uStack_80 = 0;
  bVar3 = *(byte *)(param_1 + 0xe);
  bVar4 = ((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar6 = (uint)bVar3;
  puVar5 = param_1;
  if ((!bVar4 || uVar6 != 0xff) &&
      ((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar6 & 0x3f) << 2) == 5) {
    uVar1 = *param_1;
    uVar2 = param_1[1];
    uStack_f0 = param_1[2];
    uStack_f8 = param_1[1];
    uStack_e0 = param_1[4];
    uStack_e8 = param_1[3];
    uStack_d0 = param_1[6];
    uStack_d8 = param_1[5];
    uStack_c0 = param_1[8];
    uStack_c8 = param_1[7];
    uStack_b0 = param_1[10];
    uStack_b8 = param_1[9];
    uStack_a0 = param_1[0xc];
    uStack_a8 = param_1[0xb];
    uStack_98 = param_1[0xd];
    uStack_100 = uVar1;
    bStack_90 = bVar3;
    FUN_1015f8b2c(&uStack_100,auStack_178);
    puVar5 = (undefined8 *)0x0;
    FUN_1015fe138(0,0xf000000000000000);
    uStack_80 = uVar1;
    uStack_78 = uVar2;
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  FUN_1015fc7a0();
  (*pcVar7)(&uStack_80,&UNK_1103e71d0,puVar5,param_3,param_4);
  uVar2 = uStack_78;
  uVar1 = uStack_80;
  if ((unaff_x21 == 0) && (uStack_78 >> 0x3c < 0xf)) {
    if (bVar4 && uVar6 == 0xff) {
      func_0x00010006c00c();
    }
    else {
      pcVar7 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar7)(param_3,param_4);
    }
    FUN_1015fe138(uStack_80,uStack_78);
    uStack_b8 = param_1[9];
    uStack_c0 = param_1[8];
    uStack_a8 = param_1[0xb];
    uStack_b0 = param_1[10];
    uStack_98 = param_1[0xd];
    uStack_a0 = param_1[0xc];
    uStack_f8 = param_1[1];
    uStack_100 = *param_1;
    uStack_e8 = param_1[3];
    uStack_f0 = param_1[2];
    uStack_d8 = param_1[5];
    uStack_e0 = param_1[4];
    uStack_c8 = param_1[7];
    uStack_d0 = param_1[6];
    bStack_90 = *(byte *)(param_1 + 0xe);
    *param_1 = uVar1;
    param_1[1] = uVar2;
    param_1[9] = 0x1000000000000000;
    *(undefined1 *)(param_1 + 0xe) = 1;
    FUN_1015fe14c(&uStack_100,0x112db3fe0,&UNK_10d95e560);
  }
  else {
    FUN_1015fe138(uStack_80,uStack_78);
  }
  return;
}



/* Entry: 1015fa37c; end: 1015fa6bb;  */

/* WARNING: Removing unreachable block (ram,0x0001015fa5d0) */

void FUN_1015fa37c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  bool bVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined *puVar16;
  uint uVar17;
  ulong uVar18;
  undefined8 uVar19;
  long unaff_x21;
  code *pcVar20;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  long lStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  ulong uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  byte bStack_160;
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
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  lStack_c8 = 0;
  uStack_d0 = 0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  uStack_d8 = 0;
  uStack_e0 = 0;
  uVar18 = param_1[9];
  bVar12 = *(byte *)(param_1 + 0xe);
  bVar13 = ((uVar18 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar17 = (uint)bVar12;
  puVar14 = param_1;
  if ((!bVar13 || uVar17 != 0xff) &&
     (((uint)(uVar18 >> 0x3c) & 0xfffffc03 | (uVar17 & 0x3f) << 2) == 6)) {
    uVar15 = *param_1;
    uVar6 = param_1[1];
    uVar1 = param_1[2];
    lVar7 = param_1[3];
    uVar2 = param_1[4];
    uVar8 = param_1[5];
    uVar3 = param_1[6];
    uVar9 = param_1[7];
    uVar19 = param_1[8];
    uVar4 = param_1[10];
    uVar10 = param_1[0xb];
    uVar5 = param_1[0xc];
    uVar11 = param_1[0xd];
    uStack_f8 = 0;
    uStack_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_118 = 0;
    uStack_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_138 = 0;
    uStack_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_1d0 = uVar15;
    uStack_1c8 = uVar6;
    uStack_1c0 = uVar1;
    lStack_1b8 = lVar7;
    uStack_1b0 = uVar2;
    uStack_1a8 = uVar8;
    uStack_1a0 = uVar3;
    uStack_198 = uVar9;
    uStack_190 = uVar19;
    uStack_188 = uVar18;
    uStack_180 = uVar4;
    uStack_178 = uVar10;
    uStack_170 = uVar5;
    uStack_168 = uVar11;
    bStack_160 = bVar12;
    FUN_1015f8b2c(&uStack_1d0,&uStack_250);
    puVar14 = &uStack_150;
    FUN_1015fe14c(puVar14,0x112db95a8,&UNK_10d96b190);
    uStack_e0 = uVar15;
    uStack_d8 = uVar6;
    uStack_d0 = uVar1;
    lStack_c8 = lVar7;
    uStack_c0 = uVar2;
    uStack_b8 = uVar8;
    uStack_b0 = uVar3;
    uStack_a8 = uVar9;
    uStack_a0 = uVar19;
    uStack_98 = uVar18 & 0xcfffffffffffffff;
    uStack_90 = uVar4;
    uStack_88 = uVar10;
    uStack_80 = uVar5;
    uStack_78 = uVar11;
  }
  pcVar20 = *(code **)(param_4 + 0x198);
  func_0x0001015fdf2c();
  (*pcVar20)(&uStack_e0,&UNK_1103e7db0,puVar14,param_3,param_4);
  uVar19 = uStack_78;
  uVar11 = uStack_80;
  uVar10 = uStack_88;
  uVar9 = uStack_90;
  uVar18 = uStack_98;
  uVar8 = uStack_a0;
  uVar6 = uStack_a8;
  uVar5 = uStack_b0;
  uVar4 = uStack_b8;
  uVar3 = uStack_c0;
  lVar7 = lStack_c8;
  uVar2 = uStack_d0;
  uVar1 = uStack_d8;
  uVar15 = uStack_e0;
  if (unaff_x21 == 0) {
    uStack_248 = uStack_d8;
    uStack_250 = uStack_e0;
    lStack_238 = lStack_c8;
    uStack_240 = uStack_d0;
    uStack_228 = uStack_b8;
    uStack_230 = uStack_c0;
    uStack_218 = uStack_a8;
    uStack_220 = uStack_b0;
    uStack_1f8 = uStack_88;
    uStack_200 = uStack_90;
    uStack_1e8 = uStack_78;
    uStack_1f0 = uStack_80;
    uStack_208 = uStack_98;
    uStack_210 = uStack_a0;
    if (lStack_c8 != 0) {
      if (bVar13 && uVar17 == 0xff) {
        uStack_188 = uStack_98;
        uStack_190 = uStack_a0;
        uStack_178 = uStack_88;
        uStack_180 = uStack_90;
        uStack_168 = uStack_78;
        uStack_170 = uStack_80;
        uStack_1c8 = uStack_d8;
        uStack_1d0 = uStack_e0;
        lStack_1b8 = lStack_c8;
        uStack_1c0 = uStack_d0;
        uStack_1a8 = uStack_b8;
        uStack_1b0 = uStack_c0;
        uStack_198 = uStack_a8;
        uStack_1a0 = uStack_b0;
        func_0x0001015f8b60(&uStack_1d0,&uStack_150);
      }
      else {
        pcVar20 = *(code **)(param_4 + 8);
        uStack_188 = uStack_98;
        uStack_190 = uStack_a0;
        uStack_178 = uStack_88;
        uStack_180 = uStack_90;
        uStack_168 = uStack_78;
        uStack_170 = uStack_80;
        uStack_1c8 = uStack_d8;
        uStack_1d0 = uStack_e0;
        lStack_1b8 = lStack_c8;
        uStack_1c0 = uStack_d0;
        uStack_1a8 = uStack_b8;
        uStack_1b0 = uStack_c0;
        uStack_198 = uStack_a8;
        uStack_1a0 = uStack_b0;
        func_0x0001015f8b60(&uStack_1d0,&uStack_150);
        (*pcVar20)(param_3,param_4);
      }
      FUN_1015fe14c(&uStack_e0,0x112db95a8,&UNK_10d96b190);
      uStack_188 = param_1[9];
      uStack_190 = param_1[8];
      uStack_178 = param_1[0xb];
      uStack_180 = param_1[10];
      uStack_168 = param_1[0xd];
      uStack_170 = param_1[0xc];
      bStack_160 = *(byte *)(param_1 + 0xe);
      uStack_1c8 = param_1[1];
      uStack_1d0 = *param_1;
      lStack_1b8 = param_1[3];
      uStack_1c0 = param_1[2];
      uStack_1a8 = param_1[5];
      uStack_1b0 = param_1[4];
      uStack_198 = param_1[7];
      uStack_1a0 = param_1[6];
      param_1[1] = uVar1;
      *param_1 = uVar15;
      param_1[3] = lVar7;
      param_1[2] = uVar2;
      param_1[5] = uVar4;
      param_1[4] = uVar3;
      param_1[7] = uVar6;
      param_1[6] = uVar5;
      param_1[8] = uVar8;
      param_1[9] = uVar18 & 0xcfffffffffffffff | 0x2000000000000000;
      param_1[0xb] = uVar10;
      param_1[10] = uVar9;
      param_1[0xd] = uVar19;
      param_1[0xc] = uVar11;
      *(undefined1 *)(param_1 + 0xe) = 1;
      uVar15 = 0x112db3fe0;
      puVar16 = &UNK_10d95e560;
      puVar14 = &uStack_1d0;
      goto LAB_1015fa514;
    }
  }
  uVar15 = 0x112db95a8;
  puVar16 = &UNK_10d96b190;
  puVar14 = &uStack_e0;
LAB_1015fa514:
  FUN_1015fe14c(puVar14,uVar15,puVar16);
  return;
}



/* Entry: 1015fa6bc; end: 1015fa9a7;  */

/* WARNING: Removing unreachable block (ram,0x0001015fa8d4) */

void FUN_1015fa6bc(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  byte bVar9;
  bool bVar10;
  long *plVar11;
  undefined8 uVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  long unaff_x21;
  code *pcVar16;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
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
  byte bStack_120;
  long alStack_110 [10];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long lStack_80;
  
  lStack_80 = 0;
  lStack_98 = 0;
  lStack_a0 = 0;
  lStack_88 = 0;
  lStack_90 = 0;
  lStack_b8 = 0;
  lStack_c0 = 0;
  lStack_a8 = 0;
  lStack_b0 = 0;
  bVar9 = *(byte *)(param_1 + 0xe);
  bVar10 = ((param_1[9] ^ 0xffffffffffffffffU) & 0x3000000000000000) == 0;
  uVar14 = (uint)bVar9;
  plVar11 = param_1;
  if ((!bVar10 || uVar14 != 0xff) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar14 & 0x3f) << 2) == 7)) {
    lVar1 = *param_1;
    lVar5 = param_1[1];
    lVar2 = param_1[2];
    lVar6 = param_1[3];
    lVar3 = param_1[4];
    lVar7 = param_1[5];
    lVar4 = param_1[6];
    lVar8 = param_1[7];
    lVar15 = param_1[8];
    lStack_140 = param_1[10];
    lStack_148 = param_1[9];
    lStack_130 = param_1[0xc];
    lStack_138 = param_1[0xb];
    lStack_128 = param_1[0xd];
    alStack_110[8] = 0;
    alStack_110[5] = 0;
    alStack_110[4] = 0;
    alStack_110[7] = 0;
    alStack_110[6] = 0;
    alStack_110[1] = 0;
    alStack_110[0] = 0;
    alStack_110[3] = 0;
    alStack_110[2] = 0;
    lStack_190 = lVar1;
    lStack_188 = lVar5;
    lStack_180 = lVar2;
    lStack_178 = lVar6;
    lStack_170 = lVar3;
    lStack_168 = lVar7;
    lStack_160 = lVar4;
    lStack_158 = lVar8;
    lStack_150 = lVar15;
    bStack_120 = bVar9;
    FUN_1015f8b2c(&lStack_190,&lStack_210);
    plVar11 = alStack_110;
    FUN_1015fe14c(plVar11,0x112db95b0,&UNK_10d96b198);
    lStack_c0 = lVar1;
    lStack_b8 = lVar5;
    lStack_b0 = lVar2;
    lStack_a8 = lVar6;
    lStack_a0 = lVar3;
    lStack_98 = lVar7;
    lStack_90 = lVar4;
    lStack_88 = lVar8;
    lStack_80 = lVar15;
  }
  pcVar16 = *(code **)(param_4 + 0x198);
  func_0x0001015fdf6c();
  (*pcVar16)(&lStack_c0,&UNK_1103e7ab0,plVar11,param_3,param_4);
  lVar15 = lStack_80;
  lVar8 = lStack_88;
  lVar7 = lStack_90;
  lVar6 = lStack_98;
  lVar5 = lStack_a0;
  lVar4 = lStack_a8;
  lVar3 = lStack_b0;
  lVar2 = lStack_b8;
  lVar1 = lStack_c0;
  if (unaff_x21 == 0) {
    lStack_208 = lStack_b8;
    lStack_210 = lStack_c0;
    lStack_1f8 = lStack_a8;
    lStack_200 = lStack_b0;
    lStack_1e8 = lStack_98;
    lStack_1f0 = lStack_a0;
    lStack_1d8 = lStack_88;
    lStack_1e0 = lStack_90;
    lStack_1d0 = lStack_80;
    if (lStack_c0 != 0) {
      if (bVar10 && uVar14 == 0xff) {
        lStack_168 = lStack_98;
        lStack_170 = lStack_a0;
        lStack_158 = lStack_88;
        lStack_160 = lStack_90;
        lStack_150 = lStack_80;
        lStack_188 = lStack_b8;
        lStack_190 = lStack_c0;
        lStack_178 = lStack_a8;
        lStack_180 = lStack_b0;
        func_0x0001015f8b9c(&lStack_190,alStack_110);
      }
      else {
        pcVar16 = *(code **)(param_4 + 8);
        lStack_168 = lStack_98;
        lStack_170 = lStack_a0;
        lStack_158 = lStack_88;
        lStack_160 = lStack_90;
        lStack_150 = lStack_80;
        lStack_188 = lStack_b8;
        lStack_190 = lStack_c0;
        lStack_178 = lStack_a8;
        lStack_180 = lStack_b0;
        func_0x0001015f8b9c(&lStack_190,alStack_110);
        (*pcVar16)(param_3,param_4);
      }
      FUN_1015fe14c(&lStack_c0,0x112db95b0,&UNK_10d96b198);
      lStack_148 = param_1[9];
      lStack_150 = param_1[8];
      lStack_138 = param_1[0xb];
      lStack_140 = param_1[10];
      lStack_128 = param_1[0xd];
      lStack_130 = param_1[0xc];
      bStack_120 = *(byte *)(param_1 + 0xe);
      lStack_188 = param_1[1];
      lStack_190 = *param_1;
      lStack_178 = param_1[3];
      lStack_180 = param_1[2];
      lStack_168 = param_1[5];
      lStack_170 = param_1[4];
      lStack_158 = param_1[7];
      lStack_160 = param_1[6];
      param_1[1] = lVar2;
      *param_1 = lVar1;
      param_1[3] = lVar4;
      param_1[2] = lVar3;
      param_1[5] = lVar6;
      param_1[4] = lVar5;
      param_1[7] = lVar8;
      param_1[6] = lVar7;
      param_1[8] = lVar15;
      param_1[9] = 0x3000000000000000;
      *(undefined1 *)(param_1 + 0xe) = 1;
      uVar12 = 0x112db3fe0;
      puVar13 = &UNK_10d95e560;
      plVar11 = &lStack_190;
      goto LAB_1015fa838;
    }
  }
  uVar12 = 0x112db95b0;
  puVar13 = &UNK_10d96b198;
  plVar11 = &lStack_c0;
LAB_1015fa838:
  FUN_1015fe14c(plVar11,uVar12,puVar13);
  return;
}



/* Entry: 1015fa9a8; end: 1015fac63;  */

/* WARNING: Removing unreachable block (ram,0x0001015fab9c) */

void FUN_1015fa9a8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  bool bVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  uint uVar13;
  long unaff_x21;
  code *pcVar14;
  undefined8 uStack_1f0;
  long lStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_170;
  long lStack_168;
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
  byte bStack_100;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  lStack_a8 = 0;
  uStack_b0 = 0;
  uStack_98 = 0;
  uStack_a0 = 0;
  bVar8 = *(byte *)(param_1 + 0xe);
  bVar9 = ((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar13 = (uint)bVar8;
  puVar10 = param_1;
  if ((!bVar9 || uVar13 != 0xff) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (uVar13 & 0x3f) << 2) == 8)) {
    uVar11 = *param_1;
    lVar4 = param_1[1];
    uVar1 = param_1[2];
    uVar5 = param_1[3];
    uVar2 = param_1[4];
    uVar6 = param_1[5];
    uVar3 = param_1[6];
    uVar7 = param_1[7];
    uStack_130 = param_1[8];
    uStack_138 = param_1[7];
    uStack_120 = param_1[10];
    uStack_128 = param_1[9];
    uStack_110 = param_1[0xc];
    uStack_118 = param_1[0xb];
    uStack_108 = param_1[0xd];
    uStack_c8 = 0;
    uStack_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_d8 = 0;
    uStack_e0 = 0;
    uStack_170 = uVar11;
    lStack_168 = lVar4;
    uStack_160 = uVar1;
    uStack_158 = uVar5;
    uStack_150 = uVar2;
    uStack_148 = uVar6;
    uStack_140 = uVar3;
    bStack_100 = bVar8;
    FUN_1015f8b2c(&uStack_170,&uStack_1f0);
    puVar10 = &uStack_f0;
    FUN_1015fe14c(puVar10,0x112db95b8,&UNK_10d96b1a0);
    uStack_b0 = uVar11;
    lStack_a8 = lVar4;
    uStack_a0 = uVar1;
    uStack_98 = uVar5;
    uStack_90 = uVar2;
    uStack_88 = uVar6;
    uStack_80 = uVar3;
    uStack_78 = uVar7;
  }
  pcVar14 = *(code **)(param_4 + 0x198);
  func_0x0001015fdfac();
  (*pcVar14)(&uStack_b0,&UNK_1103e77e0,puVar10,param_3,param_4);
  uVar7 = uStack_78;
  uVar6 = uStack_80;
  uVar5 = uStack_88;
  uVar3 = uStack_90;
  uVar2 = uStack_98;
  uVar1 = uStack_a0;
  lVar4 = lStack_a8;
  uVar11 = uStack_b0;
  if (unaff_x21 == 0) {
    lStack_1e8 = lStack_a8;
    uStack_1f0 = uStack_b0;
    uStack_1d8 = uStack_98;
    uStack_1e0 = uStack_a0;
    uStack_1c8 = uStack_88;
    uStack_1d0 = uStack_90;
    uStack_1b8 = uStack_78;
    uStack_1c0 = uStack_80;
    if (lStack_a8 != 0) {
      if (bVar9 && uVar13 == 0xff) {
        lStack_168 = lStack_a8;
        uStack_170 = uStack_b0;
        uStack_158 = uStack_98;
        uStack_160 = uStack_a0;
        uStack_148 = uStack_88;
        uStack_150 = uStack_90;
        uStack_138 = uStack_78;
        uStack_140 = uStack_80;
        func_0x0001015f8bd8(&uStack_170,&uStack_f0);
      }
      else {
        pcVar14 = *(code **)(param_4 + 8);
        lStack_168 = lStack_a8;
        uStack_170 = uStack_b0;
        uStack_158 = uStack_98;
        uStack_160 = uStack_a0;
        uStack_148 = uStack_88;
        uStack_150 = uStack_90;
        uStack_138 = uStack_78;
        uStack_140 = uStack_80;
        func_0x0001015f8bd8(&uStack_170,&uStack_f0);
        (*pcVar14)(param_3,param_4);
      }
      FUN_1015fe14c(&uStack_b0,0x112db95b8,&UNK_10d96b1a0);
      uStack_128 = param_1[9];
      uStack_130 = param_1[8];
      uStack_118 = param_1[0xb];
      uStack_120 = param_1[10];
      uStack_108 = param_1[0xd];
      uStack_110 = param_1[0xc];
      bStack_100 = *(byte *)(param_1 + 0xe);
      lStack_168 = param_1[1];
      uStack_170 = *param_1;
      uStack_158 = param_1[3];
      uStack_160 = param_1[2];
      uStack_148 = param_1[5];
      uStack_150 = param_1[4];
      uStack_138 = param_1[7];
      uStack_140 = param_1[6];
      param_1[1] = lVar4;
      *param_1 = uVar11;
      param_1[3] = uVar2;
      param_1[2] = uVar1;
      param_1[5] = uVar5;
      param_1[4] = uVar3;
      param_1[7] = uVar7;
      param_1[6] = uVar6;
      param_1[9] = 0;
      *(undefined1 *)(param_1 + 0xe) = 2;
      uVar11 = 0x112db3fe0;
      puVar12 = &UNK_10d95e560;
      puVar10 = &uStack_170;
      goto LAB_1015fab10;
    }
  }
  uVar11 = 0x112db95b8;
  puVar12 = &UNK_10d96b1a0;
  puVar10 = &uStack_b0;
LAB_1015fab10:
  FUN_1015fe14c(puVar10,uVar11,puVar12);
  return;
}



/* Entry: 1015fac64; end: 1015faecb;  */

void FUN_1015fac64(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  long lVar4;
  long unaff_x20;
  long unaff_x21;
  uint uVar5;
  code *pcVar6;
  long lStack_70;
  undefined1 uStack_68;
  
  bVar3 = ((*(ulong *)(unaff_x20 + 0x48) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  uVar5 = (uint)*(byte *)(unaff_x20 + 0x70);
  uVar2 = (uint)(*(ulong *)(unaff_x20 + 0x48) >> 0x20);
  if (bVar3 || uVar5 != 0xff) {
    uVar1 = uVar2 >> 0x1c & 0xfffffc03 | (uVar5 & 0x3f) << 2;
    if (uVar1 < 2) {
      if (uVar1 == 0) {
        FUN_1015faecc();
      }
      else {
        if (uVar1 != 1) goto LAB_1015facb4;
        FUN_1015faf78();
      }
    }
    else if (uVar1 == 2) {
      FUN_1015fb030();
    }
    else {
      if (uVar1 != 3) goto LAB_1015facb4;
      FUN_1015fb0e8();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
LAB_1015facb4:
  FUN_1015fb1a0();
  if (unaff_x21 == 0) {
    lVar4 = unaff_x20;
    FUN_1015fb240();
    if (*(long *)(unaff_x20 + 0x78) != 0) {
      uStack_68 = *(undefined1 *)(unaff_x20 + 0x80);
      pcVar6 = *(code **)(param_3 + 0x80);
      lStack_70 = *(long *)(unaff_x20 + 0x78);
      func_0x0001015fbe6c();
      (*pcVar6)(&lStack_70,7,&UNK_1103e7460,lVar4,param_2,param_3);
    }
    if (bVar3 || uVar5 != 0xff) {
      uVar2 = uVar2 >> 0x1c & 0xfffffc03 | (uVar5 & 0x3f) << 2;
      if (uVar2 < 6) {
        if (uVar2 == 4) {
          FUN_1015fb2c8();
        }
        else if (uVar2 == 5) {
          FUN_1015fb380();
        }
      }
      else if (uVar2 == 6) {
        FUN_1015fb428();
      }
      else if (uVar2 == 7) {
        FUN_1015fb4e8();
      }
      else if (uVar2 == 8) {
        FUN_1015fb59c();
      }
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                        param_2,param_3);
  }
  return;
}



/* Entry: 1015faecc; end: 1015faf77;  */

void FUN_1015faecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03) == 0 &&
      (*(byte *)(param_1 + 0xe) & 0x3f) == 0)) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d53a0();
    (*pcVar1)(&uStack_60,1,&UNK_1103e83c8,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015faf78);
  (*pcVar1)();
}



/* Entry: 1015faf78; end: 1015fb02f;  */

void FUN_1015faf78(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 1
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdeac();
    (*pcVar1)(&uStack_80,2,&UNK_1103e8040,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb030);
  (*pcVar1)();
}



/* Entry: 1015fb030; end: 1015fb0e7;  */

void FUN_1015fb030(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 2
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdeac();
    (*pcVar1)(&uStack_80,3,&UNK_1103e8040,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb0e8);
  (*pcVar1)();
}



/* Entry: 1015fb0e8; end: 1015fb19f;  */

void FUN_1015fb0e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 3
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdeac();
    (*pcVar1)(&uStack_80,4,&UNK_1103e8040,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb1a0);
  (*pcVar1)();
}



/* Entry: 1015fb1a0; end: 1015fb23f;  */

void FUN_1015fb1a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_90 = *(ulong *)(param_1 + 0xa8);
  if ((uStack_90 & 0xff) != 3) {
    uStack_98 = *(undefined8 *)(param_1 + 0xa0);
    uStack_a0 = *(undefined8 *)(param_1 + 0x98);
    uStack_80 = *(undefined8 *)(param_1 + 0xb8);
    uStack_88 = *(undefined8 *)(param_1 + 0xb0);
    uStack_70 = *(undefined8 *)(param_1 + 200);
    uStack_78 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xd8);
    uStack_68 = *(undefined8 *)(param_1 + 0xd0);
    uStack_50 = *(undefined8 *)(param_1 + 0xe8);
    uStack_58 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fe02c();
    (*pcVar1)(&uStack_a0,5,&UNK_110673aa8,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015fb240; end: 1015fb2c7;  */

void FUN_1015fb240(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0xf0);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0x100);
    uStack_50 = *(undefined8 *)(param_1 + 0xf8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1015fb2c8; end: 1015fb37f;  */

void FUN_1015fb2c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_50 = param_1[6];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 4
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdeec();
    (*pcVar1)(&uStack_80,8,&UNK_1103e7628,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb380);
  (*pcVar1)();
}



/* Entry: 1015fb380; end: 1015fb427;  */

void FUN_1015fb380(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 5
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015fc7a0();
    (*pcVar1)(&uStack_50,9,&UNK_1103e71d0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb428);
  (*pcVar1)();
}



/* Entry: 1015fb428; end: 1015fb4e7;  */

void FUN_1015fb428(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_68 = param_1[9];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  if (((((uStack_68 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)(uStack_68 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 6)) {
    uStack_68 = uStack_68 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdf2c();
    (*pcVar1)(&uStack_b0,10,&UNK_1103e7db0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb4e8);
  (*pcVar1)();
}



/* Entry: 1015fb4e8; end: 1015fb59b;  */

void FUN_1015fb4e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 7
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdf6c();
    (*pcVar1)(&uStack_90,0xb,&UNK_1103e7ab0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb59c);
  (*pcVar1)();
}



/* Entry: 1015fb59c; end: 1015fb64b;  */

void FUN_1015fb59c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  if (((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 0xe) != 0xff)) &&
     (((uint)((ulong)param_1[9] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2) == 8
     )) {
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfac();
    (*pcVar1)(&uStack_80,0xc,&UNK_1103e77e0,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015fb64c);
  (*pcVar1)();
}



/* Entry: 1015fb64c; end: 1015fb6cf;  */

ulong FUN_1015fb64c(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  undefined1 auStack_5c8 [88];
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
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined8 uStack_42f;
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
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  char cStack_338;
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
  undefined1 uStack_200;
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
  undefined1 uStack_180;
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
  undefined1 uStack_100;
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
  undefined1 uStack_80;
  
  uVar9 = 0;
  uStack_3d8 = param_1[9];
  uStack_3e0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_3e8 = param_1[7];
  uStack_3f0 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_3c8 = param_1[0xb];
  uStack_3d0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_418 = param_1[1];
  uStack_420 = *param_1;
  uStack_408 = param_1[3];
  uStack_410 = param_1[2];
  uStack_3f8 = param_1[5];
  uStack_400 = param_1[4];
  uStack_268 = param_2[1];
  uStack_270 = *param_2;
  uStack_480 = param_2[3];
  uStack_488 = param_2[2];
  uStack_248 = param_2[5];
  uStack_250 = param_2[4];
  uStack_238 = param_2[7];
  uStack_240 = param_2[6];
  uStack_258 = param_2[3];
  uStack_260 = param_2[2];
  uStack_470 = param_2[5];
  uStack_478 = param_2[4];
  uStack_490 = param_2[1];
  uStack_498 = *param_2;
  uStack_350 = param_2[0xb];
  uStack_358 = param_2[10];
  uStack_208 = param_2[0xd];
  uStack_210 = param_2[0xc];
  uStack_370 = param_2[7];
  uStack_468 = param_2[6];
  uStack_228 = param_2[9];
  uStack_230 = param_2[8];
  uStack_360 = param_2[9];
  uStack_368 = param_2[8];
  uStack_218 = param_2[0xb];
  uStack_220 = param_2[10];
  uStack_3b8 = param_1[0xd];
  uStack_3c0 = param_1[0xc];
  uStack_180 = (undefined1)param_1[0xe];
  uStack_200 = (undefined1)param_2[0xe];
  uStack_3b0 = CONCAT71(uStack_3b0._1_7_,(char)param_1[0xe]);
  cStack_338 = (char)param_2[0xe];
  uStack_340 = (undefined1)param_2[0xd];
  uStack_33f = (undefined7)(param_2[0xd] >> 8);
  uStack_348 = (undefined1)param_2[0xc];
  uStack_347 = (undefined7)(param_2[0xc] >> 8);
  bVar1 = ((uStack_360 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  uStack_3a8 = uStack_498;
  uStack_3a0 = uStack_490;
  uStack_398 = uStack_488;
  uStack_390 = uStack_480;
  uStack_388 = uStack_478;
  uStack_380 = uStack_470;
  uStack_378 = uStack_468;
  if ((((uStack_3d8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && ((char)param_1[0xe] == -1))
  {
    if (bVar1 || cStack_338 != -1) {
LAB_1015fc044:
      uStack_42f = CONCAT17(cStack_338,uStack_33f);
      uStack_437 = uStack_347;
      uStack_430 = uStack_340;
      uStack_4a0 = uStack_3b0;
      uStack_510 = uStack_420;
      uStack_508 = uStack_418;
      uStack_500 = uStack_410;
      uStack_4f8 = uStack_408;
      uStack_4f0 = uStack_400;
      uStack_4e8 = uStack_3f8;
      uStack_4e0 = uStack_3f0;
      uStack_4d8 = uStack_3e8;
      uStack_4d0 = uStack_3e0;
      uStack_4c8 = uStack_3d8;
      uStack_4c0 = uStack_3d0;
      uStack_4b8 = uStack_3c8;
      uStack_4b0 = uStack_3c0;
      uStack_4a8 = uStack_3b8;
      uStack_460 = uStack_370;
      uStack_458 = uStack_368;
      uStack_450 = uStack_360;
      uStack_448 = uStack_358;
      uStack_440 = uStack_350;
      uStack_438 = uStack_348;
      FUN_1015f8de8(&uStack_1f0,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      FUN_1015f8de8(&uStack_270,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      uVar5 = 0x112db9568;
      puVar6 = &UNK_10d96b188;
LAB_1015fc364:
      FUN_1015fe14c(&uStack_510,uVar5,puVar6);
    }
    else {
      uStack_4c8 = param_1[9];
      uStack_4d0 = param_1[8];
      uStack_4b8 = param_1[0xb];
      uStack_4c0 = param_1[10];
      uStack_4a8 = param_1[0xd];
      uStack_4b0 = param_1[0xc];
      uStack_4a0 = CONCAT71(uStack_4a0._1_7_,(char)param_1[0xe]);
      uStack_508 = param_1[1];
      uStack_510 = *param_1;
      uStack_4f8 = param_1[3];
      uStack_500 = param_1[2];
      uStack_4e8 = param_1[5];
      uStack_4f0 = param_1[4];
      uStack_4d8 = param_1[7];
      uStack_4e0 = param_1[6];
      FUN_1015f8de8(&uStack_1f0,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      FUN_1015f8de8(&uStack_270,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      FUN_1015fe14c(&uStack_510,0x112db3fe0,&UNK_10d95e560);
LAB_1015fc1b0:
      uStack_2a8 = param_1[0x18];
      uStack_2b0 = param_1[0x17];
      uStack_298 = param_1[0x1a];
      uStack_2a0 = param_1[0x19];
      uStack_288 = param_1[0x1c];
      uStack_290 = param_1[0x1b];
      uStack_280 = param_1[0x1d];
      uStack_2c8 = param_1[0x14];
      uStack_2d0 = param_1[0x13];
      uStack_2b8 = param_1[0x16];
      uStack_2c0 = param_1[0x15];
      uStack_308 = param_2[0x18];
      uStack_310 = param_2[0x17];
      uStack_2f8 = param_2[0x1a];
      uStack_300 = param_2[0x19];
      uStack_2e8 = param_2[0x1c];
      uStack_2f0 = param_2[0x1b];
      uStack_2e0 = param_2[0x1d];
      uStack_328 = param_2[0x14];
      uStack_330 = param_2[0x13];
      uStack_318 = param_2[0x16];
      uStack_320 = param_2[0x15];
      uStack_3f8 = param_1[0x18];
      uStack_400 = param_1[0x17];
      uStack_3e8 = param_1[0x1a];
      uStack_3f0 = param_1[0x19];
      uStack_3d8 = param_1[0x1c];
      uStack_3e0 = param_1[0x1b];
      uStack_3d0 = param_1[0x1d];
      uStack_418 = param_1[0x14];
      uStack_420 = param_1[0x13];
      uStack_408 = param_1[0x16];
      uStack_410 = param_1[0x15];
      uStack_490 = param_2[0x18];
      uStack_498 = param_2[0x17];
      uStack_480 = param_2[0x1a];
      uStack_488 = param_2[0x19];
      uStack_470 = param_2[0x1c];
      uStack_478 = param_2[0x1b];
      uStack_468 = param_2[0x1d];
      uStack_3c0 = param_2[0x14];
      uStack_3c8 = param_2[0x13];
      uStack_3b0 = param_2[0x16];
      uStack_3b8 = param_2[0x15];
      uStack_3a8 = uStack_498;
      uStack_3a0 = uStack_490;
      uStack_398 = uStack_488;
      uStack_390 = uStack_480;
      uStack_388 = uStack_478;
      uStack_380 = uStack_470;
      uStack_378 = uStack_468;
      if ((char)uStack_410 == '\x03') {
        if ((uStack_3b8 & 0xff) != 3) {
LAB_1015fc2ec:
          uStack_510 = uStack_420;
          uStack_508 = uStack_418;
          uStack_500 = uStack_410;
          uStack_4f8 = uStack_408;
          uStack_4f0 = uStack_400;
          uStack_4e8 = uStack_3f8;
          uStack_4e0 = uStack_3f0;
          uStack_4d8 = uStack_3e8;
          uStack_4d0 = uStack_3e0;
          uStack_4c8 = uStack_3d8;
          uStack_4c0 = uStack_3d0;
          uStack_4b8 = uStack_3c8;
          uStack_4b0 = uStack_3c0;
          uStack_4a8 = uStack_3b8;
          uStack_4a0 = uStack_3b0;
          FUN_1015f8de8(&uStack_2d0,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
          FUN_1015f8de8(&uStack_330,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
          uVar5 = 0x112db94e8;
          puVar6 = &UNK_10d96aef8;
          goto LAB_1015fc364;
        }
        uStack_4e8 = param_1[0x18];
        uStack_4f0 = param_1[0x17];
        uStack_4d8 = param_1[0x1a];
        uStack_4e0 = param_1[0x19];
        uStack_4c8 = param_1[0x1c];
        uStack_4d0 = param_1[0x1b];
        uStack_4c0 = param_1[0x1d];
        uStack_508 = param_1[0x14];
        uStack_510 = param_1[0x13];
        uStack_4f8 = param_1[0x16];
        uStack_500 = param_1[0x15];
        FUN_1015f8de8(&uStack_2d0,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015f8de8(&uStack_330,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015fe14c(&uStack_510,0x112db3fd8,&UNK_10d96aef0);
      }
      else {
        if ((uStack_3b8 & 0xff) == 3) goto LAB_1015fc2ec;
        uStack_548 = param_2[0x18];
        uStack_550 = param_2[0x17];
        uStack_538 = param_2[0x1a];
        uStack_540 = param_2[0x19];
        uStack_528 = param_2[0x1c];
        uStack_530 = param_2[0x1b];
        uStack_520 = param_2[0x1d];
        uStack_568 = param_2[0x14];
        uStack_570 = param_2[0x13];
        uStack_558 = param_2[0x16];
        uStack_560 = param_2[0x15];
        uStack_618 = param_1[0x18];
        uStack_620 = param_1[0x17];
        uStack_608 = param_1[0x1a];
        uStack_610 = param_1[0x19];
        uStack_5f8 = param_1[0x1c];
        uStack_600 = param_1[0x1b];
        uStack_5f0 = param_1[0x1d];
        uStack_638 = param_1[0x14];
        uStack_640 = param_1[0x13];
        uStack_628 = param_1[0x16];
        uStack_630 = param_1[0x15];
        uStack_510 = uStack_570;
        uStack_508 = uStack_568;
        uStack_500 = uStack_560;
        uStack_4f8 = uStack_558;
        uStack_4f0 = uStack_550;
        uStack_4e8 = uStack_548;
        uStack_4e0 = uStack_540;
        uStack_4d8 = uStack_538;
        uStack_4d0 = uStack_530;
        uStack_4c8 = uStack_528;
        uStack_4c0 = uStack_520;
        FUN_1015f8de8(&uStack_2d0,auStack_5c8,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015f8de8(&uStack_330,auStack_5c8,0x112db3fd8,&UNK_10d96aef0);
        func_0x00010363a074(&uStack_640,&uStack_510);
        FUN_1015fe14c(&uStack_570,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015fe14c(&uStack_420,0x112db3fd8,&UNK_10d96aef0);
        if ((uVar9 & 1) == 0) goto LAB_1015fc36c;
      }
      uVar11 = param_1[0x1f];
      uVar9 = param_1[0x1e];
      uVar7 = param_1[0x20];
      uVar12 = param_2[0x1f];
      uVar10 = param_2[0x1e];
      uVar8 = param_2[0x20];
      uStack_570 = uVar10;
      uStack_568 = uVar12;
      uStack_560 = uVar8;
      uStack_420 = uVar9;
      uStack_418 = uVar11;
      uStack_410 = uVar7;
      if ((uVar9 & 0xff) == 2) {
        if ((uVar10 & 0xff) == 2) {
          FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
LAB_1015fc4dc:
          func_0x000101556278(uVar9,uVar11,uVar7);
          if ((char)param_2[0x10] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001015fc514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10d96aedc)[param_2[0xf]] * 4 + 0x1015fc518))();
            return uVar9;
          }
          if (param_1[0xf] == param_2[0xf]) {
            uVar9 = param_1[0x11];
            FUN_100e25fcc(uVar9,param_1[0x12],param_2[0x11],param_2[0x12]);
            uVar2 = (uint)uVar9;
            goto LAB_1015fc370;
          }
          goto LAB_1015fc36c;
        }
LAB_1015fc528:
        FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
        FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar9,uVar11,uVar7);
        uVar9 = uVar10;
        uVar11 = uVar12;
        uVar7 = uVar8;
      }
      else {
        if ((uVar10 & 0xff) == 2) goto LAB_1015fc528;
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) == 0) {
          FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          uVar4 = uVar11;
          FUN_100e25fcc(uVar11,uVar7,uVar12,uVar8);
          func_0x000101556278(uVar10,uVar12,uVar8);
          if ((uVar4 & 1) != 0) goto LAB_1015fc4dc;
        }
        else {
          FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar10,uVar12,uVar8);
        }
      }
      func_0x000101556278(uVar9,uVar11,uVar7);
    }
  }
  else {
    if (!bVar1 && cStack_338 == -1) goto LAB_1015fc044;
    uStack_4c8 = param_2[9];
    uStack_4d0 = param_2[8];
    uStack_4b8 = param_2[0xb];
    uStack_4c0 = param_2[10];
    uStack_4a8 = param_2[0xd];
    uStack_4b0 = param_2[0xc];
    uStack_80 = (undefined1)param_2[0xe];
    uStack_4a0 = CONCAT71(uStack_4a0._1_7_,uStack_80);
    uStack_508 = param_2[1];
    uStack_510 = *param_2;
    uStack_4f8 = param_2[3];
    uStack_500 = param_2[2];
    uStack_4e8 = param_2[5];
    uStack_4f0 = param_2[4];
    uStack_4d8 = param_2[7];
    uStack_4e0 = param_2[6];
    uStack_128 = param_1[9];
    uStack_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    uStack_108 = param_1[0xd];
    uStack_110 = param_1[0xc];
    uStack_100 = (undefined1)param_1[0xe];
    uStack_168 = param_1[1];
    uStack_170 = *param_1;
    uStack_158 = param_1[3];
    uStack_160 = param_1[2];
    uStack_148 = param_1[5];
    uStack_150 = param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    uStack_f0 = uStack_510;
    uStack_e8 = uStack_508;
    uStack_e0 = uStack_500;
    uStack_d8 = uStack_4f8;
    uStack_d0 = uStack_4f0;
    uStack_c8 = uStack_4e8;
    uStack_c0 = uStack_4e0;
    uStack_b8 = uStack_4d8;
    uStack_b0 = uStack_4d0;
    uStack_a8 = uStack_4c8;
    uStack_a0 = uStack_4c0;
    uStack_98 = uStack_4b8;
    uStack_90 = uStack_4b0;
    uStack_88 = uStack_4a8;
    FUN_1015f8de8(&uStack_1f0,&uStack_640,0x112db3fe0,&UNK_10d95e560);
    FUN_1015f8de8(&uStack_270,&uStack_640,0x112db3fe0,&UNK_10d95e560);
    puVar3 = &uStack_170;
    FUN_1015fba8c(puVar3,&uStack_f0);
    FUN_1015fe14c(&uStack_510,0x112db3fe0,&UNK_10d95e560);
    FUN_1015fe14c(&uStack_420,0x112db3fe0,&UNK_10d95e560);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1015fc1b0;
  }
LAB_1015fc36c:
  uVar2 = 0;
LAB_1015fc370:
  return (ulong)(uVar2 & 1);
}



/* Entry: 1015fb6d0; end: 1015fb6ff;  */

undefined1  [16] FUN_1015fb6d0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x88);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x88),
                      *(undefined8 *)(unaff_x20 + 0x90));
  return auVar1;
}



/* Entry: 1015fb700; end: 1015fb733;  */

void FUN_1015fb700(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90));
  *(undefined8 *)(unaff_x20 + 0x88) = param_1;
  *(undefined8 *)(unaff_x20 + 0x90) = param_2;
  return;
}



/* Entry: 1015fb734; end: 1015fb747;  */

undefined1  [16] FUN_1015fb734(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x88;
  auVar1._0_8_ = 0x1015fb744;
  return auVar1;
}



/* Entry: 1015fb748; end: 1015fb75b;  */

void FUN_1015fb748(void)

{
  FUN_1015f929c();
  return;
}



/* Entry: 1015fb75c; end: 1015fb7c3;  */

void FUN_1015fb75c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_148 [264];
  
  func_0x000107c610b4(auStack_148);
  FUN_1015fac64(param_1,param_2,param_3);
  return;
}



/* Entry: 1015fb7c4; end: 1015fb7c7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015fb7c4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015fb7c8; end: 1015fb7ff;  */

uint FUN_1015fb7c8(long param_1,long param_2)

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
  FUN_1015fde2c();
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



/* Entry: 1015fb800; end: 1015fb84f;  */

uint FUN_1015fb800(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_128,param_1,0x108);
  func_0x000107c610b4(auStack_230);
  FUN_1015fbeac(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 1015fb850; end: 1015fb8ef;  */

/* WARNING: Possible PIC construction at 0x0001015fb89c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fb8ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015fb8a0) */
/* WARNING: Removing unreachable block (ram,0x0001015fb8b0) */

void FUN_1015fb850(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db9508 != -1) {
    func_0x000107c61568(0x112db9508,FUN_1015f9254);
  }
  uVar5 = uRam0000000113801370;
  uVar4 = uRam0000000113801368;
  uVar3 = uRam0000000113801360;
  uVar2 = uRam0000000113801358;
  uVar1 = uRam0000000113801350;
  *param_1 = uRam0000000113801348;
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



/* Entry: 1015fb8f0; end: 1015fb92b;  */

void FUN_1015fb8f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db9548;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db9548,&UNK_10d96b178);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015fb92c; end: 1015fba37;  */

void FUN_1015fb92c(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_180 [72];
  undefined1 auStack_138 [264];
  
  func_0x000107c610b4(auStack_138);
  func_0x000107c6068c(auStack_180,0);
  func_0x000107c5fa50(auStack_180,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015fba38; end: 1015fba8b;  */

uint FUN_1015fba38(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_230 [264];
  undefined1 auStack_128 [264];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_230,param_1,0x108);
  func_0x000107c610b4(auStack_128,param_2,0x108);
  FUN_1015fbeac(auStack_230,auStack_128);
  return uVar1 & 1;
}



/* Entry: 1015fba8c; end: 1015fbe2b;  */

/* WARNING: Possible PIC construction at 0x0001015fbc30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015fbc34) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015fba8c(undefined8 *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  ulong uVar12;
  byte **ppbVar13;
  byte *pbVar14;
  byte *pbVar15;
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
  long lStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  long lStack_130;
  long lStack_128;
  long lStack_120;
  long lStack_118;
  long lStack_110;
  ulong uStack_108;
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  long lStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  double dStack_c8;
  double dStack_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  pbVar11 = (byte *)*param_1;
  pbStack_d8 = (byte *)param_1[1];
  pbVar24 = (byte *)param_1[2];
  dStack_c8 = (double)param_1[3];
  dStack_c0 = (double)param_1[4];
  uVar12 = param_1[5];
  uStack_b0 = param_1[6];
  uVar7 = (uint)((ulong)param_1[9] >> 0x3c) & 3 | (*(byte *)(param_1 + 0xe) & 0x3f) << 2;
  pbStack_e0 = pbVar11;
  pbStack_d0 = pbVar24;
  uStack_b8 = uVar12;
  if (uVar7 < 4) {
    if (uVar7 < 2) {
      if (uVar7 == 0) {
        if (((uint)((ulong)param_2[9] >> 0x3c) & 3) == 0 && (*(byte *)(param_2 + 0xe) & 0x3f) == 0)
        {
          lVar23 = param_2[1];
          uVar12 = param_2[2];
          FUN_1016054a8(pbVar11,*param_2);
          pbVar9 = pbStack_d8;
          if (((ulong)pbVar11 & 1) == 0) {
            return (byte *)0x0;
          }
          goto code_r0x000100e25fcc;
        }
      }
      else if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 1
              ) goto LAB_1015fbd44;
    }
    else if (uVar7 == 2) {
      if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 2) {
LAB_1015fbd44:
        lStack_120 = param_2[6];
        lStack_148 = param_2[1];
        lStack_150 = *param_2;
        lStack_140 = param_2[2];
        lStack_138 = param_2[3];
        lStack_128 = param_2[5];
        lStack_130 = param_2[4];
        ppbVar13 = &pbStack_e0;
        FUN_101603264(ppbVar13,&lStack_150);
        uVar7 = (uint)ppbVar13;
        goto LAB_1015fbe04;
      }
    }
    else if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 3)
    goto LAB_1015fbd44;
  }
  else if (uVar7 < 6) {
    if (uVar7 == 4) {
      if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 4) {
        pbVar16 = (byte *)param_2[1];
        pbVar15 = (byte *)*param_2;
        if ((pbVar11 != pbVar15) || (pbStack_d8 != pbVar16)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
          )(pbVar11,pbStack_d8,pbVar15,pbVar16,0);
          return pbVar11;
        }
        if (((((((uint)pbVar24 ^ (uint)param_2[2]) & 1) == 0) && ((double)param_2[3] == dStack_c8))
            && ((double)param_2[4] == dStack_c0)) &&
           (FUN_100e25fcc(uVar12,uStack_b0,param_2[5],param_2[6]), (uVar12 & 1) != 0)) {
          uVar7 = 1;
          goto LAB_1015fbe04;
        }
      }
    }
    else if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 5)
    {
      lVar23 = *param_2;
      uVar12 = param_2[1];
      pbVar9 = pbVar11;
      pbVar24 = pbStack_d8;
code_r0x000100e25fcc:
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
        uVar7 = (uint)((ulong)pbVar24 >> 0x20);
        uVar17 = uVar7 >> 0x1e;
        uVar4 = (uint)(uVar12 >> 0x20);
        uVar20 = uVar4 >> 0x1e;
        iVar6 = (int)pbVar9;
        pbVar14 = pbVar24;
        if ((ulong)pbVar24 >> 0x3e == 3) {
          uVar19 = 0;
          if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
              (uVar12 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar12 != 0xc000000000000000)))
             ) goto joined_r0x000100e26170;
LAB_100e26128:
          pbVar8 = (byte *)0x1;
        }
        else if (uVar7 >> 0x1e < 2) {
          if (uVar17 == 0) {
            uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
          }
          else {
            iVar18 = (int)((ulong)pbVar9 >> 0x20);
            if (SBORROW4(iVar18,iVar6)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f0);
              (*pcVar5)();
            }
            uVar19 = (ulong)(iVar18 - iVar6);
          }
joined_r0x000100e26170:
          if (1 < uVar4 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
          if (uVar20 == 0) {
            uVar21 = uVar12 >> 0x30 & 0xff;
            goto LAB_100e2608c;
          }
          iVar18 = (int)((ulong)lVar23 >> 0x20);
          if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262e8);
            (*pcVar5)();
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
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262ec);
              (*pcVar5)();
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
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26068);
              (*pcVar5)();
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
                pbVar14 = (byte *)((long)register0x00000008 +
                                  (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
                unaff_x21 = 0;
                FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                              (undefined1 *)((long)register0x00000008 + -0x70));
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                goto LAB_100e262b0;
              }
              unaff_x25 = (byte *)(long)iVar6;
              unaff_x23 = (byte *)(((long)pbVar9 >> 0x20) - (long)unaff_x25);
              if ((long)pbVar9 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                (*pcVar5)();
              }
              func_0x000107c5ec30();
              unaff_x24 = pbVar24;
              if (pbVar9 == (byte *)0x0) {
                func_0x000107c5ec38();
                pbVar9 = (byte *)0x0;
              }
              else {
                pbVar14 = pbVar9;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e26300);
                  (*pcVar5)();
                }
                pbVar9 = pbVar9 + ((long)unaff_x25 - (long)pbVar14);
                func_0x000107c5ec38();
                unaff_x19 = pbVar9;
                if (pbVar9 != (byte *)0x0) {
                  if ((long)unaff_x23 <= (long)pbVar14) {
                    pbVar14 = unaff_x23;
                  }
                  pbVar14 = pbVar14 + (long)pbVar9;
                  goto LAB_100e262a4;
                }
              }
              pbVar14 = (byte *)0x0;
            }
            else {
              if (uVar17 != 2) {
                *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                pbVar14 = (byte *)((long)register0x00000008 + -0x70);
                goto LAB_100e26260;
              }
              lVar25 = *(long *)(pbVar9 + 0x10);
              unaff_x24 = *(byte **)(pbVar9 + 0x18);
              func_0x000107c5ec30();
              pbVar14 = pbVar9;
              if (pbVar9 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar5)();
                }
                pbVar9 = pbVar9 + (lVar25 - (long)pbVar14);
              }
              unaff_x23 = unaff_x24 + -lVar25;
              if (SBORROW8((long)unaff_x24,lVar25)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                (*pcVar5)();
              }
              func_0x000107c5ec38();
              unaff_x19 = pbVar9;
              unaff_x25 = pbVar24;
              if (pbVar9 == (byte *)0x0) {
                pbVar14 = (byte *)0x0;
              }
              else {
                if ((long)unaff_x23 <= (long)pbVar14) {
                  pbVar14 = unaff_x23;
                }
                pbVar14 = pbVar14 + (long)pbVar9;
              }
            }
LAB_100e262a4:
            unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar14,lVar23,
                          uVar12);
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
            unaff_x22 = uVar12;
          }
          else {
            pbVar8 = (byte *)(ulong)(uVar19 == 0);
          }
        }
LAB_100e262b0:
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)
           ) {
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
        *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
        pbVar11 = *(byte **)pbVar8;
        pbVar9 = *(byte **)(pbVar8 + 8);
        pbVar22 = *(byte **)(pbVar8 + 0x18);
        bVar26 = pbVar8[0x28];
        pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
        pbStack_d8 = pbVar9;
        if (bVar26 < 3) {
          if (bVar26 == 0) {
            if (pbVar14[0x28] == 0) {
              lVar23 = *(long *)pbVar14;
              uVar10 = 0;
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar11,lVar23,uVar10);
              return (byte *)(ulong)((uint)pbVar11 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar26 == 1) {
            if (pbVar14[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar14 + 8);
            pbVar16 = *(byte **)(pbVar14 + 0x10);
            lVar23 = *(long *)pbVar14;
            uVar10 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar11,lVar23,uVar10);
            if (((ulong)pbVar11 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar11 = pbVar9;
            pbStack_d8 = pbVar24;
            if ((pbVar9 == pbVar15) && (pbVar24 == pbVar16)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar14[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar14;
            pbVar16 = *(byte **)(pbVar14 + 8);
            lVar23 = *(long *)(pbVar14 + 0x18);
            if ((pbVar11 == pbVar15) && (pbVar9 == pbVar16)) {
              if (((pbVar8[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                return (byte *)0x0;
              }
              if (pbVar22 != (byte *)0x0) {
                if (lVar23 == 0) {
                  return (byte *)0x0;
                }
                FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                func_0x000107c61174(lVar23);
                func_0x000107c61174();
                pbVar11 = pbVar22;
                func_0x000107c60118();
                func_0x000107c61170(pbVar22);
                func_0x000107c61170(lVar23);
                pbVar22 = pbVar11;
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
            if (pbVar14[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar14;
            pbVar16 = *(byte **)(pbVar14 + 8);
            if (((pbVar11 == pbVar15) && (pbVar9 == pbVar16)) &&
               (pbVar11 = pbVar24, pbStack_d8 = pbVar22, pbVar15 = *(byte **)(pbVar14 + 0x10),
               pbVar16 = *(byte **)(pbVar14 + 0x18),
               pbVar24 == *(byte **)(pbVar14 + 0x10) && pbVar22 == *(byte **)(pbVar14 + 0x18))) {
              return (byte *)0x1;
            }
            goto code_r0x000107c605b8;
          }
          if (pbVar14[0x28] != 3) {
            return (byte *)0x0;
          }
          if ((uint)*pbVar14 != ((uint)pbVar11 & 0xff)) {
            return (byte *)0x0;
          }
          pbVar16 = *(byte **)(pbVar14 + 0x10);
          lVar23 = *(long *)(pbVar14 + 0x20);
          if (pbVar24 == (byte *)0x0) {
            if (pbVar16 != (byte *)0x0) {
              return (byte *)0x0;
            }
          }
          else {
            if (pbVar16 == (byte *)0x0) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar14 + 8);
            pbVar11 = pbVar9;
            pbStack_d8 = pbVar24;
            if ((pbVar9 != pbVar15) || (pbVar24 != pbVar16)) goto code_r0x000107c605b8;
          }
          if (lVar25 != 0) {
            if (lVar23 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar22 == *(byte **)(pbVar14 + 0x18)) && (lVar25 == lVar23)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar14 + 0x18),lVar23,0);
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
            if (pbVar14[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar25 = *(long *)(pbVar14 + 0x20);
            lVar23 = *(long *)(pbVar14 + 0x18);
            bVar26 = pbVar14[8] | (byte)lVar23;
            bVar27 = pbVar14[9] | (byte)((ulong)lVar23 >> 8);
            bVar28 = pbVar14[10] | (byte)((ulong)lVar23 >> 0x10);
            bVar29 = pbVar14[0xb] | (byte)((ulong)lVar23 >> 0x18);
            bVar30 = pbVar14[0xc] | (byte)((ulong)lVar23 >> 0x20);
            bVar31 = pbVar14[0xd] | (byte)((ulong)lVar23 >> 0x28);
            bVar32 = pbVar14[0xe] | (byte)((ulong)lVar23 >> 0x30);
            bVar33 = pbVar14[0xf] | (byte)((ulong)lVar23 >> 0x38);
            bVar34 = pbVar14[0x10] | (byte)lVar25;
            bVar35 = pbVar14[0x11] | (byte)((ulong)lVar25 >> 8);
            bVar36 = pbVar14[0x12] | (byte)((ulong)lVar25 >> 0x10);
            bVar37 = pbVar14[0x13] | (byte)((ulong)lVar25 >> 0x18);
            bVar38 = pbVar14[0x14] | (byte)((ulong)lVar25 >> 0x20);
            bVar39 = pbVar14[0x15] | (byte)((ulong)lVar25 >> 0x28);
            bVar40 = pbVar14[0x16] | (byte)((ulong)lVar25 >> 0x30);
            bVar41 = pbVar14[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                               bVar26 | auVar42[0]))
                                                            ))))) == 0 && *(long *)pbVar14 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar11 == (byte *)0x1) &&
             (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
              lVar25 == 0)) {
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
          lVar25 = *(long *)(pbVar14 + 0x20);
          lVar23 = *(long *)(pbVar14 + 0x18);
          bVar26 = pbVar14[8] | (byte)lVar23;
          bVar27 = pbVar14[9] | (byte)((ulong)lVar23 >> 8);
          bVar28 = pbVar14[10] | (byte)((ulong)lVar23 >> 0x10);
          bVar29 = pbVar14[0xb] | (byte)((ulong)lVar23 >> 0x18);
          bVar30 = pbVar14[0xc] | (byte)((ulong)lVar23 >> 0x20);
          bVar31 = pbVar14[0xd] | (byte)((ulong)lVar23 >> 0x28);
          bVar32 = pbVar14[0xe] | (byte)((ulong)lVar23 >> 0x30);
          bVar33 = pbVar14[0xf] | (byte)((ulong)lVar23 >> 0x38);
          bVar34 = pbVar14[0x10] | (byte)lVar25;
          bVar35 = pbVar14[0x11] | (byte)((ulong)lVar25 >> 8);
          bVar36 = pbVar14[0x12] | (byte)((ulong)lVar25 >> 0x10);
          bVar37 = pbVar14[0x13] | (byte)((ulong)lVar25 >> 0x18);
          bVar38 = pbVar14[0x14] | (byte)((ulong)lVar25 >> 0x20);
          bVar39 = pbVar14[0x15] | (byte)((ulong)lVar25 >> 0x28);
          bVar40 = pbVar14[0x16] | (byte)((ulong)lVar25 >> 0x30);
          bVar41 = pbVar14[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                         CONCAT11(bVar27 | auVar42[1
                                                  ],bVar26 | auVar42[0])))))));
          goto joined_r0x000100e26620;
        }
        if (pbVar14[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar23 = *(long *)(pbVar14 + 8);
        uVar12 = *(ulong *)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar10 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
  }
  else {
    uStack_a8 = param_1[7];
    uStack_a0 = param_1[8];
    if (uVar7 == 6) {
      uStack_98 = param_1[9] & 0xcfffffffffffffff;
      uStack_88 = param_1[0xb];
      uStack_90 = param_1[10];
      uStack_80 = param_1[0xc];
      uStack_78 = param_1[0xd];
      if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 6) {
        lStack_110 = param_2[8];
        uStack_108 = param_2[9] & 0xcfffffffffffffff;
        lStack_148 = param_2[1];
        lStack_150 = *param_2;
        lStack_140 = param_2[2];
        lStack_138 = param_2[3];
        lStack_128 = param_2[5];
        lStack_130 = param_2[4];
        lStack_120 = param_2[6];
        lStack_118 = param_2[7];
        lStack_f8 = param_2[0xb];
        lStack_100 = param_2[10];
        lStack_f0 = param_2[0xc];
        lStack_e8 = param_2[0xd];
        ppbVar13 = &pbStack_e0;
        FUN_101602158(ppbVar13,&lStack_150);
        uVar7 = (uint)ppbVar13;
        goto LAB_1015fbe04;
      }
    }
    else if (uVar7 == 7) {
      if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 7) {
        lStack_110 = param_2[8];
        lStack_148 = param_2[1];
        lStack_150 = *param_2;
        lStack_140 = param_2[2];
        lStack_138 = param_2[3];
        lStack_128 = param_2[5];
        lStack_130 = param_2[4];
        lStack_120 = param_2[6];
        lStack_118 = param_2[7];
        ppbVar13 = &pbStack_e0;
        FUN_1015ffee0(ppbVar13,&lStack_150);
        uVar7 = (uint)ppbVar13;
        goto LAB_1015fbe04;
      }
    }
    else if (((uint)((ulong)param_2[9] >> 0x3c) & 3 | (*(byte *)(param_2 + 0xe) & 0x3f) << 2) == 8)
    {
      lStack_148 = param_2[1];
      lStack_150 = *param_2;
      lStack_140 = param_2[2];
      lStack_138 = param_2[3];
      lStack_128 = param_2[5];
      lStack_130 = param_2[4];
      lStack_120 = param_2[6];
      lStack_118 = param_2[7];
      ppbVar13 = &pbStack_e0;
      FUN_1015ff240(ppbVar13,&lStack_150);
      uVar7 = (uint)ppbVar13;
      goto LAB_1015fbe04;
    }
  }
  uVar7 = 0;
LAB_1015fbe04:
  return (byte *)(ulong)(uVar7 & 1);
}



/* Entry: 1015fbe2c; end: 1015fbeab;  */

void FUN_1015fbe2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9500 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96afa0;
  func_0x000107c61520(&UNK_10d96afa0,&UNK_1103e71d0);
  puRam0000000112db9500 = puVar1;
  return;
}



/* Entry: 1015fbeac; end: 1015fc6e7;  */

ulong FUN_1015fbeac(ulong *param_1,ulong *param_2)

{
  bool bVar1;
  uint uVar2;
  ulong *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
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
  undefined1 auStack_5c8 [88];
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
  undefined1 uStack_438;
  undefined7 uStack_437;
  undefined1 uStack_430;
  undefined8 uStack_42f;
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
  undefined1 uStack_348;
  undefined7 uStack_347;
  undefined1 uStack_340;
  undefined7 uStack_33f;
  char cStack_338;
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
  undefined1 uStack_200;
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
  undefined1 uStack_180;
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
  undefined1 uStack_100;
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
  undefined1 uStack_80;
  
  uVar9 = 0;
  uStack_3d8 = param_1[9];
  uStack_3e0 = param_1[8];
  uStack_198 = param_1[0xb];
  uStack_1a0 = param_1[10];
  uStack_3e8 = param_1[7];
  uStack_3f0 = param_1[6];
  uStack_1a8 = param_1[9];
  uStack_1b0 = param_1[8];
  uStack_3c8 = param_1[0xb];
  uStack_3d0 = param_1[10];
  uStack_188 = param_1[0xd];
  uStack_190 = param_1[0xc];
  uStack_1e8 = param_1[1];
  uStack_1f0 = *param_1;
  uStack_1d8 = param_1[3];
  uStack_1e0 = param_1[2];
  uStack_1c8 = param_1[5];
  uStack_1d0 = param_1[4];
  uStack_1b8 = param_1[7];
  uStack_1c0 = param_1[6];
  uStack_418 = param_1[1];
  uStack_420 = *param_1;
  uStack_408 = param_1[3];
  uStack_410 = param_1[2];
  uStack_3f8 = param_1[5];
  uStack_400 = param_1[4];
  uStack_268 = param_2[1];
  uStack_270 = *param_2;
  uStack_480 = param_2[3];
  uStack_488 = param_2[2];
  uStack_248 = param_2[5];
  uStack_250 = param_2[4];
  uStack_238 = param_2[7];
  uStack_240 = param_2[6];
  uStack_258 = param_2[3];
  uStack_260 = param_2[2];
  uStack_470 = param_2[5];
  uStack_478 = param_2[4];
  uStack_490 = param_2[1];
  uStack_498 = *param_2;
  uStack_350 = param_2[0xb];
  uStack_358 = param_2[10];
  uStack_208 = param_2[0xd];
  uStack_210 = param_2[0xc];
  uStack_370 = param_2[7];
  uStack_468 = param_2[6];
  uStack_228 = param_2[9];
  uStack_230 = param_2[8];
  uStack_360 = param_2[9];
  uStack_368 = param_2[8];
  uStack_218 = param_2[0xb];
  uStack_220 = param_2[10];
  uStack_3b8 = param_1[0xd];
  uStack_3c0 = param_1[0xc];
  uStack_180 = (undefined1)param_1[0xe];
  uStack_200 = (undefined1)param_2[0xe];
  uStack_3b0 = CONCAT71(uStack_3b0._1_7_,(char)param_1[0xe]);
  cStack_338 = (char)param_2[0xe];
  uStack_340 = (undefined1)param_2[0xd];
  uStack_33f = (undefined7)(param_2[0xd] >> 8);
  uStack_348 = (undefined1)param_2[0xc];
  uStack_347 = (undefined7)(param_2[0xc] >> 8);
  bVar1 = ((uStack_360 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0;
  uStack_3a8 = uStack_498;
  uStack_3a0 = uStack_490;
  uStack_398 = uStack_488;
  uStack_390 = uStack_480;
  uStack_388 = uStack_478;
  uStack_380 = uStack_470;
  uStack_378 = uStack_468;
  if ((((uStack_3d8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && ((char)param_1[0xe] == -1))
  {
    if (bVar1 || cStack_338 != -1) {
LAB_1015fc044:
      uStack_42f = CONCAT17(cStack_338,uStack_33f);
      uStack_437 = uStack_347;
      uStack_430 = uStack_340;
      uStack_4a0 = uStack_3b0;
      uStack_510 = uStack_420;
      uStack_508 = uStack_418;
      uStack_500 = uStack_410;
      uStack_4f8 = uStack_408;
      uStack_4f0 = uStack_400;
      uStack_4e8 = uStack_3f8;
      uStack_4e0 = uStack_3f0;
      uStack_4d8 = uStack_3e8;
      uStack_4d0 = uStack_3e0;
      uStack_4c8 = uStack_3d8;
      uStack_4c0 = uStack_3d0;
      uStack_4b8 = uStack_3c8;
      uStack_4b0 = uStack_3c0;
      uStack_4a8 = uStack_3b8;
      uStack_460 = uStack_370;
      uStack_458 = uStack_368;
      uStack_450 = uStack_360;
      uStack_448 = uStack_358;
      uStack_440 = uStack_350;
      uStack_438 = uStack_348;
      FUN_1015f8de8(&uStack_1f0,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      FUN_1015f8de8(&uStack_270,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      uVar5 = 0x112db9568;
      puVar6 = &UNK_10d96b188;
LAB_1015fc364:
      FUN_1015fe14c(&uStack_510,uVar5,puVar6);
    }
    else {
      uStack_4c8 = param_1[9];
      uStack_4d0 = param_1[8];
      uStack_4b8 = param_1[0xb];
      uStack_4c0 = param_1[10];
      uStack_4a8 = param_1[0xd];
      uStack_4b0 = param_1[0xc];
      uStack_4a0 = CONCAT71(uStack_4a0._1_7_,(char)param_1[0xe]);
      uStack_508 = param_1[1];
      uStack_510 = *param_1;
      uStack_4f8 = param_1[3];
      uStack_500 = param_1[2];
      uStack_4e8 = param_1[5];
      uStack_4f0 = param_1[4];
      uStack_4d8 = param_1[7];
      uStack_4e0 = param_1[6];
      FUN_1015f8de8(&uStack_1f0,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      FUN_1015f8de8(&uStack_270,&uStack_f0,0x112db3fe0,&UNK_10d95e560);
      FUN_1015fe14c(&uStack_510,0x112db3fe0,&UNK_10d95e560);
LAB_1015fc1b0:
      uStack_2a8 = param_1[0x18];
      uStack_2b0 = param_1[0x17];
      uStack_298 = param_1[0x1a];
      uStack_2a0 = param_1[0x19];
      uStack_288 = param_1[0x1c];
      uStack_290 = param_1[0x1b];
      uStack_280 = param_1[0x1d];
      uStack_2c8 = param_1[0x14];
      uStack_2d0 = param_1[0x13];
      uStack_2b8 = param_1[0x16];
      uStack_2c0 = param_1[0x15];
      uStack_308 = param_2[0x18];
      uStack_310 = param_2[0x17];
      uStack_2f8 = param_2[0x1a];
      uStack_300 = param_2[0x19];
      uStack_2e8 = param_2[0x1c];
      uStack_2f0 = param_2[0x1b];
      uStack_2e0 = param_2[0x1d];
      uStack_328 = param_2[0x14];
      uStack_330 = param_2[0x13];
      uStack_318 = param_2[0x16];
      uStack_320 = param_2[0x15];
      uStack_3f8 = param_1[0x18];
      uStack_400 = param_1[0x17];
      uStack_3e8 = param_1[0x1a];
      uStack_3f0 = param_1[0x19];
      uStack_3d8 = param_1[0x1c];
      uStack_3e0 = param_1[0x1b];
      uStack_3d0 = param_1[0x1d];
      uStack_418 = param_1[0x14];
      uStack_420 = param_1[0x13];
      uStack_408 = param_1[0x16];
      uStack_410 = param_1[0x15];
      uStack_490 = param_2[0x18];
      uStack_498 = param_2[0x17];
      uStack_480 = param_2[0x1a];
      uStack_488 = param_2[0x19];
      uStack_470 = param_2[0x1c];
      uStack_478 = param_2[0x1b];
      uStack_468 = param_2[0x1d];
      uStack_3c0 = param_2[0x14];
      uStack_3c8 = param_2[0x13];
      uStack_3b0 = param_2[0x16];
      uStack_3b8 = param_2[0x15];
      uStack_3a8 = uStack_498;
      uStack_3a0 = uStack_490;
      uStack_398 = uStack_488;
      uStack_390 = uStack_480;
      uStack_388 = uStack_478;
      uStack_380 = uStack_470;
      uStack_378 = uStack_468;
      if ((char)uStack_410 == '\x03') {
        if ((uStack_3b8 & 0xff) != 3) {
LAB_1015fc2ec:
          uStack_510 = uStack_420;
          uStack_508 = uStack_418;
          uStack_500 = uStack_410;
          uStack_4f8 = uStack_408;
          uStack_4f0 = uStack_400;
          uStack_4e8 = uStack_3f8;
          uStack_4e0 = uStack_3f0;
          uStack_4d8 = uStack_3e8;
          uStack_4d0 = uStack_3e0;
          uStack_4c8 = uStack_3d8;
          uStack_4c0 = uStack_3d0;
          uStack_4b8 = uStack_3c8;
          uStack_4b0 = uStack_3c0;
          uStack_4a8 = uStack_3b8;
          uStack_4a0 = uStack_3b0;
          FUN_1015f8de8(&uStack_2d0,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
          FUN_1015f8de8(&uStack_330,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
          uVar5 = 0x112db94e8;
          puVar6 = &UNK_10d96aef8;
          goto LAB_1015fc364;
        }
        uStack_4e8 = param_1[0x18];
        uStack_4f0 = param_1[0x17];
        uStack_4d8 = param_1[0x1a];
        uStack_4e0 = param_1[0x19];
        uStack_4c8 = param_1[0x1c];
        uStack_4d0 = param_1[0x1b];
        uStack_4c0 = param_1[0x1d];
        uStack_508 = param_1[0x14];
        uStack_510 = param_1[0x13];
        uStack_4f8 = param_1[0x16];
        uStack_500 = param_1[0x15];
        FUN_1015f8de8(&uStack_2d0,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015f8de8(&uStack_330,&uStack_640,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015fe14c(&uStack_510,0x112db3fd8,&UNK_10d96aef0);
      }
      else {
        if ((uStack_3b8 & 0xff) == 3) goto LAB_1015fc2ec;
        uStack_548 = param_2[0x18];
        uStack_550 = param_2[0x17];
        uStack_538 = param_2[0x1a];
        uStack_540 = param_2[0x19];
        uStack_528 = param_2[0x1c];
        uStack_530 = param_2[0x1b];
        uStack_520 = param_2[0x1d];
        uStack_568 = param_2[0x14];
        uStack_570 = param_2[0x13];
        uStack_558 = param_2[0x16];
        uStack_560 = param_2[0x15];
        uStack_618 = param_1[0x18];
        uStack_620 = param_1[0x17];
        uStack_608 = param_1[0x1a];
        uStack_610 = param_1[0x19];
        uStack_5f8 = param_1[0x1c];
        uStack_600 = param_1[0x1b];
        uStack_5f0 = param_1[0x1d];
        uStack_638 = param_1[0x14];
        uStack_640 = param_1[0x13];
        uStack_628 = param_1[0x16];
        uStack_630 = param_1[0x15];
        uStack_510 = uStack_570;
        uStack_508 = uStack_568;
        uStack_500 = uStack_560;
        uStack_4f8 = uStack_558;
        uStack_4f0 = uStack_550;
        uStack_4e8 = uStack_548;
        uStack_4e0 = uStack_540;
        uStack_4d8 = uStack_538;
        uStack_4d0 = uStack_530;
        uStack_4c8 = uStack_528;
        uStack_4c0 = uStack_520;
        FUN_1015f8de8(&uStack_2d0,auStack_5c8,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015f8de8(&uStack_330,auStack_5c8,0x112db3fd8,&UNK_10d96aef0);
        func_0x00010363a074(&uStack_640,&uStack_510);
        FUN_1015fe14c(&uStack_570,0x112db3fd8,&UNK_10d96aef0);
        FUN_1015fe14c(&uStack_420,0x112db3fd8,&UNK_10d96aef0);
        if ((uVar9 & 1) == 0) goto LAB_1015fc36c;
      }
      uVar11 = param_1[0x1f];
      uVar9 = param_1[0x1e];
      uVar7 = param_1[0x20];
      uVar12 = param_2[0x1f];
      uVar10 = param_2[0x1e];
      uVar8 = param_2[0x20];
      uStack_570 = uVar10;
      uStack_568 = uVar12;
      uStack_560 = uVar8;
      uStack_420 = uVar9;
      uStack_418 = uVar11;
      uStack_410 = uVar7;
      if ((uVar9 & 0xff) == 2) {
        if ((uVar10 & 0xff) == 2) {
          FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
LAB_1015fc4dc:
          func_0x000101556278(uVar9,uVar11,uVar7);
          if ((char)param_2[0x10] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x0001015fc514. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)((ulong)(byte)(&UNK_10d96aedc)[param_2[0xf]] * 4 + 0x1015fc518))();
            return uVar9;
          }
          if (param_1[0xf] == param_2[0xf]) {
            uVar9 = param_1[0x11];
            FUN_100e25fcc(uVar9,param_1[0x12],param_2[0x11],param_2[0x12]);
            uVar2 = (uint)uVar9;
            goto LAB_1015fc370;
          }
          goto LAB_1015fc36c;
        }
LAB_1015fc528:
        FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
        FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
        func_0x000101556278(uVar9,uVar11,uVar7);
        uVar9 = uVar10;
        uVar11 = uVar12;
        uVar7 = uVar8;
      }
      else {
        if ((uVar10 & 0xff) == 2) goto LAB_1015fc528;
        if ((((uint)uVar10 ^ (uint)uVar9) & 1) == 0) {
          FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          uVar4 = uVar11;
          FUN_100e25fcc(uVar11,uVar7,uVar12,uVar8);
          func_0x000101556278(uVar10,uVar12,uVar8);
          if ((uVar4 & 1) != 0) goto LAB_1015fc4dc;
        }
        else {
          FUN_1015f8de8(&uStack_420,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          FUN_1015f8de8(&uStack_570,auStack_5c8,0x112db94f0,&UNK_10d96af00);
          func_0x000101556278(uVar10,uVar12,uVar8);
        }
      }
      func_0x000101556278(uVar9,uVar11,uVar7);
    }
  }
  else {
    if (!bVar1 && cStack_338 == -1) goto LAB_1015fc044;
    uStack_4c8 = param_2[9];
    uStack_4d0 = param_2[8];
    uStack_4b8 = param_2[0xb];
    uStack_4c0 = param_2[10];
    uStack_4a8 = param_2[0xd];
    uStack_4b0 = param_2[0xc];
    uStack_80 = (undefined1)param_2[0xe];
    uStack_4a0 = CONCAT71(uStack_4a0._1_7_,uStack_80);
    uStack_508 = param_2[1];
    uStack_510 = *param_2;
    uStack_4f8 = param_2[3];
    uStack_500 = param_2[2];
    uStack_4e8 = param_2[5];
    uStack_4f0 = param_2[4];
    uStack_4d8 = param_2[7];
    uStack_4e0 = param_2[6];
    uStack_128 = param_1[9];
    uStack_130 = param_1[8];
    uStack_118 = param_1[0xb];
    uStack_120 = param_1[10];
    uStack_108 = param_1[0xd];
    uStack_110 = param_1[0xc];
    uStack_100 = (undefined1)param_1[0xe];
    uStack_168 = param_1[1];
    uStack_170 = *param_1;
    uStack_158 = param_1[3];
    uStack_160 = param_1[2];
    uStack_148 = param_1[5];
    uStack_150 = param_1[4];
    uStack_138 = param_1[7];
    uStack_140 = param_1[6];
    uStack_f0 = uStack_510;
    uStack_e8 = uStack_508;
    uStack_e0 = uStack_500;
    uStack_d8 = uStack_4f8;
    uStack_d0 = uStack_4f0;
    uStack_c8 = uStack_4e8;
    uStack_c0 = uStack_4e0;
    uStack_b8 = uStack_4d8;
    uStack_b0 = uStack_4d0;
    uStack_a8 = uStack_4c8;
    uStack_a0 = uStack_4c0;
    uStack_98 = uStack_4b8;
    uStack_90 = uStack_4b0;
    uStack_88 = uStack_4a8;
    FUN_1015f8de8(&uStack_1f0,&uStack_640,0x112db3fe0,&UNK_10d95e560);
    FUN_1015f8de8(&uStack_270,&uStack_640,0x112db3fe0,&UNK_10d95e560);
    puVar3 = &uStack_170;
    FUN_1015fba8c(puVar3,&uStack_f0);
    FUN_1015fe14c(&uStack_510,0x112db3fe0,&UNK_10d95e560);
    FUN_1015fe14c(&uStack_420,0x112db3fe0,&UNK_10d95e560);
    if (((ulong)puVar3 & 1) != 0) goto LAB_1015fc1b0;
  }
LAB_1015fc36c:
  uVar2 = 0;
LAB_1015fc370:
  return (ulong)(uVar2 & 1);
}



/* Entry: 1015fc6e8; end: 1015fc727;  */

void FUN_1015fc6e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b078;
  func_0x000107c61520(&UNK_10d96b078,&UNK_1103e7250);
  puRam0000000112db9518 = puVar1;
  return;
}



/* Entry: 1015fc728; end: 1015fc74b;  */

void FUN_1015fc728(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015fc74c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015fc74c; end: 1015fc78b;  */

void FUN_1015fc74c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96af78;
  func_0x000107c61520(&UNK_10d96af78,&UNK_1103e71d0);
  puRam0000000112db9520 = puVar1;
  return;
}



/* Entry: 1015fc78c; end: 1015fc79f;  */

void FUN_1015fc78c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015fbe2c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015fc7a0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015fc7a0; end: 1015fc7df;  */

void FUN_1015fc7a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9528 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96af30;
  func_0x000107c61520(&DAT_10d96af30,&UNK_1103e71d0);
  puRam0000000112db9528 = puVar1;
  return;
}



/* Entry: 1015fc7e0; end: 1015fc7e3;  */

void FUN_1015fc7e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96afe0;
  func_0x000107c61520(&UNK_10d96afe0,&UNK_1103e71d0);
  puRam0000000112db9530 = puVar1;
  return;
}



/* Entry: 1015fc7e4; end: 1015fc823;  */

void FUN_1015fc7e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9530 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96afe0;
  func_0x000107c61520(&UNK_10d96afe0,&UNK_1103e71d0);
  puRam0000000112db9530 = puVar1;
  return;
}



/* Entry: 1015fc824; end: 1015fc847;  */

void FUN_1015fc824(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015fc848();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015fc848; end: 1015fc887;  */

void FUN_1015fc848(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9538 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b050;
  func_0x000107c61520(&UNK_10d96b050,&UNK_1103e7250);
  puRam0000000112db9538 = puVar1;
  return;
}



/* Entry: 1015fc888; end: 1015fc89b;  */

void FUN_1015fc888(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015fc6e8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1015717fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015fc89c; end: 1015fc8cb;  */

void FUN_1015fc89c(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015fc8cc; end: 1015fc8cf;  */

void FUN_1015fc8cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b0b8;
  func_0x000107c61520(&UNK_10d96b0b8,&UNK_1103e7250);
  puRam0000000112db9540 = puVar1;
  return;
}



/* Entry: 1015fc8d0; end: 1015fc90f;  */

void FUN_1015fc8d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db9540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96b0b8;
  func_0x000107c61520(&UNK_10d96b0b8,&UNK_1103e7250);
  puRam0000000112db9540 = puVar1;
  return;
}



/* Entry: 1015fc910; end: 1015fc91b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015fc910(ulong *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *param_1;
  uVar2 = (uint)(param_1[1] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[1] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1015fc91c; end: 1015fc95f;  */

undefined8 * FUN_1015fc91c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar4);
  return param_1;
}



/* Entry: 1015fc960; end: 1015fc997;  */

undefined8 * FUN_1015fc960(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1015fc998; end: 1015fca47;  */

int FUN_1015fc998(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015fca48; end: 1015fcb33;  */

/* WARNING: Possible PIC construction at 0x0001015fcaac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fcad0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fcb00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015fcab0) */
/* WARNING: Removing unreachable block (ram,0x0001015fcabc) */
/* WARNING: Removing unreachable block (ram,0x0001015fcad4) */
/* WARNING: Removing unreachable block (ram,0x0001015fcae4) */
/* WARNING: Removing unreachable block (ram,0x0001015fcaec) */
/* WARNING: Removing unreachable block (ram,0x0001015fcb04) */
/* WARNING: Removing unreachable block (ram,0x0001015fcb20) */
/* WARNING: Removing unreachable block (ram,0x0001015fcb10) */
/* WARNING: Removing unreachable block (ram,0x0001015fcafc) */
/* WARNING: Removing unreachable block (ram,0x0001015fcacc) */

void FUN_1015fca48(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  if ((((param_1[9] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(char *)(param_1 + 0xe) != -1)) {
    FUN_1015fcb34(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                  param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],
                  param_1[0xd],*(char *)(param_1 + 0xe));
  }
  uVar1 = param_1[0x12];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[0x11]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015fcb34; end: 1015fcd27;  */

/* WARNING: Possible PIC construction at 0x0001015fcbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fccf4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fcc8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015fcbf4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015fcc90) */
/* WARNING: Removing unreachable block (ram,0x0001015fccf8) */
/* WARNING: Removing unreachable block (ram,0x0001015fcd28) */
/* WARNING: Removing unreachable block (ram,0x0001015fcd70) */
/* WARNING: Removing unreachable block (ram,0x0001015fcd2c) */
/* WARNING: Removing unreachable block (ram,0x0001015fcbb8) */
/* WARNING: Removing unreachable block (ram,0x0001015fcca0) */
/* WARNING: Removing unreachable block (ram,0x0001015d38c8) */
/* WARNING: Removing unreachable block (ram,0x0001015d38d8) */
/* WARNING: Removing unreachable block (ram,0x0001015d38d4) */
/* WARNING: Removing unreachable block (ram,0x0001015fcbf8) */
/* WARNING: Removing unreachable block (ram,0x000101553bdc) */
/* WARNING: Removing unreachable block (ram,0x000101553c10) */
/* WARNING: Removing unreachable block (ram,0x000101553be0) */

void FUN_1015fcb34(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                  ulong param_6,ulong param_7,undefined8 param_8,ulong param_9,ulong param_10)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  ulong unaff_x19;
  ulong unaff_x20;
  undefined1 *unaff_x29;
  undefined8 unaff_x30;
  ulong in_stack_00000028;
  byte in_stack_00000030;
  
  uVar4 = in_stack_00000028;
  uVar3 = param_10;
  uVar2 = param_9;
  puVar1 = &stack0xfffffffffffffff0;
  uVar5 = (uint)(param_10 >> 0x3c) & 3 | (in_stack_00000030 & 0x3f) << 2;
  if (uVar5 < 4) {
    if (uVar5 < 2) {
      if (uVar5 == 0) {
        func_0x000107c6142c();
        param_1 = param_2;
        goto code_r0x00010006c090;
      }
      if (uVar5 != 1) {
        return;
      }
    }
    else if ((uVar5 != 2) && (uVar5 != 3)) {
      return;
    }
    unaff_x30 = 0x1015fcbf8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_3 = param_2;
    unaff_x19 = param_6;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
  }
  else if (uVar5 < 6) {
    if (uVar5 == 4) {
      func_0x000107c6142c(param_2);
      param_1 = param_6;
      param_3 = param_7;
    }
    else {
      param_3 = param_2;
      if (uVar5 != 5) {
        return;
      }
    }
  }
  else if (uVar5 == 6) {
    func_0x000107c6142c(param_4);
    func_0x000107c6142c(param_6);
    func_0x000107c6142c(param_8);
    unaff_x30 = 0x1015fcc90;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_1 = uVar2;
    param_3 = uVar3 & 0xcfffffffffffffff;
    unaff_x19 = param_6;
    unaff_x20 = uVar4;
    unaff_x29 = puVar1;
  }
  else if (uVar5 == 7) {
    func_0x000107c6142c();
    unaff_x30 = 0x1015fccf8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_1 = param_2;
    unaff_x19 = param_6;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
  }
  else {
    if (uVar5 != 8) {
      return;
    }
    func_0x000107c6142c(param_2);
    unaff_x30 = 0x1015fcbb8;
    register0x00000008 = (BADSPACEBASE *)&stack0xffffffffffffffb0;
    param_1 = param_3;
    param_3 = param_4;
    unaff_x19 = param_6;
    unaff_x20 = param_7;
    unaff_x29 = puVar1;
  }
code_r0x00010006c090:
  uVar5 = (uint)(param_3 >> 0x3e);
  if (uVar5 != 1) {
    if (uVar5 != 2) {
      return;
    }
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(ulong *)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    func_0x000107c61574(param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3 & 0x3fffffffffffffff);
  return;
}



/* Entry: 1015fcd28; end: 1015fcd73;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015fcd28(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
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



/* Entry: 1015fcd74; end: 1015fd5eb;  */

undefined8 * FUN_1015fcd74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  undefined8 uVar11;
  ulong uVar12;
  char *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  uVar12 = param_2[9];
  cVar10 = *(char *)(param_2 + 0xe);
  if ((((uVar12 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar10 == -1)) {
    uVar14 = param_2[8];
    uVar16 = param_2[0xb];
    uVar15 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar14;
    param_1[0xb] = uVar16;
    param_1[10] = uVar15;
    uVar14 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar14;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    uVar14 = *param_2;
    uVar16 = param_2[3];
    uVar15 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar14;
    param_1[3] = uVar16;
    param_1[2] = uVar15;
    uVar14 = param_2[4];
    uVar16 = param_2[7];
    uVar15 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar14;
    param_1[7] = uVar16;
    param_1[6] = uVar15;
  }
  else {
    uVar14 = *param_2;
    uVar4 = param_2[1];
    uVar15 = param_2[2];
    uVar5 = param_2[3];
    uVar16 = param_2[4];
    uVar6 = param_2[5];
    uVar1 = param_2[6];
    uVar7 = param_2[7];
    uVar11 = param_2[8];
    uVar2 = param_2[10];
    uVar8 = param_2[0xb];
    uVar3 = param_2[0xc];
    uVar9 = param_2[0xd];
    FUN_1015f88ec(uVar14,uVar4,uVar15,uVar5,uVar16,uVar6,uVar1,uVar7,uVar11,uVar12,uVar2,uVar8,uVar3
                  ,uVar9,cVar10);
    *param_1 = uVar14;
    param_1[1] = uVar4;
    param_1[2] = uVar15;
    param_1[3] = uVar5;
    param_1[4] = uVar16;
    param_1[5] = uVar6;
    param_1[6] = uVar1;
    param_1[7] = uVar7;
    param_1[8] = uVar11;
    param_1[9] = uVar12;
    param_1[10] = uVar2;
    param_1[0xb] = uVar8;
    param_1[0xc] = uVar3;
    param_1[0xd] = uVar9;
    *(char *)(param_1 + 0xe) = cVar10;
  }
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar14 = param_2[0x11];
  uVar15 = param_2[0x12];
  func_0x00010006c00c(uVar14,uVar15);
  param_1[0x11] = uVar14;
  param_1[0x12] = uVar15;
  pcVar13 = (char *)(param_2 + 0x15);
  cVar10 = *pcVar13;
  if (cVar10 == '\x03') {
    uVar14 = param_2[0x17];
    uVar16 = param_2[0x1a];
    uVar15 = param_2[0x19];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar14;
    param_1[0x1a] = uVar16;
    param_1[0x19] = uVar15;
    uVar14 = param_2[0x1b];
    param_1[0x1c] = param_2[0x1c];
    param_1[0x1b] = uVar14;
    param_1[0x1d] = param_2[0x1d];
    uVar14 = param_2[0x13];
    uVar16 = param_2[0x16];
    uVar15 = *(undefined8 *)pcVar13;
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar14;
    param_1[0x16] = uVar16;
    param_1[0x15] = uVar15;
  }
  else {
    uVar14 = param_2[0x13];
    uVar15 = param_2[0x14];
    func_0x00010006c00c(uVar14,uVar15);
    param_1[0x13] = uVar14;
    param_1[0x14] = uVar15;
    if (cVar10 == '\x02') {
      uVar14 = *(undefined8 *)pcVar13;
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar14;
      param_1[0x17] = param_2[0x17];
    }
    else {
      *(char *)(param_1 + 0x15) = cVar10;
      uVar14 = param_2[0x16];
      uVar15 = param_2[0x17];
      func_0x00010006c00c(uVar14,uVar15);
      param_1[0x16] = uVar14;
      param_1[0x17] = uVar15;
    }
    uVar12 = param_2[0x1a];
    if (uVar12 >> 0x3c < 0xf) {
      uVar14 = param_2[0x19];
      param_1[0x18] = param_2[0x18];
      func_0x00010006c00c(uVar14,uVar12);
      param_1[0x19] = uVar14;
      param_1[0x1a] = uVar12;
    }
    else {
      uVar14 = param_2[0x18];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar14;
      param_1[0x1a] = param_2[0x1a];
    }
    uVar12 = param_2[0x1d];
    if (uVar12 >> 0x3c < 0xf) {
      uVar14 = param_2[0x1c];
      param_1[0x1b] = param_2[0x1b];
      func_0x00010006c00c(uVar14,uVar12);
      param_1[0x1c] = uVar14;
      param_1[0x1d] = uVar12;
    }
    else {
      uVar14 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar14;
      param_1[0x1d] = param_2[0x1d];
    }
  }
  cVar10 = *(char *)(param_2 + 0x1e);
  if (cVar10 == '\x02') {
    uVar14 = param_2[0x1e];
    param_1[0x1f] = param_2[0x1f];
    param_1[0x1e] = uVar14;
    param_1[0x20] = param_2[0x20];
  }
  else {
    *(char *)(param_1 + 0x1e) = cVar10;
    uVar14 = param_2[0x1f];
    uVar15 = param_2[0x20];
    func_0x00010006c00c(uVar14,uVar15);
    param_1[0x1f] = uVar14;
    param_1[0x20] = uVar15;
  }
  return param_1;
}



/* Entry: 1015fd5ec; end: 1015fd64b;  */

undefined8 FUN_1015fd5ec(undefined8 param_1)

{
  FUN_1015fda18(param_1,&UNK_1103e72f8);
  return param_1;
}



/* Entry: 1015fd64c; end: 1015fd90b;  */

undefined8 * FUN_1015fd64c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte bVar8;
  char cVar9;
  char cVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  char *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar12 = param_1[9];
  cVar9 = *(char *)(param_1 + 0xe);
  if ((((uVar12 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar9 == -1)) {
LAB_1015fd6a8:
    uVar11 = param_2[8];
    uVar18 = param_2[0xb];
    uVar20 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar11;
    param_1[0xb] = uVar18;
    param_1[10] = uVar20;
    uVar11 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar11;
    *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 0xe);
    uVar11 = *param_2;
    uVar18 = param_2[3];
    uVar20 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar11;
    param_1[3] = uVar18;
    param_1[2] = uVar20;
    uVar11 = param_2[4];
    uVar18 = param_2[7];
    uVar20 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar11;
    param_1[7] = uVar18;
    param_1[6] = uVar20;
  }
  else {
    uVar13 = param_2[9];
    cVar10 = *(char *)(param_2 + 0xe);
    if ((((uVar13 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar10 == -1)) {
      FUN_1015fd5ec(param_1);
      goto LAB_1015fd6a8;
    }
    uVar14 = param_2[8];
    uVar11 = *param_1;
    uVar3 = param_1[1];
    uVar20 = param_1[2];
    uVar4 = param_1[3];
    uVar18 = param_1[4];
    uVar5 = param_1[5];
    uVar1 = param_1[6];
    uVar6 = param_1[7];
    uVar15 = param_1[8];
    uVar19 = param_1[0xb];
    uVar17 = param_1[10];
    uVar2 = param_1[0xc];
    uVar7 = param_1[0xd];
    uVar21 = *param_2;
    uVar23 = param_2[3];
    uVar22 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar21;
    param_1[3] = uVar23;
    param_1[2] = uVar22;
    uVar21 = param_2[4];
    uVar23 = param_2[7];
    uVar22 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar21;
    param_1[7] = uVar23;
    param_1[6] = uVar22;
    param_1[8] = uVar14;
    param_1[9] = uVar13;
    uVar14 = param_2[10];
    uVar22 = param_2[0xd];
    uVar21 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar14;
    param_1[0xd] = uVar22;
    param_1[0xc] = uVar21;
    *(char *)(param_1 + 0xe) = cVar10;
    FUN_1015fcb34(uVar11,uVar3,uVar20,uVar4,uVar18,uVar5,uVar1,uVar6,uVar15,uVar12,uVar17,uVar19,
                  uVar2,uVar7,cVar9);
  }
  param_1[0xf] = param_2[0xf];
  *(undefined1 *)(param_1 + 0x10) = *(undefined1 *)(param_2 + 0x10);
  uVar11 = param_1[0x11];
  uVar20 = param_1[0x12];
  uVar18 = param_2[0x11];
  param_1[0x12] = param_2[0x12];
  param_1[0x11] = uVar18;
  func_0x00010006c090(uVar11,uVar20);
  pcVar16 = (char *)(param_1 + 0x15);
  if (*pcVar16 != '\x03') {
    bVar8 = *(byte *)(param_2 + 0x15);
    if (bVar8 != 3) {
      uVar11 = param_1[0x13];
      uVar20 = param_1[0x14];
      uVar18 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar18;
      func_0x00010006c090(uVar11,uVar20);
      if (*(char *)(param_1 + 0x15) == '\x02') {
LAB_1015fd800:
        uVar11 = param_2[0x15];
        param_1[0x16] = param_2[0x16];
        *(undefined8 *)pcVar16 = uVar11;
        param_1[0x17] = param_2[0x17];
      }
      else {
        if (bVar8 == 2) {
          func_0x0001015fd618(pcVar16);
          goto LAB_1015fd800;
        }
        *(byte *)(param_1 + 0x15) = bVar8 & 1;
        uVar11 = param_1[0x16];
        uVar20 = param_1[0x17];
        uVar18 = param_2[0x16];
        param_1[0x17] = param_2[0x17];
        param_1[0x16] = uVar18;
        func_0x00010006c090(uVar11,uVar20);
      }
      if ((ulong)param_1[0x1a] >> 0x3c < 0xf) {
        uVar12 = param_2[0x1a];
        if (0xe < uVar12 >> 0x3c) {
          FUN_1015bf2c0(param_1 + 0x18);
          goto LAB_1015fd888;
        }
        param_1[0x18] = param_2[0x18];
        uVar11 = param_1[0x19];
        param_1[0x19] = param_2[0x19];
        param_1[0x1a] = uVar12;
        func_0x00010006c090(uVar11);
      }
      else {
LAB_1015fd888:
        uVar11 = param_2[0x18];
        param_1[0x19] = param_2[0x19];
        param_1[0x18] = uVar11;
        param_1[0x1a] = param_2[0x1a];
      }
      if ((ulong)param_1[0x1d] >> 0x3c < 0xf) {
        uVar12 = param_2[0x1d];
        if (uVar12 >> 0x3c < 0xf) {
          param_1[0x1b] = param_2[0x1b];
          uVar11 = param_1[0x1c];
          param_1[0x1c] = param_2[0x1c];
          param_1[0x1d] = uVar12;
          func_0x00010006c090(uVar11);
          goto LAB_1015fd79c;
        }
        FUN_1015bf2c0(param_1 + 0x1b);
      }
      uVar11 = param_2[0x1b];
      param_1[0x1c] = param_2[0x1c];
      param_1[0x1b] = uVar11;
      param_1[0x1d] = param_2[0x1d];
      goto LAB_1015fd79c;
    }
    func_0x000101556228(param_1 + 0x13);
  }
  uVar11 = param_2[0x17];
  uVar18 = param_2[0x1a];
  uVar20 = param_2[0x19];
  param_1[0x18] = param_2[0x18];
  param_1[0x17] = uVar11;
  param_1[0x1a] = uVar18;
  param_1[0x19] = uVar20;
  uVar11 = param_2[0x1b];
  param_1[0x1c] = param_2[0x1c];
  param_1[0x1b] = uVar11;
  param_1[0x1d] = param_2[0x1d];
  uVar11 = param_2[0x13];
  uVar18 = param_2[0x16];
  uVar20 = param_2[0x15];
  param_1[0x14] = param_2[0x14];
  param_1[0x13] = uVar11;
  param_1[0x16] = uVar18;
  *(undefined8 *)pcVar16 = uVar20;
LAB_1015fd79c:
  pcVar16 = (char *)(param_1 + 0x1e);
  if (*pcVar16 != '\x02') {
    if (*(byte *)(param_2 + 0x1e) != 2) {
      *(byte *)(param_1 + 0x1e) = *(byte *)(param_2 + 0x1e) & 1;
      uVar11 = param_1[0x1f];
      uVar20 = param_1[0x20];
      uVar18 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar18;
      func_0x00010006c090(uVar11,uVar20);
      return param_1;
    }
    func_0x0001015fd618(pcVar16);
  }
  uVar11 = param_2[0x1e];
  param_1[0x1f] = param_2[0x1f];
  *(undefined8 *)pcVar16 = uVar11;
  param_1[0x20] = param_2[0x20];
  return param_1;
}



/* Entry: 1015fd90c; end: 1015fda17;  */

int FUN_1015fd90c(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x3f6 < param_2) && ((char)param_1[0x42] != '\0')) {
    return *param_1 + 0x3f7;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0x1c) << 2;
  iVar2 = 0x3fe - uVar1;
  if (0x3f6 < (uVar1 ^ 0x3ff)) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Entry: 1015fda18; end: 1015fda5f;  */

void FUN_1015fda18(undefined8 *param_1)

{
  FUN_1015fcb34(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                *(undefined1 *)(param_1 + 0xe));
  return;
}



/* Entry: 1015fda60; end: 1015fdc53;  */

undefined8 * FUN_1015fda60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  
  uVar1 = *param_2;
  uVar8 = param_2[1];
  uVar2 = param_2[2];
  uVar9 = param_2[3];
  uVar3 = param_2[4];
  uVar10 = param_2[5];
  uVar4 = param_2[6];
  uVar11 = param_2[7];
  uVar5 = param_2[8];
  uVar12 = param_2[9];
  uVar6 = param_2[10];
  uVar13 = param_2[0xb];
  uVar7 = param_2[0xc];
  uVar14 = param_2[0xd];
  uVar15 = *(undefined1 *)(param_2 + 0xe);
  FUN_1015f88ec(uVar1,uVar8,uVar2,uVar9,uVar3,uVar10,uVar4,uVar11,uVar5,uVar12,uVar6,uVar13,uVar7,
                uVar14,uVar15);
  *param_1 = uVar1;
  param_1[1] = uVar8;
  param_1[2] = uVar2;
  param_1[3] = uVar9;
  param_1[4] = uVar3;
  param_1[5] = uVar10;
  param_1[6] = uVar4;
  param_1[7] = uVar11;
  param_1[8] = uVar5;
  param_1[9] = uVar12;
  param_1[10] = uVar6;
  param_1[0xb] = uVar13;
  param_1[0xc] = uVar7;
  param_1[0xd] = uVar14;
  *(undefined1 *)(param_1 + 0xe) = uVar15;
  return param_1;
}



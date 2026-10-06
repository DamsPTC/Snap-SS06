/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10151f3f4; end: 10151f49b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10151f3f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
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
  ulong *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar25;
  long lVar26;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  ulong uVar27;
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
  
  uVar1 = param_1[1];
  uVar11 = param_1[2];
  lVar24 = param_1[3];
  uVar27 = param_1[4];
  uVar20 = *unaff_x20;
  uVar13 = unaff_x20[1];
  uVar22 = unaff_x20[2];
  pbVar10 = (byte *)unaff_x20[3];
  pbVar25 = (byte *)unaff_x20[4];
  FUN_10151f900(uVar20,*param_1);
  if ((((uVar20 & 1) == 0) || (FUN_10151f900(uVar13,uVar1), (uVar13 & 1) == 0)) ||
     (func_0x00010151f988(uVar22,uVar11), (uVar22 & 1) == 0)) {
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
    uVar5 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar27 >> 0x20);
    uVar21 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar27 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar27 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar27 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = (byte *)((long)register0x00000008 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar14 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar26 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar26,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar26 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar26;
          if (SBORROW8((long)unaff_x24,lVar26)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
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
LAB_100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar25 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar14,lVar24,uVar27
                     );
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar27;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
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
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    lVar26 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
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
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar26 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar24;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar26;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
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
      bVar28 = pbVar14[8] | (byte)lVar24;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar26;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar26 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar26 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar26 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar26 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar26 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar26 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
      lVar24 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar27 = *(ulong *)(pbVar14 + 0x10);
    lVar26 = *(long *)pbVar14;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar26,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
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



/* Entry: 10151f49c; end: 10151f53b;  */

/* WARNING: Possible PIC construction at 0x00010151f4e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151f4f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151f4ec) */
/* WARNING: Removing unreachable block (ram,0x00010151f4fc) */

void FUN_10151f49c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112daf690 != -1) {
    func_0x000107c61568(0x112daf690,FUN_10151f074);
  }
  uVar5 = uRam00000001137ff538;
  uVar4 = uRam00000001137ff530;
  uVar3 = uRam00000001137ff528;
  uVar2 = uRam00000001137ff520;
  uVar1 = uRam00000001137ff518;
  *param_1 = uRam00000001137ff510;
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



/* Entry: 10151f53c; end: 10151f577;  */

void FUN_10151f53c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112daf710;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112daf710,&UNK_10d958258);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10151f578; end: 10151f68b;  */

void FUN_10151f578(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = unaff_x20[2];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10151f68c; end: 10151f72f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10151f68c(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
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
  byte *pbVar25;
  undefined8 unaff_x21;
  ulong unaff_x22;
  ulong uVar26;
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
  
  uVar20 = *param_1;
  uVar13 = param_1[1];
  uVar22 = param_1[2];
  pbVar10 = (byte *)param_1[3];
  pbVar25 = (byte *)param_1[4];
  uVar1 = param_2[1];
  uVar11 = param_2[2];
  lVar24 = param_2[3];
  uVar26 = param_2[4];
  FUN_10151f900(uVar20,*param_2);
  if ((((uVar20 & 1) == 0) || (FUN_10151f900(uVar13,uVar1), (uVar13 & 1) == 0)) ||
     (func_0x00010151f988(uVar22,uVar11), (uVar22 & 1) == 0)) {
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
    uVar5 = (uint)((ulong)pbVar25 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    uVar6 = (uint)(uVar26 >> 0x20);
    uVar21 = uVar6 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar14 = pbVar25;
    if ((ulong)pbVar25 >> 0x3e == 3) {
      uVar20 = 0;
      if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
         ((uVar26 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar26 != 0xc000000000000000))))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar9 = (byte *)0x1;
    }
    else if (uVar5 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar20 = (ulong)pbVar25 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar10 >> 0x20);
        if (SBORROW4(iVar19,iVar8)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar7)();
        }
        uVar20 = (ulong)(iVar19 - iVar8);
      }
joined_r0x000100e26170:
      if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar26 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar7)();
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar7)();
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
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar7)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
        if (uVar18 < 2) {
          if (uVar18 == 0) {
            *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar25;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar25 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar25 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar25 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar25 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar25 >> 0x28);
            pbVar14 = (byte *)((long)register0x00000008 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70));
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar8;
          unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar7)();
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
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar10;
            if (pbVar10 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar10;
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar14 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
          }
          lVar27 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar7)();
            }
            pbVar10 = pbVar10 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar7)();
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar14,lVar24,uVar26
                     );
        pbVar9 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar26;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)((long)register0x00000008 + -0x58)) {
      return pbVar9;
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
    pbVar12 = *(byte **)pbVar9;
    pbVar10 = *(byte **)(pbVar9 + 8);
    pbVar23 = *(byte **)(pbVar9 + 0x18);
    bVar28 = pbVar9[0x28];
    pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar15 = pbVar10;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar24 = *(long *)pbVar14;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar24,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar17 = *(byte **)(pbVar14 + 0x10);
        lVar24 = *(long *)pbVar14;
        uVar11 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
      )(pbVar12,pbVar15,pbVar16,pbVar17,0);
      return pbVar12;
    }
    lVar27 = *(long *)(pbVar9 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
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
      if (lVar27 != 0) {
        if (lVar24 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar23 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar24)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar23,lVar27,*(byte **)(pbVar14 + 0x18),lVar24,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar24 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
          lVar27 == 0) && pbVar25 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar24 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar24;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
        bVar36 = pbVar14[0x10] | (byte)lVar27;
        bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
          lVar27 == 0)) {
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
      lVar27 = *(long *)(pbVar14 + 0x20);
      lVar24 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar24;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar24 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar24 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar24 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar24 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar24 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar24 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar24 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
      lVar24 = CONCAT17(bVar35 | auVar44[7],
                        CONCAT16(bVar34 | auVar44[6],
                                 CONCAT15(bVar33 | auVar44[5],
                                          CONCAT14(bVar32 | auVar44[4],
                                                   CONCAT13(bVar31 | auVar44[3],
                                                            CONCAT12(bVar30 | auVar44[2],
                                                                     CONCAT11(bVar29 | auVar44[1],
                                                                              bVar28 | auVar44[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar14[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar24 = *(long *)(pbVar14 + 8);
    uVar26 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar11 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar12,lVar27,uVar11);
    if (((ulong)pbVar12 & 1) == 0) {
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



/* Entry: 10151f730; end: 10151f777;  */

void FUN_10151f730(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9582a0,0x1d,2);
  uRam00000001137ff548 = uStack_38;
  uRam00000001137ff540 = uStack_40;
  uRam00000001137ff558 = uStack_28;
  uRam00000001137ff550 = uStack_30;
  uRam00000001137ff568 = uStack_18;
  uRam00000001137ff560 = uStack_20;
  return;
}



/* Entry: 10151f778; end: 10151f817;  */

/* WARNING: Possible PIC construction at 0x00010151f7c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151f7d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151f7c8) */
/* WARNING: Removing unreachable block (ram,0x00010151f7d8) */

void FUN_10151f778(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112daf6b0 != -1) {
    func_0x000107c61568(0x112daf6b0,FUN_10151f730);
  }
  uVar5 = uRam00000001137ff568;
  uVar4 = uRam00000001137ff560;
  uVar3 = uRam00000001137ff558;
  uVar2 = uRam00000001137ff550;
  uVar1 = uRam00000001137ff548;
  *param_1 = uRam00000001137ff540;
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



/* Entry: 10151f818; end: 10151f85f;  */

void FUN_10151f818(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d958260,0x35,2);
  uRam00000001137ff578 = uStack_38;
  uRam00000001137ff570 = uStack_40;
  uRam00000001137ff588 = uStack_28;
  uRam00000001137ff580 = uStack_30;
  uRam00000001137ff598 = uStack_18;
  uRam00000001137ff590 = uStack_20;
  return;
}



/* Entry: 10151f860; end: 10151f8ff;  */

/* WARNING: Possible PIC construction at 0x00010151f8ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010151f8bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010151f8b0) */
/* WARNING: Removing unreachable block (ram,0x00010151f8c0) */

void FUN_10151f860(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112daf6b8 != -1) {
    func_0x000107c61568(0x112daf6b8,FUN_10151f818);
  }
  uVar5 = uRam00000001137ff598;
  uVar4 = uRam00000001137ff590;
  uVar3 = uRam00000001137ff588;
  uVar2 = uRam00000001137ff580;
  uVar1 = uRam00000001137ff578;
  *param_1 = uRam00000001137ff570;
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



/* Entry: 10151f900; end: 10151fa2f;  */

undefined8 FUN_10151f900(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar2;
      lVar5 = *(long *)(pcVar3 + -8);
      if (*pcVar3 == '\x01') {
        if (lVar5 == 0) {
          if (lVar4 != 0) {
            return 0;
          }
        }
        else if (lVar5 == 1) {
          if (lVar4 != 1) {
            return 0;
          }
        }
        else if (lVar4 != 2) {
          return 0;
        }
      }
      else if (lVar4 != lVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 10151fa30; end: 10151faef;  */

void FUN_10151fa30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf698 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d957ef0;
  func_0x000107c61520(&DAT_10d957ef0,&UNK_1103d6b30);
  puRam0000000112daf698 = puVar1;
  return;
}



/* Entry: 10151faf0; end: 10151fb03;  */

void FUN_10151faf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10151fb04();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10151fb44)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10151fb04; end: 10151fbaf;  */

void FUN_10151fb04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d957f88;
  func_0x000107c61520(&UNK_10d957f88,&UNK_1103d6b30);
  puRam0000000112daf6c0 = puVar1;
  return;
}



/* Entry: 10151fbb0; end: 10151fbb3;  */

void FUN_10151fbb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d957fc8;
  func_0x000107c61520(&UNK_10d957fc8,&UNK_1103d6b30);
  puRam0000000112daf6d8 = puVar1;
  return;
}



/* Entry: 10151fbb4; end: 10151fbf3;  */

void FUN_10151fbb4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf6d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d957fc8;
  func_0x000107c61520(&UNK_10d957fc8,&UNK_1103d6b30);
  puRam0000000112daf6d8 = puVar1;
  return;
}



/* Entry: 10151fbf4; end: 10151fc07;  */

void FUN_10151fbf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10151fc08();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10151fc48)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10151fc08; end: 10151fcb3;  */

void FUN_10151fc08(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d958088;
  func_0x000107c61520(&UNK_10d958088,&UNK_1103d6bc0);
  puRam0000000112daf6e0 = puVar1;
  return;
}



/* Entry: 10151fcb4; end: 10151fcf7;  */

void FUN_10151fcb4(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10151fcf8; end: 10151fcfb;  */

void FUN_10151fcf8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9580c8;
  func_0x000107c61520(&UNK_10d9580c8,&UNK_1103d6bc0);
  puRam0000000112daf6f8 = puVar1;
  return;
}



/* Entry: 10151fcfc; end: 10151fd3b;  */

void FUN_10151fcfc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9580c8;
  func_0x000107c61520(&UNK_10d9580c8,&UNK_1103d6bc0);
  puRam0000000112daf6f8 = puVar1;
  return;
}



/* Entry: 10151fd3c; end: 10151fd5f;  */

void FUN_10151fd3c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10151fd60();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10151fd60; end: 10151fd9f;  */

void FUN_10151fd60(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d958138;
  func_0x000107c61520(&UNK_10d958138,&UNK_1103d6a90);
  puRam0000000112daf700 = puVar1;
  return;
}



/* Entry: 10151fda0; end: 10151fdb3;  */

void FUN_10151fda0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10151fab0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1014a87f0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10151fdb4; end: 10151fde3;  */

void FUN_10151fdb4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10151fde4; end: 10151fde7;  */

void FUN_10151fde4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9581a0;
  func_0x000107c61520(&UNK_10d9581a0,&UNK_1103d6a90);
  puRam0000000112daf708 = puVar1;
  return;
}



/* Entry: 10151fde8; end: 10151fe27;  */

void FUN_10151fde8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9581a0;
  func_0x000107c61520(&UNK_10d9581a0,&UNK_1103d6a90);
  puRam0000000112daf708 = puVar1;
  return;
}



/* Entry: 10151fe28; end: 10151fe8b;  */

long FUN_10151fe28(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10151fe8c; end: 10151fef3;  */

undefined8 * FUN_10151fe8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  uVar4 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar4);
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  return param_1;
}



/* Entry: 10151fef4; end: 10151ff83;  */

undefined8 * FUN_10151fef4(undefined8 *param_1,undefined8 *param_2)

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
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 10151ff84; end: 10151ffdf;  */

undefined8 * FUN_10151ff84(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10151ffe0; end: 1015200a7;  */

int FUN_10151ffe0(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015200a8; end: 1015200e7;  */

void FUN_1015200a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112daf718 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d95810c;
  func_0x000107c61520(&DAT_10d95810c,&UNK_1103d6a90);
  puRam0000000112daf718 = puVar1;
  return;
}



/* Entry: 1015200e8; end: 10152013f;  */

void FUN_1015200e8(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 101520140; end: 101520187; -[SCRegistrationDisplayNameBirthdayScope delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520140(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112daf720;
  func_0x000107c61428(param_1 + _DAT_112daf720,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101520188; end: 1015201df; -[SCRegistrationDisplayNameBirthdayScope setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520188(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112daf720;
  func_0x000107c61428(param_1 + _DAT_112daf720,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1015201e0; end: 1015201ff; -[SCRegistrationDisplayNameBirthdayScope uiContainer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015201e0(long param_1)

{
  func_0x000107c615f0(*(undefined8 *)(param_1 + _DAT_112daf728));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101520200; end: 10152020b; -[SCRegistrationDisplayNameBirthdayScope defaultFirstName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520200(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112daf730))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112daf730);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10152020c; end: 101520217; -[SCRegistrationDisplayNameBirthdayScope defaultLastName] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152020c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + _DAT_112daf738))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + _DAT_112daf738);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101520218; end: 10152026f;  */

void FUN_101520218(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = ((undefined8 *)(param_1 + *param_3))[1];
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(param_1 + *param_3);
    func_0x000107c61434(lVar1);
    func_0x000107c5fadc(uVar2,lVar1);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 101520270; end: 101520337; -[SCRegistrationDisplayNameBirthdayScope defaultBirthday] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520270(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &stack0xffffffffffffffd0 + -extraout_x8;
  func_0x0001009f0578(param_1 + _DAT_1137ff5a0,puVar4);
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar5 = *(long *)(lVar1 + -8);
  puVar2 = puVar4;
  (**(code **)(lVar5 + 0x30))(puVar4,1,lVar1);
  uVar3 = 0;
  if ((int)puVar2 != 1) {
    func_0x000107c5ee70(0);
    (**(code **)(lVar5 + 8))(puVar4,lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101520338; end: 101520347; -[SCRegistrationDisplayNameBirthdayScope viewConfig] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520338(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1137ff5a8));
  return;
}



/* Entry: 101520348; end: 101520357; -[SCRegistrationDisplayNameBirthdayScope registrationRequestObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520348(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_1137ff5b0));
  return;
}



/* Entry: 101520358; end: 10152048b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101520358(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_88 [8];
  undefined1 auStack_78 [24];
  
  func_0x000107c610f8();
  lVar2 = _DAT_112daf720;
  func_0x000107c61614(unaff_x20 + _DAT_112daf720,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112daf728) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daf730);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daf738);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x0001009f0578(param_7,unaff_x20 + _DAT_1137ff5a0);
  *(undefined8 *)(unaff_x20 + _DAT_1137ff5a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1137ff5b0) = param_9;
  puVar3 = auStack_88;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x0001000d1dcc(param_7);
  return puVar3;
}



/* Entry: 10152048c; end: 101520663; -[SCRegistrationDisplayNameBirthdayScope initWithDelegate:uiContainer:defaultFirstName:defaultLastName:defaultBirthday:viewConfig:registrationRequestObservable:] */

undefined8
FUN_10152048c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long extraout_x8;
  code *pcVar5;
  undefined *puVar6;
  undefined8 auStack_80 [2];
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d373d8;
  puVar6 = &UNK_10d9014c0;
  uStack_68 = param_1;
  func_0x0001000285a8();
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = (long)&puStack_70 + -extraout_x8;
  if (param_5 == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_5);
    puVar1 = puVar6;
  }
  if (param_6 == 0) {
    puVar6 = (undefined *)0x0;
  }
  else {
    func_0x000107c5faec(param_6);
  }
  if (param_7 == 0) {
    lVar3 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(lVar2,1,1,lVar3);
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
  }
  else {
    func_0x000107c5ee94(lVar2,param_7);
    lVar3 = 0;
    func_0x000107c5eea4();
    pcVar5 = *(code **)(*(long *)(lVar3 + -8) + 0x38);
    puStack_70 = puVar6;
    func_0x000107c615f0(param_3);
    func_0x000107c615f0(param_4);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    (*pcVar5)(lVar2,0,1,lVar3);
    puVar6 = puStack_70;
  }
  *(undefined8 *)((long)auStack_80 + -extraout_x8) = param_9;
  uVar4 = param_3;
  FUN_101520728(param_3,param_4,param_5,puVar1,param_6,puVar6,lVar2,param_8);
  func_0x000107c615e8(param_3);
  return uVar4;
}



/* Entry: 101520664; end: 101520697;  */

void FUN_101520664(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101520698; end: 101520727; -[SCRegistrationDisplayNameBirthdayScope .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010152070c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101520710) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101520698(long param_1)

{
  FUN_100ee63b8(param_1 + _DAT_112daf720);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112daf728));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112daf730 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112daf738 + 8));
  func_0x0001000d1dcc(param_1 + _DAT_1137ff5a0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_1137ff5a8));
  return;
}



/* Entry: 101520728; end: 10152084f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_101520728(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_78 [24];
  
  func_0x000107c614f0();
  lVar2 = _DAT_112daf720;
  func_0x000107c61614(unaff_x20 + _DAT_112daf720,0);
  func_0x000107c61428(unaff_x20 + lVar2,auStack_78,1,0);
  func_0x000107c61604(unaff_x20 + lVar2,param_1);
  *(undefined8 *)(unaff_x20 + _DAT_112daf728) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daf730);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112daf738);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  func_0x0001009f0578(param_7,unaff_x20 + _DAT_1137ff5a0);
  *(undefined8 *)(unaff_x20 + _DAT_1137ff5a8) = param_8;
  *(undefined8 *)(unaff_x20 + _DAT_1137ff5b0) = param_9;
  puVar3 = &stack0xffffffffffffff78;
  func_0x000107c61154(puVar3,PTR_s_init_1125d9248);
  func_0x0001000d1dcc(param_7);
  return puVar3;
}



/* Entry: 101520850; end: 101520857;  */

void FUN_101520850(void)

{
  if (lRam0000000113445fa0 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e6442b8);
  return;
}



/* Entry: 101520858; end: 10152088f;  */

void FUN_101520858(undefined8 param_1)

{
  if (lRam0000000113445fa0 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e6442b8);
  return;
}



/* Entry: 101520890; end: 101520933;  */

void FUN_101520890(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  long lStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  
  puStack_58 = &UNK_10d958348;
  puStack_50 = &UNK_10d958360;
  puStack_48 = &UNK_10d958378;
  puStack_40 = &UNK_10d958378;
  lVar1 = 0x13f;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___sBOWV_11034d658 + 0x40;
    puStack_28 = &UNK_10d958390;
    func_0x000107c61630(param_1,0x100,7,&puStack_58,param_1 + 0x50);
  }
  return;
}



/* Entry: 101520934; end: 101520937;  */

void FUN_101520934(void)

{
  return;
}



/* Entry: 101520938; end: 101520977; +[_TtC36SCRegistrationChallengePageTypeUtils36SCRegistrationChallengePageTypeUtils pageTypeFor:] */

undefined8 FUN_101520938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  FUN_1015209e4(param_3);
  func_0x000107c61170(uVar1);
  return param_3;
}



/* Entry: 101520978; end: 1015209b3; -[_TtC36SCRegistrationChallengePageTypeUtils36SCRegistrationChallengePageTypeUtils init] */

void FUN_101520978(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  FUN_101520c14();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1015209b4; end: 1015209e3;  */

void FUN_1015209b4(void)

{
  FUN_101520c14();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1015209e4; end: 101520c13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1015209e4(long param_1)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [16];
  long *plStack_50;
  long lStack_48;
  
  if (param_1 == 0) {
    return 0xb1;
  }
  lVar6 = *(long *)(param_1 + _DAT_113093488);
  if (lVar6 == 0) {
    return 0xb1;
  }
  plStack_50 = &lStack_48;
  lStack_48 = 0;
  func_0x000107c61174();
  func_0x000107c61174(lVar6);
  func_0x000104869050(FUN_101520c34,auStack_60,FUN_101520934,0);
  if (lStack_48 != 0) {
    lVar3 = lStack_48;
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c5dfd8();
    iVar2 = (int)lVar4;
    if (iVar2 == 10) {
      lVar4 = lVar3;
      func_0x000107c4e0e4();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c51f20();
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar6);
        if (lVar5 != 0) {
          return 0x2e;
        }
        return 0xb1;
      }
    }
    else if (iVar2 == 7) {
      lVar4 = lVar3;
      func_0x000107c3fe80();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c41768();
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar6);
        if ((int)lVar5 != 3) {
          return 0xb1;
        }
        return 0x2e;
      }
    }
    else {
      if (iVar2 != 6) {
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        goto LAB_101520bec;
      }
      lVar4 = lVar3;
      func_0x000107c3fe78();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c61174();
        lVar5 = lVar4;
        func_0x000107c3fe7c();
        func_0x000107c61170(param_1);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar4);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar3);
        func_0x000107c61170(lVar6);
        uVar1 = (int)lVar5 - 1;
        if (5 < uVar1) {
          return 0xb1;
        }
        return *(undefined8 *)(&UNK_10d9583d8 + (ulong)uVar1 * 8);
      }
    }
    func_0x000107c61170(param_1);
    func_0x000107c61170(lVar3);
    param_1 = lVar3;
  }
LAB_101520bec:
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar6);
  return 0xb1;
}



/* Entry: 101520c14; end: 101520c33;  */

void FUN_101520c14(void)

{
  func_0x000107c61168(&PTR_PTR_1127df550);
  return;
}



/* Entry: 101520c34; end: 101520cbb;  */

void FUN_101520c34(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 101520cbc; end: 101520e7f;  */

void FUN_101520cbc(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined **ppuVar4;
  undefined8 *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined8 uStack_70;
  
  puVar5 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar2 = puVar5;
  func_0x000107c5b034();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar3 != (undefined8 *)0x0) {
    FUN_10152100c();
    uVar6 = *puVar2;
    pcStack_78 = FUN_101520e80;
    uStack_70 = 0;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_100f17d9c;
    puStack_80 = &UNK_1103d6e20;
    ppuVar4 = &puStack_98;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61174(uVar6);
    puVar2 = puVar3;
    func_0x000107c5078c(puVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar2);
    func_0x000107c615e8(puVar3);
    func_0x000107c61170(uVar6);
  }
  func_0x000107c5b034();
  func_0x000107c61180();
  puVar2 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170();
  if (puVar2 != (undefined8 *)0x0) {
    FUN_101521180();
    func_0x000107c61428();
    uVar6 = *puVar5;
    pcStack_78 = FUN_101520e80;
    uStack_70 = 0;
    puStack_98 = puVar1;
    uStack_90 = 0x42000000;
    pcStack_88 = FUN_100f17d9c;
    puStack_80 = &UNK_1103d6df8;
    ppuVar4 = &puStack_98;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61174(uVar6);
    puVar3 = puVar2;
    func_0x000107c5078c(puVar2);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(puVar3);
    func_0x000107c615e8(puVar2);
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 101520e80; end: 101520ea3;  */

void FUN_101520e80(void)

{
  return;
}



/* Entry: 101520ea4; end: 101520ec7;  */

void FUN_101520ea4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101520ec8; end: 101520ee7;  */

void FUN_101520ec8(void)

{
  FUN_101520cbc();
  return;
}



/* Entry: 101520ee8; end: 101520eef;  */

undefined8 FUN_101520ee8(void)

{
  return 0;
}



/* Entry: 101520ef0; end: 101520f0f;  */

void FUN_101520ef0(void)

{
  func_0x000107c61168(&PTR_PTR_112daf7d0);
  return;
}



/* Entry: 101520f10; end: 101520f17;  */

void FUN_101520f10(long param_1,long param_2)

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



/* Entry: 101520f18; end: 10152100b;  */

void FUN_101520f18(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  uVar2 = 0xd00000000000005d;
  func_0x000107c5fadc(0xd00000000000005d,0x800000010ef8d510);
  func_0x000107c3f71c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460ec();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b17d8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c61170(puVar1);
  puRam00000001137ff5b8 = puVar3;
  return;
}



/* Entry: 10152100c; end: 10152104b;  */

undefined8 FUN_10152100c(void)

{
  if (lRam0000000113445fb0 != -1) {
    func_0x000107c61568(0x113445fb0,FUN_101520f18);
  }
  return 0x1137ff5b8;
}



/* Entry: 10152104c; end: 10152108b; +[SCSimpleContentFetchingConfigBuilder contactsIconImageBuilder] */

void FUN_10152104c(void)

{
  if (lRam0000000113445fb0 != -1) {
    func_0x000107c61568(0x113445fb0,FUN_101520f18);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)(uRam00000001137ff5b8);
  return;
}



/* Entry: 10152108c; end: 10152117f;  */

void FUN_10152108c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  puVar1 = PTR_PTR_1126b08b0;
  func_0x000107c61168(PTR_PTR_1126b08b0);
  uVar2 = 0xd00000000000005d;
  func_0x000107c5fadc(0xd00000000000005d,0x800000010ef8d4b0);
  func_0x000107c3f71c(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  puVar3 = PTR_PTR_1126b17d8;
  func_0x000107c610f8();
  func_0x000107c61174(puVar1);
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5fc48(PTR___swiftEmptyArrayStorage_11034f1c8,PTR___sSSN_11034da80);
  func_0x000107c460ec();
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  if (puVar3 == (undefined *)0x0) {
    puVar3 = PTR_PTR_1126b17d8;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  func_0x000107c61170(puVar1);
  puRam00000001137ff5c0 = puVar3;
  return;
}



/* Entry: 101521180; end: 1015211bf;  */

undefined8 FUN_101521180(void)

{
  if (lRam0000000113445fb8 != -1) {
    func_0x000107c61568(0x113445fb8,FUN_10152108c);
  }
  return 0x1137ff5c0;
}



/* Entry: 1015211c0; end: 10152122b; +[SCSimpleContentFetchingConfigBuilder pointerImageBuilder] */

void FUN_1015211c0(void)

{
  undefined1 auStack_38 [24];
  
  if (lRam0000000113445fb8 != -1) {
    func_0x000107c61568(0x113445fb8,FUN_10152108c);
  }
  func_0x000107c61428(0x1137ff5c0,auStack_38,0,0);
  func_0x000107c6117c(uRam00000001137ff5c0);
  return;
}



/* Entry: 10152122c; end: 1015212a7; +[SCSimpleContentFetchingConfigBuilder setPointerImageBuilder:] */

void FUN_10152122c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_38 [24];
  
  lVar1 = lRam0000000113445fb8;
  func_0x000107c61174();
  if (lVar1 != -1) {
    func_0x000107c61568(0x113445fb8,FUN_10152108c);
  }
  func_0x000107c61428(0x1137ff5c0,auStack_38,1,0);
  uVar2 = uRam00000001137ff5c0;
  uRam00000001137ff5c0 = param_3;
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1015212a8; end: 101521313;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015212a8(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_10152169c();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112daf838) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101521314; end: 10152137f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101521314(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112daf838) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101521380; end: 1015213df; -[_TtC44UserVerificationScopedFactoryServiceProvider32SCUserVerificationScopedServices init] */

void FUN_101521380(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserVerificationScopedFactoryServiceProvider.SCUserVerificationScopedServices"
                      ,0x4d,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1015213ac);
  (*pcVar1)();
}



/* Entry: 1015213e0; end: 1015213ef; -[_TtC44UserVerificationScopedFactoryServiceProvider32SCUserVerificationScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015213e0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112daf838));
  return;
}



/* Entry: 1015213f0; end: 10152145b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015213f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103d70b0;
  func_0x000107c613fc(&UNK_1103d70b0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101521734,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10152145c; end: 1015214f7;  */

void FUN_10152145c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60);
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1103d6fc0;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1103d6fc0;
  return;
}



/* Entry: 1015214f8; end: 10152152f;  */

void FUN_1015214f8(long *param_1)

{
  long lVar1;
  
  lVar1 = 0;
  func_0x000100094f24();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x10) = 0;
  *(undefined8 *)(lVar1 + 0x18) = 0;
  *param_1 = lVar1;
  return;
}



/* Entry: 101521530; end: 101521537;  */

undefined8 FUN_101521530(void)

{
  return 0x1b;
}



/* Entry: 101521538; end: 10152166b;  */

void FUN_101521538(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103d70d8;
  func_0x000107c613fc(&UNK_1103d70d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10152170c;
  func_0x00010058fa64(FUN_10152170c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 10152166c; end: 10152169b;  */

undefined ** FUN_10152166c(void)

{
  return &PTR_DAT_1130670d8;
}



/* Entry: 10152169c; end: 1015216bb;  */

void FUN_10152169c(void)

{
  func_0x000107c61168(&PTR_PTR_1127df600);
  return;
}



/* Entry: 1015216bc; end: 10152170b;  */

undefined1  [16] FUN_1015216bc(void)

{
  return ZEXT816(0x1103d7010);
}



/* Entry: 10152170c; end: 101521733;  */

void FUN_10152170c(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101521734; end: 101521737;  */

void FUN_101521734(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101521738; end: 1015217e3;  */

void FUN_101521738(void)

{
  func_0x0001000285a8(0x112daf8a0,&UNK_10d9586b0);
  func_0x0001000823a8(0x101521778,0);
  return;
}



/* Entry: 1015217e4; end: 1015217f3;  */

undefined1  [16] FUN_1015217e4(void)

{
  return ZEXT816(0x1103d7118);
}



/* Entry: 1015217f4; end: 101521a6b;  */

void FUN_1015217f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uStack_68;
  
  uVar7 = *param_2;
  func_0x0001000285a8(0x112daf8b0,&UNK_10d9586f8);
  puVar1 = &uStack_68;
  uStack_68 = uVar7;
  func_0x0001000838ec();
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar2 = FUN_1015214f8;
  func_0x0001000823a8(FUN_1015214f8,0);
  pcVar3 = "SCUserVerificationScopedServicesCleanupRelayServiceProvider";
  func_0x000100082720("SCUserVerificationScopedServicesCleanupRelayServiceProvider",0x3b,2);
  FUN_101522238();
  func_0x000100082720("UserVerificationScopeGraphBridgeServicesServiceProvider",0x37,2);
  func_0x0001000285a8(0x112daf8b8,&UNK_10d958708);
  puVar4 = &UNK_1103d7138;
  func_0x000107c613fc(&UNK_1103d7138,0x28,7);
  *(undefined8 **)(puVar4 + 0x10) = puVar1;
  *(code **)(puVar4 + 0x18) = pcVar2;
  *(char **)(puVar4 + 0x20) = pcVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(pcVar2);
  func_0x000107c6157c(pcVar3);
  pcVar5 = FUN_101521a6c;
  func_0x0001000823a8(FUN_101521a6c,puVar4);
  func_0x000100082720("SCUserVerificationScopeInitializationPluginRegistryServiceProvider",0x42,2);
  func_0x0001000285a8(0x112daf840,&UNK_10d9584a0);
  func_0x000107c6157c(pcVar5);
  uVar7 = 0x101521a78;
  func_0x0001000823a8(0x101521a78,pcVar5);
  func_0x000100082720("SCUserVerificationScopeInitializationServiceProvider",0x34,2);
  func_0x0001000285a8(0x112daf830,&UNK_10d958490);
  func_0x000107c6157c(uVar7);
  uVar6 = 0x101521a80;
  func_0x0001000823a8(0x101521a80,uVar7);
  func_0x000100082720("SCUserVerificationScopedServicesServiceProvider",0x2f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar4 = &UNK_1103d7160;
  func_0x000107c613fc(&UNK_1103d7160,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(code **)(puVar4 + 0x18) = pcVar2;
  func_0x000107c6157c(pcVar2);
  uVar6 = 0x101521a88;
  func_0x0001000823a8(0x101521a88,puVar4);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(pcVar2);
  func_0x000107c61574(pcVar3);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar7);
  func_0x000100082720("SCUserVerificationScopeEntryPointProvider",0x29,2);
  *param_1 = uVar6;
  return;
}



/* Entry: 101521a6c; end: 101521a8f;  */

void FUN_101521a6c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101521acc(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000a7f38("SCUserVerificationScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101521a90; end: 101521acb;  */

void FUN_101521a90(undefined8 *param_1,undefined8 param_2)

{
  FUN_101521acc();
  func_0x0001000a7f38("SCUserVerificationScopeInitializationPluginRegistryServiceProvider",0x42,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101521acc; end: 101521d0b;  */

void FUN_101521acc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074de88;
  ppuVar4 = &PTR_DAT_1130670d8;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1103d7188;
  func_0x000107c613fc(&UNK_1103d7188,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112daf8c0;
  func_0x0001000285a8(0x112daf8c0,&UNK_10d958710);
  func_0x0001000a6ee8(&UNK_1103d7050,"SCUserVerificationScopedServicesScopeInitializationPluginKey",
                      0x3c,2,FUN_101521d0c,puVar2,uVar3,&UNK_1103d7050,&PTR_DAT_112daf848);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_1103d71b0;
  func_0x000107c613fc(&UNK_1103d71b0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1103d7398,"UserVerificationScopeGraphBridgeScopeInitializationPluginKey",
                      0x3c,2,FUN_101521d14,puVar2,uVar3,&UNK_1103d7398,&PTR_DAT_112daf950);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112daf8c8;
  func_0x0001000285a8(0x112daf8c8,&UNK_10d958718);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101521d0c; end: 101521d13;  */

void FUN_101521d0c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1103d71d8;
  func_0x000107c613fc(&UNK_1103d71d8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101521d80;
  func_0x0001000823a8(FUN_101521d80,puVar3);
  func_0x000100082720("SCUserVerificationScopedServicesScopeInitializationPluginProvider",0x41,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101521d14; end: 101521d53;  */

void FUN_101521d14(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10152231c(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("UserVerificationScopeGraphBridgeScopeInitializationPluginProvider",0x41,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101521d54; end: 101521d7f;  */

void FUN_101521d54(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101521d80; end: 101521d87;  */

void FUN_101521d80(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  uVar2 = uStack_38;
  func_0x000107c61174();
  func_0x000100083b20(&uStack_38);
  func_0x00010058fc80(uStack_38,&PTR_DAT_1107a3be8);
  func_0x000107c61170(uVar2);
  puVar1 = &UNK_1103d70d8;
  func_0x000107c613fc(&UNK_1103d70d8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_10152170c;
  func_0x00010058fa64(FUN_10152170c,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101521d88; end: 101521e0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101521d88(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101522148();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112daf8d0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112daf8d8) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101521e10);
  (*pcVar1)();
}



/* Entry: 101521e10; end: 101521e6f; -[_TtC32UserVerificationScopeGraphBridge47UserVerificationScopeGraphBridgeSaberEntryPoint init] */

void FUN_101521e10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("UserVerificationScopeGraphBridge.UserVerificationScopeGraphBridgeSaberEntryPoint"
                      ,0x50,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101521e3c);
  (*pcVar1)();
}



/* Entry: 101521e70; end: 101521ea7; -[_TtC32UserVerificationScopeGraphBridge47UserVerificationScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101521e8c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101521e90) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101521e70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112daf8d0));
  return;
}



/* Entry: 101521ea8; end: 101521ecf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101521ea8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112daf8d8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112daf8d0));
  return;
}



/* Entry: 101521ed0; end: 101521eef;  */

void FUN_101521ed0(void)

{
  func_0x000107c61168(&PTR_PTR_1127df6c0);
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10362a058; end: 10362a083;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10362a058(float *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
  float *unaff_x20;
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
  
  bVar8 = false;
  if ((*unaff_x20 == *param_1) && (bVar8 = false, !NAN(unaff_x20[1]) && !NAN(param_1[1]))) {
    bVar8 = unaff_x20[1] == param_1[1];
  }
  if (!bVar8) {
    return (byte *)0x0;
  }
  pbVar11 = *(byte **)(unaff_x20 + 2);
  pbVar26 = *(byte **)(unaff_x20 + 4);
  lVar25 = *(long *)(param_1 + 2);
  uVar17 = *(ulong *)(param_1 + 4);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(float **)(puVar7 + -0x20) = unaff_x20;
    *(byte **)(puVar7 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar7 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar7 + -8) = unaff_x30;
    *(undefined8 *)(puVar7 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar26 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
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
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (float *)((ulong)pbVar26 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
    }
    func_0x000107c60e78();
    *(byte **)(puVar7 + -0xc0) = unaff_x24;
    *(byte **)(puVar7 + -0xb8) = unaff_x23;
    *(ulong *)(puVar7 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar7 + -0xa8) = unaff_x21;
    *(float **)(puVar7 + -0xa0) = unaff_x20;
    *(byte **)(puVar7 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar7 + -0x90) = puVar7 + -0x10;
    *(undefined **)(puVar7 + -0x88) = &UNK_100e26304;
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
      lVar25 = CONCAT17(bVar35 | auVar44[7],
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
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
    if (((ulong)pbVar13 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar7 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar7 + -0x88);
    unaff_x20 = *(float **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10362a084; end: 10362a123;  */

/* WARNING: Possible PIC construction at 0x00010362a0d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362a0e0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362a0d4) */
/* WARNING: Removing unreachable block (ram,0x00010362a0e4) */

void FUN_10362a084(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80c28 != -1) {
    func_0x000107c61568(0x112f80c28,FUN_103629e18);
  }
  uVar5 = uRam000000011380aab8;
  uVar4 = uRam000000011380aab0;
  uVar3 = uRam000000011380aaa8;
  uVar2 = uRam000000011380aaa0;
  uVar1 = uRam000000011380aa98;
  *param_1 = uRam000000011380aa90;
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



/* Entry: 10362a124; end: 10362a137;  */

void FUN_10362a124(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80df8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80df8,&UNK_10dbef4f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10362a138; end: 10362a23b;  */

void FUN_10362a138(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10362a23c; end: 10362a293;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10362a23c(float *param_1,float *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  bool bVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  ulong uVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ulong uVar23;
  byte *pbVar24;
  byte *unaff_x19;
  long lVar25;
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
  
  bVar8 = false;
  if ((*param_1 == *param_2) && (bVar8 = false, !NAN(param_1[1]) && !NAN(param_2[1]))) {
    bVar8 = param_1[1] == param_2[1];
  }
  if (!bVar8) {
    return (byte *)0x0;
  }
  lVar25 = *(long *)(param_2 + 2);
  uVar17 = *(ulong *)(param_2 + 4);
  pbVar11 = *(byte **)(param_1 + 2);
  pbVar26 = *(byte **)(param_1 + 4);
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
    uVar19 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar22 = uVar5 >> 0x1e;
    iVar9 = (int)pbVar11;
    pbVar14 = pbVar26;
    if ((ulong)pbVar26 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar10 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar19 == 0) {
        uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
      }
      else {
        iVar20 = (int)((ulong)pbVar11 >> 0x20);
        if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar21 = (ulong)(iVar20 - iVar9);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar22 == 0) {
        uVar23 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar20 = (int)((ulong)lVar25 >> 0x20);
      if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar21 == (long)(iVar20 - (int)lVar25)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar10 = (byte *)0x0;
    }
    else {
      if (uVar19 == 2) {
        uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
        if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar21 = 0;
      if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar22 == 2) {
        uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
        if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar21 != uVar23) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar21 < 1) goto code_r0x000100e26128;
        if (uVar19 < 2) {
          if (uVar19 == 0) {
            puVar7[-0x70] = (char)pbVar11;
            puVar7[-0x6f] = (char)((ulong)pbVar11 >> 8);
            puVar7[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
            puVar7[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
            puVar7[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
            puVar7[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
            puVar7[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
            puVar7[-0x69] = (char)((ulong)pbVar11 >> 0x38);
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
            pbVar10 = (byte *)(ulong)(byte)puVar7[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar9;
          unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar11 = (byte *)0x0;
          }
          else {
            pbVar14 = pbVar11;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar14);
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar14) {
                pbVar14 = unaff_x23;
              }
              pbVar14 = pbVar14 + (long)pbVar11;
              goto code_r0x000100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar19 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar27 = *(long *)(pbVar11 + 0x10);
          unaff_x24 = *(byte **)(pbVar11 + 0x18);
          func_0x000107c5ec30();
          pbVar14 = pbVar11;
          if (pbVar11 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar27,(long)pbVar14)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar11 = pbVar11 + (lVar27 - (long)pbVar14);
          }
          unaff_x23 = unaff_x24 + -lVar27;
          if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar11;
          unaff_x25 = pbVar26;
          if (pbVar11 == (byte *)0x0) {
            pbVar14 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar14) {
              pbVar14 = unaff_x23;
            }
            pbVar14 = pbVar14 + (long)pbVar11;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar11,pbVar14,lVar25,uVar17);
        pbVar10 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar17;
      }
      else {
        pbVar10 = (byte *)(ulong)(uVar21 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar7 + -0x58)) {
      return pbVar10;
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
    pbVar13 = *(byte **)pbVar10;
    pbVar11 = *(byte **)(pbVar10 + 8);
    pbVar24 = *(byte **)(pbVar10 + 0x18);
    bVar28 = pbVar10[0x28];
    pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
    pbVar15 = pbVar11;
    if (bVar28 < 3) {
      if (bVar28 == 0) {
        if (pbVar14[0x28] == 0) {
          lVar25 = *(long *)pbVar14;
          uVar12 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          return (byte *)(ulong)((uint)pbVar13 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar28 == 1) {
        if (pbVar14[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar18 = *(byte **)(pbVar14 + 0x10);
        lVar25 = *(long *)pbVar14;
        uVar12 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar13,lVar25,uVar12);
        if (((ulong)pbVar13 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 == pbVar16) && (pbVar26 == pbVar18)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar14[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        lVar25 = *(long *)(pbVar14 + 0x18);
        if ((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) {
          if (((pbVar10[0x10] ^ pbVar14[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar25);
          func_0x000107c61174();
          pbVar11 = pbVar24;
          func_0x000107c60118();
          func_0x000107c61170(pbVar24);
          func_0x000107c61170(lVar25);
          pbVar24 = pbVar11;
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
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
      )(pbVar13,pbVar15,pbVar16,pbVar18,0);
      return pbVar13;
    }
    lVar27 = *(long *)(pbVar10 + 0x20);
    if (bVar28 < 5) {
      if (bVar28 != 3) {
        if (pbVar14[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)pbVar14;
        pbVar18 = *(byte **)(pbVar14 + 8);
        if (((pbVar13 == pbVar16) && (pbVar11 == pbVar18)) &&
           (pbVar13 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
           pbVar18 = *(byte **)(pbVar14 + 0x18),
           pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar14[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar14 != ((uint)pbVar13 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar18 = *(byte **)(pbVar14 + 0x10);
      lVar25 = *(long *)(pbVar14 + 0x20);
      if (pbVar26 == (byte *)0x0) {
        if (pbVar18 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar18 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar16 = *(byte **)(pbVar14 + 8);
        pbVar13 = pbVar11;
        pbVar15 = pbVar26;
        if ((pbVar11 != pbVar16) || (pbVar26 != pbVar18)) goto code_r0x000107c605b8;
      }
      if (lVar27 != 0) {
        if (lVar25 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar24 == *(byte **)(pbVar14 + 0x18)) && (lVar27 == lVar25)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar14 + 0x18),lVar25,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar25 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar28 != 5) {
      if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
          lVar27 == 0) && pbVar26 == (byte *)0x0) {
        if (pbVar14[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar27 = *(long *)(pbVar14 + 0x20);
        lVar25 = *(long *)(pbVar14 + 0x18);
        bVar28 = pbVar14[8] | (byte)lVar25;
        bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
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
                                                                  CONCAT11(bVar29 | auVar44[1],
                                                                           bVar28 | auVar44[0]))))))
                    ) == 0 && *(long *)pbVar14 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar13 == (byte *)0x1) &&
         (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
      lVar25 = *(long *)(pbVar14 + 0x18);
      bVar28 = pbVar14[8] | (byte)lVar25;
      bVar29 = pbVar14[9] | (byte)((ulong)lVar25 >> 8);
      bVar30 = pbVar14[10] | (byte)((ulong)lVar25 >> 0x10);
      bVar31 = pbVar14[0xb] | (byte)((ulong)lVar25 >> 0x18);
      bVar32 = pbVar14[0xc] | (byte)((ulong)lVar25 >> 0x20);
      bVar33 = pbVar14[0xd] | (byte)((ulong)lVar25 >> 0x28);
      bVar34 = pbVar14[0xe] | (byte)((ulong)lVar25 >> 0x30);
      bVar35 = pbVar14[0xf] | (byte)((ulong)lVar25 >> 0x38);
      bVar36 = pbVar14[0x10] | (byte)lVar27;
      bVar37 = pbVar14[0x11] | (byte)((ulong)lVar27 >> 8);
      bVar38 = pbVar14[0x12] | (byte)((ulong)lVar27 >> 0x10);
      bVar39 = pbVar14[0x13] | (byte)((ulong)lVar27 >> 0x18);
      bVar40 = pbVar14[0x14] | (byte)((ulong)lVar27 >> 0x20);
      bVar41 = pbVar14[0x15] | (byte)((ulong)lVar27 >> 0x28);
      bVar42 = pbVar14[0x16] | (byte)((ulong)lVar27 >> 0x30);
      bVar43 = pbVar14[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
      lVar25 = CONCAT17(bVar35 | auVar44[7],
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
    lVar25 = *(long *)(pbVar14 + 8);
    uVar17 = *(ulong *)(pbVar14 + 0x10);
    lVar27 = *(long *)pbVar14;
    uVar12 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar13,lVar27,uVar12);
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



/* Entry: 10362a294; end: 10362a2db;  */

void FUN_10362a294(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbef550,0x10,2);
  uRam000000011380aad8 = uStack_38;
  uRam000000011380aad0 = uStack_40;
  uRam000000011380aae8 = uStack_28;
  uRam000000011380aae0 = uStack_30;
  uRam000000011380aaf8 = uStack_18;
  uRam000000011380aaf0 = uStack_20;
  return;
}



/* Entry: 10362a2dc; end: 10362a373;  */

void FUN_10362a2dc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10362a330:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010362a34c;
  pcVar3 = *(code **)(param_3 + 0x48);
  goto LAB_10362a318;
code_r0x00010362a34c:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x48);
LAB_10362a318:
    (*pcVar3)();
  }
  goto LAB_10362a330;
}



/* Entry: 10362a374; end: 10362a40b;  */

void FUN_10362a374(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((((int)param_2 == 0) ||
      ((**(code **)(param_6 + 0x18))(param_2,1,param_5,param_6), unaff_x21 == 0)) &&
     ((param_2 >> 0x20 == 0 ||
      ((**(code **)(param_6 + 0x18))(param_2 >> 0x20,2,param_5,param_6), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 10362a40c; end: 10362a43b;  */

void FUN_10362a40c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  return;
}



/* Entry: 10362a43c; end: 10362a497;  */

undefined1  [16]
FUN_10362a43c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
             undefined8 *param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (*param_3 != -1) {
    func_0x000107c61568(param_3,param_6);
  }
  uVar1 = *param_4;
  uVar2 = *param_5;
  func_0x000107c61434(uVar2);
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 10362a498; end: 10362a4b3;  */

undefined8 FUN_10362a498(void)

{
  return 1;
}



/* Entry: 10362a4b4; end: 10362a4eb;  */

void FUN_10362a4b4(void)

{
  FUN_10362a2dc();
  return;
}



/* Entry: 10362a4ec; end: 10362a523;  */

uint FUN_10362a4ec(long param_1,long param_2)

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
  func_0x00010362d828();
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



/* Entry: 10362a524; end: 10362a54f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10362a524(int *param_1)

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
  int *unaff_x20;
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
  
  if (*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) {
    return (byte *)0x0;
  }
  pbVar10 = *(byte **)(unaff_x20 + 2);
  pbVar25 = *(byte **)(unaff_x20 + 4);
  lVar24 = *(long *)(param_1 + 2);
  uVar16 = *(ulong *)(param_1 + 4);
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(int **)(puVar7 + -0x20) = unaff_x20;
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
        unaff_x20 = (int *)((ulong)pbVar25 & 0x3fffffffffffffff);
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
    *(int **)(puVar7 + -0xa0) = unaff_x20;
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
    unaff_x20 = *(int **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 10362a550; end: 10362a5ef;  */

/* WARNING: Possible PIC construction at 0x00010362a59c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362a5ac: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362a5a0) */
/* WARNING: Removing unreachable block (ram,0x00010362a5b0) */

void FUN_10362a550(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80c40 != -1) {
    func_0x000107c61568(0x112f80c40,FUN_10362a294);
  }
  uVar5 = uRam000000011380aaf8;
  uVar4 = uRam000000011380aaf0;
  uVar3 = uRam000000011380aae8;
  uVar2 = uRam000000011380aae0;
  uVar1 = uRam000000011380aad8;
  *param_1 = uRam000000011380aad0;
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



/* Entry: 10362a5f0; end: 10362a603;  */

void FUN_10362a5f0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80de8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80de8,&UNK_10dbef4e8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10362a604; end: 10362a637;  */

void FUN_10362a604(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10362a638; end: 10362a73b;  */

void FUN_10362a638(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10362a73c; end: 10362a78f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10362a73c(int *param_1,int *param_2)

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
  
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return (byte *)0x0;
  }
  lVar24 = *(long *)(param_2 + 2);
  uVar16 = *(ulong *)(param_2 + 4);
  pbVar10 = *(byte **)(param_1 + 2);
  pbVar25 = *(byte **)(param_1 + 4);
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



/* Entry: 10362a790; end: 10362a7f7;  */

void FUN_10362a790(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd000000000000022;
  *param_5 = 0x800000010f156810;
  return;
}



/* Entry: 10362a7f8; end: 10362a83f;  */

void FUN_10362a7f8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbef520,0x2b,2);
  uRam000000011380ab18 = uStack_38;
  uRam000000011380ab10 = uStack_40;
  uRam000000011380ab28 = uStack_28;
  uRam000000011380ab20 = uStack_30;
  uRam000000011380ab38 = uStack_18;
  uRam000000011380ab30 = uStack_20;
  return;
}



/* Entry: 10362a840; end: 10362a92f;  */

void FUN_10362a840(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010159f674();
        lVar2 = unaff_x20 + 0x80;
LAB_10362a8b4:
        (*pcVar4)(lVar2,&UNK_110734b68,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x48;
          goto LAB_10362a8b4;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10362a8b4;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10362a930; end: 10362a9bb;  */

void FUN_10362a930(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10362a9bc();
  if (unaff_x21 == 0) {
    FUN_10362aa58();
    FUN_10362aaf4();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10362a9bc; end: 10362aa57;  */

void FUN_10362a9bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x28);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x18);
    uStack_80 = *(undefined8 *)(param_1 + 0x10);
    uStack_70 = *(undefined8 *)(param_1 + 0x20);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_60 = *(undefined8 *)(param_1 + 0x30);
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,1,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362aa58; end: 10362aaf3;  */

void FUN_10362aa58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x60);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x50);
    uStack_80 = *(undefined8 *)(param_1 + 0x48);
    uStack_70 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x70);
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,2,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362aaf4; end: 10362ab8f;  */

void FUN_10362aaf4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x98);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x88);
    uStack_80 = *(undefined8 *)(param_1 + 0x80);
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,3,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10362ab90; end: 10362abfb;  */

uint FUN_10362ab90(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_3a8 [56];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar10 = param_1[3];
  uVar6 = param_1[2];
  uVar16 = param_1[5];
  uVar14 = param_1[4];
  uVar11 = param_1[7];
  uVar7 = param_1[6];
  uVar4 = param_1[8];
  uVar12 = param_2[3];
  uVar8 = param_2[2];
  uVar17 = param_2[5];
  uVar15 = param_2[4];
  uVar13 = param_2[7];
  uVar9 = param_2[6];
  uVar5 = param_2[8];
  uStack_200 = uVar8;
  uStack_1f8 = uVar12;
  uStack_1f0 = uVar15;
  uStack_1e8 = uVar17;
  uStack_1e0 = uVar9;
  uStack_1d8 = uVar13;
  uStack_1d0 = uVar5;
  uStack_1c0 = uVar6;
  uStack_1b8 = uVar10;
  uStack_1b0 = uVar14;
  uStack_1a8 = uVar16;
  uStack_1a0 = uVar7;
  uStack_198 = uVar11;
  uStack_190 = uVar4;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_10362b878;
    uStack_e0 = uVar6;
    uStack_d8 = uVar10;
    uStack_d0 = uVar14;
    uStack_c8 = uVar16;
    uStack_c0 = uVar7;
    uStack_b8 = uVar11;
    uStack_b0 = uVar4;
    uStack_a8 = uVar8;
    uStack_a0 = uVar12;
    uStack_98 = uVar15;
    uStack_90 = uVar17;
    uStack_88 = uVar9;
    uStack_80 = uVar13;
    uStack_78 = uVar5;
    FUN_10362b670(&uStack_1c0,&uStack_370);
    FUN_10362b670(&uStack_200,&uStack_370);
    puVar2 = &uStack_e0;
    func_0x00010400dcec(puVar2,&uStack_a8);
    func_0x000101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
    func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10362b940;
  }
  else {
    if (0xe < uVar17 >> 0x3c) {
      FUN_10362b670(&uStack_1c0,&uStack_370);
      FUN_10362b670(&uStack_200,&uStack_370);
      func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
LAB_10362b940:
      uVar10 = param_1[10];
      uVar6 = param_1[9];
      uVar16 = param_1[0xc];
      uVar14 = param_1[0xb];
      uVar11 = param_1[0xe];
      uVar7 = param_1[0xd];
      uVar4 = param_1[0xf];
      uVar12 = param_2[10];
      uVar8 = param_2[9];
      uVar17 = param_2[0xc];
      uVar15 = param_2[0xb];
      uVar13 = param_2[0xe];
      uVar9 = param_2[0xd];
      uVar5 = param_2[0xf];
      uStack_280 = uVar8;
      uStack_278 = uVar12;
      uStack_270 = uVar15;
      uStack_268 = uVar17;
      uStack_260 = uVar9;
      uStack_258 = uVar13;
      uStack_250 = uVar5;
      uStack_240 = uVar6;
      uStack_238 = uVar10;
      uStack_230 = uVar14;
      uStack_228 = uVar16;
      uStack_220 = uVar7;
      uStack_218 = uVar11;
      uStack_210 = uVar4;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_10362ba0c;
        uStack_150 = uVar6;
        uStack_148 = uVar10;
        uStack_140 = uVar14;
        uStack_138 = uVar16;
        uStack_130 = uVar7;
        uStack_128 = uVar11;
        uStack_120 = uVar4;
        uStack_118 = uVar8;
        uStack_110 = uVar12;
        uStack_108 = uVar15;
        uStack_100 = uVar17;
        uStack_f8 = uVar9;
        uStack_f0 = uVar13;
        uStack_e8 = uVar5;
        FUN_10362b670(&uStack_240,&uStack_370);
        FUN_10362b670(&uStack_280,&uStack_370);
        puVar2 = &uStack_150;
        func_0x00010400dcec(puVar2,&uStack_118);
        func_0x000101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10362bbf0;
      }
      else {
        if (uVar17 >> 0x3c < 0xf) {
LAB_10362ba0c:
          uStack_370 = uVar6;
          uStack_368 = uVar10;
          uStack_360 = uVar14;
          uStack_358 = uVar16;
          uStack_350 = uVar7;
          uStack_348 = uVar11;
          uStack_340 = uVar4;
          uStack_338 = uVar8;
          uStack_330 = uVar12;
          uStack_328 = uVar15;
          uStack_320 = uVar17;
          uStack_318 = uVar9;
          uStack_310 = uVar13;
          uStack_308 = uVar5;
          FUN_10362b670(&uStack_240,&uStack_118);
          puVar2 = &uStack_280;
          puVar3 = &uStack_118;
          goto LAB_10362bbe4;
        }
        FUN_10362b670(&uStack_240,&uStack_370);
        FUN_10362b670(&uStack_280,&uStack_370);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
      }
      uVar10 = param_1[0x11];
      uVar6 = param_1[0x10];
      uVar16 = param_1[0x13];
      uVar14 = param_1[0x12];
      uVar11 = param_1[0x15];
      uVar7 = param_1[0x14];
      uVar4 = param_1[0x16];
      uVar12 = param_2[0x11];
      uVar8 = param_2[0x10];
      uVar17 = param_2[0x13];
      uVar15 = param_2[0x12];
      uVar13 = param_2[0x15];
      uVar9 = param_2[0x14];
      uVar5 = param_2[0x16];
      uStack_300 = uVar8;
      uStack_2f8 = uVar12;
      uStack_2f0 = uVar15;
      uStack_2e8 = uVar17;
      uStack_2e0 = uVar9;
      uStack_2d8 = uVar13;
      uStack_2d0 = uVar5;
      uStack_2c0 = uVar6;
      uStack_2b8 = uVar10;
      uStack_2b0 = uVar14;
      uStack_2a8 = uVar16;
      uStack_2a0 = uVar7;
      uStack_298 = uVar11;
      uStack_290 = uVar4;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_10362bbb4;
        uStack_370 = uVar8;
        uStack_368 = uVar12;
        uStack_360 = uVar15;
        uStack_358 = uVar17;
        uStack_350 = uVar9;
        uStack_348 = uVar13;
        uStack_340 = uVar5;
        uStack_188 = uVar6;
        uStack_180 = uVar10;
        uStack_178 = uVar14;
        uStack_170 = uVar16;
        uStack_168 = uVar7;
        uStack_160 = uVar11;
        uStack_158 = uVar4;
        FUN_10362b670(&uStack_2c0,auStack_3a8);
        FUN_10362b670(&uStack_300,auStack_3a8);
        puVar2 = &uStack_188;
        func_0x00010400dcec(puVar2,&uStack_370);
        func_0x000101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10362bbf0;
      }
      else {
        if (uVar17 >> 0x3c < 0xf) {
LAB_10362bbb4:
          uStack_370 = uVar6;
          uStack_368 = uVar10;
          uStack_360 = uVar14;
          uStack_358 = uVar16;
          uStack_350 = uVar7;
          uStack_348 = uVar11;
          uStack_340 = uVar4;
          uStack_338 = uVar8;
          uStack_330 = uVar12;
          uStack_328 = uVar15;
          uStack_320 = uVar17;
          uStack_318 = uVar9;
          uStack_310 = uVar13;
          uStack_308 = uVar5;
          FUN_10362b670(&uStack_2c0,&uStack_188);
          puVar2 = &uStack_300;
          puVar3 = &uStack_188;
          goto LAB_10362bbe4;
        }
        FUN_10362b670(&uStack_2c0,&uStack_370);
        FUN_10362b670(&uStack_300,&uStack_370);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
      }
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar4;
      goto LAB_10362bbf4;
    }
LAB_10362b878:
    uStack_370 = uVar6;
    uStack_368 = uVar10;
    uStack_360 = uVar14;
    uStack_358 = uVar16;
    uStack_350 = uVar7;
    uStack_348 = uVar11;
    uStack_340 = uVar4;
    uStack_338 = uVar8;
    uStack_330 = uVar12;
    uStack_328 = uVar15;
    uStack_320 = uVar17;
    uStack_318 = uVar9;
    uStack_310 = uVar13;
    uStack_308 = uVar5;
    FUN_10362b670(&uStack_1c0,&uStack_a8);
    puVar2 = &uStack_200;
    puVar3 = &uStack_a8;
LAB_10362bbe4:
    FUN_10362b670(puVar2,puVar3);
    FUN_10362d8e8(&uStack_370);
  }
LAB_10362bbf0:
  uVar1 = 0;
LAB_10362bbf4:
  return uVar1 & 1;
}



/* Entry: 10362abfc; end: 10362ac2b;  */

undefined1  [16] FUN_10362abfc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10362ac2c; end: 10362ac5f;  */

void FUN_10362ac2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10362ac60; end: 10362ac73;  */

undefined8 FUN_10362ac60(void)

{
  return 0x10362ac70;
}



/* Entry: 10362ac74; end: 10362ac87;  */

void FUN_10362ac74(void)

{
  FUN_10362a840();
  return;
}



/* Entry: 10362ac88; end: 10362ace7;  */

void FUN_10362ac88(void)

{
  FUN_10362a930();
  return;
}



/* Entry: 10362ace8; end: 10362aceb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10362ace8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10362acec; end: 10362ad23;  */

uint FUN_10362acec(long param_1,long param_2)

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
  func_0x00010362d7e8();
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



/* Entry: 10362ad24; end: 10362adc3;  */

uint FUN_10362ad24(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_58 = param_1[0x11];
  uStack_60 = param_1[0x10];
  uStack_48 = param_1[0x13];
  uStack_50 = param_1[0x12];
  uStack_38 = param_1[0x15];
  uStack_40 = param_1[0x14];
  uStack_30 = param_1[0x16];
  uStack_98 = param_1[9];
  uStack_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  uStack_78 = param_1[0xd];
  uStack_80 = param_1[0xc];
  uStack_68 = param_1[0xf];
  uStack_70 = param_1[0xe];
  uStack_d8 = param_1[1];
  uStack_e0 = *param_1;
  uStack_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  uStack_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  uStack_118 = unaff_x20[0x11];
  uStack_120 = unaff_x20[0x10];
  uStack_108 = unaff_x20[0x13];
  uStack_110 = unaff_x20[0x12];
  uStack_f8 = unaff_x20[0x15];
  uStack_100 = unaff_x20[0x14];
  uStack_f0 = unaff_x20[0x16];
  uStack_158 = unaff_x20[9];
  uStack_160 = unaff_x20[8];
  uStack_148 = unaff_x20[0xb];
  uStack_150 = unaff_x20[10];
  uStack_138 = unaff_x20[0xd];
  uStack_140 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xf];
  uStack_130 = unaff_x20[0xe];
  uStack_198 = unaff_x20[1];
  uStack_1a0 = *unaff_x20;
  uStack_188 = unaff_x20[3];
  uStack_190 = unaff_x20[2];
  uStack_178 = unaff_x20[5];
  uStack_180 = unaff_x20[4];
  uStack_168 = unaff_x20[7];
  uStack_170 = unaff_x20[6];
  FUN_10362b780(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10362adc4; end: 10362ae63;  */

/* WARNING: Possible PIC construction at 0x00010362ae10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362ae20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362ae14) */
/* WARNING: Removing unreachable block (ram,0x00010362ae24) */

void FUN_10362adc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80c58 != -1) {
    func_0x000107c61568(0x112f80c58,FUN_10362a7f8);
  }
  uVar5 = uRam000000011380ab38;
  uVar4 = uRam000000011380ab30;
  uVar3 = uRam000000011380ab28;
  uVar2 = uRam000000011380ab20;
  uVar1 = uRam000000011380ab18;
  *param_1 = uRam000000011380ab10;
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



/* Entry: 10362ae64; end: 10362ae9f;  */

void FUN_10362ae64(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80dd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80dd8,&UNK_10dbef4e0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10362aea0; end: 10362affb;  */

void FUN_10362aea0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_138 [72];
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
  
  uStack_68 = unaff_x20[0x11];
  uStack_70 = unaff_x20[0x10];
  uStack_58 = unaff_x20[0x13];
  uStack_60 = unaff_x20[0x12];
  uStack_48 = unaff_x20[0x15];
  uStack_50 = unaff_x20[0x14];
  uStack_40 = unaff_x20[0x16];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_78 = unaff_x20[0xf];
  uStack_80 = unaff_x20[0xe];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  func_0x000107c6068c(auStack_138,0);
  func_0x000107c5fa50(auStack_138,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10362affc; end: 10362b09b;  */

uint FUN_10362affc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x11];
  uStack_120 = param_1[0x10];
  uStack_108 = param_1[0x13];
  uStack_110 = param_1[0x12];
  uStack_f8 = param_1[0x15];
  uStack_100 = param_1[0x14];
  uStack_f0 = param_1[0x16];
  uStack_158 = param_1[9];
  uStack_160 = param_1[8];
  uStack_148 = param_1[0xb];
  uStack_150 = param_1[10];
  uStack_138 = param_1[0xd];
  uStack_140 = param_1[0xc];
  uStack_128 = param_1[0xf];
  uStack_130 = param_1[0xe];
  uStack_198 = param_1[1];
  uStack_1a0 = *param_1;
  uStack_188 = param_1[3];
  uStack_190 = param_1[2];
  uStack_178 = param_1[5];
  uStack_180 = param_1[4];
  uStack_168 = param_1[7];
  uStack_170 = param_1[6];
  uStack_58 = param_2[0x11];
  uStack_60 = param_2[0x10];
  uStack_48 = param_2[0x13];
  uStack_50 = param_2[0x12];
  uStack_38 = param_2[0x15];
  uStack_40 = param_2[0x14];
  uStack_30 = param_2[0x16];
  uStack_98 = param_2[9];
  uStack_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  uStack_80 = param_2[0xc];
  uStack_68 = param_2[0xf];
  uStack_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  uStack_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  uStack_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  FUN_10362b780(&uStack_1a0,&uStack_e0);
  return uVar1 & 1;
}



/* Entry: 10362b09c; end: 10362b10b;  */

void FUN_10362b09c(void)

{
  func_0x000107c5fb78(0xd000000000000013,0x800000010f156840);
  uRam000000011380ab40 = 0xd000000000000022;
  uRam000000011380ab48 = 0x800000010f156810;
  return;
}



/* Entry: 10362b10c; end: 10362b153;  */

void FUN_10362b10c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbef500,0x1b,2);
  uRam000000011380ab58 = uStack_38;
  uRam000000011380ab50 = uStack_40;
  uRam000000011380ab68 = uStack_28;
  uRam000000011380ab60 = uStack_30;
  uRam000000011380ab78 = uStack_18;
  uRam000000011380ab70 = uStack_20;
  return;
}



/* Entry: 10362b154; end: 10362b21f;  */

void FUN_10362b154(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
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
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_10362b1ec;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x48);
          goto LAB_10362b1ec;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 != 4) goto LAB_10362b1fc;
          pcVar3 = *(code **)(param_3 + 0x48);
        }
LAB_10362b1ec:
        (*pcVar3)();
      }
LAB_10362b1fc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10362b220; end: 10362b303;  */

void FUN_10362b220(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long unaff_x21;
  
  if ((((((int)param_2 == 0) ||
        ((**(code **)(param_7 + 0x18))(param_2,1,param_6,param_7), unaff_x21 == 0)) &&
       ((param_2 >> 0x20 == 0 ||
        ((**(code **)(param_7 + 0x18))(param_2 >> 0x20,2,param_6,param_7), unaff_x21 == 0)))) &&
      (((int)param_3 == 0 ||
       ((**(code **)(param_7 + 0x18))(param_3,3,param_6,param_7), unaff_x21 == 0)))) &&
     ((param_3 >> 0x20 == 0 ||
      ((**(code **)(param_7 + 0x18))(param_3 >> 0x20,4,param_6,param_7), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 10362b304; end: 10362b33b;  */

void FUN_10362b304(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 10362b33c; end: 10362b36b;  */

undefined1  [16] FUN_10362b33c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 10362b36c; end: 10362b39f;  */

void FUN_10362b36c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 10362b3a0; end: 10362b3b3;  */

undefined1  [16] FUN_10362b3a0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x10362b3b0;
  return auVar1;
}



/* Entry: 10362b3b4; end: 10362b3eb;  */

void FUN_10362b3b4(void)

{
  FUN_10362b154();
  return;
}



/* Entry: 10362b3ec; end: 10362b3ef;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10362b3ec(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10362b3f0; end: 10362b427;  */

uint FUN_10362b3f0(long param_1,long param_2)

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
  FUN_10362d7a8();
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



/* Entry: 10362b428; end: 10362b45f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10362b428(undefined8 *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  undefined1 (*unaff_x20) [16];
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
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
  
  auVar46 = *unaff_x20;
  iVar11 = -(uint)(auVar46._0_4_ == (int)*param_1);
  iVar22 = -(uint)(auVar46._4_4_ == (int)((ulong)*param_1 >> 0x20));
  iVar5 = -(uint)(auVar46._8_4_ == (int)param_1[1]);
  iVar6 = -(uint)(auVar46._12_4_ == (int)((ulong)param_1[1] >> 0x20));
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  pbVar13 = *(byte **)unaff_x20[1];
  pbVar28 = *(byte **)(unaff_x20[1] + 8);
  lVar27 = param_1[2];
  uVar19 = param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (undefined1 (*) [16])((ulong)pbVar28 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(undefined1 (**) [16])(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
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
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(undefined1 (**) [16])(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 10362b460; end: 10362b4ff;  */

/* WARNING: Possible PIC construction at 0x00010362b4ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010362b4bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010362b4b0) */
/* WARNING: Removing unreachable block (ram,0x00010362b4c0) */

void FUN_10362b460(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f80c70 != -1) {
    func_0x000107c61568(0x112f80c70,FUN_10362b10c);
  }
  uVar5 = uRam000000011380ab78;
  uVar4 = uRam000000011380ab70;
  uVar3 = uRam000000011380ab68;
  uVar2 = uRam000000011380ab60;
  uVar1 = uRam000000011380ab58;
  *param_1 = uRam000000011380ab50;
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



/* Entry: 10362b500; end: 10362b53b;  */

void FUN_10362b500(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f80dc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f80dc8,&UNK_10dbef4d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10362b53c; end: 10362b62f;  */

void FUN_10362b53c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10362b630; end: 10362b66f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10362b630(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  ulong uVar25;
  byte *pbVar26;
  byte *unaff_x19;
  long lVar27;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar28;
  ulong unaff_x22;
  long lVar29;
  byte *unaff_x23;
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
  
  auVar46 = *param_2;
  iVar11 = -(uint)((int)*param_1 == auVar46._0_4_);
  iVar22 = -(uint)((int)((ulong)*param_1 >> 0x20) == auVar46._4_4_);
  iVar5 = -(uint)((int)param_1[1] == auVar46._8_4_);
  iVar6 = -(uint)((int)((ulong)param_1[1] >> 0x20) == auVar46._12_4_);
  uVar4 = NEON_umaxv(CONCAT17(~(byte)((uint)iVar6 >> 8),
                              CONCAT16(~(byte)iVar6,
                                       CONCAT15(~(byte)((uint)iVar5 >> 8),
                                                CONCAT14(~(byte)iVar5,
                                                         CONCAT13(~(byte)((uint)iVar22 >> 8),
                                                                  CONCAT12(~(byte)iVar22,
                                                                           CONCAT11(~(byte)((uint)
                                                  iVar11 >> 8),~(byte)iVar11))))))),2);
  if ((uVar4 & 1) != 0) {
    return (byte *)0x0;
  }
  lVar27 = *(long *)param_2[1];
  uVar19 = *(ulong *)(param_2[1] + 8);
  pbVar13 = (byte *)param_1[2];
  pbVar28 = (byte *)param_1[3];
  puVar10 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar10 + -0x50) = unaff_x26;
    *(byte **)(puVar10 + -0x48) = unaff_x25;
    *(byte **)(puVar10 + -0x40) = unaff_x24;
    *(byte **)(puVar10 + -0x38) = unaff_x23;
    *(ulong *)(puVar10 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar10 + -0x28) = unaff_x21;
    *(ulong *)(puVar10 + -0x20) = unaff_x20;
    *(byte **)(puVar10 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar10 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar10 + -8) = unaff_x30;
    *(undefined8 *)(puVar10 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar7 = (uint)((ulong)pbVar28 >> 0x20);
    uVar21 = uVar7 >> 0x1e;
    uVar8 = (uint)(uVar19 >> 0x20);
    uVar24 = uVar8 >> 0x1e;
    iVar11 = (int)pbVar13;
    pbVar16 = pbVar28;
    if ((ulong)pbVar28 >> 0x3e == 3) {
      uVar23 = 0;
      if ((((pbVar13 != (byte *)0x0) || (pbVar28 != (byte *)0xc000000000000000)) ||
          (uVar19 >> 0x3e < 3)) || ((uVar23 = 0, lVar27 != 0 || (uVar19 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar12 = (byte *)0x1;
    }
    else if (uVar7 >> 0x1e < 2) {
      if (uVar21 == 0) {
        uVar23 = (ulong)pbVar28 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)pbVar13 >> 0x20);
        if (SBORROW4(iVar22,iVar11)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar9)();
        }
        uVar23 = (ulong)(iVar22 - iVar11);
      }
joined_r0x000100e26170:
      if (1 < uVar8 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar24 == 0) {
        uVar25 = uVar19 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar22 = (int)((ulong)lVar27 >> 0x20);
      if (SBORROW4(iVar22,(int)lVar27)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar9)();
      }
      if (uVar23 == (long)(iVar22 - (int)lVar27)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar12 = (byte *)0x0;
    }
    else {
      if (uVar21 == 2) {
        uVar23 = *(long *)(pbVar13 + 0x18) - *(long *)(pbVar13 + 0x10);
        if (SBORROW8(*(long *)(pbVar13 + 0x18),*(long *)(pbVar13 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar9)();
        }
        goto joined_r0x000100e26170;
      }
      uVar23 = 0;
      if (uVar24 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar24 == 2) {
        uVar25 = *(long *)(lVar27 + 0x18) - *(long *)(lVar27 + 0x10);
        if (SBORROW8(*(long *)(lVar27 + 0x18),*(long *)(lVar27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar9)();
        }
code_r0x000100e2608c:
        if (uVar23 != uVar25) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar23 < 1) goto code_r0x000100e26128;
        if (uVar21 < 2) {
          if (uVar21 == 0) {
            puVar10[-0x70] = (char)pbVar13;
            puVar10[-0x6f] = (char)((ulong)pbVar13 >> 8);
            puVar10[-0x6e] = (char)((ulong)pbVar13 >> 0x10);
            puVar10[-0x6d] = (char)((ulong)pbVar13 >> 0x18);
            puVar10[-0x6c] = (char)((ulong)pbVar13 >> 0x20);
            puVar10[-0x6b] = (char)((ulong)pbVar13 >> 0x28);
            puVar10[-0x6a] = (char)((ulong)pbVar13 >> 0x30);
            puVar10[-0x69] = (char)((ulong)pbVar13 >> 0x38);
            puVar10[-0x68] = (char)pbVar28;
            puVar10[-0x67] = (char)((ulong)pbVar28 >> 8);
            puVar10[-0x66] = (char)((ulong)pbVar28 >> 0x10);
            puVar10[-0x65] = (char)((ulong)pbVar28 >> 0x18);
            puVar10[-100] = (char)((ulong)pbVar28 >> 0x20);
            puVar10[-99] = (char)((ulong)pbVar28 >> 0x28);
            pbVar16 = puVar10 + (((ulong)pbVar28 >> 0x30 & 0xff) - 0x70);
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar10 + -0x71,puVar10 + -0x70);
            pbVar12 = (byte *)(ulong)(byte)puVar10[-0x71];
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar11;
          unaff_x23 = (byte *)(((long)pbVar13 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar13 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar9)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar13 = (byte *)0x0;
          }
          else {
            pbVar16 = pbVar13;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + ((long)unaff_x25 - (long)pbVar16);
            func_0x000107c5ec38();
            unaff_x19 = pbVar13;
            if (pbVar13 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar13;
              goto code_r0x000100e262a4;
            }
          }
          pbVar16 = (byte *)0x0;
        }
        else {
          if (uVar21 != 2) {
            *(undefined8 *)(puVar10 + -0x6a) = 0;
            *(undefined8 *)(puVar10 + -0x70) = 0;
            pbVar16 = puVar10 + -0x70;
            goto code_r0x000100e26260;
          }
          lVar29 = *(long *)(pbVar13 + 0x10);
          unaff_x24 = *(byte **)(pbVar13 + 0x18);
          func_0x000107c5ec30();
          pbVar16 = pbVar13;
          if (pbVar13 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar29,(long)pbVar16)) {
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar9)();
            }
            pbVar13 = pbVar13 + (lVar29 - (long)pbVar16);
          }
          unaff_x23 = unaff_x24 + -lVar29;
          if (SBORROW8((long)unaff_x24,lVar29)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar9)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar13;
          unaff_x25 = pbVar28;
          if (pbVar13 == (byte *)0x0) {
            pbVar16 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar16) {
              pbVar16 = unaff_x23;
            }
            pbVar16 = pbVar16 + (long)pbVar13;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar28 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar10 + -0x70,pbVar13,pbVar16,lVar27,uVar19);
        pbVar12 = (byte *)(ulong)(byte)puVar10[-0x70];
        unaff_x22 = uVar19;
      }
      else {
        pbVar12 = (byte *)(ulong)(uVar23 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar10 + -0x58)) {
      return pbVar12;
    }
    func_0x000107c60e78();
    *(byte **)(puVar10 + -0xc0) = unaff_x24;
    *(byte **)(puVar10 + -0xb8) = unaff_x23;
    *(ulong *)(puVar10 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar10 + -0xa8) = unaff_x21;
    *(ulong *)(puVar10 + -0xa0) = unaff_x20;
    *(byte **)(puVar10 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar10 + -0x90) = puVar10 + -0x10;
    *(undefined **)(puVar10 + -0x88) = &UNK_100e26304;
    pbVar15 = *(byte **)pbVar12;
    pbVar13 = *(byte **)(pbVar12 + 8);
    pbVar26 = *(byte **)(pbVar12 + 0x18);
    bVar30 = pbVar12[0x28];
    pbVar28 = (byte *)((ulong)*(uint *)(pbVar12 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar12 + 0x15) << 0x28 | (ulong)pbVar12[0x10]);
    pbVar17 = pbVar13;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar16[0x28] == 0) {
          lVar27 = *(long *)pbVar16;
          uVar14 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar15,lVar27,uVar14);
          return (byte *)(ulong)((uint)pbVar15 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar16[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar20 = *(byte **)(pbVar16 + 0x10);
        lVar27 = *(long *)pbVar16;
        uVar14 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar15,lVar27,uVar14);
        if (((ulong)pbVar15 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 == pbVar18) && (pbVar28 == pbVar20)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar16[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        lVar27 = *(long *)(pbVar16 + 0x18);
        if ((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) {
          if (((pbVar12[0x10] ^ pbVar16[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar26 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar27 == 0) {
            return (byte *)0x0;
          }
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar27);
          func_0x000107c61174();
          pbVar13 = pbVar26;
          func_0x000107c60118();
          func_0x000107c61170(pbVar26);
          func_0x000107c61170(lVar27);
          pbVar26 = pbVar13;
joined_r0x000100e266a4:
          if (((ulong)pbVar26 & 1) == 0) {
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
      )(pbVar15,pbVar17,pbVar18,pbVar20,0);
      return pbVar15;
    }
    lVar29 = *(long *)(pbVar12 + 0x20);
    if (bVar30 < 5) {
      if (bVar30 != 3) {
        if (pbVar16[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)pbVar16;
        pbVar20 = *(byte **)(pbVar16 + 8);
        if (((pbVar15 == pbVar18) && (pbVar13 == pbVar20)) &&
           (pbVar15 = pbVar28, pbVar17 = pbVar26, pbVar18 = *(byte **)(pbVar16 + 0x10),
           pbVar20 = *(byte **)(pbVar16 + 0x18),
           pbVar28 == *(byte **)(pbVar16 + 0x10) && pbVar26 == *(byte **)(pbVar16 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar16[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar16 != ((uint)pbVar15 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar20 = *(byte **)(pbVar16 + 0x10);
      lVar27 = *(long *)(pbVar16 + 0x20);
      if (pbVar28 == (byte *)0x0) {
        if (pbVar20 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar20 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar18 = *(byte **)(pbVar16 + 8);
        pbVar15 = pbVar13;
        pbVar17 = pbVar28;
        if ((pbVar13 != pbVar18) || (pbVar28 != pbVar20)) goto code_r0x000107c605b8;
      }
      if (lVar29 != 0) {
        if (lVar27 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar26 == *(byte **)(pbVar16 + 0x18)) && (lVar29 == lVar27)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar26,lVar29,*(byte **)(pbVar16 + 0x18),lVar27,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar27 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar30 != 5) {
      if ((((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar15 == (byte *)0x0) &&
          lVar29 == 0) && pbVar28 == (byte *)0x0) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar29 = *(long *)(pbVar16 + 0x20);
        lVar27 = *(long *)(pbVar16 + 0x18);
        bVar30 = pbVar16[8] | (byte)lVar27;
        bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
        bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
        bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
        bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
        bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
        bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
        bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
        bVar38 = pbVar16[0x10] | (byte)lVar29;
        bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
        bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
        bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
        bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
        bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
        bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
        bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
                                                                           bVar30 | auVar46[0]))))))
                    ) == 0 && *(long *)pbVar16 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar15 == (byte *)0x1) &&
         (((pbVar26 == (byte *)0x0 && pbVar13 == (byte *)0x0) && pbVar28 == (byte *)0x0) &&
          lVar29 == 0)) {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar16[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar16 != 2) {
          return (byte *)0x0;
        }
      }
      lVar29 = *(long *)(pbVar16 + 0x20);
      lVar27 = *(long *)(pbVar16 + 0x18);
      bVar30 = pbVar16[8] | (byte)lVar27;
      bVar31 = pbVar16[9] | (byte)((ulong)lVar27 >> 8);
      bVar32 = pbVar16[10] | (byte)((ulong)lVar27 >> 0x10);
      bVar33 = pbVar16[0xb] | (byte)((ulong)lVar27 >> 0x18);
      bVar34 = pbVar16[0xc] | (byte)((ulong)lVar27 >> 0x20);
      bVar35 = pbVar16[0xd] | (byte)((ulong)lVar27 >> 0x28);
      bVar36 = pbVar16[0xe] | (byte)((ulong)lVar27 >> 0x30);
      bVar37 = pbVar16[0xf] | (byte)((ulong)lVar27 >> 0x38);
      bVar38 = pbVar16[0x10] | (byte)lVar29;
      bVar39 = pbVar16[0x11] | (byte)((ulong)lVar29 >> 8);
      bVar40 = pbVar16[0x12] | (byte)((ulong)lVar29 >> 0x10);
      bVar41 = pbVar16[0x13] | (byte)((ulong)lVar29 >> 0x18);
      bVar42 = pbVar16[0x14] | (byte)((ulong)lVar29 >> 0x20);
      bVar43 = pbVar16[0x15] | (byte)((ulong)lVar29 >> 0x28);
      bVar44 = pbVar16[0x16] | (byte)((ulong)lVar29 >> 0x30);
      bVar45 = pbVar16[0x17] | (byte)((ulong)lVar29 >> 0x38);
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
      lVar27 = CONCAT17(bVar37 | auVar46[7],
                        CONCAT16(bVar36 | auVar46[6],
                                 CONCAT15(bVar35 | auVar46[5],
                                          CONCAT14(bVar34 | auVar46[4],
                                                   CONCAT13(bVar33 | auVar46[3],
                                                            CONCAT12(bVar32 | auVar46[2],
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar16[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar27 = *(long *)(pbVar16 + 8);
    uVar19 = *(ulong *)(pbVar16 + 0x10);
    lVar29 = *(long *)pbVar16;
    uVar14 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar15,lVar29,uVar14);
    if (((ulong)pbVar15 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar10 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar10 + -0x88);
    unaff_x20 = *(ulong *)(puVar10 + -0xa0);
    unaff_x19 = *(byte **)(puVar10 + -0x98);
    unaff_x22 = *(ulong *)(puVar10 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar10 + -0xa8);
    unaff_x24 = *(byte **)(puVar10 + -0xc0);
    unaff_x23 = *(byte **)(puVar10 + -0xb8);
    puVar10 = puVar10 + -0x80;
  } while( true );
}



/* Entry: 10362b670; end: 10362b6bf;  */

undefined8 FUN_10362b670(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112db5e70;
  func_0x0001000285a8(0x112db5e70,&UNK_10d9649a0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10362b6c0; end: 10362b77f;  */

void FUN_10362b6c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80be8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeefc8;
  func_0x000107c61520(&UNK_10dbeefc8,&UNK_110672620);
  puRam0000000112f80be8 = puVar1;
  return;
}



/* Entry: 10362b780; end: 10362bccf;  */

uint FUN_10362b780(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
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
  undefined8 uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined1 auStack_3a8 [56];
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  ulong uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  ulong uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  ulong uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  ulong uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  ulong uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  ulong uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar10 = param_1[3];
  uVar6 = param_1[2];
  uVar16 = param_1[5];
  uVar14 = param_1[4];
  uVar11 = param_1[7];
  uVar7 = param_1[6];
  uVar4 = param_1[8];
  uVar12 = param_2[3];
  uVar8 = param_2[2];
  uVar17 = param_2[5];
  uVar15 = param_2[4];
  uVar13 = param_2[7];
  uVar9 = param_2[6];
  uVar5 = param_2[8];
  uStack_200 = uVar8;
  uStack_1f8 = uVar12;
  uStack_1f0 = uVar15;
  uStack_1e8 = uVar17;
  uStack_1e0 = uVar9;
  uStack_1d8 = uVar13;
  uStack_1d0 = uVar5;
  uStack_1c0 = uVar6;
  uStack_1b8 = uVar10;
  uStack_1b0 = uVar14;
  uStack_1a8 = uVar16;
  uStack_1a0 = uVar7;
  uStack_198 = uVar11;
  uStack_190 = uVar4;
  if (uVar16 >> 0x3c < 0xf) {
    if (0xe < uVar17 >> 0x3c) goto LAB_10362b878;
    uStack_e0 = uVar6;
    uStack_d8 = uVar10;
    uStack_d0 = uVar14;
    uStack_c8 = uVar16;
    uStack_c0 = uVar7;
    uStack_b8 = uVar11;
    uStack_b0 = uVar4;
    uStack_a8 = uVar8;
    uStack_a0 = uVar12;
    uStack_98 = uVar15;
    uStack_90 = uVar17;
    uStack_88 = uVar9;
    uStack_80 = uVar13;
    uStack_78 = uVar5;
    FUN_10362b670(&uStack_1c0,&uStack_370);
    FUN_10362b670(&uStack_200,&uStack_370);
    puVar2 = &uStack_e0;
    func_0x00010400dcec(puVar2,&uStack_a8);
    func_0x000101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
    func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
    if (((ulong)puVar2 & 1) != 0) goto LAB_10362b940;
  }
  else {
    if (0xe < uVar17 >> 0x3c) {
      FUN_10362b670(&uStack_1c0,&uStack_370);
      FUN_10362b670(&uStack_200,&uStack_370);
      func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
LAB_10362b940:
      uVar10 = param_1[10];
      uVar6 = param_1[9];
      uVar16 = param_1[0xc];
      uVar14 = param_1[0xb];
      uVar11 = param_1[0xe];
      uVar7 = param_1[0xd];
      uVar4 = param_1[0xf];
      uVar12 = param_2[10];
      uVar8 = param_2[9];
      uVar17 = param_2[0xc];
      uVar15 = param_2[0xb];
      uVar13 = param_2[0xe];
      uVar9 = param_2[0xd];
      uVar5 = param_2[0xf];
      uStack_280 = uVar8;
      uStack_278 = uVar12;
      uStack_270 = uVar15;
      uStack_268 = uVar17;
      uStack_260 = uVar9;
      uStack_258 = uVar13;
      uStack_250 = uVar5;
      uStack_240 = uVar6;
      uStack_238 = uVar10;
      uStack_230 = uVar14;
      uStack_228 = uVar16;
      uStack_220 = uVar7;
      uStack_218 = uVar11;
      uStack_210 = uVar4;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_10362ba0c;
        uStack_150 = uVar6;
        uStack_148 = uVar10;
        uStack_140 = uVar14;
        uStack_138 = uVar16;
        uStack_130 = uVar7;
        uStack_128 = uVar11;
        uStack_120 = uVar4;
        uStack_118 = uVar8;
        uStack_110 = uVar12;
        uStack_108 = uVar15;
        uStack_100 = uVar17;
        uStack_f8 = uVar9;
        uStack_f0 = uVar13;
        uStack_e8 = uVar5;
        FUN_10362b670(&uStack_240,&uStack_370);
        FUN_10362b670(&uStack_280,&uStack_370);
        puVar2 = &uStack_150;
        func_0x00010400dcec(puVar2,&uStack_118);
        func_0x000101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10362bbf0;
      }
      else {
        if (uVar17 >> 0x3c < 0xf) {
LAB_10362ba0c:
          uStack_370 = uVar6;
          uStack_368 = uVar10;
          uStack_360 = uVar14;
          uStack_358 = uVar16;
          uStack_350 = uVar7;
          uStack_348 = uVar11;
          uStack_340 = uVar4;
          uStack_338 = uVar8;
          uStack_330 = uVar12;
          uStack_328 = uVar15;
          uStack_320 = uVar17;
          uStack_318 = uVar9;
          uStack_310 = uVar13;
          uStack_308 = uVar5;
          FUN_10362b670(&uStack_240,&uStack_118);
          puVar2 = &uStack_280;
          puVar3 = &uStack_118;
          goto LAB_10362bbe4;
        }
        FUN_10362b670(&uStack_240,&uStack_370);
        FUN_10362b670(&uStack_280,&uStack_370);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
      }
      uVar10 = param_1[0x11];
      uVar6 = param_1[0x10];
      uVar16 = param_1[0x13];
      uVar14 = param_1[0x12];
      uVar11 = param_1[0x15];
      uVar7 = param_1[0x14];
      uVar4 = param_1[0x16];
      uVar12 = param_2[0x11];
      uVar8 = param_2[0x10];
      uVar17 = param_2[0x13];
      uVar15 = param_2[0x12];
      uVar13 = param_2[0x15];
      uVar9 = param_2[0x14];
      uVar5 = param_2[0x16];
      uStack_300 = uVar8;
      uStack_2f8 = uVar12;
      uStack_2f0 = uVar15;
      uStack_2e8 = uVar17;
      uStack_2e0 = uVar9;
      uStack_2d8 = uVar13;
      uStack_2d0 = uVar5;
      uStack_2c0 = uVar6;
      uStack_2b8 = uVar10;
      uStack_2b0 = uVar14;
      uStack_2a8 = uVar16;
      uStack_2a0 = uVar7;
      uStack_298 = uVar11;
      uStack_290 = uVar4;
      if (uVar16 >> 0x3c < 0xf) {
        if (0xe < uVar17 >> 0x3c) goto LAB_10362bbb4;
        uStack_370 = uVar8;
        uStack_368 = uVar12;
        uStack_360 = uVar15;
        uStack_358 = uVar17;
        uStack_350 = uVar9;
        uStack_348 = uVar13;
        uStack_340 = uVar5;
        uStack_188 = uVar6;
        uStack_180 = uVar10;
        uStack_178 = uVar14;
        uStack_170 = uVar16;
        uStack_168 = uVar7;
        uStack_160 = uVar11;
        uStack_158 = uVar4;
        FUN_10362b670(&uStack_2c0,auStack_3a8);
        FUN_10362b670(&uStack_300,auStack_3a8);
        puVar2 = &uStack_188;
        func_0x00010400dcec(puVar2,&uStack_370);
        func_0x000101593c1c(uVar8,uVar12,uVar15,uVar17,uVar9,uVar13,uVar5);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
        if (((ulong)puVar2 & 1) == 0) goto LAB_10362bbf0;
      }
      else {
        if (uVar17 >> 0x3c < 0xf) {
LAB_10362bbb4:
          uStack_370 = uVar6;
          uStack_368 = uVar10;
          uStack_360 = uVar14;
          uStack_358 = uVar16;
          uStack_350 = uVar7;
          uStack_348 = uVar11;
          uStack_340 = uVar4;
          uStack_338 = uVar8;
          uStack_330 = uVar12;
          uStack_328 = uVar15;
          uStack_320 = uVar17;
          uStack_318 = uVar9;
          uStack_310 = uVar13;
          uStack_308 = uVar5;
          FUN_10362b670(&uStack_2c0,&uStack_188);
          puVar2 = &uStack_300;
          puVar3 = &uStack_188;
          goto LAB_10362bbe4;
        }
        FUN_10362b670(&uStack_2c0,&uStack_370);
        FUN_10362b670(&uStack_300,&uStack_370);
        func_0x000101593c1c(uVar6,uVar10,uVar14,uVar16,uVar7,uVar11,uVar4);
      }
      uVar4 = *param_1;
      func_0x000100e25fcc(uVar4,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar4;
      goto LAB_10362bbf4;
    }
LAB_10362b878:
    uStack_370 = uVar6;
    uStack_368 = uVar10;
    uStack_360 = uVar14;
    uStack_358 = uVar16;
    uStack_350 = uVar7;
    uStack_348 = uVar11;
    uStack_340 = uVar4;
    uStack_338 = uVar8;
    uStack_330 = uVar12;
    uStack_328 = uVar15;
    uStack_320 = uVar17;
    uStack_318 = uVar9;
    uStack_310 = uVar13;
    uStack_308 = uVar5;
    FUN_10362b670(&uStack_1c0,&uStack_a8);
    puVar2 = &uStack_200;
    puVar3 = &uStack_a8;
LAB_10362bbe4:
    FUN_10362b670(puVar2,puVar3);
    FUN_10362d8e8(&uStack_370);
  }
LAB_10362bbf0:
  uVar1 = 0;
LAB_10362bbf4:
  return uVar1 & 1;
}



/* Entry: 10362bcd0; end: 10362bd4f;  */

void FUN_10362bcd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80c60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef2b0;
  func_0x000107c61520(&UNK_10dbef2b0,&UNK_110672b10);
  puRam0000000112f80c60 = puVar1;
  return;
}



/* Entry: 10362bd50; end: 10362bd63;  */

void FUN_10362bd50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362bd64();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362bda4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362bd64; end: 10362be0f;  */

void FUN_10362bd64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80c80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbee9f0;
  func_0x000107c61520(&UNK_10dbee9f0,&UNK_1106726b8);
  puRam0000000112f80c80 = puVar1;
  return;
}



/* Entry: 10362be10; end: 10362be13;  */

void FUN_10362be10(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeea30;
  func_0x000107c61520(&UNK_10dbeea30,&UNK_1106726b8);
  puRam0000000112f80ca0 = puVar1;
  return;
}



/* Entry: 10362be14; end: 10362be53;  */

void FUN_10362be14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ca0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeea30;
  func_0x000107c61520(&UNK_10dbeea30,&UNK_1106726b8);
  puRam0000000112f80ca0 = puVar1;
  return;
}



/* Entry: 10362be54; end: 10362be67;  */

void FUN_10362be54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362be68();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362bea8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362be68; end: 10362bf13;  */

void FUN_10362be68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeeaf0;
  func_0x000107c61520(&UNK_10dbeeaf0,&UNK_110672748);
  puRam0000000112f80ca8 = puVar1;
  return;
}



/* Entry: 10362bf14; end: 10362bf17;  */

void FUN_10362bf14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeeb30;
  func_0x000107c61520(&UNK_10dbeeb30,&UNK_110672748);
  puRam0000000112f80cc8 = puVar1;
  return;
}



/* Entry: 10362bf18; end: 10362bf57;  */

void FUN_10362bf18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeeb30;
  func_0x000107c61520(&UNK_10dbeeb30,&UNK_110672748);
  puRam0000000112f80cc8 = puVar1;
  return;
}



/* Entry: 10362bf58; end: 10362bf6b;  */

void FUN_10362bf58(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362bf6c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362bfac)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362bf6c; end: 10362c017;  */

void FUN_10362bf6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80cd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeebf0;
  func_0x000107c61520(&UNK_10dbeebf0,&UNK_1106727d8);
  puRam0000000112f80cd0 = puVar1;
  return;
}



/* Entry: 10362c018; end: 10362c01b;  */

void FUN_10362c018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeec30;
  func_0x000107c61520(&UNK_10dbeec30,&UNK_1106727d8);
  puRam0000000112f80cf0 = puVar1;
  return;
}



/* Entry: 10362c01c; end: 10362c05b;  */

void FUN_10362c01c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80cf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeec30;
  func_0x000107c61520(&UNK_10dbeec30,&UNK_1106727d8);
  puRam0000000112f80cf0 = puVar1;
  return;
}



/* Entry: 10362c05c; end: 10362c06f;  */

void FUN_10362c05c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c070();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362c0b0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c070; end: 10362c11b;  */

void FUN_10362c070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80cf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeecf0;
  func_0x000107c61520(&UNK_10dbeecf0,&UNK_110672868);
  puRam0000000112f80cf8 = puVar1;
  return;
}



/* Entry: 10362c11c; end: 10362c11f;  */

void FUN_10362c11c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeed30;
  func_0x000107c61520(&UNK_10dbeed30,&UNK_110672868);
  puRam0000000112f80d18 = puVar1;
  return;
}



/* Entry: 10362c120; end: 10362c15f;  */

void FUN_10362c120(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeed30;
  func_0x000107c61520(&UNK_10dbeed30,&UNK_110672868);
  puRam0000000112f80d18 = puVar1;
  return;
}



/* Entry: 10362c160; end: 10362c173;  */

void FUN_10362c160(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c174();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362c1b4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c174; end: 10362c21f;  */

void FUN_10362c174(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeedf0;
  func_0x000107c61520(&UNK_10dbeedf0,&UNK_1106728f8);
  puRam0000000112f80d20 = puVar1;
  return;
}



/* Entry: 10362c220; end: 10362c223;  */

void FUN_10362c220(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeee30;
  func_0x000107c61520(&UNK_10dbeee30,&UNK_1106728f8);
  puRam0000000112f80d40 = puVar1;
  return;
}



/* Entry: 10362c224; end: 10362c263;  */

void FUN_10362c224(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeee30;
  func_0x000107c61520(&UNK_10dbeee30,&UNK_1106728f8);
  puRam0000000112f80d40 = puVar1;
  return;
}



/* Entry: 10362c264; end: 10362c277;  */

void FUN_10362c264(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c278();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10362c2b8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c278; end: 10362c323;  */

void FUN_10362c278(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeeef0;
  func_0x000107c61520(&UNK_10dbeeef0,&UNK_110672988);
  puRam0000000112f80d48 = puVar1;
  return;
}



/* Entry: 10362c324; end: 10362c367;  */

void FUN_10362c324(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10362c368; end: 10362c36b;  */

void FUN_10362c368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeef30;
  func_0x000107c61520(&UNK_10dbeef30,&UNK_110672988);
  puRam0000000112f80d68 = puVar1;
  return;
}



/* Entry: 10362c36c; end: 10362c3ab;  */

void FUN_10362c36c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeef30;
  func_0x000107c61520(&UNK_10dbeef30,&UNK_110672988);
  puRam0000000112f80d68 = puVar1;
  return;
}



/* Entry: 10362c3ac; end: 10362c3cf;  */

void FUN_10362c3ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c3d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362c3d0; end: 10362c40f;  */

void FUN_10362c3d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbeefa0;
  func_0x000107c61520(&UNK_10dbeefa0,&UNK_110672620);
  puRam0000000112f80d70 = puVar1;
  return;
}



/* Entry: 10362c410; end: 10362c423;  */

void FUN_10362c410(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362b6c0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10362c424();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c424; end: 10362c463;  */

void FUN_10362c424(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbeef58;
  func_0x000107c61520(&DAT_10dbeef58,&UNK_110672620);
  puRam0000000112f80d78 = puVar1;
  return;
}



/* Entry: 10362c464; end: 10362c467;  */

void FUN_10362c464(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef008;
  func_0x000107c61520(&UNK_10dbef008,&UNK_110672620);
  puRam0000000112f80d80 = puVar1;
  return;
}



/* Entry: 10362c468; end: 10362c4a7;  */

void FUN_10362c468(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef008;
  func_0x000107c61520(&UNK_10dbef008,&UNK_110672620);
  puRam0000000112f80d80 = puVar1;
  return;
}



/* Entry: 10362c4a8; end: 10362c4cb;  */

void FUN_10362c4a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c4cc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362c4cc; end: 10362c50b;  */

void FUN_10362c4cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef0d8;
  func_0x000107c61520(&UNK_10dbef0d8,&UNK_110672a00);
  puRam0000000112f80d88 = puVar1;
  return;
}



/* Entry: 10362c50c; end: 10362c523;  */

void FUN_10362c50c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10362b700)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_10159f6b4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c524; end: 10362c563;  */

void FUN_10362c524(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef140;
  func_0x000107c61520(&UNK_10dbef140,&UNK_110672a00);
  puRam0000000112f80d90 = puVar1;
  return;
}



/* Entry: 10362c564; end: 10362c587;  */

void FUN_10362c564(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c588();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362c588; end: 10362c5c7;  */

void FUN_10362c588(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef1b0;
  func_0x000107c61520(&UNK_10dbef1b0,&UNK_110672a88);
  puRam0000000112f80d98 = puVar1;
  return;
}



/* Entry: 10362c5c8; end: 10362c5df;  */

void FUN_10362c5c8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10362b740)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&UNK_1015c5e3c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10362c5e0; end: 10362c61f;  */

void FUN_10362c5e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80da0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef218;
  func_0x000107c61520(&UNK_10dbef218,&UNK_110672a88);
  puRam0000000112f80da0 = puVar1;
  return;
}



/* Entry: 10362c620; end: 10362c643;  */

void FUN_10362c620(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10362c644();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10362c644; end: 10362c683;  */

void FUN_10362c644(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f80da8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbef288;
  func_0x000107c61520(&UNK_10dbef288,&UNK_110672b10);
  puRam0000000112f80da8 = puVar1;
  return;
}



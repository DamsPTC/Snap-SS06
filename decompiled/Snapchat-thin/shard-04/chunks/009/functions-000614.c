/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039eb8dc; end: 1039eb95b;  */

void FUN_1039eb8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9038 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36670;
  func_0x000107c61520(&UNK_10dc36670,&UNK_1106bbf28);
  puRam0000000112fc9038 = puVar1;
  return;
}



/* Entry: 1039eb95c; end: 1039eba2b;  */

/* WARNING: Possible PIC construction at 0x0001039eb98c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039eb990) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039eb95c(undefined8 *param_1,undefined8 *param_2)

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
  if (((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
      (func_0x000107c605b8(), (uVar13 & 1) != 0)) && (param_1[4] == param_2[4])) {
    uVar13 = (ulong)(param_1[5] != 0);
    if (*(char *)(param_1 + 6) != '\x01') {
      uVar13 = param_1[5];
    }
    if (*(char *)(param_2 + 6) == '\x01') {
      if (param_2[5] == 0) {
        if (uVar13 == 0) goto LAB_1039eba10;
      }
      else if (uVar13 == 1) {
LAB_1039eba10:
        pbVar10 = (byte *)param_1[7];
        pbVar25 = (byte *)param_1[8];
        lVar24 = param_2[7];
        uVar13 = param_2[8];
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
               ((uVar13 >> 0x3e < 3 || ((uVar20 = 0, lVar24 != 0 || (uVar13 != 0xc000000000000000)))
                ))) goto joined_r0x000100e26170;
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
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
    else if (uVar13 == param_2[5]) goto LAB_1039eba10;
  }
  return (byte *)0x0;
}



/* Entry: 1039eba2c; end: 1039ebaab;  */

void FUN_1039eba2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9058 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36820;
  func_0x000107c61520(&UNK_10dc36820,&UNK_1106bc040);
  puRam0000000112fc9058 = puVar1;
  return;
}



/* Entry: 1039ebaac; end: 1039ebb43;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039ebaac(long param_1,char param_2,byte *param_3,byte *param_4,long param_5,char param_6
                    ,long param_7,ulong param_8)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  int iVar7;
  byte *pbVar8;
  undefined8 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  byte *pbVar20;
  byte *unaff_x19;
  long lVar21;
  ulong unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  long lVar22;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  byte bVar23;
  byte bVar24;
  byte bVar25;
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
  undefined1 auVar39 [16];
  
  if (param_2 == '\x01') {
    param_1 = *(long *)(&UNK_10dc38690 + param_1 * 8);
  }
  if (param_6 == '\x01') {
    if (param_5 < 2) {
      if (param_5 == 0) {
        if (param_1 == 0) {
SUB_100e25fcc:
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
            uVar4 = (uint)((ulong)param_4 >> 0x20);
            uVar15 = uVar4 >> 0x1e;
            uVar5 = (uint)(param_8 >> 0x20);
            uVar18 = uVar5 >> 0x1e;
            iVar7 = (int)param_3;
            pbVar11 = param_4;
            if ((ulong)param_4 >> 0x3e == 3) {
              uVar17 = 0;
              if ((((param_3 != (byte *)0x0) || (param_4 != (byte *)0xc000000000000000)) ||
                  (param_8 >> 0x3e < 3)) ||
                 ((uVar17 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar8 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar15 == 0) {
                uVar17 = (ulong)param_4 >> 0x30 & 0xff;
              }
              else {
                iVar16 = (int)((ulong)param_3 >> 0x20);
                if (SBORROW4(iVar16,iVar7)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                  (*pcVar6)();
                }
                uVar17 = (ulong)(iVar16 - iVar7);
              }
joined_r0x000100e26170:
              if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
              if (uVar18 == 0) {
                uVar19 = param_8 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar16 = (int)((ulong)param_7 >> 0x20);
              if (SBORROW4(iVar16,(int)param_7)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar17 == (long)(iVar16 - (int)param_7)) goto code_r0x000100e26094;
code_r0x000100e26154:
              pbVar8 = (byte *)0x0;
            }
            else {
              if (uVar15 == 2) {
                uVar17 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
                if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                  (*pcVar6)();
                }
                goto joined_r0x000100e26170;
              }
              uVar17 = 0;
              if (uVar18 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar18 == 2) {
                uVar19 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
                if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar17 != uVar19) goto code_r0x000100e26154;
code_r0x000100e26094:
                if ((long)uVar17 < 1) goto code_r0x000100e26128;
                if (uVar15 < 2) {
                  if (uVar15 == 0) {
                    *(char *)((long)register0x00000008 + -0x70) = (char)param_3;
                    *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_3 >> 8);
                    *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_3 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_3 >> 0x18);
                    *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_3 >> 0x20);
                    *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_3 >> 0x28);
                    *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_3 >> 0x30);
                    *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_3 >> 0x38);
                    *(char *)((long)register0x00000008 + -0x68) = (char)param_4;
                    *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_4 >> 8);
                    *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_4 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_4 >> 0x18);
                    *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_4 >> 0x20);
                    *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_4 >> 0x28);
                    pbVar11 = (byte *)((long)register0x00000008 +
                                      (((ulong)param_4 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                        (undefined1 *)((long)register0x00000008 + -0x70));
                    pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar7;
                  unaff_x23 = (byte *)(((long)param_3 >> 0x20) - (long)unaff_x25);
                  if ((long)param_3 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = param_4;
                  if (param_3 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    param_3 = (byte *)0x0;
                  }
                  else {
                    pbVar11 = param_3;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    param_3 = param_3 + ((long)unaff_x25 - (long)pbVar11);
                    func_0x000107c5ec38();
                    unaff_x19 = param_3;
                    if (param_3 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar11) {
                        pbVar11 = unaff_x23;
                      }
                      pbVar11 = pbVar11 + (long)param_3;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar11 = (byte *)0x0;
                }
                else {
                  if (uVar15 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar11 = (byte *)((long)register0x00000008 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar21 = *(long *)(param_3 + 0x10);
                  unaff_x24 = *(byte **)(param_3 + 0x18);
                  func_0x000107c5ec30();
                  pbVar11 = param_3;
                  if (param_3 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    param_3 = param_3 + (lVar21 - (long)pbVar11);
                  }
                  unaff_x23 = unaff_x24 + -lVar21;
                  if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
                    pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar6)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = param_3;
                  unaff_x25 = param_4;
                  if (param_3 == (byte *)0x0) {
                    pbVar11 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar11) {
                      pbVar11 = unaff_x23;
                    }
                    pbVar11 = pbVar11 + (long)param_3;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)param_4 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_3,pbVar11
                                    ,param_7,param_8);
                pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = param_8;
              }
              else {
                pbVar8 = (byte *)(ulong)(uVar17 == 0);
              }
            }
code_r0x000100e262b0:
            if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
                *(long *)((long)register0x00000008 + -0x58)) {
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
            pbVar10 = *(byte **)pbVar8;
            param_3 = *(byte **)(pbVar8 + 8);
            pbVar20 = *(byte **)(pbVar8 + 0x18);
            bVar23 = pbVar8[0x28];
            param_4 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
            pbVar12 = param_3;
            if (bVar23 < 3) {
              if (bVar23 == 0) {
                if (pbVar11[0x28] == 0) {
                  lVar21 = *(long *)pbVar11;
                  uVar9 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar10,lVar21,uVar9);
                  return (byte *)(ulong)((uint)pbVar10 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar23 == 1) {
                if (pbVar11[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)(pbVar11 + 8);
                pbVar14 = *(byte **)(pbVar11 + 0x10);
                lVar21 = *(long *)pbVar11;
                uVar9 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar10,lVar21,uVar9);
                if (((ulong)pbVar10 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar10 = param_3;
                pbVar12 = param_4;
                if ((param_3 == pbVar13) && (param_4 == pbVar14)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar11[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)pbVar11;
                pbVar14 = *(byte **)(pbVar11 + 8);
                lVar21 = *(long *)(pbVar11 + 0x18);
                if ((pbVar10 == pbVar13) && (param_3 == pbVar14)) {
                  if (((pbVar8[0x10] ^ pbVar11[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar20 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (lVar21 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar21);
                  func_0x000107c61174();
                  pbVar11 = pbVar20;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar20);
                  func_0x000107c61170(lVar21);
                  pbVar20 = pbVar11;
joined_r0x000100e266a4:
                  if (((ulong)pbVar20 & 1) == 0) {
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
              )(pbVar10,pbVar12,pbVar13,pbVar14,0);
              return pbVar10;
            }
            lVar22 = *(long *)(pbVar8 + 0x20);
            if (bVar23 < 5) {
              if (bVar23 != 3) {
                if (pbVar11[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)pbVar11;
                pbVar14 = *(byte **)(pbVar11 + 8);
                if (((pbVar10 == pbVar13) && (param_3 == pbVar14)) &&
                   (pbVar10 = param_4, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
                   pbVar14 = *(byte **)(pbVar11 + 0x18),
                   param_4 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18)))
                {
                  return (byte *)0x1;
                }
                goto code_r0x000107c605b8;
              }
              if (pbVar11[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar11 != ((uint)pbVar10 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar14 = *(byte **)(pbVar11 + 0x10);
              lVar21 = *(long *)(pbVar11 + 0x20);
              if (param_4 == (byte *)0x0) {
                if (pbVar14 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar14 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar13 = *(byte **)(pbVar11 + 8);
                pbVar10 = param_3;
                pbVar12 = param_4;
                if ((param_3 != pbVar13) || (param_4 != pbVar14)) goto code_r0x000107c605b8;
              }
              if (lVar22 != 0) {
                if (lVar21 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar20 == *(byte **)(pbVar11 + 0x18)) && (lVar22 == lVar21)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar20,lVar22,*(byte **)(pbVar11 + 0x18),lVar21,0);
                goto joined_r0x000100e266a4;
              }
joined_r0x000100e26620:
              if (lVar21 == 0) {
                return (byte *)0x1;
              }
              return (byte *)0x0;
            }
            if (bVar23 != 5) {
              if ((((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
                  lVar22 == 0) && param_4 == (byte *)0x0) {
                if (pbVar11[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar22 = *(long *)(pbVar11 + 0x20);
                lVar21 = *(long *)(pbVar11 + 0x18);
                bVar23 = pbVar11[8] | (byte)lVar21;
                bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
                bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
                bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
                bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
                bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
                bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
                bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
                bVar31 = pbVar11[0x10] | (byte)lVar22;
                bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
                auVar39[1] = bVar24;
                auVar39[0] = bVar23;
                auVar39[2] = bVar25;
                auVar39[3] = bVar26;
                auVar39[4] = bVar27;
                auVar39[5] = bVar28;
                auVar39[6] = bVar29;
                auVar39[7] = bVar30;
                auVar39[8] = bVar31;
                auVar39[9] = bVar32;
                auVar39[10] = bVar33;
                auVar39[0xb] = bVar34;
                auVar39[0xc] = bVar35;
                auVar39[0xd] = bVar36;
                auVar39[0xe] = bVar37;
                auVar39[0xf] = bVar38;
                auVar3[1] = bVar24;
                auVar3[0] = bVar23;
                auVar3[2] = bVar25;
                auVar3[3] = bVar26;
                auVar3[4] = bVar27;
                auVar3[5] = bVar28;
                auVar3[6] = bVar29;
                auVar3[7] = bVar30;
                auVar3[8] = bVar31;
                auVar3[9] = bVar32;
                auVar3[10] = bVar33;
                auVar3[0xb] = bVar34;
                auVar3[0xc] = bVar35;
                auVar3[0xd] = bVar36;
                auVar3[0xe] = bVar37;
                auVar3[0xf] = bVar38;
                auVar39 = NEON_ext(auVar39,auVar3,8,1);
                if (CONCAT17(bVar30 | auVar39[7],
                             CONCAT16(bVar29 | auVar39[6],
                                      CONCAT15(bVar28 | auVar39[5],
                                               CONCAT14(bVar27 | auVar39[4],
                                                        CONCAT13(bVar26 | auVar39[3],
                                                                 CONCAT12(bVar25 | auVar39[2],
                                                                          CONCAT11(bVar24 | auVar39[
                                                  1],bVar23 | auVar39[0]))))))) == 0 &&
                    *(long *)pbVar11 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar10 == (byte *)0x1) &&
                 (((pbVar20 == (byte *)0x0 && param_3 == (byte *)0x0) && param_4 == (byte *)0x0) &&
                  lVar22 == 0)) {
                if (pbVar11[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar11 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar11[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar11 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar22 = *(long *)(pbVar11 + 0x20);
              lVar21 = *(long *)(pbVar11 + 0x18);
              bVar23 = pbVar11[8] | (byte)lVar21;
              bVar24 = pbVar11[9] | (byte)((ulong)lVar21 >> 8);
              bVar25 = pbVar11[10] | (byte)((ulong)lVar21 >> 0x10);
              bVar26 = pbVar11[0xb] | (byte)((ulong)lVar21 >> 0x18);
              bVar27 = pbVar11[0xc] | (byte)((ulong)lVar21 >> 0x20);
              bVar28 = pbVar11[0xd] | (byte)((ulong)lVar21 >> 0x28);
              bVar29 = pbVar11[0xe] | (byte)((ulong)lVar21 >> 0x30);
              bVar30 = pbVar11[0xf] | (byte)((ulong)lVar21 >> 0x38);
              bVar31 = pbVar11[0x10] | (byte)lVar22;
              bVar32 = pbVar11[0x11] | (byte)((ulong)lVar22 >> 8);
              bVar33 = pbVar11[0x12] | (byte)((ulong)lVar22 >> 0x10);
              bVar34 = pbVar11[0x13] | (byte)((ulong)lVar22 >> 0x18);
              bVar35 = pbVar11[0x14] | (byte)((ulong)lVar22 >> 0x20);
              bVar36 = pbVar11[0x15] | (byte)((ulong)lVar22 >> 0x28);
              bVar37 = pbVar11[0x16] | (byte)((ulong)lVar22 >> 0x30);
              bVar38 = pbVar11[0x17] | (byte)((ulong)lVar22 >> 0x38);
              auVar1[1] = bVar24;
              auVar1[0] = bVar23;
              auVar1[2] = bVar25;
              auVar1[3] = bVar26;
              auVar1[4] = bVar27;
              auVar1[5] = bVar28;
              auVar1[6] = bVar29;
              auVar1[7] = bVar30;
              auVar1[8] = bVar31;
              auVar1[9] = bVar32;
              auVar1[10] = bVar33;
              auVar1[0xb] = bVar34;
              auVar1[0xc] = bVar35;
              auVar1[0xd] = bVar36;
              auVar1[0xe] = bVar37;
              auVar1[0xf] = bVar38;
              auVar2[1] = bVar24;
              auVar2[0] = bVar23;
              auVar2[2] = bVar25;
              auVar2[3] = bVar26;
              auVar2[4] = bVar27;
              auVar2[5] = bVar28;
              auVar2[6] = bVar29;
              auVar2[7] = bVar30;
              auVar2[8] = bVar31;
              auVar2[9] = bVar32;
              auVar2[10] = bVar33;
              auVar2[0xb] = bVar34;
              auVar2[0xc] = bVar35;
              auVar2[0xd] = bVar36;
              auVar2[0xe] = bVar37;
              auVar2[0xf] = bVar38;
              auVar39 = NEON_ext(auVar1,auVar2,8,1);
              lVar21 = CONCAT17(bVar30 | auVar39[7],
                                CONCAT16(bVar29 | auVar39[6],
                                         CONCAT15(bVar28 | auVar39[5],
                                                  CONCAT14(bVar27 | auVar39[4],
                                                           CONCAT13(bVar26 | auVar39[3],
                                                                    CONCAT12(bVar25 | auVar39[2],
                                                                             CONCAT11(bVar24 | 
                                                  auVar39[1],bVar23 | auVar39[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar11[0x28] != 5) {
              return (byte *)0x0;
            }
            param_7 = *(long *)(pbVar11 + 8);
            param_8 = *(ulong *)(pbVar11 + 0x10);
            lVar21 = *(long *)pbVar11;
            uVar9 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar10,lVar21,uVar9);
            if (((ulong)pbVar10 & 1) == 0) {
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
      else if (param_1 == 1) goto SUB_100e25fcc;
    }
    else if (param_5 == 2) {
      if (param_1 == 2) goto SUB_100e25fcc;
    }
    else if (param_5 == 3) {
      if (param_1 == 4) goto SUB_100e25fcc;
    }
    else if (param_1 == 5) goto SUB_100e25fcc;
  }
  else if (param_1 == param_5) goto SUB_100e25fcc;
  return (byte *)0x0;
}



/* Entry: 1039ebb44; end: 1039ebb83;  */

void FUN_1039ebb44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9070 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc368f8;
  func_0x000107c61520(&UNK_10dc368f8,&UNK_1106bc0d0);
  puRam0000000112fc9070 = puVar1;
  return;
}



/* Entry: 1039ebb84; end: 1039ebc43;  */

/* WARNING: Possible PIC construction at 0x0001039ebbb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039ebbb8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039ebb84(undefined8 *param_1,undefined8 *param_2)

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
  if ((uVar13 == param_2[2] && param_1[3] == param_2[3]) ||
     (func_0x000107c605b8(), (uVar13 & 1) != 0)) {
    uVar13 = (ulong)(param_1[4] != 0);
    if (*(char *)(param_1 + 5) != '\x01') {
      uVar13 = param_1[4];
    }
    if (*(char *)(param_2 + 5) == '\x01') {
      if (param_2[4] == 0) {
        if (uVar13 == 0) goto LAB_1039ebc28;
      }
      else if (uVar13 == 1) {
LAB_1039ebc28:
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar14 == 0) {
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
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
    else if (uVar13 == param_2[4]) goto LAB_1039ebc28;
  }
  return (byte *)0x0;
}



/* Entry: 1039ebc44; end: 1039ebd83;  */

void FUN_1039ebc44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9080 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc369d0;
  func_0x000107c61520(&UNK_10dc369d0,&UNK_1106bc150);
  puRam0000000112fc9080 = puVar1;
  return;
}



/* Entry: 1039ebd84; end: 1039ec033;  */

uint FUN_1039ebd84(ulong *param_1,ulong *param_2)

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
  undefined1 auStack_c0 [32];
  ulong uStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  ulong uStack_70;
  ulong uStack_68;
  
  uVar2 = *param_1;
  if ((((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0)
       ) && (param_1[2] == param_2[2])) && ((((byte)param_1[3] ^ (byte)param_2[3]) & 1) == 0)) {
    uVar4 = param_1[7];
    uVar2 = param_1[6];
    uVar8 = param_1[9];
    uVar6 = param_1[8];
    uVar5 = param_2[7];
    uVar3 = param_2[6];
    uVar9 = param_2[9];
    uVar7 = param_2[8];
    uStack_a0 = uVar3;
    uStack_98 = uVar5;
    uStack_90 = uVar7;
    uStack_88 = uVar9;
    uStack_80 = uVar2;
    uStack_78 = uVar4;
    uStack_70 = uVar6;
    uStack_68 = uVar8;
    if (uVar8 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_1039ebe90;
      if (uVar2 == uVar3) {
        if ((int)uVar4 != (int)uVar5) {
          FUN_1039eb394(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
          FUN_1039eb394(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
          uVar3 = uVar2;
          goto LAB_1039ebfe4;
        }
        FUN_1039eb394(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
        FUN_1039eb394(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
        uVar3 = uVar6;
        func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
        func_0x0001015d38c8(uVar2,uVar5,uVar7,uVar9);
        if ((uVar3 & 1) != 0) goto LAB_1039ebe60;
      }
      else {
        FUN_1039eb394(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
        FUN_1039eb394(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
LAB_1039ebfe4:
        func_0x0001015d38c8(uVar3,uVar5,uVar7,uVar9);
      }
    }
    else {
      if (0xe < uVar9 >> 0x3c) {
        FUN_1039eb394(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
        FUN_1039eb394(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
LAB_1039ebe60:
        func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
        uVar2 = param_1[4];
        func_0x000100e25fcc(uVar2,param_1[5],param_2[4],param_2[5]);
        uVar1 = (uint)uVar2;
        goto LAB_1039ec010;
      }
LAB_1039ebe90:
      FUN_1039eb394(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
      FUN_1039eb394(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
      func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
      uVar2 = uVar3;
      uVar4 = uVar5;
      uVar6 = uVar7;
      uVar8 = uVar9;
    }
    func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
  }
  uVar1 = 0;
LAB_1039ec010:
  return uVar1 & 1;
}



/* Entry: 1039ec034; end: 1039ec117;  */

/* WARNING: Possible PIC construction at 0x0001039ec06c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039ec0f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039ec070) */
/* WARNING: Removing unreachable block (ram,0x0001039ec0fc) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039ec034(undefined8 *param_1,undefined8 *param_2)

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
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  if (param_1[2] == param_2[2]) {
    lVar19 = param_1[3];
    lVar22 = param_2[3];
    lVar26 = *(long *)(lVar19 + 0x10);
    if (lVar26 == *(long *)(lVar22 + 0x10)) {
      if (lVar26 != 0 && lVar19 != lVar22) {
        puVar28 = (undefined8 *)(lVar22 + 0x28);
        puVar29 = (undefined8 *)(lVar19 + 0x28);
        do {
          pbVar12 = (byte *)puVar29[-1];
          pbVar14 = (byte *)*puVar29;
          pbVar15 = (byte *)puVar28[-1];
          pbVar17 = (byte *)*puVar28;
          if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
          goto code_r0x000107c605b8;
          puVar28 = puVar28 + 2;
          puVar29 = puVar29 + 2;
          lVar26 = lVar26 + -1;
        } while (lVar26 != 0);
      }
      pbVar10 = (byte *)param_1[4];
      pbVar27 = (byte *)param_1[5];
      lVar26 = param_2[4];
      uVar16 = param_2[5];
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
        uVar5 = (uint)(uVar16 >> 0x20);
        uVar23 = uVar5 >> 0x1e;
        iVar8 = (int)pbVar10;
        pbVar13 = pbVar27;
        if ((ulong)pbVar27 >> 0x3e == 3) {
          uVar21 = 0;
          if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
              (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar16 != 0xc000000000000000)))
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
            uVar24 = uVar16 >> 0x30 & 0xff;
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
                pbVar13 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
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
              lVar19 = *(long *)(pbVar10 + 0x10);
              unaff_x24 = *(byte **)(pbVar10 + 0x18);
              func_0x000107c5ec30();
              pbVar13 = pbVar10;
              if (pbVar10 != (byte *)0x0) {
                func_0x000107c5ec3c();
                if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                  (*pcVar6)();
                }
                pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
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
            unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar26,uVar16);
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
        bVar30 = pbVar9[0x28];
        pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                           (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
        pbVar14 = pbVar10;
        if (bVar30 < 3) {
          if (bVar30 == 0) {
            if (pbVar13[0x28] == 0) {
              lVar26 = *(long *)pbVar13;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,lVar26,uVar11);
              return (byte *)(ulong)((uint)pbVar12 & 1);
            }
            return (byte *)0x0;
          }
          if (bVar30 == 1) {
            if (pbVar13[0x28] != 1) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)(pbVar13 + 8);
            pbVar17 = *(byte **)(pbVar13 + 0x10);
            lVar26 = *(long *)pbVar13;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar26,uVar11);
            if (((ulong)pbVar12 & 1) == 0) {
              return (byte *)0x0;
            }
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 == pbVar15) && (pbVar27 == pbVar17)) {
              return (byte *)0x1;
            }
          }
          else {
            if (pbVar13[0x28] != 2) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            lVar26 = *(long *)(pbVar13 + 0x18);
            if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
              if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
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
            if (pbVar13[0x28] != 4) {
              return (byte *)0x0;
            }
            pbVar15 = *(byte **)pbVar13;
            pbVar17 = *(byte **)(pbVar13 + 8);
            if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
               (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
               pbVar17 = *(byte **)(pbVar13 + 0x18),
               pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
          lVar26 = *(long *)(pbVar13 + 0x20);
          if (pbVar27 == (byte *)0x0) {
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
            pbVar14 = pbVar27;
            if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
          }
          if (lVar19 != 0) {
            if (lVar26 == 0) {
              return (byte *)0x0;
            }
            if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar26)) {
              return (byte *)0x1;
            }
            func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar26,0);
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
            if (pbVar13[0x28] != 6) {
              return (byte *)0x0;
            }
            lVar19 = *(long *)(pbVar13 + 0x20);
            lVar26 = *(long *)(pbVar13 + 0x18);
            bVar30 = pbVar13[8] | (byte)lVar26;
            bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
            bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
            bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
            bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
            bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
            bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
            bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
            bVar38 = pbVar13[0x10] | (byte)lVar19;
            bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
            bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
            bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
            bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
            bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
            bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
            bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
                                                            ))))) == 0 && *(long *)pbVar13 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
          if ((pbVar12 == (byte *)0x1) &&
             (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
              lVar19 == 0)) {
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
          lVar19 = *(long *)(pbVar13 + 0x20);
          lVar26 = *(long *)(pbVar13 + 0x18);
          bVar30 = pbVar13[8] | (byte)lVar26;
          bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
          bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
          bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
          bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
          bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
          bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
          bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
          bVar38 = pbVar13[0x10] | (byte)lVar19;
          bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
          bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
          bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
          bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
          bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
          bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
          bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
        if (pbVar13[0x28] != 5) {
          return (byte *)0x0;
        }
        lVar26 = *(long *)(pbVar13 + 8);
        uVar16 = *(ulong *)(pbVar13 + 0x10);
        lVar19 = *(long *)pbVar13;
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



/* Entry: 1039ec118; end: 1039ec83f;  */

uint FUN_1039ec118(ulong *param_1,ulong *param_2)

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
  
  uVar2 = *param_1;
  if (((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
     && ((uVar2 = param_1[2], uVar2 == param_2[2] && param_1[3] == param_2[3] ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[4];
    if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = param_1[6];
      if ((((uVar2 == param_2[6]) && (param_1[7] == param_2[7])) ||
          (func_0x000107c605b8(), (uVar2 & 1) != 0)) && (param_1[8] == param_2[8])) {
        uVar9 = param_1[0xc];
        uVar2 = param_1[0xb];
        uVar10 = param_1[0xe];
        uVar6 = param_1[0xd];
        uVar15 = param_1[0x10];
        uVar13 = param_1[0xf];
        uVar4 = param_1[0x11];
        uVar11 = param_2[0xc];
        uVar7 = param_2[0xb];
        uVar16 = param_2[0xe];
        uVar14 = param_2[0xd];
        uVar12 = param_2[0x10];
        uVar8 = param_2[0xf];
        uVar5 = param_2[0x11];
        uStack_f0 = uVar7;
        uStack_e8 = uVar11;
        uStack_e0 = uVar14;
        uStack_d8 = uVar16;
        uStack_d0 = uVar8;
        uStack_c8 = uVar12;
        uStack_c0 = uVar5;
        uStack_b0 = uVar2;
        uStack_a8 = uVar9;
        uStack_a0 = uVar6;
        uStack_98 = uVar10;
        uStack_90 = uVar13;
        uStack_88 = uVar15;
        uStack_80 = uVar4;
        if (uVar9 == 0) {
          if (uVar11 == 0) {
            FUN_1039eb394(&uStack_b0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
            FUN_1039eb394(&uStack_f0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
LAB_1039ec45c:
            func_0x0001039eb348(uVar2,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
            uVar2 = param_1[9];
            func_0x000100e25fcc(uVar2,param_1[10],param_2[9],param_2[10]);
            uVar1 = (uint)uVar2;
            goto LAB_1039ec544;
          }
LAB_1039ec370:
          FUN_1039eb394(&uStack_b0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
          FUN_1039eb394(&uStack_f0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
          func_0x0001039eb348(uVar2,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
          uVar2 = uVar7;
          uVar9 = uVar11;
          uVar6 = uVar14;
          uVar10 = uVar16;
          uVar13 = uVar8;
          uVar15 = uVar12;
          uVar4 = uVar5;
        }
        else {
          if (uVar11 == 0) goto LAB_1039ec370;
          if (((uVar2 == uVar7) && (uVar9 == uVar11)) ||
             (uVar3 = uVar2, func_0x000107c605b8(uVar2,uVar9,uVar7,uVar11,0), (uVar3 & 1) != 0)) {
            if (uVar6 != uVar14) {
              FUN_1039eb394(&uStack_b0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
              FUN_1039eb394(&uStack_f0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
              goto LAB_1039ec508;
            }
            if (((uVar10 != uVar16) || (uVar13 != uVar8)) &&
               (uVar14 = uVar10, func_0x000107c605b8(uVar10,uVar13,uVar16,uVar8,0),
               (uVar14 & 1) == 0)) {
              FUN_1039eb394(&uStack_b0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
              FUN_1039eb394(&uStack_f0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
              uVar14 = uVar6;
              goto LAB_1039ec508;
            }
            FUN_1039eb394(&uStack_b0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
            FUN_1039eb394(&uStack_f0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
            uVar14 = uVar15;
            func_0x000100e25fcc(uVar15,uVar4,uVar12,uVar5);
            func_0x0001039eb348(uVar7,uVar11,uVar6,uVar16,uVar8,uVar12,uVar5);
            if ((uVar14 & 1) != 0) goto LAB_1039ec45c;
          }
          else {
            FUN_1039eb394(&uStack_b0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
            FUN_1039eb394(&uStack_f0,auStack_128,0x112fc8f98,&UNK_10dc35b20);
LAB_1039ec508:
            func_0x0001039eb348(uVar7,uVar11,uVar14,uVar16,uVar8,uVar12,uVar5);
          }
        }
        func_0x0001039eb348(uVar2,uVar9,uVar6,uVar10,uVar13,uVar15,uVar4);
      }
    }
  }
  uVar1 = 0;
LAB_1039ec544:
  return uVar1 & 1;
}



/* Entry: 1039ec840; end: 1039ec8ff;  */

void FUN_1039ec840(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc90c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36c58;
  func_0x000107c61520(&UNK_10dc36c58,&UNK_1106bc2e8);
  puRam0000000112fc90c0 = puVar1;
  return;
}



/* Entry: 1039ec900; end: 1039ec98b;  */

/* WARNING: Possible PIC construction at 0x0001039ec930: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039ec934) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039ec900(undefined8 *param_1,undefined8 *param_2)

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
  if ((param_1[2] != param_2[2]) ||
     ((uVar13 = param_1[3], uVar13 != param_2[3] || param_1[4] != param_2[4] &&
      (func_0x000107c605b8(), (uVar13 & 1) == 0)))) {
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



/* Entry: 1039ec98c; end: 1039eca4b;  */

void FUN_1039ec98c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc90e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36e08;
  func_0x000107c61520(&UNK_10dc36e08,&UNK_1106bc3f8);
  puRam0000000112fc90e8 = puVar1;
  return;
}



/* Entry: 1039eca4c; end: 1039ecb1f;  */

/* WARNING: Possible PIC construction at 0x0001039eca84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039ecb00: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039eca88) */
/* WARNING: Removing unreachable block (ram,0x0001039ecb04) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039eca4c(undefined8 *param_1,undefined8 *param_2)

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
  pbVar14 = (byte *)param_1[1];
  pbVar15 = (byte *)*param_2;
  pbVar17 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar12,pbVar14,pbVar15,pbVar17,0);
    return pbVar12;
  }
  lVar19 = param_1[2];
  lVar22 = param_2[2];
  lVar26 = *(long *)(lVar19 + 0x10);
  if (lVar26 != *(long *)(lVar22 + 0x10)) {
    return (byte *)0x0;
  }
  if (lVar26 != 0 && lVar19 != lVar22) {
    puVar28 = (undefined8 *)(lVar22 + 0x28);
    puVar29 = (undefined8 *)(lVar19 + 0x28);
    do {
      pbVar12 = (byte *)puVar29[-1];
      pbVar14 = (byte *)*puVar29;
      pbVar15 = (byte *)puVar28[-1];
      pbVar17 = (byte *)*puVar28;
      if ((byte *)puVar29[-1] != (byte *)puVar28[-1] || (byte *)*puVar29 != (byte *)*puVar28)
      goto code_r0x000107c605b8;
      puVar28 = puVar28 + 2;
      puVar29 = puVar29 + 2;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
  }
  pbVar10 = (byte *)param_1[3];
  pbVar27 = (byte *)param_1[4];
  lVar26 = param_2[3];
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
    uVar4 = (uint)((ulong)pbVar27 >> 0x20);
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar23 = uVar5 >> 0x1e;
    iVar8 = (int)pbVar10;
    pbVar13 = pbVar27;
    if ((ulong)pbVar27 >> 0x3e == 3) {
      uVar21 = 0;
      if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar21 = 0, lVar26 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
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
        uVar24 = uVar16 >> 0x30 & 0xff;
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
            pbVar13 = puVar7 + (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70);
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
          lVar19 = *(long *)(pbVar10 + 0x10);
          unaff_x24 = *(byte **)(pbVar10 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar10;
          if (pbVar10 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar19,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar10 = pbVar10 + (lVar19 - (long)pbVar13);
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
        unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar26,uVar16);
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
    bVar30 = pbVar9[0x28];
    pbVar27 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
    pbVar14 = pbVar10;
    if (bVar30 < 3) {
      if (bVar30 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar26 = *(long *)pbVar13;
          uVar11 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar12,lVar26,uVar11);
          return (byte *)(ulong)((uint)pbVar12 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar30 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar26 = *(long *)pbVar13;
        uVar11 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar12,lVar26,uVar11);
        if (((ulong)pbVar12 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar12 = pbVar10;
        pbVar14 = pbVar27;
        if ((pbVar10 == pbVar15) && (pbVar27 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar26 = *(long *)(pbVar13 + 0x18);
        if ((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) {
          if (((pbVar9[0x10] ^ pbVar13[0x10]) & 1) != 0) {
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
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar12 == pbVar15) && (pbVar10 == pbVar17)) &&
           (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar27 == *(byte **)(pbVar13 + 0x10) && pbVar25 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar26 = *(long *)(pbVar13 + 0x20);
      if (pbVar27 == (byte *)0x0) {
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
        pbVar14 = pbVar27;
        if ((pbVar10 != pbVar15) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar19 != 0) {
        if (lVar26 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar25 == *(byte **)(pbVar13 + 0x18)) && (lVar19 == lVar26)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar25,lVar19,*(byte **)(pbVar13 + 0x18),lVar26,0);
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
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar19 = *(long *)(pbVar13 + 0x20);
        lVar26 = *(long *)(pbVar13 + 0x18);
        bVar30 = pbVar13[8] | (byte)lVar26;
        bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
        bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
        bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
        bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
        bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
        bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
        bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
        bVar38 = pbVar13[0x10] | (byte)lVar19;
        bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
        bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
        bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
        bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
        bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
        bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
        bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar12 == (byte *)0x1) &&
         (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0) &&
          lVar19 == 0)) {
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
      lVar19 = *(long *)(pbVar13 + 0x20);
      lVar26 = *(long *)(pbVar13 + 0x18);
      bVar30 = pbVar13[8] | (byte)lVar26;
      bVar31 = pbVar13[9] | (byte)((ulong)lVar26 >> 8);
      bVar32 = pbVar13[10] | (byte)((ulong)lVar26 >> 0x10);
      bVar33 = pbVar13[0xb] | (byte)((ulong)lVar26 >> 0x18);
      bVar34 = pbVar13[0xc] | (byte)((ulong)lVar26 >> 0x20);
      bVar35 = pbVar13[0xd] | (byte)((ulong)lVar26 >> 0x28);
      bVar36 = pbVar13[0xe] | (byte)((ulong)lVar26 >> 0x30);
      bVar37 = pbVar13[0xf] | (byte)((ulong)lVar26 >> 0x38);
      bVar38 = pbVar13[0x10] | (byte)lVar19;
      bVar39 = pbVar13[0x11] | (byte)((ulong)lVar19 >> 8);
      bVar40 = pbVar13[0x12] | (byte)((ulong)lVar19 >> 0x10);
      bVar41 = pbVar13[0x13] | (byte)((ulong)lVar19 >> 0x18);
      bVar42 = pbVar13[0x14] | (byte)((ulong)lVar19 >> 0x20);
      bVar43 = pbVar13[0x15] | (byte)((ulong)lVar19 >> 0x28);
      bVar44 = pbVar13[0x16] | (byte)((ulong)lVar19 >> 0x30);
      bVar45 = pbVar13[0x17] | (byte)((ulong)lVar19 >> 0x38);
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
                                                                     CONCAT11(bVar31 | auVar46[1],
                                                                              bVar30 | auVar46[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar26 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar19 = *(long *)pbVar13;
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



/* Entry: 1039ecb20; end: 1039ecc63;  */

uint FUN_1039ecb20(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_200 [144];
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
  
  uVar2 = *param_1;
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) || (func_0x000107c605b8(), (uVar2 & 1) != 0))
  {
    uVar4 = param_1[2];
    uVar2 = param_2[2];
    lVar5 = *(long *)(uVar4 + 0x10);
    if (lVar5 == *(long *)(uVar2 + 0x10)) {
      if (lVar5 != 0 && uVar4 != uVar2) {
        puVar6 = (undefined8 *)(uVar4 + 0x20);
        puVar7 = (undefined8 *)(uVar2 + 0x20);
        do {
          uStack_168 = puVar6[1];
          uStack_170 = *puVar6;
          uStack_158 = puVar6[3];
          uStack_160 = puVar6[2];
          uStack_148 = puVar6[5];
          uStack_150 = puVar6[4];
          uStack_138 = puVar6[7];
          uStack_140 = puVar6[6];
          uStack_128 = puVar6[9];
          uStack_130 = puVar6[8];
          uStack_118 = puVar6[0xb];
          uStack_120 = puVar6[10];
          uStack_108 = puVar6[0xd];
          uStack_110 = puVar6[0xc];
          uStack_f8 = puVar6[0xf];
          uStack_100 = puVar6[0xe];
          uStack_e8 = puVar6[0x11];
          uStack_f0 = puVar6[0x10];
          uStack_d8 = puVar7[1];
          uStack_e0 = *puVar7;
          uStack_c8 = puVar7[3];
          uStack_d0 = puVar7[2];
          uStack_b8 = puVar7[5];
          uStack_c0 = puVar7[4];
          uStack_a8 = puVar7[7];
          uStack_b0 = puVar7[6];
          uStack_98 = puVar7[9];
          uStack_a0 = puVar7[8];
          uStack_88 = puVar7[0xb];
          uStack_90 = puVar7[10];
          uStack_78 = puVar7[0xd];
          uStack_80 = puVar7[0xc];
          uStack_68 = puVar7[0xf];
          uStack_70 = puVar7[0xe];
          uStack_58 = puVar7[0x11];
          uStack_60 = puVar7[0x10];
          FUN_1039f1b70(&uStack_170,auStack_200);
          FUN_1039f1b70(&uStack_e0,auStack_200);
          puVar3 = &uStack_170;
          FUN_1039ec118(puVar3,&uStack_e0);
          func_0x0001039f1ba4(&uStack_e0);
          func_0x0001039f1ba4(&uStack_170);
          if (((ulong)puVar3 & 1) == 0) goto LAB_1039ecc40;
          puVar7 = puVar7 + 0x12;
          puVar6 = puVar6 + 0x12;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      func_0x000100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_1039ecc44;
    }
  }
LAB_1039ecc40:
  uVar1 = 0;
LAB_1039ecc44:
  return uVar1 & 1;
}



/* Entry: 1039ecc64; end: 1039ecfa3;  */

void FUN_1039ecc64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9110 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36fb8;
  func_0x000107c61520(&UNK_10dc36fb8,&UNK_1106bc518);
  puRam0000000112fc9110 = puVar1;
  return;
}



/* Entry: 1039ecfa4; end: 1039ecfb7;  */

void FUN_1039ecfa4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ecfb8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ecff8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ecfb8; end: 1039ed063;  */

void FUN_1039ecfb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc91c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35bc8;
  func_0x000107c61520(&UNK_10dc35bc8,&UNK_1106bb928);
  puRam0000000112fc91c0 = puVar1;
  return;
}



/* Entry: 1039ed064; end: 1039ed067;  */

void FUN_1039ed064(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc91e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35c08;
  func_0x000107c61520(&UNK_10dc35c08,&UNK_1106bb928);
  puRam0000000112fc91e0 = puVar1;
  return;
}



/* Entry: 1039ed068; end: 1039ed0a7;  */

void FUN_1039ed068(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc91e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35c08;
  func_0x000107c61520(&UNK_10dc35c08,&UNK_1106bb928);
  puRam0000000112fc91e0 = puVar1;
  return;
}



/* Entry: 1039ed0a8; end: 1039ed0bb;  */

void FUN_1039ed0a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed0bc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ed0fc)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed0bc; end: 1039ed167;  */

void FUN_1039ed0bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc91e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35cc8;
  func_0x000107c61520(&UNK_10dc35cc8,&UNK_1106bb9b8);
  puRam0000000112fc91e8 = puVar1;
  return;
}



/* Entry: 1039ed168; end: 1039ed16b;  */

void FUN_1039ed168(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35d08;
  func_0x000107c61520(&UNK_10dc35d08,&UNK_1106bb9b8);
  puRam0000000112fc9208 = puVar1;
  return;
}



/* Entry: 1039ed16c; end: 1039ed1ab;  */

void FUN_1039ed16c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9208 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35d08;
  func_0x000107c61520(&UNK_10dc35d08,&UNK_1106bb9b8);
  puRam0000000112fc9208 = puVar1;
  return;
}



/* Entry: 1039ed1ac; end: 1039ed1bf;  */

void FUN_1039ed1ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed1c0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ed200)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed1c0; end: 1039ed26b;  */

void FUN_1039ed1c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9210 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35dc8;
  func_0x000107c61520(&UNK_10dc35dc8,&UNK_1106bba48);
  puRam0000000112fc9210 = puVar1;
  return;
}



/* Entry: 1039ed26c; end: 1039ed26f;  */

void FUN_1039ed26c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35e08;
  func_0x000107c61520(&UNK_10dc35e08,&UNK_1106bba48);
  puRam0000000112fc9230 = puVar1;
  return;
}



/* Entry: 1039ed270; end: 1039ed2af;  */

void FUN_1039ed270(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9230 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35e08;
  func_0x000107c61520(&UNK_10dc35e08,&UNK_1106bba48);
  puRam0000000112fc9230 = puVar1;
  return;
}



/* Entry: 1039ed2b0; end: 1039ed2c3;  */

void FUN_1039ed2b0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed2c4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ed304)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed2c4; end: 1039ed36f;  */

void FUN_1039ed2c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35ec8;
  func_0x000107c61520(&UNK_10dc35ec8,&UNK_1106bbad8);
  puRam0000000112fc9238 = puVar1;
  return;
}



/* Entry: 1039ed370; end: 1039ed373;  */

void FUN_1039ed370(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35f08;
  func_0x000107c61520(&UNK_10dc35f08,&UNK_1106bbad8);
  puRam0000000112fc9258 = puVar1;
  return;
}



/* Entry: 1039ed374; end: 1039ed3b3;  */

void FUN_1039ed374(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35f08;
  func_0x000107c61520(&UNK_10dc35f08,&UNK_1106bbad8);
  puRam0000000112fc9258 = puVar1;
  return;
}



/* Entry: 1039ed3b4; end: 1039ed3c7;  */

void FUN_1039ed3b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed3c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ed408)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed3c8; end: 1039ed473;  */

void FUN_1039ed3c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc35fc8;
  func_0x000107c61520(&UNK_10dc35fc8,&UNK_1106bbb68);
  puRam0000000112fc9260 = puVar1;
  return;
}



/* Entry: 1039ed474; end: 1039ed477;  */

void FUN_1039ed474(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36008;
  func_0x000107c61520(&UNK_10dc36008,&UNK_1106bbb68);
  puRam0000000112fc9280 = puVar1;
  return;
}



/* Entry: 1039ed478; end: 1039ed4b7;  */

void FUN_1039ed478(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36008;
  func_0x000107c61520(&UNK_10dc36008,&UNK_1106bbb68);
  puRam0000000112fc9280 = puVar1;
  return;
}



/* Entry: 1039ed4b8; end: 1039ed4cb;  */

void FUN_1039ed4b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed4cc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ed50c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed4cc; end: 1039ed577;  */

void FUN_1039ed4cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc360c8;
  func_0x000107c61520(&UNK_10dc360c8,&UNK_1106bbbf8);
  puRam0000000112fc9288 = puVar1;
  return;
}



/* Entry: 1039ed578; end: 1039ed57b;  */

void FUN_1039ed578(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36108;
  func_0x000107c61520(&UNK_10dc36108,&UNK_1106bbbf8);
  puRam0000000112fc92a8 = puVar1;
  return;
}



/* Entry: 1039ed57c; end: 1039ed5bb;  */

void FUN_1039ed57c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36108;
  func_0x000107c61520(&UNK_10dc36108,&UNK_1106bbbf8);
  puRam0000000112fc92a8 = puVar1;
  return;
}



/* Entry: 1039ed5bc; end: 1039ed5cf;  */

void FUN_1039ed5bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed5d0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1039ed610)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed5d0; end: 1039ed67b;  */

void FUN_1039ed5d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc361c8;
  func_0x000107c61520(&UNK_10dc361c8,&UNK_1106bbc88);
  puRam0000000112fc92b0 = puVar1;
  return;
}



/* Entry: 1039ed67c; end: 1039ed6bf;  */

void FUN_1039ed67c(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 1039ed6c0; end: 1039ed6c3;  */

void FUN_1039ed6c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36208;
  func_0x000107c61520(&UNK_10dc36208,&UNK_1106bbc88);
  puRam0000000112fc92d0 = puVar1;
  return;
}



/* Entry: 1039ed6c4; end: 1039ed703;  */

void FUN_1039ed6c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36208;
  func_0x000107c61520(&UNK_10dc36208,&UNK_1106bbc88);
  puRam0000000112fc92d0 = puVar1;
  return;
}



/* Entry: 1039ed704; end: 1039ed727;  */

void FUN_1039ed704(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed728();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039ed728; end: 1039ed767;  */

void FUN_1039ed728(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc362e8;
  func_0x000107c61520(&UNK_10dc362e8,&UNK_1106bbd00);
  puRam0000000112fc92d8 = puVar1;
  return;
}



/* Entry: 1039ed768; end: 1039ed77b;  */

void FUN_1039ed768(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039eb458();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039ed77c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed77c; end: 1039ed7bb;  */

void FUN_1039ed77c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc362a0;
  func_0x000107c61520(&DAT_10dc362a0,&UNK_1106bbd00);
  puRam0000000112fc92e0 = puVar1;
  return;
}



/* Entry: 1039ed7bc; end: 1039ed7bf;  */

void FUN_1039ed7bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36350;
  func_0x000107c61520(&UNK_10dc36350,&UNK_1106bbd00);
  puRam0000000112fc92e8 = puVar1;
  return;
}



/* Entry: 1039ed7c0; end: 1039ed7ff;  */

void FUN_1039ed7c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36350;
  func_0x000107c61520(&UNK_10dc36350,&UNK_1106bbd00);
  puRam0000000112fc92e8 = puVar1;
  return;
}



/* Entry: 1039ed800; end: 1039ed823;  */

void FUN_1039ed800(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed824();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039ed824; end: 1039ed863;  */

void FUN_1039ed824(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc363c0;
  func_0x000107c61520(&UNK_10dc363c0,&UNK_1106bbd88);
  puRam0000000112fc92f0 = puVar1;
  return;
}



/* Entry: 1039ed864; end: 1039ed877;  */

void FUN_1039ed864(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039eb59c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039ed878();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed878; end: 1039ed8b7;  */

void FUN_1039ed878(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc92f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc36378;
  func_0x000107c61520(&DAT_10dc36378,&UNK_1106bbd88);
  puRam0000000112fc92f8 = puVar1;
  return;
}



/* Entry: 1039ed8b8; end: 1039ed8bb;  */

void FUN_1039ed8b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36428;
  func_0x000107c61520(&UNK_10dc36428,&UNK_1106bbd88);
  puRam0000000112fc9300 = puVar1;
  return;
}



/* Entry: 1039ed8bc; end: 1039ed8fb;  */

void FUN_1039ed8bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36428;
  func_0x000107c61520(&UNK_10dc36428,&UNK_1106bbd88);
  puRam0000000112fc9300 = puVar1;
  return;
}



/* Entry: 1039ed8fc; end: 1039ed91f;  */

void FUN_1039ed8fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed920();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039ed920; end: 1039ed95f;  */

void FUN_1039ed920(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9308 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36498;
  func_0x000107c61520(&UNK_10dc36498,&UNK_1106bbe20);
  puRam0000000112fc9308 = puVar1;
  return;
}



/* Entry: 1039ed960; end: 1039ed977;  */

void FUN_1039ed960(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039eb69c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&SUB_1010eae3c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ed978; end: 1039ed9b7;  */

void FUN_1039ed978(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9310 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36500;
  func_0x000107c61520(&UNK_10dc36500,&UNK_1106bbe20);
  puRam0000000112fc9310 = puVar1;
  return;
}



/* Entry: 1039ed9b8; end: 1039ed9db;  */

void FUN_1039ed9b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ed9dc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039ed9dc; end: 1039eda1b;  */

void FUN_1039ed9dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36570;
  func_0x000107c61520(&UNK_10dc36570,&UNK_1106bbea8);
  puRam0000000112fc9318 = puVar1;
  return;
}



/* Entry: 1039eda1c; end: 1039eda33;  */

void FUN_1039eda1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1039eb6dc)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&SUB_1010eae7c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039eda34; end: 1039eda73;  */

void FUN_1039eda34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc365d8;
  func_0x000107c61520(&UNK_10dc365d8,&UNK_1106bbea8);
  puRam0000000112fc9320 = puVar1;
  return;
}



/* Entry: 1039eda74; end: 1039eda97;  */

void FUN_1039eda74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039eda98();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039eda98; end: 1039edad7;  */

void FUN_1039eda98(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36648;
  func_0x000107c61520(&UNK_10dc36648,&UNK_1106bbf28);
  puRam0000000112fc9328 = puVar1;
  return;
}



/* Entry: 1039edad8; end: 1039edaeb;  */

void FUN_1039edad8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039eb8dc();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039edaec();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039edaec; end: 1039edb2b;  */

void FUN_1039edaec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc36600;
  func_0x000107c61520(&DAT_10dc36600,&UNK_1106bbf28);
  puRam0000000112fc9330 = puVar1;
  return;
}



/* Entry: 1039edb2c; end: 1039edb2f;  */

void FUN_1039edb2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc366b0;
  func_0x000107c61520(&UNK_10dc366b0,&UNK_1106bbf28);
  puRam0000000112fc9338 = puVar1;
  return;
}



/* Entry: 1039edb30; end: 1039edb6f;  */

void FUN_1039edb30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9338 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc366b0;
  func_0x000107c61520(&UNK_10dc366b0,&UNK_1106bbf28);
  puRam0000000112fc9338 = puVar1;
  return;
}



/* Entry: 1039edb70; end: 1039edb93;  */

void FUN_1039edb70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039edb94();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039edb94; end: 1039edbd3;  */

void FUN_1039edb94(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9340 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36720;
  func_0x000107c61520(&UNK_10dc36720,&UNK_1106bbfc0);
  puRam0000000112fc9340 = puVar1;
  return;
}



/* Entry: 1039edbd4; end: 1039edbe7;  */

void FUN_1039edbd4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1039eb91c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039edbe8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039edbe8; end: 1039edc27;  */

void FUN_1039edbe8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9348 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc366d8;
  func_0x000107c61520(&DAT_10dc366d8,&UNK_1106bbfc0);
  puRam0000000112fc9348 = puVar1;
  return;
}



/* Entry: 1039edc28; end: 1039edc2b;  */

void FUN_1039edc28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36788;
  func_0x000107c61520(&UNK_10dc36788,&UNK_1106bbfc0);
  puRam0000000112fc9350 = puVar1;
  return;
}



/* Entry: 1039edc2c; end: 1039edc6b;  */

void FUN_1039edc2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9350 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36788;
  func_0x000107c61520(&UNK_10dc36788,&UNK_1106bbfc0);
  puRam0000000112fc9350 = puVar1;
  return;
}



/* Entry: 1039edc6c; end: 1039edc8f;  */

void FUN_1039edc6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039edc90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039edc90; end: 1039edccf;  */

void FUN_1039edc90(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9358 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc367f8;
  func_0x000107c61520(&UNK_10dc367f8,&UNK_1106bc040);
  puRam0000000112fc9358 = puVar1;
  return;
}



/* Entry: 1039edcd0; end: 1039edce3;  */

void FUN_1039edcd0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039eba2c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039edce4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039edce4; end: 1039edd23;  */

void FUN_1039edce4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9360 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc367b0;
  func_0x000107c61520(&DAT_10dc367b0,&UNK_1106bc040);
  puRam0000000112fc9360 = puVar1;
  return;
}



/* Entry: 1039edd24; end: 1039edd27;  */

void FUN_1039edd24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36860;
  func_0x000107c61520(&UNK_10dc36860,&UNK_1106bc040);
  puRam0000000112fc9368 = puVar1;
  return;
}



/* Entry: 1039edd28; end: 1039edd67;  */

void FUN_1039edd28(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9368 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36860;
  func_0x000107c61520(&UNK_10dc36860,&UNK_1106bc040);
  puRam0000000112fc9368 = puVar1;
  return;
}



/* Entry: 1039edd68; end: 1039edd8b;  */

void FUN_1039edd68(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039edd8c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039edd8c; end: 1039eddcb;  */

void FUN_1039edd8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9370 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc368d0;
  func_0x000107c61520(&UNK_10dc368d0,&UNK_1106bc0d0);
  puRam0000000112fc9370 = puVar1;
  return;
}



/* Entry: 1039eddcc; end: 1039edddf;  */

void FUN_1039eddcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ebb44();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039edde0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039edde0; end: 1039ede1f;  */

void FUN_1039edde0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9378 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc36888;
  func_0x000107c61520(&DAT_10dc36888,&UNK_1106bc0d0);
  puRam0000000112fc9378 = puVar1;
  return;
}



/* Entry: 1039ede20; end: 1039ede23;  */

void FUN_1039ede20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36938;
  func_0x000107c61520(&UNK_10dc36938,&UNK_1106bc0d0);
  puRam0000000112fc9380 = puVar1;
  return;
}



/* Entry: 1039ede24; end: 1039ede63;  */

void FUN_1039ede24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9380 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36938;
  func_0x000107c61520(&UNK_10dc36938,&UNK_1106bc0d0);
  puRam0000000112fc9380 = puVar1;
  return;
}



/* Entry: 1039ede64; end: 1039ede87;  */

void FUN_1039ede64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ede88();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039ede88; end: 1039edec7;  */

void FUN_1039ede88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9388 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc369a8;
  func_0x000107c61520(&UNK_10dc369a8,&UNK_1106bc150);
  puRam0000000112fc9388 = puVar1;
  return;
}



/* Entry: 1039edec8; end: 1039ededb;  */

void FUN_1039edec8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039ebc44();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039ededc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039ededc; end: 1039edf1b;  */

void FUN_1039ededc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9390 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc36960;
  func_0x000107c61520(&DAT_10dc36960,&UNK_1106bc150);
  puRam0000000112fc9390 = puVar1;
  return;
}



/* Entry: 1039edf1c; end: 1039edf1f;  */

void FUN_1039edf1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36a10;
  func_0x000107c61520(&UNK_10dc36a10,&UNK_1106bc150);
  puRam0000000112fc9398 = puVar1;
  return;
}



/* Entry: 1039edf20; end: 1039edf5f;  */

void FUN_1039edf20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9398 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36a10;
  func_0x000107c61520(&UNK_10dc36a10,&UNK_1106bc150);
  puRam0000000112fc9398 = puVar1;
  return;
}



/* Entry: 1039edf60; end: 1039edf83;  */

void FUN_1039edf60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039edf84();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039edf84; end: 1039edfc3;  */

void FUN_1039edf84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc93a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36a80;
  func_0x000107c61520(&UNK_10dc36a80,&UNK_1106bc1d8);
  puRam0000000112fc93a0 = puVar1;
  return;
}



/* Entry: 1039edfc4; end: 1039edfd7;  */

void FUN_1039edfc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1039ebc84)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039edfd8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039edfd8; end: 1039ee017;  */

void FUN_1039edfd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc93a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc36a38;
  func_0x000107c61520(&DAT_10dc36a38,&UNK_1106bc1d8);
  puRam0000000112fc93a8 = puVar1;
  return;
}



/* Entry: 1039ee018; end: 1039ee01b;  */

void FUN_1039ee018(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc93b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc36ae8;
  func_0x000107c61520(&UNK_10dc36ae8,&UNK_1106bc1d8);
  puRam0000000112fc93b0 = puVar1;
  return;
}



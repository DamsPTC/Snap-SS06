/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10162e960; end: 10162e9b3;  */

/* WARNING: Possible PIC construction at 0x00010162ed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010162ed58) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10162e960(int *param_1,int *param_2)

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
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    pbVar12 = *(byte **)(param_1 + 2);
    pbVar14 = *(byte **)(param_1 + 4);
    pbVar15 = *(byte **)(param_2 + 2);
    pbVar17 = *(byte **)(param_2 + 4);
    if (*(byte **)(param_1 + 2) != *(byte **)(param_2 + 2) ||
        *(byte **)(param_1 + 4) != *(byte **)(param_2 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    if (param_1[6] == param_2[6]) {
      lVar19 = *(long *)(param_1 + 8);
      lVar22 = *(long *)(param_2 + 8);
      if ((char)param_2[10] == '\x01') {
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
      if (((*(byte *)((long)param_1 + 0x29) ^ *(byte *)((long)param_2 + 0x29)) & 1) == 0) {
        pbVar10 = *(byte **)(param_1 + 0xc);
        pbVar26 = *(byte **)(param_1 + 0xe);
        lVar19 = *(long *)(param_2 + 0xc);
        uVar16 = *(ulong *)(param_2 + 0xe);
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
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
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
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
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
            if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
LAB_100e2608c:
              if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar21 < 1) goto LAB_100e26128;
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
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                if (pbVar25 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar19);
                  pbVar25 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
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
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 10162e9b4; end: 10162e9e3;  */

undefined1  [16] FUN_10162e9b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x30);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x30),
                      *(undefined8 *)(unaff_x20 + 0x38));
  return auVar1;
}



/* Entry: 10162e9e4; end: 10162ea17;  */

void FUN_10162e9e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Entry: 10162ea18; end: 10162ea2b;  */

undefined1  [16] FUN_10162ea18(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x10162ea28;
  return auVar1;
}



/* Entry: 10162ea2c; end: 10162ea53;  */

void FUN_10162ea2c(void)

{
  FUN_10162e6a0();
  return;
}



/* Entry: 10162ea54; end: 10162ea57;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10162ea54(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10162ea58; end: 10162ea8f;  */

uint FUN_10162ea58(long param_1,long param_2)

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
  FUN_10162f170();
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



/* Entry: 10162ea90; end: 10162ead7;  */

uint FUN_10162ea90(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_18 = param_1[7];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  FUN_10162ed00(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10162ead8; end: 10162eb77;  */

/* WARNING: Possible PIC construction at 0x00010162eb24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162eb34: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162eb28) */
/* WARNING: Removing unreachable block (ram,0x00010162eb38) */

void FUN_10162ead8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbacd0 != -1) {
    func_0x000107c61568(0x112dbacd0,FUN_10162e658);
  }
  uVar5 = uRam0000000113801c40;
  uVar4 = uRam0000000113801c38;
  uVar3 = uRam0000000113801c30;
  uVar2 = uRam0000000113801c28;
  uVar1 = uRam0000000113801c20;
  *param_1 = uRam0000000113801c18;
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



/* Entry: 10162eb78; end: 10162ebb3;  */

void FUN_10162eb78(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbacf8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbacf8,&UNK_10d96fb28);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10162ebb4; end: 10162ecb7;  */

void FUN_10162ebb4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b8 [72];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[1];
  uStack_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  uStack_48 = unaff_x20[5];
  uStack_50 = unaff_x20[4];
  uStack_38 = unaff_x20[7];
  uStack_40 = unaff_x20[6];
  func_0x000107c6068c(auStack_b8,0);
  func_0x000107c5fa50(auStack_b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10162ecb8; end: 10162ecff;  */

uint FUN_10162ecb8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_10162ed00(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10162ed00; end: 10162edf3;  */

/* WARNING: Possible PIC construction at 0x00010162ed54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010162ed58) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10162ed00(int *param_1,int *param_2)

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
  
  if ((*param_1 == *param_2) && (param_1[1] == param_2[1])) {
    pbVar12 = *(byte **)(param_1 + 2);
    pbVar14 = *(byte **)(param_1 + 4);
    pbVar15 = *(byte **)(param_2 + 2);
    pbVar17 = *(byte **)(param_2 + 4);
    if (*(byte **)(param_1 + 2) != *(byte **)(param_2 + 2) ||
        *(byte **)(param_1 + 4) != *(byte **)(param_2 + 4)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)
        PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
      )(pbVar12,pbVar14,pbVar15,pbVar17,0);
      return pbVar12;
    }
    if (param_1[6] == param_2[6]) {
      lVar19 = *(long *)(param_1 + 8);
      lVar22 = *(long *)(param_2 + 8);
      if ((char)param_2[10] == '\x01') {
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
      if (((*(byte *)((long)param_1 + 0x29) ^ *(byte *)((long)param_2 + 0x29)) & 1) == 0) {
        pbVar10 = *(byte **)(param_1 + 0xc);
        pbVar26 = *(byte **)(param_1 + 0xe);
        lVar19 = *(long *)(param_2 + 0xc);
        uVar16 = *(ulong *)(param_2 + 0xe);
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
                (uVar16 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar19 != 0 || (uVar16 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
LAB_100e26128:
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
            if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar16 >> 0x30 & 0xff;
              goto LAB_100e2608c;
            }
            iVar20 = (int)((ulong)lVar19 >> 0x20);
            if (SBORROW4(iVar20,(int)lVar19)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
              (*pcVar6)();
            }
            if (uVar21 == (long)(iVar20 - (int)lVar19)) goto LAB_100e26094;
LAB_100e26154:
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
            if (uVar23 < 2) goto LAB_100e26084;
LAB_100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar19 + 0x18) - *(long *)(lVar19 + 0x10);
              if (SBORROW8(*(long *)(lVar19 + 0x18),*(long *)(lVar19 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar6)();
              }
LAB_100e2608c:
              if (uVar21 != uVar24) goto LAB_100e26154;
LAB_100e26094:
              if ((long)uVar21 < 1) goto LAB_100e26128;
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
LAB_100e262a4:
              unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
              unaff_x21 = 0;
              FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar13,lVar19,uVar16);
              pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
              unaff_x22 = uVar16;
            }
            else {
              pbVar9 = (byte *)(ulong)(uVar21 == 0);
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
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
              FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
                if (pbVar25 != (byte *)0x0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar19);
                  func_0x000107c61174();
                  pbVar12 = pbVar25;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar25);
                  func_0x000107c61170(lVar19);
                  pbVar25 = pbVar12;
                  goto joined_r0x000100e266a4;
                }
joined_r0x000100e26620:
                if (lVar19 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
            }
            goto code_r0x000107c605b8;
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
joined_r0x000100e266a4:
              if (((ulong)pbVar25 & 1) == 0) {
                return (byte *)0x0;
              }
              return (byte *)0x1;
            }
            goto joined_r0x000100e26620;
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
                                                                        CONCAT11(bVar28 | auVar43[1]
                                                                                 ,bVar27 | auVar43[0
                                                  ]))))))) == 0 && *(long *)pbVar13 == 0) {
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
                                                                           CONCAT11(bVar28 | auVar43
                                                  [1],bVar27 | auVar43[0])))))));
            goto joined_r0x000100e26620;
          }
          if (pbVar13[0x28] != 5) {
            return (byte *)0x0;
          }
          lVar19 = *(long *)(pbVar13 + 8);
          uVar16 = *(ulong *)(pbVar13 + 0x10);
          lVar22 = *(long *)pbVar13;
          uVar11 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
    }
  }
  return (byte *)0x0;
}



/* Entry: 10162edf4; end: 10162ee33;  */

void FUN_10162edf4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbace0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fa70;
  func_0x000107c61520(&UNK_10d96fa70,&UNK_1103eb198);
  puRam0000000112dbace0 = puVar1;
  return;
}



/* Entry: 10162ee34; end: 10162ee57;  */

void FUN_10162ee34(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162ee58();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10162ee58; end: 10162ee97;  */

void FUN_10162ee58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbace8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fa48;
  func_0x000107c61520(&UNK_10d96fa48,&UNK_1103eb198);
  puRam0000000112dbace8 = puVar1;
  return;
}



/* Entry: 10162ee98; end: 10162eec3;  */

void FUN_10162ee98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162edf4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10162dd78();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162eec4; end: 10162eec7;  */

void FUN_10162eec4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fab0;
  func_0x000107c61520(&UNK_10d96fab0,&UNK_1103eb198);
  puRam0000000112dbacf0 = puVar1;
  return;
}



/* Entry: 10162eec8; end: 10162ef07;  */

void FUN_10162eec8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbacf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fab0;
  func_0x000107c61520(&UNK_10d96fab0,&UNK_1103eb198);
  puRam0000000112dbacf0 = puVar1;
  return;
}



/* Entry: 10162ef08; end: 10162ef5b;  */

long FUN_10162ef08(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10162ef5c; end: 10162f05b;  */

undefined8 * FUN_10162ef5c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  uVar1 = param_2[6];
  uVar2 = param_2[7];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[6] = uVar1;
  param_1[7] = uVar2;
  return param_1;
}



/* Entry: 10162f05c; end: 10162f0c7;  */

undefined8 * FUN_10162f05c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar2 = param_1[2];
  param_1[1] = param_2[1];
  param_1[2] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_2 + 3);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  *(undefined1 *)((long)param_1 + 0x29) = *(undefined1 *)((long)param_2 + 0x29);
  uVar1 = param_1[6];
  uVar2 = param_1[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10162f0c8; end: 10162f16f;  */

int FUN_10162f0c8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10162f170; end: 10162f1af;  */

void FUN_10162f170(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbad00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96fa1c;
  func_0x000107c61520(&DAT_10d96fa1c,&UNK_1103eb198);
  puRam0000000112dbad00 = puVar1;
  return;
}



/* Entry: 10162f1b0; end: 10162f1df;  */

void FUN_10162f1b0(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10162f1e0; end: 10162f21f;  */

void FUN_10162f1e0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbad60;
  func_0x0001000285a8(0x112dbad60,&UNK_10d96fb90);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10162f220; end: 10162f247;  */

void FUN_10162f220(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10162f248; end: 10162f2f3;  */

void FUN_10162f248(void)

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



/* Entry: 10162f2f4; end: 10162f307;  */

bool FUN_10162f2f4(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10162f308; end: 10162f34f;  */

void FUN_10162f308(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96fd00,0x2e,2);
  uRam0000000113801c50 = uStack_38;
  uRam0000000113801c48 = uStack_40;
  uRam0000000113801c60 = uStack_28;
  uRam0000000113801c58 = uStack_30;
  uRam0000000113801c70 = uStack_18;
  uRam0000000113801c68 = uStack_20;
  return;
}



/* Entry: 10162f350; end: 10162f37b;  */

void FUN_10162f350(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10162f37c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x00010162f3bc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10162f37c; end: 10162f3fb;  */

void FUN_10162f37c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbad70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fc30;
  func_0x000107c61520(&UNK_10d96fc30,&UNK_1103eb320);
  puRam0000000112dbad70 = puVar1;
  return;
}



/* Entry: 10162f3fc; end: 10162f3ff;  */

void FUN_10162f3fc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbad80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbad88;
  func_0x00010002969c(0x112dbad88,&UNK_10d96fbb8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbad80 = puVar2;
  return;
}



/* Entry: 10162f400; end: 10162f44f;  */

void FUN_10162f400(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbad80 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbad88;
  func_0x00010002969c(0x112dbad88,&UNK_10d96fbb8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbad80 = puVar2;
  return;
}



/* Entry: 10162f450; end: 10162f453;  */

void FUN_10162f450(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbad90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fc70;
  func_0x000107c61520(&UNK_10d96fc70,&UNK_1103eb320);
  puRam0000000112dbad90 = puVar1;
  return;
}



/* Entry: 10162f454; end: 10162f493;  */

void FUN_10162f454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbad90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fc70;
  func_0x000107c61520(&UNK_10d96fc70,&UNK_1103eb320);
  puRam0000000112dbad90 = puVar1;
  return;
}



/* Entry: 10162f494; end: 10162f533;  */

/* WARNING: Possible PIC construction at 0x00010162f4e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010162f4f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010162f4e4) */
/* WARNING: Removing unreachable block (ram,0x00010162f4f4) */

void FUN_10162f494(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbad68 != -1) {
    func_0x000107c61568(0x112dbad68,FUN_10162f308);
  }
  uVar5 = uRam0000000113801c70;
  uVar4 = uRam0000000113801c68;
  uVar3 = uRam0000000113801c60;
  uVar2 = uRam0000000113801c58;
  uVar1 = uRam0000000113801c50;
  *param_1 = uRam0000000113801c48;
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



/* Entry: 10162f534; end: 10162f5d3;  */

int FUN_10162f534(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 10162f5d4; end: 10162f673;  */

bool FUN_10162f5d4(void)

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
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar1 = *(ulong *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar4 = uVar1 & 0xff;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 == 2) {
    FUN_10162f674(&uStack_50,auStack_68,0x112db94f0,&UNK_10d96af00);
  }
  else {
    FUN_10162f674(&uStack_50,auStack_68,0x112db94f0,&UNK_10d96af00);
    func_0x000101556278(uVar1,uVar2,uVar3);
    uVar1 = 2;
    uVar2 = 0;
    uVar3 = 0;
  }
  func_0x000101556278(uVar1,uVar2,uVar3);
  return uVar4 != 2;
}



/* Entry: 10162f674; end: 10162f6bb;  */

undefined8 FUN_10162f674(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10162f6bc; end: 10162f777;  */

bool FUN_10162f6bc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_98 [40];
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x20 + 200);
  lVar5 = *(long *)(unaff_x20 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_70 = uVar1;
  uStack_68 = uVar2;
  lStack_60 = lVar5;
  uStack_58 = uVar3;
  uStack_50 = uVar4;
  if (lVar5 == 0) {
    FUN_10162f674(&uStack_70,auStack_98,0x112db8098,&UNK_10d966ff0);
  }
  else {
    FUN_10162f674(&uStack_70,auStack_98,0x112db8098,&UNK_10d966ff0);
    FUN_101553bdc(uVar1,uVar2,lVar5,uVar3,uVar4);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
    uVar4 = 0;
  }
  FUN_101553bdc(uVar1,uVar2,0,uVar3,uVar4);
  return lVar5 != 0;
}



/* Entry: 10162f778; end: 10162f7a7;  */

void FUN_10162f778(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 10162f7a8; end: 10162f7e7;  */

void FUN_10162f7a8(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbadf0;
  func_0x0001000285a8(0x112dbadf0,&UNK_10d96fd40);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 10162f7e8; end: 10162f80f;  */

void FUN_10162f7e8(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  *param_1 = uVar1;
  *(bool *)(param_1 + 1) = uVar1 < 3;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 10162f810; end: 10162f8bb;  */

void FUN_10162f810(void)

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



/* Entry: 10162f8bc; end: 10162f927;  */

bool FUN_10162f8bc(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 10162f928; end: 10162f96f;  */

void FUN_10162f928(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96ffc0,0xd5,2);
  uRam0000000113801c80 = uStack_38;
  uRam0000000113801c78 = uStack_40;
  uRam0000000113801c90 = uStack_28;
  uRam0000000113801c88 = uStack_30;
  uRam0000000113801ca0 = uStack_18;
  uRam0000000113801c98 = uStack_20;
  return;
}



/* Entry: 10162f970; end: 10162fb07;  */

/* WARNING: Removing unreachable block (ram,0x00010162faf8) */

void FUN_10162f970(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  code *pcVar5;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      puVar3 = &UNK_110679698;
      switch(uVar1) {
      case 1:
        pcVar5 = *(code **)(param_3 + 0x168);
        break;
      case 2:
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_1015cabb8();
        lVar2 = unaff_x20 + 0x70;
        goto code_r0x00010162fae4;
      case 3:
        pcVar5 = *(code **)(param_3 + 0x138);
        break;
      case 4:
        pcVar5 = *(code **)(param_3 + 0x180);
        func_0x000101630558();
        lVar2 = unaff_x20 + 0x18;
        puVar3 = &UNK_1103ebd28;
        goto code_r0x00010162fae4;
      case 5:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 6:
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x0001015fdfec();
        lVar2 = unaff_x20 + 0x98;
        puVar3 = &UNK_110790c00;
        goto code_r0x00010162fae4;
      case 7:
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_1015cabb8();
        lVar2 = unaff_x20 + 0xb0;
        goto code_r0x00010162fae4;
      case 8:
        pcVar5 = *(code **)(param_3 + 0x138);
        break;
      case 9:
        pcVar5 = *(code **)(param_3 + 0x150);
        break;
      case 10:
        pcVar5 = *(code **)(param_3 + 0x180);
        FUN_101630518();
        lVar2 = unaff_x20 + 0x50;
        puVar3 = &UNK_1103eb5e8;
code_r0x00010162fae4:
        (*pcVar5)(lVar2,puVar3,uVar1,param_2,param_3);
      default:
        goto LAB_10162f9f8;
      }
      (*pcVar5)();
LAB_10162f9f8:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10162fb08; end: 10162fd3f;  */

void FUN_10162fb08(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar10;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar4 = (uint)(uVar2 >> 0x20);
  uVar7 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar7 != 0) {
      lVar8 = (long)(int)lVar1;
      lVar9 = lVar1 >> 0x20;
      goto LAB_10162fb68;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_10162fb88;
  }
  else {
    if (uVar7 != 2) goto LAB_10162fb88;
    lVar8 = *(long *)(lVar1 + 0x10);
    lVar9 = *(long *)(lVar1 + 0x18);
LAB_10162fb68:
    if (lVar8 == lVar9) goto LAB_10162fb88;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,1,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10162fb88:
  plVar5 = unaff_x20;
  FUN_10162fd40();
  if (unaff_x21 == 0) {
    if ((char)unaff_x20[2] == '\x01') {
      plVar5 = (long *)0x1;
      (**(code **)(param_3 + 0x68))(1,3,param_2,param_3);
    }
    if (unaff_x20[3] != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar10 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[3];
      func_0x000101630558();
      (*pcVar10)(&lStack_50,4,&UNK_1103ebd28,plVar5,param_2,param_3);
    }
    uVar6 = unaff_x20[6];
    uVar2 = unaff_x20[5] & 0xffffffffffff;
    if ((uVar6 & 0x2000000000000000) != 0) {
      uVar2 = uVar6 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],uVar6,5,param_2,param_3);
    }
    FUN_10162fdc8();
    FUN_10162fe50();
    if ((char)unaff_x20[7] == '\x01') {
      (**(code **)(param_3 + 0x68))(1,8,param_2,param_3);
    }
    uVar6 = unaff_x20[8];
    uVar3 = unaff_x20[9];
    uVar2 = uVar6 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar2 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar2 != 0) {
      (**(code **)(param_3 + 0x70))(uVar6,uVar3,9,param_2,param_3);
    }
    if (unaff_x20[10] != 0) {
      uStack_48 = (undefined1)unaff_x20[0xb];
      pcVar10 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[10];
      func_0x000101630518();
      (*pcVar10)(&lStack_50,10,&UNK_1103eb5e8,uVar6,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[0xc],unaff_x20[0xd],param_2,param_3);
  }
  return;
}



/* Entry: 10162fd40; end: 10162fdc7;  */

void FUN_10162fd40(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0x80);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    uStack_70 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,2,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10162fdc8; end: 10162fe4f;  */

void FUN_10162fdc8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ulong uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_58 = *(ulong *)(param_1 + 0x98);
  if ((uStack_58 & 0xff) != 2) {
    uStack_48 = *(undefined8 *)(param_1 + 0xa8);
    uStack_50 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar1)(&uStack_58,6,&UNK_110790c00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10162fe50; end: 10162fed7;  */

void FUN_10162fe50(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lStack_60 = *(long *)(param_1 + 0xc0);
  if (lStack_60 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0xb8);
    uStack_70 = *(undefined8 *)(param_1 + 0xb0);
    uStack_50 = *(undefined8 *)(param_1 + 0xd0);
    uStack_58 = *(undefined8 *)(param_1 + 200);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1015cabb8();
    (*pcVar1)(&uStack_70,7,&UNK_110679698,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10162fed8; end: 10162ff57;  */

uint FUN_10162fed8(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_258 [40];
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *param_1;
  FUN_100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
  if ((uVar2 & 1) != 0) {
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    uVar10 = param_1[0x11];
    uVar8 = param_1[0x10];
    uVar2 = param_1[0x12];
    uStack_200 = param_2[0xf];
    uStack_208 = param_2[0xe];
    uStack_1f0 = param_2[0x11];
    lStack_1f8 = param_2[0x10];
    uStack_1e8 = param_2[0x12];
    uStack_140 = uStack_208;
    uStack_138 = uStack_200;
    lStack_130 = lStack_1f8;
    uStack_128 = uStack_1f0;
    uStack_120 = uStack_1e8;
    uStack_110 = uVar6;
    uStack_108 = uVar7;
    uStack_100 = uVar8;
    uStack_f8 = uVar10;
    uStack_f0 = uVar2;
    if (uVar8 == 0) {
      if (lStack_1f8 != 0) goto LAB_1016306b8;
      FUN_10162f674(&uStack_110,&uStack_230,0x112db8098,&UNK_10d966ff0);
      FUN_10162f674(&uStack_140,&uStack_230,0x112db8098,&UNK_10d966ff0);
      FUN_101553bdc(uVar6,uVar7,0,uVar10,uVar2);
LAB_101630760:
      if ((((byte)param_1[2] ^ *(byte *)(param_2 + 2)) & 1) == 0) {
        uVar2 = param_1[3];
        uVar6 = param_2[3];
        if (*(char *)(param_2 + 4) == '\x01') {
          if ((long)uVar6 < 2) {
            if (uVar6 == 0) {
              if (uVar2 == 0) {
LAB_1016307cc:
                uVar2 = param_1[5];
                if (((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
                   (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                  uVar6 = param_1[0x14];
                  uVar2 = param_1[0x13];
                  uVar7 = param_1[0x15];
                  uVar11 = param_2[0x14];
                  uVar10 = param_2[0x13];
                  uVar8 = param_2[0x15];
                  uStack_180 = uVar10;
                  uStack_178 = uVar11;
                  uStack_170 = uVar8;
                  uStack_160 = uVar2;
                  uStack_158 = uVar6;
                  uStack_150 = uVar7;
                  if ((uVar2 & 0xff) == 2) {
                    if ((uVar10 & 0xff) == 2) {
                      FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
LAB_10163086c:
                      func_0x000101556278(uVar2,uVar6,uVar7);
                      uVar8 = param_1[0x17];
                      uVar6 = param_1[0x16];
                      uVar11 = param_1[0x19];
                      uVar10 = param_1[0x18];
                      uVar12 = param_2[0x17];
                      uVar7 = param_2[0x16];
                      uVar14 = param_2[0x19];
                      lVar13 = param_2[0x18];
                      uVar2 = param_1[0x1a];
                      uVar9 = param_2[0x1a];
                      uStack_1e0 = uVar7;
                      uStack_1d8 = uVar12;
                      lStack_1d0 = lVar13;
                      uStack_1c8 = uVar14;
                      uStack_1c0 = uVar9;
                      uStack_1b0 = uVar6;
                      uStack_1a8 = uVar8;
                      uStack_1a0 = uVar10;
                      uStack_198 = uVar11;
                      uStack_190 = uVar2;
                      if (uVar10 == 0) {
                        if (lVar13 != 0) goto LAB_101630a9c;
                        FUN_10162f674(&uStack_1b0,&uStack_230,0x112db8098,&UNK_10d966ff0);
                        FUN_10162f674(&uStack_1e0,&uStack_230,0x112db8098,&UNK_10d966ff0);
                        FUN_101553bdc(uVar6,uVar8,0,uVar11,uVar2);
                      }
                      else {
                        if (lVar13 == 0) {
LAB_101630a9c:
                          uStack_230 = uVar6;
                          uStack_228 = uVar8;
                          uStack_220 = uVar10;
                          uStack_218 = uVar11;
                          uStack_210 = uVar2;
                          uStack_208 = uVar7;
                          uStack_200 = uVar12;
                          lStack_1f8 = lVar13;
                          uStack_1f0 = uVar14;
                          uStack_1e8 = uVar9;
                          FUN_10162f674(&uStack_1b0,&uStack_e8,0x112db8098,&UNK_10d966ff0);
                          puVar3 = &uStack_1e0;
                          puVar5 = &uStack_e8;
                          goto LAB_1016306f8;
                        }
                        uStack_228 = CONCAT71(uStack_228._1_7_,(char)uVar12);
                        uStack_e0 = (undefined1)uVar8;
                        uStack_230 = uVar7;
                        uStack_220 = lVar13;
                        uStack_218 = uVar14;
                        uStack_210 = uVar9;
                        uStack_e8 = uVar6;
                        uStack_d8 = uVar10;
                        uStack_d0 = uVar11;
                        uStack_c8 = uVar2;
                        FUN_10162f674(&uStack_1b0,auStack_258,0x112db8098,&UNK_10d966ff0);
                        FUN_10162f674(&uStack_1e0,auStack_258,0x112db8098,&UNK_10d966ff0);
                        puVar3 = &uStack_e8;
                        func_0x00010368c758(puVar3,&uStack_230);
                        FUN_101553bdc(uVar7,uVar12,lVar13,uVar14,uVar9);
                        FUN_101553bdc(uVar6,uVar8,uVar10,uVar11,uVar2);
                        if (((ulong)puVar3 & 1) == 0) goto LAB_101630774;
                      }
                      if ((((byte)param_1[7] ^ *(byte *)(param_2 + 7)) & 1) == 0) {
                        uVar2 = param_1[8];
                        if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
                           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                          uVar2 = param_1[10];
                          uVar6 = param_2[10];
                          if (*(char *)(param_2 + 0xb) == '\x01') {
                            if (uVar6 == 0) {
                              if (uVar2 == 0) goto LAB_101630bb0;
                            }
                            else if (uVar6 == 1) {
                              if (uVar2 == 1) {
LAB_101630bb0:
                                uVar2 = param_1[0xc];
                                FUN_100e25fcc(uVar2,param_1[0xd],param_2[0xc],param_2[0xd]);
                                uVar1 = (uint)uVar2;
                                goto LAB_101630778;
                              }
                            }
                            else if (uVar2 == 2) goto LAB_101630bb0;
                          }
                          else if (uVar2 == uVar6) goto LAB_101630bb0;
                        }
                      }
                      goto LAB_101630774;
                    }
LAB_10163097c:
                    FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                    FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
                    func_0x000101556278(uVar2,uVar6,uVar7);
                    uVar2 = uVar10;
                    uVar6 = uVar11;
                    uVar7 = uVar8;
                  }
                  else {
                    if ((uVar10 & 0xff) == 2) goto LAB_10163097c;
                    if ((((uint)uVar10 ^ (uint)uVar2) & 1) == 0) {
                      FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      uVar4 = uVar6;
                      FUN_100e25fcc(uVar6,uVar7,uVar11,uVar8);
                      func_0x000101556278(uVar10,uVar11,uVar8);
                      if ((uVar4 & 1) != 0) goto LAB_10163086c;
                    }
                    else {
                      FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      func_0x000101556278(uVar10,uVar11,uVar8);
                    }
                  }
                  func_0x000101556278(uVar2,uVar6,uVar7);
                }
              }
            }
            else if (uVar2 == 1) goto LAB_1016307cc;
          }
          else if (uVar6 == 2) {
            if (uVar2 == 2) goto LAB_1016307cc;
          }
          else if (uVar2 == 3) goto LAB_1016307cc;
        }
        else if (uVar2 == uVar6) goto LAB_1016307cc;
      }
    }
    else if (lStack_1f8 == 0) {
LAB_1016306b8:
      uStack_230 = uVar6;
      uStack_228 = uVar7;
      uStack_220 = uVar8;
      uStack_218 = uVar10;
      uStack_210 = uVar2;
      FUN_10162f674(&uStack_110,&uStack_98,0x112db8098,&UNK_10d966ff0);
      puVar3 = &uStack_140;
      puVar5 = &uStack_98;
LAB_1016306f8:
      FUN_10162f674(puVar3,puVar5,0x112db8098,&UNK_10d966ff0);
      FUN_1015cab70(&uStack_230);
    }
    else {
      uStack_90 = (undefined1)uStack_200;
      uStack_b8 = (undefined1)uVar7;
      uStack_c0 = uVar6;
      uStack_b0 = uVar8;
      uStack_a8 = uVar10;
      uStack_a0 = uVar2;
      uStack_98 = uStack_208;
      lStack_88 = lStack_1f8;
      uStack_80 = uStack_1f0;
      uStack_78 = uStack_1e8;
      FUN_10162f674(&uStack_110,&uStack_230,0x112db8098,&UNK_10d966ff0);
      FUN_10162f674(&uStack_140,&uStack_230,0x112db8098,&UNK_10d966ff0);
      puVar3 = &uStack_c0;
      func_0x00010368c758(puVar3,&uStack_98);
      FUN_101553bdc(uStack_208,uStack_200,lStack_1f8,uStack_1f0,uStack_1e8);
      FUN_101553bdc(uVar6,uVar7,uVar8,uVar10,uVar2);
      if (((ulong)puVar3 & 1) != 0) goto LAB_101630760;
    }
  }
LAB_101630774:
  uVar1 = 0;
LAB_101630778:
  return uVar1 & 1;
}



/* Entry: 10162ff58; end: 10162ff87;  */

undefined1  [16] FUN_10162ff58(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x60);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x60),
                      *(undefined8 *)(unaff_x20 + 0x68));
  return auVar1;
}



/* Entry: 10162ff88; end: 10162ffbb;  */

void FUN_10162ff88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined8 *)(unaff_x20 + 0x68) = param_2;
  return;
}



/* Entry: 10162ffbc; end: 10162ffcf;  */

undefined1  [16] FUN_10162ffbc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = 0x10162ffcc;
  return auVar1;
}



/* Entry: 10162ffd0; end: 10162ffe3;  */

void FUN_10162ffd0(void)

{
  FUN_10162f970();
  return;
}



/* Entry: 10162ffe4; end: 10163004b;  */

void FUN_10162ffe4(void)

{
  FUN_10162fb08();
  return;
}



/* Entry: 10163004c; end: 10163004f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10163004c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101630050; end: 101630087;  */

uint FUN_101630050(long param_1,long param_2)

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
  FUN_101631628();
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



/* Entry: 101630088; end: 101630137;  */

uint FUN_101630088(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  
  uVar1 = 0;
  uStack_58 = param_1[0x15];
  uStack_60 = param_1[0x14];
  uStack_48 = param_1[0x17];
  uStack_50 = param_1[0x16];
  uStack_38 = param_1[0x19];
  uStack_40 = param_1[0x18];
  uStack_30 = param_1[0x1a];
  uStack_98 = param_1[0xd];
  uStack_a0 = param_1[0xc];
  uStack_88 = param_1[0xf];
  uStack_90 = param_1[0xe];
  uStack_78 = param_1[0x11];
  uStack_80 = param_1[0x10];
  uStack_68 = param_1[0x13];
  uStack_70 = param_1[0x12];
  uStack_d8 = param_1[5];
  uStack_e0 = param_1[4];
  uStack_c8 = param_1[7];
  uStack_d0 = param_1[6];
  uStack_b8 = param_1[9];
  uStack_c0 = param_1[8];
  uStack_a8 = param_1[0xb];
  uStack_b0 = param_1[10];
  uStack_f8 = param_1[1];
  uStack_100 = *param_1;
  uStack_e8 = param_1[3];
  uStack_f0 = param_1[2];
  uStack_138 = unaff_x20[0x15];
  uStack_140 = unaff_x20[0x14];
  uStack_128 = unaff_x20[0x17];
  uStack_130 = unaff_x20[0x16];
  uStack_118 = unaff_x20[0x19];
  uStack_120 = unaff_x20[0x18];
  uStack_110 = unaff_x20[0x1a];
  uStack_178 = unaff_x20[0xd];
  uStack_180 = unaff_x20[0xc];
  uStack_168 = unaff_x20[0xf];
  uStack_170 = unaff_x20[0xe];
  uStack_158 = unaff_x20[0x11];
  uStack_160 = unaff_x20[0x10];
  uStack_148 = unaff_x20[0x13];
  uStack_150 = unaff_x20[0x12];
  uStack_1b8 = unaff_x20[5];
  uStack_1c0 = unaff_x20[4];
  uStack_1a8 = unaff_x20[7];
  uStack_1b0 = unaff_x20[6];
  uStack_198 = unaff_x20[9];
  uStack_1a0 = unaff_x20[8];
  uStack_188 = unaff_x20[0xb];
  uStack_190 = unaff_x20[10];
  uStack_1d8 = unaff_x20[1];
  uStack_1e0 = *unaff_x20;
  uStack_1c8 = unaff_x20[3];
  uStack_1d0 = unaff_x20[2];
  FUN_101630598(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101630138; end: 1016301d7;  */

/* WARNING: Possible PIC construction at 0x000101630184: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101630194: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101630188) */
/* WARNING: Removing unreachable block (ram,0x000101630198) */

void FUN_101630138(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbadf8 != -1) {
    func_0x000107c61568(0x112dbadf8,FUN_10162f928);
  }
  uVar5 = uRam0000000113801ca0;
  uVar4 = uRam0000000113801c98;
  uVar3 = uRam0000000113801c90;
  uVar2 = uRam0000000113801c88;
  uVar1 = uRam0000000113801c80;
  *param_1 = uRam0000000113801c78;
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



/* Entry: 1016301d8; end: 101630213;  */

void FUN_1016301d8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbae58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbae58,&UNK_10d96ff88);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101630214; end: 10163037f;  */

void FUN_101630214(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_158 [72];
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
  
  uStack_68 = unaff_x20[0x15];
  uStack_70 = unaff_x20[0x14];
  uStack_58 = unaff_x20[0x17];
  uStack_60 = unaff_x20[0x16];
  uStack_48 = unaff_x20[0x19];
  uStack_50 = unaff_x20[0x18];
  uStack_40 = unaff_x20[0x1a];
  uStack_a8 = unaff_x20[0xd];
  uStack_b0 = unaff_x20[0xc];
  uStack_98 = unaff_x20[0xf];
  uStack_a0 = unaff_x20[0xe];
  uStack_88 = unaff_x20[0x11];
  uStack_90 = unaff_x20[0x10];
  uStack_78 = unaff_x20[0x13];
  uStack_80 = unaff_x20[0x12];
  uStack_e8 = unaff_x20[5];
  uStack_f0 = unaff_x20[4];
  uStack_d8 = unaff_x20[7];
  uStack_e0 = unaff_x20[6];
  uStack_c8 = unaff_x20[9];
  uStack_d0 = unaff_x20[8];
  uStack_b8 = unaff_x20[0xb];
  uStack_c0 = unaff_x20[10];
  uStack_108 = unaff_x20[1];
  uStack_110 = *unaff_x20;
  uStack_f8 = unaff_x20[3];
  uStack_100 = unaff_x20[2];
  func_0x000107c6068c(auStack_158,0);
  func_0x000107c5fa50(auStack_158,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101630380; end: 10163042f;  */

uint FUN_101630380(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  
  uVar1 = 0;
  uStack_138 = param_1[0x15];
  uStack_140 = param_1[0x14];
  uStack_128 = param_1[0x17];
  uStack_130 = param_1[0x16];
  uStack_118 = param_1[0x19];
  uStack_120 = param_1[0x18];
  uStack_110 = param_1[0x1a];
  uStack_178 = param_1[0xd];
  uStack_180 = param_1[0xc];
  uStack_168 = param_1[0xf];
  uStack_170 = param_1[0xe];
  uStack_158 = param_1[0x11];
  uStack_160 = param_1[0x10];
  uStack_148 = param_1[0x13];
  uStack_150 = param_1[0x12];
  uStack_1b8 = param_1[5];
  uStack_1c0 = param_1[4];
  uStack_1a8 = param_1[7];
  uStack_1b0 = param_1[6];
  uStack_198 = param_1[9];
  uStack_1a0 = param_1[8];
  uStack_188 = param_1[0xb];
  uStack_190 = param_1[10];
  uStack_1d8 = param_1[1];
  uStack_1e0 = *param_1;
  uStack_1c8 = param_1[3];
  uStack_1d0 = param_1[2];
  uStack_58 = param_2[0x15];
  uStack_60 = param_2[0x14];
  uStack_48 = param_2[0x17];
  uStack_50 = param_2[0x16];
  uStack_38 = param_2[0x19];
  uStack_40 = param_2[0x18];
  uStack_30 = param_2[0x1a];
  uStack_98 = param_2[0xd];
  uStack_a0 = param_2[0xc];
  uStack_88 = param_2[0xf];
  uStack_90 = param_2[0xe];
  uStack_78 = param_2[0x11];
  uStack_80 = param_2[0x10];
  uStack_68 = param_2[0x13];
  uStack_70 = param_2[0x12];
  uStack_d8 = param_2[5];
  uStack_e0 = param_2[4];
  uStack_c8 = param_2[7];
  uStack_d0 = param_2[6];
  uStack_b8 = param_2[9];
  uStack_c0 = param_2[8];
  uStack_a8 = param_2[0xb];
  uStack_b0 = param_2[10];
  uStack_f8 = param_2[1];
  uStack_100 = *param_2;
  uStack_e8 = param_2[3];
  uStack_f0 = param_2[2];
  FUN_101630598(&uStack_1e0,&uStack_100);
  return uVar1 & 1;
}



/* Entry: 101630430; end: 101630477;  */

void FUN_101630430(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d96ff90,0x2f,2);
  uRam0000000113801cb0 = uStack_38;
  uRam0000000113801ca8 = uStack_40;
  uRam0000000113801cc0 = uStack_28;
  uRam0000000113801cb8 = uStack_30;
  uRam0000000113801cd0 = uStack_18;
  uRam0000000113801cc8 = uStack_20;
  return;
}



/* Entry: 101630478; end: 101630517;  */

/* WARNING: Possible PIC construction at 0x0001016304c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016304d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016304c8) */
/* WARNING: Removing unreachable block (ram,0x0001016304d8) */

void FUN_101630478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbae18 != -1) {
    func_0x000107c61568(0x112dbae18,FUN_101630430);
  }
  uVar5 = uRam0000000113801cd0;
  uVar4 = uRam0000000113801cc8;
  uVar3 = uRam0000000113801cc0;
  uVar2 = uRam0000000113801cb8;
  uVar1 = uRam0000000113801cb0;
  *param_1 = uRam0000000113801ca8;
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



/* Entry: 101630518; end: 101630597;  */

void FUN_101630518(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96fd48;
  func_0x000107c61520(&DAT_10d96fd48,&UNK_1103eb5e8);
  puRam0000000112dbae00 = puVar1;
  return;
}



/* Entry: 101630598; end: 101630bbf;  */

uint FUN_101630598(ulong *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 auStack_258 [40];
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  undefined8 uStack_200;
  long lStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  long lStack_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_140;
  undefined8 uStack_138;
  long lStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined1 uStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined1 uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  ulong uStack_98;
  undefined1 uStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar2 = *param_1;
  FUN_100e25fcc(uVar2,param_1[1],*param_2,param_2[1]);
  if ((uVar2 & 1) != 0) {
    uVar7 = param_1[0xf];
    uVar6 = param_1[0xe];
    uVar10 = param_1[0x11];
    uVar8 = param_1[0x10];
    uVar2 = param_1[0x12];
    uStack_200 = param_2[0xf];
    uStack_208 = param_2[0xe];
    uStack_1f0 = param_2[0x11];
    lStack_1f8 = param_2[0x10];
    uStack_1e8 = param_2[0x12];
    uStack_140 = uStack_208;
    uStack_138 = uStack_200;
    lStack_130 = lStack_1f8;
    uStack_128 = uStack_1f0;
    uStack_120 = uStack_1e8;
    uStack_110 = uVar6;
    uStack_108 = uVar7;
    uStack_100 = uVar8;
    uStack_f8 = uVar10;
    uStack_f0 = uVar2;
    if (uVar8 == 0) {
      if (lStack_1f8 != 0) goto LAB_1016306b8;
      FUN_10162f674(&uStack_110,&uStack_230,0x112db8098,&UNK_10d966ff0);
      FUN_10162f674(&uStack_140,&uStack_230,0x112db8098,&UNK_10d966ff0);
      FUN_101553bdc(uVar6,uVar7,0,uVar10,uVar2);
LAB_101630760:
      if ((((byte)param_1[2] ^ *(byte *)(param_2 + 2)) & 1) == 0) {
        uVar2 = param_1[3];
        uVar6 = param_2[3];
        if (*(char *)(param_2 + 4) == '\x01') {
          if ((long)uVar6 < 2) {
            if (uVar6 == 0) {
              if (uVar2 == 0) {
LAB_1016307cc:
                uVar2 = param_1[5];
                if (((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
                   (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                  uVar6 = param_1[0x14];
                  uVar2 = param_1[0x13];
                  uVar7 = param_1[0x15];
                  uVar11 = param_2[0x14];
                  uVar10 = param_2[0x13];
                  uVar8 = param_2[0x15];
                  uStack_180 = uVar10;
                  uStack_178 = uVar11;
                  uStack_170 = uVar8;
                  uStack_160 = uVar2;
                  uStack_158 = uVar6;
                  uStack_150 = uVar7;
                  if ((uVar2 & 0xff) == 2) {
                    if ((uVar10 & 0xff) == 2) {
                      FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
LAB_10163086c:
                      func_0x000101556278(uVar2,uVar6,uVar7);
                      uVar8 = param_1[0x17];
                      uVar6 = param_1[0x16];
                      uVar11 = param_1[0x19];
                      uVar10 = param_1[0x18];
                      uVar12 = param_2[0x17];
                      uVar7 = param_2[0x16];
                      uVar14 = param_2[0x19];
                      lVar13 = param_2[0x18];
                      uVar2 = param_1[0x1a];
                      uVar9 = param_2[0x1a];
                      uStack_1e0 = uVar7;
                      uStack_1d8 = uVar12;
                      lStack_1d0 = lVar13;
                      uStack_1c8 = uVar14;
                      uStack_1c0 = uVar9;
                      uStack_1b0 = uVar6;
                      uStack_1a8 = uVar8;
                      uStack_1a0 = uVar10;
                      uStack_198 = uVar11;
                      uStack_190 = uVar2;
                      if (uVar10 == 0) {
                        if (lVar13 != 0) goto LAB_101630a9c;
                        FUN_10162f674(&uStack_1b0,&uStack_230,0x112db8098,&UNK_10d966ff0);
                        FUN_10162f674(&uStack_1e0,&uStack_230,0x112db8098,&UNK_10d966ff0);
                        FUN_101553bdc(uVar6,uVar8,0,uVar11,uVar2);
                      }
                      else {
                        if (lVar13 == 0) {
LAB_101630a9c:
                          uStack_230 = uVar6;
                          uStack_228 = uVar8;
                          uStack_220 = uVar10;
                          uStack_218 = uVar11;
                          uStack_210 = uVar2;
                          uStack_208 = uVar7;
                          uStack_200 = uVar12;
                          lStack_1f8 = lVar13;
                          uStack_1f0 = uVar14;
                          uStack_1e8 = uVar9;
                          FUN_10162f674(&uStack_1b0,&uStack_e8,0x112db8098,&UNK_10d966ff0);
                          puVar3 = &uStack_1e0;
                          puVar5 = &uStack_e8;
                          goto LAB_1016306f8;
                        }
                        uStack_228 = CONCAT71(uStack_228._1_7_,(char)uVar12);
                        uStack_e0 = (undefined1)uVar8;
                        uStack_230 = uVar7;
                        uStack_220 = lVar13;
                        uStack_218 = uVar14;
                        uStack_210 = uVar9;
                        uStack_e8 = uVar6;
                        uStack_d8 = uVar10;
                        uStack_d0 = uVar11;
                        uStack_c8 = uVar2;
                        FUN_10162f674(&uStack_1b0,auStack_258,0x112db8098,&UNK_10d966ff0);
                        FUN_10162f674(&uStack_1e0,auStack_258,0x112db8098,&UNK_10d966ff0);
                        puVar3 = &uStack_e8;
                        func_0x00010368c758(puVar3,&uStack_230);
                        FUN_101553bdc(uVar7,uVar12,lVar13,uVar14,uVar9);
                        FUN_101553bdc(uVar6,uVar8,uVar10,uVar11,uVar2);
                        if (((ulong)puVar3 & 1) == 0) goto LAB_101630774;
                      }
                      if ((((byte)param_1[7] ^ *(byte *)(param_2 + 7)) & 1) == 0) {
                        uVar2 = param_1[8];
                        if (((uVar2 == param_2[8]) && (param_1[9] == param_2[9])) ||
                           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
                          uVar2 = param_1[10];
                          uVar6 = param_2[10];
                          if (*(char *)(param_2 + 0xb) == '\x01') {
                            if (uVar6 == 0) {
                              if (uVar2 == 0) goto LAB_101630bb0;
                            }
                            else if (uVar6 == 1) {
                              if (uVar2 == 1) {
LAB_101630bb0:
                                uVar2 = param_1[0xc];
                                FUN_100e25fcc(uVar2,param_1[0xd],param_2[0xc],param_2[0xd]);
                                uVar1 = (uint)uVar2;
                                goto LAB_101630778;
                              }
                            }
                            else if (uVar2 == 2) goto LAB_101630bb0;
                          }
                          else if (uVar2 == uVar6) goto LAB_101630bb0;
                        }
                      }
                      goto LAB_101630774;
                    }
LAB_10163097c:
                    FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                    FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
                    func_0x000101556278(uVar2,uVar6,uVar7);
                    uVar2 = uVar10;
                    uVar6 = uVar11;
                    uVar7 = uVar8;
                  }
                  else {
                    if ((uVar10 & 0xff) == 2) goto LAB_10163097c;
                    if ((((uint)uVar10 ^ (uint)uVar2) & 1) == 0) {
                      FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      uVar4 = uVar6;
                      FUN_100e25fcc(uVar6,uVar7,uVar11,uVar8);
                      func_0x000101556278(uVar10,uVar11,uVar8);
                      if ((uVar4 & 1) != 0) goto LAB_10163086c;
                    }
                    else {
                      FUN_10162f674(&uStack_160,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      FUN_10162f674(&uStack_180,&uStack_230,0x112db94f0,&UNK_10d96af00);
                      func_0x000101556278(uVar10,uVar11,uVar8);
                    }
                  }
                  func_0x000101556278(uVar2,uVar6,uVar7);
                }
              }
            }
            else if (uVar2 == 1) goto LAB_1016307cc;
          }
          else if (uVar6 == 2) {
            if (uVar2 == 2) goto LAB_1016307cc;
          }
          else if (uVar2 == 3) goto LAB_1016307cc;
        }
        else if (uVar2 == uVar6) goto LAB_1016307cc;
      }
    }
    else if (lStack_1f8 == 0) {
LAB_1016306b8:
      uStack_230 = uVar6;
      uStack_228 = uVar7;
      uStack_220 = uVar8;
      uStack_218 = uVar10;
      uStack_210 = uVar2;
      FUN_10162f674(&uStack_110,&uStack_98,0x112db8098,&UNK_10d966ff0);
      puVar3 = &uStack_140;
      puVar5 = &uStack_98;
LAB_1016306f8:
      FUN_10162f674(puVar3,puVar5,0x112db8098,&UNK_10d966ff0);
      FUN_1015cab70(&uStack_230);
    }
    else {
      uStack_90 = (undefined1)uStack_200;
      uStack_b8 = (undefined1)uVar7;
      uStack_c0 = uVar6;
      uStack_b0 = uVar8;
      uStack_a8 = uVar10;
      uStack_a0 = uVar2;
      uStack_98 = uStack_208;
      lStack_88 = lStack_1f8;
      uStack_80 = uStack_1f0;
      uStack_78 = uStack_1e8;
      FUN_10162f674(&uStack_110,&uStack_230,0x112db8098,&UNK_10d966ff0);
      FUN_10162f674(&uStack_140,&uStack_230,0x112db8098,&UNK_10d966ff0);
      puVar3 = &uStack_c0;
      func_0x00010368c758(puVar3,&uStack_98);
      FUN_101553bdc(uStack_208,uStack_200,lStack_1f8,uStack_1f0,uStack_1e8);
      FUN_101553bdc(uVar6,uVar7,uVar8,uVar10,uVar2);
      if (((ulong)puVar3 & 1) != 0) goto LAB_101630760;
    }
  }
LAB_101630774:
  uVar1 = 0;
LAB_101630778:
  return uVar1 & 1;
}



/* Entry: 101630bc0; end: 101630bff;  */

void FUN_101630bc0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96feb8;
  func_0x000107c61520(&UNK_10d96feb8,&UNK_1103eb528);
  puRam0000000112dbae10 = puVar1;
  return;
}



/* Entry: 101630c00; end: 101630c13;  */

void FUN_101630c00(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101630c14();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101630c54)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101630c14; end: 101630c93;  */

void FUN_101630c14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fde0;
  func_0x000107c61520(&UNK_10d96fde0,&UNK_1103eb5e8);
  puRam0000000112dbae20 = puVar1;
  return;
}



/* Entry: 101630c94; end: 101630c97;  */

void FUN_101630c94(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbae30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbae38;
  func_0x00010002969c(0x112dbae38,&UNK_10d96fd68);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbae30 = puVar2;
  return;
}



/* Entry: 101630c98; end: 101630ce7;  */

void FUN_101630c98(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112dbae30 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112dbae38;
  func_0x00010002969c(0x112dbae38,&UNK_10d96fd68);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112dbae30 = puVar2;
  return;
}



/* Entry: 101630ce8; end: 101630ceb;  */

void FUN_101630ce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fe20;
  func_0x000107c61520(&UNK_10d96fe20,&UNK_1103eb5e8);
  puRam0000000112dbae40 = puVar1;
  return;
}



/* Entry: 101630cec; end: 101630d2b;  */

void FUN_101630cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fe20;
  func_0x000107c61520(&UNK_10d96fe20,&UNK_1103eb5e8);
  puRam0000000112dbae40 = puVar1;
  return;
}



/* Entry: 101630d2c; end: 101630d4f;  */

void FUN_101630d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101630d50();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101630d50; end: 101630d8f;  */

void FUN_101630d50(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fe90;
  func_0x000107c61520(&UNK_10d96fe90,&UNK_1103eb528);
  puRam0000000112dbae48 = puVar1;
  return;
}



/* Entry: 101630d90; end: 101630da3;  */

void FUN_101630d90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101630bc0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101568e04)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101630da4; end: 101630dd3;  */

void FUN_101630da4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101630dd4; end: 101630dd7;  */

void FUN_101630dd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fef8;
  func_0x000107c61520(&UNK_10d96fef8,&UNK_1103eb528);
  puRam0000000112dbae50 = puVar1;
  return;
}



/* Entry: 101630dd8; end: 101630e17;  */

void FUN_101630dd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d96fef8;
  func_0x000107c61520(&UNK_10d96fef8,&UNK_1103eb528);
  puRam0000000112dbae50 = puVar1;
  return;
}



/* Entry: 101630e18; end: 101630ec7;  */

long FUN_101630e18(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 101630ec8; end: 10163103f;  */

undefined8 * FUN_101630ec8(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  func_0x00010006c00c(uVar3,uVar4);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar4 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar4;
  uVar3 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar3;
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xd];
  func_0x000107c61434();
  func_0x000107c61434(uVar4);
  func_0x00010006c00c(uVar3,uVar5);
  param_1[0xc] = uVar3;
  param_1[0xd] = uVar5;
  lVar2 = param_2[0x10];
  if (lVar2 == 0) {
    uVar3 = param_2[0xe];
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar3;
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
    param_1[0x12] = param_2[0x12];
  }
  else {
    param_1[0xe] = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0x10] = lVar2;
    uVar3 = param_2[0x11];
    uVar4 = param_2[0x12];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar4;
  }
  cVar1 = *(char *)(param_2 + 0x13);
  if (cVar1 == '\x02') {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = param_2[0x15];
    lVar2 = param_2[0x18];
  }
  else {
    *(char *)(param_1 + 0x13) = cVar1;
    uVar3 = param_2[0x14];
    uVar4 = param_2[0x15];
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar4;
    lVar2 = param_2[0x18];
  }
  if (lVar2 == 0) {
    uVar3 = param_2[0x16];
    uVar5 = param_2[0x19];
    uVar4 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x19] = uVar5;
    param_1[0x18] = uVar4;
    param_1[0x1a] = param_2[0x1a];
  }
  else {
    param_1[0x16] = param_2[0x16];
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
    param_1[0x18] = lVar2;
    uVar3 = param_2[0x19];
    uVar4 = param_2[0x1a];
    func_0x000107c61434();
    func_0x00010006c00c(uVar3,uVar4);
    param_1[0x19] = uVar3;
    param_1[0x1a] = uVar4;
  }
  return param_1;
}



/* Entry: 101631040; end: 1016314bb;  */

undefined8 * FUN_101631040(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  char *pcVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *param_2;
  uVar7 = param_2[1];
  func_0x00010006c00c(uVar2,uVar7);
  uVar6 = *param_1;
  uVar8 = param_1[1];
  *param_1 = uVar2;
  param_1[1] = uVar7;
  func_0x00010006c090(uVar6,uVar8);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar2;
  param_1[5] = param_2[5];
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[10];
  *(undefined1 *)(param_1 + 0xb) = *(undefined1 *)(param_2 + 0xb);
  param_1[10] = uVar2;
  uVar2 = param_2[0xc];
  uVar7 = param_2[0xd];
  func_0x00010006c00c(uVar2,uVar7);
  uVar6 = param_1[0xc];
  uVar8 = param_1[0xd];
  param_1[0xc] = uVar2;
  param_1[0xd] = uVar7;
  func_0x00010006c090(uVar6,uVar8);
  lVar3 = param_1[0x10];
  if (lVar3 == 0) {
    if (param_2[0x10] == 0) {
      uVar6 = param_2[0xf];
      uVar2 = param_2[0xe];
      uVar8 = param_2[0x11];
      uVar7 = param_2[0x10];
      param_1[0x12] = param_2[0x12];
      param_1[0xf] = uVar6;
      param_1[0xe] = uVar2;
      param_1[0x11] = uVar8;
      param_1[0x10] = uVar7;
    }
    else {
      uVar2 = param_2[0xe];
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
      param_1[0xe] = uVar2;
      param_1[0x10] = param_2[0x10];
      uVar2 = param_2[0x11];
      uVar6 = param_2[0x12];
      func_0x000107c61434();
      func_0x00010006c00c(uVar2,uVar6);
      param_1[0x11] = uVar2;
      param_1[0x12] = uVar6;
    }
  }
  else if (param_2[0x10] == 0) {
    func_0x000101553ad0(param_1 + 0xe);
    uVar2 = param_2[0x12];
    uVar8 = param_2[0xe];
    uVar7 = param_2[0x11];
    uVar6 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar8;
    param_1[0x11] = uVar7;
    param_1[0x10] = uVar6;
    param_1[0x12] = uVar2;
  }
  else {
    uVar2 = param_2[0xe];
    *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
    param_1[0xe] = uVar2;
    param_1[0x10] = param_2[0x10];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    uVar2 = param_2[0x11];
    uVar7 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar7);
    uVar6 = param_1[0x11];
    uVar8 = param_1[0x12];
    param_1[0x11] = uVar2;
    param_1[0x12] = uVar7;
    func_0x00010006c090(uVar6,uVar8);
  }
  pcVar4 = (char *)(param_1 + 0x13);
  pbVar5 = (byte *)(param_2 + 0x13);
  bVar1 = *pbVar5;
  if (*pcVar4 == '\x02') {
    if (bVar1 == 2) {
      uVar6 = param_2[0x14];
      uVar2 = *(undefined8 *)pbVar5;
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar6;
      *(undefined8 *)pcVar4 = uVar2;
    }
    else {
      *(byte *)(param_1 + 0x13) = bVar1;
      uVar2 = param_2[0x14];
      uVar6 = param_2[0x15];
      func_0x00010006c00c(uVar2,uVar6);
      param_1[0x14] = uVar2;
      param_1[0x15] = uVar6;
    }
  }
  else if (bVar1 == 2) {
    func_0x0001015fd618(pcVar4);
    uVar2 = param_2[0x15];
    uVar6 = *(undefined8 *)pbVar5;
    param_1[0x14] = param_2[0x14];
    *(undefined8 *)pcVar4 = uVar6;
    param_1[0x15] = uVar2;
  }
  else {
    *(byte *)(param_1 + 0x13) = bVar1 & 1;
    uVar2 = param_2[0x14];
    uVar7 = param_2[0x15];
    func_0x00010006c00c(uVar2,uVar7);
    uVar6 = param_1[0x14];
    uVar8 = param_1[0x15];
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar7;
    func_0x00010006c090(uVar6,uVar8);
  }
  lVar3 = param_1[0x18];
  if (lVar3 == 0) {
    if (param_2[0x18] == 0) {
      uVar6 = param_2[0x17];
      uVar2 = param_2[0x16];
      uVar8 = param_2[0x19];
      uVar7 = param_2[0x18];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x17] = uVar6;
      param_1[0x16] = uVar2;
      param_1[0x19] = uVar8;
      param_1[0x18] = uVar7;
    }
    else {
      uVar2 = param_2[0x16];
      *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
      param_1[0x16] = uVar2;
      param_1[0x18] = param_2[0x18];
      uVar2 = param_2[0x19];
      uVar6 = param_2[0x1a];
      func_0x000107c61434();
      func_0x00010006c00c(uVar2,uVar6);
      param_1[0x19] = uVar2;
      param_1[0x1a] = uVar6;
    }
  }
  else if (param_2[0x18] == 0) {
    func_0x000101553ad0(param_1 + 0x16);
    uVar2 = param_2[0x1a];
    uVar8 = param_2[0x16];
    uVar7 = param_2[0x19];
    uVar6 = param_2[0x18];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar8;
    param_1[0x19] = uVar7;
    param_1[0x18] = uVar6;
    param_1[0x1a] = uVar2;
  }
  else {
    uVar2 = param_2[0x16];
    *(undefined1 *)(param_1 + 0x17) = *(undefined1 *)(param_2 + 0x17);
    param_1[0x16] = uVar2;
    param_1[0x18] = param_2[0x18];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    uVar2 = param_2[0x19];
    uVar7 = param_2[0x1a];
    func_0x00010006c00c(uVar2,uVar7);
    uVar6 = param_1[0x19];
    uVar8 = param_1[0x1a];
    param_1[0x19] = uVar2;
    param_1[0x1a] = uVar7;
    func_0x00010006c090(uVar6,uVar8);
  }
  return param_1;
}



/* Entry: 1016314bc; end: 101631627;  */

int FUN_1016314bc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x36] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xc);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101631628; end: 101631667;  */

void FUN_101631628(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbae60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96fe64;
  func_0x000107c61520(&DAT_10d96fe64,&UNK_1103eb528);
  puRam0000000112dbae60 = puVar1;
  return;
}



/* Entry: 101631668; end: 101631673;  */

void FUN_101631668(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1016329ec();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 101631674; end: 1016316b3;  */

void FUN_101631674(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbaf20;
  func_0x0001000285a8(0x112dbaf20,&UNK_10d9701d8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016316b4; end: 1016316bf;  */

void FUN_1016316b4(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1016329ec();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1016316c0; end: 10163173f;  */

void FUN_1016316c0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbaf70;
  func_0x0001000285a8(0x112dbaf70,&UNK_10d9701e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631740; end: 10163176b;  */

void FUN_101631740(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  (*(code *)0x1016329f8)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 10163176c; end: 1016317ab;  */

void FUN_10163176c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb0f0;
  func_0x0001000285a8(0x112dbb0f0,&UNK_10d9701f0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016317ac; end: 1016317db;  */

void FUN_1016317ac(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x1016329f8)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1016317dc; end: 1016318cf;  */

void FUN_1016317dc(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_68 [72];
  
  lVar2 = *unaff_x20;
  lVar1 = unaff_x20[1];
  func_0x000107c6068c(auStack_68,0);
  if ((char)lVar1 == '\x01') {
    lVar2 = *(long *)(&UNK_10d971b80 + lVar2 * 8);
  }
  func_0x000107c60690(lVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016318d0; end: 10163190b;  */

bool FUN_1016318d0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if ((char)param_1[1] == '\x01') {
    lVar1 = *(long *)(&UNK_10d971b80 + lVar1 * 8);
  }
  lVar2 = *param_2;
  if ((char)param_2[1] == '\x01') {
    lVar2 = *(long *)(&UNK_10d971b80 + lVar2 * 8);
  }
  return lVar1 == lVar2;
}



/* Entry: 10163190c; end: 1016319ef;  */

void FUN_10163190c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb140;
  func_0x0001000285a8(0x112dbb140,&UNK_10d9701f8);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1016319f0; end: 101631a37;  */

bool FUN_1016319f0(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = (ulong)(*param_1 != 0);
  if ((char)param_1[1] != '\x01') {
    uVar1 = *param_1;
  }
  uVar2 = (ulong)(*param_2 != 0);
  if ((char)param_2[1] != '\x01') {
    uVar2 = *param_2;
  }
  return uVar1 == uVar2;
}



/* Entry: 101631a38; end: 101631a77;  */

void FUN_101631a38(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112dbb1b0;
  func_0x0001000285a8(0x112dbb1b0,&UNK_10d970200);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 101631a78; end: 101631a8f;  */

void FUN_101631a78(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x101633bbc)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



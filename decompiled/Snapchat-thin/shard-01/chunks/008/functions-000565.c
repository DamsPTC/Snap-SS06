/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015868a0; end: 1015868fb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015868a0(undefined8 *param_1,undefined1 (*param_2) [16])

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  short sVar4;
  short sVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  code *pcVar10;
  undefined1 *puVar11;
  int iVar12;
  byte *pbVar13;
  byte *pbVar14;
  undefined8 uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulong uVar20;
  byte *pbVar21;
  uint uVar22;
  int iVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  byte *pbVar27;
  byte *unaff_x19;
  long lVar28;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar29;
  ulong unaff_x22;
  long lVar30;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  undefined8 unaff_x26;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
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
  byte bVar46;
  undefined1 auVar47 [16];
  
  auVar47 = *param_2;
  sVar4 = -(ushort)((float)((ulong)*param_1 >> 0x20) == auVar47._4_4_);
  sVar5 = -(ushort)((float)param_1[1] == auVar47._8_4_);
  sVar6 = -(ushort)((float)((ulong)param_1[1] >> 0x20) == auVar47._12_4_);
  uVar7 = NEON_uminv(CONCAT17((char)((ushort)sVar6 >> 8),
                              CONCAT16((char)sVar6,
                                       CONCAT15((char)((ushort)sVar5 >> 8),
                                                CONCAT14((char)sVar5,
                                                         CONCAT13((char)((ushort)sVar4 >> 8),
                                                                  CONCAT12((char)sVar4,
                                                                           -(ushort)((float)*param_1
                                                                                    == auVar47._0_4_
                                                                                    ))))))),2);
  if ((uVar7 & 1) == 0) {
    return (byte *)0x0;
  }
  lVar28 = *(long *)param_2[1];
  uVar20 = *(ulong *)(param_2[1] + 8);
  pbVar14 = (byte *)param_1[2];
  pbVar29 = (byte *)param_1[3];
  puVar11 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
    *(byte **)(puVar11 + -0x48) = unaff_x25;
    *(byte **)(puVar11 + -0x40) = unaff_x24;
    *(byte **)(puVar11 + -0x38) = unaff_x23;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
    *(ulong *)(puVar11 + -0x20) = unaff_x20;
    *(byte **)(puVar11 + -0x18) = unaff_x19;
    *(undefined8 *)(puVar11 + -0x10) = unaff_x29;
    *(undefined8 *)(puVar11 + -8) = unaff_x30;
    *(undefined8 *)(puVar11 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar8 = (uint)((ulong)pbVar29 >> 0x20);
    uVar22 = uVar8 >> 0x1e;
    uVar9 = (uint)(uVar20 >> 0x20);
    uVar25 = uVar9 >> 0x1e;
    iVar12 = (int)pbVar14;
    pbVar17 = pbVar29;
    if ((ulong)pbVar29 >> 0x3e == 3) {
      uVar24 = 0;
      if ((((pbVar14 != (byte *)0x0) || (pbVar29 != (byte *)0xc000000000000000)) ||
          (uVar20 >> 0x3e < 3)) || ((uVar24 = 0, lVar28 != 0 || (uVar20 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
LAB_100e26128:
      pbVar13 = (byte *)0x1;
    }
    else if (uVar8 >> 0x1e < 2) {
      if (uVar22 == 0) {
        uVar24 = (ulong)pbVar29 >> 0x30 & 0xff;
      }
      else {
        iVar23 = (int)((ulong)pbVar14 >> 0x20);
        if (SBORROW4(iVar23,iVar12)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar10)();
        }
        uVar24 = (ulong)(iVar23 - iVar12);
      }
joined_r0x000100e26170:
      if (1 < uVar9 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar25 == 0) {
        uVar26 = uVar20 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar23 = (int)((ulong)lVar28 >> 0x20);
      if (SBORROW4(iVar23,(int)lVar28)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar10)();
      }
      if (uVar24 == (long)(iVar23 - (int)lVar28)) goto LAB_100e26094;
LAB_100e26154:
      pbVar13 = (byte *)0x0;
    }
    else {
      if (uVar22 == 2) {
        uVar24 = *(long *)(pbVar14 + 0x18) - *(long *)(pbVar14 + 0x10);
        if (SBORROW8(*(long *)(pbVar14 + 0x18),*(long *)(pbVar14 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar10)();
        }
        goto joined_r0x000100e26170;
      }
      uVar24 = 0;
      if (uVar25 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar25 == 2) {
        uVar26 = *(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10);
        if (SBORROW8(*(long *)(lVar28 + 0x18),*(long *)(lVar28 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar10)();
        }
LAB_100e2608c:
        if (uVar24 != uVar26) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar24 < 1) goto LAB_100e26128;
        if (uVar22 < 2) {
          if (uVar22 == 0) {
            puVar11[-0x70] = (char)pbVar14;
            puVar11[-0x6f] = (char)((ulong)pbVar14 >> 8);
            puVar11[-0x6e] = (char)((ulong)pbVar14 >> 0x10);
            puVar11[-0x6d] = (char)((ulong)pbVar14 >> 0x18);
            puVar11[-0x6c] = (char)((ulong)pbVar14 >> 0x20);
            puVar11[-0x6b] = (char)((ulong)pbVar14 >> 0x28);
            puVar11[-0x6a] = (char)((ulong)pbVar14 >> 0x30);
            puVar11[-0x69] = (char)((ulong)pbVar14 >> 0x38);
            puVar11[-0x68] = (char)pbVar29;
            puVar11[-0x67] = (char)((ulong)pbVar29 >> 8);
            puVar11[-0x66] = (char)((ulong)pbVar29 >> 0x10);
            puVar11[-0x65] = (char)((ulong)pbVar29 >> 0x18);
            puVar11[-100] = (char)((ulong)pbVar29 >> 0x20);
            puVar11[-99] = (char)((ulong)pbVar29 >> 0x28);
            pbVar17 = puVar11 + (((ulong)pbVar29 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc(puVar11 + -0x71,puVar11 + -0x70);
            pbVar13 = (byte *)(ulong)(byte)puVar11[-0x71];
            goto LAB_100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar12;
          unaff_x23 = (byte *)(((long)pbVar14 >> 0x20) - (long)unaff_x25);
          if ((long)pbVar14 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar10)();
          }
          func_0x000107c5ec30();
          unaff_x24 = pbVar29;
          if (pbVar14 == (byte *)0x0) {
            func_0x000107c5ec38();
            pbVar14 = (byte *)0x0;
          }
          else {
            pbVar17 = pbVar14;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar17)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar10)();
            }
            pbVar14 = pbVar14 + ((long)unaff_x25 - (long)pbVar17);
            func_0x000107c5ec38();
            unaff_x19 = pbVar14;
            if (pbVar14 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar17) {
                pbVar17 = unaff_x23;
              }
              pbVar17 = pbVar17 + (long)pbVar14;
              goto LAB_100e262a4;
            }
          }
          pbVar17 = (byte *)0x0;
        }
        else {
          if (uVar22 != 2) {
            *(undefined8 *)(puVar11 + -0x6a) = 0;
            *(undefined8 *)(puVar11 + -0x70) = 0;
            pbVar17 = puVar11 + -0x70;
            goto LAB_100e26260;
          }
          lVar30 = *(long *)(pbVar14 + 0x10);
          unaff_x24 = *(byte **)(pbVar14 + 0x18);
          func_0x000107c5ec30();
          pbVar17 = pbVar14;
          if (pbVar14 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar30,(long)pbVar17)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar10)();
            }
            pbVar14 = pbVar14 + (lVar30 - (long)pbVar17);
          }
          unaff_x23 = unaff_x24 + -lVar30;
          if (SBORROW8((long)unaff_x24,lVar30)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar10)();
          }
          func_0x000107c5ec38();
          unaff_x19 = pbVar14;
          unaff_x25 = pbVar29;
          if (pbVar14 == (byte *)0x0) {
            pbVar17 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar17) {
              pbVar17 = unaff_x23;
            }
            pbVar17 = pbVar17 + (long)pbVar14;
          }
        }
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar11 + -0x70,pbVar14,pbVar17,lVar28,uVar20);
        pbVar13 = (byte *)(ulong)(byte)puVar11[-0x70];
        unaff_x22 = uVar20;
      }
      else {
        pbVar13 = (byte *)(ulong)(uVar24 == 0);
      }
    }
LAB_100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0x58)) {
      return pbVar13;
    }
    func_0x000107c60e78();
    *(byte **)(puVar11 + -0xc0) = unaff_x24;
    *(byte **)(puVar11 + -0xb8) = unaff_x23;
    *(ulong *)(puVar11 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar11 + -0xa8) = unaff_x21;
    *(ulong *)(puVar11 + -0xa0) = unaff_x20;
    *(byte **)(puVar11 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x10;
    *(code **)(puVar11 + -0x88) = FUN_100e26304;
    pbVar16 = *(byte **)pbVar13;
    pbVar14 = *(byte **)(pbVar13 + 8);
    pbVar27 = *(byte **)(pbVar13 + 0x18);
    bVar31 = pbVar13[0x28];
    pbVar29 = (byte *)((ulong)*(uint *)(pbVar13 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar13 + 0x15) << 0x28 | (ulong)pbVar13[0x10]);
    pbVar18 = pbVar14;
    if (bVar31 < 3) {
      if (bVar31 == 0) {
        if (pbVar17[0x28] == 0) {
          lVar28 = *(long *)pbVar17;
          uVar15 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar16,lVar28,uVar15);
          return (byte *)(ulong)((uint)pbVar16 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar31 == 1) {
        if (pbVar17[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)(pbVar17 + 8);
        pbVar21 = *(byte **)(pbVar17 + 0x10);
        lVar28 = *(long *)pbVar17;
        uVar15 = 0;
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar16,lVar28,uVar15);
        if (((ulong)pbVar16 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar16 = pbVar14;
        pbVar18 = pbVar29;
        if ((pbVar14 == pbVar19) && (pbVar29 == pbVar21)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar17[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)pbVar17;
        pbVar21 = *(byte **)(pbVar17 + 8);
        lVar28 = *(long *)(pbVar17 + 0x18);
        if ((pbVar16 == pbVar19) && (pbVar14 == pbVar21)) {
          if (((pbVar13[0x10] ^ pbVar17[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar27 == (byte *)0x0) goto joined_r0x000100e26620;
          if (lVar28 == 0) {
            return (byte *)0x0;
          }
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
          func_0x000107c61174(lVar28);
          func_0x000107c61174();
          pbVar14 = pbVar27;
          func_0x000107c60118();
          func_0x000107c61170(pbVar27);
          func_0x000107c61170(lVar28);
          pbVar27 = pbVar14;
joined_r0x000100e266a4:
          if (((ulong)pbVar27 & 1) == 0) {
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
      )(pbVar16,pbVar18,pbVar19,pbVar21,0);
      return pbVar16;
    }
    lVar30 = *(long *)(pbVar13 + 0x20);
    if (bVar31 < 5) {
      if (bVar31 != 3) {
        if (pbVar17[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)pbVar17;
        pbVar21 = *(byte **)(pbVar17 + 8);
        if (((pbVar16 == pbVar19) && (pbVar14 == pbVar21)) &&
           (pbVar16 = pbVar29, pbVar18 = pbVar27, pbVar19 = *(byte **)(pbVar17 + 0x10),
           pbVar21 = *(byte **)(pbVar17 + 0x18),
           pbVar29 == *(byte **)(pbVar17 + 0x10) && pbVar27 == *(byte **)(pbVar17 + 0x18))) {
          return (byte *)0x1;
        }
        goto code_r0x000107c605b8;
      }
      if (pbVar17[0x28] != 3) {
        return (byte *)0x0;
      }
      if ((uint)*pbVar17 != ((uint)pbVar16 & 0xff)) {
        return (byte *)0x0;
      }
      pbVar21 = *(byte **)(pbVar17 + 0x10);
      lVar28 = *(long *)(pbVar17 + 0x20);
      if (pbVar29 == (byte *)0x0) {
        if (pbVar21 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar21 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar19 = *(byte **)(pbVar17 + 8);
        pbVar16 = pbVar14;
        pbVar18 = pbVar29;
        if ((pbVar14 != pbVar19) || (pbVar29 != pbVar21)) goto code_r0x000107c605b8;
      }
      if (lVar30 != 0) {
        if (lVar28 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar27 == *(byte **)(pbVar17 + 0x18)) && (lVar30 == lVar28)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar27,lVar30,*(byte **)(pbVar17 + 0x18),lVar28,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar28 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar31 != 5) {
      if ((((pbVar27 == (byte *)0x0 && pbVar14 == (byte *)0x0) && pbVar16 == (byte *)0x0) &&
          lVar30 == 0) && pbVar29 == (byte *)0x0) {
        if (pbVar17[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar30 = *(long *)(pbVar17 + 0x20);
        lVar28 = *(long *)(pbVar17 + 0x18);
        bVar31 = pbVar17[8] | (byte)lVar28;
        bVar32 = pbVar17[9] | (byte)((ulong)lVar28 >> 8);
        bVar33 = pbVar17[10] | (byte)((ulong)lVar28 >> 0x10);
        bVar34 = pbVar17[0xb] | (byte)((ulong)lVar28 >> 0x18);
        bVar35 = pbVar17[0xc] | (byte)((ulong)lVar28 >> 0x20);
        bVar36 = pbVar17[0xd] | (byte)((ulong)lVar28 >> 0x28);
        bVar37 = pbVar17[0xe] | (byte)((ulong)lVar28 >> 0x30);
        bVar38 = pbVar17[0xf] | (byte)((ulong)lVar28 >> 0x38);
        bVar39 = pbVar17[0x10] | (byte)lVar30;
        bVar40 = pbVar17[0x11] | (byte)((ulong)lVar30 >> 8);
        bVar41 = pbVar17[0x12] | (byte)((ulong)lVar30 >> 0x10);
        bVar42 = pbVar17[0x13] | (byte)((ulong)lVar30 >> 0x18);
        bVar43 = pbVar17[0x14] | (byte)((ulong)lVar30 >> 0x20);
        bVar44 = pbVar17[0x15] | (byte)((ulong)lVar30 >> 0x28);
        bVar45 = pbVar17[0x16] | (byte)((ulong)lVar30 >> 0x30);
        bVar46 = pbVar17[0x17] | (byte)((ulong)lVar30 >> 0x38);
        auVar47[1] = bVar32;
        auVar47[0] = bVar31;
        auVar47[2] = bVar33;
        auVar47[3] = bVar34;
        auVar47[4] = bVar35;
        auVar47[5] = bVar36;
        auVar47[6] = bVar37;
        auVar47[7] = bVar38;
        auVar47[8] = bVar39;
        auVar47[9] = bVar40;
        auVar47[10] = bVar41;
        auVar47[0xb] = bVar42;
        auVar47[0xc] = bVar43;
        auVar47[0xd] = bVar44;
        auVar47[0xe] = bVar45;
        auVar47[0xf] = bVar46;
        auVar3[1] = bVar32;
        auVar3[0] = bVar31;
        auVar3[2] = bVar33;
        auVar3[3] = bVar34;
        auVar3[4] = bVar35;
        auVar3[5] = bVar36;
        auVar3[6] = bVar37;
        auVar3[7] = bVar38;
        auVar3[8] = bVar39;
        auVar3[9] = bVar40;
        auVar3[10] = bVar41;
        auVar3[0xb] = bVar42;
        auVar3[0xc] = bVar43;
        auVar3[0xd] = bVar44;
        auVar3[0xe] = bVar45;
        auVar3[0xf] = bVar46;
        auVar47 = NEON_ext(auVar47,auVar3,8,1);
        if (CONCAT17(bVar38 | auVar47[7],
                     CONCAT16(bVar37 | auVar47[6],
                              CONCAT15(bVar36 | auVar47[5],
                                       CONCAT14(bVar35 | auVar47[4],
                                                CONCAT13(bVar34 | auVar47[3],
                                                         CONCAT12(bVar33 | auVar47[2],
                                                                  CONCAT11(bVar32 | auVar47[1],
                                                                           bVar31 | auVar47[0]))))))
                    ) == 0 && *(long *)pbVar17 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar16 == (byte *)0x1) &&
         (((pbVar27 == (byte *)0x0 && pbVar14 == (byte *)0x0) && pbVar29 == (byte *)0x0) &&
          lVar30 == 0)) {
        if (pbVar17[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar17 != 1) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar17[0x28] != 6) {
          return (byte *)0x0;
        }
        if (*(long *)pbVar17 != 2) {
          return (byte *)0x0;
        }
      }
      lVar30 = *(long *)(pbVar17 + 0x20);
      lVar28 = *(long *)(pbVar17 + 0x18);
      bVar31 = pbVar17[8] | (byte)lVar28;
      bVar32 = pbVar17[9] | (byte)((ulong)lVar28 >> 8);
      bVar33 = pbVar17[10] | (byte)((ulong)lVar28 >> 0x10);
      bVar34 = pbVar17[0xb] | (byte)((ulong)lVar28 >> 0x18);
      bVar35 = pbVar17[0xc] | (byte)((ulong)lVar28 >> 0x20);
      bVar36 = pbVar17[0xd] | (byte)((ulong)lVar28 >> 0x28);
      bVar37 = pbVar17[0xe] | (byte)((ulong)lVar28 >> 0x30);
      bVar38 = pbVar17[0xf] | (byte)((ulong)lVar28 >> 0x38);
      bVar39 = pbVar17[0x10] | (byte)lVar30;
      bVar40 = pbVar17[0x11] | (byte)((ulong)lVar30 >> 8);
      bVar41 = pbVar17[0x12] | (byte)((ulong)lVar30 >> 0x10);
      bVar42 = pbVar17[0x13] | (byte)((ulong)lVar30 >> 0x18);
      bVar43 = pbVar17[0x14] | (byte)((ulong)lVar30 >> 0x20);
      bVar44 = pbVar17[0x15] | (byte)((ulong)lVar30 >> 0x28);
      bVar45 = pbVar17[0x16] | (byte)((ulong)lVar30 >> 0x30);
      bVar46 = pbVar17[0x17] | (byte)((ulong)lVar30 >> 0x38);
      auVar1[1] = bVar32;
      auVar1[0] = bVar31;
      auVar1[2] = bVar33;
      auVar1[3] = bVar34;
      auVar1[4] = bVar35;
      auVar1[5] = bVar36;
      auVar1[6] = bVar37;
      auVar1[7] = bVar38;
      auVar1[8] = bVar39;
      auVar1[9] = bVar40;
      auVar1[10] = bVar41;
      auVar1[0xb] = bVar42;
      auVar1[0xc] = bVar43;
      auVar1[0xd] = bVar44;
      auVar1[0xe] = bVar45;
      auVar1[0xf] = bVar46;
      auVar2[1] = bVar32;
      auVar2[0] = bVar31;
      auVar2[2] = bVar33;
      auVar2[3] = bVar34;
      auVar2[4] = bVar35;
      auVar2[5] = bVar36;
      auVar2[6] = bVar37;
      auVar2[7] = bVar38;
      auVar2[8] = bVar39;
      auVar2[9] = bVar40;
      auVar2[10] = bVar41;
      auVar2[0xb] = bVar42;
      auVar2[0xc] = bVar43;
      auVar2[0xd] = bVar44;
      auVar2[0xe] = bVar45;
      auVar2[0xf] = bVar46;
      auVar47 = NEON_ext(auVar1,auVar2,8,1);
      lVar28 = CONCAT17(bVar38 | auVar47[7],
                        CONCAT16(bVar37 | auVar47[6],
                                 CONCAT15(bVar36 | auVar47[5],
                                          CONCAT14(bVar35 | auVar47[4],
                                                   CONCAT13(bVar34 | auVar47[3],
                                                            CONCAT12(bVar33 | auVar47[2],
                                                                     CONCAT11(bVar32 | auVar47[1],
                                                                              bVar31 | auVar47[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar17[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar28 = *(long *)(pbVar17 + 8);
    uVar20 = *(ulong *)(pbVar17 + 0x10);
    lVar30 = *(long *)pbVar17;
    uVar15 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar16,lVar30,uVar15);
    if (((ulong)pbVar16 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar11 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar11 + -0x88);
    unaff_x20 = *(ulong *)(puVar11 + -0xa0);
    unaff_x19 = *(byte **)(puVar11 + -0x98);
    unaff_x22 = *(ulong *)(puVar11 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar11 + -0xa8);
    unaff_x24 = *(byte **)(puVar11 + -0xc0);
    unaff_x23 = *(byte **)(puVar11 + -0xb8);
    puVar11 = puVar11 + -0x80;
  } while( true );
}



/* Entry: 1015868fc; end: 101586943;  */

void FUN_1015868fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964680,0x11,2);
  uRam00000001137ffdf0 = uStack_38;
  uRam00000001137ffde8 = uStack_40;
  uRam00000001137ffe00 = uStack_28;
  uRam00000001137ffdf8 = uStack_30;
  uRam00000001137ffe10 = uStack_18;
  uRam00000001137ffe08 = uStack_20;
  return;
}



/* Entry: 101586944; end: 101586a27;  */

void FUN_101586944(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 1) {
        pcVar5 = *(code **)(param_3 + 0x198);
        FUN_101595928();
        lVar2 = unaff_x20 + 0x10;
        puVar3 = &UNK_1103e0a90;
LAB_1015869cc:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else if (lVar1 == 2) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010159f6b4();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_110672a00;
        goto LAB_1015869cc;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 101586a28; end: 101586a9b;  */

void FUN_101586a28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_101586a9c();
  if (unaff_x21 == 0) {
    FUN_101586b28();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 101586a9c; end: 101586b27;  */

void FUN_101586a9c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x28);
  if (lStack_58 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = *(undefined8 *)(param_1 + 0x20);
    uStack_48 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101595928();
    (*pcVar1)(&uStack_70,1,&UNK_1103e0a90,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101586b28; end: 101586baf;  */

void FUN_101586b28(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010159f6b4();
    (*pcVar1)(&uStack_60,2,&UNK_110672a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101586bb0; end: 101586bfb;  */

void FUN_101586bb0(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0xf000000000000000;
  return;
}



/* Entry: 101586bfc; end: 101586c2b;  */

undefined1  [16] FUN_101586bfc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 101586c2c; end: 101586c5f;  */

void FUN_101586c2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 101586c60; end: 101586c73;  */

undefined8 FUN_101586c60(void)

{
  return 0x101586c70;
}



/* Entry: 101586c74; end: 101586c87;  */

void FUN_101586c74(void)

{
  FUN_101586944();
  return;
}



/* Entry: 101586c88; end: 101586ccf;  */

void FUN_101586c88(void)

{
  FUN_101586a28();
  return;
}



/* Entry: 101586cd0; end: 101586cd3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101586cd0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 101586cd4; end: 101586d0b;  */

uint FUN_101586cd4(long param_1,long param_2)

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
  func_0x00010159f3b4();
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



/* Entry: 101586d0c; end: 101586d73;  */

uint FUN_101586d0c(undefined8 *param_1)

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
  FUN_10158f97c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101586d74; end: 101586e13;  */

/* WARNING: Possible PIC construction at 0x000101586dc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101586dd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101586dc4) */
/* WARNING: Removing unreachable block (ram,0x000101586dd4) */

void FUN_101586d74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6448 != -1) {
    func_0x000107c61568(0x112db6448,FUN_1015868fc);
  }
  uVar5 = uRam00000001137ffe10;
  uVar4 = uRam00000001137ffe08;
  uVar3 = uRam00000001137ffe00;
  uVar2 = uRam00000001137ffdf8;
  uVar1 = uRam00000001137ffdf0;
  *param_1 = uRam00000001137ffde8;
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



/* Entry: 101586e14; end: 101586e4f;  */

void FUN_101586e14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6df8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6df8,&UNK_10d964220);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101586e50; end: 101586f73;  */

void FUN_101586e50(undefined8 param_1,undefined8 param_2)

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



/* Entry: 101586f74; end: 101586fdb;  */

uint FUN_101586f74(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10158f97c(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 101586fdc; end: 10158704b;  */

void FUN_101586fdc(void)

{
  func_0x000107c5fb78(0xd000000000000010,0x800000010efb3000);
  uRam00000001137ffe18 = 0xd000000000000029;
  uRam00000001137ffe20 = 0x800000010efb2fd0;
  return;
}



/* Entry: 10158704c; end: 101587093;  */

void FUN_10158704c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964660,0x12,2);
  uRam00000001137ffe30 = uStack_38;
  uRam00000001137ffe28 = uStack_40;
  uRam00000001137ffe40 = uStack_28;
  uRam00000001137ffe38 = uStack_30;
  uRam00000001137ffe50 = uStack_18;
  uRam00000001137ffe48 = uStack_20;
  return;
}



/* Entry: 101587094; end: 1015870cf;  */

undefined1  [16] FUN_101587094(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6458 != -1) {
    func_0x000107c61568(0x112db6458,FUN_101586fdc);
  }
  auVar1._8_8_ = uRam00000001137ffe20;
  auVar1._0_8_ = uRam00000001137ffe18;
  func_0x000107c61434(uRam00000001137ffe20);
  return auVar1;
}



/* Entry: 1015870d0; end: 101587117;  */

void FUN_1015870d0(void)

{
  FUN_10158a900();
  return;
}



/* Entry: 101587118; end: 10158714f;  */

uint FUN_101587118(long param_1,long param_2)

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
  func_0x00010159f374();
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



/* Entry: 101587150; end: 101587197;  */

uint FUN_101587150(undefined8 *param_1)

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
  FUN_10158f8c8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101587198; end: 101587237;  */

/* WARNING: Possible PIC construction at 0x0001015871e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015871f4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015871e8) */
/* WARNING: Removing unreachable block (ram,0x0001015871f8) */

void FUN_101587198(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6460 != -1) {
    func_0x000107c61568(0x112db6460,FUN_10158704c);
  }
  uVar5 = uRam00000001137ffe50;
  uVar4 = uRam00000001137ffe48;
  uVar3 = uRam00000001137ffe40;
  uVar2 = uRam00000001137ffe38;
  uVar1 = uRam00000001137ffe30;
  *param_1 = uRam00000001137ffe28;
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



/* Entry: 101587238; end: 10158724b;  */

void FUN_101587238(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6de8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6de8,&UNK_10d964218);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158724c; end: 101587283;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10158724c(undefined8 *param_1,undefined8 param_2)

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
  FUN_101595928();
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



/* Entry: 101587284; end: 10158730f;  */

uint FUN_101587284(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10158f8c8(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 101587310; end: 1015873af;  */

/* WARNING: Possible PIC construction at 0x00010158735c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010158736c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101587360) */
/* WARNING: Removing unreachable block (ram,0x000101587370) */

void FUN_101587310(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6478 != -1) {
    func_0x000107c61568(0x112db6478,0x1015872c8);
  }
  uVar5 = uRam00000001137ffe80;
  uVar4 = uRam00000001137ffe78;
  uVar3 = uRam00000001137ffe70;
  uVar2 = uRam00000001137ffe68;
  uVar1 = uRam00000001137ffe60;
  *param_1 = uRam00000001137ffe58;
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



/* Entry: 1015873b0; end: 1015873d3;  */

void FUN_1015873b0(void)

{
  func_0x000107c5fb78(0x6b63617453562e,0xe700000000000000);
  uRam00000001137ffe88 = 0xd000000000000029;
  uRam00000001137ffe90 = 0x800000010efb2fd0;
  return;
}



/* Entry: 1015873d4; end: 10158741b;  */

void FUN_1015873d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964600,0x26,2);
  uRam00000001137ffea0 = uStack_38;
  uRam00000001137ffe98 = uStack_40;
  uRam00000001137ffeb0 = uStack_28;
  uRam00000001137ffea8 = uStack_30;
  uRam00000001137ffec0 = uStack_18;
  uRam00000001137ffeb8 = uStack_20;
  return;
}



/* Entry: 10158741c; end: 101587457;  */

undefined1  [16] FUN_10158741c(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6480 != -1) {
    func_0x000107c61568(0x112db6480,FUN_1015873b0);
  }
  auVar1._8_8_ = uRam00000001137ffe90;
  auVar1._0_8_ = uRam00000001137ffe88;
  func_0x000107c61434(uRam00000001137ffe90);
  return auVar1;
}



/* Entry: 101587458; end: 10158748f;  */

uint FUN_101587458(long param_1,long param_2)

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
  func_0x00010159f334();
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



/* Entry: 101587490; end: 10158752f;  */

/* WARNING: Possible PIC construction at 0x0001015874dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015874ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015874e0) */
/* WARNING: Removing unreachable block (ram,0x0001015874f0) */

void FUN_101587490(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6488 != -1) {
    func_0x000107c61568(0x112db6488,FUN_1015873d4);
  }
  uVar5 = uRam00000001137ffec0;
  uVar4 = uRam00000001137ffeb8;
  uVar3 = uRam00000001137ffeb0;
  uVar2 = uRam00000001137ffea8;
  uVar1 = uRam00000001137ffea0;
  *param_1 = uRam00000001137ffe98;
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



/* Entry: 101587530; end: 101587543;  */

void FUN_101587530(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6dd8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6dd8,&UNK_10d964210);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101587544; end: 10158757b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101587544(undefined8 *param_1,undefined8 param_2)

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
  FUN_101595a24();
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



/* Entry: 10158757c; end: 10158759f;  */

void FUN_10158757c(void)

{
  func_0x000107c5fb78(0x6b63617453482e,0xe700000000000000);
  uRam00000001137ffec8 = 0xd000000000000029;
  uRam00000001137ffed0 = 0x800000010efb2fd0;
  return;
}



/* Entry: 1015875a0; end: 1015875e7;  */

void FUN_1015875a0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964600,0x26,2);
  uRam00000001137ffee0 = uStack_38;
  uRam00000001137ffed8 = uStack_40;
  uRam00000001137ffef0 = uStack_28;
  uRam00000001137ffee8 = uStack_30;
  uRam00000001137fff00 = uStack_18;
  uRam00000001137ffef8 = uStack_20;
  return;
}



/* Entry: 1015875e8; end: 1015876ef;  */

/* WARNING: Removing unreachable block (ram,0x0001015876ec) */

void FUN_1015875e8(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000101593f94();
LAB_1015876d8:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x18))(unaff_x20 + 8,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10157f930();
        goto LAB_1015876d8;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015876f0; end: 1015877f7;  */

void FUN_1015876f0(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  long lStack_60;
  undefined1 uStack_58;
  
  lVar2 = *unaff_x20;
  lVar1 = param_1;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    FUN_10157f930();
    (*pcVar3)(lVar2,1,&UNK_1103e0630,lVar1,param_2,param_3);
    lVar1 = lVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((int)unaff_x20[1] != 0) {
    lVar1 = 2;
    (**(code **)(param_3 + 8))(2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_58 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_60 = unaff_x20[2];
    func_0x000101593f94();
    (*pcVar3)(&lStack_60,3,&UNK_1103e0758,lVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 1015877f8; end: 101587833;  */

undefined1  [16] FUN_1015877f8(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db6498 != -1) {
    func_0x000107c61568(0x112db6498,FUN_10158757c);
  }
  auVar1._8_8_ = uRam00000001137ffed0;
  auVar1._0_8_ = uRam00000001137ffec8;
  func_0x000107c61434(uRam00000001137ffed0);
  return auVar1;
}



/* Entry: 101587834; end: 10158786b;  */

uint FUN_101587834(long param_1,long param_2)

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
  func_0x00010159f2f4();
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



/* Entry: 10158786c; end: 10158790b;  */

/* WARNING: Possible PIC construction at 0x0001015878b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015878c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015878bc) */
/* WARNING: Removing unreachable block (ram,0x0001015878cc) */

void FUN_10158786c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db64a0 != -1) {
    func_0x000107c61568(0x112db64a0,FUN_1015875a0);
  }
  uVar5 = uRam00000001137fff00;
  uVar4 = uRam00000001137ffef8;
  uVar3 = uRam00000001137ffef0;
  uVar2 = uRam00000001137ffee8;
  uVar1 = uRam00000001137ffee0;
  *param_1 = uRam00000001137ffed8;
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



/* Entry: 10158790c; end: 10158791f;  */

void FUN_10158790c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6dc8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6dc8,&UNK_10d964208);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101587920; end: 101587a53;  */

void FUN_101587920(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined4 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined4 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 101587a54; end: 101587a77;  */

void FUN_101587a54(void)

{
  func_0x000107c5fb78(0x6b636174535a2e,0xe700000000000000);
  uRam00000001137fff08 = 0xd000000000000029;
  uRam00000001137fff10 = 0x800000010efb2fd0;
  return;
}



/* Entry: 101587a78; end: 101587abf;  */

void FUN_101587a78(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9645e6,0xb,2);
  uRam00000001137fff20 = uStack_38;
  uRam00000001137fff18 = uStack_40;
  uRam00000001137fff30 = uStack_28;
  uRam00000001137fff28 = uStack_30;
  uRam00000001137fff40 = uStack_18;
  uRam00000001137fff38 = uStack_20;
  return;
}



/* Entry: 101587ac0; end: 101587b73;  */

/* WARNING: Removing unreachable block (ram,0x000101587b70) */

void FUN_101587ac0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x1a0);
        FUN_10157f930();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 101587b74; end: 101587c0f;  */

void FUN_101587b74(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_10157f930();
    (*pcVar2)(param_2,1,&UNK_1103e0630,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 101587c10; end: 101587c4b;  */

undefined1  [16] FUN_101587c10(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db64b0 != -1) {
    func_0x000107c61568(0x112db64b0,FUN_101587a54);
  }
  auVar1._8_8_ = uRam00000001137fff10;
  auVar1._0_8_ = uRam00000001137fff08;
  func_0x000107c61434(uRam00000001137fff10);
  return auVar1;
}



/* Entry: 101587c4c; end: 101587c83;  */

void FUN_101587c4c(void)

{
  FUN_101587ac0();
  return;
}



/* Entry: 101587c84; end: 101587cbb;  */

uint FUN_101587c84(long param_1,long param_2)

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
  func_0x00010159f2b4();
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



/* Entry: 101587cbc; end: 101587dc3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101587cbc(undefined8 *param_1)

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
  FUN_10158f364(uVar18,*param_1);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar19 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar18 != uVar20) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar18 < 1) goto LAB_100e26128;
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
              goto LAB_100e262a4;
            }
          }
          pbVar12 = (byte *)0x0;
        }
        else {
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,uVar25)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
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
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
    *(undefined1 **)((long)register0x00000008 + -0x90) =
         (undefined1 *)((long)register0x00000008 + -0x10);
    *(code **)((long)register0x00000008 + -0x88) = FUN_100e26304;
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101587dc4; end: 101587dd7;  */

void FUN_101587dc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6db8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6db8,&UNK_10d964200);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101587dd8; end: 101587e73;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101587dd8(undefined8 *param_1,undefined8 param_2)

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
  FUN_101595c1c();
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



/* Entry: 101587e74; end: 101587e97;  */

void FUN_101587e74(void)

{
  func_0x000107c5fb78(0x7265636170532e,0xe700000000000000);
  uRam00000001137fff48 = 0xd000000000000029;
  uRam00000001137fff50 = 0x800000010efb2fd0;
  return;
}



/* Entry: 101587e98; end: 101587ecf;  */

void FUN_101587e98(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam00000001137fff60 = uStack_38;
  uRam00000001137fff58 = uStack_40;
  uRam00000001137fff70 = uStack_28;
  uRam00000001137fff68 = uStack_30;
  uRam00000001137fff80 = uStack_18;
  uRam00000001137fff78 = uStack_20;
  return;
}



/* Entry: 101587ed0; end: 101587f0b;  */

undefined1  [16] FUN_101587ed0(void)

{
  undefined1 auVar1 [16];
  
  if (lRam0000000112db64c8 != -1) {
    func_0x000107c61568(0x112db64c8,FUN_101587e74);
  }
  auVar1._8_8_ = uRam00000001137fff50;
  auVar1._0_8_ = uRam00000001137fff48;
  func_0x000107c61434(uRam00000001137fff50);
  return auVar1;
}



/* Entry: 101587f0c; end: 101587f43;  */

uint FUN_101587f0c(long param_1,long param_2)

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
  func_0x00010159f274();
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



/* Entry: 101587f44; end: 101587fe3;  */

/* WARNING: Possible PIC construction at 0x000101587f90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101587fa0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101587f94) */
/* WARNING: Removing unreachable block (ram,0x000101587fa4) */

void FUN_101587f44(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db64d0 != -1) {
    func_0x000107c61568(0x112db64d0,FUN_101587e98);
  }
  uVar5 = uRam00000001137fff80;
  uVar4 = uRam00000001137fff78;
  uVar3 = uRam00000001137fff70;
  uVar2 = uRam00000001137fff68;
  uVar1 = uRam00000001137fff60;
  *param_1 = uRam00000001137fff58;
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



/* Entry: 101587fe4; end: 101587ff7;  */

void FUN_101587fe4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6da8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6da8,&UNK_10d9641f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101587ff8; end: 10158802f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101587ff8(undefined8 *param_1,undefined8 param_2)

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
  FUN_101595d18();
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



/* Entry: 101588030; end: 10158804f;  */

void FUN_101588030(void)

{
  func_0x000107c5fb78(0x747865542e,0xe500000000000000);
  uRam00000001137fff88 = 0xd000000000000029;
  uRam00000001137fff90 = 0x800000010efb2fd0;
  return;
}



/* Entry: 101588050; end: 101588097;  */

void FUN_101588050(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9645a0,0x45,2);
  uRam00000001137fffa0 = uStack_38;
  uRam00000001137fff98 = uStack_40;
  uRam00000001137fffb0 = uStack_28;
  uRam00000001137fffa8 = uStack_30;
  uRam00000001137fffc0 = uStack_18;
  uRam00000001137fffb8 = uStack_20;
  return;
}



/* Entry: 101588098; end: 10158823b;  */

/* WARNING: Removing unreachable block (ram,0x000101588218) */

void FUN_101588098(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 != 1) {
          if (lVar1 == 2) {
            pcVar5 = *(code **)(param_3 + 0x198);
            FUN_101595f10();
            lVar2 = unaff_x20 + 0x50;
            puVar3 = &UNK_1103e1000;
          }
          else {
            if (lVar1 != 3) goto LAB_101588134;
            pcVar5 = *(code **)(param_3 + 0x180);
            func_0x000101594294();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_1103e0e68;
          }
          goto LAB_101588120;
        }
        pcVar5 = *(code **)(param_3 + 0x150);
LAB_101588208:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 6) {
          if (lVar1 == 4) {
            pcVar5 = *(code **)(param_3 + 0x48);
            goto LAB_101588208;
          }
          if (lVar1 != 5) goto LAB_101588134;
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x0001015942d4();
          lVar2 = unaff_x20 + 0x20;
          puVar3 = &UNK_1103e0ef8;
        }
        else if (lVar1 == 6) {
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000101594314();
          lVar2 = unaff_x20 + 0x30;
          puVar3 = &UNK_1103e0f88;
        }
        else {
          if (lVar1 != 7) goto LAB_101588134;
          pcVar5 = *(code **)(param_3 + 0x198);
          FUN_101596204();
          lVar2 = unaff_x20 + 0xc0;
          puVar3 = &UNK_1103e1348;
        }
LAB_101588120:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_101588134:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10158823c; end: 1015883eb;  */

void FUN_10158823c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined1 *puVar4;
  ulong *puVar5;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar6;
  ulong uStack_50;
  undefined1 uStack_48;
  
  puVar5 = &uStack_50;
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (puVar3 = unaff_x20, FUN_1015883ec(), unaff_x21 == 0)) {
    if (unaff_x20[2] != 0) {
      uStack_48 = (undefined1)unaff_x20[3];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[2];
      func_0x000101594294();
      (*pcVar6)(&uStack_50,3,&UNK_1103e0e68,puVar3,param_2,param_3);
    }
    puVar4 = (undefined1 *)(ulong)*(uint *)((long)unaff_x20 + 0x1c);
    if (*(uint *)((long)unaff_x20 + 0x1c) != 0) {
      (**(code **)(param_3 + 0x18))(puVar4,4,param_2,param_3);
    }
    if (unaff_x20[4] != 0) {
      uStack_48 = (undefined1)unaff_x20[5];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[4];
      func_0x0001015942d4();
      (*pcVar6)(&uStack_50,5,&UNK_1103e0ef8,puVar4,param_2,param_3);
      puVar4 = (undefined1 *)puVar5;
    }
    if (unaff_x20[6] != 0) {
      uStack_48 = (undefined1)unaff_x20[7];
      pcVar6 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[6];
      func_0x000101594314();
      (*pcVar6)(&uStack_50,6,&UNK_1103e0f88,puVar4,param_2,param_3);
    }
    FUN_101588498();
    func_0x000100076224(param_1,unaff_x20[8],unaff_x20[9],param_2,param_3);
  }
  return;
}



/* Entry: 1015883ec; end: 101588497;  */

void FUN_1015883ec(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
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
  
  uStack_80 = *(ulong *)(param_1 + 0x80);
  if (uStack_80 >> 0x3c < 0xf) {
    uStack_a8 = *(undefined8 *)(param_1 + 0x58);
    uStack_b0 = *(undefined8 *)(param_1 + 0x50);
    uStack_98 = *(undefined8 *)(param_1 + 0x68);
    uStack_a0 = *(undefined8 *)(param_1 + 0x60);
    uStack_88 = *(undefined8 *)(param_1 + 0x78);
    uStack_90 = *(undefined8 *)(param_1 + 0x70);
    uStack_70 = *(undefined8 *)(param_1 + 0x90);
    uStack_78 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    uStack_68 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0xb0);
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_48 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101595f10();
    (*pcVar1)(&uStack_b0,2,&UNK_1103e1000,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101588498; end: 101588523;  */

void FUN_101588498(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0xd8);
  if (lStack_58 != 0) {
    uStack_68 = *(undefined8 *)(param_1 + 200);
    uStack_70 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    uStack_48 = *(undefined8 *)(param_1 + 0xe8);
    uStack_50 = *(undefined8 *)(param_1 + 0xe0);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_101596204();
    (*pcVar1)(&uStack_70,7,&UNK_1103e1348,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101588524; end: 1015885af;  */

void FUN_101588524(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = 1;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  param_1[9] = 0xc000000000000000;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0xf000000000000000;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1d] = 0;
  return;
}



/* Entry: 1015885b0; end: 1015885df;  */

undefined1  [16] FUN_1015885b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                      *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Entry: 1015885e0; end: 101588613;  */

void FUN_1015885e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Entry: 101588614; end: 101588627;  */

undefined1  [16] FUN_101588614(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x101588624;
  return auVar1;
}



/* Entry: 101588628; end: 10158863b;  */

void FUN_101588628(void)

{
  FUN_101588098();
  return;
}



/* Entry: 10158863c; end: 1015886a3;  */

void FUN_10158863c(void)

{
  FUN_10158823c();
  return;
}



/* Entry: 1015886a4; end: 1015886a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015886a4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015886a8; end: 1015886df;  */

uint FUN_1015886a8(long param_1,long param_2)

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
  func_0x00010159f234();
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



/* Entry: 1015886e0; end: 10158878f;  */

uint FUN_1015886e0(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_48 = param_1[0x19];
  uStack_50 = param_1[0x18];
  uStack_38 = param_1[0x1b];
  uStack_40 = param_1[0x1a];
  uStack_28 = param_1[0x1d];
  uStack_30 = param_1[0x1c];
  uStack_88 = param_1[0x11];
  uStack_90 = param_1[0x10];
  uStack_78 = param_1[0x13];
  uStack_80 = param_1[0x12];
  uStack_68 = param_1[0x15];
  uStack_70 = param_1[0x14];
  uStack_58 = param_1[0x17];
  uStack_60 = param_1[0x16];
  uStack_c8 = param_1[9];
  uStack_d0 = param_1[8];
  uStack_b8 = param_1[0xb];
  uStack_c0 = param_1[10];
  uStack_a8 = param_1[0xd];
  uStack_b0 = param_1[0xc];
  uStack_98 = param_1[0xf];
  uStack_a0 = param_1[0xe];
  uStack_108 = param_1[1];
  uStack_110 = *param_1;
  uStack_f8 = param_1[3];
  uStack_100 = param_1[2];
  uStack_e8 = param_1[5];
  uStack_f0 = param_1[4];
  uStack_d8 = param_1[7];
  uStack_e0 = param_1[6];
  uStack_138 = unaff_x20[0x19];
  uStack_140 = unaff_x20[0x18];
  uStack_128 = unaff_x20[0x1b];
  uStack_130 = unaff_x20[0x1a];
  uStack_118 = unaff_x20[0x1d];
  uStack_120 = unaff_x20[0x1c];
  uStack_178 = unaff_x20[0x11];
  uStack_180 = unaff_x20[0x10];
  uStack_168 = unaff_x20[0x13];
  uStack_170 = unaff_x20[0x12];
  uStack_158 = unaff_x20[0x15];
  uStack_160 = unaff_x20[0x14];
  uStack_148 = unaff_x20[0x17];
  uStack_150 = unaff_x20[0x16];
  uStack_1b8 = unaff_x20[9];
  uStack_1c0 = unaff_x20[8];
  uStack_1a8 = unaff_x20[0xb];
  uStack_1b0 = unaff_x20[10];
  uStack_198 = unaff_x20[0xd];
  uStack_1a0 = unaff_x20[0xc];
  uStack_188 = unaff_x20[0xf];
  uStack_190 = unaff_x20[0xe];
  uStack_1f8 = unaff_x20[1];
  uStack_200 = *unaff_x20;
  uStack_1e8 = unaff_x20[3];
  uStack_1f0 = unaff_x20[2];
  uStack_1d8 = unaff_x20[5];
  uStack_1e0 = unaff_x20[4];
  uStack_1c8 = unaff_x20[7];
  uStack_1d0 = unaff_x20[6];
  func_0x0001015915dc(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 101588790; end: 10158882f;  */

/* WARNING: Possible PIC construction at 0x0001015887dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015887ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015887e0) */
/* WARNING: Removing unreachable block (ram,0x0001015887f0) */

void FUN_101588790(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db64e8 != -1) {
    func_0x000107c61568(0x112db64e8,FUN_101588050);
  }
  uVar5 = uRam00000001137fffc0;
  uVar4 = uRam00000001137fffb8;
  uVar3 = uRam00000001137fffb0;
  uVar2 = uRam00000001137fffa8;
  uVar1 = uRam00000001137fffa0;
  *param_1 = uRam00000001137fff98;
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



/* Entry: 101588830; end: 10158886b;  */

void FUN_101588830(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db6d98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db6d98,&UNK_10d9641f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10158886c; end: 1015889d7;  */

void FUN_10158886c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_168 [72];
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
  
  uStack_58 = unaff_x20[0x19];
  uStack_60 = unaff_x20[0x18];
  uStack_48 = unaff_x20[0x1b];
  uStack_50 = unaff_x20[0x1a];
  uStack_38 = unaff_x20[0x1d];
  uStack_40 = unaff_x20[0x1c];
  uStack_98 = unaff_x20[0x11];
  uStack_a0 = unaff_x20[0x10];
  uStack_88 = unaff_x20[0x13];
  uStack_90 = unaff_x20[0x12];
  uStack_78 = unaff_x20[0x15];
  uStack_80 = unaff_x20[0x14];
  uStack_68 = unaff_x20[0x17];
  uStack_70 = unaff_x20[0x16];
  uStack_d8 = unaff_x20[9];
  uStack_e0 = unaff_x20[8];
  uStack_c8 = unaff_x20[0xb];
  uStack_d0 = unaff_x20[10];
  uStack_b8 = unaff_x20[0xd];
  uStack_c0 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[0xf];
  uStack_b0 = unaff_x20[0xe];
  uStack_118 = unaff_x20[1];
  uStack_120 = *unaff_x20;
  uStack_108 = unaff_x20[3];
  uStack_110 = unaff_x20[2];
  uStack_f8 = unaff_x20[5];
  uStack_100 = unaff_x20[4];
  uStack_e8 = unaff_x20[7];
  uStack_f0 = unaff_x20[6];
  func_0x000107c6068c(auStack_168,0);
  func_0x000107c5fa50(auStack_168,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015889d8; end: 101588a87;  */

uint FUN_1015889d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_118 = param_1[0x1d];
  uStack_120 = param_1[0x1c];
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_28 = param_2[0x1d];
  uStack_30 = param_2[0x1c];
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  func_0x0001015915dc(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 101588a88; end: 101588acf;  */

void FUN_101588a88(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964540,0x50,2);
  uRam00000001137fffd0 = uStack_38;
  uRam00000001137fffc8 = uStack_40;
  uRam00000001137fffe0 = uStack_28;
  uRam00000001137fffd8 = uStack_30;
  uRam00000001137ffff0 = uStack_18;
  uRam00000001137fffe8 = uStack_20;
  return;
}



/* Entry: 101588ad0; end: 101588b6f;  */

/* WARNING: Possible PIC construction at 0x000101588b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101588b2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101588b20) */
/* WARNING: Removing unreachable block (ram,0x000101588b30) */

void FUN_101588ad0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6510 != -1) {
    func_0x000107c61568(0x112db6510,FUN_101588a88);
  }
  uVar5 = uRam00000001137ffff0;
  uVar4 = uRam00000001137fffe8;
  uVar3 = uRam00000001137fffe0;
  uVar2 = uRam00000001137fffd8;
  uVar1 = uRam00000001137fffd0;
  *param_1 = uRam00000001137fffc8;
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



/* Entry: 101588b70; end: 101588bb7;  */

void FUN_101588b70(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964510,0x2f,2);
  uRam0000000113800000 = uStack_38;
  uRam00000001137ffff8 = uStack_40;
  uRam0000000113800010 = uStack_28;
  uRam0000000113800008 = uStack_30;
  uRam0000000113800020 = uStack_18;
  uRam0000000113800018 = uStack_20;
  return;
}



/* Entry: 101588bb8; end: 101588c57;  */

/* WARNING: Possible PIC construction at 0x000101588c04: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101588c14: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101588c08) */
/* WARNING: Removing unreachable block (ram,0x000101588c18) */

void FUN_101588bb8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6518 != -1) {
    func_0x000107c61568(0x112db6518,FUN_101588b70);
  }
  uVar5 = uRam0000000113800020;
  uVar4 = uRam0000000113800018;
  uVar3 = uRam0000000113800010;
  uVar2 = uRam0000000113800008;
  uVar1 = uRam0000000113800000;
  *param_1 = uRam00000001137ffff8;
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



/* Entry: 101588c58; end: 101588c9f;  */

void FUN_101588c58(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d9644a0,0x69,2);
  uRam0000000113800030 = uStack_38;
  uRam0000000113800028 = uStack_40;
  uRam0000000113800040 = uStack_28;
  uRam0000000113800038 = uStack_30;
  uRam0000000113800050 = uStack_18;
  uRam0000000113800048 = uStack_20;
  return;
}



/* Entry: 101588ca0; end: 101588d3f;  */

/* WARNING: Possible PIC construction at 0x000101588cec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101588cfc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101588cf0) */
/* WARNING: Removing unreachable block (ram,0x000101588d00) */

void FUN_101588ca0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db6520 != -1) {
    func_0x000107c61568(0x112db6520,FUN_101588c58);
  }
  uVar5 = uRam0000000113800050;
  uVar4 = uRam0000000113800048;
  uVar3 = uRam0000000113800040;
  uVar2 = uRam0000000113800038;
  uVar1 = uRam0000000113800030;
  *param_1 = uRam0000000113800028;
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



/* Entry: 101588d40; end: 101588ddb;  */

void FUN_101588d40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (lRam0000000112db64e0 != -1) {
    func_0x000107c61568(0x112db64e0,FUN_101588030);
  }
  uVar2 = uRam00000001137fff90;
  uVar1 = uRam00000001137fff88;
  func_0x000107c61438(uRam00000001137fff90,2);
  func_0x000107c5fb78(0x657053746e6f462e,0xe900000000000063);
  func_0x000107c6142c(uVar2);
  uRam0000000113800058 = uVar1;
  uRam0000000113800060 = uVar2;
  return;
}



/* Entry: 101588ddc; end: 101588e23;  */

void FUN_101588ddc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d964470,0x25,2);
  uRam0000000113800070 = uStack_38;
  uRam0000000113800068 = uStack_40;
  uRam0000000113800080 = uStack_28;
  uRam0000000113800078 = uStack_30;
  uRam0000000113800090 = uStack_18;
  uRam0000000113800088 = uStack_20;
  return;
}



/* Entry: 101588e24; end: 101588f5b;  */

/* WARNING: Removing unreachable block (ram,0x000101588f58) */

void FUN_101588e24(undefined8 param_1,long param_2,long param_3)

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
          (**(code **)(param_3 + 0x18))();
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000101594394();
          lVar2 = unaff_x20 + 8;
          puVar3 = &UNK_1103e10a8;
          goto LAB_101588eac;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010159f674();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_110734b68;
        }
        else {
          if (lVar1 != 4) goto LAB_101588ec0;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x0001015943d4();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_1103e1138;
        }
LAB_101588eac:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_101588ec0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 101588f5c; end: 10158907b;  */

void FUN_101588f5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  uVar1 = param_1;
  if (*unaff_x20 != 0) {
    uVar1 = 1;
    (**(code **)(param_3 + 8))(1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 2) != 0) {
    uStack_48 = (undefined1)unaff_x20[4];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = *(long *)(unaff_x20 + 2);
    func_0x000101594394();
    (*pcVar3)(&lStack_50,2,&UNK_1103e10a8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  piVar2 = unaff_x20;
  FUN_10158907c();
  if (unaff_x21 == 0) {
    if (*(long *)(unaff_x20 + 6) != 0) {
      uStack_48 = (undefined1)unaff_x20[8];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 6);
      func_0x0001015943d4();
      (*pcVar3)(&lStack_50,4,&UNK_1103e1138,piVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10158907c; end: 101589117;  */

void FUN_10158907c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  ulong uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_68 = *(ulong *)(param_1 + 0x50);
  if (uStack_68 >> 0x3c < 0xf) {
    uStack_78 = *(undefined8 *)(param_1 + 0x40);
    uStack_80 = *(undefined8 *)(param_1 + 0x38);
    uStack_70 = *(undefined8 *)(param_1 + 0x48);
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010159f674();
    (*pcVar1)(&uStack_80,3,&UNK_110734b68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 101589118; end: 10158917b;  */

void FUN_101589118(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  *(undefined8 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 10) = 0;
  *(undefined8 *)(param_1 + 0xe) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x12) = 0;
  *(undefined8 *)(param_1 + 0x14) = 0xf000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x1a) = 0;
  *(undefined8 *)(param_1 + 0x16) = 0;
  return;
}



/* Entry: 10158917c; end: 1015891ab;  */

undefined1  [16] FUN_10158917c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1015891ac; end: 1015891df;  */

void FUN_1015891ac(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1015891e0; end: 1015891f3;  */

undefined1  [16] FUN_1015891e0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1015891f0;
  return auVar1;
}



/* Entry: 1015891f4; end: 101589207;  */

void FUN_1015891f4(void)

{
  FUN_101588e24();
  return;
}



/* Entry: 101589208; end: 10158924f;  */

void FUN_101589208(void)

{
  FUN_101588f5c();
  return;
}



/* Entry: 101589250; end: 101589253;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101589250(undefined8 *param_1,undefined8 param_2,long param_3)

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



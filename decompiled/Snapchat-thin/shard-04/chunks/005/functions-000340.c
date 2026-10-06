/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10359cc48; end: 10359ccf7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359cc48(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
                    ulong param_6)

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
  
  if (param_3 != param_6) {
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(param_6);
    uVar17 = param_3;
    FUN_10359ccf8(param_3,param_6);
    func_0x000107c61574(param_6);
    func_0x000107c61574(param_3);
    if ((uVar17 & 1) == 0) {
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
    uVar4 = (uint)((ulong)param_2 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_5 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_1;
    pbVar11 = param_2;
    if ((ulong)param_2 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_1 != (byte *)0x0) || (param_2 != (byte *)0xc000000000000000)) ||
          (param_5 >> 0x3e < 3)) || ((uVar17 = 0, param_4 != 0 || (param_5 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_2 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_1 >> 0x20);
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
        uVar19 = param_5 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_4 >> 0x20);
      if (SBORROW4(iVar16,(int)param_4)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_4)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
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
        uVar19 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
        if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
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
            *(char *)((long)register0x00000008 + -0x70) = (char)param_1;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_1 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_1 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_1 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_1 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_1 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_1 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_1 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_2 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_2 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_1 >> 0x20) - (long)unaff_x25);
          if ((long)param_1 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_2;
          if (param_1 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_1 = (byte *)0x0;
          }
          else {
            pbVar11 = param_1;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_1 = param_1 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_1;
            if (param_1 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_1;
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
          lVar21 = *(long *)(param_1 + 0x10);
          unaff_x24 = *(byte **)(param_1 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_1;
          if (param_1 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_1 = param_1 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_1;
          unaff_x25 = param_2;
          if (param_1 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_1;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_2 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_1,pbVar11,param_4
                            ,param_5);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_5;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
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
    pbVar10 = *(byte **)pbVar8;
    param_1 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_2 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_1;
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
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 == pbVar13) && (param_2 == pbVar14)) {
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
        if ((pbVar10 == pbVar13) && (param_1 == pbVar14)) {
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
        if (((pbVar10 == pbVar13) && (param_1 == pbVar14)) &&
           (pbVar10 = param_2, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_2 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
      if (param_2 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_1;
        pbVar12 = param_2;
        if ((param_1 != pbVar13) || (param_2 != pbVar14)) goto code_r0x000107c605b8;
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
      if ((((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_2 == (byte *)0x0) {
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
                                                                  CONCAT11(bVar24 | auVar39[1],
                                                                           bVar23 | auVar39[0]))))))
                    ) == 0 && *(long *)pbVar11 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar10 == (byte *)0x1) &&
         (((pbVar20 == (byte *)0x0 && param_1 == (byte *)0x0) && param_2 == (byte *)0x0) &&
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
                                                                     CONCAT11(bVar24 | auVar39[1],
                                                                              bVar23 | auVar39[0])))
                                                  ))));
      goto joined_r0x000100e26620;
    }
    if (pbVar11[0x28] != 5) {
      return (byte *)0x0;
    }
    param_4 = *(long *)(pbVar11 + 8);
    param_5 = *(ulong *)(pbVar11 + 0x10);
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



/* Entry: 10359ccf8; end: 10359dc57;  */

undefined8 FUN_10359ccf8(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  undefined1 auStack_288 [24];
  undefined1 auStack_270 [24];
  undefined1 auStack_258 [24];
  undefined1 auStack_240 [24];
  undefined1 auStack_228 [24];
  undefined1 auStack_210 [24];
  undefined1 auStack_1f8 [24];
  undefined1 auStack_1e0 [24];
  undefined1 auStack_1c8 [24];
  undefined1 auStack_1b0 [24];
  undefined1 auStack_198 [24];
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
  undefined1 auStack_150 [24];
  undefined1 auStack_138 [24];
  undefined1 auStack_120 [24];
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  func_0x000107c61428(param_1 + 0x10,auStack_90,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_a8,0,0);
  lVar3 = *(long *)(param_1 + 0x10);
  uVar1 = *(ulong *)(param_1 + 0x18);
  uVar6 = *(ulong *)(param_1 + 0x20);
  lVar4 = *(long *)(param_2 + 0x10);
  uVar8 = *(ulong *)(param_2 + 0x18);
  uVar11 = *(ulong *)(param_2 + 0x20);
  uVar2 = uVar6;
  uVar9 = uVar1;
  lVar10 = lVar3;
  if (uVar6 >> 0x3c < 0xf) {
    if (uVar11 >> 0x3c < 0xf) {
      func_0x000100d560f8(lVar3,uVar1,uVar6);
      if (lVar3 == lVar4) {
        func_0x000100d560f8(lVar3,uVar8,uVar11);
        uVar2 = uVar1;
        func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
        func_0x000100d56114(lVar3,uVar8,uVar11);
        if ((uVar2 & 1) == 0) goto LAB_10359d604;
        goto LAB_10359cd94;
      }
LAB_10359d5d8:
      func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359d5e8:
      func_0x000100d56114(lVar4,uVar8,uVar11);
      goto LAB_10359d604;
    }
  }
  else if (0xe < uVar11 >> 0x3c) {
    func_0x000100d560f8(lVar3,uVar1,uVar6);
    func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359cd94:
    func_0x000100d56114(lVar3,uVar1,uVar6);
    func_0x000107c61428(param_1 + 0x28,auStack_c0,0,0);
    func_0x000107c61428(param_2 + 0x28,auStack_d8,0,0);
    lVar3 = *(long *)(param_1 + 0x28);
    uVar1 = *(ulong *)(param_1 + 0x30);
    uVar6 = *(ulong *)(param_1 + 0x38);
    lVar4 = *(long *)(param_2 + 0x28);
    uVar8 = *(ulong *)(param_2 + 0x30);
    uVar11 = *(ulong *)(param_2 + 0x38);
    uVar2 = uVar6;
    uVar9 = uVar1;
    lVar10 = lVar3;
    if (uVar6 >> 0x3c < 0xf) {
      if (uVar11 >> 0x3c < 0xf) {
        func_0x000100d560f8(lVar3,uVar1,uVar6);
        if (lVar3 != lVar4) goto LAB_10359d5d8;
        func_0x000100d560f8(lVar3,uVar8,uVar11);
        uVar2 = uVar1;
        func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
        func_0x000100d56114(lVar3,uVar8,uVar11);
        if ((uVar2 & 1) == 0) goto LAB_10359d604;
        goto LAB_10359ce14;
      }
    }
    else if (0xe < uVar11 >> 0x3c) {
      func_0x000100d560f8(lVar3,uVar1,uVar6);
      func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359ce14:
      func_0x000100d56114(lVar3,uVar1,uVar6);
      func_0x000107c61428(param_1 + 0x40,auStack_f0,0,0);
      func_0x000107c61428(param_2 + 0x40,auStack_108,0,0);
      lVar3 = *(long *)(param_1 + 0x40);
      uVar1 = *(ulong *)(param_1 + 0x48);
      uVar6 = *(ulong *)(param_1 + 0x50);
      lVar4 = *(long *)(param_2 + 0x40);
      uVar8 = *(ulong *)(param_2 + 0x48);
      uVar11 = *(ulong *)(param_2 + 0x50);
      uVar2 = uVar6;
      uVar9 = uVar1;
      lVar10 = lVar3;
      if (uVar6 >> 0x3c < 0xf) {
        if (uVar11 >> 0x3c < 0xf) {
          func_0x000100d560f8(lVar3,uVar1,uVar6);
          if (lVar3 != lVar4) goto LAB_10359d5d8;
          func_0x000100d560f8(lVar3,uVar8,uVar11);
          uVar2 = uVar1;
          func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
          func_0x000100d56114(lVar3,uVar8,uVar11);
          if ((uVar2 & 1) == 0) goto LAB_10359d604;
          goto LAB_10359ce94;
        }
      }
      else if (0xe < uVar11 >> 0x3c) {
        func_0x000100d560f8(lVar3,uVar1,uVar6);
        func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359ce94:
        func_0x000100d56114(lVar3,uVar1,uVar6);
        func_0x000107c61428(param_1 + 0x58,auStack_120,0,0);
        func_0x000107c61428(param_2 + 0x58,auStack_138,0,0);
        lVar3 = *(long *)(param_1 + 0x58);
        uVar1 = *(ulong *)(param_1 + 0x60);
        uVar6 = *(ulong *)(param_1 + 0x68);
        lVar4 = *(long *)(param_2 + 0x58);
        uVar8 = *(ulong *)(param_2 + 0x60);
        uVar11 = *(ulong *)(param_2 + 0x68);
        uVar2 = uVar6;
        uVar9 = uVar1;
        lVar10 = lVar3;
        if (uVar6 >> 0x3c < 0xf) {
          if (uVar11 >> 0x3c < 0xf) {
            func_0x000100d560f8(lVar3,uVar1,uVar6);
            if (lVar3 != lVar4) goto LAB_10359d5d8;
            func_0x000100d560f8(lVar3,uVar8,uVar11);
            uVar2 = uVar1;
            func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
            func_0x000100d56114(lVar3,uVar8,uVar11);
            if ((uVar2 & 1) == 0) goto LAB_10359d604;
            goto LAB_10359cf14;
          }
        }
        else if (0xe < uVar11 >> 0x3c) {
          func_0x000100d560f8(lVar3,uVar1,uVar6);
          func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359cf14:
          func_0x000100d56114(lVar3,uVar1,uVar6);
          func_0x000107c61428(param_1 + 0x70,auStack_150,0,0);
          func_0x000107c61428(param_2 + 0x70,auStack_168,0,0);
          uVar1 = *(ulong *)(param_1 + 0x70);
          uVar6 = *(ulong *)(param_1 + 0x78);
          uVar7 = *(undefined8 *)(param_1 + 0x80);
          uVar8 = *(ulong *)(param_2 + 0x70);
          uVar11 = *(ulong *)(param_2 + 0x78);
          uVar12 = *(undefined8 *)(param_2 + 0x80);
          if ((uVar1 & 0xff) == 2) {
            if ((uVar8 & 0xff) != 2) {
LAB_10359d45c:
              func_0x000101541464(uVar1,uVar6,uVar7);
              func_0x000101541464(uVar8,uVar11,uVar12);
              func_0x000101556278(uVar1,uVar6,uVar7);
              uVar1 = uVar8;
              uVar6 = uVar11;
              uVar7 = uVar12;
LAB_10359d570:
              func_0x000101556278(uVar1,uVar6,uVar7);
              return 0;
            }
            func_0x000101541464(uVar1,uVar6,uVar7);
            func_0x000101541464(uVar8,uVar11,uVar12);
          }
          else {
            if ((uVar8 & 0xff) == 2) goto LAB_10359d45c;
            func_0x000101541464(uVar1,uVar6,uVar7);
            func_0x000101541464(uVar8,uVar11,uVar12);
            if ((((uint)uVar8 ^ (uint)uVar1) & 1) != 0) {
              func_0x000101556278(uVar8,uVar11,uVar12);
              goto LAB_10359d570;
            }
            uVar2 = uVar6;
            func_0x000100e25fcc(uVar6,uVar7,uVar11,uVar12);
            func_0x000101556278(uVar8,uVar11,uVar12);
            if ((uVar2 & 1) == 0) goto LAB_10359d570;
          }
          func_0x000101556278(uVar1,uVar6,uVar7);
          func_0x000107c61428(param_1 + 0x88,auStack_180,0,0);
          func_0x000107c61428(param_2 + 0x88,auStack_198,0,0);
          lVar3 = *(long *)(param_1 + 0x88);
          uVar1 = *(ulong *)(param_1 + 0x90);
          uVar6 = *(ulong *)(param_1 + 0x98);
          lVar4 = *(long *)(param_2 + 0x88);
          uVar8 = *(ulong *)(param_2 + 0x90);
          uVar11 = *(ulong *)(param_2 + 0x98);
          uVar2 = uVar6;
          uVar9 = uVar1;
          lVar10 = lVar3;
          if (uVar6 >> 0x3c < 0xf) {
            if (uVar11 >> 0x3c < 0xf) {
              func_0x000100d560f8(lVar3,uVar1,uVar6);
              if (lVar3 != lVar4) goto LAB_10359d5d8;
              func_0x000100d560f8(lVar3,uVar8,uVar11);
              uVar2 = uVar1;
              func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
              func_0x000100d56114(lVar3,uVar8,uVar11);
              if ((uVar2 & 1) == 0) goto LAB_10359d604;
              goto LAB_10359d014;
            }
          }
          else if (0xe < uVar11 >> 0x3c) {
            func_0x000100d560f8(lVar3,uVar1,uVar6);
            func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359d014:
            func_0x000100d56114(lVar3,uVar1,uVar6);
            func_0x000107c61428(param_1 + 0xa0,auStack_1b0,0,0);
            func_0x000107c61428(param_2 + 0xa0,auStack_1c8,0,0);
            lVar3 = *(long *)(param_1 + 0xa0);
            uVar1 = *(ulong *)(param_1 + 0xa8);
            uVar6 = *(ulong *)(param_1 + 0xb0);
            lVar4 = *(long *)(param_2 + 0xa0);
            uVar8 = *(ulong *)(param_2 + 0xa8);
            uVar11 = *(ulong *)(param_2 + 0xb0);
            uVar2 = uVar6;
            uVar9 = uVar1;
            lVar10 = lVar3;
            if (uVar6 >> 0x3c < 0xf) {
              if (uVar11 >> 0x3c < 0xf) {
                func_0x000100d560f8(lVar3,uVar1,uVar6);
                if (lVar3 != lVar4) goto LAB_10359d5d8;
                func_0x000100d560f8(lVar3,uVar8,uVar11);
                uVar2 = uVar1;
                func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
                func_0x000100d56114(lVar3,uVar8,uVar11);
                if ((uVar2 & 1) == 0) goto LAB_10359d604;
                goto LAB_10359d094;
              }
            }
            else if (0xe < uVar11 >> 0x3c) {
              func_0x000100d560f8(lVar3,uVar1,uVar6);
              func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359d094:
              func_0x000100d56114(lVar3,uVar1,uVar6);
              func_0x000107c61428(param_1 + 0xb8,auStack_1e0,0,0);
              func_0x000107c61428(param_2 + 0xb8,auStack_1f8,0,0);
              uVar7 = *(undefined8 *)(param_1 + 0xb8);
              lVar3 = *(long *)(param_1 + 0xc0);
              uVar1 = *(ulong *)(param_1 + 200);
              uVar6 = *(ulong *)(param_1 + 0xd0);
              uVar12 = *(undefined8 *)(param_2 + 0xb8);
              lVar4 = *(long *)(param_2 + 0xc0);
              uVar8 = *(ulong *)(param_2 + 200);
              uVar11 = *(ulong *)(param_2 + 0xd0);
              if (uVar6 >> 0x3c < 0xf) {
                if (uVar11 >> 0x3c < 0xf) {
                  if ((((float)uVar7 == (float)uVar12) &&
                      ((float)((ulong)uVar7 >> 0x20) == (float)((ulong)uVar12 >> 0x20))) &&
                     ((float)lVar3 == (float)lVar4)) {
                    func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                    func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
                    if ((float)((ulong)lVar3 >> 0x20) == (float)((ulong)lVar4 >> 0x20)) {
                      uVar2 = uVar1;
                      func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
                      func_0x000100d560dc(uVar12,lVar4,uVar8,uVar11);
                      uVar12 = uVar7;
                      lVar4 = lVar3;
                      uVar8 = uVar1;
                      uVar11 = uVar6;
                      if ((uVar2 & 1) == 0) goto LAB_10359d894;
                      goto LAB_10359d11c;
                    }
                  }
                  else {
                    func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                    func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
                  }
LAB_10359d878:
                  func_0x000100d560dc(uVar12,lVar4,uVar8,uVar11);
                  uVar12 = uVar7;
                  lVar4 = lVar3;
                  uVar8 = uVar1;
                  uVar11 = uVar6;
                  goto LAB_10359d894;
                }
              }
              else if (0xe < uVar11 >> 0x3c) {
                func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
LAB_10359d11c:
                func_0x000100d560dc(uVar7,lVar3,uVar1,uVar6);
                func_0x000107c61428(param_1 + 0xd8,auStack_210,0,0);
                func_0x000107c61428(param_2 + 0xd8,auStack_228,0,0);
                uVar7 = *(undefined8 *)(param_1 + 0xd8);
                lVar3 = *(long *)(param_1 + 0xe0);
                uVar1 = *(ulong *)(param_1 + 0xe8);
                uVar6 = *(ulong *)(param_1 + 0xf0);
                uVar12 = *(undefined8 *)(param_2 + 0xd8);
                lVar4 = *(long *)(param_2 + 0xe0);
                uVar8 = *(ulong *)(param_2 + 0xe8);
                uVar11 = *(ulong *)(param_2 + 0xf0);
                if (uVar6 >> 0x3c < 0xf) {
                  if (uVar11 >> 0x3c < 0xf) {
                    if (((float)uVar7 == (float)uVar12) &&
                       ((float)((ulong)uVar7 >> 0x20) == (float)((ulong)uVar12 >> 0x20))) {
                      func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                      if (lVar3 == lVar4) {
                        func_0x000100d560c0(uVar12,lVar3,uVar8,uVar11);
                        uVar2 = uVar1;
                        func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
                        func_0x000100d560dc(uVar12,lVar3,uVar8,uVar11);
                        uVar12 = uVar7;
                        lVar4 = lVar3;
                        uVar8 = uVar1;
                        uVar11 = uVar6;
                        if ((uVar2 & 1) == 0) goto LAB_10359d894;
                        goto LAB_10359d1a8;
                      }
                    }
                    else {
                      func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                    }
                    func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
                    goto LAB_10359d878;
                  }
                }
                else if (0xe < uVar11 >> 0x3c) {
                  func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                  func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
LAB_10359d1a8:
                  func_0x000100d560dc(uVar7,lVar3,uVar1,uVar6);
                  func_0x000107c61428(param_1 + 0xf8,auStack_240,0,0);
                  uVar8 = *(ulong *)(param_1 + 0xf8);
                  func_0x000107c61428(param_2 + 0xf8,auStack_258,0,0);
                  uVar7 = *(undefined8 *)(param_2 + 0xf8);
                  func_0x000107c61434(uVar8);
                  func_0x000107c61434(uVar7);
                  uVar1 = uVar8;
                  FUN_10359f120(uVar8,uVar7);
                  func_0x000107c6142c(uVar8);
                  func_0x000107c6142c(uVar7);
                  if ((uVar1 & 1) == 0) {
                    return 0;
                  }
                  func_0x000107c61428(param_1 + 0x100,auStack_270,0,0);
                  func_0x000107c61428(param_2 + 0x100,auStack_288,0,0);
                  lVar3 = *(long *)(param_1 + 0x100);
                  uVar1 = *(ulong *)(param_1 + 0x108);
                  uVar6 = *(ulong *)(param_1 + 0x110);
                  lVar4 = *(long *)(param_2 + 0x100);
                  uVar8 = *(ulong *)(param_2 + 0x108);
                  uVar11 = *(ulong *)(param_2 + 0x110);
                  uVar2 = uVar6;
                  uVar9 = uVar1;
                  lVar10 = lVar3;
                  if (uVar6 >> 0x3c < 0xf) {
                    if (uVar11 >> 0x3c < 0xf) {
                      func_0x000100d560f8(lVar3,uVar1,uVar6);
                      func_0x000100d560f8(lVar4,uVar8,uVar11);
                      if ((float)lVar3 != (float)lVar4) goto LAB_10359d5e8;
                      uVar2 = uVar1;
                      func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
                      func_0x000100d56114(lVar4,uVar8,uVar11);
                      if ((uVar2 & 1) == 0) goto LAB_10359d604;
                      goto LAB_10359d904;
                    }
                  }
                  else if (0xe < uVar11 >> 0x3c) {
                    func_0x000100d560f8(lVar3,uVar1,uVar6);
                    func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359d904:
                    func_0x000100d56114(lVar3,uVar1,uVar6);
                    func_0x000107c61428(param_1 + 0x118,auStack_2a0,0,0);
                    func_0x000107c61428(param_2 + 0x118,auStack_2b8,0,0);
                    uVar1 = *(ulong *)(param_1 + 0x118);
                    lVar3 = *(long *)(param_1 + 0x120);
                    uVar7 = *(undefined8 *)(param_1 + 0x128);
                    uVar6 = *(ulong *)(param_1 + 0x130);
                    uVar5 = *(undefined8 *)(param_1 + 0x138);
                    uVar8 = *(ulong *)(param_2 + 0x118);
                    lVar4 = *(long *)(param_2 + 0x120);
                    uVar12 = *(undefined8 *)(param_2 + 0x128);
                    uVar11 = *(ulong *)(param_2 + 0x130);
                    uVar13 = *(undefined8 *)(param_2 + 0x138);
                    if (lVar3 == 0) {
                      if (lVar4 == 0) {
                        FUN_10359f574(uVar1,0,uVar7,uVar6,uVar5);
                        FUN_10359f574(uVar8,0,uVar12,uVar11,uVar13);
LAB_10359da8c:
                        func_0x00010359f5ac(uVar1,lVar3,uVar7,uVar6,uVar5);
                        func_0x000107c61428(param_1 + 0x140,auStack_2d0,0,0);
                        func_0x000107c61428(param_2 + 0x140,auStack_2e8,0,0);
                        lVar3 = *(long *)(param_1 + 0x140);
                        uVar1 = *(ulong *)(param_1 + 0x148);
                        uVar6 = *(ulong *)(param_1 + 0x150);
                        lVar4 = *(long *)(param_2 + 0x140);
                        uVar8 = *(ulong *)(param_2 + 0x148);
                        uVar11 = *(ulong *)(param_2 + 0x150);
                        if (uVar6 >> 0x3c < 0xf) {
                          if (uVar11 >> 0x3c < 0xf) {
                            func_0x000100d560f8(lVar3,uVar1,uVar6);
                            if (lVar3 == lVar4) {
                              func_0x000100d560f8(lVar3,uVar8,uVar11);
                              uVar2 = uVar1;
                              func_0x000100e25fcc(uVar1,uVar6,uVar8,uVar11);
                              func_0x000100d56114(lVar3,uVar8,uVar11);
                              if ((uVar2 & 1) != 0) goto LAB_10359db10;
                            }
                            else {
                              func_0x000100d560f8(lVar4,uVar8,uVar11);
                              func_0x000100d56114(lVar4,uVar8,uVar11);
                            }
                            goto LAB_10359d604;
                          }
                        }
                        else if (0xe < uVar11 >> 0x3c) {
                          func_0x000100d560f8(lVar3,uVar1,uVar6);
                          func_0x000100d560f8(lVar4,uVar8,uVar11);
LAB_10359db10:
                          func_0x000100d56114(lVar3,uVar1,uVar6);
                          return 1;
                        }
                        func_0x000100d560f8(lVar3,uVar1,uVar6);
                        func_0x000100d560f8(lVar4,uVar8,uVar11);
                        func_0x000100d56114(lVar3,uVar1,uVar6);
                        lVar3 = lVar4;
                        uVar1 = uVar8;
                        uVar6 = uVar11;
                        goto LAB_10359d604;
                      }
                    }
                    else if (lVar4 != 0) {
                      if (((uVar1 == uVar8) && (lVar3 == lVar4)) ||
                         (uVar2 = uVar1, func_0x000107c605b8(uVar1,lVar3,uVar8,lVar4,0),
                         (uVar2 & 1) != 0)) {
                        FUN_10359f574(uVar1,lVar3,uVar7,uVar6,uVar5);
                        FUN_10359f574(uVar8,lVar4,uVar12,uVar11,uVar13);
                        if ((int)uVar7 == (int)uVar12) {
                          uVar2 = uVar6;
                          func_0x000100e25fcc(uVar6,uVar5,uVar11,uVar13);
                          func_0x00010359f5ac(uVar8,lVar4,uVar12,uVar11,uVar13);
                          if ((uVar2 & 1) == 0) goto LAB_10359dbc8;
                          goto LAB_10359da8c;
                        }
                      }
                      else {
                        FUN_10359f574(uVar1,lVar3,uVar7,uVar6,uVar5);
                        FUN_10359f574(uVar8,lVar4,uVar12,uVar11,uVar13);
                      }
                      func_0x00010359f5ac(uVar8,lVar4,uVar12,uVar11,uVar13);
                      goto LAB_10359dbc8;
                    }
                    FUN_10359f574(uVar1,lVar3,uVar7,uVar6,uVar5);
                    FUN_10359f574(uVar8,lVar4,uVar12,uVar11,uVar13);
                    func_0x00010359f5ac(uVar1,lVar3,uVar7,uVar6,uVar5);
                    uVar1 = uVar8;
                    lVar3 = lVar4;
                    uVar7 = uVar12;
                    uVar6 = uVar11;
                    uVar5 = uVar13;
LAB_10359dbc8:
                    func_0x00010359f5ac(uVar1,lVar3,uVar7,uVar6,uVar5);
                    return 0;
                  }
                  goto LAB_10359d3bc;
                }
                func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
                func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
                func_0x000100d560dc(uVar7,lVar3,uVar1,uVar6);
                goto LAB_10359d894;
              }
              func_0x000100d560c0(uVar7,lVar3,uVar1,uVar6);
              func_0x000100d560c0(uVar12,lVar4,uVar8,uVar11);
              func_0x000100d560dc(uVar7,lVar3,uVar1,uVar6);
LAB_10359d894:
              func_0x000100d560dc(uVar12,lVar4,uVar8,uVar11);
              return 0;
            }
          }
        }
      }
    }
  }
LAB_10359d3bc:
  lVar3 = lVar4;
  uVar1 = uVar8;
  uVar6 = uVar11;
  func_0x000100d560f8(lVar10,uVar9,uVar2);
  func_0x000100d560f8(lVar3,uVar1,uVar6);
  func_0x000100d56114(lVar10,uVar9,uVar2);
LAB_10359d604:
  func_0x000100d56114(lVar3,uVar1,uVar6);
  return 0;
}



/* Entry: 10359dc58; end: 10359dcb7;  */

void FUN_10359dc58(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f7ab68 != -1) {
    func_0x000107c61568(0x112f7ab68,FUN_10359b04c);
  }
  uVar1 = uRam0000000112f7ab70;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10359dcb8; end: 10359dcdb;  */

undefined1  [16] FUN_10359dcb8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155e60;
  auVar1._0_8_ = 0xd00000000000002c;
  return auVar1;
}



/* Entry: 10359dcdc; end: 10359dd0b;  */

undefined1  [16] FUN_10359dcdc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10359dd0c; end: 10359dd3f;  */

void FUN_10359dd0c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10359dd40; end: 10359dd53;  */

undefined8 FUN_10359dd40(void)

{
  return 0x10359dd50;
}



/* Entry: 10359dd54; end: 10359dd8b;  */

void FUN_10359dd54(void)

{
  FUN_10359b804();
  return;
}



/* Entry: 10359dd8c; end: 10359dd8f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10359dd8c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10359dd90; end: 10359ddc7;  */

uint FUN_10359dd90(long param_1,long param_2)

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
  func_0x0001035a01a4();
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



/* Entry: 10359ddc8; end: 10359de6f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359ddc8(long *param_1)

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
  ulong uVar26;
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
    FUN_10359ccf8(uVar25,uVar26);
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



/* Entry: 10359de70; end: 10359df0f;  */

/* WARNING: Possible PIC construction at 0x00010359debc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359decc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010359dec0) */
/* WARNING: Removing unreachable block (ram,0x00010359ded0) */

void FUN_10359de70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ab78 != -1) {
    func_0x000107c61568(0x112f7ab78,FUN_10359b004);
  }
  uVar5 = uRam0000000113808d88;
  uVar4 = uRam0000000113808d80;
  uVar3 = uRam0000000113808d78;
  uVar2 = uRam0000000113808d70;
  uVar1 = uRam0000000113808d68;
  *param_1 = uRam0000000113808d60;
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



/* Entry: 10359df10; end: 10359df4b;  */

void FUN_10359df10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7ae98;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7ae98,&UNK_10dbe00d0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10359df4c; end: 10359e04f;  */

void FUN_10359df4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  uStack_50 = *unaff_x20;
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10359e050; end: 10359e0f7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359e050(undefined8 *param_1,long *param_2)

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
  ulong uVar26;
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
    FUN_10359ccf8(uVar25,uVar26);
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



/* Entry: 10359e0f8; end: 10359e117;  */

void FUN_10359e0f8(void)

{
  func_0x000107c5fb78(0x656d6172462e,0xe600000000000000);
  uRam0000000113808d90 = 0xd00000000000002c;
  uRam0000000113808d98 = 0x800000010f155e60;
  return;
}



/* Entry: 10359e118; end: 10359e15f;  */

void FUN_10359e118(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe0110,0x48,2);
  uRam0000000113808da8 = uStack_38;
  uRam0000000113808da0 = uStack_40;
  uRam0000000113808db8 = uStack_28;
  uRam0000000113808db0 = uStack_30;
  uRam0000000113808dc8 = uStack_18;
  uRam0000000113808dc0 = uStack_20;
  return;
}



/* Entry: 10359e160; end: 10359e22b;  */

void FUN_10359e160(undefined8 param_1,long param_2,long param_3)

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
          pcVar3 = *(code **)(param_3 + 0x18);
          goto LAB_10359e1f8;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x18);
          goto LAB_10359e1f8;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar3 = *(code **)(param_3 + 0x18);
        }
        else {
          if (lVar1 != 4) goto LAB_10359e208;
          pcVar3 = *(code **)(param_3 + 0x18);
        }
LAB_10359e1f8:
        (*pcVar3)();
      }
LAB_10359e208:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 10359e22c; end: 10359e2ff;  */

void FUN_10359e22c(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if (((((*unaff_x20 == 0) || ((**(code **)(param_3 + 8))(1,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)))) &&
      ((unaff_x20[2] == 0 || ((**(code **)(param_3 + 8))(3,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[3] == 0 || ((**(code **)(param_3 + 8))(4,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10359e300; end: 10359e34b;  */

void FUN_10359e300(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 10359e34c; end: 10359e373;  */

void FUN_10359e34c(void)

{
  FUN_10359e160();
  return;
}



/* Entry: 10359e374; end: 10359e3ab;  */

uint FUN_10359e374(long param_1,long param_2)

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
  func_0x0001035a0164();
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



/* Entry: 10359e3ac; end: 10359e3df;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359e3ac(undefined8 *param_1)

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
  undefined1 (*unaff_x20) [16];
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
  
  auVar47 = *unaff_x20;
  sVar4 = -(ushort)(auVar47._4_4_ == (float)((ulong)*param_1 >> 0x20));
  sVar5 = -(ushort)(auVar47._8_4_ == (float)param_1[1]);
  sVar6 = -(ushort)(auVar47._12_4_ == (float)((ulong)param_1[1] >> 0x20));
  uVar7 = NEON_uminv(CONCAT17((char)((ushort)sVar6 >> 8),
                              CONCAT16((char)sVar6,
                                       CONCAT15((char)((ushort)sVar5 >> 8),
                                                CONCAT14((char)sVar5,
                                                         CONCAT13((char)((ushort)sVar4 >> 8),
                                                                  CONCAT12((char)sVar4,
                                                                           -(ushort)(auVar47._0_4_
                                                                                    == (float)*
                                                  param_1))))))),2);
  if ((uVar7 & 1) == 0) {
    return (byte *)0x0;
  }
  pbVar14 = *(byte **)unaff_x20[1];
  pbVar29 = *(byte **)(unaff_x20[1] + 8);
  lVar28 = param_1[2];
  uVar20 = param_1[3];
  puVar11 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar11 + -0x50) = unaff_x26;
    *(byte **)(puVar11 + -0x48) = unaff_x25;
    *(byte **)(puVar11 + -0x40) = unaff_x24;
    *(byte **)(puVar11 + -0x38) = unaff_x23;
    *(ulong *)(puVar11 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar11 + -0x28) = unaff_x21;
    *(undefined1 (**) [16])(puVar11 + -0x20) = unaff_x20;
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
code_r0x000100e26128:
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
      if (1 < uVar9 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar25 == 0) {
        uVar26 = uVar20 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar23 = (int)((ulong)lVar28 >> 0x20);
      if (SBORROW4(iVar23,(int)lVar28)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar10)();
      }
      if (uVar24 == (long)(iVar23 - (int)lVar28)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar25 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar25 == 2) {
        uVar26 = *(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10);
        if (SBORROW8(*(long *)(lVar28 + 0x18),*(long *)(lVar28 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar10)();
        }
code_r0x000100e2608c:
        if (uVar24 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar24 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar11 + -0x71,puVar11 + -0x70);
            pbVar13 = (byte *)(ulong)(byte)puVar11[-0x71];
            goto code_r0x000100e262b0;
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
              goto code_r0x000100e262a4;
            }
          }
          pbVar17 = (byte *)0x0;
        }
        else {
          if (uVar22 != 2) {
            *(undefined8 *)(puVar11 + -0x6a) = 0;
            *(undefined8 *)(puVar11 + -0x70) = 0;
            pbVar17 = puVar11 + -0x70;
            goto code_r0x000100e26260;
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
code_r0x000100e262a4:
        unaff_x20 = (undefined1 (*) [16])((ulong)pbVar29 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar11 + -0x70,pbVar14,pbVar17,lVar28,uVar20);
        pbVar13 = (byte *)(ulong)(byte)puVar11[-0x70];
        unaff_x22 = uVar20;
      }
      else {
        pbVar13 = (byte *)(ulong)(uVar24 == 0);
      }
    }
code_r0x000100e262b0:
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar11 + -0x58)) {
      return pbVar13;
    }
    func_0x000107c60e78();
    *(byte **)(puVar11 + -0xc0) = unaff_x24;
    *(byte **)(puVar11 + -0xb8) = unaff_x23;
    *(ulong *)(puVar11 + -0xb0) = unaff_x22;
    *(undefined8 *)(puVar11 + -0xa8) = unaff_x21;
    *(undefined1 (**) [16])(puVar11 + -0xa0) = unaff_x20;
    *(byte **)(puVar11 + -0x98) = unaff_x19;
    *(undefined1 **)(puVar11 + -0x90) = puVar11 + -0x10;
    *(undefined **)(puVar11 + -0x88) = &UNK_100e26304;
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
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar16,lVar30,uVar15);
    if (((ulong)pbVar16 & 1) == 0) {
      return (byte *)0x0;
    }
    unaff_x29 = *(undefined8 *)(puVar11 + -0x90);
    unaff_x30 = *(undefined8 *)(puVar11 + -0x88);
    unaff_x20 = *(undefined1 (**) [16])(puVar11 + -0xa0);
    unaff_x19 = *(byte **)(puVar11 + -0x98);
    unaff_x22 = *(ulong *)(puVar11 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar11 + -0xa8);
    unaff_x24 = *(byte **)(puVar11 + -0xc0);
    unaff_x23 = *(byte **)(puVar11 + -0xb8);
    puVar11 = puVar11 + -0x80;
  } while( true );
}



/* Entry: 10359e3e0; end: 10359e47f;  */

/* WARNING: Possible PIC construction at 0x00010359e42c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359e43c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010359e430) */
/* WARNING: Removing unreachable block (ram,0x00010359e440) */

void FUN_10359e3e0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7ab90 != -1) {
    func_0x000107c61568(0x112f7ab90,FUN_10359e118);
  }
  uVar5 = uRam0000000113808dc8;
  uVar4 = uRam0000000113808dc0;
  uVar3 = uRam0000000113808db8;
  uVar2 = uRam0000000113808db0;
  uVar1 = uRam0000000113808da8;
  *param_1 = uRam0000000113808da0;
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



/* Entry: 10359e480; end: 10359e493;  */

void FUN_10359e480(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7ae88;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7ae88,&UNK_10dbe00c8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10359e494; end: 10359e587;  */

void FUN_10359e494(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10359e588; end: 10359e5db;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359e588(undefined8 *param_1,undefined1 (*param_2) [16])

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
code_r0x000100e26128:
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
      if (1 < uVar9 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar25 == 0) {
        uVar26 = uVar20 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar23 = (int)((ulong)lVar28 >> 0x20);
      if (SBORROW4(iVar23,(int)lVar28)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar10)();
      }
      if (uVar24 == (long)(iVar23 - (int)lVar28)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar25 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar25 == 2) {
        uVar26 = *(long *)(lVar28 + 0x18) - *(long *)(lVar28 + 0x10);
        if (SBORROW8(*(long *)(lVar28 + 0x18),*(long *)(lVar28 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar10)();
        }
code_r0x000100e2608c:
        if (uVar24 != uVar26) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar24 < 1) goto code_r0x000100e26128;
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
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc(puVar11 + -0x71,puVar11 + -0x70);
            pbVar13 = (byte *)(ulong)(byte)puVar11[-0x71];
            goto code_r0x000100e262b0;
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
              goto code_r0x000100e262a4;
            }
          }
          pbVar17 = (byte *)0x0;
        }
        else {
          if (uVar22 != 2) {
            *(undefined8 *)(puVar11 + -0x6a) = 0;
            *(undefined8 *)(puVar11 + -0x70) = 0;
            pbVar17 = puVar11 + -0x70;
            goto code_r0x000100e26260;
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
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar29 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc(puVar11 + -0x70,pbVar14,pbVar17,lVar28,uVar20);
        pbVar13 = (byte *)(ulong)(byte)puVar11[-0x70];
        unaff_x22 = uVar20;
      }
      else {
        pbVar13 = (byte *)(ulong)(uVar24 == 0);
      }
    }
code_r0x000100e262b0:
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
    *(undefined **)(puVar11 + -0x88) = &UNK_100e26304;
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
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 10359e5dc; end: 10359e623;  */

void FUN_10359e5dc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe00e0,0x28,2);
  uRam0000000113808de8 = uStack_38;
  uRam0000000113808de0 = uStack_40;
  uRam0000000113808df8 = uStack_28;
  uRam0000000113808df0 = uStack_30;
  uRam0000000113808e08 = uStack_18;
  uRam0000000113808e00 = uStack_20;
  return;
}



/* Entry: 10359e624; end: 10359e6cf;  */

void FUN_10359e624(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 == 3) break;
    if (lVar1 == 2) {
      pcVar3 = *(code **)(param_3 + 0x18);
      goto LAB_10359e660;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x18);
LAB_10359e660:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_10359e660;
}



/* Entry: 10359e6d0; end: 10359e77b;  */

void FUN_10359e6d0(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) || ((**(code **)(param_3 + 8))(1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] == 0 || ((**(code **)(param_3 + 8))(2,param_2,param_3), unaff_x21 == 0)))) &&
     ((*(long *)(unaff_x20 + 2) == 0 ||
      ((**(code **)(param_3 + 0x20))(*(long *)(unaff_x20 + 2),3,param_2,param_3), unaff_x21 == 0))))
  {
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 4),*(undefined8 *)(unaff_x20 + 6),
                        param_2,param_3);
  }
  return;
}



/* Entry: 10359e77c; end: 10359e7ab;  */

void FUN_10359e77c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xc000000000000000;
  return;
}



/* Entry: 10359e7ac; end: 10359e807;  */

undefined1  [16]
FUN_10359e7ac(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 *param_4,
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



/* Entry: 10359e808; end: 10359e823;  */

undefined8 FUN_10359e808(void)

{
  return 1;
}



/* Entry: 10359e824; end: 10359e84b;  */

void FUN_10359e824(void)

{
  FUN_10359e624();
  return;
}



/* Entry: 10359e84c; end: 10359e883;  */

uint FUN_10359e84c(long param_1,long param_2)

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
  func_0x0001035a0124();
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



/* Entry: 10359e884; end: 10359e8bb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359e884(float *param_1)

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
  if (!bVar8 || *(long *)(unaff_x20 + 2) != *(long *)(param_1 + 2)) {
    return (byte *)0x0;
  }
  pbVar11 = *(byte **)(unaff_x20 + 4);
  pbVar26 = *(byte **)(unaff_x20 + 6);
  lVar25 = *(long *)(param_1 + 4);
  uVar17 = *(ulong *)(param_1 + 6);
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



/* Entry: 10359e8bc; end: 10359e95b;  */

/* WARNING: Possible PIC construction at 0x00010359e908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359e918: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010359e90c) */
/* WARNING: Removing unreachable block (ram,0x00010359e91c) */

void FUN_10359e8bc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7aba8 != -1) {
    func_0x000107c61568(0x112f7aba8,FUN_10359e5dc);
  }
  uVar5 = uRam0000000113808e08;
  uVar4 = uRam0000000113808e00;
  uVar3 = uRam0000000113808df8;
  uVar2 = uRam0000000113808df0;
  uVar1 = uRam0000000113808de8;
  *param_1 = uRam0000000113808de0;
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



/* Entry: 10359e95c; end: 10359e96f;  */

void FUN_10359e95c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7ae78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7ae78,&UNK_10dbe00c0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10359e970; end: 10359e9a3;  */

void FUN_10359e970(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10359e9a4; end: 10359eab7;  */

void FUN_10359e9a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_38 = unaff_x20[3];
  uStack_50 = *unaff_x20;
  uStack_40 = unaff_x20[2];
  uStack_48 = unaff_x20[1];
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10359eab8; end: 10359eb0b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359eab8(float *param_1,float *param_2)

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
  if (!bVar8 || *(long *)(param_1 + 2) != *(long *)(param_2 + 2)) {
    return (byte *)0x0;
  }
  lVar25 = *(long *)(param_2 + 4);
  uVar17 = *(ulong *)(param_2 + 6);
  pbVar11 = *(byte **)(param_1 + 4);
  pbVar26 = *(byte **)(param_1 + 6);
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



/* Entry: 10359eb0c; end: 10359eb73;  */

void FUN_10359eb0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  func_0x000107c5fb78(param_2,param_3);
  *param_4 = 0xd00000000000002c;
  *param_5 = 0x800000010f155e60;
  return;
}



/* Entry: 10359eb74; end: 10359ebbb;  */

void FUN_10359eb74(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbdfc60,0xf,2);
  uRam0000000113808e28 = uStack_38;
  uRam0000000113808e20 = uStack_40;
  uRam0000000113808e38 = uStack_28;
  uRam0000000113808e30 = uStack_30;
  uRam0000000113808e48 = uStack_18;
  uRam0000000113808e40 = uStack_20;
  return;
}



/* Entry: 10359ebbc; end: 10359ec53;  */

void FUN_10359ebbc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_10359ec10:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x00010359ec2c;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_10359ebf8;
code_r0x00010359ec2c:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x48);
LAB_10359ebf8:
    (*pcVar3)();
  }
  goto LAB_10359ec10;
}



/* Entry: 10359ec54; end: 10359ece7;  */

void FUN_10359ec54(undefined8 param_1,undefined8 param_2,long param_3)

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
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     (((int)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))((int)unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10359ece8; end: 10359ed2b;  */

void FUN_10359ece8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 10359ed2c; end: 10359ed5b;  */

undefined1  [16] FUN_10359ed2c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10359ed5c; end: 10359ed8f;  */

void FUN_10359ed5c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10359ed90; end: 10359eda3;  */

undefined1  [16] FUN_10359ed90(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10359eda0;
  return auVar1;
}



/* Entry: 10359eda4; end: 10359edcb;  */

void FUN_10359eda4(void)

{
  FUN_10359ebbc();
  return;
}



/* Entry: 10359edcc; end: 10359edcf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10359edcc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10359edd0; end: 10359ee07;  */

uint FUN_10359edd0(long param_1,long param_2)

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
  FUN_1035a00e4();
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



/* Entry: 10359ee08; end: 10359ee9b;  */

/* WARNING: Possible PIC construction at 0x00010359ee48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010359ee4c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359ee08(undefined8 *param_1)

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
  
  lVar23 = param_1[3];
  uVar15 = param_1[4];
  pbVar9 = (byte *)unaff_x20[3];
  pbVar24 = (byte *)unaff_x20[4];
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
  if (*(int *)(unaff_x20 + 2) != *(int *)(param_1 + 2)) {
    return (byte *)0x0;
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



/* Entry: 10359ee9c; end: 10359ef3b;  */

/* WARNING: Possible PIC construction at 0x00010359eee8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359eef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010359eeec) */
/* WARNING: Removing unreachable block (ram,0x00010359eefc) */

void FUN_10359ee9c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7abc0 != -1) {
    func_0x000107c61568(0x112f7abc0,FUN_10359eb74);
  }
  uVar5 = uRam0000000113808e48;
  uVar4 = uRam0000000113808e40;
  uVar3 = uRam0000000113808e38;
  uVar2 = uRam0000000113808e30;
  uVar1 = uRam0000000113808e28;
  *param_1 = uRam0000000113808e20;
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



/* Entry: 10359ef3c; end: 10359ef77;  */

void FUN_10359ef3c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7ae68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7ae68,&UNK_10dbe00b8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10359ef78; end: 10359f08b;  */

void FUN_10359ef78(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined4 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_50 = unaff_x20[1];
  uStack_48 = *(undefined4 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10359f08c; end: 10359f11f;  */

/* WARNING: Possible PIC construction at 0x00010359f0d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x00010359f0d8) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10359f08c(undefined8 *param_1,undefined8 *param_2)

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
  if (*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) {
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



/* Entry: 10359f120; end: 10359f573;  */

/* WARNING: Possible PIC construction at 0x00010359f2e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359f3d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359f31c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010359f430: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010359f320) */
/* WARNING: Removing unreachable block (ram,0x00010359f33c) */
/* WARNING: Removing unreachable block (ram,0x00010359f568) */
/* WARNING: Removing unreachable block (ram,0x00010359f34c) */
/* WARNING: Removing unreachable block (ram,0x00010359f350) */
/* WARNING: Removing unreachable block (ram,0x00010359f564) */
/* WARNING: Removing unreachable block (ram,0x00010359f35c) */
/* WARNING: Removing unreachable block (ram,0x00010359f4c8) */
/* WARNING: Removing unreachable block (ram,0x00010359f368) */
/* WARNING: Removing unreachable block (ram,0x00010359f36c) */
/* WARNING: Removing unreachable block (ram,0x00010359f4cc) */
/* WARNING: Removing unreachable block (ram,0x00010359f504) */
/* WARNING: Removing unreachable block (ram,0x00010359f3d4) */
/* WARNING: Removing unreachable block (ram,0x00010359f47c) */
/* WARNING: Removing unreachable block (ram,0x00010359f3e0) */
/* WARNING: Removing unreachable block (ram,0x00010359f56c) */
/* WARNING: Removing unreachable block (ram,0x00010359f3f4) */
/* WARNING: Removing unreachable block (ram,0x00010359f408) */
/* WARNING: Removing unreachable block (ram,0x00010359f414) */
/* WARNING: Removing unreachable block (ram,0x00010359f418) */
/* WARNING: Removing unreachable block (ram,0x00010359f48c) */
/* WARNING: Removing unreachable block (ram,0x00010359f4c4) */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */
/* WARNING: Removing unreachable block (ram,0x00010359f2e4) */
/* WARNING: Removing unreachable block (ram,0x00010359f434) */
/* WARNING: Removing unreachable block (ram,0x00010359f44c) */
/* WARNING: Removing unreachable block (ram,0x00010359f478) */

void FUN_10359f120(long param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  ulong uVar13;
  int iVar14;
  long lVar15;
  ulong *puVar16;
  ulong *puVar17;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 == *(long *)(param_2 + 0x10)) {
    if ((lVar15 != 0) && (param_1 != param_2)) {
      puVar16 = (ulong *)(param_2 + 0x30);
      puVar17 = (ulong *)(param_1 + 0x30);
      do {
        if (puVar17[-2] != puVar16[-2]) goto LAB_10359f50c;
        uVar5 = puVar17[-1];
        uVar7 = *puVar17;
        uVar1 = puVar16[-1];
        uVar2 = *puVar16;
        uVar8 = (uint)(uVar7 >> 0x20);
        uVar9 = uVar8 >> 0x1e;
        uVar3 = (uint)(uVar2 >> 0x20);
        uVar10 = uVar3 >> 0x1e;
        iVar14 = (int)uVar5;
        if (uVar7 >> 0x3e == 3) {
          uVar13 = 0;
          if ((((uVar5 != 0 || uVar7 != 0xc000000000000000) || uVar2 >> 0x3e < 3) || (uVar1 != 0))
             || (uVar2 != 0xc000000000000000)) goto joined_r0x00010359f38c;
        }
        else {
          if (uVar8 >> 0x1e < 2) {
            if (uVar9 == 0) {
              uVar13 = uVar7 >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)(uVar5 >> 0x20);
              if (SBORROW4(iVar11,iVar14)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10359f560);
                (*pcVar4)();
              }
              uVar13 = (ulong)(iVar11 - iVar14);
            }
joined_r0x00010359f38c:
            if (uVar3 >> 0x1e < 2) goto LAB_10359f22c;
LAB_10359f1f8:
            if (uVar10 != 2) {
              if (uVar13 == 0) goto LAB_10359f184;
              goto LAB_10359f50c;
            }
            uVar12 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
            if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10359f558);
              (*pcVar4)();
            }
          }
          else {
            if (uVar9 == 2) {
              uVar13 = *(long *)(uVar5 + 0x18) - *(long *)(uVar5 + 0x10);
              if (SBORROW8(*(long *)(uVar5 + 0x18),*(long *)(uVar5 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10359f55c);
                (*pcVar4)();
              }
              goto joined_r0x00010359f38c;
            }
            uVar13 = 0;
            if (1 < uVar10) goto LAB_10359f1f8;
LAB_10359f22c:
            if (uVar10 == 0) {
              uVar12 = uVar2 >> 0x30 & 0xff;
            }
            else {
              iVar11 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar11,(int)uVar1)) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10359f554);
                (*pcVar4)();
              }
              uVar12 = (ulong)(iVar11 - (int)uVar1);
            }
          }
          if (uVar13 != uVar12) goto LAB_10359f50c;
          if (0 < (long)uVar13) {
            if ((uVar9 < 2) && (uVar9 != 0)) {
              if ((long)uVar5 >> 0x20 < (long)iVar14) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x10359f564);
                (*pcVar4)();
              }
              func_0x00010006c00c(uVar5,uVar7);
              uVar5 = uVar1;
              uVar7 = uVar2;
            }
            goto code_r0x00010006c00c;
          }
        }
LAB_10359f184:
        puVar16 = puVar16 + 3;
        puVar17 = puVar17 + 3;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    uVar6 = 1;
  }
  else {
LAB_10359f50c:
    uVar6 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    return;
  }
  func_0x000107c60e78(uVar6);
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  uVar5 = param_4;
  uVar7 = param_5;
code_r0x00010006c00c:
  uVar8 = (uint)(uVar7 >> 0x3e);
  if (uVar8 == 1) {
    uVar5 = uVar7 & 0x3fffffffffffffff;
  }
  else if (uVar8 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar5);
  return;
}



/* Entry: 10359f574; end: 10359f5e3;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_10359f574(undefined8 param_1,long param_2,undefined8 param_3,ulong param_4,ulong param_5)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  func_0x000107c61434(param_2);
  uVar1 = (uint)(param_5 >> 0x3e);
  if (uVar1 == 1) {
    param_4 = param_5 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_4);
  return;
}



/* Entry: 10359f5e4; end: 10359f6e3;  */

void FUN_10359f5e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ab80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfcf0;
  func_0x000107c61520(&UNK_10dbdfcf0,&UNK_110668258);
  puRam0000000112f7ab80 = puVar1;
  return;
}



/* Entry: 10359f6e4; end: 10359f707;  */

void FUN_10359f6e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359f708();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10359f708; end: 10359f747;  */

void FUN_10359f708(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfcc8;
  func_0x000107c61520(&UNK_10dbdfcc8,&UNK_110668258);
  puRam0000000112f7abd0 = puVar1;
  return;
}



/* Entry: 10359f748; end: 10359f75f;  */

void FUN_10359f748(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359f5e4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10359aa28)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359f760; end: 10359f79f;  */

void FUN_10359f760(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfd30;
  func_0x000107c61520(&UNK_10dbdfd30,&UNK_110668258);
  puRam0000000112f7abd8 = puVar1;
  return;
}



/* Entry: 10359f7a0; end: 10359f7c3;  */

void FUN_10359f7a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359f7c4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10359f7c4; end: 10359f803;  */

void FUN_10359f7c4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfda0;
  func_0x000107c61520(&UNK_10dbdfda0,&UNK_1106682d8);
  puRam0000000112f7abe0 = puVar1;
  return;
}



/* Entry: 10359f804; end: 10359f817;  */

void FUN_10359f804(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10359f624)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10359f818();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359f818; end: 10359f857;  */

void FUN_10359f818(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdfd58;
  func_0x000107c61520(&DAT_10dbdfd58,&UNK_1106682d8);
  puRam0000000112f7abe8 = puVar1;
  return;
}



/* Entry: 10359f858; end: 10359f85b;  */

void FUN_10359f858(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfe08;
  func_0x000107c61520(&UNK_10dbdfe08,&UNK_1106682d8);
  puRam0000000112f7abf0 = puVar1;
  return;
}



/* Entry: 10359f85c; end: 10359f89b;  */

void FUN_10359f85c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfe08;
  func_0x000107c61520(&UNK_10dbdfe08,&UNK_1106682d8);
  puRam0000000112f7abf0 = puVar1;
  return;
}



/* Entry: 10359f89c; end: 10359f8bf;  */

void FUN_10359f89c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359f8c0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10359f8c0; end: 10359f8ff;  */

void FUN_10359f8c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7abf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfe78;
  func_0x000107c61520(&UNK_10dbdfe78,&UNK_110668368);
  puRam0000000112f7abf8 = puVar1;
  return;
}



/* Entry: 10359f900; end: 10359f913;  */

void FUN_10359f900(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10359f664)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10359f914();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359f914; end: 10359f953;  */

void FUN_10359f914(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdfe30;
  func_0x000107c61520(&DAT_10dbdfe30,&UNK_110668368);
  puRam0000000112f7ac00 = puVar1;
  return;
}



/* Entry: 10359f954; end: 10359f957;  */

void FUN_10359f954(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfee0;
  func_0x000107c61520(&UNK_10dbdfee0,&UNK_110668368);
  puRam0000000112f7ac08 = puVar1;
  return;
}



/* Entry: 10359f958; end: 10359f997;  */

void FUN_10359f958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdfee0;
  func_0x000107c61520(&UNK_10dbdfee0,&UNK_110668368);
  puRam0000000112f7ac08 = puVar1;
  return;
}



/* Entry: 10359f998; end: 10359f9bb;  */

void FUN_10359f998(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10359f9bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10359f9bc; end: 10359f9fb;  */

void FUN_10359f9bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdff50;
  func_0x000107c61520(&UNK_10dbdff50,&UNK_1106683f0);
  puRam0000000112f7ac10 = puVar1;
  return;
}



/* Entry: 10359f9fc; end: 10359fa0f;  */

void FUN_10359f9fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10359f6a4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10359fa40();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359fa10; end: 10359fa3f;  */

void FUN_10359fa10(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10359fa40; end: 10359fa7f;  */

void FUN_10359fa40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdff08;
  func_0x000107c61520(&DAT_10dbdff08,&UNK_1106683f0);
  puRam0000000112f7ac18 = puVar1;
  return;
}



/* Entry: 10359fa80; end: 10359fa83;  */

void FUN_10359fa80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdffb8;
  func_0x000107c61520(&UNK_10dbdffb8,&UNK_1106683f0);
  puRam0000000112f7ac20 = puVar1;
  return;
}



/* Entry: 10359fa84; end: 10359fac3;  */

void FUN_10359fa84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ac20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbdffb8;
  func_0x000107c61520(&UNK_10dbdffb8,&UNK_1106683f0);
  puRam0000000112f7ac20 = puVar1;
  return;
}



/* Entry: 10359fac4; end: 10359faef;  */

void FUN_10359fac4(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 10359faf0; end: 10359fb9b;  */

undefined8 * FUN_10359faf0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  func_0x000107c6157c();
  return param_1;
}



/* Entry: 10359fb9c; end: 10359fbe3;  */

undefined8 * FUN_10359fb9c(undefined8 *param_1,undefined8 *param_2)

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
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61574(uVar1);
  return param_1;
}



/* Entry: 10359fbe4; end: 10359fc7b;  */

int FUN_10359fbe4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10359fc7c; end: 10359fd23;  */

undefined8 * FUN_10359fc7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar2 = param_2[2];
  uVar1 = param_2[3];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[2] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Entry: 10359fd24; end: 10359fd5b;  */

undefined8 * FUN_10359fd24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10359fd5c; end: 10359fd6b;  */

undefined1  [16] FUN_10359fd5c(void)

{
  return ZEXT816(0x1106682d8);
}



/* Entry: 10359fd6c; end: 10359fe13;  */

undefined8 * FUN_10359fd6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  uVar2 = param_2[3];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 10359fe14; end: 10359fe5b;  */

undefined8 * FUN_10359fe14(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10359fe5c; end: 10359ff0f;  */

int FUN_10359fe5c(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[8] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10359ff10; end: 10359ff37;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10359ff10(long param_1)

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



/* Entry: 10359ff38; end: 10359fff7;  */

undefined8 * FUN_10359ff38(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 10359fff8; end: 1035a0043;  */

undefined8 * FUN_10359fff8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1035a0044; end: 1035a00e3;  */

int FUN_1035a0044(int *param_1,int param_2)

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



/* Entry: 1035a00e4; end: 1035a01e3;  */

void FUN_1035a00e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ae70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbdff24;
  func_0x000107c61520(&DAT_10dbdff24,&UNK_1106683f0);
  puRam0000000112f7ae70 = puVar1;
  return;
}



/* Entry: 1035a01e4; end: 1035a0257;  */

void FUN_1035a01e4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1035a0258; end: 1035a0297;  */

void FUN_1035a0258(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7af00;
  func_0x0001000285a8(0x112f7af00,&UNK_10dbe0260);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



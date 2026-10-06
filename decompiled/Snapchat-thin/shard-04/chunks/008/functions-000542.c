/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10390b7d8; end: 10390b80b;  */

void FUN_10390b7d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 10390b80c; end: 10390b91f;  */

void FUN_10390b80c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_50 = *(undefined1 *)(unaff_x20 + 2);
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10390b920; end: 10390b957;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10390b920(long *param_1,long *param_2)

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
  
  if ((*param_1 != *param_2 || param_1[1] != param_2[1]) ||
     (((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0)) {
    return (byte *)0x0;
  }
  lVar24 = param_2[3];
  uVar16 = param_2[4];
  pbVar10 = (byte *)param_1[3];
  pbVar25 = (byte *)param_1[4];
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



/* Entry: 10390b958; end: 10390b99f;  */

void FUN_10390b958(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc22330,0x1e,2);
  uRam000000011380c018 = uStack_38;
  uRam000000011380c010 = uStack_40;
  uRam000000011380c028 = uStack_28;
  uRam000000011380c020 = uStack_30;
  uRam000000011380c038 = uStack_18;
  uRam000000011380c030 = uStack_20;
  return;
}



/* Entry: 10390b9a0; end: 10390ba8f;  */

void FUN_10390b9a0(undefined8 param_1,long param_2,long param_3)

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
        func_0x000101b8817c();
        lVar2 = unaff_x20 + 0x60;
LAB_10390ba14:
        (*pcVar4)(lVar2,&UNK_1106aaf48,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101b8817c();
          lVar2 = unaff_x20 + 0x38;
          goto LAB_10390ba14;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101b8817c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_10390ba14;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10390ba90; end: 10390bb1b;  */

void FUN_10390ba90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_10390bb1c();
  if (unaff_x21 == 0) {
    FUN_10390bbac();
    FUN_10390bc3c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 10390bb1c; end: 10390bbab;  */

void FUN_10390bb1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = *(ulong *)(param_1 + 0x20);
  if ((uStack_60 & 0xff) != 2) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_50 = *(undefined8 *)(param_1 + 0x30);
    uStack_58 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101b8817c();
    (*pcVar1)(&uStack_70,1,&UNK_1106aaf48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10390bbac; end: 10390bc3b;  */

void FUN_10390bbac(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = *(ulong *)(param_1 + 0x48);
  if ((uStack_60 & 0xff) != 2) {
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_50 = *(undefined8 *)(param_1 + 0x58);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101b8817c();
    (*pcVar1)(&uStack_70,2,&UNK_1106aaf48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10390bc3c; end: 10390bccb;  */

void FUN_10390bc3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uStack_60 = *(ulong *)(param_1 + 0x70);
  if ((uStack_60 & 0xff) != 2) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101b8817c();
    (*pcVar1)(&uStack_70,3,&UNK_1106aaf48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10390bccc; end: 10390bd27;  */

void FUN_10390bccc(undefined8 *param_1)

{
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 2;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 2;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0xe] = 2;
  return;
}



/* Entry: 10390bd28; end: 10390bd57;  */

undefined1  [16] FUN_10390bd28(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10390bd58; end: 10390bd8b;  */

void FUN_10390bd58(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10390bd8c; end: 10390bd9f;  */

undefined8 FUN_10390bd8c(void)

{
  return 0x10390bd9c;
}



/* Entry: 10390bda0; end: 10390bdb3;  */

void FUN_10390bda0(void)

{
  FUN_10390b9a0();
  return;
}



/* Entry: 10390bdb4; end: 10390be03;  */

void FUN_10390bdb4(void)

{
  FUN_10390ba90();
  return;
}



/* Entry: 10390be04; end: 10390be07;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10390be04(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10390be08; end: 10390be3f;  */

uint FUN_10390be08(long param_1,long param_2)

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
  FUN_10390d238();
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



/* Entry: 10390be40; end: 10390bebf;  */

uint FUN_10390be40(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0xd];
  uStack_50 = param_1[0xc];
  uStack_38 = param_1[0xf];
  uStack_40 = param_1[0xe];
  uStack_30 = param_1[0x10];
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_58 = param_1[0xb];
  uStack_60 = param_1[10];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_d8 = unaff_x20[0xd];
  uStack_e0 = unaff_x20[0xc];
  uStack_c8 = unaff_x20[0xf];
  uStack_d0 = unaff_x20[0xe];
  uStack_c0 = unaff_x20[0x10];
  uStack_118 = unaff_x20[5];
  uStack_120 = unaff_x20[4];
  uStack_108 = unaff_x20[7];
  uStack_110 = unaff_x20[6];
  uStack_f8 = unaff_x20[9];
  uStack_100 = unaff_x20[8];
  uStack_e8 = unaff_x20[0xb];
  uStack_f0 = unaff_x20[10];
  uStack_138 = unaff_x20[1];
  uStack_140 = *unaff_x20;
  uStack_128 = unaff_x20[3];
  uStack_130 = unaff_x20[2];
  FUN_10390c1d8(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 10390bec0; end: 10390bf5f;  */

/* WARNING: Possible PIC construction at 0x00010390bf0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010390bf1c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010390bf10) */
/* WARNING: Removing unreachable block (ram,0x00010390bf20) */

void FUN_10390bec0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fadf68 != -1) {
    func_0x000107c61568(0x112fadf68,FUN_10390b958);
  }
  uVar5 = uRam000000011380c038;
  uVar4 = uRam000000011380c030;
  uVar3 = uRam000000011380c028;
  uVar2 = uRam000000011380c020;
  uVar1 = uRam000000011380c018;
  *param_1 = uRam000000011380c010;
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



/* Entry: 10390bf60; end: 10390bf9b;  */

void FUN_10390bf60(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fadfb8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fadfb8,&UNK_10dc22310);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10390bf9c; end: 10390c0d7;  */

void FUN_10390bf9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_108 [72];
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
  
  uStack_58 = unaff_x20[0xd];
  uStack_60 = unaff_x20[0xc];
  uStack_48 = unaff_x20[0xf];
  uStack_50 = unaff_x20[0xe];
  uStack_40 = unaff_x20[0x10];
  uStack_98 = unaff_x20[5];
  uStack_a0 = unaff_x20[4];
  uStack_88 = unaff_x20[7];
  uStack_90 = unaff_x20[6];
  uStack_78 = unaff_x20[9];
  uStack_80 = unaff_x20[8];
  uStack_68 = unaff_x20[0xb];
  uStack_70 = unaff_x20[10];
  uStack_b8 = unaff_x20[1];
  uStack_c0 = *unaff_x20;
  uStack_a8 = unaff_x20[3];
  uStack_b0 = unaff_x20[2];
  func_0x000107c6068c(auStack_108,0);
  func_0x000107c5fa50(auStack_108,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10390c0d8; end: 10390c157;  */

uint FUN_10390c0d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_d8 = param_1[0xd];
  uStack_e0 = param_1[0xc];
  uStack_c8 = param_1[0xf];
  uStack_d0 = param_1[0xe];
  uStack_c0 = param_1[0x10];
  uStack_118 = param_1[5];
  uStack_120 = param_1[4];
  uStack_108 = param_1[7];
  uStack_110 = param_1[6];
  uStack_f8 = param_1[9];
  uStack_100 = param_1[8];
  uStack_e8 = param_1[0xb];
  uStack_f0 = param_1[10];
  uStack_138 = param_1[1];
  uStack_140 = *param_1;
  uStack_128 = param_1[3];
  uStack_130 = param_1[2];
  uStack_48 = param_2[0xd];
  uStack_50 = param_2[0xc];
  uStack_38 = param_2[0xf];
  uStack_40 = param_2[0xe];
  uStack_30 = param_2[0x10];
  uStack_88 = param_2[5];
  uStack_90 = param_2[4];
  uStack_78 = param_2[7];
  uStack_80 = param_2[6];
  uStack_68 = param_2[9];
  uStack_70 = param_2[8];
  uStack_58 = param_2[0xb];
  uStack_60 = param_2[10];
  uStack_a8 = param_2[1];
  uStack_b0 = *param_2;
  uStack_98 = param_2[3];
  uStack_a0 = param_2[2];
  FUN_10390c1d8(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 10390c158; end: 10390c1d7;  */

void FUN_10390c158(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22078;
  func_0x000107c61520(&UNK_10dc22078,&UNK_1106aaf48);
  puRam0000000112fadf50 = puVar1;
  return;
}



/* Entry: 10390c1d8; end: 10390c733;  */

uint FUN_10390c1d8(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  ulong uStack_210;
  long alStack_208 [5];
  long lStack_1e0;
  long lStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  ulong uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  long lStack_190;
  long lStack_188;
  ulong uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  long lStack_160;
  long lStack_158;
  ulong uStack_150;
  ulong uStack_148;
  undefined8 uStack_140;
  long lStack_130;
  long lStack_128;
  ulong uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  long lStack_100;
  long lStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  undefined8 uStack_e0;
  long lStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 uStack_80;
  
  lVar9 = param_1[3];
  lVar7 = param_1[2];
  uStack_210 = param_1[5];
  uVar11 = param_1[4];
  uVar5 = param_1[6];
  lVar10 = param_2[3];
  lVar8 = param_2[2];
  uVar13 = param_2[5];
  uVar12 = param_2[4];
  uVar6 = param_2[6];
  lStack_d0 = lVar8;
  lStack_c8 = lVar10;
  uStack_c0 = uVar12;
  uStack_b8 = uVar13;
  uStack_b0 = uVar6;
  lStack_a0 = lVar7;
  lStack_98 = lVar9;
  uStack_90 = uVar11;
  uStack_88 = uStack_210;
  uStack_80 = uVar5;
  if ((uVar11 & 0xff) == 2) {
    if ((uVar12 & 0xff) == 2) {
      FUN_10390b32c(&lStack_a0,&lStack_1e0);
      FUN_10390b32c(&lStack_d0,&lStack_1e0);
LAB_10390c268:
      func_0x00010390b2c8(lVar7,lVar9,uVar11,uStack_210,uVar5);
      lVar9 = param_1[8];
      lVar7 = param_1[7];
      uStack_210 = param_1[10];
      uVar11 = param_1[9];
      uVar5 = param_1[0xb];
      lVar10 = param_2[8];
      lVar8 = param_2[7];
      uVar13 = param_2[10];
      uVar12 = param_2[9];
      uVar6 = param_2[0xb];
      lStack_130 = lVar8;
      lStack_128 = lVar10;
      uStack_120 = uVar12;
      uStack_118 = uVar13;
      uStack_110 = uVar6;
      lStack_100 = lVar7;
      lStack_f8 = lVar9;
      uStack_f0 = uVar11;
      uStack_e8 = uStack_210;
      uStack_e0 = uVar5;
      if ((uVar11 & 0xff) == 2) {
        if ((uVar12 & 0xff) != 2) {
LAB_10390c41c:
          lStack_1e0 = lVar7;
          lStack_1d8 = lVar9;
          uStack_1d0 = uVar11;
          uStack_1c8 = uStack_210;
          uStack_1c0 = uVar5;
          lStack_1b8 = lVar8;
          lStack_1b0 = lVar10;
          uStack_1a8 = uVar12;
          uStack_1a0 = uVar13;
          uStack_198 = uVar6;
          FUN_10390b32c(&lStack_100,&lStack_160);
          plVar2 = &lStack_130;
          plVar4 = &lStack_160;
          goto LAB_10390c4e0;
        }
        FUN_10390b32c(&lStack_100,&lStack_1e0);
        FUN_10390b32c(&lStack_130,&lStack_1e0);
      }
      else {
        if ((uVar12 & 0xff) == 2) goto LAB_10390c41c;
        if (lVar7 != lVar8) {
          FUN_10390b32c(&lStack_100,&lStack_1e0);
          plVar2 = &lStack_130;
          goto LAB_10390c500;
        }
        if (lVar9 != lVar10) {
          FUN_10390b32c(&lStack_100,&lStack_1e0);
          plVar2 = &lStack_130;
          lVar8 = lVar7;
          goto LAB_10390c5b8;
        }
        if ((((uint)uVar12 ^ (uint)uVar11) & 1) != 0) {
          FUN_10390b32c(&lStack_100,&lStack_1e0);
          plVar2 = &lStack_130;
          lVar10 = lVar9;
          lVar8 = lVar7;
          goto LAB_10390c488;
        }
        FUN_10390b32c(&lStack_100,&lStack_1e0);
        FUN_10390b32c(&lStack_130,&lStack_1e0);
        uVar3 = uStack_210;
        func_0x000100e25fcc(uStack_210,uVar5,uVar13,uVar6);
        func_0x00010390b2c8(lVar7,lVar9,uVar12,uVar13,uVar6);
        if ((uVar3 & 1) == 0) goto LAB_10390c5e8;
      }
      func_0x00010390b2c8(lVar7,lVar9,uVar11,uStack_210,uVar5);
      lVar9 = param_1[0xd];
      lVar7 = param_1[0xc];
      uStack_210 = param_1[0xf];
      uVar11 = param_1[0xe];
      lVar10 = param_2[0xd];
      lStack_1b8 = param_2[0xc];
      uVar13 = param_2[0xf];
      uVar12 = param_2[0xe];
      uVar5 = param_1[0x10];
      uVar6 = param_2[0x10];
      lStack_190 = lStack_1b8;
      lStack_188 = lVar10;
      uStack_180 = uVar12;
      uStack_178 = uVar13;
      uStack_170 = uVar6;
      lStack_160 = lVar7;
      lStack_158 = lVar9;
      uStack_150 = uVar11;
      uStack_148 = uStack_210;
      uStack_140 = uVar5;
      if ((uVar11 & 0xff) == 2) {
        if ((uVar12 & 0xff) == 2) {
          FUN_10390b32c(&lStack_160,&lStack_1e0);
          FUN_10390b32c(&lStack_190,&lStack_1e0);
LAB_10390c388:
          func_0x00010390b2c8(lVar7,lVar9,uVar11,uStack_210,uVar5);
          uVar5 = *param_1;
          func_0x000100e25fcc(uVar5,param_1[1],*param_2,param_2[1]);
          uVar1 = (uint)uVar5;
          goto LAB_10390c5f4;
        }
      }
      else if ((uVar12 & 0xff) != 2) {
        if (lVar7 == lStack_1b8) {
          if (lVar9 == lVar10) {
            if ((((uint)uVar12 ^ (uint)uVar11) & 1) == 0) {
              FUN_10390b32c(&lStack_160,&lStack_1e0);
              FUN_10390b32c(&lStack_190,&lStack_1e0);
              uVar3 = uStack_210;
              func_0x000100e25fcc(uStack_210,uVar5,uVar13,uVar6);
              func_0x00010390b2c8(lVar7,lVar9,uVar12,uVar13,uVar6);
              if ((uVar3 & 1) == 0) goto LAB_10390c5e8;
              goto LAB_10390c388;
            }
            FUN_10390b32c(&lStack_160,&lStack_1e0);
            FUN_10390b32c(&lStack_190,&lStack_1e0);
            lStack_1b8 = lVar7;
            lVar10 = lVar9;
          }
          else {
            FUN_10390b32c(&lStack_160,&lStack_1e0);
            FUN_10390b32c(&lStack_190,&lStack_1e0);
            lStack_1b8 = lVar7;
          }
        }
        else {
          FUN_10390b32c(&lStack_160,&lStack_1e0);
          FUN_10390b32c(&lStack_190,&lStack_1e0);
        }
        func_0x00010390b2c8(lStack_1b8,lVar10,uVar12,uVar13,uVar6);
        goto LAB_10390c5e8;
      }
      lStack_1e0 = lVar7;
      lStack_1d8 = lVar9;
      uStack_1d0 = uVar11;
      uStack_1c8 = uStack_210;
      uStack_1c0 = uVar5;
      lStack_1b0 = lVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar13;
      uStack_198 = uVar6;
      FUN_10390b32c(&lStack_160,alStack_208);
      plVar2 = &lStack_190;
      plVar4 = alStack_208;
    }
    else {
LAB_10390c3b8:
      lStack_1e0 = lVar7;
      lStack_1d8 = lVar9;
      uStack_1d0 = uVar11;
      uStack_1c8 = uStack_210;
      uStack_1c0 = uVar5;
      lStack_1b8 = lVar8;
      lStack_1b0 = lVar10;
      uStack_1a8 = uVar12;
      uStack_1a0 = uVar13;
      uStack_198 = uVar6;
      FUN_10390b32c(&lStack_a0,&lStack_100);
      plVar2 = &lStack_d0;
      plVar4 = &lStack_100;
    }
LAB_10390c4e0:
    FUN_10390b32c(plVar2,plVar4);
    FUN_10390d2f8(&lStack_1e0);
  }
  else {
    if ((uVar12 & 0xff) == 2) goto LAB_10390c3b8;
    if (lVar7 == lVar8) {
      if (lVar9 == lVar10) {
        if ((((uint)uVar12 ^ (uint)uVar11) & 1) == 0) {
          FUN_10390b32c(&lStack_a0,&lStack_1e0);
          FUN_10390b32c(&lStack_d0,&lStack_1e0);
          uVar3 = uStack_210;
          func_0x000100e25fcc(uStack_210,uVar5,uVar13,uVar6);
          func_0x00010390b2c8(lVar7,lVar9,uVar12,uVar13,uVar6);
          if ((uVar3 & 1) != 0) goto LAB_10390c268;
          goto LAB_10390c5e8;
        }
        FUN_10390b32c(&lStack_a0,&lStack_1e0);
        plVar2 = &lStack_d0;
        lVar10 = lVar9;
        lVar8 = lVar7;
LAB_10390c488:
        FUN_10390b32c(plVar2,&lStack_1e0);
        lVar9 = lVar10;
        lVar7 = lVar8;
      }
      else {
        FUN_10390b32c(&lStack_a0,&lStack_1e0);
        plVar2 = &lStack_d0;
        lVar8 = lVar7;
LAB_10390c5b8:
        FUN_10390b32c(plVar2,&lStack_1e0);
        lVar7 = lVar8;
      }
    }
    else {
      FUN_10390b32c(&lStack_a0,&lStack_1e0);
      plVar2 = &lStack_d0;
LAB_10390c500:
      FUN_10390b32c(plVar2,&lStack_1e0);
    }
    func_0x00010390b2c8(lVar8,lVar10,uVar12,uVar13,uVar6);
LAB_10390c5e8:
    func_0x00010390b2c8(lVar7,lVar9,uVar11,uStack_210,uVar5);
  }
  uVar1 = 0;
LAB_10390c5f4:
  return uVar1 & 1;
}



/* Entry: 10390c734; end: 10390c773;  */

void FUN_10390c734(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22228;
  func_0x000107c61520(&UNK_10dc22228,&UNK_1106ab058);
  puRam0000000112fadf70 = puVar1;
  return;
}



/* Entry: 10390c774; end: 10390c797;  */

void FUN_10390c774(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10390c798();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10390c798; end: 10390c7d7;  */

void FUN_10390c798(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22050;
  func_0x000107c61520(&UNK_10dc22050,&UNK_1106aaf48);
  puRam0000000112fadf78 = puVar1;
  return;
}



/* Entry: 10390c7d8; end: 10390c7ef;  */

void FUN_10390c7d8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10390c158();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)&SUB_101b8817c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10390c7f0; end: 10390c82f;  */

void FUN_10390c7f0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc220b8;
  func_0x000107c61520(&UNK_10dc220b8,&UNK_1106aaf48);
  puRam0000000112fadf80 = puVar1;
  return;
}



/* Entry: 10390c830; end: 10390c853;  */

void FUN_10390c830(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10390c854();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10390c854; end: 10390c893;  */

void FUN_10390c854(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22128;
  func_0x000107c61520(&UNK_10dc22128,&UNK_1106aafd0);
  puRam0000000112fadf88 = puVar1;
  return;
}



/* Entry: 10390c894; end: 10390c8a7;  */

void FUN_10390c894(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10390c198)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10390c8a8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10390c8a8; end: 10390c8e7;  */

void FUN_10390c8a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc220e0;
  func_0x000107c61520(&DAT_10dc220e0,&UNK_1106aafd0);
  puRam0000000112fadf90 = puVar1;
  return;
}



/* Entry: 10390c8e8; end: 10390c8eb;  */

void FUN_10390c8e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22190;
  func_0x000107c61520(&UNK_10dc22190,&UNK_1106aafd0);
  puRam0000000112fadf98 = puVar1;
  return;
}



/* Entry: 10390c8ec; end: 10390c92b;  */

void FUN_10390c8ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadf98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22190;
  func_0x000107c61520(&UNK_10dc22190,&UNK_1106aafd0);
  puRam0000000112fadf98 = puVar1;
  return;
}



/* Entry: 10390c92c; end: 10390c94f;  */

void FUN_10390c92c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10390c950();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10390c950; end: 10390c98f;  */

void FUN_10390c950(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadfa0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22200;
  func_0x000107c61520(&UNK_10dc22200,&UNK_1106ab058);
  puRam0000000112fadfa0 = puVar1;
  return;
}



/* Entry: 10390c990; end: 10390c9a3;  */

void FUN_10390c990(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10390c734();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10390c9d4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10390c9a4; end: 10390c9d3;  */

void FUN_10390c9a4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10390c9d4; end: 10390ca13;  */

void FUN_10390c9d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadfa8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc221b8;
  func_0x000107c61520(&DAT_10dc221b8,&UNK_1106ab058);
  puRam0000000112fadfa8 = puVar1;
  return;
}



/* Entry: 10390ca14; end: 10390ca17;  */

void FUN_10390ca14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadfb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22268;
  func_0x000107c61520(&UNK_10dc22268,&UNK_1106ab058);
  puRam0000000112fadfb0 = puVar1;
  return;
}



/* Entry: 10390ca18; end: 10390ca57;  */

void FUN_10390ca18(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadfb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc22268;
  func_0x000107c61520(&UNK_10dc22268,&UNK_1106ab058);
  puRam0000000112fadfb0 = puVar1;
  return;
}



/* Entry: 10390ca58; end: 10390ca67;  */

undefined1  [16] FUN_10390ca58(void)

{
  return ZEXT816(0x1106aaf48);
}



/* Entry: 10390ca68; end: 10390cb0f;  */

undefined8 * FUN_10390ca68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[3];
  uVar1 = param_2[4];
  func_0x00010006c00c(uVar2,uVar1);
  param_1[3] = uVar2;
  param_1[4] = uVar1;
  return param_1;
}



/* Entry: 10390cb10; end: 10390cb57;  */

undefined8 * FUN_10390cb10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 10390cb58; end: 10390cc07;  */

int FUN_10390cb58(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = *(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10390cc08; end: 10390cc73;  */

/* WARNING: Possible PIC construction at 0x00010390cc20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010390cc48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010390cc24) */
/* WARNING: Removing unreachable block (ram,0x00010390cc30) */
/* WARNING: Removing unreachable block (ram,0x00010390cc38) */
/* WARNING: Removing unreachable block (ram,0x00010390cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010390cc64) */
/* WARNING: Removing unreachable block (ram,0x00010390cc58) */
/* WARNING: Removing unreachable block (ram,0x00010390cc44) */

void FUN_10390cc08(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 10390cc74; end: 10390cfef;  */

undefined8 * FUN_10390cc74(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  func_0x00010006c00c(uVar2,uVar3);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  cVar1 = *(char *)(param_2 + 4);
  if (cVar1 == '\x02') {
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    *(char *)(param_1 + 4) = cVar1;
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[5] = uVar2;
    param_1[6] = uVar3;
  }
  cVar1 = *(char *)(param_2 + 9);
  if (cVar1 == '\x02') {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    uVar2 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar2;
    param_1[0xb] = param_2[0xb];
  }
  else {
    uVar2 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar2;
    *(char *)(param_1 + 9) = cVar1;
    uVar2 = param_2[10];
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[10] = uVar2;
    param_1[0xb] = uVar3;
  }
  cVar1 = *(char *)(param_2 + 0xe);
  if (cVar1 == '\x02') {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    param_1[0x10] = param_2[0x10];
  }
  else {
    uVar2 = param_2[0xc];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    *(char *)(param_1 + 0xe) = cVar1;
    uVar2 = param_2[0xf];
    uVar3 = param_2[0x10];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar3;
  }
  return param_1;
}



/* Entry: 10390cff0; end: 10390d01b;  */

long FUN_10390cff0(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Entry: 10390d01c; end: 10390d163;  */

undefined8 * FUN_10390d01c(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_1;
  uVar3 = param_1[1];
  uVar4 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  func_0x00010006c090(uVar2,uVar3);
  if (*(char *)(param_1 + 4) == '\x02') {
LAB_10390d06c:
    uVar2 = param_2[2];
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[5] = uVar4;
    param_1[4] = uVar3;
    param_1[6] = param_2[6];
  }
  else {
    bVar1 = *(byte *)(param_2 + 4);
    if (bVar1 == 2) {
      FUN_10390cff0(param_1 + 2);
      goto LAB_10390d06c;
    }
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    *(byte *)(param_1 + 4) = bVar1 & 1;
    uVar2 = param_1[5];
    uVar3 = param_1[6];
    uVar4 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar4;
    func_0x00010006c090(uVar2,uVar3);
  }
  if (*(char *)(param_1 + 9) != '\x02') {
    bVar1 = *(byte *)(param_2 + 9);
    if (bVar1 != 2) {
      uVar2 = param_2[7];
      param_1[8] = param_2[8];
      param_1[7] = uVar2;
      *(byte *)(param_1 + 9) = bVar1 & 1;
      uVar2 = param_1[10];
      uVar3 = param_1[0xb];
      uVar4 = param_2[10];
      param_1[0xb] = param_2[0xb];
      param_1[10] = uVar4;
      func_0x00010006c090(uVar2,uVar3);
      goto LAB_10390d0fc;
    }
    FUN_10390cff0(param_1 + 7);
  }
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_2[9];
  param_1[10] = param_2[10];
  param_1[9] = uVar2;
  param_1[0xb] = param_2[0xb];
LAB_10390d0fc:
  if (*(char *)(param_1 + 0xe) != '\x02') {
    bVar1 = *(byte *)(param_2 + 0xe);
    if (bVar1 != 2) {
      uVar2 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      *(byte *)(param_1 + 0xe) = bVar1 & 1;
      uVar2 = param_1[0xf];
      uVar3 = param_1[0x10];
      uVar4 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar4;
      func_0x00010006c090(uVar2,uVar3);
      return param_1;
    }
    FUN_10390cff0(param_1 + 0xc);
  }
  uVar2 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x10] = param_2[0x10];
  return param_1;
}



/* Entry: 10390d164; end: 10390d237;  */

int FUN_10390d164(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && ((char)param_1[0x22] != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = 0xfffffffe;
  if (1 < *(byte *)(param_1 + 8)) {
    uVar1 = (*(byte *)(param_1 + 8) + 0x7ffffffe & 0x7fffffff) - 1;
  }
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10390d238; end: 10390d2f7;  */

void FUN_10390d238(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fadfc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc221d4;
  func_0x000107c61520(&DAT_10dc221d4,&UNK_1106ab058);
  puRam0000000112fadfc0 = puVar1;
  return;
}



/* Entry: 10390d2f8; end: 10390d33f;  */

undefined8 FUN_10390d2f8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112fadfe8;
  func_0x0001000285a8(0x112fadfe8,&UNK_10dc22328);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10390d340; end: 10390d3bb;  */

void FUN_10390d340(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[4] = 0xc000000000000000;
  param_1[3] = 0;
  return;
}



/* Entry: 10390d3bc; end: 10390d40b;  */

void FUN_10390d3bc(void)

{
  func_0x000100d62de8();
  return;
}



/* Entry: 10390d40c; end: 10390d457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10390d40c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112fadff8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10390d458; end: 10390d593;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10390d458(void)

{
  undefined *puVar1;
  undefined8 in_x3;
  long in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 uVar2;
  undefined8 in_stack_00000008;
  long in_stack_00000010;
  undefined *apuStack_80 [2];
  undefined8 auStack_70 [2];
  
  if (in_x4 == 0) {
    in_x3 = 0;
  }
  else {
    func_0x000107c5fadc(in_x3,in_x4);
  }
  func_0x000107c5fadc(in_x5,in_x6);
  uVar2 = 0;
  if (in_stack_00000010 != 0) {
    func_0x000107c5fadc(in_stack_00000008,in_stack_00000010);
    uVar2 = in_stack_00000008;
  }
  puVar1 = PTR_PTR_1126aa228;
  func_0x000107c610f8();
  func_0x000107c48088();
  func_0x000107c61170(in_x3);
  func_0x000107c61170(in_x5);
  func_0x000107c61170(uVar2);
  apuStack_80[0] = puVar1;
  func_0x00010008a7c8(auStack_70,apuStack_80);
  func_0x000100083b20(apuStack_80);
  func_0x000107c61574(auStack_70[0]);
  func_0x000107c615e8(apuStack_80[0]);
  return puVar1;
}



/* Entry: 10390d594; end: 10390d72b; -[_TtC17SCRemixScopeProxy20SCRemixScopeServices buildWithPresentingViewController:externalMediaItem:replyParameters:sourceUserId:sourceSnapId:sourceTrackInfo:remixPermission:contextSessionId:launchSource:navigationType:delegate:shouldDisableRecovery:] */

void FUN_10390d594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined1 param_14)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_a0;
  undefined8 uStack_70;
  
  if (param_6 == 0) {
    uStack_a0 = 0;
    uStack_70 = 0;
  }
  else {
    func_0x000107c5faec();
    uStack_a0 = param_6;
    uStack_70 = param_2;
  }
  func_0x000107c5faec();
  if (param_10 == 0) {
    param_10 = 0;
    uVar4 = 0;
  }
  else {
    uVar4 = param_2;
    func_0x000107c5faec();
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  uVar2 = param_8;
  func_0x000107c61174(param_8);
  func_0x000107c615f0(param_13);
  func_0x000107c61174(param_1);
  uVar3 = param_3;
  FUN_10390d458(param_3,param_4,param_5,uStack_a0,uStack_70,param_7,param_2,param_8,param_9,param_10
                ,uVar4,param_11,param_12,param_13,param_14);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(param_13);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar4);
  func_0x000107c6142c(uStack_70);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10390d72c; end: 10390d75b;  */

void FUN_10390d72c(void)

{
  func_0x000100371af0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10390d75c; end: 10390d79b; -[_TtC17SCRemixScopeProxy20SCRemixScopeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10390d75c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fadff8));
  return;
}



/* Entry: 10390d79c; end: 10390e233;  */

ulong FUN_10390d79c(ulong param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  char cVar19;
  undefined *puVar20;
  ulong uVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dStack_130;
  ulong uStack_f0;
  undefined *puStack_e0;
  char cStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined8 uStack_b0;
  undefined *puStack_a8;
  undefined *apuStack_a0 [2];
  
  if (param_1 >> 0x3e == 0) {
    uVar21 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar21 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar21 = param_1;
    }
    func_0x000107c60480();
    puVar16 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar16;
  if (uVar21 != 0) {
    uStack_f0 = param_1 & 0xffffffffffffff8;
    dVar22 = 4.94065645841247e-324;
    dStack_130 = 4.94065645841247e-324;
    uVar18 = 0;
    do {
      while( true ) {
        if ((param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uStack_f0 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e104);
            (*pcVar4)();
          }
          uVar6 = *(ulong *)(param_1 + uVar18 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar6 = uVar18;
          FUN_10391180c(uVar18,param_1,&PTR_PTR_1126aff40,0x112d62390);
        }
        uVar1 = uVar18 + 1;
        if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e100);
          (*pcVar4)();
        }
        puVar20 = (undefined *)0x0;
        uVar7 = uVar6;
        FUN_10390feb0(uVar6,0,0,0,1);
        if (uVar7 == 0) {
          apuStack_a0[0] = (undefined *)0x0;
          uVar7 = uVar6;
          func_0x000107c45218(uVar6);
          func_0x000107c61180();
          puVar20 = &UNK_1106abad0;
          func_0x000107c613fc(&UNK_1106abad0,0x18,7);
          *(undefined ***)(puVar20 + 0x10) = apuStack_a0;
          puVar15 = &UNK_1106abaf8;
          func_0x000107c613fc(&UNK_1106abaf8,0x20,7);
          *(code **)(puVar15 + 0x10) = FUN_103912ae8;
          *(undefined **)(puVar15 + 0x18) = puVar20;
          uStack_b0 = 0x103913000;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_101382510;
          puStack_b8 = &UNK_1106abb10;
          ppuVar13 = &puStack_d0;
          puStack_a8 = puVar15;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61574(puStack_a8);
          func_0x000107c4c668(uVar7);
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(uVar7);
          puVar15 = apuStack_a0[0];
          func_0x0001000285a8(0x112fae040,&UNK_10dc22480);
          if (puVar15 == (undefined *)0x0) {
            puStack_d0 = (undefined *)0x0;
          }
          else {
            puStack_d0 = puVar15;
          }
          ppuVar13 = &puStack_d0;
          func_0x000104888f7c(ppuVar13);
          puVar15 = apuStack_a0[0];
          func_0x000107c61574(puVar20);
          func_0x000107c615e8(puVar15);
        }
        else {
          puVar15 = PTR_PTR_1126b25c0;
          func_0x000107c610f8(PTR_PTR_1126b25c0);
          func_0x000107c453e4();
          uVar17 = param_3;
          func_0x000107c42428();
          func_0x000107c61180();
          func_0x000107c61170(puVar15);
          apuStack_a0[0] = (undefined *)((ulong)apuStack_a0[0] & 0xffffffffffffff00);
          uVar8 = uVar6;
          func_0x000107c45218(uVar6);
          func_0x000107c61180();
          puVar15 = &UNK_1106abb48;
          func_0x000107c613fc(&UNK_1106abb48,0x18,7);
          *(undefined ***)(puVar15 + 0x10) = apuStack_a0;
          puVar14 = &UNK_1106abb70;
          func_0x000107c613fc(&UNK_1106abb70,0x20,7);
          *(code **)(puVar14 + 0x10) = FUN_103912b18;
          *(undefined **)(puVar14 + 0x18) = puVar15;
          uStack_b0 = 0x103913004;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_c8 = 0x42000000;
          puStack_c0 = &UNK_101a36974;
          puStack_b8 = &UNK_1106abb88;
          ppuVar13 = &puStack_d0;
          puStack_a8 = puVar14;
          func_0x000107c60bc4(ppuVar13);
          func_0x000107c61574(puStack_a8);
          func_0x000107c4c668(uVar8);
          func_0x000107c60bd0(ppuVar13);
          func_0x000107c61170(uVar8);
          if ((char)apuStack_a0[0] == '\x01') {
            uVar8 = uVar6;
            func_0x000107c5d060();
            func_0x000107c61180();
            func_0x000107c3ab44(&puStack_d0);
            puVar3 = puStack_a8;
            uVar2 = uStack_b0;
            puVar12 = puStack_b8;
            puVar11 = puStack_c0;
            uVar9 = uStack_c8;
            puVar14 = puStack_d0;
            func_0x000107c61170(uVar8);
            puStack_d0 = puVar14;
            uStack_c8 = uVar9;
            puStack_c0 = puVar11;
            func_0x000107c60a3c(&puStack_d0);
            dVar23 = dVar22 * 1000.0;
            if (dVar23 < 0.0) {
              dVar23 = 0.0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar23)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e108);
              (*pcVar4)();
            }
            if (dVar23 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e10c);
              (*pcVar4)();
            }
            dVar24 = 1.8446744073709552e+19;
            if (1.8446744073709552e+19 <= dVar23) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e110);
              (*pcVar4)();
            }
            puStack_d0 = puVar12;
            uStack_c8 = uVar2;
            puStack_c0 = puVar3;
            func_0x000107c60a3c(&puStack_d0);
            dVar24 = dVar24 * 1000.0;
            if (dVar24 < 0.0) {
              dVar24 = 0.0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar24)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e114);
              (*pcVar4)();
            }
            if (dVar24 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e118);
              (*pcVar4)();
            }
            if (1.8446744073709552e+19 <= dVar24) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10390e11c);
              (*pcVar4)();
            }
            puVar14 = PTR_PTR_1126affe0;
            func_0x000107c61168();
            puVar11 = puVar14;
            func_0x000100fe4224();
            func_0x000107c613fc();
            *(undefined8 *)(puVar11 + 0x18) = 3;
            *(undefined8 *)(puVar11 + 0x10) = 1;
            *(undefined **)(puVar11 + 0x20) = puVar20;
            uVar9 = 0;
            dVar22 = dStack_130;
            FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
            func_0x000107c61174();
            puVar12 = puVar11;
            func_0x000107c5fc48(puVar11,uVar9);
            func_0x000107c61574(puVar11);
            func_0x000107c3d5d0();
            func_0x000107c61180();
            func_0x000107c61170(puVar12);
            if (puVar14 == (undefined *)0x0) {
              func_0x0001000285a8(0x112fae040,&UNK_10dc22480);
              puStack_d0 = (undefined *)0x0;
              ppuVar10 = &puStack_d0;
              func_0x000104888f7c(ppuVar10);
            }
            else {
              func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
              puVar12 = puVar14;
              func_0x000100759c94(puVar14,0);
              puVar11 = &UNK_1106abc10;
              func_0x000107c613fc(&UNK_1106abc10,0x20,7);
              *(ulong *)(puVar11 + 0x10) = uVar7;
              *(undefined8 *)(puVar11 + 0x18) = uVar17;
              func_0x000107c61174(uVar7);
              func_0x000107c615f0(uVar17);
              uVar9 = 0x112d51140;
              func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
              ppuVar10 = (undefined **)0x0;
              func_0x000100759f5c(0,1,0x103912fd0,puVar11,uVar9);
              func_0x000107c61574(puVar11);
              func_0x000107c61574(puVar12);
              func_0x000107c61170(puVar14);
            }
            uVar9 = 0x112d51140;
            puVar14 = &UNK_1106abbe8;
            func_0x000107c613fc(&UNK_1106abbe8,0x20,7);
            *(long *)(puVar14 + 0x10) = (long)dVar23;
            *(long *)(puVar14 + 0x18) = (long)dVar24;
            func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
            ppuVar13 = (undefined **)0x0;
            func_0x000100775264(0,1,FUN_103912b28,puVar14,uVar9);
            func_0x000107c615e8(uVar17);
            func_0x000107c61170(puVar20);
            func_0x000107c61170(uVar7);
            func_0x000107c61574(puVar14);
            func_0x000107c61574(ppuVar10);
          }
          else {
            puVar14 = PTR_PTR_1126affe0;
            func_0x000107c61168();
            puVar11 = puVar14;
            func_0x000100fe4224();
            func_0x000107c613fc();
            *(undefined8 *)(puVar11 + 0x18) = 3;
            *(undefined8 *)(puVar11 + 0x10) = 1;
            *(undefined **)(puVar11 + 0x20) = puVar20;
            uVar9 = 0;
            dVar22 = dStack_130;
            FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
            func_0x000107c61174(puVar20);
            puVar12 = puVar11;
            func_0x000107c5fc48(puVar11,uVar9);
            func_0x000107c61574(puVar11);
            func_0x000107c3d5d0();
            func_0x000107c61180();
            func_0x000107c61170(puVar12);
            if (puVar14 == (undefined *)0x0) {
              func_0x0001000285a8(0x112fae040,&UNK_10dc22480);
              puStack_d0 = (undefined *)0x0;
              ppuVar13 = &puStack_d0;
              func_0x000104888f7c(ppuVar13);
              func_0x000107c615e8(uVar17);
              func_0x000107c61170(uVar7);
            }
            else {
              func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
              puVar12 = puVar14;
              func_0x000100759c94(puVar14,0);
              puVar11 = &UNK_1106abbc0;
              func_0x000107c613fc(&UNK_1106abbc0,0x20,7);
              *(ulong *)(puVar11 + 0x10) = uVar7;
              *(undefined8 *)(puVar11 + 0x18) = uVar17;
              func_0x000107c61174(uVar7);
              func_0x000107c615f0(uVar17);
              uVar9 = 0x112d51140;
              func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
              ppuVar13 = (undefined **)0x0;
              func_0x000100759f5c(0,1,0x103912fbc,puVar11,uVar9);
              func_0x000107c615e8(uVar17);
              func_0x000107c61170(uVar7);
              func_0x000107c61170(puVar20);
              func_0x000107c61574(puVar11);
              func_0x000107c61574(puVar12);
              puVar20 = puVar14;
            }
            func_0x000107c61170(puVar20);
          }
          func_0x000107c61574(puVar15);
        }
        func_0x0001048886ac(&puStack_e0);
        func_0x000107c61574(ppuVar13);
        cVar19 = cStack_d8;
        puVar20 = puStack_e0;
        if (cStack_d8 != '\x01') break;
        puStack_d0 = puStack_e0;
        iVar5 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar5 != 0) {
          uVar17 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(&puStack_d0,uVar17,PTR___ss5ErrorWS_11034ee10);
        }
        func_0x000107c61170(uVar6);
        cVar19 = '\x01';
LAB_10390d844:
        FUN_103911fac(puVar20,cVar19,PTR__swift_unknownObjectRelease_11034f530);
        uVar18 = uVar18 + 1;
        if (uVar1 == uVar21) goto LAB_10390e140;
      }
      func_0x000107c61170(uVar6);
      if (puVar20 == (undefined *)0x0) {
        puVar20 = (undefined *)0x0;
        goto LAB_10390d844;
      }
      puVar15 = puVar16;
      func_0x000107c61550();
      if ((((int)puVar15 == 0) || ((long)puVar16 < 0)) ||
         (puVar15 = puVar16, ((ulong)puVar16 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar16 >> 0x3e == 0) {
          puVar14 = *(undefined **)(((ulong)puVar16 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar14 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar16) {
            puVar14 = puVar16;
          }
          func_0x000107c60480(puVar14);
        }
        puVar15 = (undefined *)0x0;
        FUN_1039114f0(0,puVar14 + 1,1,puVar16);
      }
      uVar6 = (ulong)puVar15 & 0xffffffffffffff8;
      uVar18 = *(ulong *)(uVar6 + 0x10);
      puVar16 = puVar15;
      if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar18) {
        puVar16 = (undefined *)(ulong)(1 < *(ulong *)(uVar6 + 0x18));
        FUN_1039114f0(puVar16,uVar18 + 1,1,puVar15);
        uVar6 = (ulong)puVar16 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar6 + 0x10) = uVar18 + 1;
      *(undefined **)(uVar6 + uVar18 * 8 + 0x20) = puVar20;
      uVar18 = uVar1;
    } while (uVar1 != uVar21);
  }
LAB_10390e140:
  uVar17 = 0x112d51138;
  func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
  puVar20 = puVar16;
  func_0x000107c5fc48(puVar16,uVar17);
  func_0x000107c45208();
  func_0x000107c61180();
  func_0x000107c61170(puVar20);
  uVar17 = 0;
  FUN_103912258(0,0x112d50c78,&PTR_PTR_1126b25c0);
  uVar21 = param_2;
  func_0x000107c5fc54(param_2,uVar17);
  func_0x000107c61170(param_2);
  if (uVar21 >> 0x3e == 0) {
    uVar18 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar18 = uVar21 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar21) {
      uVar18 = uVar21;
    }
    func_0x000107c60480();
  }
  if (uVar18 == 0 && (ulong)puVar16 >> 0x3e != 0) {
    puVar20 = (undefined *)((ulong)puVar16 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar16) {
      puVar20 = puVar16;
    }
    func_0x000107c60480(puVar20);
  }
  func_0x000107c6142c(puVar16);
  return uVar21;
}



/* Entry: 10390e234; end: 10390e30f; +[SCSnapDocImportUtils importDirectorModeSegments:to:using:] */

void FUN_10390e234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  FUN_103912258(0,0x112d62390,&PTR_PTR_1126aff40);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c614ec(param_1);
  func_0x000107c615f0(param_4);
  func_0x000107c615f0(param_5);
  uVar1 = param_3;
  FUN_10390d79c(param_3,param_4,param_5);
  func_0x000107c615e8(param_4);
  func_0x000107c615e8(param_5);
  func_0x000107c6142c(param_3);
  uVar2 = 0;
  FUN_103912258(0,0x112d50c78,&PTR_PTR_1126b25c0);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10390e310; end: 10390fe4b;  */

/* WARNING: Type propagation algorithm not settling */

void FUN_10390e310(undefined *param_1,ulong param_2,undefined8 param_3,undefined *param_4,
                  code *param_5,undefined *param_6,ulong param_7)

{
  char cVar1;
  code *pcVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined **ppuVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined *puVar20;
  undefined *puVar21;
  uint *puVar22;
  uint uVar23;
  undefined8 uVar24;
  undefined *puVar25;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  long lVar29;
  undefined *puVar30;
  ulong uVar31;
  undefined *puVar32;
  undefined8 *puVar33;
  undefined *puVar34;
  ulong uVar35;
  undefined *puVar36;
  double dVar37;
  undefined *puStack_180;
  undefined *puStack_178;
  undefined8 uStack_170;
  undefined *puStack_168;
  code *pcStack_160;
  double dStack_150;
  char cStack_d9;
  undefined *puStack_d8;
  undefined *puStack_d0;
  code *pcStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined *apuStack_a0 [2];
  
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar30 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar30 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar30 = param_1;
    }
    func_0x000107c60480();
  }
  if (puVar30 == (undefined *)0x0) {
    return;
  }
  uVar24 = 0;
  puVar27 = (undefined *)0x0;
  puStack_168 = (undefined *)0x0;
  pcStack_160 = (code *)0x0;
  puStack_178 = (undefined *)0x0;
  uStack_170 = 0;
  puStack_180 = (undefined *)0x0;
  puVar36 = (undefined *)0x0;
  dVar37 = 4.94065645841247e-324;
  dStack_150 = 4.94065645841247e-324;
  uVar35 = param_7;
  if (((ulong)param_1 & 0xc000000000000001) == 0) goto LAB_10390e3f4;
LAB_10390e3d4:
  puVar7 = puVar36;
  FUN_10391180c(puVar36,param_1,&PTR_PTR_1126aff40,0x112d62390);
  puVar8 = puVar27;
  do {
    bVar4 = SCARRY8((long)puVar36,1);
    puVar36 = puVar36 + 1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fd90);
      (*pcVar3)();
    }
    apuStack_a0[0] = (undefined *)0x0;
    puVar28 = puVar7;
    func_0x000107c45218(puVar7);
    func_0x000107c61180();
    puVar27 = &UNK_1106ab2c0;
    func_0x000107c613fc(&UNK_1106ab2c0,0x18,7);
    *(undefined ***)(puVar27 + 0x10) = apuStack_a0;
    func_0x000100d62e80(uVar24,puVar8);
    puVar8 = &UNK_1106ab2e8;
    func_0x000107c613fc(&UNK_1106ab2e8,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = 0x103913010;
    *(undefined **)(puVar8 + 0x18) = puVar27;
    pcStack_b0 = FUN_1039117d0;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_c8 = (code *)0x42000000;
    puStack_c0 = &UNK_101382510;
    puStack_b8 = &UNK_1106ab300;
    ppuVar17 = &puStack_d0;
    puStack_a8 = puVar8;
    func_0x000107c60bc4(ppuVar17);
    func_0x000107c61574(puStack_a8);
    func_0x000107c4c668(puVar28);
    func_0x000107c60bd0(ppuVar17);
    func_0x000107c61170(puVar28);
    puVar8 = apuStack_a0[0];
    if (apuStack_a0[0] == (undefined *)0x0) {
      puVar8 = puVar7;
      puVar28 = param_4;
      FUN_10390feb0(puVar7,param_4,param_5,param_6,uVar35);
      if (puVar8 != (undefined *)0x0) {
        puVar10 = PTR_PTR_1126affe0;
        func_0x000107c61168();
        puVar9 = puVar10;
        func_0x000100fe4224();
        func_0x000107c613fc();
        *(undefined8 *)(puVar9 + 0x18) = 3;
        *(undefined8 *)(puVar9 + 0x10) = 1;
        *(undefined **)(puVar9 + 0x20) = puVar28;
        uVar24 = 0;
        dVar37 = dStack_150;
        FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
        func_0x000107c61174();
        puVar18 = puVar9;
        func_0x000107c5fc48(puVar9,uVar24);
        func_0x000107c61574(puVar9);
        func_0x000107c3d5d0();
        func_0x000107c61180();
        func_0x000107c61170(puVar18);
        if (puVar10 == (undefined *)0x0) {
          func_0x0001000285a8(0x112fae040,&UNK_10dc22480);
          puStack_d8 = (undefined *)0x0;
          ppuVar17 = &puStack_d8;
          func_0x000104888f7c(ppuVar17);
        }
        else {
          func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
          puVar18 = puVar10;
          func_0x000100759c94(puVar10,0);
          puVar9 = &UNK_1106ab478;
          func_0x000107c613fc(&UNK_1106ab478,0x20,7);
          *(undefined **)(puVar9 + 0x10) = puVar8;
          *(ulong *)(puVar9 + 0x18) = param_2;
          func_0x000107c615f0(param_2);
          func_0x000107c61174(puVar8);
          uVar24 = 0x112d51140;
          func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
          ppuVar17 = (undefined **)0x0;
          func_0x000100759f5c(0,1,FUN_1039119c8,puVar9,uVar24);
          func_0x000107c61170(puVar10);
          func_0x000107c61574(puVar18);
          func_0x000107c61574(puVar9);
        }
        func_0x0001048886ac(&puStack_d0);
        func_0x000107c61574(ppuVar17);
        puVar10 = puStack_d0;
        if ((char)pcStack_c8 != '\x01') {
          if (puStack_d0 == (undefined *)0x0) {
            FUN_103911fac(0,(ulong)pcStack_c8 & 0xff,PTR__swift_unknownObjectRelease_11034f530);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar28);
            func_0x000107c61170(puVar7);
            goto LAB_10390e904;
          }
          FUN_103911fac(puStack_d0,(ulong)pcStack_c8 & 0xff,
                        PTR__swift_unknownObjectRelease_11034f530);
          puVar10 = puVar7;
          func_0x000107c5d060(puVar7);
          func_0x000107c61180();
          func_0x000107c3ab44(&puStack_d0);
          puVar34 = puStack_a8;
          pcVar2 = pcStack_b0;
          puVar11 = puStack_b8;
          puVar32 = puStack_c0;
          pcVar3 = pcStack_c8;
          puVar18 = puStack_d0;
          func_0x000107c61170(puVar10);
          puStack_d8 = (undefined *)((ulong)puStack_d8 & 0xffffffffffffff00);
          puVar25 = puVar7;
          func_0x000107c45218(puVar7);
          func_0x000107c61180();
          puVar10 = &UNK_1106ab338;
          func_0x000107c613fc(&UNK_1106ab338,0x18,7);
          *(undefined ***)(puVar10 + 0x10) = &puStack_d8;
          func_0x000100d62e80(pcStack_160,puStack_168);
          puVar9 = &UNK_1106ab360;
          func_0x000107c613fc(&UNK_1106ab360,0x20,7);
          *(code **)(puVar9 + 0x10) = FUN_103912ef8;
          *(undefined **)(puVar9 + 0x18) = puVar10;
          pcStack_b0 = FUN_103912fe4;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_c8 = (code *)0x42000000;
          puStack_c0 = &UNK_1019fdb4c;
          puStack_b8 = &UNK_1106ab378;
          ppuVar17 = &puStack_d0;
          puStack_a8 = puVar9;
          func_0x000107c60bc4(ppuVar17);
          func_0x000107c61574(puStack_a8);
          func_0x000107c4c668(puVar25);
          func_0x000107c60bd0(ppuVar17);
          func_0x000107c61170(puVar25);
          if ((((uint)uVar35 & 0xff) == 1) || ((char)puStack_d8 != '\x01')) {
            puStack_d0 = puVar11;
            pcStack_c8 = pcVar2;
            puStack_c0 = puVar34;
            func_0x000107c60a3c(&puStack_d0);
            dVar37 = dVar37 * 1000.0;
            if (dVar37 < 0.0) {
              dVar37 = 0.0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fda4);
              (*pcVar3)();
            }
            if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fda8);
              (*pcVar3)();
            }
            if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdac);
              (*pcVar3)();
            }
          }
          else {
            puStack_d0 = param_4;
            pcStack_c8 = param_5;
            puStack_c0 = param_6;
            func_0x000107c60a3c(&puStack_d0);
            dVar37 = dVar37 * 1000.0;
            if (dVar37 < 0.0) {
              dVar37 = 0.0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fddc);
              (*pcVar3)();
            }
            if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fde0);
              (*pcVar3)();
            }
            if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fde4);
              (*pcVar3)();
            }
          }
          uVar19 = (ulong)dVar37;
          cStack_d9 = '\0';
          puVar34 = puVar7;
          func_0x000107c45218(puVar7);
          func_0x000107c61180();
          puVar9 = &UNK_1106ab3b0;
          func_0x000107c613fc(&UNK_1106ab3b0,0x18,7);
          *(char **)(puVar9 + 0x10) = &cStack_d9;
          func_0x000100d62e80(uStack_170,puStack_178);
          puVar11 = &UNK_1106ab3d8;
          func_0x000107c613fc(&UNK_1106ab3d8,0x20,7);
          *(undefined8 *)(puVar11 + 0x10) = 0x103912efc;
          *(undefined **)(puVar11 + 0x18) = puVar9;
          pcStack_b0 = (code *)0x103912fe8;
          puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
          pcStack_c8 = (code *)0x42000000;
          puStack_c0 = &UNK_101a36974;
          puStack_b8 = &UNK_1106ab3f0;
          ppuVar17 = &puStack_d0;
          puStack_a8 = puVar11;
          func_0x000107c60bc4(ppuVar17);
          func_0x000107c61574(puStack_a8);
          func_0x000107c4c668(puVar34);
          func_0x000107c60bd0(ppuVar17);
          func_0x000107c61170(puVar34);
          if (cStack_d9 == '\x01') {
            uVar35 = param_2;
            func_0x000107c5b198();
            func_0x000107c61180();
            uVar26 = uVar35;
            FUN_1039132cc();
            func_0x000107c61170(uVar35);
            if (uVar26 != 0) {
              if (uVar26 >> 0x3e == 0) {
                uVar35 = *(ulong *)((uVar26 & 0xffffffffffffff8) + 0x10);
                if (uVar35 != 0) goto LAB_10390ec50;
LAB_10390f664:
                func_0x000107c6142c(uVar26);
                puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
              }
              else {
                uVar35 = uVar26;
                if (-1 < (long)uVar26) {
                  uVar35 = uVar26 & 0xffffffffffffff8;
                }
                func_0x000107c60480();
                if (uVar35 == 0) goto LAB_10390f664;
LAB_10390ec50:
                puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                FUN_103035c00(0,uVar35 & ((long)uVar35 >> 0x3f ^ 0xffffffffffffffffU),0);
                if ((long)uVar35 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdf8);
                  (*pcVar3)();
                }
                if ((uVar26 & 0xc000000000000001) == 0) {
                  puVar33 = (undefined8 *)(uVar26 + 0x20);
                  do {
                    puVar11 = puStack_d0;
                    uVar6 = (undefined4)*puVar33;
                    func_0x000107c4e920();
                    uVar31 = *(ulong *)(puVar11 + 0x10);
                    puStack_d0 = puVar11;
                    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar31) {
                      FUN_103035c00(1 < *(ulong *)(puVar11 + 0x18),uVar31 + 1,1);
                    }
                    *(ulong *)(puStack_d0 + 0x10) = uVar31 + 1;
                    *(undefined4 *)(puStack_d0 + uVar31 * 4 + 0x20) = uVar6;
                    uVar35 = uVar35 - 1;
                    puVar33 = puVar33 + 1;
                  } while (uVar35 != 0);
                }
                else {
                  uVar31 = 0;
                  do {
                    puVar11 = puStack_d0;
                    uVar12 = uVar31;
                    FUN_10391180c(uVar31,uVar26,&PTR_PTR_1126b25d0,0x112d55598);
                    uVar13 = uVar12;
                    func_0x000107c4e920();
                    func_0x000107c615e8(uVar12);
                    uVar12 = *(ulong *)(puVar11 + 0x10);
                    puStack_d0 = puVar11;
                    if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar12) {
                      FUN_103035c00(1 < *(ulong *)(puVar11 + 0x18),uVar12 + 1,1);
                    }
                    uVar31 = uVar31 + 1;
                    *(ulong *)(puStack_d0 + 0x10) = uVar12 + 1;
                    *(int *)(puStack_d0 + uVar12 * 4 + 0x20) = (int)uVar13;
                  } while (uVar35 != uVar31);
                }
                puVar11 = puStack_d0;
                func_0x000107c6142c(uVar26);
              }
              if (*(long *)(puVar11 + 0x10) == 0) {
                func_0x000107c6142c(puVar11);
              }
              else {
                uVar23 = *(uint *)(puVar11 + 0x20);
                lVar29 = *(long *)(puVar11 + 0x10) + -1;
                if (lVar29 != 0) {
                  puVar22 = (uint *)(puVar11 + 0x24);
                  do {
                    if (uVar23 <= *puVar22) {
                      uVar23 = *puVar22;
                    }
                    lVar29 = lVar29 + -1;
                    puVar22 = puVar22 + 1;
                  } while (lVar29 != 0);
                }
                func_0x000107c6142c(puVar11);
              }
            }
            puStack_d0 = puVar18;
            pcStack_c8 = pcVar3;
            puStack_c0 = puVar32;
            func_0x000107c60a3c(&puStack_d0);
            dVar37 = dVar37 * 1000.0;
            if (dVar37 < 0.0) {
              dVar37 = 0.0;
            }
            if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdd0);
              (*pcVar3)();
            }
            if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdd4);
              (*pcVar3)();
            }
            if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdd8);
              (*pcVar3)();
            }
            lVar29 = (long)dVar37;
            puVar32 = PTR_PTR_1126affe8;
            func_0x000107c61168(PTR_PTR_1126affe8);
            func_0x000107c4b838();
            func_0x000107c61180();
            puVar18 = &UNK_1106ab428;
            func_0x000107c613fc(&UNK_1106ab428,0x20,7);
            *(long *)(puVar18 + 0x10) = lVar29;
            *(ulong *)(puVar18 + 0x18) = uVar19;
            pcStack_b0 = (code *)0x103913008;
            puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
            pcStack_c8 = (code *)0x42000000;
            puStack_c0 = &UNK_101e34e58;
            puStack_b8 = &UNK_1106ab440;
            ppuVar17 = &puStack_d0;
            puStack_a8 = puVar18;
            func_0x000107c60bc4(ppuVar17);
            func_0x000107c61574(puStack_a8);
            func_0x000107c5d684(param_2);
            func_0x000107c61180();
            func_0x000107c61170();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar28);
            func_0x000107c61170(puVar7);
            func_0x000107c60bd0(ppuVar17);
            uVar35 = param_7 & 0xffffffff;
            puVar7 = puVar32;
          }
          else {
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar28);
          }
          func_0x000107c61170(puVar7);
          bVar4 = CARRY8((ulong)puStack_180,uVar19);
          puStack_180 = puStack_180 + uVar19;
          if (bVar4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fda0);
            (*pcVar3)();
          }
          pcStack_160 = FUN_103912ef8;
          uStack_170 = 0x103912efc;
          puStack_178 = puVar9;
          puStack_168 = puVar10;
          goto LAB_10390e904;
        }
        puStack_d8 = puStack_d0;
        iVar5 = 2;
        func_0x000100029b9c(2,0x12,0,0);
        if (iVar5 != 0) {
          uVar24 = 0x112d393f0;
          func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
          func_0x000107c61658(&puStack_d8,uVar24,PTR___ss5ErrorWS_11034ee10);
        }
        FUN_103911fac(puVar10,1,PTR__swift_unknownObjectRelease_11034f530);
        func_0x000107c61170(puVar28);
        func_0x000107c61170(puVar7);
        puVar7 = puVar8;
      }
LAB_10390e900:
      func_0x000107c61170(puVar7);
    }
    else {
      puVar28 = apuStack_a0[0];
      func_0x000107c615f0();
      func_0x000107c5b198();
      func_0x000107c61180();
      puVar10 = puVar28;
      FUN_1039132cc();
      func_0x000107c61170(puVar28);
      if (puVar10 == (undefined *)0x0) {
LAB_10390e828:
        func_0x000107c615e8(puVar8);
        goto LAB_10390e900;
      }
      puVar28 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((ulong)puVar10 >> 0x3e == 0) {
        puVar9 = *(undefined **)(puVar28 + 0x10);
      }
      else {
        puVar9 = puVar10;
        if (-1 < (long)puVar10) {
          puVar9 = puVar28;
        }
        func_0x000107c60480();
      }
      if (puVar9 != (undefined *)0x0) {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(long *)(puVar28 + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fd98);
            (*pcVar3)();
          }
          puVar28 = *(undefined **)(puVar10 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar28 = (undefined *)0x0;
          FUN_10391180c(0,puVar10,&PTR_PTR_1126b25d0,0x112d55598);
        }
        func_0x000107c6142c(puVar10);
        puVar10 = puVar28;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe28);
          (*pcVar3)();
        }
        puVar9 = puVar10;
        func_0x000107c44984();
        func_0x000107c61170(puVar10);
        if ((int)puVar9 != 0) {
          puVar10 = puVar28;
          func_0x000107c4c930();
          func_0x000107c61180();
          if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe2c);
            (*pcVar3)();
          }
          puVar9 = puVar10;
          func_0x000107c4c99c();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          if (puVar9 != (undefined *)0x0) {
            func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
            puVar10 = puVar8;
            func_0x000107c4ca6c(puVar8);
            func_0x000107c61180();
            puVar18 = puVar10;
            func_0x000100759c94();
            func_0x000107c61170(puVar10);
            func_0x0001048886ac(&puStack_d0);
            func_0x000107c61574(puVar18);
            puVar10 = puStack_d0;
            cVar1 = (char)pcStack_c8;
            if ((char)pcStack_c8 == '\x01') {
              puStack_d8 = puStack_d0;
              iVar5 = 2;
              func_0x000100029b9c(2,0x12,0,0);
              if (iVar5 != 0) {
                uVar24 = 0x112d393f0;
                func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                func_0x000107c61658(&puStack_d8,uVar24,PTR___ss5ErrorWS_11034ee10);
              }
              func_0x000107c61170(puVar28);
              func_0x000107c61170(puVar7);
              func_0x000107c615e8(puVar8);
              func_0x000107c61170(puVar9);
              func_0x000102784d38(puVar10,1);
              goto LAB_10390e904;
            }
            if (puStack_d0 == (undefined *)0x0) {
              func_0x000107c615e8(puVar8);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar28);
              goto LAB_10390e900;
            }
            puVar18 = puVar28;
            func_0x000107c4c930();
            func_0x000107c61180();
            puVar32 = puVar18;
            func_0x00010853cd64();
            func_0x000107c61180();
            func_0x000107c61170(puVar18);
            puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
            if (puVar32 != (undefined *)0x0) {
              uVar24 = 0;
              FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
              puVar18 = puVar32;
              func_0x000107c5fc54(puVar32,uVar24);
              func_0x000107c61170(puVar32);
            }
            puVar32 = puVar28;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (puVar32 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe34);
              (*pcVar3)();
            }
            puVar11 = puVar32;
            func_0x000107c3f584();
            func_0x000107c61180();
            func_0x000107c61170(puVar32);
            puVar32 = puVar28;
            func_0x000107c44a6c();
            if ((int)puVar32 == 0) {
              puVar32 = (undefined *)0x0;
            }
            else {
              puVar32 = puVar28;
              func_0x000107c4f4ec();
              func_0x000107c61180();
              if (puVar32 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe40);
                (*pcVar3)();
              }
              puVar34 = puVar32;
              func_0x000107c498f0();
              func_0x000107c61180();
              func_0x000107c61170(puVar32);
              if (puVar34 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe3c);
                (*pcVar3)();
              }
              puVar32 = puVar34;
              func_0x000107c5dc0c();
              func_0x000107c61170(puVar34);
            }
            puVar34 = puVar28;
            func_0x000107c4c930();
            func_0x000107c61180();
            if (puVar34 == (undefined *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe30);
              (*pcVar3)();
            }
            puVar25 = puVar34;
            func_0x000107c5d0f0();
            func_0x000107c61170(puVar34);
            puVar34 = puVar7;
            func_0x000107c5d060(puVar7);
            func_0x000107c61180();
            if ((int)puVar25 == 0) {
              func_0x000107c3ab44(&puStack_d0);
              puVar14 = puStack_a8;
              pcVar3 = pcStack_b0;
              puVar25 = puStack_b8;
              func_0x000107c61170(puVar34);
              puStack_d0 = puVar25;
              pcStack_c8 = pcVar3;
              puStack_c0 = puVar14;
              func_0x000107c60a3c(&puStack_d0);
              dVar37 = dVar37 * 1000.0;
              if (dVar37 < 0.0) {
                dVar37 = 0.0;
              }
              if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe00);
                (*pcVar3)();
              }
              if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe04);
                (*pcVar3)();
              }
              if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe08);
                (*pcVar3)();
              }
              puVar34 = (undefined *)(long)dVar37;
              if (((undefined *)(long)dVar37 == (undefined *)0x0) &&
                 (puVar34 = puVar32, puVar32 == (undefined *)0x0)) {
                func_0x000107c60a44(&puStack_d0,0x4008000000000000,1000);
                pcVar3 = pcStack_c8;
                func_0x000107c60a3c(&puStack_d0);
                dVar37 = (double)pcVar3 * 1000.0;
                if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe1c);
                  (*pcVar3)();
                }
                if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe20);
                  (*pcVar3)();
                }
                if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe24);
                  (*pcVar3)();
                }
                puVar34 = (undefined *)(long)dVar37;
              }
              puVar32 = PTR_PTR_1126affc0;
              func_0x000107c61168();
              func_0x000107c60a44(&puStack_d0,(double)puVar34 / 1000.0,1000);
              func_0x000107c45078();
            }
            else {
              func_0x000107c3ab44(&puStack_d0);
              puVar14 = puStack_a8;
              pcVar3 = pcStack_b0;
              puVar25 = puStack_b8;
              func_0x000107c61170(puVar34);
              puStack_d0 = puVar25;
              pcStack_c8 = pcVar3;
              puStack_c0 = puVar14;
              func_0x000107c60a3c(&puStack_d0);
              dVar37 = dVar37 * 1000.0;
              if (dVar37 < 0.0) {
                dVar37 = 0.0;
              }
              if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fde8);
                (*pcVar3)();
              }
              if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdec);
                (*pcVar3)();
              }
              if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdf0);
                (*pcVar3)();
              }
              puVar34 = puVar32;
              if ((undefined *)(long)dVar37 != (undefined *)0x0) {
                puVar34 = (undefined *)(long)dVar37;
              }
              puVar32 = PTR_PTR_1126affc0;
              func_0x000107c61168();
              func_0x000107c5dda4();
            }
            func_0x000107c61180();
            if ((ulong)puVar18 >> 0x3e == 0) {
              if (*(long *)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10) != 0) goto LAB_10390f0cc;
LAB_10390f1dc:
              func_0x000107c61174(puVar32);
              func_0x000107c6142c(puVar18);
              puVar25 = PTR_PTR_1126affc8;
              func_0x000107c610f8();
              func_0x000107c453e4();
            }
            else {
              puVar25 = (undefined *)((ulong)puVar18 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar18) {
                puVar25 = puVar18;
              }
              func_0x000107c60480();
              if (puVar25 == (undefined *)0x0) goto LAB_10390f1dc;
LAB_10390f0cc:
              if (((ulong)puVar18 & 0xc000000000000001) == 0) {
                if (*(long *)(((ulong)puVar18 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdf4);
                  (*pcVar3)();
                }
                puVar25 = *(undefined **)(puVar18 + 0x20);
                func_0x000107c61174(puVar32);
                func_0x000107c61174();
              }
              else {
                func_0x000107c61174(puVar32);
                puVar25 = (undefined *)0x0;
                FUN_10391180c(0,puVar18,&PTR_PTR_1126affc8,0x112d530c8);
              }
              func_0x000107c6142c(puVar18);
            }
            if (puVar11 != (undefined *)0x0) {
              func_0x000107c4369c(puVar11);
              func_0x000107c43b4c(puVar11);
            }
            puVar18 = PTR_PTR_1126affe0;
            func_0x000107c61168();
            puVar14 = puVar18;
            func_0x000100fe4224();
            func_0x000107c613fc();
            *(undefined8 *)(puVar14 + 0x18) = 3;
            *(undefined8 *)(puVar14 + 0x10) = 1;
            *(undefined **)(puVar14 + 0x20) = puVar25;
            uVar24 = 0;
            dVar37 = dStack_150;
            FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
            func_0x000107c61174();
            puVar15 = puVar14;
            func_0x000107c5fc48(puVar14,uVar24);
            func_0x000107c61574(puVar14);
            func_0x000107c3d5d0();
            func_0x000107c61180();
            func_0x000107c61170(puVar15);
            puVar14 = puVar32;
            if (puVar18 == (undefined *)0x0) {
              func_0x0001000285a8(0x112fae040,&UNK_10dc22480);
              puStack_d8 = (undefined *)0x0;
              ppuVar17 = &puStack_d8;
              func_0x000104888f7c(ppuVar17);
            }
            else {
              func_0x0001000285a8(0x112d3bf00,&UNK_10d905070);
              puVar16 = puVar18;
              func_0x000100759c94(puVar18,0);
              puVar15 = &UNK_1106ab518;
              func_0x000107c613fc(&UNK_1106ab518,0x20,7);
              *(undefined **)(puVar15 + 0x10) = puVar32;
              *(ulong *)(puVar15 + 0x18) = param_2;
              func_0x000107c61174(puVar32);
              func_0x000107c615f0(param_2);
              uVar24 = 0x112d51140;
              func_0x0001000285a8(0x112d51140,&UNK_10dc22490);
              ppuVar17 = (undefined **)0x0;
              func_0x000100759f5c(0,1,FUN_103912fa8,puVar15,uVar24);
              func_0x000107c61170(puVar18);
              func_0x000107c61574(puVar16);
              func_0x000107c61574(puVar15);
            }
            func_0x000107c61170(puVar14);
            func_0x000107c61170(puVar25);
            uVar35 = param_7 & 0xffffffff;
            func_0x0001048886ac(&puStack_d0);
            func_0x000107c61574(ppuVar17);
            puVar18 = puStack_d0;
            if ((char)pcStack_c8 == '\x01') {
              puStack_d8 = puStack_d0;
              iVar5 = 2;
              func_0x000100029b9c(2,0x12,0,0);
              if (iVar5 != 0) {
                uVar24 = 0x112d393f0;
                func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
                func_0x000107c61658(&puStack_d8,uVar24,PTR___ss5ErrorWS_11034ee10);
              }
              FUN_103911fac(puVar18,1,PTR__swift_unknownObjectRelease_11034f530);
              func_0x000107c61170(puVar28);
              func_0x000107c61170(puVar32);
              puVar32 = puVar9;
            }
            else {
              if (puStack_d0 != (undefined *)0x0) {
                FUN_103911fac(puStack_d0,(ulong)pcStack_c8 & 0xff,
                              PTR__swift_unknownObjectRelease_11034f530);
                uVar35 = param_2;
                func_0x000107c5b198();
                func_0x000107c61180();
                uVar19 = uVar35;
                FUN_1039132cc();
                func_0x000107c61170(uVar35);
                if (uVar19 != 0) {
                  if (uVar19 >> 0x3e == 0) {
                    uVar35 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
                    if (uVar35 != 0) goto LAB_10390f4c4;
LAB_10390f858:
                    func_0x000107c6142c(uVar19);
                    puVar18 = PTR___swiftEmptyArrayStorage_11034f1c8;
                  }
                  else {
                    uVar35 = uVar19;
                    if (-1 < (long)uVar19) {
                      uVar35 = uVar19 & 0xffffffffffffff8;
                    }
                    func_0x000107c60480();
                    if (uVar35 == 0) goto LAB_10390f858;
LAB_10390f4c4:
                    puStack_d0 = PTR___swiftEmptyArrayStorage_11034f1c8;
                    FUN_103035c00(0,uVar35 & ((long)uVar35 >> 0x3f ^ 0xffffffffffffffffU),0);
                    if ((long)uVar35 < 0) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe18);
                      (*pcVar3)();
                    }
                    if ((uVar19 & 0xc000000000000001) == 0) {
                      puVar33 = (undefined8 *)(uVar19 + 0x20);
                      do {
                        puVar18 = puStack_d0;
                        uVar6 = (undefined4)*puVar33;
                        func_0x000107c4e920();
                        uVar26 = *(ulong *)(puVar18 + 0x10);
                        puStack_d0 = puVar18;
                        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar26) {
                          FUN_103035c00(1 < *(ulong *)(puVar18 + 0x18),uVar26 + 1,1);
                        }
                        *(ulong *)(puStack_d0 + 0x10) = uVar26 + 1;
                        *(undefined4 *)(puStack_d0 + uVar26 * 4 + 0x20) = uVar6;
                        uVar35 = uVar35 - 1;
                        puVar33 = puVar33 + 1;
                      } while (uVar35 != 0);
                    }
                    else {
                      uVar26 = 0;
                      do {
                        puVar18 = puStack_d0;
                        uVar31 = uVar26;
                        FUN_10391180c(uVar26,uVar19,&PTR_PTR_1126b25d0,0x112d55598);
                        uVar12 = uVar31;
                        func_0x000107c4e920();
                        func_0x000107c615e8(uVar31);
                        uVar31 = *(ulong *)(puVar18 + 0x10);
                        puStack_d0 = puVar18;
                        if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar31) {
                          FUN_103035c00(1 < *(ulong *)(puVar18 + 0x18),uVar31 + 1,1);
                        }
                        uVar26 = uVar26 + 1;
                        *(ulong *)(puStack_d0 + 0x10) = uVar31 + 1;
                        *(int *)(puStack_d0 + uVar31 * 4 + 0x20) = (int)uVar12;
                      } while (uVar35 != uVar26);
                    }
                    puVar18 = puStack_d0;
                    func_0x000107c6142c(uVar19);
                  }
                  if (*(long *)(puVar18 + 0x10) != 0) {
                    uVar23 = *(uint *)(puVar18 + 0x20);
                    lVar29 = *(long *)(puVar18 + 0x10) + -1;
                    if (lVar29 != 0) {
                      puVar22 = (uint *)(puVar18 + 0x24);
                      do {
                        if (uVar23 <= *puVar22) {
                          uVar23 = *puVar22;
                        }
                        lVar29 = lVar29 + -1;
                        puVar22 = puVar22 + 1;
                      } while (lVar29 != 0);
                    }
                  }
                  func_0x000107c6142c(puVar18);
                }
                puVar18 = puVar28;
                func_0x000107c4c930();
                func_0x000107c61180();
                if (puVar18 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe4c);
                  (*pcVar3)();
                }
                puVar25 = puVar18;
                func_0x000107c5d0f0();
                func_0x000107c61170(puVar18);
                if ((int)puVar25 != 0) {
                  puVar14 = puVar7;
                  func_0x000107c5d060(puVar7);
                  func_0x000107c61180();
                  func_0x000107c3ab44(&puStack_d0);
                  puVar25 = puStack_c0;
                  pcVar3 = pcStack_c8;
                  puVar18 = puStack_d0;
                  func_0x000107c61170(puVar14);
                  puStack_d0 = puVar18;
                  pcStack_c8 = pcVar3;
                  puStack_c0 = puVar25;
                  func_0x000107c60a3c(&puStack_d0);
                  dVar37 = dVar37 * 1000.0;
                  if (dVar37 < 0.0) {
                    dVar37 = 0.0;
                  }
                  if (0x7fefffffffffffff < (ulong)ABS(dVar37)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe0c);
                    (*pcVar3)();
                  }
                  if (dVar37 <= -1.0) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe10);
                    (*pcVar3)();
                  }
                  if (1.8446744073709552e+19 <= dVar37) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe14);
                    (*pcVar3)();
                  }
                  lVar29 = (long)dVar37;
                  puVar25 = PTR_PTR_1126affe8;
                  func_0x000107c61168(PTR_PTR_1126affe8);
                  func_0x000107c4b838();
                  func_0x000107c61180();
                  puVar18 = &UNK_1106ab4a0;
                  func_0x000107c613fc(&UNK_1106ab4a0,0x20,7);
                  *(long *)(puVar18 + 0x10) = lVar29;
                  *(undefined **)(puVar18 + 0x18) = puVar34;
                  pcStack_b0 = (code *)0x103913014;
                  puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                  pcStack_c8 = (code *)0x42000000;
                  puStack_c0 = &UNK_101e34e58;
                  puStack_b8 = &UNK_1106ab4b8;
                  ppuVar17 = &puStack_d0;
                  puStack_a8 = puVar18;
                  func_0x000107c60bc4(ppuVar17);
                  func_0x000107c61574(puStack_a8);
                  func_0x000107c5d684(param_2);
                  func_0x000107c61180();
                  func_0x000107c61170();
                  func_0x000107c60bd0(ppuVar17);
                  func_0x000107c61170(puVar25);
                }
                pcStack_b0 = FUN_10390fe4c;
                puStack_a8 = (undefined *)0x0;
                puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
                pcStack_c8 = (code *)0x42000000;
                puStack_c0 = &UNK_100ff0b04;
                puStack_b8 = &UNK_1106ab4e0;
                ppuVar17 = &puStack_d0;
                func_0x000107c60bc4(ppuVar17);
                puVar18 = puVar8;
                func_0x000107c4e91c();
                func_0x000107c61180();
                func_0x000107c60bd0(ppuVar17);
                puVar25 = PTR___swiftEmptyArrayStorage_11034f1c8;
                if (puVar18 != (undefined *)0x0) {
                  uVar24 = 0;
                  FUN_103912258(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
                  puVar25 = puVar18;
                  func_0x000107c5fc54(puVar18,uVar24);
                  func_0x000107c61170(puVar18);
                }
                if ((ulong)puVar25 >> 0x3e == 0) {
                  puVar18 = *(undefined **)(((ulong)puVar25 & 0xffffffffffffff8) + 0x10);
                }
                else {
                  puVar18 = (undefined *)((ulong)puVar25 & 0xffffffffffffff8);
                  if ((undefined *)0x7fffffffffffffff < puVar25) {
                    puVar18 = puVar25;
                  }
                  func_0x000107c60480();
                }
                if (puVar18 != (undefined *)0x0) {
                  uVar35 = 0;
                  do {
                    if (((ulong)puVar25 & 0xc000000000000001) == 0) {
                      if (*(ulong *)(((ulong)puVar25 & 0xffffffffffffff8) + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
                        pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdb0);
                        (*pcVar3)();
                      }
                      uVar19 = *(ulong *)(puVar25 + uVar35 * 8 + 0x20);
                      func_0x000107c61174(uVar19);
                    }
                    else {
                      uVar19 = uVar35;
                      FUN_10391180c(uVar35,puVar25,&PTR__OBJC_CLASS___NSNumber_1126ae570,0x112d38c88
                                   );
                    }
                    puVar14 = (undefined *)(uVar35 + 1);
                    if (SCARRY8(uVar35,1)) {
                    /* WARNING: Does not return */
                      pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fd9c);
                      (*pcVar3)();
                    }
                    puVar15 = puVar8;
                    func_0x000107c4e924();
                    func_0x000107c61180();
                    if (puVar15 == (undefined *)0x0) {
                      func_0x000107c61170(uVar19);
                    }
                    else {
                      puVar16 = puVar15;
                      func_0x000107c40794();
                      func_0x000107c60234(&puStack_d0);
                      func_0x000107c615e8(puVar16);
                      uVar24 = 0;
                      FUN_103912258(0,0x112d55598,&PTR_PTR_1126b25d0);
                      ppuVar17 = &puStack_d8;
                      func_0x000107c6147c(ppuVar17,&puStack_d0,PTR___sypN_11034f1a8 + 8,uVar24,6);
                      puVar16 = puStack_d8;
                      if (((ulong)ppuVar17 & 1) == 0) {
                        func_0x000107c61170(uVar19);
                        func_0x000107c61170(puVar15);
                      }
                      else {
                        puVar20 = puStack_d8;
                        func_0x000107c44a6c();
                        if ((int)puVar20 != 0) {
                          puVar20 = puVar16;
                          func_0x000107c4f4ec();
                          func_0x000107c61180();
                          if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                            pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe38);
                            (*pcVar3)();
                          }
                          puVar21 = puVar20;
                          func_0x000107c448c8();
                          func_0x000107c61170(puVar20);
                          if ((int)puVar21 != 0) {
                            puVar20 = puVar16;
                            func_0x000107c4f4ec();
                            func_0x000107c61180();
                            if (puVar20 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe48);
                              (*pcVar3)();
                            }
                            puVar21 = puVar20;
                            func_0x000107c44430();
                            func_0x000107c61180();
                            func_0x000107c61170(puVar20);
                            if (puVar21 == (undefined *)0x0) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fe44);
                              (*pcVar3)();
                            }
                            puVar20 = puVar21;
                            func_0x000107c5bbe8();
                            if (CARRY8((ulong)puVar20,(ulong)puStack_180)) {
                    /* WARNING: Does not return */
                              pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fdfc);
                              (*pcVar3)();
                            }
                            func_0x000107c597e0(puVar21);
                            func_0x000107c61170(puVar21);
                          }
                        }
                        func_0x000107c574d4(puVar16);
                        uVar26 = param_2;
                        func_0x000107c3d8d4(param_2);
                        func_0x000107c61180();
                        func_0x000107c61170(uVar19);
                        func_0x000107c61170(puVar15);
                        func_0x000107c61170(puVar16);
                        func_0x000107c61170(uVar26);
                      }
                    }
                    uVar35 = uVar35 + 1;
                  } while (puVar14 != puVar18);
                }
                uVar35 = param_7 & 0xffffffff;
                func_0x000107c61170(puVar28);
                func_0x000107c61170(puVar7);
                func_0x000107c61170(puVar32);
                func_0x000107c6142c(puVar25);
                func_0x000107c61170(puVar9);
                func_0x000102784d38(puVar10,cVar1);
                func_0x000107c61170(puVar11);
                func_0x000107c615e8(puVar8);
                bVar4 = CARRY8((ulong)puStack_180,(ulong)puVar34);
                puStack_180 = puStack_180 + (long)puVar34;
                if (bVar4) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fd48);
                  (*pcVar3)();
                }
                goto LAB_10390e904;
              }
              FUN_103911fac(0,(ulong)pcStack_c8 & 0xff,PTR__swift_unknownObjectRelease_11034f530);
              func_0x000107c61170(puVar9);
              func_0x000107c61170(puVar28);
            }
            func_0x000107c61170(puVar32);
            func_0x000102784d38(puVar10,cVar1);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar11);
            func_0x000107c615e8(puVar8);
            goto LAB_10390e904;
          }
        }
        func_0x000107c61170(puVar28);
        goto LAB_10390e828;
      }
      func_0x000107c615e8(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c6142c(puVar10);
    }
LAB_10390e904:
    func_0x000107c615e8(apuStack_a0[0]);
    if (puVar36 == puVar30) {
      func_0x000107c61574(puVar27);
      func_0x000100d62e80(pcStack_160,puStack_168);
      func_0x000100d62e80(uStack_170,puStack_178);
      return;
    }
    uVar24 = 0x103913010;
    if (((ulong)param_1 & 0xc000000000000001) != 0) goto LAB_10390e3d4;
LAB_10390e3f4:
    if (*(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10) <= puVar36) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10390fd94);
      (*pcVar3)();
    }
    puVar7 = *(undefined **)(param_1 + (long)puVar36 * 8 + 0x20);
    func_0x000107c61174();
    puVar8 = puVar27;
  } while( true );
}



/* Entry: 10390fe4c; end: 10390feaf;  */

bool FUN_10390fe4c(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  
  lVar3 = param_1;
  func_0x000107c4abb4();
  if ((int)lVar3 == 1) {
    func_0x000107c4c930();
    func_0x000107c61180();
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10390feb0);
      (*pcVar1)();
    }
    lVar3 = param_1;
    func_0x000107c3e240();
    func_0x000107c61170(param_1);
    bVar2 = (int)lVar3 != 5;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



/* Entry: 10390feb0; end: 10391017f;  */

undefined1  [16]
FUN_10390feb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 unaff_x20;
  undefined *puVar12;
  undefined1 auVar13 [16];
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  long lStack_78;
  
  lStack_78 = 0;
  puVar12 = PTR_PTR_1126affc8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar5 = param_1;
  func_0x000107c45218();
  func_0x000107c61180();
  puVar6 = &UNK_1106ab788;
  func_0x000107c613fc(&UNK_1106ab788,0x50,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  puVar6[0x28] = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_1;
  *(long **)(puVar6 + 0x38) = &lStack_78;
  *(undefined **)(puVar6 + 0x40) = puVar12;
  *(undefined8 *)(puVar6 + 0x48) = unaff_x20;
  puVar7 = &UNK_1106ab7b0;
  func_0x000107c613fc(&UNK_1106ab7b0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_103912298;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x103912ff8;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_1019fdb4c;
  puStack_90 = &UNK_1106ab7c8;
  ppuVar8 = &puStack_a8;
  puStack_80 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar9 = puStack_80;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar9);
  puVar9 = &UNK_1106ab800;
  func_0x000107c613fc(&UNK_1106ab800,0x30,7);
  *(undefined8 *)(puVar9 + 0x10) = param_1;
  *(long **)(puVar9 + 0x18) = &lStack_78;
  *(undefined **)(puVar9 + 0x20) = puVar12;
  *(undefined8 *)(puVar9 + 0x28) = unaff_x20;
  puVar10 = &UNK_1106ab828;
  func_0x000107c613fc(&UNK_1106ab828,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_1039124d4;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  uStack_88 = 0x103912ffc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_101a36974;
  puStack_90 = &UNK_1106ab840;
  ppuVar11 = &puStack_a8;
  puStack_80 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_80;
  func_0x000107c61174(param_1);
  func_0x000107c61174(puVar12);
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  func_0x000107c4c668(uVar5);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61170(uVar5);
  lVar2 = lStack_78;
  if (lStack_78 == 0) {
    func_0x000107c61170(puVar12);
    puVar12 = (undefined *)0x0;
  }
  lVar3 = lStack_78;
  func_0x000107c61174(lVar2);
  func_0x000107c61574(puVar6);
  func_0x000107c61170(lVar3);
  puVar6 = puVar7;
  func_0x000107c61544(puVar7,"",0x4b,299,0xd,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10391017c);
    (*pcVar4)();
  }
  puVar6 = puVar10;
  func_0x000107c61544(puVar10,"",0x4b,0x149,0x14,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x103910180);
    (*pcVar4)();
  }
  auVar13._8_8_ = puVar12;
  auVar13._0_8_ = lVar2;
  return auVar13;
}



/* Entry: 103910180; end: 1039103bb;  */

void FUN_103910180(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6)

{
  bool bVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  
  uVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar3 - 8) + 0x40));
  puVar9 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = (long)puVar9 - extraout_x12;
  func_0x000107c5ed5c();
  if ((uVar3 & 1) != 0) {
    puVar4 = PTR_PTR_1126affc0;
    func_0x000107c61168();
    puVar5 = puVar4;
    func_0x000107c5ed90();
    func_0x000107c5dda4();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    uVar6 = *param_5;
    *param_5 = puVar4;
    func_0x000107c61170(uVar6);
    puVar4 = PTR_PTR_1126affd0;
    func_0x000107c610f8(PTR_PTR_1126affd0);
    func_0x000107c453e4();
    func_0x000107c5648c();
    func_0x000107c40c4c();
    func_0x000107c61180();
    bVar1 = param_2 == 0;
    if (bVar1) {
      func_0x000107c5eea4();
    }
    else {
      func_0x000107c5ee94(puVar9);
      func_0x000107c61170(param_2);
      param_2 = 0;
      func_0x000107c5eea4();
    }
    lVar10 = *(long *)(param_2 + -8);
    (**(code **)(lVar10 + 0x38))(puVar9,bVar1,1,param_2);
    func_0x0001003a4c00(puVar9,lVar8);
    func_0x000107c5eea4(0);
    lVar7 = lVar8;
    (**(code **)(lVar10 + 0x30))(lVar8,1,param_2);
    if ((int)lVar7 == 1) {
      func_0x000103912a00(lVar8,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x000107c5ee8c();
      (**(code **)(lVar10 + 8))(lVar8,param_2);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1039103bc);
        (*pcVar2)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1039103b4);
        (*pcVar2)();
      }
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1039103b8);
        (*pcVar2)();
      }
    }
    func_0x000107c53ac8(puVar4);
    func_0x000107c5645c(param_6);
    func_0x000107c61170(puVar4);
  }
  return;
}



/* Entry: 1039103bc; end: 1039105ff;  */

void FUN_1039103bc(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar3 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar3 + 0x40));
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5edb4(&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_3)
  ;
  func_0x000107c61174(param_2);
  (*pcVar1)();
  func_0x000107c61170(param_2);
  (**(code **)(lVar3 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar2);
  return;
}



/* Entry: 103910600; end: 103910beb;  */

undefined *
FUN_103910600(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  undefined8 unaff_x20;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  long lStack_80;
  undefined2 uStack_72;
  undefined8 *puStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  puStack_70 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  uStack_72 = 0;
  lStack_80 = 0;
  puVar3 = param_1;
  func_0x000107c45218();
  func_0x000107c61180();
  puVar4 = &UNK_1106ab540;
  func_0x000107c613fc(&UNK_1106ab540,0x50,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 **)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_3;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  *(undefined8 *)(puVar4 + 0x30) = param_5;
  puVar4[0x38] = param_6;
  *(long **)(puVar4 + 0x40) = &lStack_68;
  *(undefined8 ***)(puVar4 + 0x48) = &puStack_70;
  puVar5 = &UNK_1106ab568;
  func_0x000107c613fc(&UNK_1106ab568,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = 0x10391300c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uStack_90 = 0x103912fec;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1019fdb4c;
  puStack_98 = &UNK_1106ab580;
  ppuVar6 = &puStack_b0;
  puStack_88 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_88;
  func_0x000107c61174();
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_1106ab5b8;
  func_0x000107c613fc(&UNK_1106ab5b8,0x50,7);
  *(undefined8 *)(puVar7 + 0x10) = unaff_x20;
  *(undefined8 **)(puVar7 + 0x18) = param_1;
  *(undefined8 *)(puVar7 + 0x20) = param_3;
  *(undefined8 *)(puVar7 + 0x28) = param_4;
  *(undefined8 *)(puVar7 + 0x30) = param_5;
  puVar7[0x38] = param_6;
  *(long **)(puVar7 + 0x40) = &lStack_68;
  *(undefined8 ***)(puVar7 + 0x48) = &puStack_70;
  puVar8 = &UNK_1106ab5e0;
  func_0x000107c613fc(&UNK_1106ab5e0,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1039119dc;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x103912ff0;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101a36974;
  puStack_98 = &UNK_1106ab5f8;
  ppuVar9 = &puStack_b0;
  puStack_88 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_88;
  func_0x000107c61174(param_1);
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1106ab630;
  func_0x000107c613fc(&UNK_1106ab630,0x38,7);
  *(long **)(puVar10 + 0x10) = &lStack_80;
  *(long **)(puVar10 + 0x18) = &lStack_68;
  *(undefined8 ***)(puVar10 + 0x20) = &puStack_70;
  *(long *)(puVar10 + 0x28) = (long)&uStack_72 + 1;
  *(undefined2 **)(puVar10 + 0x30) = &uStack_72;
  puVar11 = &UNK_1106ab658;
  func_0x000107c613fc(&UNK_1106ab658,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_103911a90;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  uStack_90 = 0x103912ff4;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101382510;
  puStack_98 = &UNK_1106ab670;
  ppuVar12 = &puStack_b0;
  puStack_88 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_88;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  func_0x000107c4c668(puVar3);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  func_0x000107c61170();
  lVar14 = lStack_68;
  lVar1 = lStack_80;
  if (lStack_80 == 0) {
    if (lStack_68 == 0) {
      FUN_103911f24();
      func_0x000107c613f8(&UNK_1106ab768,puVar3,0,0);
      puVar3[1] = 1;
      *puVar3 = 0;
      func_0x000107c61654();
    }
    else {
      puVar13 = PTR_PTR_1126affe0;
      func_0x000107c61168();
      puVar3 = puStack_70;
      FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
      func_0x000107c61174(lVar14);
      func_0x000107c61174();
      puVar15 = puVar3;
      func_0x000107c61434();
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar3);
      func_0x000107c3d5d0();
      func_0x000107c61180();
      func_0x000107c61170(lVar14);
      func_0x000107c61170();
      if (puVar13 != (undefined *)0x0) {
        func_0x000107c61170(lVar14);
        func_0x000107c614ac(lStack_80);
        func_0x000107c6142c(puStack_70);
        lVar1 = lStack_68;
        func_0x000107c61574(puVar4);
        func_0x000107c61170(lVar1);
        puVar4 = puVar5;
        func_0x000107c61544(puVar5,"",0x4b,0x1e5,0xd,1);
        func_0x000107c61574(puVar7);
        func_0x000107c61574(puVar5);
        if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103910be8);
          (*pcVar2)();
        }
        puVar4 = puVar8;
        func_0x000107c61544(puVar8,"",0x4b,0x1f0,0x14,1);
        func_0x000107c61574(puVar10);
        func_0x000107c61574(puVar8);
        if (((ulong)puVar4 & 1) == 0) {
          puVar4 = puVar11;
          func_0x000107c61544(puVar11,"",0x4b,0x1fb,0x1c,1);
          func_0x000107c61574(puVar11);
          if (((ulong)puVar4 & 1) == 0) {
            return puVar13;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x103910b60);
          (*pcVar2)();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x103910bec);
        (*pcVar2)();
      }
      FUN_103911f24();
      func_0x000107c613f8(&UNK_1106ab768,puVar15,0,0);
      puVar15[1] = 2;
      *puVar15 = 0;
      func_0x000107c61654();
      func_0x000107c61170(lVar14);
    }
  }
  else {
    func_0x000107c61654();
  }
  lVar14 = lStack_80;
  func_0x000107c614b0(lVar1);
  func_0x000107c614ac(lVar14);
  func_0x000107c6142c(puStack_70);
  lVar1 = lStack_68;
  func_0x000107c61574(puVar4);
  func_0x000107c61170(lVar1);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x4b,0x1e5,0xd,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103910bdc);
    (*pcVar2)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x4b,0x1f0,0x14,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) == 0) {
    puVar4 = puVar11;
    func_0x000107c61544(puVar11,"",0x4b,0x1fb,0x1c,1);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar4 & 1) == 0) {
      return puVar8;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x103910be4);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x103910be0);
  (*pcVar2)();
}



/* Entry: 103910bec; end: 103911253;  */

/* WARNING: Possible PIC construction at 0x000103910c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910c78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910c90: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910db4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910de8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910e30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910e9c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010391120c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910f74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103911000: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103911088: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103911104: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103911120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039111b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039111c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039110c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103910d28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039111b4) */
/* WARNING: Removing unreachable block (ram,0x000103911124) */
/* WARNING: Removing unreachable block (ram,0x000103911108) */
/* WARNING: Removing unreachable block (ram,0x00010391108c) */
/* WARNING: Removing unreachable block (ram,0x000103911004) */
/* WARNING: Removing unreachable block (ram,0x0001039110d4) */
/* WARNING: Removing unreachable block (ram,0x000103911150) */
/* WARNING: Removing unreachable block (ram,0x000103911154) */
/* WARNING: Removing unreachable block (ram,0x0001039110e4) */
/* WARNING: Removing unreachable block (ram,0x0001039110e8) */
/* WARNING: Removing unreachable block (ram,0x000103911164) */
/* WARNING: Removing unreachable block (ram,0x000103911100) */
/* WARNING: Removing unreachable block (ram,0x000103911030) */
/* WARNING: Removing unreachable block (ram,0x000103911054) */
/* WARNING: Removing unreachable block (ram,0x00010391107c) */
/* WARNING: Removing unreachable block (ram,0x000103910f78) */
/* WARNING: Removing unreachable block (ram,0x000103911210) */
/* WARNING: Removing unreachable block (ram,0x000103910ea0) */
/* WARNING: Removing unreachable block (ram,0x000103910e34) */
/* WARNING: Removing unreachable block (ram,0x000103910ebc) */
/* WARNING: Removing unreachable block (ram,0x0001039110bc) */
/* WARNING: Removing unreachable block (ram,0x000103910ec0) */
/* WARNING: Removing unreachable block (ram,0x000103910e54) */
/* WARNING: Removing unreachable block (ram,0x000103910e70) */
/* WARNING: Removing unreachable block (ram,0x000103910e98) */
/* WARNING: Removing unreachable block (ram,0x000103910dec) */
/* WARNING: Removing unreachable block (ram,0x0001039110c4) */
/* WARNING: Removing unreachable block (ram,0x000103910d2c) */
/* WARNING: Removing unreachable block (ram,0x000103910df0) */
/* WARNING: Removing unreachable block (ram,0x000103910db8) */
/* WARNING: Removing unreachable block (ram,0x000103910dbc) */
/* WARNING: Removing unreachable block (ram,0x000103911244) */
/* WARNING: Removing unreachable block (ram,0x000103910dd0) */
/* WARNING: Removing unreachable block (ram,0x000103910d88) */
/* WARNING: Removing unreachable block (ram,0x000103910d24) */
/* WARNING: Removing unreachable block (ram,0x000103910d90) */
/* WARNING: Removing unreachable block (ram,0x000103911240) */
/* WARNING: Removing unreachable block (ram,0x000103910da4) */
/* WARNING: Removing unreachable block (ram,0x000103910c94) */
/* WARNING: Removing unreachable block (ram,0x000103910cc0) */
/* WARNING: Removing unreachable block (ram,0x000103910cd8) */
/* WARNING: Removing unreachable block (ram,0x0001039111f0) */
/* WARNING: Removing unreachable block (ram,0x0001039111f8) */
/* WARNING: Removing unreachable block (ram,0x000103910ce4) */
/* WARNING: Removing unreachable block (ram,0x000103911208) */
/* WARNING: Removing unreachable block (ram,0x000103910cf0) */
/* WARNING: Removing unreachable block (ram,0x000103910d38) */
/* WARNING: Removing unreachable block (ram,0x000103911130) */
/* WARNING: Removing unreachable block (ram,0x000103910d3c) */
/* WARNING: Removing unreachable block (ram,0x0001039111ec) */
/* WARNING: Removing unreachable block (ram,0x000103910d48) */
/* WARNING: Removing unreachable block (ram,0x000103910d54) */
/* WARNING: Removing unreachable block (ram,0x0001039111e8) */
/* WARNING: Removing unreachable block (ram,0x000103910d60) */
/* WARNING: Removing unreachable block (ram,0x00010391123c) */
/* WARNING: Removing unreachable block (ram,0x000103910d74) */
/* WARNING: Removing unreachable block (ram,0x000103910c7c) */
/* WARNING: Removing unreachable block (ram,0x000103911250) */
/* WARNING: Removing unreachable block (ram,0x000103910c80) */
/* WARNING: Removing unreachable block (ram,0x000103910c48) */
/* WARNING: Removing unreachable block (ram,0x000103910c98) */
/* WARNING: Removing unreachable block (ram,0x000103910c4c) */
/* WARNING: Removing unreachable block (ram,0x00010391124c) */
/* WARNING: Removing unreachable block (ram,0x000103910c60) */
/* WARNING: Removing unreachable block (ram,0x0001039111c4) */
/* WARNING: Removing unreachable block (ram,0x000103911214) */

void FUN_103910bec(long param_1)

{
  code *pcVar1;
  
  func_0x000107c5b198();
  func_0x000107c61180();
  func_0x000107c42400();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c44b0c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10391124c);
  (*pcVar1)();
}



/* Entry: 103911254; end: 1039112e7;  */

void FUN_103911254(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    FUN_103912258(0,0x112d4f340,&PTR__OBJC_CLASS___AVAssetTrack_1126a60e0);
    func_0x000107c5fc54(param_2,uVar3);
  }
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1039112e8; end: 103911347;  */

/* WARNING: Possible PIC construction at 0x00010391131c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103911320) */
/* WARNING: Removing unreachable block (ram,0x000103911344) */
/* WARNING: Removing unreachable block (ram,0x000103911324) */

void FUN_1039112e8(long param_1)

{
  code *pcVar1;
  
  func_0x000107c4e8d8();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c4e8ec();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103911344);
  (*pcVar1)();
}



/* Entry: 103911348; end: 10391147f;  */

void FUN_103911348(double param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar3;
  long lVar4;
  
  lVar2 = 0;
  func_0x000107c5eea4();
  lVar4 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  puVar3 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  func_0x000107c5648c(param_4);
  func_0x000107c40c4c();
  func_0x000107c61180();
  if (param_2 != 0) {
    func_0x000107c5ee94(puVar3);
    func_0x000107c61170(param_2);
    (**(code **)(lVar4 + 0x20))((long)puVar3 - extraout_x12,puVar3,lVar2);
    func_0x000107c5ee8c();
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103911478);
      (*pcVar1)();
    }
    if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10391147c);
      (*pcVar1)();
    }
    if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103911480);
      (*pcVar1)();
    }
    func_0x000107c53ac8(param_4);
    (**(code **)(lVar4 + 8))((long)puVar3 - extraout_x12,lVar2);
  }
  return;
}



/* Entry: 103911480; end: 1039114bb; -[SCSnapDocImportUtils init] */

void FUN_103911480(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1039114bc; end: 1039114ef;  */

void FUN_1039114bc(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1039114f0; end: 103911617;  */

ulong FUN_1039114f0(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480();
  }
  uVar4 = param_2;
  if (((param_3 & 1) != 0) && (uVar4 = uVar2, (long)uVar2 < (long)param_2)) {
    if ((long)(uVar2 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103911618);
      (*pcVar1)();
    }
    uVar4 = uVar2 * 2;
    if (uVar4 - param_2 == 0 || (long)uVar4 < (long)param_2) {
      uVar4 = param_2;
    }
  }
  if (param_4 >> 0x3e == 0) {
    uVar2 = *(ulong *)((param_4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = param_4 & 0xffffffffffffff8;
    if ((param_4 & 0x8000000000000000) != 0) {
      uVar2 = param_4;
    }
    func_0x000107c60480(uVar2,uVar4);
  }
  uVar3 = uVar2;
  FUN_103911618(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103911614);
      (*pcVar1)();
    }
    FUN_103911698(0,uVar2,uVar3 + 0x20,param_4);
  }
  else {
    uVar4 = param_4 & 0xffffffffffffff8;
    if ((uVar3 != uVar4) || (uVar4 + 0x20 + uVar2 * 8 <= uVar3 + 0x20)) {
      func_0x000107c610b8(uVar3 + 0x20,uVar4 + 0x20,uVar2 << 3);
    }
    *(undefined8 *)(uVar4 + 0x10) = 0;
    func_0x000107c6142c(param_4);
  }
  return uVar3;
}



/* Entry: 103911618; end: 103911697;  */

undefined * FUN_103911618(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((long)param_2 <= (long)param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != (undefined *)0x0) {
    puVar2 = param_1;
    FUN_1039117bc();
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(undefined **)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 103911698; end: 1039117bb;  */

long FUN_103911698(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1039117b8);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1039117bc);
        (*pcVar3)();
      }
      lVar5 = param_1;
      do {
        lVar1 = lVar5 + 1;
        uVar4 = 0x112d51138;
        func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
        func_0x000107c60318(lVar5,param_4,uVar4);
        lVar5 = lVar1;
      } while (param_2 != lVar1);
    }
  }
  if (param_4 >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      uVar4 = 0x112d51138;
      func_0x0001000285a8(0x112d51138,&UNK_10dc50a50);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1039117b4);
    (*pcVar3)();
  }
  uVar2 = param_4 & 0xffffffffffffff8;
  if (0x7fffffffffffffff < param_4) {
    uVar2 = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb95fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss18_CocoaArrayWrapperV13_copyContents8subRange12initializingSpyyXlGSnySiG_AFtF_11034e8e8)
            (param_1,param_2,param_3,uVar2);
  return param_1;
}



/* Entry: 1039117bc; end: 1039117cf;  */

void FUN_1039117bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae080 == (undefined *)0x0 || ((ulong)puRam0000000112fae080 & 1) != 0) {
    puVar1 = &UNK_10e9a7920;
    func_0x000107c61518(&UNK_10e9a7920,0x1c,0,0);
    puRam0000000112fae080 = puVar1;
  }
  return;
}



/* Entry: 1039117d0; end: 1039117ef;  */

void FUN_1039117d0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1039117f0; end: 10391180b;  */

void FUN_1039117f0(long param_1,long param_2)

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



/* Entry: 10391180c; end: 1039119c7;  */

ulong FUN_10391180c(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1039118f0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1039118f4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar4 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar4 = param_2;
    }
    func_0x000107c60488(param_1,uVar4);
    uVar3 = *param_3;
    func_0x000107c61168(uVar3);
    uVar4 = param_1;
    func_0x000107c6148c(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_103912258(0,param_4,param_3);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1039119c8);
  (*pcVar2)();
}



/* Entry: 1039119c8; end: 1039119db;  */

void FUN_1039119c8(void)

{
  FUN_103912e58();
  return;
}



/* Entry: 1039119dc; end: 1039119df;  */

void FUN_1039119dc(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar1 = *(long **)(unaff_x20 + 0x40);
  plVar2 = *(long **)(unaff_x20 + 0x48);
  FUN_10390feb0(*(undefined8 *)(unaff_x20 + 0x10),lVar3,uVar4,*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
  if (lVar3 != 0) {
    lVar5 = *plVar1;
    *plVar1 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170();
    func_0x000100fe4224();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 3;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    func_0x000107c61170(lVar3);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    lVar3 = *plVar2;
    *plVar2 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
  return;
}



/* Entry: 1039119e0; end: 103911a8f;  */

void FUN_1039119e0(void)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar1 = *(long **)(unaff_x20 + 0x40);
  plVar2 = *(long **)(unaff_x20 + 0x48);
  FUN_10390feb0(*(undefined8 *)(unaff_x20 + 0x10),lVar3,uVar4,*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined1 *)(unaff_x20 + 0x38));
  if (lVar3 != 0) {
    lVar5 = *plVar1;
    *plVar1 = lVar3;
    func_0x000107c61174();
    func_0x000107c61170();
    func_0x000100fe4224();
    func_0x000107c613fc();
    *(undefined8 *)(lVar5 + 0x18) = 3;
    *(undefined8 *)(lVar5 + 0x10) = 1;
    func_0x000107c61170(lVar3);
    *(undefined8 *)(lVar5 + 0x20) = uVar4;
    lVar3 = *plVar2;
    *plVar2 = lVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar3);
    return;
  }
  return;
}



/* Entry: 103911a90; end: 103911f23;  */

/* WARNING: Possible PIC construction at 0x000103911ccc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103911cd0) */

void FUN_103911a90(undefined8 *param_1)

{
  ulong uVar1;
  ulong *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  int iVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  long unaff_x20;
  undefined1 *puVar14;
  undefined *puStack_88;
  ulong uStack_80;
  undefined *puStack_68;
  
  puVar8 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar10 = *(undefined8 **)(unaff_x20 + 0x18);
  puVar2 = *(ulong **)(unaff_x20 + 0x20);
  puVar3 = *(undefined1 **)(unaff_x20 + 0x28);
  puVar14 = *(undefined1 **)(unaff_x20 + 0x30);
  puVar13 = param_1;
  func_0x000107c5b198();
  func_0x000107c61180();
  puVar6 = puVar13;
  FUN_1039132cc();
  func_0x000107c61170();
  if (puVar6 != (undefined8 *)0x0) {
    puVar13 = (undefined8 *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((ulong)puVar6 >> 0x3e == 0) {
      puVar7 = (undefined8 *)puVar13[2];
    }
    else {
      puVar7 = puVar6;
      if (-1 < (long)puVar6) {
        puVar7 = puVar13;
      }
      func_0x000107c60480();
    }
    if (puVar7 == (undefined8 *)0x0) {
      func_0x000107c6142c();
      puVar13 = puVar6;
    }
    else {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (puVar13[2] == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103911f00);
          (*pcVar4)();
        }
        puVar13 = (undefined8 *)puVar6[4];
        func_0x000107c61174();
      }
      else {
        puVar13 = (undefined8 *)0x0;
        FUN_10391180c(0,puVar6,&PTR_PTR_1126b25d0,0x112d55598);
      }
      func_0x000107c6142c(puVar6);
      puVar6 = puVar13;
      func_0x000107c4c930();
      func_0x000107c61180();
      if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x103911f18);
        (*pcVar4)();
      }
      puVar7 = puVar6;
      func_0x000107c44984();
      func_0x000107c61170(puVar6);
      if (((ulong)puVar7 & 1) != 0) {
        puVar6 = puVar13;
        func_0x000107c4c930();
        func_0x000107c61180();
        if (puVar6 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x103911f1c);
          (*pcVar4)();
        }
        puVar7 = puVar6;
        func_0x000107c4c99c();
        func_0x000107c61180();
        func_0x000107c61170(puVar6);
        if (puVar7 != (undefined8 *)0x0) {
          func_0x0001000285a8(0x112d53960,&UNK_10d91a4d0);
          func_0x000107c4ca6c();
          func_0x000107c61180();
          puVar6 = param_1;
          func_0x000100759c94();
          func_0x000107c61170(param_1);
          func_0x0001048886ac(&puStack_88);
          func_0x000107c61574();
          if ((char)uStack_80 == '\x01') {
            puStack_68 = puStack_88;
            iVar5 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            puVar12 = puStack_88;
            if (iVar5 != 0) {
              uVar9 = 0x112d393f0;
              func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
              func_0x000107c61658(&puStack_68,uVar9,PTR___ss5ErrorWS_11034ee10);
            }
          }
          else {
            if (puStack_88 != (undefined *)0x0) {
              puVar8 = puVar13;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (puVar8 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x103911f20);
                (*pcVar4)();
              }
              puVar6 = puVar8;
              func_0x000107c5d0f0();
              func_0x000107c61170(puVar8);
              puVar12 = PTR_PTR_1126affc0;
              func_0x000107c61168();
              if ((int)puVar6 == 0) {
                func_0x000107c60a44(&puStack_88,0x4008000000000000,1000);
                func_0x000107c45078();
              }
              else {
                func_0x000107c5dda4();
              }
              func_0x000107c61180();
              uVar9 = *puVar10;
              *puVar10 = puVar12;
              func_0x000107c61170(uVar9);
              puVar8 = puVar13;
              func_0x000107c4c930();
              func_0x000107c61180();
              puVar10 = puVar8;
              func_0x00010853cd64();
              func_0x000107c61180();
              func_0x000107c61170(puVar8);
              puVar8 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
              if (puVar10 != (undefined8 *)0x0) {
                uVar9 = 0;
                FUN_103912258(0,0x112d530c8,&PTR_PTR_1126affc8);
                puVar8 = puVar10;
                func_0x000107c5fc54(puVar10,uVar9);
                func_0x000107c61170(puVar10);
              }
              uVar11 = *puVar2;
              *puVar2 = (ulong)puVar8;
              func_0x000107c6142c(uVar11);
              uVar11 = *puVar2;
              if (uVar11 >> 0x3e != 0) {
                uVar1 = uVar11 & 0xffffffffffffff8;
                if (0x7fffffffffffffff < uVar11) {
                  uVar1 = uVar11;
                }
                func_0x000107c60480(uVar1);
              }
              puVar8 = puVar13;
              func_0x000107c4c930();
              func_0x000107c61180();
              if (puVar8 != (undefined8 *)0x0) {
                puVar10 = puVar8;
                func_0x000107c3f584();
                func_0x000107c61180();
                func_0x000107c61170(puVar8);
                if (puVar10 == (undefined8 *)0x0) {
                  *puVar3 = 0;
                  func_0x000107c61170(puVar13);
                  func_0x000102784d38(puStack_88,uStack_80 & 0xff);
                }
                else {
                  puVar8 = puVar10;
                  func_0x000107c4369c();
                  *puVar3 = (char)puVar8;
                  func_0x000107c61174();
                  puVar8 = puVar10;
                  func_0x000107c43b4c();
                  func_0x000107c61170(puVar13);
                  func_0x000102784d38(puStack_88,uStack_80 & 0xff);
                  func_0x000107c61170(puVar10);
                  func_0x000107c61170(puVar7);
                  puVar7 = puVar10;
                  puVar10 = puVar8;
                }
                func_0x000107c61170(puVar7);
                *puVar14 = (char)puVar10;
                return;
              }
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x103911f24);
              (*pcVar4)();
            }
            FUN_103911f24();
            puVar12 = &UNK_1106ab768;
            func_0x000107c613f8(&UNK_1106ab768,puVar6,0,0);
            puVar6[1] = 1;
            *puVar6 = 0;
            func_0x000107c61654();
          }
          func_0x000107c61170(puVar13);
          func_0x000107c61170(puVar7);
          uVar9 = *puVar8;
          *puVar8 = puVar12;
          goto code_r0x000107c614ac;
        }
      }
      func_0x000107c61170();
    }
  }
  FUN_103911f24();
  puVar12 = &UNK_1106ab768;
  func_0x000107c613f8(&UNK_1106ab768,puVar13,0,0);
  puVar13[1] = 1;
  *puVar13 = 0;
  uVar9 = *puVar8;
  *puVar8 = puVar12;
code_r0x000107c614ac:
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_errorRelease_11034f318)(uVar9);
  return;
}



/* Entry: 103911f24; end: 103911f63;  */

void FUN_103911f24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fae048 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc224a8;
  func_0x000107c61520(&UNK_10dc224a8,&UNK_1106ab768);
  puRam0000000112fae048 = puVar1;
  return;
}



/* Entry: 103911f64; end: 103911fab;  */

void FUN_103911f64(undefined *param_1)

{
  undefined *puVar1;
  undefined *puStack_28;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar1 = param_1;
  }
  puStack_28 = puVar1;
  func_0x000107c61434();
  func_0x000100b60084(&puStack_28);
  func_0x000107c6142c(puVar1);
  return;
}



/* Entry: 103911fac; end: 103911fdb;  */

void FUN_103911fac(undefined8 param_1,char param_2,code *UNRECOVERED_JUMPTABLE)

{
  if (param_2 == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010bdc019c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_errorRelease_11034f318)();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000103911fbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Entry: 103911fdc; end: 10391213f;  */

undefined8 * FUN_103911fdc(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  if (0xfffffffe < uVar1) {
    *param_1 = *param_2;
    param_1[1] = uVar1;
    func_0x000107c61434(uVar1);
    return param_1;
  }
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  return param_1;
}



/* Entry: 103912140; end: 103912237;  */

int FUN_103912140(int *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffd;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  iVar1 = 0;
  if (3 < (int)uVar2 + 1U) {
    iVar1 = (int)uVar2 + -2;
  }
  return iVar1;
}



/* Entry: 103912238; end: 103912257;  */

void FUN_103912238(void)

{
  func_0x000107c61168(&PTR_PTR_1128ff500);
  return;
}



/* Entry: 103912258; end: 103912297;  */

void FUN_103912258(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 != 0) {
    return;
  }
  lVar1 = *param_3;
  func_0x000107c61168();
  func_0x000107c614ec();
  *param_2 = lVar1;
  return;
}



/* Entry: 103912298; end: 1039124d3;  */

void FUN_103912298(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  long unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  code *pcVar11;
  undefined *puVar12;
  undefined4 uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar5 = *(long *)(unaff_x20 + 0x30);
  plVar1 = *(long **)(unaff_x20 + 0x38);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x40);
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    lVar6 = lVar5;
    func_0x000107c5d060(lVar5);
    func_0x000107c61180();
    func_0x000107c3ab44(&puStack_90);
    puVar12 = puStack_68;
    puVar9 = puStack_78;
    uVar8 = (undefined4)uStack_70;
    uVar13 = uStack_70._4_4_;
    func_0x000107c61170(lVar6);
    lVar6 = lVar5;
    func_0x000107c4c9d4();
    func_0x000107c61180();
    if (lVar6 == 0) {
      pcVar11 = (code *)0x0;
      puVar10 = (undefined *)0x0;
      lVar6 = *plVar1;
      puVar4 = PTR_PTR_1126affc0;
      goto joined_r0x000103912420;
    }
    puVar10 = &UNK_1106aba58;
    func_0x000107c613fc(&UNK_1106aba58,0x30,7);
    *(long **)(puVar10 + 0x10) = plVar1;
    *(undefined **)(puVar10 + 0x18) = puVar9;
    *(undefined4 *)(puVar10 + 0x20) = uVar8;
    *(undefined4 *)(puVar10 + 0x24) = uVar13;
    *(undefined **)(puVar10 + 0x28) = puVar12;
    puVar4 = &UNK_1106aba80;
    func_0x000107c613fc(&UNK_1106aba80,0x20,7);
    pcVar11 = FUN_103912a4c;
    *(code **)(puVar4 + 0x10) = FUN_103912a4c;
    *(undefined **)(puVar4 + 0x18) = puVar10;
    uStack_70 = 0x103912f04;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101351610;
    puStack_78 = &UNK_1106aba98;
    ppuVar3 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_68);
    func_0x000107c4c5a0(lVar6);
    func_0x000107c60bd0(ppuVar3);
  }
  else {
    puVar12 = *(undefined **)(unaff_x20 + 0x20);
    uVar8 = *(undefined4 *)(unaff_x20 + 0x18);
    uVar13 = *(undefined4 *)(unaff_x20 + 0x1c);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
    puVar9 = *(undefined **)(unaff_x20 + 0x10);
    puVar4 = PTR_PTR_1126affc0;
    func_0x000107c61168();
    puStack_90 = puVar9;
    uStack_88 = uVar2;
    puStack_80 = puVar12;
    func_0x000107c5d19c();
    func_0x000107c61180();
    pcVar11 = (code *)0x0;
    puVar10 = (undefined *)0x0;
    lVar6 = *plVar1;
    *plVar1 = (long)puVar4;
  }
  func_0x000107c61170(lVar6);
  lVar6 = *plVar1;
  puVar4 = PTR_PTR_1126affc0;
joined_r0x000103912420:
  PTR_PTR_1126affc0 = puVar4;
  if (lVar6 == 0) {
    func_0x000107c61168();
    uStack_88 = CONCAT44(uVar13,uVar8);
    puStack_90 = puVar9;
    puStack_80 = puVar12;
    func_0x000107c5d19c();
    func_0x000107c61180();
    lVar6 = *plVar1;
    *plVar1 = (long)puVar4;
    func_0x000107c61170(lVar6);
  }
  func_0x000107c4c9d4(lVar5);
  func_0x000107c61180();
  lVar6 = lVar5;
  FUN_1039127e0();
  func_0x000107c61170(lVar5);
  func_0x000107c5645c(uVar7);
  func_0x000107c61170(lVar6);
  func_0x000100d62e80(pcVar11,puVar10);
  return;
}



/* Entry: 1039124d4; end: 1039127df;  */

void FUN_1039124d4(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puVar11;
  undefined *puVar12;
  code *pcVar13;
  code *pcStack_b8;
  undefined *puStack_b0;
  code *pcStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar8 = *(long *)(unaff_x20 + 0x10);
  plVar1 = *(long **)(unaff_x20 + 0x18);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar9 = lVar8;
  func_0x000107c4c9d4();
  func_0x000107c61180();
  if (lVar9 == 0) {
    puStack_b0 = (undefined *)0x0;
    pcStack_a8 = (code *)0x0;
    pcStack_b8 = (code *)0x0;
    puVar11 = (undefined *)0x0;
    pcVar13 = (code *)0x0;
    puVar12 = (undefined *)0x0;
    lVar9 = *plVar1;
    puVar6 = PTR_PTR_1126affc0;
  }
  else {
    puStack_b0 = &UNK_1106ab878;
    func_0x000107c613fc(&UNK_1106ab878,0x20,7);
    *(long **)(puStack_b0 + 0x10) = plVar1;
    *(undefined8 *)(puStack_b0 + 0x18) = uVar10;
    puVar11 = &UNK_1106ab8a0;
    func_0x000107c613fc(&UNK_1106ab8a0,0x20,7);
    pcStack_a8 = FUN_1039128ec;
    *(code **)(puVar11 + 0x10) = FUN_1039128ec;
    *(undefined **)(puVar11 + 0x18) = puStack_b0;
    puVar2 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_80 = FUN_1039128f4;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_101351610;
    puStack_88 = &UNK_1106ab8b8;
    ppuVar3 = &puStack_a0;
    puStack_78 = puVar11;
    func_0x000107c60bc4();
    puVar11 = puStack_78;
    uVar4 = uVar10;
    func_0x000107c61174();
    func_0x000107c61574(puVar11);
    puVar11 = &UNK_1106ab8f0;
    func_0x000107c613fc(&UNK_1106ab8f0,0x20,7);
    *(long **)(puVar11 + 0x10) = plVar1;
    *(undefined8 *)(puVar11 + 0x18) = uVar4;
    puVar12 = &UNK_1106ab918;
    func_0x000107c613fc(&UNK_1106ab918,0x20,7);
    pcStack_b8 = FUN_103912914;
    *(code **)(puVar12 + 0x10) = FUN_103912914;
    *(undefined **)(puVar12 + 0x18) = puVar11;
    pcStack_80 = FUN_1039129b8;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = FUN_1039103bc;
    puStack_88 = &UNK_1106ab930;
    ppuVar5 = &puStack_a0;
    puStack_78 = puVar12;
    func_0x000107c60bc4(ppuVar5);
    puVar12 = puStack_78;
    func_0x000107c61174();
    func_0x000107c61574(puVar12);
    puVar12 = &UNK_1106ab968;
    func_0x000107c613fc(&UNK_1106ab968,0x20,7);
    *(long **)(puVar12 + 0x10) = plVar1;
    *(undefined8 *)(puVar12 + 0x18) = uVar4;
    puVar6 = &UNK_1106ab990;
    func_0x000107c613fc(&UNK_1106ab990,0x20,7);
    pcVar13 = FUN_1039129d8;
    *(code **)(puVar6 + 0x10) = FUN_1039129d8;
    *(undefined **)(puVar6 + 0x18) = puVar12;
    pcStack_80 = FUN_1039129e0;
    puStack_a0 = puVar2;
    uStack_98 = 0x42000000;
    pcStack_90 = (code *)&UNK_1010f3860;
    puStack_88 = &UNK_1106ab9a8;
    ppuVar7 = &puStack_a0;
    puStack_78 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    puVar6 = puStack_78;
    func_0x000107c61174(uVar4);
    func_0x000107c61574(puVar6);
    func_0x000107c4c5a0(lVar9);
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar9);
    lVar9 = *plVar1;
    puVar6 = PTR_PTR_1126affc0;
  }
  PTR_PTR_1126affc0 = puVar6;
  if (lVar9 == 0) {
    func_0x000107c61168();
    func_0x000107c5dd5c();
    func_0x000107c61180();
    lVar9 = *plVar1;
    *plVar1 = (long)puVar6;
    func_0x000107c61170(lVar9);
    func_0x000107c4c9d4(lVar8);
    func_0x000107c61180();
    lVar9 = lVar8;
    FUN_1039127e0();
    func_0x000107c61170(lVar8);
    func_0x000107c5645c(uVar10);
    func_0x000107c61170(lVar9);
  }
  func_0x000100d62e80(pcStack_a8,puStack_b0);
  func_0x000100d62e80(pcStack_b8,puVar11);
  func_0x000100d62e80(pcVar13,puVar12);
  return;
}



/* Entry: 1039127e0; end: 1039128eb;  */

undefined * FUN_1039127e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  puVar1 = PTR_PTR_1126affd0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_1 != 0) {
    puVar2 = &UNK_1106ab9e0;
    func_0x000107c613fc(&UNK_1106ab9e0,0x18,7);
    *(undefined **)(puVar2 + 0x10) = puVar1;
    puVar3 = &UNK_1106aba08;
    func_0x000107c613fc(&UNK_1106aba08,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_103912a40;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    uStack_50 = 0x103912f00;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101351610;
    puStack_58 = &UNK_1106aba20;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    puVar3 = puStack_48;
    func_0x000107c61174(puVar1);
    func_0x000107c61574(puVar3);
    func_0x000107c4c5a0(param_1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar2);
  }
  return puVar1;
}



/* Entry: 1039128ec; end: 1039128f3;  */

void FUN_1039128ec(double param_1,long param_2)

{
  bool bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  undefined1 *puVar11;
  long lVar12;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(uVar5 - 8) + 0x40));
  puVar11 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar10 = (long)puVar11 - extraout_x12;
  func_0x000107c5ed5c();
  if ((uVar5 & 1) != 0) {
    puVar6 = PTR_PTR_1126affc0;
    func_0x000107c61168();
    puVar7 = puVar6;
    func_0x000107c5ed90();
    func_0x000107c5dda4();
    func_0x000107c61180();
    func_0x000107c61170(puVar7);
    uVar8 = *puVar2;
    *puVar2 = puVar6;
    func_0x000107c61170(uVar8);
    puVar6 = PTR_PTR_1126affd0;
    func_0x000107c610f8(PTR_PTR_1126affd0);
    func_0x000107c453e4();
    func_0x000107c5648c();
    func_0x000107c40c4c();
    func_0x000107c61180();
    bVar1 = param_2 == 0;
    if (bVar1) {
      func_0x000107c5eea4();
    }
    else {
      func_0x000107c5ee94(puVar11);
      func_0x000107c61170(param_2);
      param_2 = 0;
      func_0x000107c5eea4();
    }
    lVar12 = *(long *)(param_2 + -8);
    (**(code **)(lVar12 + 0x38))(puVar11,bVar1,1,param_2);
    func_0x0001003a4c00(puVar11,lVar10);
    func_0x000107c5eea4(0);
    lVar9 = lVar10;
    (**(code **)(lVar12 + 0x30))(lVar10,1,param_2);
    if ((int)lVar9 == 1) {
      func_0x000103912a00(lVar10,0x112d373d8,&UNK_10d9014c0);
    }
    else {
      func_0x000107c5ee8c();
      (**(code **)(lVar12 + 8))(lVar10,param_2);
      if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1039103bc);
        (*pcVar4)();
      }
      if (param_1 <= -1.0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1039103b4);
        (*pcVar4)();
      }
      if (1.8446744073709552e+19 <= param_1) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1039103b8);
        (*pcVar4)();
      }
    }
    func_0x000107c53ac8(puVar6);
    func_0x000107c5645c(uVar3);
    func_0x000107c61170(puVar6);
  }
  return;
}



/* Entry: 1039128f4; end: 103912913;  */

void FUN_1039128f4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103912914; end: 1039129b7;  */

/* WARNING: Possible PIC construction at 0x000103912968: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010391296c) */

void FUN_103912914(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126affc0;
  func_0x000107c61168(PTR_PTR_1126affc0);
  puVar2 = puVar1;
  func_0x000107c5ed90();
  func_0x000107c5dda4(puVar1);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1039129b8; end: 1039129d7;  */

void FUN_1039129b8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1039129d8; end: 1039129df;  */

void FUN_1039129d8(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  func_0x000100029394(param_1,puVar9);
  puVar4 = puVar9;
  (**(code **)(lVar10 + 0x30))(puVar9,1,lVar3);
  if ((int)puVar4 == 1) {
    func_0x000103912a00(puVar9,0x112d36580,&UNK_10d9016d0);
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,puVar9,lVar3);
    puVar5 = PTR_PTR_1126affc0;
    func_0x000107c61168();
    puVar6 = puVar5;
    func_0x000107c5ed90();
    func_0x000107c5dda4();
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    uVar7 = *puVar1;
    *puVar1 = puVar5;
    func_0x000107c61170(uVar7);
    puVar5 = PTR_PTR_1126affd0;
    func_0x000107c610f8(PTR_PTR_1126affd0);
    func_0x000107c453e4();
    func_0x000107c5648c();
    func_0x000107c5645c(uVar2);
    func_0x000107c61170(puVar5);
    (**(code **)(lVar10 + 8))(lVar8,lVar3);
  }
  return;
}



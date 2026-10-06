/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103d5a520; end: 103d5a533;  */

void FUN_103d5a520(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006670;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006670,&UNK_10dc89120);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5a534; end: 103d5a567;  */

void FUN_103d5a534(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 103d5a568; end: 103d5a66b;  */

void FUN_103d5a568(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103d5a66c; end: 103d5a68f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5a66c(long *param_1,long *param_2)

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
  
  if (*param_1 != *param_2) {
    return (byte *)0x0;
  }
  lVar24 = param_2[1];
  uVar16 = param_2[2];
  pbVar10 = (byte *)param_1[1];
  pbVar25 = (byte *)param_1[2];
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



/* Entry: 103d5a690; end: 103d5a6d7;  */

void FUN_103d5a690(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc89170,0x3a,2);
  uRam0000000113810ef8 = uStack_38;
  uRam0000000113810ef0 = uStack_40;
  uRam0000000113810f08 = uStack_28;
  uRam0000000113810f00 = uStack_30;
  uRam0000000113810f18 = uStack_18;
  uRam0000000113810f10 = uStack_20;
  return;
}



/* Entry: 103d5a6d8; end: 103d5a783;  */

void FUN_103d5a6d8(undefined8 param_1,long param_2,long param_3)

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
      pcVar3 = *(code **)(param_3 + 0x60);
      goto LAB_103d5a714;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x60);
LAB_103d5a714:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_103d5a714;
}



/* Entry: 103d5a784; end: 103d5a827;  */

void FUN_103d5a784(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) ||
       ((**(code **)(param_3 + 0x20))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 103d5a828; end: 103d5a85f;  */

void FUN_103d5a828(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0xc000000000000000;
  return;
}



/* Entry: 103d5a860; end: 103d5a88f;  */

undefined1  [16] FUN_103d5a860(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 103d5a890; end: 103d5a8c3;  */

void FUN_103d5a890(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 103d5a8c4; end: 103d5a8d7;  */

undefined1  [16] FUN_103d5a8c4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x103d5a8d4;
  return auVar1;
}



/* Entry: 103d5a8d8; end: 103d5a8ff;  */

void FUN_103d5a8d8(void)

{
  FUN_103d5a6d8();
  return;
}



/* Entry: 103d5a900; end: 103d5a903;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103d5a900(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103d5a904; end: 103d5a93b;  */

uint FUN_103d5a904(long param_1,long param_2)

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
  FUN_103d5d958();
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



/* Entry: 103d5a93c; end: 103d5a973;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5a93c(long *param_1)

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
  long *unaff_x20;
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
  
  if ((*unaff_x20 != *param_1 || unaff_x20[1] != param_1[1]) || unaff_x20[2] != param_1[2]) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)unaff_x20[3];
  pbVar25 = (byte *)unaff_x20[4];
  lVar24 = param_1[3];
  uVar16 = param_1[4];
  puVar7 = (undefined1 *)register0x00000008;
  do {
    *(undefined8 *)(puVar7 + -0x50) = unaff_x26;
    *(byte **)(puVar7 + -0x48) = unaff_x25;
    *(byte **)(puVar7 + -0x40) = unaff_x24;
    *(byte **)(puVar7 + -0x38) = unaff_x23;
    *(ulong *)(puVar7 + -0x30) = unaff_x22;
    *(undefined8 *)(puVar7 + -0x28) = unaff_x21;
    *(long **)(puVar7 + -0x20) = unaff_x20;
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
        unaff_x20 = (long *)((ulong)pbVar25 & 0x3fffffffffffffff);
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
    *(long **)(puVar7 + -0xa0) = unaff_x20;
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
    unaff_x20 = *(long **)(puVar7 + -0xa0);
    unaff_x19 = *(byte **)(puVar7 + -0x98);
    unaff_x22 = *(ulong *)(puVar7 + -0xb0);
    unaff_x21 = *(undefined8 *)(puVar7 + -0xa8);
    unaff_x24 = *(byte **)(puVar7 + -0xc0);
    unaff_x23 = *(byte **)(puVar7 + -0xb8);
    puVar7 = puVar7 + -0x80;
  } while( true );
}



/* Entry: 103d5a974; end: 103d5aa13;  */

/* WARNING: Possible PIC construction at 0x000103d5a9c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103d5a9d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103d5a9c4) */
/* WARNING: Removing unreachable block (ram,0x000103d5a9d4) */

void FUN_103d5a974(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113006530 != -1) {
    func_0x000107c61568(0x113006530,FUN_103d5a690);
  }
  uVar5 = uRam0000000113810f18;
  uVar4 = uRam0000000113810f10;
  uVar3 = uRam0000000113810f08;
  uVar2 = uRam0000000113810f00;
  uVar1 = uRam0000000113810ef8;
  *param_1 = uRam0000000113810ef0;
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



/* Entry: 103d5aa14; end: 103d5aa4f;  */

void FUN_103d5aa14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113006660;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113006660,&UNK_10dc89118);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103d5aa50; end: 103d5ab53;  */

void FUN_103d5aa50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_40 = unaff_x20[4];
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103d5ab54; end: 103d5ab93;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5ab54(long *param_1,long *param_2)

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
  
  if ((*param_1 != *param_2 || param_1[1] != param_2[1]) || param_1[2] != param_2[2]) {
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



/* Entry: 103d5ab94; end: 103d5abdb;  */

undefined8 FUN_103d5ab94(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103d5abdc; end: 103d5ac1b;  */

void FUN_103d5abdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006490 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc885e8;
  func_0x000107c61520(&UNK_10dc885e8,&UNK_110707850);
  puRam0000000113006490 = puVar1;
  return;
}



/* Entry: 103d5ac1c; end: 103d5b073;  */

uint FUN_103d5ac1c(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_100 [32];
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar8 = param_1[5];
  lVar5 = param_1[4];
  uVar3 = param_1[6];
  uVar9 = param_2[5];
  lVar6 = param_2[4];
  uVar4 = param_2[6];
  lStack_a0 = lVar6;
  uStack_98 = uVar9;
  uStack_90 = uVar4;
  lStack_80 = lVar5;
  uStack_78 = uVar8;
  uStack_70 = uVar3;
  if (uVar3 >> 0x3c < 0xf) {
    if (0xe < uVar4 >> 0x3c) goto LAB_103d5ada0;
    if (lVar5 == lVar6) {
      FUN_103d5ab94(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      FUN_103d5ab94(&lStack_a0,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      uVar2 = uVar8;
      func_0x000100e25fcc(uVar8,uVar3,uVar9,uVar4);
      func_0x00010159fa64(lVar5,uVar9,uVar4);
      if ((uVar2 & 1) != 0) goto LAB_103d5accc;
    }
    else {
      FUN_103d5ab94(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      FUN_103d5ab94(&lStack_a0,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar6,uVar9,uVar4);
    }
LAB_103d5af30:
    func_0x00010159fa64(lVar5,uVar8,uVar3);
  }
  else {
    if (uVar4 >> 0x3c < 0xf) {
LAB_103d5ada0:
      FUN_103d5ab94(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      FUN_103d5ab94(&lStack_a0,&lStack_c0,0x112db6f48,&UNK_10d969b40);
      func_0x00010159fa64(lVar5,uVar8,uVar3);
      lVar5 = lVar6;
      uVar8 = uVar9;
      uVar3 = uVar4;
      goto LAB_103d5af30;
    }
    FUN_103d5ab94(&lStack_80,&lStack_c0,0x112db6f48,&UNK_10d969b40);
    FUN_103d5ab94(&lStack_a0,&lStack_c0,0x112db6f48,&UNK_10d969b40);
LAB_103d5accc:
    func_0x00010159fa64(lVar5,uVar8,uVar3);
    lVar6 = param_1[8];
    lVar5 = param_1[7];
    uVar3 = param_1[10];
    uVar8 = param_1[9];
    lVar10 = param_2[8];
    lVar7 = param_2[7];
    uVar9 = param_2[10];
    uVar4 = param_2[9];
    lStack_e0 = lVar7;
    lStack_d8 = lVar10;
    uStack_d0 = uVar4;
    uStack_c8 = uVar9;
    lStack_c0 = lVar5;
    lStack_b8 = lVar6;
    uStack_b0 = uVar8;
    uStack_a8 = uVar3;
    if (uVar3 >> 0x3c < 0xf) {
      if (0xe < uVar9 >> 0x3c) goto LAB_103d5ae7c;
      if (lVar5 == lVar7) {
        if ((int)lVar6 == (int)lVar10) {
          FUN_103d5ab94(&lStack_c0,auStack_100,0x112db8dc0,&UNK_10d969810);
          FUN_103d5ab94(&lStack_e0,auStack_100,0x112db8dc0,&UNK_10d969810);
          uVar2 = uVar8;
          func_0x000100e25fcc(uVar8,uVar3,uVar4,uVar9);
          func_0x0001015d38c8(lVar5,lVar10,uVar4,uVar9);
          if ((uVar2 & 1) != 0) goto LAB_103d5ad58;
          goto LAB_103d5b048;
        }
        FUN_103d5ab94(&lStack_c0,auStack_100,0x112db8dc0,&UNK_10d969810);
        FUN_103d5ab94(&lStack_e0,auStack_100,0x112db8dc0,&UNK_10d969810);
        lVar7 = lVar5;
      }
      else {
        FUN_103d5ab94(&lStack_c0,auStack_100,0x112db8dc0,&UNK_10d969810);
        FUN_103d5ab94(&lStack_e0,auStack_100,0x112db8dc0,&UNK_10d969810);
      }
      func_0x0001015d38c8(lVar7,lVar10,uVar4,uVar9);
LAB_103d5b048:
      func_0x0001015d38c8(lVar5,lVar6,uVar8,uVar3);
    }
    else {
      if (uVar9 >> 0x3c < 0xf) {
LAB_103d5ae7c:
        FUN_103d5ab94(&lStack_c0,auStack_100,0x112db8dc0,&UNK_10d969810);
        FUN_103d5ab94(&lStack_e0,auStack_100,0x112db8dc0,&UNK_10d969810);
        func_0x0001015d38c8(lVar5,lVar6,uVar8,uVar3);
        lVar5 = lVar7;
        lVar6 = lVar10;
        uVar8 = uVar4;
        uVar3 = uVar9;
        goto LAB_103d5b048;
      }
      FUN_103d5ab94(&lStack_c0,auStack_100,0x112db8dc0,&UNK_10d969810);
      FUN_103d5ab94(&lStack_e0,auStack_100,0x112db8dc0,&UNK_10d969810);
LAB_103d5ad58:
      func_0x0001015d38c8(lVar5,lVar6,uVar8,uVar3);
      if (param_1[1] == param_2[1]) {
        lVar5 = param_1[2];
        func_0x000100e25fcc(lVar5,param_1[3],param_2[2],param_2[3]);
        uVar1 = (uint)lVar5;
        goto LAB_103d5b050;
      }
    }
  }
  uVar1 = 0;
LAB_103d5b050:
  return uVar1 & 1;
}



/* Entry: 103d5b074; end: 103d5b133;  */

void FUN_103d5b074(void)

{
  undefined *puVar1;
  
  if (puRam00000001130064a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc886c0;
  func_0x000107c61520(&UNK_10dc886c0,&UNK_1107078d0);
  puRam00000001130064a0 = puVar1;
  return;
}



/* Entry: 103d5b134; end: 103d5b467;  */

uint FUN_103d5b134(ulong *param_1,ulong *param_2)

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
       ) && (param_1[2] == param_2[2])) &&
     ((uVar2 = param_1[3], uVar2 == param_2[3] && param_1[4] == param_2[4] ||
      (func_0x000107c605b8(), (uVar2 & 1) != 0)))) {
    uVar2 = param_1[5];
    if (((uVar2 == param_2[5]) && (param_1[6] == param_2[6])) ||
       (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
      uVar2 = param_1[7];
      if (((uVar2 == param_2[7]) && (param_1[8] == param_2[8])) ||
         (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
        uVar2 = param_1[9];
        if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
           (func_0x000107c605b8(), (uVar2 & 1) != 0)) {
          uVar4 = param_1[0xe];
          uVar2 = param_1[0xd];
          uVar8 = param_1[0x10];
          uVar6 = param_1[0xf];
          uVar5 = param_2[0xe];
          uVar3 = param_2[0xd];
          uVar9 = param_2[0x10];
          uVar7 = param_2[0xf];
          uStack_a0 = uVar3;
          uStack_98 = uVar5;
          uStack_90 = uVar7;
          uStack_88 = uVar9;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar6;
          uStack_68 = uVar8;
          if (uVar8 >> 0x3c < 0xf) {
            if (0xe < uVar9 >> 0x3c) goto LAB_103d5b2c4;
            if (uVar2 == uVar3) {
              if ((int)uVar4 != (int)uVar5) {
                FUN_103d5ab94(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
                FUN_103d5ab94(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
                uVar3 = uVar2;
                goto LAB_103d5b418;
              }
              FUN_103d5ab94(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
              FUN_103d5ab94(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
              uVar3 = uVar6;
              func_0x000100e25fcc(uVar6,uVar8,uVar7,uVar9);
              func_0x0001015d38c8(uVar2,uVar5,uVar7,uVar9);
              if ((uVar3 & 1) != 0) goto LAB_103d5b294;
            }
            else {
              FUN_103d5ab94(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
              FUN_103d5ab94(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
LAB_103d5b418:
              func_0x0001015d38c8(uVar3,uVar5,uVar7,uVar9);
            }
          }
          else {
            if (0xe < uVar9 >> 0x3c) {
              FUN_103d5ab94(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
              FUN_103d5ab94(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
LAB_103d5b294:
              func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
              uVar2 = param_1[0xb];
              func_0x000100e25fcc(uVar2,param_1[0xc],param_2[0xb],param_2[0xc]);
              uVar1 = (uint)uVar2;
              goto LAB_103d5b444;
            }
LAB_103d5b2c4:
            FUN_103d5ab94(&uStack_80,auStack_c0,0x112db8dc0,&UNK_10d969810);
            FUN_103d5ab94(&uStack_a0,auStack_c0,0x112db8dc0,&UNK_10d969810);
            func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
            uVar2 = uVar3;
            uVar4 = uVar5;
            uVar6 = uVar7;
            uVar8 = uVar9;
          }
          func_0x0001015d38c8(uVar2,uVar4,uVar6,uVar8);
        }
      }
    }
  }
  uVar1 = 0;
LAB_103d5b444:
  return uVar1 & 1;
}



/* Entry: 103d5b468; end: 103d5b4e7;  */

void FUN_103d5b468(void)

{
  undefined *puVar1;
  
  if (puRam00000001130064d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88948;
  func_0x000107c61520(&UNK_10dc88948,&UNK_110707a68);
  puRam00000001130064d0 = puVar1;
  return;
}



/* Entry: 103d5b4e8; end: 103d5b563;  */

/* WARNING: Possible PIC construction at 0x000103d5b518: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d5b51c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5b4e8(undefined8 *param_1,undefined8 *param_2)

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
  if ((uVar13 != param_2[2] || param_1[3] != param_2[3]) &&
     (func_0x000107c605b8(), (uVar13 & 1) == 0)) {
    return (byte *)0x0;
  }
  pbVar10 = (byte *)param_1[4];
  pbVar25 = (byte *)param_1[5];
  lVar24 = param_2[4];
  uVar13 = param_2[5];
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



/* Entry: 103d5b564; end: 103d5b623;  */

void FUN_103d5b564(void)

{
  undefined *puVar1;
  
  if (puRam00000001130064f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88af8;
  func_0x000107c61520(&UNK_10dc88af8,&UNK_110707b88);
  puRam00000001130064f0 = puVar1;
  return;
}



/* Entry: 103d5b624; end: 103d5b733;  */

/* WARNING: Possible PIC construction at 0x000103d5b654: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103d5b658) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103d5b624(undefined8 *param_1,undefined8 *param_2)

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
    lVar19 = param_1[4];
    lVar22 = param_2[4];
    if (*(char *)(param_2 + 5) == '\x01') {
      if (lVar22 < 3) {
        if (lVar22 == 0) {
          if (lVar19 == 0) goto LAB_103d5b6bc;
        }
        else if (lVar22 == 1) {
          if (lVar19 == 1) goto LAB_103d5b6bc;
        }
        else if (lVar19 == 2) goto LAB_103d5b6bc;
      }
      else if (lVar22 < 5) {
        if (lVar22 == 3) {
          if (lVar19 == 3) {
LAB_103d5b6bc:
            pbVar10 = (byte *)param_1[6];
            pbVar26 = (byte *)param_1[7];
            lVar19 = param_2[6];
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
              uVar4 = (uint)((ulong)pbVar26 >> 0x20);
              uVar18 = uVar4 >> 0x1e;
              uVar5 = (uint)(uVar13 >> 0x20);
              uVar23 = uVar5 >> 0x1e;
              iVar8 = (int)pbVar10;
              pbVar14 = pbVar26;
              if ((ulong)pbVar26 >> 0x3e == 3) {
                uVar21 = 0;
                if ((((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                    (uVar13 >> 0x3e < 3)) ||
                   ((uVar21 = 0, lVar19 != 0 || (uVar13 != 0xc000000000000000))))
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
                  uVar24 = uVar13 >> 0x30 & 0xff;
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
                      pbVar14 = puVar7 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
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
                    lVar22 = *(long *)(pbVar10 + 0x10);
                    unaff_x24 = *(byte **)(pbVar10 + 0x18);
                    func_0x000107c5ec30();
                    pbVar14 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      func_0x000107c5ec3c();
                      if (SBORROW8(lVar22,(long)pbVar14)) {
                    /* WARNING: Does not return */
                        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                        (*pcVar6)();
                      }
                      pbVar10 = pbVar10 + (lVar22 - (long)pbVar14);
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
                  unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
                  unaff_x21 = 0;
                  func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar19,uVar13);
                  pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                  unaff_x22 = uVar13;
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
              pbVar15 = pbVar10;
              if (bVar27 < 3) {
                if (bVar27 == 0) {
                  if (pbVar14[0x28] == 0) {
                    lVar19 = *(long *)pbVar14;
                    uVar11 = 0;
                    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                    func_0x000107c60118(pbVar12,lVar19,uVar11);
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
                  lVar19 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar19,uVar11);
                  if (((ulong)pbVar12 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  pbVar12 = pbVar10;
                  pbVar15 = pbVar26;
                  if ((pbVar10 == pbVar16) && (pbVar26 == pbVar17)) {
                    return (byte *)0x1;
                  }
                }
                else {
                  if (pbVar14[0x28] != 2) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                    if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                      return (byte *)0x0;
                    }
                    if (pbVar25 != (byte *)0x0) {
                      if (lVar19 == 0) {
                        return (byte *)0x0;
                      }
                      func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
                  if (pbVar14[0x28] != 4) {
                    return (byte *)0x0;
                  }
                  pbVar16 = *(byte **)pbVar14;
                  pbVar17 = *(byte **)(pbVar14 + 8);
                  if (((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) &&
                     (pbVar12 = pbVar26, pbVar15 = pbVar25, pbVar16 = *(byte **)(pbVar14 + 0x10),
                     pbVar17 = *(byte **)(pbVar14 + 0x18),
                     pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar25 == *(byte **)(pbVar14 + 0x18))
                     ) {
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
                lVar19 = *(long *)(pbVar14 + 0x20);
                if (pbVar26 == (byte *)0x0) {
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
                  pbVar15 = pbVar26;
                  if ((pbVar10 != pbVar16) || (pbVar26 != pbVar17)) goto code_r0x000107c605b8;
                }
                if (lVar22 != 0) {
                  if (lVar19 == 0) {
                    return (byte *)0x0;
                  }
                  if ((pbVar25 == *(byte **)(pbVar14 + 0x18)) && (lVar22 == lVar19)) {
                    return (byte *)0x1;
                  }
                  func_0x000107c605b8(pbVar25,lVar22,*(byte **)(pbVar14 + 0x18),lVar19,0);
joined_r0x000100e266a4:
                  if (((ulong)pbVar25 & 1) == 0) {
                    return (byte *)0x0;
                  }
                  return (byte *)0x1;
                }
                goto joined_r0x000100e26620;
              }
              if (bVar27 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && lVar22 == 0) && pbVar26 == (byte *)0x0) {
                  if (pbVar14[0x28] != 6) {
                    return (byte *)0x0;
                  }
                  lVar22 = *(long *)(pbVar14 + 0x20);
                  lVar19 = *(long *)(pbVar14 + 0x18);
                  bVar27 = pbVar14[8] | (byte)lVar19;
                  bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                  bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                  bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                  bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                  bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                  bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                  bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                  bVar35 = pbVar14[0x10] | (byte)lVar22;
                  bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                  bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                  bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                  bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                  bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                  bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                  bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0)
                    && lVar22 == 0)) {
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
                lVar22 = *(long *)(pbVar14 + 0x20);
                lVar19 = *(long *)(pbVar14 + 0x18);
                bVar27 = pbVar14[8] | (byte)lVar19;
                bVar28 = pbVar14[9] | (byte)((ulong)lVar19 >> 8);
                bVar29 = pbVar14[10] | (byte)((ulong)lVar19 >> 0x10);
                bVar30 = pbVar14[0xb] | (byte)((ulong)lVar19 >> 0x18);
                bVar31 = pbVar14[0xc] | (byte)((ulong)lVar19 >> 0x20);
                bVar32 = pbVar14[0xd] | (byte)((ulong)lVar19 >> 0x28);
                bVar33 = pbVar14[0xe] | (byte)((ulong)lVar19 >> 0x30);
                bVar34 = pbVar14[0xf] | (byte)((ulong)lVar19 >> 0x38);
                bVar35 = pbVar14[0x10] | (byte)lVar22;
                bVar36 = pbVar14[0x11] | (byte)((ulong)lVar22 >> 8);
                bVar37 = pbVar14[0x12] | (byte)((ulong)lVar22 >> 0x10);
                bVar38 = pbVar14[0x13] | (byte)((ulong)lVar22 >> 0x18);
                bVar39 = pbVar14[0x14] | (byte)((ulong)lVar22 >> 0x20);
                bVar40 = pbVar14[0x15] | (byte)((ulong)lVar22 >> 0x28);
                bVar41 = pbVar14[0x16] | (byte)((ulong)lVar22 >> 0x30);
                bVar42 = pbVar14[0x17] | (byte)((ulong)lVar22 >> 0x38);
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
                                                                               CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
                goto joined_r0x000100e26620;
              }
              if (pbVar14[0x28] != 5) {
                return (byte *)0x0;
              }
              lVar19 = *(long *)(pbVar14 + 8);
              uVar13 = *(ulong *)(pbVar14 + 0x10);
              lVar22 = *(long *)pbVar14;
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
        }
        else if (lVar19 == 4) goto LAB_103d5b6bc;
      }
      else if (lVar22 == 5) {
        if (lVar19 == 5) goto LAB_103d5b6bc;
      }
      else if (lVar19 == 6) goto LAB_103d5b6bc;
    }
    else if (lVar19 == lVar22) goto LAB_103d5b6bc;
  }
  return (byte *)0x0;
}



/* Entry: 103d5b734; end: 103d5b7f3;  */

void FUN_103d5b734(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006518 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88ca8;
  func_0x000107c61520(&UNK_10dc88ca8,&UNK_110707c90);
  puRam0000000113006518 = puVar1;
  return;
}



/* Entry: 103d5b7f4; end: 103d5b807;  */

void FUN_103d5b7f4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5b808();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103d5b848)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5b808; end: 103d5b887;  */

void FUN_103d5b808(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006540 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88500;
  func_0x000107c61520(&UNK_10dc88500,&UNK_1107077d8);
  puRam0000000113006540 = puVar1;
  return;
}



/* Entry: 103d5b888; end: 103d5b88b;  */

void FUN_103d5b888(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113006550 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113006558;
  func_0x00010002969c(0x113006558,&UNK_10dc88488);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113006550 = puVar2;
  return;
}



/* Entry: 103d5b88c; end: 103d5b8db;  */

void FUN_103d5b88c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000113006550 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x113006558;
  func_0x00010002969c(0x113006558,&UNK_10dc88488);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000113006550 = puVar2;
  return;
}



/* Entry: 103d5b8dc; end: 103d5b8df;  */

void FUN_103d5b8dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88540;
  func_0x000107c61520(&UNK_10dc88540,&UNK_1107077d8);
  puRam0000000113006560 = puVar1;
  return;
}



/* Entry: 103d5b8e0; end: 103d5b91f;  */

void FUN_103d5b8e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006560 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88540;
  func_0x000107c61520(&UNK_10dc88540,&UNK_1107077d8);
  puRam0000000113006560 = puVar1;
  return;
}



/* Entry: 103d5b920; end: 103d5b943;  */

void FUN_103d5b920(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5b944();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5b944; end: 103d5b983;  */

void FUN_103d5b944(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006568 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc885c0;
  func_0x000107c61520(&UNK_10dc885c0,&UNK_110707850);
  puRam0000000113006568 = puVar1;
  return;
}



/* Entry: 103d5b984; end: 103d5b99b;  */

void FUN_103d5b984(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5abdc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd1ec8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5b99c; end: 103d5b9db;  */

void FUN_103d5b99c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006570 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88628;
  func_0x000107c61520(&UNK_10dc88628,&UNK_110707850);
  puRam0000000113006570 = puVar1;
  return;
}



/* Entry: 103d5b9dc; end: 103d5b9ff;  */

void FUN_103d5b9dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5ba00();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5ba00; end: 103d5ba3f;  */

void FUN_103d5ba00(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006578 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88698;
  func_0x000107c61520(&UNK_10dc88698,&UNK_1107078d0);
  puRam0000000113006578 = puVar1;
  return;
}



/* Entry: 103d5ba40; end: 103d5ba57;  */

void FUN_103d5ba40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5b074();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103cd1f08)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5ba58; end: 103d5ba97;  */

void FUN_103d5ba58(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006580 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88700;
  func_0x000107c61520(&UNK_10dc88700,&UNK_1107078d0);
  puRam0000000113006580 = puVar1;
  return;
}



/* Entry: 103d5ba98; end: 103d5babb;  */

void FUN_103d5ba98(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5babc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5babc; end: 103d5bafb;  */

void FUN_103d5babc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006588 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88770;
  func_0x000107c61520(&UNK_10dc88770,&UNK_110707960);
  puRam0000000113006588 = puVar1;
  return;
}



/* Entry: 103d5bafc; end: 103d5bb0f;  */

void FUN_103d5bafc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d5b0b4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5bb10();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5bb10; end: 103d5bb4f;  */

void FUN_103d5bb10(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006590 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88728;
  func_0x000107c61520(&DAT_10dc88728,&UNK_110707960);
  puRam0000000113006590 = puVar1;
  return;
}



/* Entry: 103d5bb50; end: 103d5bb53;  */

void FUN_103d5bb50(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc887d8;
  func_0x000107c61520(&UNK_10dc887d8,&UNK_110707960);
  puRam0000000113006598 = puVar1;
  return;
}



/* Entry: 103d5bb54; end: 103d5bb93;  */

void FUN_103d5bb54(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006598 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc887d8;
  func_0x000107c61520(&UNK_10dc887d8,&UNK_110707960);
  puRam0000000113006598 = puVar1;
  return;
}



/* Entry: 103d5bb94; end: 103d5bbb7;  */

void FUN_103d5bb94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5bbb8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5bbb8; end: 103d5bbf7;  */

void FUN_103d5bbb8(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88848;
  func_0x000107c61520(&UNK_10dc88848,&UNK_1107079e0);
  puRam00000001130065a0 = puVar1;
  return;
}



/* Entry: 103d5bbf8; end: 103d5bc0b;  */

void FUN_103d5bbf8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d5b0f4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5bc0c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5bc0c; end: 103d5bc4b;  */

void FUN_103d5bc0c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88800;
  func_0x000107c61520(&DAT_10dc88800,&UNK_1107079e0);
  puRam00000001130065a8 = puVar1;
  return;
}



/* Entry: 103d5bc4c; end: 103d5bc4f;  */

void FUN_103d5bc4c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc888b0;
  func_0x000107c61520(&UNK_10dc888b0,&UNK_1107079e0);
  puRam00000001130065b0 = puVar1;
  return;
}



/* Entry: 103d5bc50; end: 103d5bc8f;  */

void FUN_103d5bc50(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc888b0;
  func_0x000107c61520(&UNK_10dc888b0,&UNK_1107079e0);
  puRam00000001130065b0 = puVar1;
  return;
}



/* Entry: 103d5bc90; end: 103d5bcb3;  */

void FUN_103d5bc90(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5bcb4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5bcb4; end: 103d5bcf3;  */

void FUN_103d5bcb4(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88920;
  func_0x000107c61520(&UNK_10dc88920,&UNK_110707a68);
  puRam00000001130065b8 = puVar1;
  return;
}



/* Entry: 103d5bcf4; end: 103d5bd07;  */

void FUN_103d5bcf4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5b468();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5bd08();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5bd08; end: 103d5bd47;  */

void FUN_103d5bd08(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc888d8;
  func_0x000107c61520(&DAT_10dc888d8,&UNK_110707a68);
  puRam00000001130065c0 = puVar1;
  return;
}



/* Entry: 103d5bd48; end: 103d5bd4b;  */

void FUN_103d5bd48(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88988;
  func_0x000107c61520(&UNK_10dc88988,&UNK_110707a68);
  puRam00000001130065c8 = puVar1;
  return;
}



/* Entry: 103d5bd4c; end: 103d5bd8b;  */

void FUN_103d5bd4c(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88988;
  func_0x000107c61520(&UNK_10dc88988,&UNK_110707a68);
  puRam00000001130065c8 = puVar1;
  return;
}



/* Entry: 103d5bd8c; end: 103d5bdaf;  */

void FUN_103d5bd8c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5bdb0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5bdb0; end: 103d5bdef;  */

void FUN_103d5bdb0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc889f8;
  func_0x000107c61520(&UNK_10dc889f8,&UNK_110707b00);
  puRam00000001130065d0 = puVar1;
  return;
}



/* Entry: 103d5bdf0; end: 103d5be03;  */

void FUN_103d5bdf0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d5b4a8)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5be04();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5be04; end: 103d5be43;  */

void FUN_103d5be04(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc889b0;
  func_0x000107c61520(&DAT_10dc889b0,&UNK_110707b00);
  puRam00000001130065d8 = puVar1;
  return;
}



/* Entry: 103d5be44; end: 103d5be47;  */

void FUN_103d5be44(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88a60;
  func_0x000107c61520(&UNK_10dc88a60,&UNK_110707b00);
  puRam00000001130065e0 = puVar1;
  return;
}



/* Entry: 103d5be48; end: 103d5be87;  */

void FUN_103d5be48(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88a60;
  func_0x000107c61520(&UNK_10dc88a60,&UNK_110707b00);
  puRam00000001130065e0 = puVar1;
  return;
}



/* Entry: 103d5be88; end: 103d5beab;  */

void FUN_103d5be88(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5beac();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5beac; end: 103d5beeb;  */

void FUN_103d5beac(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88ad0;
  func_0x000107c61520(&UNK_10dc88ad0,&UNK_110707b88);
  puRam00000001130065e8 = puVar1;
  return;
}



/* Entry: 103d5beec; end: 103d5beff;  */

void FUN_103d5beec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5b564();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5bf00();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5bf00; end: 103d5bf3f;  */

void FUN_103d5bf00(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88a88;
  func_0x000107c61520(&DAT_10dc88a88,&UNK_110707b88);
  puRam00000001130065f0 = puVar1;
  return;
}



/* Entry: 103d5bf40; end: 103d5bf43;  */

void FUN_103d5bf40(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88b38;
  func_0x000107c61520(&UNK_10dc88b38,&UNK_110707b88);
  puRam00000001130065f8 = puVar1;
  return;
}



/* Entry: 103d5bf44; end: 103d5bf83;  */

void FUN_103d5bf44(void)

{
  undefined *puVar1;
  
  if (puRam00000001130065f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88b38;
  func_0x000107c61520(&UNK_10dc88b38,&UNK_110707b88);
  puRam00000001130065f8 = puVar1;
  return;
}



/* Entry: 103d5bf84; end: 103d5bfa7;  */

void FUN_103d5bf84(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5bfa8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5bfa8; end: 103d5bfe7;  */

void FUN_103d5bfa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006600 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88ba8;
  func_0x000107c61520(&UNK_10dc88ba8,&UNK_110707c10);
  puRam0000000113006600 = puVar1;
  return;
}



/* Entry: 103d5bfe8; end: 103d5bffb;  */

void FUN_103d5bfe8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d5b5a4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5bffc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5bffc; end: 103d5c03b;  */

void FUN_103d5bffc(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88b60;
  func_0x000107c61520(&DAT_10dc88b60,&UNK_110707c10);
  puRam0000000113006608 = puVar1;
  return;
}



/* Entry: 103d5c03c; end: 103d5c03f;  */

void FUN_103d5c03c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88c10;
  func_0x000107c61520(&UNK_10dc88c10,&UNK_110707c10);
  puRam0000000113006610 = puVar1;
  return;
}



/* Entry: 103d5c040; end: 103d5c07f;  */

void FUN_103d5c040(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88c10;
  func_0x000107c61520(&UNK_10dc88c10,&UNK_110707c10);
  puRam0000000113006610 = puVar1;
  return;
}



/* Entry: 103d5c080; end: 103d5c0a3;  */

void FUN_103d5c080(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5c0a4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5c0a4; end: 103d5c0e3;  */

void FUN_103d5c0a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006618 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88c80;
  func_0x000107c61520(&UNK_10dc88c80,&UNK_110707c90);
  puRam0000000113006618 = puVar1;
  return;
}



/* Entry: 103d5c0e4; end: 103d5c0f7;  */

void FUN_103d5c0e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5b734();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5c0f8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5c0f8; end: 103d5c137;  */

void FUN_103d5c0f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006620 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88c38;
  func_0x000107c61520(&DAT_10dc88c38,&UNK_110707c90);
  puRam0000000113006620 = puVar1;
  return;
}



/* Entry: 103d5c138; end: 103d5c13b;  */

void FUN_103d5c138(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88ce8;
  func_0x000107c61520(&UNK_10dc88ce8,&UNK_110707c90);
  puRam0000000113006628 = puVar1;
  return;
}



/* Entry: 103d5c13c; end: 103d5c17b;  */

void FUN_103d5c13c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006628 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88ce8;
  func_0x000107c61520(&UNK_10dc88ce8,&UNK_110707c90);
  puRam0000000113006628 = puVar1;
  return;
}



/* Entry: 103d5c17c; end: 103d5c19f;  */

void FUN_103d5c17c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5c1a0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5c1a0; end: 103d5c1df;  */

void FUN_103d5c1a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88d58;
  func_0x000107c61520(&UNK_10dc88d58,&UNK_110707d18);
  puRam0000000113006630 = puVar1;
  return;
}



/* Entry: 103d5c1e0; end: 103d5c1f3;  */

void FUN_103d5c1e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d5b774)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5c1f4();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5c1f4; end: 103d5c233;  */

void FUN_103d5c1f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88d10;
  func_0x000107c61520(&DAT_10dc88d10,&UNK_110707d18);
  puRam0000000113006638 = puVar1;
  return;
}



/* Entry: 103d5c234; end: 103d5c237;  */

void FUN_103d5c234(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88dc0;
  func_0x000107c61520(&UNK_10dc88dc0,&UNK_110707d18);
  puRam0000000113006640 = puVar1;
  return;
}



/* Entry: 103d5c238; end: 103d5c277;  */

void FUN_103d5c238(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006640 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88dc0;
  func_0x000107c61520(&UNK_10dc88dc0,&UNK_110707d18);
  puRam0000000113006640 = puVar1;
  return;
}



/* Entry: 103d5c278; end: 103d5c29b;  */

void FUN_103d5c278(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103d5c29c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103d5c29c; end: 103d5c2db;  */

void FUN_103d5c29c(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006648 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88e30;
  func_0x000107c61520(&UNK_10dc88e30,&UNK_110707d98);
  puRam0000000113006648 = puVar1;
  return;
}



/* Entry: 103d5c2dc; end: 103d5c2ef;  */

void FUN_103d5c2dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103d5b7b4)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103d5c320();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5c2f0; end: 103d5c31f;  */

void FUN_103d5c2f0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103d5c320; end: 103d5c35f;  */

void FUN_103d5c320(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006650 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc88de8;
  func_0x000107c61520(&DAT_10dc88de8,&UNK_110707d98);
  puRam0000000113006650 = puVar1;
  return;
}



/* Entry: 103d5c360; end: 103d5c363;  */

void FUN_103d5c360(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88e98;
  func_0x000107c61520(&UNK_10dc88e98,&UNK_110707d98);
  puRam0000000113006658 = puVar1;
  return;
}



/* Entry: 103d5c364; end: 103d5c3a3;  */

void FUN_103d5c364(void)

{
  undefined *puVar1;
  
  if (puRam0000000113006658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc88e98;
  func_0x000107c61520(&UNK_10dc88e98,&UNK_110707d98);
  puRam0000000113006658 = puVar1;
  return;
}



/* Entry: 103d5c3a4; end: 103d5c44f;  */

int FUN_103d5c3a4(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103d5c450; end: 103d5c493;  */

undefined8 * FUN_103d5c450(undefined8 *param_1,undefined8 *param_2)

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



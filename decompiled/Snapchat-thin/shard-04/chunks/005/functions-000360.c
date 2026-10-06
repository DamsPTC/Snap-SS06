/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103606b34; end: 103606bd3;  */

/* WARNING: Possible PIC construction at 0x000103606b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103606b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103606b84) */
/* WARNING: Removing unreachable block (ram,0x000103606b94) */

void FUN_103606b34(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7de30 != -1) {
    func_0x000107c61568(0x112f7de30,FUN_1036067c0);
  }
  uVar5 = uRam0000000113809978;
  uVar4 = uRam0000000113809970;
  uVar3 = uRam0000000113809968;
  uVar2 = uRam0000000113809960;
  uVar1 = uRam0000000113809958;
  *param_1 = uRam0000000113809950;
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



/* Entry: 103606bd4; end: 103606c0f;  */

void FUN_103606bd4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7dee0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7dee0,&UNK_10dbe78f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103606c10; end: 103606d33;  */

void FUN_103606c10(undefined8 param_1,undefined8 param_2)

{
  undefined1 *unaff_x20;
  undefined1 auStack_98 [72];
  undefined1 uStack_50;
  undefined4 uStack_4c;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_50 = *unaff_x20;
  uStack_4c = *(undefined4 *)(unaff_x20 + 4);
  uStack_48 = unaff_x20[8];
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6068c(auStack_98,0);
  func_0x000107c5fa50(auStack_98,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103606d34; end: 103606d8f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103606d34(char *param_1,char *param_2)

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
  
  if ((*param_1 != *param_2 || *(int *)(param_1 + 4) != *(int *)(param_2 + 4)) ||
     (((param_1[8] ^ param_2[8]) & 1U) != 0)) {
    return (byte *)0x0;
  }
  lVar24 = *(long *)(param_2 + 0x10);
  uVar16 = *(ulong *)(param_2 + 0x18);
  pbVar10 = *(byte **)(param_1 + 0x10);
  pbVar25 = *(byte **)(param_1 + 0x18);
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



/* Entry: 103606d90; end: 103606dd7;  */

undefined8 FUN_103606d90(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103606dd8; end: 103606de3;  */

void FUN_103606dd8(void)

{
  return;
}



/* Entry: 103606de4; end: 103606ea3;  */

void FUN_103606de4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ddf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe7340;
  func_0x000107c61520(&DAT_10dbe7340,&UNK_11066d7f0);
  puRam0000000112f7ddf0 = puVar1;
  return;
}



/* Entry: 103606ea4; end: 103607bdb;  */

uint FUN_103606ea4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_280 [32];
  ulong uStack_260;
  long lStack_258;
  ulong uStack_250;
  long lStack_248;
  ulong uStack_240;
  long lStack_238;
  ulong uStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  ulong uStack_210;
  long lStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  long lStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  long lStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  long lStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  long lStack_180;
  ulong uStack_178;
  ulong uStack_170;
  long lStack_160;
  ulong uStack_158;
  ulong uStack_150;
  long lStack_140;
  ulong uStack_138;
  ulong uStack_130;
  long lStack_120;
  ulong uStack_118;
  ulong uStack_110;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  long lStack_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  long lStack_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar11 = param_1[0xb];
  lVar4 = param_1[10];
  uVar6 = param_1[0xc];
  uVar12 = param_2[0xb];
  lVar5 = param_2[10];
  uVar8 = param_2[0xc];
  lStack_a0 = lVar5;
  uStack_98 = uVar12;
  uStack_90 = uVar8;
  lStack_80 = lVar4;
  uStack_78 = uVar11;
  uStack_70 = uVar6;
  if (uVar6 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103606fb4;
    if ((int)lVar4 == (int)lVar5) {
      FUN_103606d90(&lStack_80,&uStack_240,0x112db80f8,&UNK_10d9671e0);
      FUN_103606d90(&lStack_a0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
      func_0x000100d5663c(lVar5,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103606f54;
    }
    else {
      uVar9 = 0x112db80f8;
      puVar10 = &UNK_10d9671e0;
      FUN_103606d90(&lStack_80,&uStack_240,0x112db80f8,&UNK_10d9671e0);
      plVar3 = &lStack_a0;
LAB_1036070ec:
      FUN_103606d90(plVar3,&uStack_240,uVar9,puVar10);
      func_0x000100d5663c(lVar5,uVar12,uVar8);
    }
LAB_103607118:
    func_0x000100d5663c(lVar4,uVar11,uVar6);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_103606fb4:
      uVar9 = 0x112db80f8;
      puVar10 = &UNK_10d9671e0;
      FUN_103606d90(&lStack_80,&uStack_240,0x112db80f8,&UNK_10d9671e0);
      plVar3 = &lStack_a0;
      uVar2 = uVar6;
      uVar7 = uVar11;
      lVar13 = lVar4;
      uVar6 = uVar8;
      uVar11 = uVar12;
      lVar4 = lVar5;
LAB_103606fdc:
      FUN_103606d90(plVar3,&uStack_240,uVar9,puVar10);
      func_0x000100d5663c(lVar13,uVar7,uVar2);
      goto LAB_103607118;
    }
    FUN_103606d90(&lStack_80,&uStack_240,0x112db80f8,&UNK_10d9671e0);
    FUN_103606d90(&lStack_a0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
LAB_103606f54:
    func_0x000100d5663c(lVar4,uVar11,uVar6);
    lVar4 = param_1[1];
    lVar5 = param_2[1];
    if ((char)param_2[2] == '\x01') {
      if (lVar5 < 2) {
        if (lVar5 == 0) {
          if (lVar4 == 0) {
LAB_10360708c:
            uVar6 = (ulong)(param_1[3] != 0);
            if ((char)param_1[4] != '\x01') {
              uVar6 = param_1[3];
            }
            if ((char)param_2[4] == '\x01') {
              if (param_2[3] == 0) {
                if (uVar6 == 0) goto LAB_103607184;
              }
              else if (uVar6 == 1) {
LAB_103607184:
                uVar11 = param_1[0xe];
                lVar4 = param_1[0xd];
                uVar6 = param_1[0xf];
                uVar12 = param_2[0xe];
                lVar5 = param_2[0xd];
                uVar8 = param_2[0xf];
                lStack_e0 = lVar5;
                uStack_d8 = uVar12;
                uStack_d0 = uVar8;
                lStack_c0 = lVar4;
                uStack_b8 = uVar11;
                uStack_b0 = uVar6;
                if (uVar6 >> 0x3c < 0xf) {
                  if (0xe < uVar8 >> 0x3c) goto LAB_1036072d8;
                  if ((int)lVar4 != (int)lVar5) {
                    uVar9 = 0x112db80f8;
                    puVar10 = &UNK_10d9671e0;
                    FUN_103606d90(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                    plVar3 = &lStack_e0;
                    goto LAB_1036070ec;
                  }
                  FUN_103606d90(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  FUN_103606d90(&lStack_e0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  uVar2 = uVar11;
                  func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
                  func_0x000100d5663c(lVar5,uVar12,uVar8);
                  if ((uVar2 & 1) == 0) goto LAB_103607118;
                }
                else {
                  if (uVar8 >> 0x3c < 0xf) {
LAB_1036072d8:
                    uVar9 = 0x112db80f8;
                    puVar10 = &UNK_10d9671e0;
                    FUN_103606d90(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                    plVar3 = &lStack_e0;
                    uVar2 = uVar6;
                    uVar7 = uVar11;
                    lVar13 = lVar4;
                    uVar6 = uVar8;
                    uVar11 = uVar12;
                    lVar4 = lVar5;
                    goto LAB_103606fdc;
                  }
                  FUN_103606d90(&lStack_c0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  FUN_103606d90(&lStack_e0,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                }
                func_0x000100d5663c(lVar4,uVar11,uVar6);
                uVar11 = param_1[0x11];
                lVar4 = param_1[0x10];
                uVar6 = param_1[0x12];
                uVar12 = param_2[0x11];
                lVar5 = param_2[0x10];
                uVar8 = param_2[0x12];
                lStack_120 = lVar5;
                uStack_118 = uVar12;
                uStack_110 = uVar8;
                lStack_100 = lVar4;
                uStack_f8 = uVar11;
                uStack_f0 = uVar6;
                if (uVar6 >> 0x3c < 0xf) {
                  if (0xe < uVar8 >> 0x3c) goto LAB_103607384;
                  uVar9 = 0x112db80f8;
                  puVar10 = &UNK_10d9671e0;
                  if ((int)lVar4 != (int)lVar5) {
                    FUN_103606d90(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                    plVar3 = &lStack_120;
                    goto LAB_1036070ec;
                  }
                  FUN_103606d90(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  FUN_103606d90(&lStack_120,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  uVar2 = uVar11;
                  func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
                  func_0x000100d5663c(lVar5,uVar12,uVar8);
                  if ((uVar2 & 1) == 0) goto LAB_103607118;
                }
                else {
                  if (uVar8 >> 0x3c < 0xf) {
LAB_103607384:
                    uVar9 = 0x112db80f8;
                    puVar10 = &UNK_10d9671e0;
                    FUN_103606d90(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                    plVar3 = &lStack_120;
                    uVar2 = uVar6;
                    uVar7 = uVar11;
                    lVar13 = lVar4;
                    uVar6 = uVar8;
                    uVar11 = uVar12;
                    lVar4 = lVar5;
                    goto LAB_103606fdc;
                  }
                  FUN_103606d90(&lStack_100,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                  FUN_103606d90(&lStack_120,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                }
                func_0x000100d5663c(lVar4,uVar11,uVar6);
                lVar4 = param_1[5];
                lVar5 = param_2[5];
                if ((char)param_2[6] == '\x01') {
                  if (lVar5 == 0) {
                    if (lVar4 == 0) goto LAB_103607474;
                  }
                  else if (lVar5 == 1) {
                    if (lVar4 == 1) {
LAB_103607474:
                      uVar11 = param_1[0x14];
                      lVar4 = param_1[0x13];
                      uVar6 = param_1[0x15];
                      uVar12 = param_2[0x14];
                      lVar5 = param_2[0x13];
                      uVar8 = param_2[0x15];
                      lStack_160 = lVar5;
                      uStack_158 = uVar12;
                      uStack_150 = uVar8;
                      lStack_140 = lVar4;
                      uStack_138 = uVar11;
                      uStack_130 = uVar6;
                      if (uVar6 >> 0x3c < 0xf) {
                        if (0xe < uVar8 >> 0x3c) goto LAB_103607760;
                        if (lVar4 != lVar5) {
                          uVar9 = 0x112db6f48;
                          puVar10 = &UNK_10d969b40;
                          FUN_103606d90(&lStack_140,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          plVar3 = &lStack_160;
                          goto LAB_1036070ec;
                        }
                        FUN_103606d90(&lStack_140,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        FUN_103606d90(&lStack_160,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        uVar2 = uVar11;
                        func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
                        func_0x000100d5663c(lVar4,uVar12,uVar8);
                        if ((uVar2 & 1) == 0) goto LAB_103607118;
                      }
                      else {
                        if (uVar8 >> 0x3c < 0xf) {
LAB_103607760:
                          uVar9 = 0x112db6f48;
                          puVar10 = &UNK_10d969b40;
                          FUN_103606d90(&lStack_140,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          plVar3 = &lStack_160;
                          uVar2 = uVar6;
                          uVar7 = uVar11;
                          lVar13 = lVar4;
                          uVar6 = uVar8;
                          uVar11 = uVar12;
                          lVar4 = lVar5;
                          goto LAB_103606fdc;
                        }
                        FUN_103606d90(&lStack_140,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        FUN_103606d90(&lStack_160,&uStack_240,0x112db6f48,&UNK_10d969b40);
                      }
                      func_0x000100d5663c(lVar4,uVar11,uVar6);
                      uVar11 = param_1[0x17];
                      lVar4 = param_1[0x16];
                      uVar6 = param_1[0x18];
                      uVar12 = param_2[0x17];
                      lVar5 = param_2[0x16];
                      uVar8 = param_2[0x18];
                      lStack_1a0 = lVar5;
                      uStack_198 = uVar12;
                      uStack_190 = uVar8;
                      lStack_180 = lVar4;
                      uStack_178 = uVar11;
                      uStack_170 = uVar6;
                      if (uVar6 >> 0x3c < 0xf) {
                        if (0xe < uVar8 >> 0x3c) goto LAB_10360780c;
                        if (lVar4 != lVar5) {
                          uVar9 = 0x112db6f48;
                          puVar10 = &UNK_10d969b40;
                          FUN_103606d90(&lStack_180,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          plVar3 = &lStack_1a0;
                          goto LAB_1036070ec;
                        }
                        FUN_103606d90(&lStack_180,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        FUN_103606d90(&lStack_1a0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        uVar2 = uVar11;
                        func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
                        func_0x000100d5663c(lVar4,uVar12,uVar8);
                        if ((uVar2 & 1) == 0) goto LAB_103607118;
                      }
                      else {
                        if (uVar8 >> 0x3c < 0xf) {
LAB_10360780c:
                          uVar9 = 0x112db6f48;
                          puVar10 = &UNK_10d969b40;
                          FUN_103606d90(&lStack_180,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          plVar3 = &lStack_1a0;
                          uVar2 = uVar6;
                          uVar7 = uVar11;
                          lVar13 = lVar4;
                          uVar6 = uVar8;
                          uVar11 = uVar12;
                          lVar4 = lVar5;
                          goto LAB_103606fdc;
                        }
                        FUN_103606d90(&lStack_180,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        FUN_103606d90(&lStack_1a0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                      }
                      func_0x000100d5663c(lVar4,uVar11,uVar6);
                      uVar6 = param_1[7];
                      func_0x00010142cfc4(uVar6,param_2[7]);
                      if ((uVar6 & 1) != 0) {
                        uVar11 = param_1[0x1a];
                        lVar4 = param_1[0x19];
                        uVar6 = param_1[0x1b];
                        uVar12 = param_2[0x1a];
                        lVar5 = param_2[0x19];
                        uVar8 = param_2[0x1b];
                        lStack_1e0 = lVar5;
                        uStack_1d8 = uVar12;
                        uStack_1d0 = uVar8;
                        lStack_1c0 = lVar4;
                        uStack_1b8 = uVar11;
                        uStack_1b0 = uVar6;
                        if (uVar6 >> 0x3c < 0xf) {
                          if (0xe < uVar8 >> 0x3c) goto LAB_10360790c;
                          if (lVar4 != lVar5) {
                            uVar9 = 0x112db6f48;
                            puVar10 = &UNK_10d969b40;
                            FUN_103606d90(&lStack_1c0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                            plVar3 = &lStack_1e0;
                            goto LAB_1036070ec;
                          }
                          FUN_103606d90(&lStack_1c0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          FUN_103606d90(&lStack_1e0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          uVar2 = uVar11;
                          func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
                          func_0x000100d5663c(lVar4,uVar12,uVar8);
                          if ((uVar2 & 1) == 0) goto LAB_103607118;
                        }
                        else {
                          if (uVar8 >> 0x3c < 0xf) {
LAB_10360790c:
                            uVar9 = 0x112db6f48;
                            puVar10 = &UNK_10d969b40;
                            FUN_103606d90(&lStack_1c0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                            plVar3 = &lStack_1e0;
                            uVar2 = uVar6;
                            uVar7 = uVar11;
                            lVar13 = lVar4;
                            uVar6 = uVar8;
                            uVar11 = uVar12;
                            lVar4 = lVar5;
                            goto LAB_103606fdc;
                          }
                          FUN_103606d90(&lStack_1c0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                          FUN_103606d90(&lStack_1e0,&uStack_240,0x112db6f48,&UNK_10d969b40);
                        }
                        func_0x000100d5663c(lVar4,uVar11,uVar6);
                        uVar11 = param_1[0x1d];
                        lVar4 = param_1[0x1c];
                        uVar6 = param_1[0x1e];
                        uVar12 = param_2[0x1d];
                        lVar5 = param_2[0x1c];
                        uVar8 = param_2[0x1e];
                        lStack_220 = lVar5;
                        uStack_218 = uVar12;
                        uStack_210 = uVar8;
                        lStack_200 = lVar4;
                        uStack_1f8 = uVar11;
                        uStack_1f0 = uVar6;
                        if (uVar6 >> 0x3c < 0xf) {
                          if (0xe < uVar8 >> 0x3c) goto LAB_1036079b4;
                          uVar9 = 0x112db80f8;
                          puVar10 = &UNK_10d9671e0;
                          if ((int)lVar4 != (int)lVar5) {
                            FUN_103606d90(&lStack_200,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                            plVar3 = &lStack_220;
                            goto LAB_1036070ec;
                          }
                          FUN_103606d90(&lStack_200,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                          FUN_103606d90(&lStack_220,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                          uVar2 = uVar11;
                          func_0x000100e25fcc(uVar11,uVar6,uVar12,uVar8);
                          func_0x000100d5663c(lVar5,uVar12,uVar8);
                          if ((uVar2 & 1) == 0) goto LAB_103607118;
                        }
                        else {
                          if (uVar8 >> 0x3c < 0xf) {
LAB_1036079b4:
                            uVar9 = 0x112db80f8;
                            puVar10 = &UNK_10d9671e0;
                            FUN_103606d90(&lStack_200,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                            plVar3 = &lStack_220;
                            uVar2 = uVar6;
                            uVar7 = uVar11;
                            lVar13 = lVar4;
                            uVar6 = uVar8;
                            uVar11 = uVar12;
                            lVar4 = lVar5;
                            goto LAB_103606fdc;
                          }
                          FUN_103606d90(&lStack_200,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                          FUN_103606d90(&lStack_220,&uStack_240,0x112db80f8,&UNK_10d9671e0);
                        }
                        func_0x000100d5663c(lVar4,uVar11,uVar6);
                        lVar4 = param_1[0x20];
                        uVar6 = param_1[0x1f];
                        lVar5 = param_1[0x22];
                        uVar11 = param_1[0x21];
                        lVar13 = param_2[0x20];
                        uVar8 = param_2[0x1f];
                        lVar14 = param_2[0x22];
                        uVar12 = param_2[0x21];
                        uStack_260 = uVar8;
                        lStack_258 = lVar13;
                        uStack_250 = uVar12;
                        lStack_248 = lVar14;
                        uStack_240 = uVar6;
                        lStack_238 = lVar4;
                        uStack_230 = uVar11;
                        lStack_228 = lVar5;
                        if ((uVar6 & 0xff) == 2) {
                          if ((uVar8 & 0xff) == 2) {
                            FUN_103606d90(&uStack_240,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                            FUN_103606d90(&uStack_260,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
LAB_103607730:
                            func_0x000103606d74(uVar6,lVar4,uVar11,lVar5);
                            lVar4 = param_1[8];
                            func_0x000100e25fcc(lVar4,param_1[9],param_2[8],param_2[9]);
                            uVar1 = (uint)lVar4;
                            goto LAB_103607120;
                          }
LAB_103607a84:
                          FUN_103606d90(&uStack_240,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                          FUN_103606d90(&uStack_260,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                          func_0x000103606d74(uVar6,lVar4,uVar11,lVar5);
                          uVar6 = uVar8;
                          lVar4 = lVar13;
                          uVar11 = uVar12;
                          lVar5 = lVar14;
                        }
                        else {
                          if ((uVar8 & 0xff) == 2) goto LAB_103607a84;
                          if (((((uVar8 ^ uVar6) & 1) == 0) && ((uVar8 ^ uVar6) >> 0x20 == 0)) &&
                             ((((uint)lVar13 ^ (uint)lVar4) & 1) == 0)) {
                            FUN_103606d90(&uStack_240,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                            FUN_103606d90(&uStack_260,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                            uVar2 = uVar11;
                            func_0x000100e25fcc(uVar11,lVar5,uVar12,lVar14);
                            func_0x000103606d74(uVar8,lVar13,uVar12,lVar14);
                            if ((uVar2 & 1) != 0) goto LAB_103607730;
                          }
                          else {
                            FUN_103606d90(&uStack_240,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                            FUN_103606d90(&uStack_260,auStack_280,0x112f7dcb0,&UNK_10dbe7320);
                            func_0x000103606d74(uVar8,lVar13,uVar12,lVar14);
                          }
                        }
                        func_0x000103606d74(uVar6,lVar4,uVar11,lVar5);
                      }
                    }
                  }
                  else if (lVar4 == 2) goto LAB_103607474;
                }
                else if (lVar4 == lVar5) goto LAB_103607474;
              }
            }
            else if (uVar6 == param_2[3]) goto LAB_103607184;
          }
        }
        else if (lVar4 == 1) goto LAB_10360708c;
      }
      else if (lVar5 == 2) {
        if (lVar4 == 2) goto LAB_10360708c;
      }
      else if (lVar5 == 3) {
        if (lVar4 == 3) goto LAB_10360708c;
      }
      else if (lVar4 == 4) goto LAB_10360708c;
    }
    else if (lVar4 == lVar5) goto LAB_10360708c;
  }
  uVar1 = 0;
LAB_103607120:
  return uVar1 & 1;
}



/* Entry: 103607bdc; end: 103607c5b;  */

void FUN_103607bdc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe76b0;
  func_0x000107c61520(&UNK_10dbe76b0,&UNK_11066d728);
  puRam0000000112f7de08 = puVar1;
  return;
}



/* Entry: 103607c5c; end: 103607c6f;  */

void FUN_103607c5c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103607c70();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103607cb0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103607c70; end: 103607d1b;  */

void FUN_103607c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe73d8;
  func_0x000107c61520(&UNK_10dbe73d8,&UNK_11066d7f0);
  puRam0000000112f7de40 = puVar1;
  return;
}



/* Entry: 103607d1c; end: 103607d1f;  */

void FUN_103607d1c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7418;
  func_0x000107c61520(&UNK_10dbe7418,&UNK_11066d7f0);
  puRam0000000112f7de60 = puVar1;
  return;
}



/* Entry: 103607d20; end: 103607d5f;  */

void FUN_103607d20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7418;
  func_0x000107c61520(&UNK_10dbe7418,&UNK_11066d7f0);
  puRam0000000112f7de60 = puVar1;
  return;
}



/* Entry: 103607d60; end: 103607d73;  */

void FUN_103607d60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103607d74();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103607db4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103607d74; end: 103607e1f;  */

void FUN_103607d74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe74d8;
  func_0x000107c61520(&UNK_10dbe74d8,&UNK_11066d880);
  puRam0000000112f7de68 = puVar1;
  return;
}



/* Entry: 103607e20; end: 103607e23;  */

void FUN_103607e20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7518;
  func_0x000107c61520(&UNK_10dbe7518,&UNK_11066d880);
  puRam0000000112f7de88 = puVar1;
  return;
}



/* Entry: 103607e24; end: 103607e63;  */

void FUN_103607e24(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7518;
  func_0x000107c61520(&UNK_10dbe7518,&UNK_11066d880);
  puRam0000000112f7de88 = puVar1;
  return;
}



/* Entry: 103607e64; end: 103607e77;  */

void FUN_103607e64(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103607e78();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103607eb8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103607e78; end: 103607f23;  */

void FUN_103607e78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7de90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe75d8;
  func_0x000107c61520(&UNK_10dbe75d8,&UNK_11066d910);
  puRam0000000112f7de90 = puVar1;
  return;
}



/* Entry: 103607f24; end: 103607f67;  */

void FUN_103607f24(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103607f68; end: 103607f6b;  */

void FUN_103607f68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7deb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7618;
  func_0x000107c61520(&UNK_10dbe7618,&UNK_11066d910);
  puRam0000000112f7deb0 = puVar1;
  return;
}



/* Entry: 103607f6c; end: 103607fab;  */

void FUN_103607f6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7deb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7618;
  func_0x000107c61520(&UNK_10dbe7618,&UNK_11066d910);
  puRam0000000112f7deb0 = puVar1;
  return;
}



/* Entry: 103607fac; end: 103607fcf;  */

void FUN_103607fac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103607fd0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103607fd0; end: 10360800f;  */

void FUN_103607fd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7deb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7688;
  func_0x000107c61520(&UNK_10dbe7688,&UNK_11066d728);
  puRam0000000112f7deb8 = puVar1;
  return;
}



/* Entry: 103608010; end: 103608027;  */

void FUN_103608010(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103607bdc();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e1078)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103608028; end: 103608067;  */

void FUN_103608028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dec0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe76f0;
  func_0x000107c61520(&UNK_10dbe76f0,&UNK_11066d728);
  puRam0000000112f7dec0 = puVar1;
  return;
}



/* Entry: 103608068; end: 10360808b;  */

void FUN_103608068(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10360808c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10360808c; end: 1036080cb;  */

void FUN_10360808c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dec8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7790;
  func_0x000107c61520(&UNK_10dbe7790,&UNK_11066d988);
  puRam0000000112f7dec8 = puVar1;
  return;
}



/* Entry: 1036080cc; end: 1036080df;  */

void FUN_1036080cc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103607c1c)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103608110();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036080e0; end: 10360810f;  */

void FUN_1036080e0(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103608110; end: 10360814f;  */

void FUN_103608110(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ded0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe7748;
  func_0x000107c61520(&DAT_10dbe7748,&UNK_11066d988);
  puRam0000000112f7ded0 = puVar1;
  return;
}



/* Entry: 103608150; end: 103608153;  */

void FUN_103608150(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ded8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe77f8;
  func_0x000107c61520(&UNK_10dbe77f8,&UNK_11066d988);
  puRam0000000112f7ded8 = puVar1;
  return;
}



/* Entry: 103608154; end: 103608193;  */

void FUN_103608154(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7ded8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe77f8;
  func_0x000107c61520(&UNK_10dbe77f8,&UNK_11066d988);
  puRam0000000112f7ded8 = puVar1;
  return;
}



/* Entry: 103608194; end: 103608283;  */

/* WARNING: Possible PIC construction at 0x0001036081b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001036081e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103608210: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103608240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001036081b4) */
/* WARNING: Removing unreachable block (ram,0x0001036081c4) */
/* WARNING: Removing unreachable block (ram,0x0001036081cc) */
/* WARNING: Removing unreachable block (ram,0x0001036081e4) */
/* WARNING: Removing unreachable block (ram,0x0001036081f4) */
/* WARNING: Removing unreachable block (ram,0x0001036081fc) */
/* WARNING: Removing unreachable block (ram,0x000103608214) */
/* WARNING: Removing unreachable block (ram,0x000103608224) */
/* WARNING: Removing unreachable block (ram,0x00010360822c) */
/* WARNING: Removing unreachable block (ram,0x000103608244) */
/* WARNING: Removing unreachable block (ram,0x000103608254) */
/* WARNING: Removing unreachable block (ram,0x00010360825c) */
/* WARNING: Removing unreachable block (ram,0x000103608274) */
/* WARNING: Removing unreachable block (ram,0x000103608268) */
/* WARNING: Removing unreachable block (ram,0x00010360823c) */
/* WARNING: Removing unreachable block (ram,0x00010360820c) */
/* WARNING: Removing unreachable block (ram,0x0001036081dc) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_103608194(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x38));
  uVar1 = *(ulong *)(param_1 + 0x40);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x48) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x48) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103608284; end: 103608a83;  */

undefined8 * FUN_103608284(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar3 = param_2[8];
  param_1[7] = param_2[7];
  uVar2 = param_2[9];
  func_0x000107c61434();
  func_0x00010006c00c(uVar3,uVar2);
  param_1[8] = uVar3;
  param_1[9] = uVar2;
  uVar1 = param_2[0xc];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar3 = param_2[0xb];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar1;
  }
  else {
    uVar3 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar3;
    param_1[0xc] = param_2[0xc];
  }
  uVar1 = param_2[0xf];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar3 = param_2[0xe];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0xe] = uVar3;
    param_1[0xf] = uVar1;
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    param_1[0xf] = param_2[0xf];
  }
  uVar1 = param_2[0x12];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar3 = param_2[0x11];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x11] = uVar3;
    param_1[0x12] = uVar1;
  }
  else {
    uVar3 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar3;
    param_1[0x12] = param_2[0x12];
  }
  uVar1 = param_2[0x15];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    param_1[0x13] = param_2[0x13];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x14] = uVar3;
    param_1[0x15] = uVar1;
  }
  else {
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    param_1[0x15] = param_2[0x15];
  }
  uVar1 = param_2[0x18];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[0x17];
    param_1[0x16] = param_2[0x16];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x17] = uVar3;
    param_1[0x18] = uVar1;
  }
  else {
    uVar3 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar3;
    param_1[0x18] = param_2[0x18];
  }
  uVar1 = param_2[0x1b];
  if (uVar1 >> 0x3c < 0xf) {
    uVar3 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x1a] = uVar3;
    param_1[0x1b] = uVar1;
  }
  else {
    uVar3 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar3;
    param_1[0x1b] = param_2[0x1b];
  }
  uVar1 = param_2[0x1e];
  if (uVar1 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
    uVar3 = param_2[0x1d];
    func_0x00010006c00c(uVar3,uVar1);
    param_1[0x1d] = uVar3;
    param_1[0x1e] = uVar1;
  }
  else {
    uVar3 = param_2[0x1c];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar3;
    param_1[0x1e] = param_2[0x1e];
  }
  uVar1 = param_2[0x1f];
  if ((uVar1 & 0xff) == 2) {
    uVar1 = param_2[0x1f];
    uVar2 = param_2[0x22];
    uVar3 = param_2[0x21];
    param_1[0x20] = param_2[0x20];
    param_1[0x1f] = uVar1;
    param_1[0x22] = uVar2;
    param_1[0x21] = uVar3;
  }
  else {
    *(char *)(param_1 + 0x1f) = (char)uVar1;
    *(int *)((long)param_1 + 0xfc) = (int)(uVar1 >> 0x20);
    *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
    uVar3 = param_2[0x21];
    uVar2 = param_2[0x22];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[0x21] = uVar3;
    param_1[0x22] = uVar2;
  }
  return param_1;
}



/* Entry: 103608a84; end: 103608aaf;  */

long FUN_103608a84(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



/* Entry: 103608ab0; end: 103608dd3;  */

undefined8 * FUN_103608ab0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[8];
  uVar5 = param_1[9];
  uVar4 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  func_0x00010006c090(uVar1,uVar5);
  if ((ulong)param_1[0xc] >> 0x3c < 0xf) {
    uVar2 = param_2[0xc];
    if (0xe < uVar2 >> 0x3c) {
      func_0x0001015d4290(param_1 + 10);
      goto LAB_103608b40;
    }
    *(undefined4 *)(param_1 + 10) = *(undefined4 *)(param_2 + 10);
    uVar1 = param_1[0xb];
    param_1[0xb] = param_2[0xb];
    param_1[0xc] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103608b40:
    uVar1 = param_2[10];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar1;
    param_1[0xc] = param_2[0xc];
  }
  if ((ulong)param_1[0xf] >> 0x3c < 0xf) {
    uVar2 = param_2[0xf];
    if (0xe < uVar2 >> 0x3c) {
      func_0x0001015d4290(param_1 + 0xd);
      goto LAB_103608b94;
    }
    *(undefined4 *)(param_1 + 0xd) = *(undefined4 *)(param_2 + 0xd);
    uVar1 = param_1[0xe];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103608b94:
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    param_1[0xf] = param_2[0xf];
  }
  if ((ulong)param_1[0x12] >> 0x3c < 0xf) {
    uVar2 = param_2[0x12];
    if (0xe < uVar2 >> 0x3c) {
      func_0x0001015d4290(param_1 + 0x10);
      goto LAB_103608be8;
    }
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 0x10);
    uVar1 = param_1[0x11];
    param_1[0x11] = param_2[0x11];
    param_1[0x12] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103608be8:
    uVar1 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x12] = param_2[0x12];
  }
  if ((ulong)param_1[0x15] >> 0x3c < 0xf) {
    uVar2 = param_2[0x15];
    if (0xe < uVar2 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x13);
      goto LAB_103608c3c;
    }
    uVar1 = param_1[0x14];
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    param_1[0x15] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103608c3c:
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    param_1[0x15] = param_2[0x15];
  }
  if ((ulong)param_1[0x18] >> 0x3c < 0xf) {
    uVar2 = param_2[0x18];
    if (0xe < uVar2 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x16);
      goto LAB_103608c8c;
    }
    uVar1 = param_1[0x17];
    uVar5 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar5;
    param_1[0x18] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103608c8c:
    uVar1 = param_2[0x16];
    param_1[0x17] = param_2[0x17];
    param_1[0x16] = uVar1;
    param_1[0x18] = param_2[0x18];
  }
  if ((ulong)param_1[0x1b] >> 0x3c < 0xf) {
    uVar2 = param_2[0x1b];
    if (0xe < uVar2 >> 0x3c) {
      func_0x00010159d670(param_1 + 0x19);
      goto LAB_103608cdc;
    }
    uVar1 = param_1[0x1a];
    uVar5 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar5;
    param_1[0x1b] = uVar2;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103608cdc:
    uVar1 = param_2[0x19];
    param_1[0x1a] = param_2[0x1a];
    param_1[0x19] = uVar1;
    param_1[0x1b] = param_2[0x1b];
  }
  if ((ulong)param_1[0x1e] >> 0x3c < 0xf) {
    uVar2 = param_2[0x1e];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      uVar1 = param_1[0x1d];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1e] = uVar2;
      func_0x00010006c090(uVar1);
      goto LAB_103608d58;
    }
    func_0x0001015d4290(param_1 + 0x1c);
  }
  uVar1 = param_2[0x1c];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar1;
  param_1[0x1e] = param_2[0x1e];
LAB_103608d58:
  puVar3 = param_1 + 0x1f;
  if ((char)*puVar3 != '\x02') {
    uVar2 = param_2[0x1f];
    if ((uVar2 & 0xff) != 2) {
      *(byte *)(param_1 + 0x1f) = (byte)uVar2 & 1;
      *(int *)((long)param_1 + 0xfc) = (int)(uVar2 >> 0x20);
      *(undefined1 *)(param_1 + 0x20) = *(undefined1 *)(param_2 + 0x20);
      uVar1 = param_1[0x21];
      uVar5 = param_1[0x22];
      uVar4 = param_2[0x21];
      param_1[0x22] = param_2[0x22];
      param_1[0x21] = uVar4;
      func_0x00010006c090(uVar1,uVar5);
      return param_1;
    }
    FUN_103608a84(puVar3);
  }
  uVar2 = param_2[0x1f];
  uVar5 = param_2[0x22];
  uVar1 = param_2[0x21];
  param_1[0x20] = param_2[0x20];
  *puVar3 = uVar2;
  param_1[0x22] = uVar5;
  param_1[0x21] = uVar1;
  return param_1;
}



/* Entry: 103608dd4; end: 103608efb;  */

int FUN_103608dd4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x46] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103608efc; end: 103608fab;  */

undefined1 * FUN_103608efc(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  func_0x00010006c00c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  return param_1;
}



/* Entry: 103608fac; end: 103608ffb;  */

undefined1 * FUN_103608fac(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_2 + 4);
  param_1[8] = param_2[8];
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 103608ffc; end: 1036090a3;  */

int FUN_103608ffc(byte *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (param_1[0x20] != 0)) {
    return *(int *)param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *param_1) {
    uVar1 = *param_1 + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036090a4; end: 103609123;  */

void FUN_1036090a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7dee8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe7764;
  func_0x000107c61520(&DAT_10dbe7764,&UNK_11066d988);
  puRam0000000112f7dee8 = puVar1;
  return;
}



/* Entry: 103609124; end: 103609197;  */

void FUN_103609124(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103609198; end: 1036091df;  */

void FUN_103609198(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe7ce0,0x183,2);
  uRam0000000113809988 = uStack_38;
  uRam0000000113809980 = uStack_40;
  uRam0000000113809998 = uStack_28;
  uRam0000000113809990 = uStack_30;
  uRam00000001138099a8 = uStack_18;
  uRam00000001138099a0 = uStack_20;
  return;
}



/* Entry: 1036091e0; end: 10360936f;  */

/* WARNING: Removing unreachable block (ram,0x00010360936c) */

void FUN_1036091e0(undefined8 param_1,undefined8 param_2,long param_3)

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
      puVar3 = &UNK_110790980;
      switch(uVar1) {
      case 1:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x10;
        break;
      case 2:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x28;
        break;
      case 3:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x40;
        break;
      case 4:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x58;
        break;
      case 5:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x70;
        break;
      case 6:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0x88;
        break;
      case 7:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xa0;
        break;
      case 8:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xb8;
        break;
      case 9:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x00010157193c();
        lVar2 = unaff_x20 + 0xd0;
        break;
      case 10:
        pcVar4 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        lVar2 = unaff_x20 + 0xe8;
        puVar3 = &UNK_110790b00;
        break;
      default:
        goto LAB_10360935c;
      }
      (*pcVar4)(lVar2,puVar3,uVar1,param_2,param_3);
LAB_10360935c:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103609370; end: 1036094a3;  */

void FUN_103609370(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_1036094a4();
  if (unaff_x21 == 0) {
    FUN_10360952c();
    FUN_1036095b4();
    FUN_10360963c();
    FUN_1036096c4();
    FUN_10360974c();
    FUN_1036097d4();
    FUN_10360985c();
    FUN_1036098e4();
    FUN_10360996c();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 1036094a4; end: 10360952b;  */

void FUN_1036094a4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x20);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x18);
    uStack_60 = *(undefined8 *)(param_1 + 0x10);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,1,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10360952c; end: 1036095b3;  */

void FUN_10360952c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,2,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036095b4; end: 10360963b;  */

void FUN_1036095b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,3,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10360963c; end: 1036096c3;  */

void FUN_10360963c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x68);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x60);
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,4,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036096c4; end: 10360974b;  */

void FUN_1036096c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,5,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10360974c; end: 1036097d3;  */

void FUN_10360974c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x98);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,6,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036097d4; end: 10360985b;  */

void FUN_1036097d4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xb0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa8);
    uStack_60 = *(undefined8 *)(param_1 + 0xa0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,7,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10360985c; end: 1036098e3;  */

void FUN_10360985c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 200);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xc0);
    uStack_60 = *(undefined8 *)(param_1 + 0xb8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,8,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036098e4; end: 10360996b;  */

void FUN_1036098e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xe0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xd8);
    uStack_60 = *(undefined8 *)(param_1 + 0xd0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x00010157193c();
    (*pcVar1)(&uStack_60,9,&UNK_110790980,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10360996c; end: 1036099f3;  */

void FUN_10360996c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xf8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xf0);
    uStack_60 = *(undefined8 *)(param_1 + 0xe8);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,10,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036099f4; end: 103609a6b;  */

uint FUN_1036099f4(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 auStack_308 [3];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined8 uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar13 = param_1[3];
  uVar11 = param_1[2];
  uVar5 = param_1[4];
  uVar14 = param_2[3];
  uVar12 = param_2[2];
  uVar6 = param_2[4];
  uStack_b0 = uVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar6;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_10360a044;
    if ((float)uVar11 == (float)uVar12) {
      FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103609f44(&uStack_b0,&uStack_d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
      func_0x000100d56778(uVar12,uVar14,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_10360a0ec;
    }
    else {
      uVar7 = 0x112db6358;
      puVar8 = &UNK_10d961e20;
      FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10360ae24:
      FUN_103609f44(puVar3,puVar4,uVar7,puVar8);
      func_0x000100d56778(uVar12,uVar14,uVar6);
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103609f44(&uStack_b0,&uStack_d0,0x112db6358,&UNK_10d961e20);
LAB_10360a0ec:
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[6];
      uVar11 = param_1[5];
      uVar5 = param_1[7];
      uVar14 = param_2[6];
      uVar12 = param_2[5];
      uVar6 = param_2[7];
      uStack_f0 = uVar12;
      uStack_e8 = uVar14;
      uStack_e0 = uVar6;
      uStack_d0 = uVar11;
      uStack_c8 = uVar13;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a180;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a180:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[9];
      uVar11 = param_1[8];
      uVar5 = param_1[10];
      uVar14 = param_2[9];
      uVar12 = param_2[8];
      uVar6 = param_2[10];
      uStack_130 = uVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar6;
      uStack_110 = uVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a2ec;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a2ec:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0xc];
      uVar11 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar14 = param_2[0xc];
      uVar12 = param_2[0xb];
      uVar6 = param_2[0xd];
      uStack_170 = uVar12;
      uStack_168 = uVar14;
      uStack_160 = uVar6;
      uStack_150 = uVar11;
      uStack_148 = uVar13;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a458;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a458:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0xf];
      uVar11 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar14 = param_2[0xf];
      uVar12 = param_2[0xe];
      uVar6 = param_2[0x10];
      uStack_1b0 = uVar12;
      uStack_1a8 = uVar14;
      uStack_1a0 = uVar6;
      uStack_190 = uVar11;
      uStack_188 = uVar13;
      uStack_180 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a5c4;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1b0,&uStack_1d0,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a5c4:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1b0,&uStack_1d0,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x12];
      uVar11 = param_1[0x11];
      uVar5 = param_1[0x13];
      uVar14 = param_2[0x12];
      uVar12 = param_2[0x11];
      uVar6 = param_2[0x13];
      uStack_1f0 = uVar12;
      uStack_1e8 = uVar14;
      uStack_1e0 = uVar6;
      uStack_1d0 = uVar11;
      uStack_1c8 = uVar13;
      uStack_1c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a730;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a730:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x15];
      uVar11 = param_1[0x14];
      uVar5 = param_1[0x16];
      uVar14 = param_2[0x15];
      uVar12 = param_2[0x14];
      uVar6 = param_2[0x16];
      uStack_230 = uVar12;
      uStack_228 = uVar14;
      uStack_220 = uVar6;
      uStack_210 = uVar11;
      uStack_208 = uVar13;
      uStack_200 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a89c;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_230,&uStack_250,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a89c:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_230,&uStack_250,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x18];
      uVar11 = param_1[0x17];
      uVar5 = param_1[0x19];
      uVar14 = param_2[0x18];
      uVar12 = param_2[0x17];
      uVar6 = param_2[0x19];
      uStack_270 = uVar12;
      uStack_268 = uVar14;
      uStack_260 = uVar6;
      uStack_250 = uVar11;
      uStack_248 = uVar13;
      uStack_240 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360aa0c;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_270,&uStack_290,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360aa0c:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_270,&uStack_290,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x1b];
      uVar11 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar14 = param_2[0x1b];
      uVar12 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      uStack_2b0 = uVar12;
      uStack_2a8 = uVar14;
      uStack_2a0 = uVar6;
      uStack_290 = uVar11;
      uStack_288 = uVar13;
      uStack_280 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360ab78;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_2b0,&uStack_2d0,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360ab78:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_2b0,&uStack_2d0,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x1e];
      uVar11 = param_1[0x1d];
      uVar5 = param_1[0x1f];
      uVar14 = param_2[0x1e];
      uVar12 = param_2[0x1d];
      uVar6 = param_2[0x1f];
      uStack_2f0 = uVar12;
      uStack_2e8 = uVar14;
      uStack_2e0 = uVar6;
      uStack_2d0 = uVar11;
      uStack_2c8 = uVar13;
      uStack_2c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360ad00;
        if ((int)uVar11 != (int)uVar12) {
          uVar7 = 0x112db80f8;
          puVar8 = &UNK_10d9671e0;
          FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
        FUN_103609f44(&uStack_2f0,auStack_308,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360ad00:
          uVar7 = 0x112db80f8;
          puVar8 = &UNK_10d9671e0;
          FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
        FUN_103609f44(&uStack_2f0,auStack_308,0x112db80f8,&UNK_10d9671e0);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar11 = *param_1;
      func_0x000100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar11;
      goto LAB_10360ae54;
    }
LAB_10360a044:
    uVar7 = 0x112db6358;
    puVar8 = &UNK_10d961e20;
    FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar9 = uVar13;
    uVar10 = uVar11;
    uVar5 = uVar6;
    uVar13 = uVar14;
    uVar11 = uVar12;
LAB_10360ad2c:
    FUN_103609f44(puVar3,puVar4,uVar7,puVar8);
    func_0x000100d56778(uVar10,uVar9,uVar2);
  }
LAB_10360ae4c:
  func_0x000100d56778(uVar11,uVar13,uVar5);
  uVar1 = 0;
LAB_10360ae54:
  return uVar1 & 1;
}



/* Entry: 103609a6c; end: 103609a9b;  */

undefined1  [16] FUN_103609a6c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103609a9c; end: 103609acf;  */

void FUN_103609a9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 103609ad0; end: 103609ae3;  */

undefined8 FUN_103609ad0(void)

{
  return 0x103609ae0;
}



/* Entry: 103609ae4; end: 103609af7;  */

void FUN_103609ae4(void)

{
  FUN_1036091e0();
  return;
}



/* Entry: 103609af8; end: 103609b5f;  */

void FUN_103609af8(void)

{
  FUN_103609370();
  return;
}



/* Entry: 103609b60; end: 103609b63;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103609b60(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103609b64; end: 103609b9b;  */

uint FUN_103609b64(long param_1,long param_2)

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
  FUN_10360be78();
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



/* Entry: 103609b9c; end: 103609c4b;  */

uint FUN_103609b9c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  uStack_58 = param_1[0x19];
  uStack_60 = param_1[0x18];
  uStack_48 = param_1[0x1b];
  uStack_50 = param_1[0x1a];
  uStack_38 = param_1[0x1d];
  uStack_40 = param_1[0x1c];
  uStack_28 = param_1[0x1f];
  uStack_30 = param_1[0x1e];
  uStack_98 = param_1[0x11];
  uStack_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  uStack_80 = param_1[0x14];
  uStack_68 = param_1[0x17];
  uStack_70 = param_1[0x16];
  uStack_d8 = param_1[9];
  uStack_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  uStack_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  uStack_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  uStack_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  uStack_158 = unaff_x20[0x19];
  uStack_160 = unaff_x20[0x18];
  uStack_148 = unaff_x20[0x1b];
  uStack_150 = unaff_x20[0x1a];
  uStack_138 = unaff_x20[0x1d];
  uStack_140 = unaff_x20[0x1c];
  uStack_128 = unaff_x20[0x1f];
  uStack_130 = unaff_x20[0x1e];
  uStack_198 = unaff_x20[0x11];
  uStack_1a0 = unaff_x20[0x10];
  uStack_188 = unaff_x20[0x13];
  uStack_190 = unaff_x20[0x12];
  uStack_178 = unaff_x20[0x15];
  uStack_180 = unaff_x20[0x14];
  uStack_168 = unaff_x20[0x17];
  uStack_170 = unaff_x20[0x16];
  uStack_1d8 = unaff_x20[9];
  uStack_1e0 = unaff_x20[8];
  uStack_1c8 = unaff_x20[0xb];
  uStack_1d0 = unaff_x20[10];
  uStack_1b8 = unaff_x20[0xd];
  uStack_1c0 = unaff_x20[0xc];
  uStack_1a8 = unaff_x20[0xf];
  uStack_1b0 = unaff_x20[0xe];
  uStack_218 = unaff_x20[1];
  uStack_220 = *unaff_x20;
  uStack_208 = unaff_x20[3];
  uStack_210 = unaff_x20[2];
  uStack_1f8 = unaff_x20[5];
  uStack_200 = unaff_x20[4];
  uStack_1e8 = unaff_x20[7];
  uStack_1f0 = unaff_x20[6];
  FUN_103609f8c(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 103609c4c; end: 103609ceb;  */

/* WARNING: Possible PIC construction at 0x000103609c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103609ca8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103609c9c) */
/* WARNING: Removing unreachable block (ram,0x000103609cac) */

void FUN_103609c4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7df00 != -1) {
    func_0x000107c61568(0x112f7df00,FUN_103609198);
  }
  uVar5 = uRam00000001138099a8;
  uVar4 = uRam00000001138099a0;
  uVar3 = uRam0000000113809998;
  uVar2 = uRam0000000113809990;
  uVar1 = uRam0000000113809988;
  *param_1 = uRam0000000113809980;
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



/* Entry: 103609cec; end: 103609d27;  */

void FUN_103609cec(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7df20;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7df20,&UNK_10dbe7cd0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103609d28; end: 103609e93;  */

void FUN_103609d28(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_178 [72];
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
  
  uStack_68 = unaff_x20[0x19];
  uStack_70 = unaff_x20[0x18];
  uStack_58 = unaff_x20[0x1b];
  uStack_60 = unaff_x20[0x1a];
  uStack_48 = unaff_x20[0x1d];
  uStack_50 = unaff_x20[0x1c];
  uStack_38 = unaff_x20[0x1f];
  uStack_40 = unaff_x20[0x1e];
  uStack_a8 = unaff_x20[0x11];
  uStack_b0 = unaff_x20[0x10];
  uStack_98 = unaff_x20[0x13];
  uStack_a0 = unaff_x20[0x12];
  uStack_88 = unaff_x20[0x15];
  uStack_90 = unaff_x20[0x14];
  uStack_78 = unaff_x20[0x17];
  uStack_80 = unaff_x20[0x16];
  uStack_e8 = unaff_x20[9];
  uStack_f0 = unaff_x20[8];
  uStack_d8 = unaff_x20[0xb];
  uStack_e0 = unaff_x20[10];
  uStack_c8 = unaff_x20[0xd];
  uStack_d0 = unaff_x20[0xc];
  uStack_b8 = unaff_x20[0xf];
  uStack_c0 = unaff_x20[0xe];
  uStack_128 = unaff_x20[1];
  uStack_130 = *unaff_x20;
  uStack_118 = unaff_x20[3];
  uStack_120 = unaff_x20[2];
  uStack_108 = unaff_x20[5];
  uStack_110 = unaff_x20[4];
  uStack_f8 = unaff_x20[7];
  uStack_100 = unaff_x20[6];
  func_0x000107c6068c(auStack_178,0);
  func_0x000107c5fa50(auStack_178,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103609e94; end: 103609f43;  */

uint FUN_103609e94(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
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
  uStack_158 = param_1[0x19];
  uStack_160 = param_1[0x18];
  uStack_148 = param_1[0x1b];
  uStack_150 = param_1[0x1a];
  uStack_138 = param_1[0x1d];
  uStack_140 = param_1[0x1c];
  uStack_128 = param_1[0x1f];
  uStack_130 = param_1[0x1e];
  uStack_198 = param_1[0x11];
  uStack_1a0 = param_1[0x10];
  uStack_188 = param_1[0x13];
  uStack_190 = param_1[0x12];
  uStack_178 = param_1[0x15];
  uStack_180 = param_1[0x14];
  uStack_168 = param_1[0x17];
  uStack_170 = param_1[0x16];
  uStack_1d8 = param_1[9];
  uStack_1e0 = param_1[8];
  uStack_1c8 = param_1[0xb];
  uStack_1d0 = param_1[10];
  uStack_1b8 = param_1[0xd];
  uStack_1c0 = param_1[0xc];
  uStack_1a8 = param_1[0xf];
  uStack_1b0 = param_1[0xe];
  uStack_218 = param_1[1];
  uStack_220 = *param_1;
  uStack_208 = param_1[3];
  uStack_210 = param_1[2];
  uStack_1f8 = param_1[5];
  uStack_200 = param_1[4];
  uStack_1e8 = param_1[7];
  uStack_1f0 = param_1[6];
  uStack_58 = param_2[0x19];
  uStack_60 = param_2[0x18];
  uStack_48 = param_2[0x1b];
  uStack_50 = param_2[0x1a];
  uStack_38 = param_2[0x1d];
  uStack_40 = param_2[0x1c];
  uStack_28 = param_2[0x1f];
  uStack_30 = param_2[0x1e];
  uStack_98 = param_2[0x11];
  uStack_a0 = param_2[0x10];
  uStack_88 = param_2[0x13];
  uStack_90 = param_2[0x12];
  uStack_78 = param_2[0x15];
  uStack_80 = param_2[0x14];
  uStack_68 = param_2[0x17];
  uStack_70 = param_2[0x16];
  uStack_d8 = param_2[9];
  uStack_e0 = param_2[8];
  uStack_c8 = param_2[0xb];
  uStack_d0 = param_2[10];
  uStack_b8 = param_2[0xd];
  uStack_c0 = param_2[0xc];
  uStack_a8 = param_2[0xf];
  uStack_b0 = param_2[0xe];
  uStack_118 = param_2[1];
  uStack_120 = *param_2;
  uStack_108 = param_2[3];
  uStack_110 = param_2[2];
  uStack_f8 = param_2[5];
  uStack_100 = param_2[4];
  uStack_e8 = param_2[7];
  uStack_f0 = param_2[6];
  FUN_103609f8c(&uStack_220,&uStack_120);
  return uVar1 & 1;
}



/* Entry: 103609f44; end: 103609f8b;  */

undefined8 FUN_103609f44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 103609f8c; end: 10360ae77;  */

uint FUN_103609f8c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 auStack_308 [3];
  undefined8 uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  undefined8 uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  undefined8 uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  undefined8 uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  undefined8 uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  undefined8 uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  undefined8 uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  undefined8 uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  undefined8 uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  undefined8 uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  undefined8 uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  undefined8 uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  undefined8 uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  undefined8 uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined8 uStack_b0;
  ulong uStack_a8;
  ulong uStack_a0;
  undefined8 uStack_90;
  ulong uStack_88;
  ulong uStack_80;
  
  uVar13 = param_1[3];
  uVar11 = param_1[2];
  uVar5 = param_1[4];
  uVar14 = param_2[3];
  uVar12 = param_2[2];
  uVar6 = param_2[4];
  uStack_b0 = uVar12;
  uStack_a8 = uVar14;
  uStack_a0 = uVar6;
  uStack_90 = uVar11;
  uStack_88 = uVar13;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar6 >> 0x3c) goto LAB_10360a044;
    if ((float)uVar11 == (float)uVar12) {
      FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103609f44(&uStack_b0,&uStack_d0,0x112db6358,&UNK_10d961e20);
      uVar2 = uVar13;
      func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
      func_0x000100d56778(uVar12,uVar14,uVar6);
      if ((uVar2 & 1) != 0) goto LAB_10360a0ec;
    }
    else {
      uVar7 = 0x112db6358;
      puVar8 = &UNK_10d961e20;
      FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10360ae24:
      FUN_103609f44(puVar3,puVar4,uVar7,puVar8);
      func_0x000100d56778(uVar12,uVar14,uVar6);
    }
  }
  else {
    if (0xe < uVar6 >> 0x3c) {
      FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
      FUN_103609f44(&uStack_b0,&uStack_d0,0x112db6358,&UNK_10d961e20);
LAB_10360a0ec:
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[6];
      uVar11 = param_1[5];
      uVar5 = param_1[7];
      uVar14 = param_2[6];
      uVar12 = param_2[5];
      uVar6 = param_2[7];
      uStack_f0 = uVar12;
      uStack_e8 = uVar14;
      uStack_e0 = uVar6;
      uStack_d0 = uVar11;
      uStack_c8 = uVar13;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a180;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a180:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_d0,&uStack_110,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_f0,&uStack_110,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[9];
      uVar11 = param_1[8];
      uVar5 = param_1[10];
      uVar14 = param_2[9];
      uVar12 = param_2[8];
      uVar6 = param_2[10];
      uStack_130 = uVar12;
      uStack_128 = uVar14;
      uStack_120 = uVar6;
      uStack_110 = uVar11;
      uStack_108 = uVar13;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a2ec;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a2ec:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_110,&uStack_150,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_130,&uStack_150,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0xc];
      uVar11 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar14 = param_2[0xc];
      uVar12 = param_2[0xb];
      uVar6 = param_2[0xd];
      uStack_170 = uVar12;
      uStack_168 = uVar14;
      uStack_160 = uVar6;
      uStack_150 = uVar11;
      uStack_148 = uVar13;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a458;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a458:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_170;
          puVar4 = &uStack_190;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_150,&uStack_190,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_170,&uStack_190,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0xf];
      uVar11 = param_1[0xe];
      uVar5 = param_1[0x10];
      uVar14 = param_2[0xf];
      uVar12 = param_2[0xe];
      uVar6 = param_2[0x10];
      uStack_1b0 = uVar12;
      uStack_1a8 = uVar14;
      uStack_1a0 = uVar6;
      uStack_190 = uVar11;
      uStack_188 = uVar13;
      uStack_180 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a5c4;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1b0,&uStack_1d0,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a5c4:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1b0;
          puVar4 = &uStack_1d0;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_190,&uStack_1d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1b0,&uStack_1d0,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x12];
      uVar11 = param_1[0x11];
      uVar5 = param_1[0x13];
      uVar14 = param_2[0x12];
      uVar12 = param_2[0x11];
      uVar6 = param_2[0x13];
      uStack_1f0 = uVar12;
      uStack_1e8 = uVar14;
      uStack_1e0 = uVar6;
      uStack_1d0 = uVar11;
      uStack_1c8 = uVar13;
      uStack_1c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a730;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a730:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_1f0;
          puVar4 = &uStack_210;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_1d0,&uStack_210,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_1f0,&uStack_210,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x15];
      uVar11 = param_1[0x14];
      uVar5 = param_1[0x16];
      uVar14 = param_2[0x15];
      uVar12 = param_2[0x14];
      uVar6 = param_2[0x16];
      uStack_230 = uVar12;
      uStack_228 = uVar14;
      uStack_220 = uVar6;
      uStack_210 = uVar11;
      uStack_208 = uVar13;
      uStack_200 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360a89c;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_230,&uStack_250,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360a89c:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_230;
          puVar4 = &uStack_250;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_210,&uStack_250,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_230,&uStack_250,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x18];
      uVar11 = param_1[0x17];
      uVar5 = param_1[0x19];
      uVar14 = param_2[0x18];
      uVar12 = param_2[0x17];
      uVar6 = param_2[0x19];
      uStack_270 = uVar12;
      uStack_268 = uVar14;
      uStack_260 = uVar6;
      uStack_250 = uVar11;
      uStack_248 = uVar13;
      uStack_240 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360aa0c;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_270,&uStack_290,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360aa0c:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_270;
          puVar4 = &uStack_290;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_250,&uStack_290,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_270,&uStack_290,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x1b];
      uVar11 = param_1[0x1a];
      uVar5 = param_1[0x1c];
      uVar14 = param_2[0x1b];
      uVar12 = param_2[0x1a];
      uVar6 = param_2[0x1c];
      uStack_2b0 = uVar12;
      uStack_2a8 = uVar14;
      uStack_2a0 = uVar6;
      uStack_290 = uVar11;
      uStack_288 = uVar13;
      uStack_280 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360ab78;
        if ((float)uVar11 != (float)uVar12) {
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_2b0,&uStack_2d0,0x112db6358,&UNK_10d961e20);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360ab78:
          uVar7 = 0x112db6358;
          puVar8 = &UNK_10d961e20;
          FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
          puVar3 = &uStack_2b0;
          puVar4 = &uStack_2d0;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_290,&uStack_2d0,0x112db6358,&UNK_10d961e20);
        FUN_103609f44(&uStack_2b0,&uStack_2d0,0x112db6358,&UNK_10d961e20);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar13 = param_1[0x1e];
      uVar11 = param_1[0x1d];
      uVar5 = param_1[0x1f];
      uVar14 = param_2[0x1e];
      uVar12 = param_2[0x1d];
      uVar6 = param_2[0x1f];
      uStack_2f0 = uVar12;
      uStack_2e8 = uVar14;
      uStack_2e0 = uVar6;
      uStack_2d0 = uVar11;
      uStack_2c8 = uVar13;
      uStack_2c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar6 >> 0x3c) goto LAB_10360ad00;
        if ((int)uVar11 != (int)uVar12) {
          uVar7 = 0x112db80f8;
          puVar8 = &UNK_10d9671e0;
          FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          goto LAB_10360ae24;
        }
        FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
        FUN_103609f44(&uStack_2f0,auStack_308,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar13;
        func_0x000100e25fcc(uVar13,uVar5,uVar14,uVar6);
        func_0x000100d56778(uVar12,uVar14,uVar6);
        if ((uVar2 & 1) == 0) goto LAB_10360ae4c;
      }
      else {
        if (uVar6 >> 0x3c < 0xf) {
LAB_10360ad00:
          uVar7 = 0x112db80f8;
          puVar8 = &UNK_10d9671e0;
          FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_2f0;
          puVar4 = auStack_308;
          uVar2 = uVar5;
          uVar9 = uVar13;
          uVar10 = uVar11;
          uVar5 = uVar6;
          uVar13 = uVar14;
          uVar11 = uVar12;
          goto LAB_10360ad2c;
        }
        FUN_103609f44(&uStack_2d0,auStack_308,0x112db80f8,&UNK_10d9671e0);
        FUN_103609f44(&uStack_2f0,auStack_308,0x112db80f8,&UNK_10d9671e0);
      }
      func_0x000100d56778(uVar11,uVar13,uVar5);
      uVar11 = *param_1;
      func_0x000100e25fcc(uVar11,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar11;
      goto LAB_10360ae54;
    }
LAB_10360a044:
    uVar7 = 0x112db6358;
    puVar8 = &UNK_10d961e20;
    FUN_103609f44(&uStack_90,&uStack_d0,0x112db6358,&UNK_10d961e20);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar9 = uVar13;
    uVar10 = uVar11;
    uVar5 = uVar6;
    uVar13 = uVar14;
    uVar11 = uVar12;
LAB_10360ad2c:
    FUN_103609f44(puVar3,puVar4,uVar7,puVar8);
    func_0x000100d56778(uVar10,uVar9,uVar2);
  }
LAB_10360ae4c:
  func_0x000100d56778(uVar11,uVar13,uVar5);
  uVar1 = 0;
LAB_10360ae54:
  return uVar1 & 1;
}



/* Entry: 10360ae78; end: 10360aeb7;  */

void FUN_10360ae78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7c10;
  func_0x000107c61520(&UNK_10dbe7c10,&UNK_11066db80);
  puRam0000000112f7df08 = puVar1;
  return;
}



/* Entry: 10360aeb8; end: 10360aedb;  */

void FUN_10360aeb8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10360aedc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10360aedc; end: 10360af1b;  */

void FUN_10360aedc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df10 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7be8;
  func_0x000107c61520(&UNK_10dbe7be8,&UNK_11066db80);
  puRam0000000112f7df10 = puVar1;
  return;
}



/* Entry: 10360af1c; end: 10360af47;  */

void FUN_10360af1c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10360ae78();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035e1138();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10360af48; end: 10360af4b;  */

void FUN_10360af48(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7c50;
  func_0x000107c61520(&UNK_10dbe7c50,&UNK_11066db80);
  puRam0000000112f7df18 = puVar1;
  return;
}



/* Entry: 10360af4c; end: 10360af8b;  */

void FUN_10360af4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7c50;
  func_0x000107c61520(&UNK_10dbe7c50,&UNK_11066db80);
  puRam0000000112f7df18 = puVar1;
  return;
}



/* Entry: 10360af8c; end: 10360b0d7;  */

long FUN_10360af8c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10360b0d8; end: 10360bd83;  */

undefined8 * FUN_10360b0d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x00010006c00c(uVar2,uVar1);
  *param_1 = uVar2;
  param_1[1] = uVar1;
  uVar3 = param_2[4];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
    uVar2 = param_2[3];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
  }
  else {
    uVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = uVar2;
    param_1[4] = param_2[4];
  }
  uVar3 = param_2[7];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_2 + 5);
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[6] = uVar2;
    param_1[7] = uVar3;
  }
  else {
    uVar2 = param_2[5];
    param_1[6] = param_2[6];
    param_1[5] = uVar2;
    param_1[7] = param_2[7];
  }
  uVar3 = param_2[10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
    uVar2 = param_2[9];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[9] = uVar2;
    param_1[10] = uVar3;
  }
  else {
    uVar2 = param_2[8];
    param_1[9] = param_2[9];
    param_1[8] = uVar2;
    param_1[10] = param_2[10];
  }
  uVar3 = param_2[0xd];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
    uVar2 = param_2[0xc];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xc] = uVar2;
    param_1[0xd] = uVar3;
  }
  else {
    uVar2 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar2;
    param_1[0xd] = param_2[0xd];
  }
  uVar3 = param_2[0x10];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
    uVar2 = param_2[0xf];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0xf] = uVar2;
    param_1[0x10] = uVar3;
  }
  else {
    uVar2 = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x10] = param_2[0x10];
  }
  uVar3 = param_2[0x13];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
    uVar2 = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar3;
  }
  else {
    uVar2 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar2;
    param_1[0x13] = param_2[0x13];
  }
  uVar3 = param_2[0x16];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
    uVar2 = param_2[0x15];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x15] = uVar2;
    param_1[0x16] = uVar3;
  }
  else {
    uVar2 = param_2[0x14];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x16] = param_2[0x16];
  }
  uVar3 = param_2[0x19];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
    uVar2 = param_2[0x18];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x18] = uVar2;
    param_1[0x19] = uVar3;
  }
  else {
    uVar2 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar2;
    param_1[0x19] = param_2[0x19];
  }
  uVar3 = param_2[0x1c];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    uVar2 = param_2[0x1b];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1b] = uVar2;
    param_1[0x1c] = uVar3;
  }
  else {
    uVar2 = param_2[0x1a];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x1c] = param_2[0x1c];
  }
  uVar3 = param_2[0x1f];
  if (uVar3 >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1d) = *(undefined4 *)(param_2 + 0x1d);
    uVar2 = param_2[0x1e];
    func_0x00010006c00c(uVar2,uVar3);
    param_1[0x1e] = uVar2;
    param_1[0x1f] = uVar3;
  }
  else {
    uVar2 = param_2[0x1d];
    param_1[0x1e] = param_2[0x1e];
    param_1[0x1d] = uVar2;
    param_1[0x1f] = param_2[0x1f];
  }
  return param_1;
}



/* Entry: 10360bd84; end: 10360be77;  */

int FUN_10360bd84(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x40] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 10360be78; end: 10360beff;  */

void FUN_10360be78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df28 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe7bbc;
  func_0x000107c61520(&DAT_10dbe7bbc,&UNK_11066db80);
  puRam0000000112f7df28 = puVar1;
  return;
}



/* Entry: 10360bf00; end: 10360c007;  */

/* WARNING: Removing unreachable block (ram,0x00010360c004) */

void FUN_10360bf00(undefined8 param_1,long param_2,long param_3)

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
        func_0x0001015d5420();
LAB_10360bff0:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        (**(code **)(param_3 + 0x160))(unaff_x20 + 0x10,param_2,param_3);
      }
      else if (lVar1 == 1) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x00010360c534();
        goto LAB_10360bff0;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 10360c008; end: 10360c0df;  */

void FUN_10360c008(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  undefined1 uStack_48;
  
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar2 = *(code **)(param_3 + 0x80);
    uVar1 = param_1;
    lStack_50 = *unaff_x20;
    func_0x00010360c534();
    (*pcVar2)(&lStack_50,1,&UNK_110671a90,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (((*(long *)(unaff_x20[2] + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x100))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)) &&
     (FUN_10360c0e0(), unaff_x21 == 0)) {
    func_0x000100076224(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
  }
  return;
}



/* Entry: 10360c0e0; end: 10360c167;  */

void FUN_10360c0e0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x38);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x30);
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,3,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10360c168; end: 10360c1c3;  */

uint FUN_10360c168(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_10360c5e4;
    }
    else if (lVar4 == 1) {
      if (lVar3 == 1) {
LAB_10360c5e4:
        lVar4 = param_1[2];
        lVar5 = param_2[2];
        lVar3 = *(long *)(lVar4 + 0x10);
        if (lVar3 == *(long *)(lVar5 + 0x10)) {
          if (lVar3 != 0 && lVar4 != lVar5) {
            plVar7 = (long *)(lVar5 + 0x28);
            plVar8 = (long *)(lVar4 + 0x28);
            do {
              uVar10 = plVar8[-1];
              if ((uVar10 != plVar7[-1] || *plVar8 != *plVar7) &&
                 (func_0x000107c605b8(), (uVar10 & 1) == 0)) goto LAB_10360c784;
              plVar7 = plVar7 + 2;
              plVar8 = plVar8 + 2;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          uVar10 = param_1[6];
          lVar3 = param_1[5];
          uVar6 = param_1[7];
          uVar11 = param_2[6];
          lVar4 = param_2[5];
          uVar9 = param_2[7];
          lStack_a0 = lVar4;
          uStack_98 = uVar11;
          uStack_90 = uVar9;
          lStack_80 = lVar3;
          uStack_78 = uVar10;
          uStack_70 = uVar6;
          if (uVar6 >> 0x3c < 0xf) {
            if (0xe < uVar9 >> 0x3c) goto LAB_10360c68c;
            if ((int)lVar3 == (int)lVar4) {
              func_0x000101626ba0(&lStack_80,auStack_b8);
              func_0x000101626ba0(&lStack_a0,auStack_b8);
              uVar2 = uVar10;
              func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar9);
              func_0x0001015dc5d0(lVar4,uVar11,uVar9);
              if ((uVar2 & 1) != 0) goto LAB_10360c660;
            }
            else {
              func_0x000101626ba0(&lStack_80,auStack_b8);
              func_0x000101626ba0(&lStack_a0,auStack_b8);
              func_0x0001015dc5d0(lVar4,uVar11,uVar9);
            }
          }
          else {
            if (0xe < uVar9 >> 0x3c) {
              func_0x000101626ba0(&lStack_80,auStack_b8);
              func_0x000101626ba0(&lStack_a0,auStack_b8);
LAB_10360c660:
              func_0x0001015dc5d0(lVar3,uVar10,uVar6);
              lVar3 = param_1[3];
              func_0x000100e25fcc(lVar3,param_1[4],param_2[3],param_2[4]);
              uVar1 = (uint)lVar3;
              goto LAB_10360c788;
            }
LAB_10360c68c:
            func_0x000101626ba0(&lStack_80,auStack_b8);
            func_0x000101626ba0(&lStack_a0,auStack_b8);
            func_0x0001015dc5d0(lVar3,uVar10,uVar6);
            lVar3 = lVar4;
            uVar10 = uVar11;
            uVar6 = uVar9;
          }
          func_0x0001015dc5d0(lVar3,uVar10,uVar6);
        }
      }
    }
    else if (lVar3 == 2) goto LAB_10360c5e4;
  }
  else if (lVar3 == lVar4) goto LAB_10360c5e4;
LAB_10360c784:
  uVar1 = 0;
LAB_10360c788:
  return uVar1 & 1;
}



/* Entry: 10360c1c4; end: 10360c1f3;  */

undefined1  [16] FUN_10360c1c4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10360c1f4; end: 10360c227;  */

void FUN_10360c1f4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10360c228; end: 10360c23b;  */

undefined1  [16] FUN_10360c228(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10360c238;
  return auVar1;
}



/* Entry: 10360c23c; end: 10360c24f;  */

void FUN_10360c23c(void)

{
  FUN_10360bf00();
  return;
}



/* Entry: 10360c250; end: 10360c287;  */

void FUN_10360c250(void)

{
  FUN_10360c008();
  return;
}



/* Entry: 10360c288; end: 10360c28b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10360c288(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10360c28c; end: 10360c2c3;  */

uint FUN_10360c28c(long param_1,long param_2)

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
  FUN_10360cc30();
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



/* Entry: 10360c2c4; end: 10360c30b;  */

uint FUN_10360c2c4(undefined8 *param_1)

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
  FUN_10360c574(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10360c30c; end: 10360c3ab;  */

/* WARNING: Possible PIC construction at 0x00010360c358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010360c368: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010360c35c) */
/* WARNING: Removing unreachable block (ram,0x00010360c36c) */

void FUN_10360c30c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7df30 != -1) {
    func_0x000107c61568(0x112f7df30,0x10360beb8);
  }
  uVar5 = uRam00000001138099d8;
  uVar4 = uRam00000001138099d0;
  uVar3 = uRam00000001138099c8;
  uVar2 = uRam00000001138099c0;
  uVar1 = uRam00000001138099b8;
  *param_1 = uRam00000001138099b0;
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



/* Entry: 10360c3ac; end: 10360c3e7;  */

void FUN_10360c3ac(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7df58;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7df58,&UNK_10dbe7fa8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10360c3e8; end: 10360c4eb;  */

void FUN_10360c3e8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10360c4ec; end: 10360c573;  */

uint FUN_10360c4ec(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10360c574(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 10360c574; end: 10360c7ab;  */

uint FUN_10360c574(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined1 auStack_b8 [24];
  long lStack_a0;
  ulong uStack_98;
  ulong uStack_90;
  long lStack_80;
  ulong uStack_78;
  ulong uStack_70;
  
  lVar3 = *param_1;
  lVar4 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar4 == 0) {
      if (lVar3 == 0) goto LAB_10360c5e4;
    }
    else if (lVar4 == 1) {
      if (lVar3 == 1) {
LAB_10360c5e4:
        lVar4 = param_1[2];
        lVar5 = param_2[2];
        lVar3 = *(long *)(lVar4 + 0x10);
        if (lVar3 == *(long *)(lVar5 + 0x10)) {
          if (lVar3 != 0 && lVar4 != lVar5) {
            plVar7 = (long *)(lVar5 + 0x28);
            plVar8 = (long *)(lVar4 + 0x28);
            do {
              uVar10 = plVar8[-1];
              if ((uVar10 != plVar7[-1] || *plVar8 != *plVar7) &&
                 (func_0x000107c605b8(), (uVar10 & 1) == 0)) goto LAB_10360c784;
              plVar7 = plVar7 + 2;
              plVar8 = plVar8 + 2;
              lVar3 = lVar3 + -1;
            } while (lVar3 != 0);
          }
          uVar10 = param_1[6];
          lVar3 = param_1[5];
          uVar6 = param_1[7];
          uVar11 = param_2[6];
          lVar4 = param_2[5];
          uVar9 = param_2[7];
          lStack_a0 = lVar4;
          uStack_98 = uVar11;
          uStack_90 = uVar9;
          lStack_80 = lVar3;
          uStack_78 = uVar10;
          uStack_70 = uVar6;
          if (uVar6 >> 0x3c < 0xf) {
            if (0xe < uVar9 >> 0x3c) goto LAB_10360c68c;
            if ((int)lVar3 == (int)lVar4) {
              func_0x000101626ba0(&lStack_80,auStack_b8);
              func_0x000101626ba0(&lStack_a0,auStack_b8);
              uVar2 = uVar10;
              func_0x000100e25fcc(uVar10,uVar6,uVar11,uVar9);
              func_0x0001015dc5d0(lVar4,uVar11,uVar9);
              if ((uVar2 & 1) != 0) goto LAB_10360c660;
            }
            else {
              func_0x000101626ba0(&lStack_80,auStack_b8);
              func_0x000101626ba0(&lStack_a0,auStack_b8);
              func_0x0001015dc5d0(lVar4,uVar11,uVar9);
            }
          }
          else {
            if (0xe < uVar9 >> 0x3c) {
              func_0x000101626ba0(&lStack_80,auStack_b8);
              func_0x000101626ba0(&lStack_a0,auStack_b8);
LAB_10360c660:
              func_0x0001015dc5d0(lVar3,uVar10,uVar6);
              lVar3 = param_1[3];
              func_0x000100e25fcc(lVar3,param_1[4],param_2[3],param_2[4]);
              uVar1 = (uint)lVar3;
              goto LAB_10360c788;
            }
LAB_10360c68c:
            func_0x000101626ba0(&lStack_80,auStack_b8);
            func_0x000101626ba0(&lStack_a0,auStack_b8);
            func_0x0001015dc5d0(lVar3,uVar10,uVar6);
            lVar3 = lVar4;
            uVar10 = uVar11;
            uVar6 = uVar9;
          }
          func_0x0001015dc5d0(lVar3,uVar10,uVar6);
        }
      }
    }
    else if (lVar3 == 2) goto LAB_10360c5e4;
  }
  else if (lVar3 == lVar4) goto LAB_10360c5e4;
LAB_10360c784:
  uVar1 = 0;
LAB_10360c788:
  return uVar1 & 1;
}



/* Entry: 10360c7ac; end: 10360c7eb;  */

void FUN_10360c7ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7df40 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe7ed8;
  func_0x000107c61520(&UNK_10dbe7ed8,&UNK_11066dd50);
  puRam0000000112f7df40 = puVar1;
  return;
}



/* Entry: 10360c7ec; end: 10360c80f;  */

void FUN_10360c7ec(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10360c810();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



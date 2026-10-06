/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035f3420; end: 1035f34bf;  */

/* WARNING: Possible PIC construction at 0x0001035f346c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f347c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f3470) */
/* WARNING: Removing unreachable block (ram,0x0001035f3480) */

void FUN_1035f3420(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d458 != -1) {
    func_0x000107c61568(0x112f7d458,0x1035f15e0);
  }
  uVar5 = uRam0000000113809638;
  uVar4 = uRam0000000113809630;
  uVar3 = uRam0000000113809628;
  uVar2 = uRam0000000113809620;
  uVar1 = uRam0000000113809618;
  *param_1 = uRam0000000113809610;
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



/* Entry: 1035f34c0; end: 1035f34fb;  */

void FUN_1035f34c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d620;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d620,&UNK_10dbe5e38);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035f34fc; end: 1035f35ff;  */

void FUN_1035f34fc(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035f3600; end: 1035f36a7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035f3600(undefined8 *param_1,long *param_2)

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
    FUN_1035f29f0(uVar25,uVar26);
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



/* Entry: 1035f36a8; end: 1035f36ef;  */

void FUN_1035f36a8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe5f20,0x32,2);
  uRam0000000113809648 = uStack_38;
  uRam0000000113809640 = uStack_40;
  uRam0000000113809658 = uStack_28;
  uRam0000000113809650 = uStack_30;
  uRam0000000113809668 = uStack_18;
  uRam0000000113809660 = uStack_20;
  return;
}



/* Entry: 1035f36f0; end: 1035f37fb;  */

void FUN_1035f36f0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x0001035f5b10();
LAB_1035f3778:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
          goto LAB_1035f3778;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x198);
          func_0x0001035eeb64();
          goto LAB_1035f3778;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035f37fc; end: 1035f38ff;  */

/* WARNING: Removing unreachable block (ram,0x0001035f38c4) */

void FUN_1035f37fc(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  long lStack_60;
  undefined1 uStack_58;
  
  FUN_1035f3900();
  if (unaff_x21 == 0) {
    FUN_1035f399c();
    lVar4 = *unaff_x20;
    lVar1 = unaff_x20[1];
    lVar2 = lVar4;
    func_0x0001035f98e4(lVar4,(char)lVar1);
    lVar3 = 0;
    func_0x0001035f98e4(0,1);
    if (lVar2 != lVar3) {
      pcVar5 = *(code **)(param_3 + 0x80);
      lStack_60 = lVar4;
      uStack_58 = (char)lVar1;
      func_0x0001035f5b10();
      (*pcVar5)(&lStack_60,3,&UNK_11066c950,lVar3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[2],unaff_x20[3],param_2,param_3);
  }
  return;
}



/* Entry: 1035f3900; end: 1035f399b;  */

void FUN_1035f3900(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  ulong uStack_a8;
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
  
  uStack_a8 = *(ulong *)(param_1 + 0x28);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x20);
    uStack_78 = *(undefined8 *)(param_1 + 0x58);
    uStack_80 = *(undefined8 *)(param_1 + 0x50);
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    uStack_48 = *(undefined8 *)(param_1 + 0x88);
    uStack_50 = *(undefined8 *)(param_1 + 0x80);
    uStack_98 = *(undefined8 *)(param_1 + 0x38);
    uStack_a0 = *(undefined8 *)(param_1 + 0x30);
    uStack_88 = *(undefined8 *)(param_1 + 0x48);
    uStack_90 = *(undefined8 *)(param_1 + 0x40);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035eeb64();
    (*pcVar1)(&uStack_b0,1,&UNK_110674b48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f399c; end: 1035f3a23;  */

void FUN_1035f399c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x98);
    uStack_60 = *(undefined8 *)(param_1 + 0x90);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,2,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f3a24; end: 1035f3a87;  */

void FUN_1035f3a24(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[5] = 0xf000000000000000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0xf000000000000000;
  return;
}



/* Entry: 1035f3a88; end: 1035f3ab7;  */

undefined1  [16] FUN_1035f3a88(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1035f3ab8; end: 1035f3aeb;  */

void FUN_1035f3ab8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1035f3aec; end: 1035f3aff;  */

undefined1  [16] FUN_1035f3aec(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1035f3afc;
  return auVar1;
}



/* Entry: 1035f3b00; end: 1035f3b13;  */

void FUN_1035f3b00(void)

{
  FUN_1035f36f0();
  return;
}



/* Entry: 1035f3b14; end: 1035f3b6b;  */

void FUN_1035f3b14(void)

{
  FUN_1035f37fc();
  return;
}



/* Entry: 1035f3b6c; end: 1035f3b6f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035f3b6c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035f3b70; end: 1035f3ba7;  */

uint FUN_1035f3b70(long param_1,long param_2)

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
  func_0x0001035f8e04();
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



/* Entry: 1035f3ba8; end: 1035f3c37;  */

uint FUN_1035f3ba8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x11];
  uStack_50 = param_1[0x10];
  uStack_38 = param_1[0x13];
  uStack_40 = param_1[0x12];
  uStack_30 = param_1[0x14];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
  uStack_80 = param_1[10];
  uStack_68 = param_1[0xd];
  uStack_70 = param_1[0xc];
  uStack_58 = param_1[0xf];
  uStack_60 = param_1[0xe];
  uStack_c8 = param_1[1];
  uStack_d0 = *param_1;
  uStack_b8 = param_1[3];
  uStack_c0 = param_1[2];
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_f8 = unaff_x20[0x11];
  uStack_100 = unaff_x20[0x10];
  uStack_e8 = unaff_x20[0x13];
  uStack_f0 = unaff_x20[0x12];
  uStack_e0 = unaff_x20[0x14];
  uStack_138 = unaff_x20[9];
  uStack_140 = unaff_x20[8];
  uStack_128 = unaff_x20[0xb];
  uStack_130 = unaff_x20[10];
  uStack_118 = unaff_x20[0xd];
  uStack_120 = unaff_x20[0xc];
  uStack_108 = unaff_x20[0xf];
  uStack_110 = unaff_x20[0xe];
  uStack_178 = unaff_x20[1];
  uStack_180 = *unaff_x20;
  uStack_168 = unaff_x20[3];
  uStack_170 = unaff_x20[2];
  uStack_158 = unaff_x20[5];
  uStack_160 = unaff_x20[4];
  uStack_148 = unaff_x20[7];
  uStack_150 = unaff_x20[6];
  FUN_1035f4a20(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1035f3c38; end: 1035f3cd7;  */

/* WARNING: Possible PIC construction at 0x0001035f3c84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f3c94: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f3c88) */
/* WARNING: Removing unreachable block (ram,0x0001035f3c98) */

void FUN_1035f3c38(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d468 != -1) {
    func_0x000107c61568(0x112f7d468,FUN_1035f36a8);
  }
  uVar5 = uRam0000000113809668;
  uVar4 = uRam0000000113809660;
  uVar3 = uRam0000000113809658;
  uVar2 = uRam0000000113809650;
  uVar1 = uRam0000000113809648;
  *param_1 = uRam0000000113809640;
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



/* Entry: 1035f3cd8; end: 1035f3d13;  */

void FUN_1035f3cd8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d610;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d610,&UNK_10dbe5e30);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035f3d14; end: 1035f3e5f;  */

void FUN_1035f3d14(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_128 [72];
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
  
  uStack_58 = unaff_x20[0x11];
  uStack_60 = unaff_x20[0x10];
  uStack_48 = unaff_x20[0x13];
  uStack_50 = unaff_x20[0x12];
  uStack_40 = unaff_x20[0x14];
  uStack_98 = unaff_x20[9];
  uStack_a0 = unaff_x20[8];
  uStack_88 = unaff_x20[0xb];
  uStack_90 = unaff_x20[10];
  uStack_78 = unaff_x20[0xd];
  uStack_80 = unaff_x20[0xc];
  uStack_68 = unaff_x20[0xf];
  uStack_70 = unaff_x20[0xe];
  uStack_d8 = unaff_x20[1];
  uStack_e0 = *unaff_x20;
  uStack_c8 = unaff_x20[3];
  uStack_d0 = unaff_x20[2];
  uStack_b8 = unaff_x20[5];
  uStack_c0 = unaff_x20[4];
  uStack_a8 = unaff_x20[7];
  uStack_b0 = unaff_x20[6];
  func_0x000107c6068c(auStack_128,0);
  func_0x000107c5fa50(auStack_128,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035f3e60; end: 1035f3eef;  */

uint FUN_1035f3e60(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_f8 = param_1[0x11];
  uStack_100 = param_1[0x10];
  uStack_e8 = param_1[0x13];
  uStack_f0 = param_1[0x12];
  uStack_e0 = param_1[0x14];
  uStack_138 = param_1[9];
  uStack_140 = param_1[8];
  uStack_128 = param_1[0xb];
  uStack_130 = param_1[10];
  uStack_118 = param_1[0xd];
  uStack_120 = param_1[0xc];
  uStack_108 = param_1[0xf];
  uStack_110 = param_1[0xe];
  uStack_178 = param_1[1];
  uStack_180 = *param_1;
  uStack_168 = param_1[3];
  uStack_170 = param_1[2];
  uStack_158 = param_1[5];
  uStack_160 = param_1[4];
  uStack_148 = param_1[7];
  uStack_150 = param_1[6];
  uStack_48 = param_2[0x11];
  uStack_50 = param_2[0x10];
  uStack_38 = param_2[0x13];
  uStack_40 = param_2[0x12];
  uStack_30 = param_2[0x14];
  uStack_88 = param_2[9];
  uStack_90 = param_2[8];
  uStack_78 = param_2[0xb];
  uStack_80 = param_2[10];
  uStack_68 = param_2[0xd];
  uStack_70 = param_2[0xc];
  uStack_58 = param_2[0xf];
  uStack_60 = param_2[0xe];
  uStack_c8 = param_2[1];
  uStack_d0 = *param_2;
  uStack_b8 = param_2[3];
  uStack_c0 = param_2[2];
  uStack_a8 = param_2[5];
  uStack_b0 = param_2[4];
  uStack_98 = param_2[7];
  uStack_a0 = param_2[6];
  FUN_1035f4a20(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1035f3ef0; end: 1035f3f37;  */

void FUN_1035f3ef0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe5e40,0xd1,2);
  uRam0000000113809678 = uStack_38;
  uRam0000000113809670 = uStack_40;
  uRam0000000113809688 = uStack_28;
  uRam0000000113809680 = uStack_30;
  uRam0000000113809698 = uStack_18;
  uRam0000000113809690 = uStack_20;
  return;
}



/* Entry: 1035f3f38; end: 1035f4103;  */

/* WARNING: Removing unreachable block (ram,0x0001035f4100) */

void FUN_1035f3f38(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001035eeb64();
          }
          else {
            if (lVar1 != 4) goto LAB_1035f40f0;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001035eeb64();
          }
          goto LAB_1035f40dc;
        }
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x0001035f5bd0();
          goto LAB_1035f40dc;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x0001035f5b90();
          goto LAB_1035f40dc;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
          else {
            if (lVar1 != 6) goto LAB_1035f40f0;
            pcVar4 = *(code **)(param_3 + 0x198);
            func_0x0001015c5cfc();
          }
        }
        else if (lVar1 == 7) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
        }
        else {
          if (lVar1 != 8) goto LAB_1035f40f0;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015c5cfc();
        }
LAB_1035f40dc:
        (*pcVar4)();
      }
LAB_1035f40f0:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1035f4104; end: 1035f4277;  */

void FUN_1035f4104(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    func_0x0001035f5bd0();
    (*pcVar3)(&lStack_50,1,&UNK_11066c7c0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x0001035f5b90();
    (*pcVar3)(&lStack_50,2,&UNK_11066c630,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_1035f4278();
  if (unaff_x21 == 0) {
    FUN_1035f4314();
    FUN_1035f43b0();
    FUN_1035f4438();
    FUN_1035f44c4();
    FUN_1035f454c();
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 1035f4278; end: 1035f4313;  */

void FUN_1035f4278(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  ulong uStack_a8;
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
  
  uStack_a8 = *(ulong *)(param_1 + 0x38);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x30);
    uStack_78 = *(undefined8 *)(param_1 + 0x68);
    uStack_80 = *(undefined8 *)(param_1 + 0x60);
    uStack_68 = *(undefined8 *)(param_1 + 0x78);
    uStack_70 = *(undefined8 *)(param_1 + 0x70);
    uStack_58 = *(undefined8 *)(param_1 + 0x88);
    uStack_60 = *(undefined8 *)(param_1 + 0x80);
    uStack_48 = *(undefined8 *)(param_1 + 0x98);
    uStack_50 = *(undefined8 *)(param_1 + 0x90);
    uStack_98 = *(undefined8 *)(param_1 + 0x48);
    uStack_a0 = *(undefined8 *)(param_1 + 0x40);
    uStack_88 = *(undefined8 *)(param_1 + 0x58);
    uStack_90 = *(undefined8 *)(param_1 + 0x50);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035eeb64();
    (*pcVar1)(&uStack_b0,3,&UNK_110674b48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f4314; end: 1035f43af;  */

void FUN_1035f4314(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_b0;
  ulong uStack_a8;
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
  
  uStack_a8 = *(ulong *)(param_1 + 0xa8);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0xa0);
    uStack_78 = *(undefined8 *)(param_1 + 0xd8);
    uStack_80 = *(undefined8 *)(param_1 + 0xd0);
    uStack_68 = *(undefined8 *)(param_1 + 0xe8);
    uStack_70 = *(undefined8 *)(param_1 + 0xe0);
    uStack_58 = *(undefined8 *)(param_1 + 0xf8);
    uStack_60 = *(undefined8 *)(param_1 + 0xf0);
    uStack_48 = *(undefined8 *)(param_1 + 0x108);
    uStack_50 = *(undefined8 *)(param_1 + 0x100);
    uStack_98 = *(undefined8 *)(param_1 + 0xb8);
    uStack_a0 = *(undefined8 *)(param_1 + 0xb0);
    uStack_88 = *(undefined8 *)(param_1 + 200);
    uStack_90 = *(undefined8 *)(param_1 + 0xc0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035eeb64();
    (*pcVar1)(&uStack_b0,4,&UNK_110674b48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f43b0; end: 1035f4437;  */

void FUN_1035f43b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x120);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x118);
    uStack_60 = *(undefined8 *)(param_1 + 0x110);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,5,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f4438; end: 1035f44c3;  */

void FUN_1035f4438(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x138);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x130);
    uStack_60 = *(undefined8 *)(param_1 + 0x128);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,6,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f44c4; end: 1035f454b;  */

void FUN_1035f44c4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x150);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x148);
    uStack_60 = *(undefined8 *)(param_1 + 0x140);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,7,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f454c; end: 1035f45d7;  */

void FUN_1035f454c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x168);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x160);
    uStack_60 = *(undefined8 *)(param_1 + 0x158);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar1)(&uStack_60,8,&UNK_110790a00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035f45d8; end: 1035f4663;  */

void FUN_1035f45d8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0xf000000000000000;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x1f] = 0;
  param_1[0x1e] = 0;
  param_1[0x21] = 0;
  param_1[0x20] = 0;
  param_1[0x23] = 0;
  param_1[0x22] = 0;
  param_1[0x24] = 0xf000000000000000;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0xf000000000000000;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0xf000000000000000;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0xf000000000000000;
  return;
}



/* Entry: 1035f4664; end: 1035f4693;  */

undefined1  [16] FUN_1035f4664(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1035f4694; end: 1035f46c7;  */

void FUN_1035f4694(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1035f46c8; end: 1035f46db;  */

undefined1  [16] FUN_1035f46c8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1035f46d8;
  return auVar1;
}



/* Entry: 1035f46dc; end: 1035f46ef;  */

void FUN_1035f46dc(void)

{
  FUN_1035f3f38();
  return;
}



/* Entry: 1035f46f0; end: 1035f4757;  */

void FUN_1035f46f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_1b0 [368];
  
  func_0x000107c610b4(auStack_1b0);
  FUN_1035f4104(param_1,param_2,param_3);
  return;
}



/* Entry: 1035f4758; end: 1035f475b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035f4758(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035f475c; end: 1035f4793;  */

uint FUN_1035f475c(long param_1,long param_2)

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
  FUN_1035f8dc4();
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



/* Entry: 1035f4794; end: 1035f47e3;  */

uint FUN_1035f4794(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_300 [368];
  undefined1 auStack_190 [368];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_190,param_1,0x170);
  func_0x000107c610b4(auStack_300);
  func_0x0001035f4eb4(auStack_300,auStack_190);
  return uVar1 & 1;
}



/* Entry: 1035f47e4; end: 1035f4883;  */

/* WARNING: Possible PIC construction at 0x0001035f4830: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f4840: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f4834) */
/* WARNING: Removing unreachable block (ram,0x0001035f4844) */

void FUN_1035f47e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d480 != -1) {
    func_0x000107c61568(0x112f7d480,FUN_1035f3ef0);
  }
  uVar5 = uRam0000000113809698;
  uVar4 = uRam0000000113809690;
  uVar3 = uRam0000000113809688;
  uVar2 = uRam0000000113809680;
  uVar1 = uRam0000000113809678;
  *param_1 = uRam0000000113809670;
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



/* Entry: 1035f4884; end: 1035f48bf;  */

void FUN_1035f4884(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f7d600;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f7d600,&UNK_10dbe5e28);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035f48c0; end: 1035f49cb;  */

void FUN_1035f48c0(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1e8 [72];
  undefined1 auStack_1a0 [368];
  
  func_0x000107c610b4(auStack_1a0);
  func_0x000107c6068c(auStack_1e8,0);
  func_0x000107c5fa50(auStack_1e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1035f49cc; end: 1035f4a1f;  */

uint FUN_1035f49cc(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_300 [368];
  undefined1 auStack_190 [368];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_300,param_1,0x170);
  func_0x000107c610b4(auStack_190,param_2,0x170);
  func_0x0001035f4eb4(auStack_300,auStack_190);
  return uVar1 & 1;
}



/* Entry: 1035f4a20; end: 1035f5a87;  */

uint FUN_1035f4a20(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_450 [112];
  long lStack_3e0;
  ulong uStack_3d8;
  ulong uStack_3d0;
  long lStack_3c8;
  long lStack_3c0;
  long lStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
  ulong uStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  long lStack_348;
  long lStack_340;
  long lStack_338;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  ulong uStack_2f8;
  long lStack_2f0;
  long lStack_2e8;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long lStack_2a0;
  long lStack_298;
  long lStack_290;
  ulong uStack_288;
  ulong uStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  long lStack_258;
  long lStack_250;
  long lStack_248;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  ulong uStack_218;
  long lStack_210;
  long lStack_208;
  long lStack_200;
  long lStack_1f8;
  long lStack_1f0;
  long lStack_1e8;
  long lStack_1e0;
  long lStack_1d8;
  long lStack_1d0;
  long lStack_1c8;
  long lStack_1c0;
  long lStack_1b8;
  long lStack_1b0;
  long lStack_1a8;
  long lStack_1a0;
  long lStack_198;
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
  long lStack_120;
  long lStack_118;
  long lStack_110;
  long lStack_108;
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
  long lStack_90;
  long lStack_88;
  long lStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lStack_258 = param_1[0xb];
  lStack_260 = param_1[10];
  lStack_f8 = param_1[0xd];
  lStack_100 = param_1[0xc];
  lStack_248 = param_1[0xd];
  lStack_250 = param_1[0xc];
  lStack_e8 = param_1[0xf];
  lStack_f0 = param_1[0xe];
  lStack_238 = param_1[0xf];
  lStack_240 = param_1[0xe];
  lStack_d8 = param_1[0x11];
  lStack_e0 = param_1[0x10];
  lStack_138 = param_1[5];
  lStack_140 = param_1[4];
  lStack_128 = param_1[7];
  lStack_130 = param_1[6];
  lStack_118 = param_1[9];
  lStack_120 = param_1[8];
  lStack_108 = param_1[0xb];
  lStack_110 = param_1[10];
  uStack_288 = param_1[5];
  lStack_290 = param_1[4];
  lStack_278 = param_1[7];
  uStack_280 = param_1[6];
  lStack_268 = param_1[9];
  lStack_270 = param_1[8];
  lStack_1a8 = param_2[5];
  lStack_1b0 = param_2[4];
  lStack_198 = param_2[7];
  lStack_1a0 = param_2[6];
  lStack_2a8 = param_2[0xf];
  lStack_2b0 = param_2[0xe];
  lStack_148 = param_2[0x11];
  lStack_150 = param_2[0x10];
  lStack_2c8 = param_2[0xb];
  lStack_2d0 = param_2[10];
  lStack_168 = param_2[0xd];
  lStack_170 = param_2[0xc];
  lStack_2b8 = param_2[0xd];
  lStack_2c0 = param_2[0xc];
  lStack_158 = param_2[0xf];
  lStack_160 = param_2[0xe];
  lStack_188 = param_2[9];
  lStack_190 = param_2[8];
  lStack_178 = param_2[0xb];
  lStack_180 = param_2[10];
  uStack_2f8 = param_2[5];
  lStack_300 = param_2[4];
  lStack_2e8 = param_2[7];
  lStack_2f0 = param_2[6];
  lStack_2d8 = param_2[9];
  lStack_2e0 = param_2[8];
  lStack_228 = param_1[0x11];
  lStack_230 = param_1[0x10];
  lStack_298 = param_2[0x11];
  lStack_2a0 = param_2[0x10];
  lStack_220 = lStack_300;
  uStack_218 = uStack_2f8;
  lStack_210 = lStack_2f0;
  lStack_208 = lStack_2e8;
  lStack_200 = lStack_2e0;
  lStack_1f8 = lStack_2d8;
  lStack_1f0 = lStack_2d0;
  lStack_1e8 = lStack_2c8;
  lStack_1e0 = lStack_2c0;
  lStack_1d8 = lStack_2b8;
  lStack_1d0 = lStack_2b0;
  lStack_1c8 = lStack_2a8;
  lStack_1c0 = lStack_2a0;
  lStack_1b8 = lStack_298;
  if (uStack_288 >> 0x3c < 0xf) {
    if (0xe < uStack_2f8 >> 0x3c) goto LAB_1035f4b58;
    lStack_398 = param_2[0xd];
    lStack_3a0 = param_2[0xc];
    lStack_388 = param_2[0xf];
    lStack_390 = param_2[0xe];
    lStack_378 = param_2[0x11];
    lStack_380 = param_2[0x10];
    uStack_3d8 = param_2[5];
    lStack_3e0 = param_2[4];
    lStack_3c8 = param_2[7];
    uStack_3d0 = param_2[6];
    lStack_3b8 = param_2[9];
    lStack_3c0 = param_2[8];
    lStack_3a8 = param_2[0xb];
    lStack_3b0 = param_2[10];
    lStack_88 = param_1[0xd];
    lStack_90 = param_1[0xc];
    lStack_78 = param_1[0xf];
    lStack_80 = param_1[0xe];
    lStack_68 = param_1[0x11];
    lStack_70 = param_1[0x10];
    lStack_c8 = param_1[5];
    lStack_d0 = param_1[4];
    lStack_b8 = param_1[7];
    lStack_c0 = param_1[6];
    lStack_a8 = param_1[9];
    lStack_b0 = param_1[8];
    lStack_98 = param_1[0xb];
    lStack_a0 = param_1[10];
    lStack_370 = lStack_3e0;
    uStack_368 = uStack_3d8;
    lStack_360 = uStack_3d0;
    lStack_358 = lStack_3c8;
    lStack_350 = lStack_3c0;
    lStack_348 = lStack_3b8;
    lStack_340 = lStack_3b0;
    lStack_338 = lStack_3a8;
    lStack_330 = lStack_3a0;
    lStack_328 = lStack_398;
    lStack_320 = lStack_390;
    lStack_318 = lStack_388;
    lStack_310 = lStack_380;
    lStack_308 = lStack_378;
    FUN_1035f5a88(&lStack_140,auStack_450,0x112f73200,&UNK_10dbe5440);
    FUN_1035f5a88(&lStack_1b0,auStack_450,0x112f73200,&UNK_10dbe5440);
    plVar2 = &lStack_d0;
    FUN_103646638(plVar2,&lStack_370);
    FUN_1035f8f14(&lStack_3e0,0x112f73200,&UNK_10dbe5440);
    FUN_1035f8f14(&lStack_290,0x112f73200,&UNK_10dbe5440);
    if (((ulong)plVar2 & 1) != 0) goto LAB_1035f4c9c;
  }
  else if (uStack_2f8 >> 0x3c < 0xf) {
LAB_1035f4b58:
    lStack_370 = lStack_290;
    uStack_368 = uStack_288;
    lStack_360 = uStack_280;
    lStack_358 = lStack_278;
    lStack_350 = lStack_270;
    lStack_348 = lStack_268;
    lStack_340 = lStack_260;
    lStack_338 = lStack_258;
    lStack_330 = lStack_250;
    lStack_328 = lStack_248;
    lStack_320 = lStack_240;
    lStack_318 = lStack_238;
    lStack_310 = lStack_230;
    lStack_308 = lStack_228;
    FUN_1035f5a88(&lStack_140,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    FUN_1035f5a88(&lStack_1b0,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    FUN_1035f8f14(&lStack_370,0x112f7d130,&UNK_10dbe5a80);
  }
  else {
    lStack_328 = param_1[0xd];
    lStack_330 = param_1[0xc];
    lStack_318 = param_1[0xf];
    lStack_320 = param_1[0xe];
    lStack_308 = param_1[0x11];
    lStack_310 = param_1[0x10];
    uStack_368 = param_1[5];
    lStack_370 = param_1[4];
    lStack_358 = param_1[7];
    lStack_360 = param_1[6];
    lStack_348 = param_1[9];
    lStack_350 = param_1[8];
    lStack_338 = param_1[0xb];
    lStack_340 = param_1[10];
    FUN_1035f5a88(&lStack_140,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    FUN_1035f5a88(&lStack_1b0,&lStack_d0,0x112f73200,&UNK_10dbe5440);
    FUN_1035f8f14(&lStack_370,0x112f73200,&UNK_10dbe5440);
LAB_1035f4c9c:
    uVar9 = param_1[0x13];
    lVar8 = param_1[0x12];
    uVar5 = param_1[0x14];
    uVar10 = param_2[0x13];
    lVar3 = param_2[0x12];
    uVar7 = param_2[0x14];
    lStack_3e0 = lVar3;
    uStack_3d8 = uVar10;
    uStack_3d0 = uVar7;
    lStack_290 = lVar8;
    uStack_288 = uVar9;
    uStack_280 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar7 >> 0x3c) goto LAB_1035f4d6c;
      if (lVar8 == lVar3) {
        FUN_1035f5a88(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        FUN_1035f5a88(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        uVar4 = uVar9;
        func_0x000100e25fcc(uVar9,uVar5,uVar10,uVar7);
        func_0x000100d563fc(lVar8,uVar10,uVar7);
        if ((uVar4 & 1) != 0) goto LAB_1035f4d14;
      }
      else {
        FUN_1035f5a88(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        FUN_1035f5a88(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
        func_0x000100d563fc(lVar3,uVar10,uVar7);
      }
    }
    else {
      if (0xe < uVar7 >> 0x3c) {
        FUN_1035f5a88(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
        FUN_1035f5a88(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
LAB_1035f4d14:
        func_0x000100d563fc(lVar8,uVar9,uVar5);
        lVar3 = *param_1;
        lVar6 = *param_2;
        lVar8 = param_2[1];
        func_0x0001035f98e4(lVar3,(char)param_1[1]);
        func_0x0001035f98e4(lVar6,(char)lVar8);
        if (lVar3 == lVar6) {
          lVar8 = param_1[2];
          func_0x000100e25fcc(lVar8,param_1[3],param_2[2],param_2[3]);
          uVar1 = (uint)lVar8;
          goto LAB_1035f4e90;
        }
        goto LAB_1035f4e8c;
      }
LAB_1035f4d6c:
      FUN_1035f5a88(&lStack_290,auStack_450,0x112db6f48,&UNK_10d969b40);
      FUN_1035f5a88(&lStack_3e0,auStack_450,0x112db6f48,&UNK_10d969b40);
      func_0x000100d563fc(lVar8,uVar9,uVar5);
      lVar8 = lVar3;
      uVar9 = uVar10;
      uVar5 = uVar7;
    }
    func_0x000100d563fc(lVar8,uVar9,uVar5);
  }
LAB_1035f4e8c:
  uVar1 = 0;
LAB_1035f4e90:
  return uVar1 & 1;
}



/* Entry: 1035f5a88; end: 1035f5acf;  */

undefined8 FUN_1035f5a88(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1035f5ad0; end: 1035f5c4f;  */

void FUN_1035f5ad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d460 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5b28;
  func_0x000107c61520(&UNK_10dbe5b28,&UNK_11066c308);
  puRam0000000112f7d460 = puVar1;
  return;
}



/* Entry: 1035f5c50; end: 1035f5c73;  */

void FUN_1035f5c50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f5c74();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035f5c74; end: 1035f5cb3;  */

void FUN_1035f5c74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5b00;
  func_0x000107c61520(&UNK_10dbe5b00,&UNK_11066c308);
  puRam0000000112f7d4a0 = puVar1;
  return;
}



/* Entry: 1035f5cb4; end: 1035f5ccb;  */

void FUN_1035f5cb4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f5ad0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e0b78)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f5ccc; end: 1035f5d0b;  */

void FUN_1035f5ccc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5b68;
  func_0x000107c61520(&UNK_10dbe5b68,&UNK_11066c308);
  puRam0000000112f7d4a8 = puVar1;
  return;
}



/* Entry: 1035f5d0c; end: 1035f5d2f;  */

void FUN_1035f5d0c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f5d30();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035f5d30; end: 1035f5d6f;  */

void FUN_1035f5d30(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5bd8;
  func_0x000107c61520(&UNK_10dbe5bd8,&UNK_11066c418);
  puRam0000000112f7d4b0 = puVar1;
  return;
}



/* Entry: 1035f5d70; end: 1035f5d83;  */

void FUN_1035f5d70(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035f5b50)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035f5d84();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f5d84; end: 1035f5dc3;  */

void FUN_1035f5d84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe5b90;
  func_0x000107c61520(&DAT_10dbe5b90,&UNK_11066c418);
  puRam0000000112f7d4b8 = puVar1;
  return;
}



/* Entry: 1035f5dc4; end: 1035f5dc7;  */

void FUN_1035f5dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5c40;
  func_0x000107c61520(&UNK_10dbe5c40,&UNK_11066c418);
  puRam0000000112f7d4c0 = puVar1;
  return;
}



/* Entry: 1035f5dc8; end: 1035f5e07;  */

void FUN_1035f5dc8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5c40;
  func_0x000107c61520(&UNK_10dbe5c40,&UNK_11066c418);
  puRam0000000112f7d4c0 = puVar1;
  return;
}



/* Entry: 1035f5e08; end: 1035f5e2b;  */

void FUN_1035f5e08(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f5e2c();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1035f5e2c; end: 1035f5e6b;  */

void FUN_1035f5e2c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5cb0;
  func_0x000107c61520(&UNK_10dbe5cb0,&UNK_11066c4a0);
  puRam0000000112f7d4c8 = puVar1;
  return;
}



/* Entry: 1035f5e6c; end: 1035f5e7f;  */

void FUN_1035f5e6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1035f5c10)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1035f5eb0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f5e80; end: 1035f5eaf;  */

void FUN_1035f5e80(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f5eb0; end: 1035f5eef;  */

void FUN_1035f5eb0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe5c68;
  func_0x000107c61520(&DAT_10dbe5c68,&UNK_11066c4a0);
  puRam0000000112f7d4d0 = puVar1;
  return;
}



/* Entry: 1035f5ef0; end: 1035f5ef3;  */

void FUN_1035f5ef0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5d18;
  func_0x000107c61520(&UNK_10dbe5d18,&UNK_11066c4a0);
  puRam0000000112f7d4d8 = puVar1;
  return;
}



/* Entry: 1035f5ef4; end: 1035f5f33;  */

void FUN_1035f5ef4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d4d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe5d18;
  func_0x000107c61520(&UNK_10dbe5d18,&UNK_11066c4a0);
  puRam0000000112f7d4d8 = puVar1;
  return;
}



/* Entry: 1035f5f34; end: 1035f5f5f;  */

void FUN_1035f5f34(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1035f5f60; end: 1035f600b;  */

undefined8 * FUN_1035f5f60(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1035f600c; end: 1035f6053;  */

undefined8 * FUN_1035f600c(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1035f6054; end: 1035f60eb;  */

int FUN_1035f6054(int *param_1,int param_2)

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



/* Entry: 1035f60ec; end: 1035f6193;  */

void FUN_1035f60ec(undefined8 *param_1)

{
  FUN_1035f6194(*param_1,param_1[1],param_1[2],param_1[3],param_1[4],param_1[5],param_1[6],
                param_1[7],param_1[8],param_1[9],param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],
                param_1[0xe],param_1[0xf],param_1[0x10],param_1[0x11],param_1[0x12],param_1[0x13],
                param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],param_1[0x18],param_1[0x19],
                param_1[0x1a],param_1[0x1b],param_1[0x1c],param_1[0x1d],param_1[0x1e],param_1[0x1f],
                param_1[0x20],param_1[0x21],param_1[0x22],param_1[0x23],param_1[0x24],param_1[0x25],
                param_1[0x26],param_1[0x27],param_1[0x28],param_1[0x29],param_1[0x2a],param_1[0x2b],
                param_1[0x2c],param_1[0x2d],&SUB_10006c090,&SUB_101553ccc,&SUB_10159fa64);
  return;
}



/* Entry: 1035f6194; end: 1035f6a73;  */

void FUN_1035f6194(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27,undefined8 param_28,
                  undefined8 param_29,undefined8 param_30,undefined8 param_31,undefined8 param_32,
                  undefined8 param_33,undefined8 param_34,undefined8 param_35,undefined8 param_36,
                  undefined8 param_37,undefined8 param_38,undefined8 param_39,undefined8 param_40,
                  undefined8 param_41,undefined8 param_42,undefined8 param_43,undefined8 param_44,
                  undefined8 param_45,undefined8 param_46,code *param_47,undefined8 param_48,
                  code *UNRECOVERED_JUMPTABLE)

{
  if ((param_4 >> 0x3d & 1) == 0) {
    (*param_47)(param_3,param_4);
    func_0x0001035f63d8(param_5,param_6,param_7,param_8,param_9,param_10,param_11,param_12,param_13,
                        param_14,param_15,param_16,param_17,param_18,param_47,param_48);
  }
  else {
    (*param_47)(param_5,param_6);
    func_0x0001035f63d8(param_7,param_8,param_9,param_10,param_11,param_12,param_13,param_14,
                        param_15,param_16,param_17,param_18,param_19,param_20,param_47,param_48);
    func_0x0001035f63d8(param_21,param_22,param_23,param_24,param_25,param_26,param_27,param_28,
                        param_29,param_30,param_31,param_32,param_33,param_34,param_47,param_48);
    (*UNRECOVERED_JUMPTABLE)(param_35,param_36,param_37);
    (*UNRECOVERED_JUMPTABLE)(param_38,param_39,param_40);
    (*UNRECOVERED_JUMPTABLE)(param_41,param_42,param_43);
    param_19 = param_44;
    param_20 = param_45;
    param_21 = param_46;
  }
                    /* WARNING: Could not recover jumptable at 0x0001035f63d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_19,param_20,param_21);
  return;
}



/* Entry: 1035f6a74; end: 1035f6a7b;  */

void FUN_1035f6a74(undefined8 param_1,undefined8 param_2)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf0a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__memcpy_11034c658)(param_1,param_2,0x170);
  return;
}



/* Entry: 1035f6a7c; end: 1035f6b8f;  */

undefined8 * FUN_1035f6a7c(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  undefined8 uVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 uVar48;
  undefined8 uVar49;
  
  uVar9 = *param_1;
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  uVar2 = param_1[3];
  uVar6 = param_1[4];
  uVar3 = param_1[5];
  uVar7 = param_1[6];
  uVar10 = param_1[7];
  uVar12 = param_1[9];
  uVar11 = param_1[8];
  uVar14 = param_1[0xb];
  uVar13 = param_1[10];
  uVar16 = param_1[0xd];
  uVar15 = param_1[0xc];
  uVar18 = param_1[0xf];
  uVar17 = param_1[0xe];
  uVar20 = param_1[0x11];
  uVar19 = param_1[0x10];
  uVar22 = param_1[0x13];
  uVar21 = param_1[0x12];
  uVar24 = param_1[0x15];
  uVar23 = param_1[0x14];
  uVar26 = param_1[0x17];
  uVar25 = param_1[0x16];
  uVar28 = param_1[0x19];
  uVar27 = param_1[0x18];
  uVar30 = param_1[0x1b];
  uVar29 = param_1[0x1a];
  uVar32 = param_1[0x1d];
  uVar31 = param_1[0x1c];
  uVar34 = param_1[0x1f];
  uVar33 = param_1[0x1e];
  uVar36 = param_1[0x21];
  uVar35 = param_1[0x20];
  uVar38 = param_1[0x23];
  uVar37 = param_1[0x22];
  uVar40 = param_1[0x25];
  uVar39 = param_1[0x24];
  uVar42 = param_1[0x27];
  uVar41 = param_1[0x26];
  uVar44 = param_1[0x29];
  uVar43 = param_1[0x28];
  uVar46 = param_1[0x2b];
  uVar45 = param_1[0x2a];
  uVar4 = param_1[0x2c];
  uVar8 = param_1[0x2d];
  uVar47 = *param_2;
  uVar49 = param_2[3];
  uVar48 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar47;
  param_1[3] = uVar49;
  param_1[2] = uVar48;
  uVar47 = param_2[4];
  uVar49 = param_2[7];
  uVar48 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar47;
  param_1[7] = uVar49;
  param_1[6] = uVar48;
  uVar47 = param_2[8];
  uVar49 = param_2[0xb];
  uVar48 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar47;
  param_1[0xb] = uVar49;
  param_1[10] = uVar48;
  uVar47 = param_2[0xc];
  uVar49 = param_2[0xf];
  uVar48 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar47;
  param_1[0xf] = uVar49;
  param_1[0xe] = uVar48;
  uVar47 = param_2[0x10];
  uVar49 = param_2[0x13];
  uVar48 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar47;
  param_1[0x13] = uVar49;
  param_1[0x12] = uVar48;
  uVar47 = param_2[0x14];
  uVar49 = param_2[0x17];
  uVar48 = param_2[0x16];
  param_1[0x15] = param_2[0x15];
  param_1[0x14] = uVar47;
  param_1[0x17] = uVar49;
  param_1[0x16] = uVar48;
  uVar47 = param_2[0x18];
  uVar49 = param_2[0x1b];
  uVar48 = param_2[0x1a];
  param_1[0x19] = param_2[0x19];
  param_1[0x18] = uVar47;
  param_1[0x1b] = uVar49;
  param_1[0x1a] = uVar48;
  uVar47 = param_2[0x1c];
  uVar49 = param_2[0x1f];
  uVar48 = param_2[0x1e];
  param_1[0x1d] = param_2[0x1d];
  param_1[0x1c] = uVar47;
  param_1[0x1f] = uVar49;
  param_1[0x1e] = uVar48;
  uVar47 = param_2[0x20];
  uVar49 = param_2[0x23];
  uVar48 = param_2[0x22];
  param_1[0x21] = param_2[0x21];
  param_1[0x20] = uVar47;
  param_1[0x23] = uVar49;
  param_1[0x22] = uVar48;
  uVar47 = param_2[0x24];
  uVar49 = param_2[0x27];
  uVar48 = param_2[0x26];
  param_1[0x25] = param_2[0x25];
  param_1[0x24] = uVar47;
  param_1[0x27] = uVar49;
  param_1[0x26] = uVar48;
  uVar47 = param_2[0x28];
  uVar49 = param_2[0x2b];
  uVar48 = param_2[0x2a];
  param_1[0x29] = param_2[0x29];
  param_1[0x28] = uVar47;
  param_1[0x2b] = uVar49;
  param_1[0x2a] = uVar48;
  uVar47 = param_2[0x2c];
  param_1[0x2d] = param_2[0x2d];
  param_1[0x2c] = uVar47;
  FUN_1035f6194(uVar9,uVar1,uVar5,uVar2,uVar6,uVar3,uVar7,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,
                uVar16,uVar17,uVar18,uVar19,uVar20,uVar21,uVar22,uVar23,uVar24,uVar25,uVar26,uVar27,
                uVar28,uVar29,uVar30,uVar31,uVar32,uVar33,uVar34,uVar35,uVar36,uVar37,uVar38,uVar39,
                uVar40,uVar41,uVar42,uVar43,uVar44,uVar45,uVar46,uVar4,uVar8,&SUB_10006c090,
                &SUB_101553ccc,&SUB_10159fa64);
  return param_1;
}



/* Entry: 1035f6b90; end: 1035f6d03;  */

int FUN_1035f6b90(int *param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x5c] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = (uint)(*(ulong *)(param_1 + 2) >> 1);
  uVar2 = 0xffffffff;
  if (0x80000000 < uVar1) {
    uVar2 = ~uVar1;
  }
  return uVar2 + 1;
}



/* Entry: 1035f6d04; end: 1035f6dc3;  */

/* WARNING: Possible PIC construction at 0x0001035f6d1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f6d4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f6d7c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f6d20) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d30) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d50) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d60) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d68) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d80) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d90) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d98) */
/* WARNING: Removing unreachable block (ram,0x0001035f6db4) */
/* WARNING: Removing unreachable block (ram,0x0001035f6da8) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d78) */
/* WARNING: Removing unreachable block (ram,0x0001035f6d48) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035f6d04(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x18) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035f6dc4; end: 1035f746f;  */

undefined8 * FUN_1035f6dc4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar2 = param_2[2];
  uVar3 = param_2[3];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_2[5];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[4];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[4] = uVar2;
    param_1[5] = uVar1;
    uVar1 = param_2[8];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
      uVar2 = param_2[7];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[7] = uVar2;
      param_1[8] = uVar1;
    }
    else {
      uVar2 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = uVar2;
      param_1[8] = param_2[8];
    }
    uVar1 = param_2[0xb];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar2 = param_2[10];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[10] = uVar2;
      param_1[0xb] = uVar1;
    }
    else {
      uVar2 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar2;
      param_1[0xb] = param_2[0xb];
    }
    uVar1 = param_2[0xe];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar2 = param_2[0xd];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xd] = uVar2;
      param_1[0xe] = uVar1;
    }
    else {
      uVar2 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar2;
      param_1[0xe] = param_2[0xe];
    }
    uVar1 = param_2[0x11];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar2 = param_2[0x10];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x10] = uVar2;
      param_1[0x11] = uVar1;
    }
    else {
      uVar2 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar2;
      param_1[0x11] = param_2[0x11];
    }
  }
  else {
    uVar2 = param_2[0xc];
    uVar4 = param_2[0xf];
    uVar3 = param_2[0xe];
    param_1[0xd] = param_2[0xd];
    param_1[0xc] = uVar2;
    param_1[0xf] = uVar4;
    param_1[0xe] = uVar3;
    uVar2 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar2;
    uVar2 = param_2[4];
    uVar4 = param_2[7];
    uVar3 = param_2[6];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    param_1[7] = uVar4;
    param_1[6] = uVar3;
    uVar4 = param_2[8];
    uVar3 = param_2[0xb];
    uVar2 = param_2[10];
    param_1[9] = param_2[9];
    param_1[8] = uVar4;
    param_1[0xb] = uVar3;
    param_1[10] = uVar2;
  }
  uVar1 = param_2[0x14];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x13];
    param_1[0x12] = param_2[0x12];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x13] = uVar2;
    param_1[0x14] = uVar1;
  }
  else {
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    param_1[0x14] = param_2[0x14];
  }
  return param_1;
}



/* Entry: 1035f7470; end: 1035f76b3;  */

undefined8 * FUN_1035f7470(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar4 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if ((ulong)param_1[5] >> 0x3c < 0xf) {
    uVar3 = param_2[5];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[4];
      param_1[4] = param_2[4];
      param_1[5] = uVar3;
      func_0x00010006c090(uVar1);
      if ((ulong)param_1[8] >> 0x3c < 0xf) {
        uVar3 = param_2[8];
        if (0xe < uVar3 >> 0x3c) {
          func_0x000101599dcc(param_1 + 6);
          goto LAB_1035f7564;
        }
        *(undefined4 *)(param_1 + 6) = *(undefined4 *)(param_2 + 6);
        uVar1 = param_1[7];
        param_1[7] = param_2[7];
        param_1[8] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_1035f7564:
        uVar1 = param_2[6];
        param_1[7] = param_2[7];
        param_1[6] = uVar1;
        param_1[8] = param_2[8];
      }
      if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
        uVar3 = param_2[0xb];
        if (0xe < uVar3 >> 0x3c) {
          func_0x000101599dcc(param_1 + 9);
          goto LAB_1035f75dc;
        }
        *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
        uVar1 = param_1[10];
        param_1[10] = param_2[10];
        param_1[0xb] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_1035f75dc:
        uVar1 = param_2[9];
        param_1[10] = param_2[10];
        param_1[9] = uVar1;
        param_1[0xb] = param_2[0xb];
      }
      if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
        uVar3 = param_2[0xe];
        if (0xe < uVar3 >> 0x3c) {
          func_0x000101599dcc(param_1 + 0xc);
          goto LAB_1035f7630;
        }
        *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
        uVar1 = param_1[0xd];
        param_1[0xd] = param_2[0xd];
        param_1[0xe] = uVar3;
        func_0x00010006c090(uVar1);
      }
      else {
LAB_1035f7630:
        uVar1 = param_2[0xc];
        param_1[0xd] = param_2[0xd];
        param_1[0xc] = uVar1;
        param_1[0xe] = param_2[0xe];
      }
      if ((ulong)param_1[0x11] >> 0x3c < 0xf) {
        uVar3 = param_2[0x11];
        if (uVar3 >> 0x3c < 0xf) {
          *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
          uVar1 = param_1[0x10];
          param_1[0x10] = param_2[0x10];
          param_1[0x11] = uVar3;
          func_0x00010006c090(uVar1);
          goto LAB_1035f74f0;
        }
        func_0x000101599dcc(param_1 + 0xf);
      }
      uVar1 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar1;
      param_1[0x11] = param_2[0x11];
      goto LAB_1035f74f0;
    }
    FUN_1035ecb74(param_1 + 4);
  }
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar2 = param_2[0xe];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar1;
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar2;
  uVar1 = param_2[0x10];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar2;
  uVar4 = param_2[8];
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar4;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
LAB_1035f74f0:
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    if (uVar3 >> 0x3c < 0xf) {
      uVar1 = param_1[0x13];
      uVar2 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar2;
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x00010159d670(param_1 + 0x12);
  }
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



/* Entry: 1035f76b4; end: 1035f778f;  */

int FUN_1035f76b4(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 6) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035f7790; end: 1035f790f;  */

/* WARNING: Possible PIC construction at 0x0001035f77a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f77d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f7808: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f7838: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f7868: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f7898: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f78c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f783c) */
/* WARNING: Removing unreachable block (ram,0x0001035f784c) */
/* WARNING: Removing unreachable block (ram,0x0001035f7854) */
/* WARNING: Removing unreachable block (ram,0x0001035f786c) */
/* WARNING: Removing unreachable block (ram,0x0001035f787c) */
/* WARNING: Removing unreachable block (ram,0x0001035f7884) */
/* WARNING: Removing unreachable block (ram,0x0001035f7894) */
/* WARNING: Removing unreachable block (ram,0x0001035f7864) */
/* WARNING: Removing unreachable block (ram,0x0001035f77ac) */
/* WARNING: Removing unreachable block (ram,0x0001035f77bc) */
/* WARNING: Removing unreachable block (ram,0x0001035f77dc) */
/* WARNING: Removing unreachable block (ram,0x0001035f77ec) */
/* WARNING: Removing unreachable block (ram,0x0001035f77f4) */
/* WARNING: Removing unreachable block (ram,0x0001035f780c) */
/* WARNING: Removing unreachable block (ram,0x0001035f781c) */
/* WARNING: Removing unreachable block (ram,0x0001035f7824) */
/* WARNING: Removing unreachable block (ram,0x0001035f789c) */
/* WARNING: Removing unreachable block (ram,0x0001035f78ac) */
/* WARNING: Removing unreachable block (ram,0x0001035f78b4) */
/* WARNING: Removing unreachable block (ram,0x0001035f78cc) */
/* WARNING: Removing unreachable block (ram,0x0001035f78dc) */
/* WARNING: Removing unreachable block (ram,0x0001035f78e4) */
/* WARNING: Removing unreachable block (ram,0x0001035f7900) */
/* WARNING: Removing unreachable block (ram,0x0001035f78f4) */
/* WARNING: Removing unreachable block (ram,0x0001035f78c4) */
/* WARNING: Removing unreachable block (ram,0x0001035f7834) */
/* WARNING: Removing unreachable block (ram,0x0001035f7804) */
/* WARNING: Removing unreachable block (ram,0x0001035f77d4) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1035f7790(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = *(ulong *)(param_1 + 0x20);
  uVar2 = (uint)(*(ulong *)(param_1 + 0x28) >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = *(ulong *)(param_1 + 0x28) & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 1035f7910; end: 1035f8caf;  */

undefined8 * FUN_1035f7910(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  uVar2 = param_2[4];
  uVar3 = param_2[5];
  func_0x00010006c00c(uVar2,uVar3);
  param_1[4] = uVar2;
  param_1[5] = uVar3;
  uVar1 = param_2[7];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[6];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[6] = uVar2;
    param_1[7] = uVar1;
    uVar1 = param_2[10];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_2 + 8);
      uVar2 = param_2[9];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[9] = uVar2;
      param_1[10] = uVar1;
    }
    else {
      uVar2 = param_2[8];
      param_1[9] = param_2[9];
      param_1[8] = uVar2;
      param_1[10] = param_2[10];
    }
    uVar1 = param_2[0xd];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xb) = *(undefined4 *)(param_2 + 0xb);
      uVar2 = param_2[0xc];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xc] = uVar2;
      param_1[0xd] = uVar1;
    }
    else {
      uVar2 = param_2[0xb];
      param_1[0xc] = param_2[0xc];
      param_1[0xb] = uVar2;
      param_1[0xd] = param_2[0xd];
    }
    uVar1 = param_2[0x10];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xe) = *(undefined4 *)(param_2 + 0xe);
      uVar2 = param_2[0xf];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0xf] = uVar2;
      param_1[0x10] = uVar1;
    }
    else {
      uVar2 = param_2[0xe];
      param_1[0xf] = param_2[0xf];
      param_1[0xe] = uVar2;
      param_1[0x10] = param_2[0x10];
    }
    uVar1 = param_2[0x13];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x11) = *(undefined4 *)(param_2 + 0x11);
      uVar2 = param_2[0x12];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x12] = uVar2;
      param_1[0x13] = uVar1;
    }
    else {
      uVar2 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar2;
      param_1[0x13] = param_2[0x13];
    }
  }
  else {
    uVar2 = param_2[0xe];
    uVar4 = param_2[0x11];
    uVar3 = param_2[0x10];
    param_1[0xf] = param_2[0xf];
    param_1[0xe] = uVar2;
    param_1[0x11] = uVar4;
    param_1[0x10] = uVar3;
    uVar2 = param_2[0x12];
    param_1[0x13] = param_2[0x13];
    param_1[0x12] = uVar2;
    uVar2 = param_2[6];
    uVar4 = param_2[9];
    uVar3 = param_2[8];
    param_1[7] = param_2[7];
    param_1[6] = uVar2;
    param_1[9] = uVar4;
    param_1[8] = uVar3;
    uVar4 = param_2[10];
    uVar3 = param_2[0xd];
    uVar2 = param_2[0xc];
    param_1[0xb] = param_2[0xb];
    param_1[10] = uVar4;
    param_1[0xd] = uVar3;
    param_1[0xc] = uVar2;
  }
  uVar1 = param_2[0x15];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x14];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x14] = uVar2;
    param_1[0x15] = uVar1;
    uVar1 = param_2[0x18];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x16) = *(undefined4 *)(param_2 + 0x16);
      uVar2 = param_2[0x17];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x17] = uVar2;
      param_1[0x18] = uVar1;
    }
    else {
      uVar2 = param_2[0x16];
      param_1[0x17] = param_2[0x17];
      param_1[0x16] = uVar2;
      param_1[0x18] = param_2[0x18];
    }
    uVar1 = param_2[0x1b];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x19) = *(undefined4 *)(param_2 + 0x19);
      uVar2 = param_2[0x1a];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1a] = uVar2;
      param_1[0x1b] = uVar1;
    }
    else {
      uVar2 = param_2[0x19];
      param_1[0x1a] = param_2[0x1a];
      param_1[0x19] = uVar2;
      param_1[0x1b] = param_2[0x1b];
    }
    uVar1 = param_2[0x1e];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_2 + 0x1c);
      uVar2 = param_2[0x1d];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x1d] = uVar2;
      param_1[0x1e] = uVar1;
    }
    else {
      uVar2 = param_2[0x1c];
      param_1[0x1d] = param_2[0x1d];
      param_1[0x1c] = uVar2;
      param_1[0x1e] = param_2[0x1e];
    }
    uVar1 = param_2[0x21];
    if (uVar1 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1f) = *(undefined4 *)(param_2 + 0x1f);
      uVar2 = param_2[0x20];
      func_0x00010006c00c(uVar2,uVar1);
      param_1[0x20] = uVar2;
      param_1[0x21] = uVar1;
    }
    else {
      uVar2 = param_2[0x1f];
      param_1[0x20] = param_2[0x20];
      param_1[0x1f] = uVar2;
      param_1[0x21] = param_2[0x21];
    }
  }
  else {
    uVar2 = param_2[0x1c];
    uVar4 = param_2[0x1f];
    uVar3 = param_2[0x1e];
    param_1[0x1d] = param_2[0x1d];
    param_1[0x1c] = uVar2;
    param_1[0x1f] = uVar4;
    param_1[0x1e] = uVar3;
    uVar2 = param_2[0x20];
    param_1[0x21] = param_2[0x21];
    param_1[0x20] = uVar2;
    uVar2 = param_2[0x14];
    uVar4 = param_2[0x17];
    uVar3 = param_2[0x16];
    param_1[0x15] = param_2[0x15];
    param_1[0x14] = uVar2;
    param_1[0x17] = uVar4;
    param_1[0x16] = uVar3;
    uVar4 = param_2[0x18];
    uVar3 = param_2[0x1b];
    uVar2 = param_2[0x1a];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar4;
    param_1[0x1b] = uVar3;
    param_1[0x1a] = uVar2;
  }
  uVar1 = param_2[0x24];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x23];
    param_1[0x22] = param_2[0x22];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x23] = uVar2;
    param_1[0x24] = uVar1;
  }
  else {
    uVar2 = param_2[0x22];
    param_1[0x23] = param_2[0x23];
    param_1[0x22] = uVar2;
    param_1[0x24] = param_2[0x24];
  }
  uVar1 = param_2[0x27];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x26];
    param_1[0x25] = param_2[0x25];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x26] = uVar2;
    param_1[0x27] = uVar1;
  }
  else {
    uVar2 = param_2[0x25];
    param_1[0x26] = param_2[0x26];
    param_1[0x25] = uVar2;
    param_1[0x27] = param_2[0x27];
  }
  uVar1 = param_2[0x2a];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x29];
    param_1[0x28] = param_2[0x28];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x29] = uVar2;
    param_1[0x2a] = uVar1;
  }
  else {
    uVar2 = param_2[0x28];
    param_1[0x29] = param_2[0x29];
    param_1[0x28] = uVar2;
    param_1[0x2a] = param_2[0x2a];
  }
  uVar1 = param_2[0x2d];
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[0x2c];
    param_1[0x2b] = param_2[0x2b];
    func_0x00010006c00c(uVar2,uVar1);
    param_1[0x2c] = uVar2;
    param_1[0x2d] = uVar1;
  }
  else {
    uVar2 = param_2[0x2b];
    param_1[0x2c] = param_2[0x2c];
    param_1[0x2b] = uVar2;
    param_1[0x2d] = param_2[0x2d];
  }
  return param_1;
}



/* Entry: 1035f8cb0; end: 1035f8dc3;  */

int FUN_1035f8cb0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x5c] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 10) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1035f8dc4; end: 1035f8e83;  */

void FUN_1035f8dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d608 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbe5c84;
  func_0x000107c61520(&DAT_10dbe5c84,&UNK_11066c4a0);
  puRam0000000112f7d608 = puVar1;
  return;
}



/* Entry: 1035f8e84; end: 1035f8f13;  */

void FUN_1035f8e84(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  return;
}



/* Entry: 1035f8f14; end: 1035f8f53;  */

undefined8 FUN_1035f8f14(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1035f8f54; end: 1035f8fd3;  */

int FUN_1035f8f54(long param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  iVar1 = 0;
  if ((uVar2 >> 0x1c & 3) != 0) {
    iVar1 = 0x10 - ((uVar2 >> 0x1c & 3) << 2 | uVar2 >> 0x1e);
  }
  return iVar1;
}



/* Entry: 1035f8fd4; end: 1035f9023;  */

undefined8 FUN_1035f8fd4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f73200;
  func_0x0001000285a8(0x112f73200,&UNK_10dbe5440);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1035f9024; end: 1035f9033;  */

void FUN_1035f9024(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 1035f9034; end: 1035f9063;  */

void FUN_1035f9034(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_1035f9294();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1035f9064; end: 1035f906b;  */

undefined8 FUN_1035f9064(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 1035f906c; end: 1035f90df;  */

void FUN_1035f906c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f7d6b0;
  func_0x0001000285a8(0x112f7d6b0,&UNK_10dbe5ff0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1035f90e0; end: 1035f90eb;  */

void FUN_1035f90e0(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1035f90ec; end: 1035f9197;  */

void FUN_1035f90ec(void)

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



/* Entry: 1035f9198; end: 1035f91ab;  */

bool FUN_1035f9198(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1035f91ac; end: 1035f91f3;  */

void FUN_1035f91ac(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbe6180,0x72,2);
  uRam00000001138096a8 = uStack_38;
  uRam00000001138096a0 = uStack_40;
  uRam00000001138096b8 = uStack_28;
  uRam00000001138096b0 = uStack_30;
  uRam00000001138096c8 = uStack_18;
  uRam00000001138096c0 = uStack_20;
  return;
}



/* Entry: 1035f91f4; end: 1035f9293;  */

/* WARNING: Possible PIC construction at 0x0001035f9240: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035f9250: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035f9244) */
/* WARNING: Removing unreachable block (ram,0x0001035f9254) */

void FUN_1035f91f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f7d6b8 != -1) {
    func_0x000107c61568(0x112f7d6b8,FUN_1035f91ac);
  }
  uVar5 = uRam00000001138096c8;
  uVar4 = uRam00000001138096c0;
  uVar3 = uRam00000001138096b8;
  uVar2 = uRam00000001138096b0;
  uVar1 = uRam00000001138096a8;
  *param_1 = uRam00000001138096a0;
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



/* Entry: 1035f9294; end: 1035f929f;  */

void FUN_1035f9294(void)

{
  return;
}



/* Entry: 1035f92a0; end: 1035f92cb;  */

void FUN_1035f92a0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1035f92cc();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001035f930c();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1035f92cc; end: 1035f934b;  */

void FUN_1035f92cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d6c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe6090;
  func_0x000107c61520(&UNK_10dbe6090,&UNK_11066c630);
  puRam0000000112f7d6c0 = puVar1;
  return;
}



/* Entry: 1035f934c; end: 1035f934f;  */

void FUN_1035f934c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d6d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d6d8;
  func_0x00010002969c(0x112f7d6d8,&UNK_10dbe6018);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d6d0 = puVar2;
  return;
}



/* Entry: 1035f9350; end: 1035f939f;  */

void FUN_1035f9350(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f7d6d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f7d6d8;
  func_0x00010002969c(0x112f7d6d8,&UNK_10dbe6018);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f7d6d0 = puVar2;
  return;
}



/* Entry: 1035f93a0; end: 1035f93a3;  */

void FUN_1035f93a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f7d6e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbe60d0;
  func_0x000107c61520(&UNK_10dbe60d0,&UNK_11066c630);
  puRam0000000112f7d6e0 = puVar1;
  return;
}



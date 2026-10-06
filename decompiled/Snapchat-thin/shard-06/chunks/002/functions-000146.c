/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1045b33dc; end: 1045b34bf;  */

void FUN_1045b33dc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  _swift_beginAccess(param_3 + 0x10,auStack_80,0,0);
  uVar2 = *(ulong *)(param_3 + 0x10);
  uVar3 = *(ulong *)(param_3 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_bridgeObjectRetain(uVar3);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b34c0; end: 1045b34db;  */

undefined1  [16] FUN_1045b34c0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f207f50;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Entry: 1045b34dc; end: 1045b350b;  */

undefined1  [16] FUN_1045b34dc(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045b350c; end: 1045b353f;  */

void FUN_1045b350c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045b3540; end: 1045b3553;  */

undefined8 FUN_1045b3540(void)

{
  return 0x1045b3550;
}



/* Entry: 1045b3554; end: 1045b358b;  */

void FUN_1045b3554(void)

{
  FUN_1045b29d0();
  return;
}



/* Entry: 1045b358c; end: 1045b362b;  */

void FUN_1045b358c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000113087798 != -1) {
    _swift_once(0x113087798,FUN_1045b2e9c);
  }
  uVar5 = uRam0000000113813e18;
  uVar4 = uRam0000000113813e10;
  uVar3 = uRam0000000113813e08;
  uVar2 = uRam0000000113813e00;
  uVar1 = uRam0000000113813df8;
  *param_1 = uRam0000000113813df0;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045b362c; end: 1045b3667;  */

void FUN_1045b362c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130877b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130877b8,&UNK_10dd19728);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045b3668; end: 1045b367b;  */

void FUN_1045b3668(void)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [72];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  _swift_beginAccess(lVar4 + 0x10,auStack_80,0,0);
  uVar2 = *(ulong *)(lVar4 + 0x10);
  uVar3 = *(ulong *)(lVar4 + 0x18);
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    _swift_bridgeObjectRetain(uVar3);
    __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
    _swift_bridgeObjectRelease(uVar3);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b367c; end: 1045b36cf;  */

void FUN_1045b367c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_104560b14(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b36d0; end: 1045b373f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045b36d0(undefined8 *param_1,long *param_2)

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
  
  pbVar9 = (byte *)*param_1;
  pbVar24 = (byte *)param_1[1];
  lVar23 = *param_2;
  uVar16 = param_2[1];
  uVar12 = param_2[2];
  if ((param_1[2] != uVar12) && (FUN_10453dc68(), (uVar12 & 1) == 0)) {
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
    uVar18 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar16 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar13 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar12 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar16 >> 0x3e < 3)) || ((uVar12 = 0, lVar23 != 0 || (uVar16 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar18 == 0) {
        uVar12 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar19 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar19,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar12 = (ulong)(iVar19 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar16 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar19 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar12 == (long)(iVar19 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar18 == 2) {
        uVar12 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar12 = 0;
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
        if (uVar12 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar12 < 1) goto code_r0x000100e26128;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar13 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
          lVar25 = *(long *)(pbVar9 + 0x10);
          unaff_x24 = *(byte **)(pbVar9 + 0x18);
          func_0x000107c5ec30();
          pbVar13 = pbVar9;
          if (pbVar9 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar25,(long)pbVar13)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            pbVar9 = pbVar9 + (lVar25 - (long)pbVar13);
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
        unaff_x20 = (ulong)pbVar24 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar13,lVar23,
                            uVar16);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar16;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar12 == 0);
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
    pbVar14 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar13[0x28] == 0) {
          lVar23 = *(long *)pbVar13;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
          return (byte *)(ulong)((uint)pbVar11 & 1);
        }
        return (byte *)0x0;
      }
      if (bVar26 == 1) {
        if (pbVar13[0x28] != 1) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)(pbVar13 + 8);
        pbVar17 = *(byte **)(pbVar13 + 0x10);
        lVar23 = *(long *)pbVar13;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar14 = pbVar24;
        if ((pbVar9 == pbVar15) && (pbVar24 == pbVar17)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar13[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        lVar23 = *(long *)(pbVar13 + 0x18);
        if ((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) {
          if (((pbVar8[0x10] ^ pbVar13[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 == (byte *)0x0) goto joined_r0x000100e26620;
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
joined_r0x000100e266a4:
          if (((ulong)pbVar22 & 1) == 0) {
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
    lVar25 = *(long *)(pbVar8 + 0x20);
    if (bVar26 < 5) {
      if (bVar26 != 3) {
        if (pbVar13[0x28] != 4) {
          return (byte *)0x0;
        }
        pbVar15 = *(byte **)pbVar13;
        pbVar17 = *(byte **)(pbVar13 + 8);
        if (((pbVar11 == pbVar15) && (pbVar9 == pbVar17)) &&
           (pbVar11 = pbVar24, pbVar14 = pbVar22, pbVar15 = *(byte **)(pbVar13 + 0x10),
           pbVar17 = *(byte **)(pbVar13 + 0x18),
           pbVar24 == *(byte **)(pbVar13 + 0x10) && pbVar22 == *(byte **)(pbVar13 + 0x18))) {
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
      lVar23 = *(long *)(pbVar13 + 0x20);
      if (pbVar24 == (byte *)0x0) {
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
        pbVar14 = pbVar24;
        if ((pbVar9 != pbVar15) || (pbVar24 != pbVar17)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar13 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar13 + 0x18),lVar23,0);
        goto joined_r0x000100e266a4;
      }
joined_r0x000100e26620:
      if (lVar23 == 0) {
        return (byte *)0x1;
      }
      return (byte *)0x0;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar13[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar13 + 0x20);
        lVar23 = *(long *)(pbVar13 + 0x18);
        bVar26 = pbVar13[8] | (byte)lVar23;
        bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
        bVar34 = pbVar13[0x10] | (byte)lVar25;
        bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
        bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
        bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
        bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
        bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
        bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
        bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
                    ) == 0 && *(long *)pbVar13 == 0) {
          return (byte *)0x1;
        }
        return (byte *)0x0;
      }
      if ((pbVar11 == (byte *)0x1) &&
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
          lVar25 == 0)) {
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
      lVar25 = *(long *)(pbVar13 + 0x20);
      lVar23 = *(long *)(pbVar13 + 0x18);
      bVar26 = pbVar13[8] | (byte)lVar23;
      bVar27 = pbVar13[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar13[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar13[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar13[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar13[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar13[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar13[0xf] | (byte)((ulong)lVar23 >> 0x38);
      bVar34 = pbVar13[0x10] | (byte)lVar25;
      bVar35 = pbVar13[0x11] | (byte)((ulong)lVar25 >> 8);
      bVar36 = pbVar13[0x12] | (byte)((ulong)lVar25 >> 0x10);
      bVar37 = pbVar13[0x13] | (byte)((ulong)lVar25 >> 0x18);
      bVar38 = pbVar13[0x14] | (byte)((ulong)lVar25 >> 0x20);
      bVar39 = pbVar13[0x15] | (byte)((ulong)lVar25 >> 0x28);
      bVar40 = pbVar13[0x16] | (byte)((ulong)lVar25 >> 0x30);
      bVar41 = pbVar13[0x17] | (byte)((ulong)lVar25 >> 0x38);
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
    if (pbVar13[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar13 + 8);
    uVar16 = *(ulong *)(pbVar13 + 0x10);
    lVar25 = *(long *)pbVar13;
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



/* Entry: 1045b3740; end: 1045b3763;  */

void FUN_1045b3740(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b3764();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1045b3764; end: 1045b37a3;  */

void FUN_1045b3764(void)

{
  undefined *puVar1;
  
  if (puRam00000001130877a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd19678;
  _swift_getWitnessTable(&UNK_10dd19678,&UNK_11078ace8);
  puRam00000001130877a0 = puVar1;
  return;
}



/* Entry: 1045b37a4; end: 1045b37cf;  */

void FUN_1045b37a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1045b37d0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001039f7488();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1045b37d0; end: 1045b380f;  */

void FUN_1045b37d0(void)

{
  undefined *puVar1;
  
  if (puRam00000001130877a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd196a0;
  _swift_getWitnessTable(&UNK_10dd196a0,&UNK_11078ace8);
  puRam00000001130877a8 = puVar1;
  return;
}



/* Entry: 1045b3810; end: 1045b3813;  */

void FUN_1045b3810(void)

{
  undefined *puVar1;
  
  if (puRam00000001130877b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd196e0;
  _swift_getWitnessTable(&UNK_10dd196e0,&UNK_11078ace8);
  puRam00000001130877b0 = puVar1;
  return;
}



/* Entry: 1045b3814; end: 1045b3853;  */

void FUN_1045b3814(void)

{
  undefined *puVar1;
  
  if (puRam00000001130877b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dd196e0;
  _swift_getWitnessTable(&UNK_10dd196e0,&UNK_11078ace8);
  puRam00000001130877b0 = puVar1;
  return;
}



/* Entry: 1045b3854; end: 1045b387f;  */

void FUN_1045b3854(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 1045b3880; end: 1045b392b;  */

undefined8 * FUN_1045b3880(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00010006c00c(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_2[2];
  _swift_retain();
  return param_1;
}



/* Entry: 1045b392c; end: 1045b3973;  */

undefined8 * FUN_1045b392c(undefined8 *param_1,undefined8 *param_2)

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
  _swift_release(uVar1);
  return param_1;
}



/* Entry: 1045b3974; end: 1045b3a13;  */

int FUN_1045b3974(int *param_1,int param_2)

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



/* Entry: 1045b3a14; end: 1045b3a3f;  */

undefined1  [16] FUN_1045b3a14(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045b3a40; end: 1045b3a73;  */

void FUN_1045b3a40(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045b3a74; end: 1045b3a8f;  */

undefined8 FUN_1045b3a74(void)

{
  return 0x1045b3a84;
}



/* Entry: 1045b3a90; end: 1045b3ab7;  */

void FUN_1045b3a90(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Entry: 1045b3ab8; end: 1045b3ad3;  */

undefined1  [16] FUN_1045b3ab8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045b3ac8;
  return auVar1;
}



/* Entry: 1045b3ad4; end: 1045b3afb;  */

void FUN_1045b3ad4(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  return;
}



/* Entry: 1045b3afc; end: 1045b3b0f;  */

undefined1  [16] FUN_1045b3afc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x1045b3b0c;
  return auVar1;
}



/* Entry: 1045b3b10; end: 1045b3b3b;  */

undefined1  [16] FUN_1045b3b10(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1045b3b3c; end: 1045b3b6f;  */

void FUN_1045b3b3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1045b3b70; end: 1045b3b83;  */

undefined1  [16] FUN_1045b3b70(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1045b3b80;
  return auVar1;
}



/* Entry: 1045b3b84; end: 1045b3bdb;  */

undefined8 FUN_1045b3b84(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = 0;
  if (*(long *)(unaff_x20 + 0x70) != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  FUN_1045b3bdc();
  return uVar1;
}



/* Entry: 1045b3bdc; end: 1045b3c13;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1045b3bdc(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 1045b3c14; end: 1045b3c5f;  */

void FUN_1045b3c14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_1045b3c60(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  *(undefined8 *)(unaff_x20 + 0x78) = param_3;
  *(undefined8 *)(unaff_x20 + 0x80) = param_4;
  return;
}



/* Entry: 1045b3c60; end: 1045b3c97;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1045b3c60(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  uVar1 = (uint)(param_4 >> 0x3e);
  if (uVar1 == 1) {
    param_3 = param_4 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_3);
  return;
}



/* Entry: 1045b3c98; end: 1045b3d23;  */

undefined1  [16] FUN_1045b3c98(undefined8 *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  
  puVar6 = (undefined8 *)0x28;
  if (PTR__swift_coroFrameAlloc_11034f288 == (undefined *)0x0) {
    _malloc();
  }
  else {
    _swift_coroFrameAlloc(0x28,0xccec);
  }
  *param_1 = puVar6;
  puVar6[4] = unaff_x20;
  bVar5 = *(long *)(unaff_x20 + 0x70) != 0;
  uVar1 = 0;
  if (bVar5) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  }
  lVar2 = -0x2000000000000000;
  if (bVar5) {
    lVar2 = *(long *)(unaff_x20 + 0x70);
  }
  uVar3 = 0;
  if (bVar5) {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  }
  uVar4 = 0xc000000000000000;
  if (bVar5) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x80);
  }
  *puVar6 = uVar1;
  puVar6[1] = lVar2;
  puVar6[2] = uVar3;
  puVar6[3] = uVar4;
  FUN_1045b3bdc();
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = FUN_1045b3d24;
  return auVar7;
}



/* Entry: 1045b3d24; end: 1045b3de3;  */

void FUN_1045b3d24(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = param_1[3];
  lVar4 = param_1[4];
  uVar9 = *param_1;
  uVar5 = param_1[1];
  uVar8 = param_1[2];
  uVar2 = *(undefined8 *)(lVar4 + 0x68);
  uVar6 = *(undefined8 *)(lVar4 + 0x70);
  uVar3 = *(undefined8 *)(lVar4 + 0x78);
  uVar7 = *(undefined8 *)(lVar4 + 0x80);
  if ((param_2 & 1) == 0) {
    FUN_1045b3c60(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x68) = uVar9;
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    *(undefined8 *)(lVar4 + 0x78) = uVar8;
    *(undefined8 *)(lVar4 + 0x80) = uVar1;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
    func_0x00010006c00c(uVar8,uVar1);
    FUN_1045b3c60(uVar2,uVar6,uVar3,uVar7);
    *(undefined8 *)(lVar4 + 0x68) = uVar9;
    *(undefined8 *)(lVar4 + 0x70) = uVar5;
    *(undefined8 *)(lVar4 + 0x78) = uVar8;
    *(undefined8 *)(lVar4 + 0x80) = uVar1;
    uVar1 = param_1[2];
    uVar9 = param_1[3];
    _swift_bridgeObjectRelease(param_1[1]);
    func_0x00010006c090(uVar1,uVar9);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(param_1);
  return;
}



/* Entry: 1045b3de4; end: 1045b3e77;  */

bool FUN_1045b3de4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [32];
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar4 = *(long *)(unaff_x20 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_50 = uVar1;
  lStack_48 = lVar4;
  uStack_40 = uVar2;
  uStack_38 = uVar3;
  if (lVar4 == 0) {
    FUN_1045b6614(&uStack_50,auStack_70);
  }
  else {
    FUN_1045b6614(&uStack_50,auStack_70);
    FUN_1045b3c60(uVar1,lVar4,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0;
  }
  FUN_1045b3c60(uVar1,0,uVar2,uVar3);
  return lVar4 != 0;
}



/* Entry: 1045b3e78; end: 1045b3e9f;  */

void FUN_1045b3e78(void)

{
  long unaff_x20;
  
  FUN_1045b3c60(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80));
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  return;
}



/* Entry: 1045b3ea0; end: 1045b3ea7;  */

void FUN_1045b3ea0(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Entry: 1045b3ea8; end: 1045b3ecf;  */

void FUN_1045b3ea8(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Entry: 1045b3ed0; end: 1045b3f0f;  */

undefined1  [16] FUN_1045b3ed0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x30;
  auVar1._0_8_ = 0x1045b3ee0;
  return auVar1;
}



/* Entry: 1045b3f10; end: 1045b3f3b;  */

undefined1  [16] FUN_1045b3f10(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 1045b3f3c; end: 1045b3f6f;  */

void FUN_1045b3f3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 1045b3f70; end: 1045b3f83;  */

undefined1  [16] FUN_1045b3f70(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x1045b3f80;
  return auVar1;
}



/* Entry: 1045b3f84; end: 1045b3fb3;  */

undefined1  [16] FUN_1045b3f84(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 1045b3fb4; end: 1045b3fe7;  */

void FUN_1045b3fb4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 1045b3fe8; end: 1045b403f;  */

undefined1  [16] FUN_1045b3fe8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x1045b3ff8;
  return auVar1;
}



/* Entry: 1045b4040; end: 1045b406b;  */

undefined1  [16] FUN_1045b4040(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045b406c; end: 1045b409f;  */

void FUN_1045b406c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045b40a0; end: 1045b40b3;  */

undefined8 FUN_1045b40a0(void)

{
  return 0x1045b40b0;
}



/* Entry: 1045b40b4; end: 1045b40df;  */

undefined1  [16] FUN_1045b40b4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1045b40e0; end: 1045b4113;  */

void FUN_1045b40e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045b4114; end: 1045b414b;  */

undefined1  [16] FUN_1045b4114(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045b4124;
  return auVar1;
}



/* Entry: 1045b414c; end: 1045b4177;  */

undefined1  [16] FUN_1045b414c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1045b4178; end: 1045b41ab;  */

void FUN_1045b4178(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1045b41ac; end: 1045b41eb;  */

undefined1  [16] FUN_1045b41ac(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1045b41bc;
  return auVar1;
}



/* Entry: 1045b41ec; end: 1045b4213;  */

void FUN_1045b41ec(undefined8 param_1)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  return;
}



/* Entry: 1045b4214; end: 1045b4253;  */

undefined1  [16] FUN_1045b4214(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x40;
  auVar1._0_8_ = 0x1045b4224;
  return auVar1;
}



/* Entry: 1045b4254; end: 1045b427f;  */

undefined1  [16] FUN_1045b4254(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 1045b4280; end: 1045b42b3;  */

void FUN_1045b4280(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 1045b42b4; end: 1045b42c7;  */

undefined1  [16] FUN_1045b42b4(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x1045b42c4;
  return auVar1;
}



/* Entry: 1045b42c8; end: 1045b42f7;  */

undefined1  [16] FUN_1045b42c8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x68);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x68),
                      *(undefined8 *)(unaff_x20 + 0x70));
  return auVar1;
}



/* Entry: 1045b42f8; end: 1045b432b;  */

void FUN_1045b42f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70));
  *(undefined8 *)(unaff_x20 + 0x68) = param_1;
  *(undefined8 *)(unaff_x20 + 0x70) = param_2;
  return;
}



/* Entry: 1045b432c; end: 1045b437f;  */

undefined1  [16] FUN_1045b432c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x68;
  auVar1._0_8_ = 0x1045b433c;
  return auVar1;
}



/* Entry: 1045b4380; end: 1045b43ab;  */

undefined1  [16] FUN_1045b4380(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1045b43ac; end: 1045b43df;  */

void FUN_1045b43ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1045b43e0; end: 1045b43f3;  */

undefined8 FUN_1045b43e0(void)

{
  return 0x1045b43f0;
}



/* Entry: 1045b43f4; end: 1045b441f;  */

undefined1  [16] FUN_1045b43f4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 1045b4420; end: 1045b4453;  */

void FUN_1045b4420(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 1045b4454; end: 1045b4467;  */

undefined1  [16] FUN_1045b4454(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x1045b4464;
  return auVar1;
}



/* Entry: 1045b4468; end: 1045b4497;  */

undefined1  [16] FUN_1045b4468(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1045b4498; end: 1045b44cb;  */

void FUN_1045b4498(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1045b44cc; end: 1045b4523;  */

undefined1  [16] FUN_1045b44cc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1045b44dc;
  return auVar1;
}



/* Entry: 1045b4524; end: 1045b45e3;  */

void FUN_1045b4524(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd19ae0,0x4b,&uStack_48,&lStack_40);
  puRam0000000113813e28 = puStack_38;
  lRam0000000113813e20 = lStack_40;
  puRam0000000113813e38 = puStack_28;
  puRam0000000113813e30 = puStack_30;
  puRam0000000113813e48 = puStack_18;
  puRam0000000113813e40 = puStack_20;
  return;
}



/* Entry: 1045b45e4; end: 1045b4683;  */

void FUN_1045b45e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130877c8 != -1) {
    _swift_once(0x1130877c8,FUN_1045b4524);
  }
  uVar5 = uRam0000000113813e48;
  uVar4 = uRam0000000113813e40;
  uVar3 = uRam0000000113813e38;
  uVar2 = uRam0000000113813e30;
  uVar1 = uRam0000000113813e28;
  *param_1 = uRam0000000113813e20;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045b4684; end: 1045b4843;  */

/* WARNING: Removing unreachable block (ram,0x0001045b4800) */

void FUN_1045b4684(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 != 1) {
            if (lVar1 != 2) goto LAB_1045b4720;
            pcVar5 = *(code **)(param_3 + 0x1a0);
            FUN_1045b6664();
            lVar2 = unaff_x20 + 0x10;
            puVar3 = &UNK_11078b048;
            goto LAB_1045b470c;
          }
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 == 3) {
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0001045b66a4();
            lVar2 = unaff_x20 + 0x18;
            puVar3 = &UNK_110790230;
            goto LAB_1045b470c;
          }
          if (lVar1 != 4) goto LAB_1045b4720;
          pcVar5 = *(code **)(param_3 + 0x150);
        }
LAB_1045b47f0:
        (*pcVar5)();
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar5 = *(code **)(param_3 + 0x198);
            FUN_1045b7960();
            lVar2 = unaff_x20 + 0x68;
            puVar3 = &UNK_11078f270;
          }
          else {
            if (lVar1 != 6) goto LAB_1045b4720;
            pcVar5 = *(code **)(param_3 + 0x1a0);
            func_0x0001045b66e4();
            lVar2 = unaff_x20 + 0x30;
            puVar3 = &UNK_11078b0e8;
          }
        }
        else {
          if (lVar1 != 7) {
            if (lVar1 == 8) {
              pcVar5 = *(code **)(param_3 + 0x150);
              goto LAB_1045b47f0;
            }
            goto LAB_1045b4720;
          }
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x0001045b6724();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_11078fe38;
        }
LAB_1045b470c:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1045b4720:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1045b4844; end: 1045b4a67;  */

void FUN_1045b4844(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  ulong uVar9;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((*(long *)(unaff_x20[2] + 0x10) != 0) && (FUN_10460e73c(unaff_x20[2],2), unaff_x21 != 0)) {
    return;
  }
  if ((*(long *)(unaff_x20[3] + 0x10) != 0) && (FUN_10460e4d4(unaff_x20[3],3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[5];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[0xe];
  if (uVar8 != 0) {
    uVar1 = unaff_x20[0xf];
    uVar2 = unaff_x20[0x10];
    uVar9 = unaff_x20[0xd];
    __ss6HasherV8_combineyySuF(5);
    _swift_bridgeObjectRetain(uVar8);
    func_0x00010006c00c(uVar1,uVar2);
    func_0x0001046048dc(param_1,uVar9,uVar8,uVar1,uVar2);
    FUN_1045b3c60(uVar9,uVar8,uVar1,uVar2);
  }
  if ((*(long *)(unaff_x20[6] + 0x10) != 0) && (FUN_10460e2e0(unaff_x20[6],6), unaff_x21 != 0)) {
    return;
  }
  uVar8 = unaff_x20[7];
  if ((char)unaff_x20[8] == '\x01') {
    if (uVar8 != 0) {
      __ss6HasherV8_combineyySuF(7);
      bVar4 = uVar8 == 2;
      uVar8 = 1;
      if (bVar4) {
        uVar8 = 2;
      }
LAB_1045b49bc:
      __ss6HasherV8_combineyySuF(uVar8);
    }
  }
  else if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    goto LAB_1045b49bc;
  }
  uVar1 = unaff_x20[9];
  uVar2 = unaff_x20[10];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[0xb];
  uVar3 = (uint)(unaff_x20[0xc] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[0xc] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1045b4a40;
    }
    lVar6 = (long)(int)uVar8;
    lVar7 = (long)uVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar8 + 0x10);
    lVar7 = *(long *)(uVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_1045b4a40:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045b4a68; end: 1045b4c77;  */

void FUN_1045b4a68(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  ulong *puVar5;
  code *pcVar6;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar4 = uVar2 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar4 = uVar1 >> 0x38 & 0xf;
  }
  if ((uVar4 == 0) || ((**(code **)(param_3 + 0x70))(uVar2,uVar1,1,param_2,param_3), unaff_x21 == 0)
     ) {
    uVar4 = unaff_x20[2];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      FUN_1045b6664();
      (*pcVar6)(uVar4,2,&UNK_11078b048,uVar2,param_2,param_3);
      uVar2 = uVar4;
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar4 = unaff_x20[3];
    if (*(long *)(uVar4 + 0x10) != 0) {
      pcVar6 = *(code **)(param_3 + 0x118);
      func_0x0001045b66a4();
      (*pcVar6)(uVar4,3,&UNK_110790230,uVar2,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    uVar2 = unaff_x20[5];
    uVar4 = unaff_x20[4] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar4 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar4 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,4,param_2,param_3), unaff_x21 == 0)) &&
       (puVar3 = unaff_x20, FUN_1045b4c78(), unaff_x21 == 0)) {
      puVar5 = (ulong *)unaff_x20[6];
      if (puVar5[2] != 0) {
        pcVar6 = *(code **)(param_3 + 0x118);
        func_0x0001045b66e4();
        (*pcVar6)(puVar5,6,&UNK_11078b0e8,puVar3,param_2,param_3);
        puVar3 = puVar5;
      }
      if (unaff_x20[7] != 0) {
        uStack_58 = (undefined1)unaff_x20[8];
        pcVar6 = *(code **)(param_3 + 0x80);
        uStack_60 = unaff_x20[7];
        func_0x0001045b6724();
        (*pcVar6)(&uStack_60,7,&UNK_11078fe38,puVar3,param_2,param_3);
      }
      uVar2 = unaff_x20[10];
      uVar4 = unaff_x20[9] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar4 = uVar2 >> 0x38 & 0xf;
      }
      if (uVar4 != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[9],uVar2,8,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[0xb],unaff_x20[0xc],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1045b4c78; end: 1045b4cfb;  */

void FUN_1045b4c78(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x70);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x68);
    uStack_48 = *(undefined8 *)(param_1 + 0x80);
    uStack_50 = *(undefined8 *)(param_1 + 0x78);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_1045b7960();
    (*pcVar1)(&uStack_60,5,&UNK_11078f270,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1045b4cfc; end: 1045b4cff;  */

uint FUN_1045b4cfc(ulong *param_1,ulong *param_2)

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
  if ((uVar2 == *param_2 && param_1[1] == param_2[1]) ||
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar2 & 1) != 0)) {
    uVar2 = param_1[2];
    FUN_1045ba584(uVar2,param_2[2]);
    if ((uVar2 & 1) != 0) {
      uVar2 = param_1[3];
      FUN_1045b79ac(uVar2,param_2[3]);
      if ((uVar2 & 1) != 0) {
        uVar2 = param_1[4];
        if (((uVar2 == param_2[4]) && (param_1[5] == param_2[5])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar2 & 1) != 0)) {
          uVar4 = param_1[0xe];
          uVar2 = param_1[0xd];
          uVar9 = param_1[0x10];
          uVar7 = param_1[0xf];
          uVar6 = param_2[0xe];
          uVar5 = param_2[0xd];
          uVar10 = param_2[0x10];
          uVar8 = param_2[0xf];
          uStack_a0 = uVar5;
          uStack_98 = uVar6;
          uStack_90 = uVar8;
          uStack_88 = uVar10;
          uStack_80 = uVar2;
          uStack_78 = uVar4;
          uStack_70 = uVar7;
          uStack_68 = uVar9;
          if (uVar4 == 0) {
            if (uVar6 != 0) goto LAB_1045b6a60;
            FUN_1045b6614(&uStack_80,auStack_c0);
            FUN_1045b6614(&uStack_a0,auStack_c0);
LAB_1045b6abc:
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
            uVar2 = param_1[6];
            FUN_1045ba7c4(uVar2,param_2[6]);
            if ((uVar2 & 1) != 0) {
              uVar2 = param_1[7];
              uVar4 = param_2[7];
              if ((char)param_2[8] == '\x01') {
                if (uVar4 == 0) {
                  if (uVar2 == 0) goto LAB_1045b6b90;
                }
                else if (uVar4 == 1) {
                  if (uVar2 == 1) {
LAB_1045b6b90:
                    uVar2 = param_1[9];
                    if (((uVar2 == param_2[9]) && (param_1[10] == param_2[10])) ||
                       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                                  (), (uVar2 & 1) != 0)) {
                      uVar2 = param_1[0xb];
                      func_0x000100e25fcc(uVar2,param_1[0xc],param_2[0xb],param_2[0xc]);
                      uVar1 = (uint)uVar2;
                      goto LAB_1045b6b50;
                    }
                  }
                }
                else if (uVar2 == 2) goto LAB_1045b6b90;
              }
              else if (uVar2 == uVar4) goto LAB_1045b6b90;
            }
          }
          else {
            if (uVar6 == 0) {
LAB_1045b6a60:
              FUN_1045b6614(&uStack_80,auStack_c0);
              FUN_1045b6614(&uStack_a0,auStack_c0);
              FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
              uVar2 = uVar5;
              uVar4 = uVar6;
              uVar7 = uVar8;
              uVar9 = uVar10;
            }
            else if (((uVar2 == uVar5) && (uVar4 == uVar6)) ||
                    (uVar3 = uVar2,
                    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                              (uVar2,uVar4,uVar5,uVar6,0), (uVar3 & 1) != 0)) {
              FUN_1045b6614(&uStack_80,auStack_c0);
              FUN_1045b6614(&uStack_a0,auStack_c0);
              uVar3 = uVar7;
              func_0x000100e25fcc(uVar7,uVar9,uVar8,uVar10);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
              if ((uVar3 & 1) != 0) goto LAB_1045b6abc;
            }
            else {
              FUN_1045b6614(&uStack_80,auStack_c0);
              FUN_1045b6614(&uStack_a0,auStack_c0);
              FUN_1045b3c60(uVar5,uVar6,uVar8,uVar10);
            }
            FUN_1045b3c60(uVar2,uVar4,uVar7,uVar9);
          }
        }
      }
    }
  }
  uVar1 = 0;
LAB_1045b6b50:
  return uVar1 & 1;
}



/* Entry: 1045b4d00; end: 1045b4d8f;  */

/* WARNING: Removing unreachable block (ram,0x0001045b4d50) */

void FUN_1045b4d00(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045b4844(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b4d90; end: 1045b4def;  */

void FUN_1045b4d90(undefined8 *param_1)

{
  undefined *puVar1;
  
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[3] = puVar1;
  param_1[4] = 0;
  param_1[5] = 0xe000000000000000;
  param_1[6] = puVar1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[9] = 0;
  param_1[10] = 0xe000000000000000;
  param_1[0xc] = 0xc000000000000000;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  return;
}



/* Entry: 1045b4df0; end: 1045b4e1f;  */

undefined1  [16] FUN_1045b4df0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x58),
                      *(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Entry: 1045b4e20; end: 1045b4e53;  */

void FUN_1045b4e20(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x58) = param_1;
  *(undefined8 *)(unaff_x20 + 0x60) = param_2;
  return;
}



/* Entry: 1045b4e54; end: 1045b4e67;  */

undefined1  [16] FUN_1045b4e54(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x58;
  auVar1._0_8_ = 0x1045b4e64;
  return auVar1;
}



/* Entry: 1045b4e68; end: 1045b4e7b;  */

void FUN_1045b4e68(void)

{
  FUN_1045b4684();
  return;
}



/* Entry: 1045b4e7c; end: 1045b4ecb;  */

void FUN_1045b4e7c(void)

{
  FUN_1045b4a68();
  return;
}



/* Entry: 1045b4ecc; end: 1045b4f6b;  */

void FUN_1045b4ecc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130877c8 != -1) {
    _swift_once(0x1130877c8,FUN_1045b4524);
  }
  uVar5 = uRam0000000113813e48;
  uVar4 = uRam0000000113813e40;
  uVar3 = uRam0000000113813e38;
  uVar2 = uRam0000000113813e30;
  uVar1 = uRam0000000113813e28;
  *param_1 = uRam0000000113813e20;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045b4f6c; end: 1045b4fa7;  */

void FUN_1045b4f6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113087860;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113087860,&UNK_10dd19a58);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 1045b4fa8; end: 1045b51c3;  */

/* WARNING: Removing unreachable block (ram,0x0001045b5024) */

void FUN_1045b4fa8(void)

{
  undefined8 *unaff_x20;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
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
  __ss6HasherV5_seedABSi_tcfC(&uStack_110,0);
  uStack_138 = uStack_e8;
  uStack_140 = uStack_f0;
  uStack_128 = uStack_d8;
  uStack_130 = uStack_e0;
  uStack_120 = uStack_d0;
  uStack_158 = uStack_108;
  uStack_160 = uStack_110;
  uStack_148 = uStack_f8;
  uStack_150 = uStack_100;
  FUN_1045b4844(&uStack_160);
  uStack_d8 = uStack_128;
  uStack_e0 = uStack_130;
  uStack_d0 = uStack_120;
  uStack_f8 = uStack_148;
  uStack_100 = uStack_150;
  uStack_e8 = uStack_138;
  uStack_f0 = uStack_140;
  uStack_108 = uStack_158;
  uStack_110 = uStack_160;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 1045b51c4; end: 1045b5243;  */

uint FUN_1045b51c4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1045b691c(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 1045b5244; end: 1045b526b;  */

undefined * FUN_1045b5244(void)

{
  return &UNK_11078ad70;
}



/* Entry: 1045b526c; end: 1045b532b;  */

void FUN_1045b526c(void)

{
  long lVar1;
  undefined8 uStack_48;
  long lStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  undefined *puStack_28;
  undefined *puStack_20;
  undefined *puStack_18;
  
  lVar1 = 0;
  FUN_10458f088();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_104555d34(&UNK_10dd19a70,0x6d,&uStack_48,&lStack_40);
  puRam0000000113813e58 = puStack_38;
  lRam0000000113813e50 = lStack_40;
  puRam0000000113813e68 = puStack_28;
  puRam0000000113813e60 = puStack_30;
  puRam0000000113813e78 = puStack_18;
  puRam0000000113813e70 = puStack_20;
  return;
}



/* Entry: 1045b532c; end: 1045b53cb;  */

void FUN_1045b532c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam00000001130877f0 != -1) {
    _swift_once(0x1130877f0,FUN_1045b526c);
  }
  uVar5 = uRam0000000113813e78;
  uVar4 = uRam0000000113813e70;
  uVar3 = uRam0000000113813e68;
  uVar2 = uRam0000000113813e60;
  uVar1 = uRam0000000113813e58;
  *param_1 = uRam0000000113813e50;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  _swift_retain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(uVar5);
  return;
}



/* Entry: 1045b53cc; end: 1045b554f;  */

/* WARNING: Removing unreachable block (ram,0x0001045b554c) */

void FUN_1045b53cc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  long unaff_x21;
  code *pcVar5;
  
  pcVar5 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar5)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (lVar1 < 3) {
          if (lVar1 == 1) {
            pcVar4 = *(code **)(param_3 + 0x150);
          }
          else {
            if (lVar1 != 2) goto LAB_1045b5454;
            pcVar4 = *(code **)(param_3 + 0x150);
          }
        }
        else if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x138);
        }
        else {
          if (lVar1 != 4) goto LAB_1045b5454;
          pcVar4 = *(code **)(param_3 + 0x150);
        }
LAB_1045b5444:
        (*pcVar4)();
      }
      else {
        if (6 < lVar1) {
          if (lVar1 == 7) {
            pcVar4 = *(code **)(param_3 + 0x180);
            func_0x0001045b6724();
            lVar2 = unaff_x20 + 0x48;
            puVar3 = &UNK_11078fe38;
            goto LAB_1045b5538;
          }
          if (lVar1 != 8) goto LAB_1045b5454;
          pcVar4 = *(code **)(param_3 + 0x150);
          goto LAB_1045b5444;
        }
        if (lVar1 == 5) {
          pcVar4 = *(code **)(param_3 + 0x138);
          goto LAB_1045b5444;
        }
        if (lVar1 != 6) goto LAB_1045b5454;
        pcVar4 = *(code **)(param_3 + 0x1a0);
        func_0x0001045b66a4();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_110790230;
LAB_1045b5538:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_1045b5454:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 1045b5550; end: 1045b571f;  */

void FUN_1045b5550(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar1 = unaff_x20[2];
  uVar2 = unaff_x20[3];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(2);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((unaff_x20[4] & 1) != 0) {
    __ss6HasherV8_combineyySuF(3);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(4);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  if ((unaff_x20[7] & 1) != 0) {
    __ss6HasherV8_combineyySuF(5);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  if ((*(long *)(unaff_x20[8] + 0x10) != 0) && (FUN_10460e4d4(unaff_x20[8],6), unaff_x21 != 0)) {
    return;
  }
  uVar8 = unaff_x20[9];
  if ((char)unaff_x20[10] == '\x01') {
    if (uVar8 != 0) {
      __ss6HasherV8_combineyySuF(7);
      bVar4 = uVar8 == 2;
      uVar8 = 1;
      if (bVar4) {
        uVar8 = 2;
      }
LAB_1045b5688:
      __ss6HasherV8_combineyySuF(uVar8);
    }
  }
  else if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(7);
    goto LAB_1045b5688;
  }
  uVar1 = unaff_x20[0xb];
  uVar2 = unaff_x20[0xc];
  uVar8 = uVar1 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar8 = uVar2 >> 0x38 & 0xf;
  }
  if (uVar8 != 0) {
    __ss6HasherV8_combineyySuF(8);
    __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
  }
  uVar8 = unaff_x20[0xd];
  uVar3 = (uint)(unaff_x20[0xe] >> 0x20);
  uVar5 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[0xe] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_1045b5700;
    }
    lVar6 = (long)(int)uVar8;
    lVar7 = (long)uVar8 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar8 + 0x10);
    lVar7 = *(long *)(uVar8 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_1045b5700:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 1045b5720; end: 1045b5913;  */

void FUN_1045b5720(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  ulong uStack_60;
  undefined1 uStack_58;
  
  uVar2 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar3 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar3 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar3 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (((char)unaff_x20[4] != '\x01' ||
        ((**(code **)(param_3 + 0x68))(1,3,param_2,param_3), unaff_x21 == 0)))) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[6];
      uVar3 = uVar2 & 0xffffffffffff;
      if ((uVar1 & 0x2000000000000000) != 0) {
        uVar3 = uVar1 >> 0x38 & 0xf;
      }
      if ((uVar3 == 0) ||
         ((**(code **)(param_3 + 0x70))(uVar2,uVar1,4,param_2,param_3), unaff_x21 == 0)) {
        if ((char)unaff_x20[7] == '\x01') {
          uVar2 = 1;
          (**(code **)(param_3 + 0x68))(1,5,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar3 = unaff_x20[8];
        if (*(long *)(uVar3 + 0x10) != 0) {
          pcVar4 = *(code **)(param_3 + 0x118);
          func_0x0001045b66a4();
          (*pcVar4)(uVar3,6,&UNK_110790230,uVar2,param_2,param_3);
          uVar2 = uVar3;
          if (unaff_x21 != 0) {
            return;
          }
        }
        if (unaff_x20[9] != 0) {
          uStack_58 = (undefined1)unaff_x20[10];
          pcVar4 = *(code **)(param_3 + 0x80);
          uStack_60 = unaff_x20[9];
          func_0x0001045b6724();
          (*pcVar4)(&uStack_60,7,&UNK_11078fe38,uVar2,param_2,param_3);
          if (unaff_x21 != 0) {
            return;
          }
        }
        uVar2 = unaff_x20[0xc];
        uVar3 = unaff_x20[0xb] & 0xffffffffffff;
        if ((uVar2 & 0x2000000000000000) != 0) {
          uVar3 = uVar2 >> 0x38 & 0xf;
        }
        if ((uVar3 == 0) ||
           ((**(code **)(param_3 + 0x70))(unaff_x20[0xb],uVar2,8,param_2,param_3), unaff_x21 == 0))
        {
          func_0x000100076224(param_1,unaff_x20[0xd],unaff_x20[0xe],param_2,param_3);
        }
      }
    }
  }
  return;
}



/* Entry: 1045b5914; end: 1045b5917;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1045b5914(ulong *param_1,ulong *param_2)

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
  
  uVar13 = *param_1;
  if ((((uVar13 == *param_2 && param_1[1] == param_2[1]) ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar13 & 1) != 0)) &&
      ((uVar13 = param_1[2], uVar13 == param_2[2] && param_1[3] == param_2[3] ||
       (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (), (uVar13 & 1) != 0)))) && ((((byte)param_1[4] ^ (byte)param_2[4]) & 1) == 0)) {
    uVar13 = param_1[5];
    if ((((uVar13 == param_2[5]) && (param_1[6] == param_2[6])) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), (uVar13 & 1) != 0)) && ((((byte)param_1[7] ^ (byte)param_2[7]) & 1) == 0)) {
      uVar13 = param_1[8];
      FUN_1045b79ac(uVar13,param_2[8]);
      if ((uVar13 & 1) != 0) {
        uVar13 = param_1[9];
        uVar21 = param_2[9];
        if ((char)param_2[10] == '\x01') {
          if (uVar21 == 0) {
            if (uVar13 != 0) {
              return (byte *)0x0;
            }
          }
          else if (uVar21 == 1) {
            if (uVar13 != 1) {
              return (byte *)0x0;
            }
          }
          else if (uVar13 != 2) {
            return (byte *)0x0;
          }
        }
        else if (uVar13 != uVar21) {
          return (byte *)0x0;
        }
        uVar13 = param_1[0xb];
        if (((uVar13 == param_2[0xb]) && (param_1[0xc] == param_2[0xc])) ||
           (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (), (uVar13 & 1) != 0)) {
          pbVar10 = (byte *)param_1[0xd];
          pbVar26 = (byte *)param_1[0xe];
          uVar13 = param_2[0xd];
          uVar21 = param_2[0xe];
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
            uVar5 = (uint)(uVar21 >> 0x20);
            uVar22 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar14 = pbVar26;
            if ((ulong)pbVar26 >> 0x3e == 3) {
              uVar20 = 0;
              if (((pbVar10 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
                 ((uVar21 >> 0x3e < 3 ||
                  ((uVar20 = 0, uVar13 != 0 || (uVar21 != 0xc000000000000000))))))
              goto joined_r0x000100e26170;
code_r0x000100e26128:
              pbVar9 = (byte *)0x1;
            }
            else if (uVar4 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar20 = (ulong)pbVar26 >> 0x30 & 0xff;
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
              if (uVar22 == 0) {
                uVar23 = uVar21 >> 0x30 & 0xff;
                goto code_r0x000100e2608c;
              }
              iVar19 = (int)(uVar13 >> 0x20);
              if (SBORROW4(iVar19,(int)uVar13)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar20 == (long)(iVar19 - (int)uVar13)) goto code_r0x000100e26094;
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
              if (uVar22 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
              if (uVar22 == 2) {
                uVar23 = *(long *)(uVar13 + 0x18) - *(long *)(uVar13 + 0x10);
                if (SBORROW8(*(long *)(uVar13 + 0x18),*(long *)(uVar13 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
code_r0x000100e2608c:
                if (uVar20 != uVar23) goto code_r0x000100e26154;
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
                  lVar25 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar14 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar25,(long)pbVar14)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar25 - (long)pbVar14);
                  }
                  unaff_x23 = unaff_x24 + -lVar25;
                  if (SBORROW8((long)unaff_x24,lVar25)) {
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
                func_0x000100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,uVar13,uVar21);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar21;
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
            pbVar24 = *(byte **)(pbVar9 + 0x18);
            bVar28 = pbVar9[0x28];
            pbVar26 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar15 = pbVar10;
            if (bVar28 < 3) {
              if (bVar28 == 0) {
                if (pbVar14[0x28] == 0) {
                  lVar25 = *(long *)pbVar14;
                  uVar11 = 0;
                  func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar12,lVar25,uVar11);
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
                lVar25 = *(long *)pbVar14;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,lVar25,uVar11);
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
                lVar25 = *(long *)(pbVar14 + 0x18);
                if ((pbVar12 == pbVar16) && (pbVar10 == pbVar17)) {
                  if (((pbVar9[0x10] ^ pbVar14[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar24 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (lVar25 == 0) {
                    return (byte *)0x0;
                  }
                  func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                  func_0x000107c61174(lVar25);
                  func_0x000107c61174();
                  pbVar10 = pbVar24;
                  func_0x000107c60118();
                  func_0x000107c61170(pbVar24);
                  func_0x000107c61170(lVar25);
                  pbVar24 = pbVar10;
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
                   (pbVar12 = pbVar26, pbVar15 = pbVar24, pbVar16 = *(byte **)(pbVar14 + 0x10),
                   pbVar17 = *(byte **)(pbVar14 + 0x18),
                   pbVar26 == *(byte **)(pbVar14 + 0x10) && pbVar24 == *(byte **)(pbVar14 + 0x18)))
                {
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
              lVar25 = *(long *)(pbVar14 + 0x20);
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
              if ((((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0) &&
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
                                                                          CONCAT11(bVar29 | auVar44[
                                                  1],bVar28 | auVar44[0]))))))) == 0 &&
                    *(long *)pbVar14 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar12 == (byte *)0x1) &&
                 (((pbVar24 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
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
                                                                             CONCAT11(bVar29 | 
                                                  auVar44[1],bVar28 | auVar44[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar14[0x28] != 5) {
              return (byte *)0x0;
            }
            uVar13 = *(ulong *)(pbVar14 + 8);
            uVar21 = *(ulong *)(pbVar14 + 0x10);
            lVar25 = *(long *)pbVar14;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,lVar25,uVar11);
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
  }
  return (byte *)0x0;
}



/* Entry: 1045b5918; end: 1045b59a7;  */

/* WARNING: Removing unreachable block (ram,0x0001045b5968) */

void FUN_1045b5918(void)

{
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  __ss6HasherV5_seedABSi_tcfC(&uStack_80,0);
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_90 = uStack_40;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  FUN_1045b5550(&uStack_d0);
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



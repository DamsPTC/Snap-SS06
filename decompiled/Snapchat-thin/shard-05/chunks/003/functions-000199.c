/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103c97084; end: 103c970bb;  */

uint FUN_103c97084(long param_1,long param_2)

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
  func_0x000103ccbe90();
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



/* Entry: 103c970bc; end: 103c970c7;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c970bc(long *param_1)

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
  byte *unaff_x25;
  ulong uVar26;
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
    FUN_103c96938(uVar25,uVar26);
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



/* Entry: 103c970c8; end: 103c97167;  */

/* WARNING: Possible PIC construction at 0x000103c97114: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c97124: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c97118) */
/* WARNING: Removing unreachable block (ram,0x000103c97128) */

void FUN_103c970c8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef38 != -1) {
    func_0x000107c61568(0x112ffef38,0x103c960f8);
  }
  uVar5 = uRam000000011380db48;
  uVar4 = uRam000000011380db40;
  uVar3 = uRam000000011380db38;
  uVar2 = uRam000000011380db30;
  uVar1 = uRam000000011380db28;
  *param_1 = uRam000000011380db20;
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



/* Entry: 103c97168; end: 103c9717b;  */

void FUN_103c97168(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000560;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000560,&UNK_10dc75090);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9717c; end: 103c971b3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9717c(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbb32c();
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



/* Entry: 103c971b4; end: 103c971bf;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103c971b4(undefined8 *param_1,long *param_2)

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
  byte *unaff_x25;
  ulong uVar26;
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
    FUN_103c96938(uVar25,uVar26);
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



/* Entry: 103c971c0; end: 103c97207;  */

void FUN_103c971c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc764b0,0x2d,2);
  uRam000000011380db58 = uStack_38;
  uRam000000011380db50 = uStack_40;
  uRam000000011380db68 = uStack_28;
  uRam000000011380db60 = uStack_30;
  uRam000000011380db78 = uStack_18;
  uRam000000011380db70 = uStack_20;
  return;
}



/* Entry: 103c97208; end: 103c97313;  */

void FUN_103c97208(undefined8 param_1,long param_2,long param_3)

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
        func_0x000103cb73fc();
LAB_103c97290:
        (*pcVar3)();
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cb73bc();
          goto LAB_103c97290;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x180);
          func_0x000103cb737c();
          goto LAB_103c97290;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c97314; end: 103c9743f;  */

void FUN_103c97314(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined1 *puVar1;
  long *plVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar2 = &lStack_50;
  plVar3 = &lStack_50;
  puVar1 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    func_0x000103cb737c();
    (*pcVar4)(&lStack_50,1,&UNK_1106f7c78,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x000103cb73bc();
    (*pcVar4)(&lStack_50,2,&UNK_1106f6ba0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar3;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    uStack_48 = (undefined1)unaff_x20[5];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[4];
    func_0x000103cb73fc();
    (*pcVar4)(&lStack_50,3,&UNK_1106fee20,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
  return;
}



/* Entry: 103c97440; end: 103c97477;  */

undefined1  [16] FUN_103c97440(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2e40;
  auVar1._0_8_ = 0xd000000000000026;
  return auVar1;
}



/* Entry: 103c97478; end: 103c9749f;  */

void FUN_103c97478(void)

{
  FUN_103c97208();
  return;
}



/* Entry: 103c974a0; end: 103c974d7;  */

uint FUN_103c974a0(long param_1,long param_2)

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
  func_0x000103ccbe50();
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



/* Entry: 103c974d8; end: 103c9751f;  */

uint FUN_103c974d8(undefined8 *param_1)

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
  FUN_103cb2550(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c97520; end: 103c975bf;  */

/* WARNING: Possible PIC construction at 0x000103c9756c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9757c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c97570) */
/* WARNING: Removing unreachable block (ram,0x000103c97580) */

void FUN_103c97520(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef48 != -1) {
    func_0x000107c61568(0x112ffef48,FUN_103c971c0);
  }
  uVar5 = uRam000000011380db78;
  uVar4 = uRam000000011380db70;
  uVar3 = uRam000000011380db68;
  uVar2 = uRam000000011380db60;
  uVar1 = uRam000000011380db58;
  *param_1 = uRam000000011380db50;
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



/* Entry: 103c975c0; end: 103c975d3;  */

void FUN_103c975c0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000550;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000550,&UNK_10dc75088);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c975d4; end: 103c976d7;  */

void FUN_103c975d4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c976d8; end: 103c97767;  */

uint FUN_103c976d8(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cb2550(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 103c97768; end: 103c97807;  */

/* WARNING: Possible PIC construction at 0x000103c977b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c977c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c977b8) */
/* WARNING: Removing unreachable block (ram,0x000103c977c8) */

void FUN_103c97768(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef70 != -1) {
    func_0x000107c61568(0x112ffef70,0x103c97720);
  }
  uVar5 = uRam000000011380dba8;
  uVar4 = uRam000000011380dba0;
  uVar3 = uRam000000011380db98;
  uVar2 = uRam000000011380db90;
  uVar1 = uRam000000011380db88;
  *param_1 = uRam000000011380db80;
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



/* Entry: 103c97808; end: 103c9784f;  */

void FUN_103c97808(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc762d0,0x22,2);
  uRam000000011380dbb8 = uStack_38;
  uRam000000011380dbb0 = uStack_40;
  uRam000000011380dbc8 = uStack_28;
  uRam000000011380dbc0 = uStack_30;
  uRam000000011380dbd8 = uStack_18;
  uRam000000011380dbd0 = uStack_20;
  return;
}



/* Entry: 103c97850; end: 103c978fb;  */

void FUN_103c97850(undefined8 param_1,long param_2,long param_3)

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
      pcVar3 = *(code **)(param_3 + 0x150);
      goto LAB_103c9788c;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_103c9788c:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_103c9788c;
}



/* Entry: 103c978fc; end: 103c979cf;  */

void FUN_103c978fc(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      uVar2 = unaff_x20[5];
      uVar1 = unaff_x20[4] & 0xffffffffffff;
      if ((uVar2 & 0x2000000000000000) != 0) {
        uVar1 = uVar2 >> 0x38 & 0xf;
      }
      if ((uVar1 == 0) ||
         ((**(code **)(param_3 + 0x70))(unaff_x20[4],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
        func_0x000100076224(param_1,unaff_x20[6],unaff_x20[7],param_2,param_3);
      }
    }
  }
  return;
}



/* Entry: 103c979d0; end: 103c97a07;  */

undefined1  [16] FUN_103c979d0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2e70;
  auVar1._0_8_ = 0xd00000000000002a;
  return auVar1;
}



/* Entry: 103c97a08; end: 103c97a3f;  */

uint FUN_103c97a08(long param_1,long param_2)

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
  func_0x000103ccbe10();
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



/* Entry: 103c97a40; end: 103c97adf;  */

/* WARNING: Possible PIC construction at 0x000103c97a8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c97a9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c97a90) */
/* WARNING: Removing unreachable block (ram,0x000103c97aa0) */

void FUN_103c97a40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef78 != -1) {
    func_0x000107c61568(0x112ffef78,FUN_103c97808);
  }
  uVar5 = uRam000000011380dbd8;
  uVar4 = uRam000000011380dbd0;
  uVar3 = uRam000000011380dbc8;
  uVar2 = uRam000000011380dbc0;
  uVar1 = uRam000000011380dbb8;
  *param_1 = uRam000000011380dbb0;
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



/* Entry: 103c97ae0; end: 103c97af3;  */

void FUN_103c97ae0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000540;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000540,&UNK_10dc75080);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c97af4; end: 103c97bf7;  */

void FUN_103c97af4(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c97bf8; end: 103c97c3f;  */

void FUN_103c97bf8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc75462,8,2);
  uRam000000011380dbe8 = uStack_38;
  uRam000000011380dbe0 = uStack_40;
  uRam000000011380dbf8 = uStack_28;
  uRam000000011380dbf0 = uStack_30;
  uRam000000011380dc08 = uStack_18;
  uRam000000011380dc00 = uStack_20;
  return;
}



/* Entry: 103c97c40; end: 103c97c77;  */

undefined1  [16] FUN_103c97c40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2ea0;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103c97c78; end: 103c97ce3;  */

void FUN_103c97c78(void)

{
  FUN_103caaf90();
  return;
}



/* Entry: 103c97ce4; end: 103c97d1b;  */

uint FUN_103c97ce4(long param_1,long param_2)

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
  func_0x000103ccbdd0();
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



/* Entry: 103c97d1c; end: 103c97d27;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_103c97d1c(long *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  long *unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar18 = *param_1;
  lVar15 = param_1[2];
  uVar13 = param_1[3];
  lVar22 = *unaff_x20;
  pbVar10 = (byte *)unaff_x20[2];
  pbVar27 = (byte *)unaff_x20[3];
  if ((char)param_1[1] == '\x01') {
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar22 == 0) {
SUB_100e25fcc:
          *(undefined8 *)((long)register0x00000008 + -0x50) = unaff_x26;
          *(byte **)((long)register0x00000008 + -0x48) = unaff_x25;
          *(byte **)((long)register0x00000008 + -0x40) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0x38) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0x30) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0x28) = unaff_x21;
          *(long **)((long)register0x00000008 + -0x20) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
          *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
          *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
          *(undefined8 *)((long)register0x00000008 + -0x58) =
               *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
          uVar5 = (uint)((ulong)pbVar27 >> 0x20);
          uVar19 = uVar5 >> 0x1e;
          uVar6 = (uint)(uVar13 >> 0x20);
          uVar23 = uVar6 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar29 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                (uVar13 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            plVar9 = (long *)0x1;
          }
          else if (uVar5 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar7)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
              goto code_r0x000100e2608c;
            }
            plVar9 = (long *)(ulong)(uVar21 == 0);
          }
          else {
            if (uVar19 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar7)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
              if (uVar21 == uVar24) goto code_r0x000100e26094;
            }
            else {
              iVar20 = (int)((ulong)lVar15 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar7)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar19 < 2) {
                  if (uVar19 == 0) {
                    *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                    *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                    *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                    *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                    *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                    *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                    *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                    *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                    *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                    *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                    *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                    *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                    pbVar29 = (byte *)((long)register0x00000008 +
                                      (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                        (undefined1 *)((long)register0x00000008 + -0x70));
                    plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar29 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar29) {
                        pbVar29 = unaff_x23;
                      }
                      pbVar29 = pbVar29 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar18 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar29 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                  }
                  unaff_x23 = unaff_x24 + -lVar18;
                  if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar29 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (long *)((ulong)pbVar27 & 0x3fffffffffffffff);
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29
                                    ,lVar15,uVar13);
                plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = uVar13;
                goto code_r0x000100e262b0;
              }
            }
            plVar9 = (long *)0x0;
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            auVar46._8_8_ = pbVar29;
            auVar46._0_8_ = plVar9;
            return auVar46;
          }
          func_0x000107c60e78();
          *(byte **)((long)register0x00000008 + -0xc0) = unaff_x24;
          *(byte **)((long)register0x00000008 + -0xb8) = unaff_x23;
          *(ulong *)((long)register0x00000008 + -0xb0) = unaff_x22;
          *(undefined8 *)((long)register0x00000008 + -0xa8) = unaff_x21;
          *(long **)((long)register0x00000008 + -0xa0) = unaff_x20;
          *(byte **)((long)register0x00000008 + -0x98) = unaff_x19;
          *(undefined1 **)((long)register0x00000008 + -0x90) =
               (undefined1 *)((long)register0x00000008 + -0x10);
          *(undefined **)((long)register0x00000008 + -0x88) = &UNK_100e26304;
          pbVar12 = (byte *)*plVar9;
          pbVar10 = (byte *)plVar9[1];
          pbVar25 = (byte *)plVar9[3];
          bVar30 = *(byte *)(plVar9 + 5);
          pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                            (ulong)*(byte *)(plVar9 + 2));
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar29[0x28] == 0) {
                pbVar29 = *(byte **)pbVar29;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,pbVar29,uVar11);
                uVar13 = (ulong)((uint)pbVar12 & 1);
                goto code_r0x000100e266f0;
              }
              goto code_r0x000100e266ec;
            }
            if (bVar30 != 1) {
              if (pbVar29[0x28] == 2) {
                pbVar16 = *(byte **)pbVar29;
                pbVar17 = *(byte **)(pbVar29 + 8);
                pbVar26 = *(byte **)(pbVar29 + 0x18);
                if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
                if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                  if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (pbVar26 != (byte *)0x0) {
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(pbVar26);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    pbVar29 = pbVar26;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(pbVar26);
                    pbVar25 = pbVar10;
                    goto joined_r0x000100e266a4;
                  }
                }
              }
              goto code_r0x000100e266ec;
            }
            if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)(pbVar29 + 8);
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar12,pbVar14,pbVar16,pbVar17,0);
              auVar48._8_8_ = pbVar14;
              auVar48._0_8_ = pbVar12;
              return auVar48;
            }
          }
          else {
            pbVar28 = (byte *)plVar9[4];
            if (4 < bVar30) {
              if (bVar30 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                  if (pbVar29[0x28] == 6) {
                    lVar18 = *(long *)(pbVar29 + 0x20);
                    lVar15 = *(long *)(pbVar29 + 0x18);
                    bVar30 = pbVar29[8] | (byte)lVar15;
                    bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                    bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                    bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                    bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                    bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                    bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                    bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                    bVar38 = pbVar29[0x10] | (byte)lVar18;
                    bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                    bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                    bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                    bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                    bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                    bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                    bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
                    auVar4[1] = bVar31;
                    auVar4[0] = bVar30;
                    auVar4[2] = bVar32;
                    auVar4[3] = bVar33;
                    auVar4[4] = bVar34;
                    auVar4[5] = bVar35;
                    auVar4[6] = bVar36;
                    auVar4[7] = bVar37;
                    auVar4[8] = bVar38;
                    auVar4[9] = bVar39;
                    auVar4[10] = bVar40;
                    auVar4[0xb] = bVar41;
                    auVar4[0xc] = bVar42;
                    auVar4[0xd] = bVar43;
                    auVar4[0xe] = bVar44;
                    auVar4[0xf] = bVar45;
                    auVar46 = NEON_ext(auVar3,auVar4,8,1);
                    if (CONCAT17(bVar37 | auVar46[7],
                                 CONCAT16(bVar36 | auVar46[6],
                                          CONCAT15(bVar35 | auVar46[5],
                                                   CONCAT14(bVar34 | auVar46[4],
                                                            CONCAT13(bVar33 | auVar46[3],
                                                                     CONCAT12(bVar32 | auVar46[2],
                                                                              CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                        *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                  }
                  goto code_r0x000100e266ec;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0)) {
                  if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
                }
                else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
                lVar18 = *(long *)(pbVar29 + 0x20);
                lVar15 = *(long *)(pbVar29 + 0x18);
                bVar30 = pbVar29[8] | (byte)lVar15;
                bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                bVar38 = pbVar29[0x10] | (byte)lVar18;
                bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
                pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                           CONCAT16(bVar36 | auVar46[6],
                                                    CONCAT15(bVar35 | auVar46[5],
                                                             CONCAT14(bVar34 | auVar46[4],
                                                                      CONCAT13(bVar33 | auVar46[3],
                                                                               CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
                goto joined_r0x000100e26620;
              }
              if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
              lVar15 = *(long *)(pbVar29 + 8);
              uVar13 = *(ulong *)(pbVar29 + 0x10);
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
              unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
              unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
              unaff_x20 = *(long **)((long)register0x00000008 + -0xa0);
              unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
              unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
              unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
              unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
              unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
              goto SUB_100e25fcc;
            }
            if (bVar30 == 3) {
              if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
              goto code_r0x000100e266ec;
              pbVar17 = *(byte **)(pbVar29 + 0x10);
              pbVar26 = *(byte **)(pbVar29 + 0x20);
              if (pbVar27 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
                pbVar16 = *(byte **)(pbVar29 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar27;
                if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
                if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
                if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
                goto code_r0x000100e26708;
                func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
                pbVar29 = pbVar28;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                  uVar13 = 0;
code_r0x000100e266f0:
                  auVar47._8_8_ = pbVar29;
                  auVar47._0_8_ = uVar13;
                  return auVar47;
                }
              }
            }
            else {
              if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
                 (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
                 pbVar17 = *(byte **)(pbVar29 + 0x18),
                 pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
              goto code_r0x000107c605b8;
            }
          }
code_r0x000100e26708:
          uVar13 = 1;
          goto code_r0x000100e266f0;
        }
      }
      else if (lVar22 == 1) goto SUB_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar22 == 2) goto SUB_100e25fcc;
    }
    else if (lVar18 == 3) {
      if (lVar22 == 3) goto SUB_100e25fcc;
    }
    else if (lVar22 == 4) goto SUB_100e25fcc;
  }
  else if (lVar22 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(unaff_x20 + 1)) << 0x40;
}



/* Entry: 103c97d28; end: 103c97dc7;  */

/* WARNING: Possible PIC construction at 0x000103c97d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c97d84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c97d78) */
/* WARNING: Removing unreachable block (ram,0x000103c97d88) */

void FUN_103c97d28(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffef88 != -1) {
    func_0x000107c61568(0x112ffef88,FUN_103c97bf8);
  }
  uVar5 = uRam000000011380dc08;
  uVar4 = uRam000000011380dc00;
  uVar3 = uRam000000011380dbf8;
  uVar2 = uRam000000011380dbf0;
  uVar1 = uRam000000011380dbe8;
  *param_1 = uRam000000011380dbe0;
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



/* Entry: 103c97dc8; end: 103c97ddb;  */

void FUN_103c97dc8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000530;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000530,&UNK_10dc75078);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c97ddc; end: 103c97e13;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c97ddc(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbb620();
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



/* Entry: 103c97e14; end: 103c97e1f;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_103c97e14(long *param_1,long *param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  long *plVar9;
  byte *pbVar10;
  undefined8 uVar11;
  byte *pbVar12;
  ulong uVar13;
  long lVar15;
  byte *pbVar16;
  byte *pbVar17;
  long lVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  ulong uVar24;
  byte *pbVar25;
  byte *unaff_x19;
  byte *pbVar26;
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar27;
  ulong unaff_x22;
  byte *pbVar28;
  byte *unaff_x23;
  byte *pbVar29;
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
  undefined1 auVar47 [16];
  undefined1 auVar48 [16];
  byte *pbVar14;
  
  lVar22 = *param_1;
  pbVar10 = (byte *)param_1[2];
  pbVar27 = (byte *)param_1[3];
  lVar18 = *param_2;
  lVar15 = param_2[2];
  uVar13 = param_2[3];
  if ((char)param_2[1] == '\x01') {
    if (lVar18 < 2) {
      if (lVar18 == 0) {
        if (lVar22 == 0) {
SUB_100e25fcc:
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
          uVar5 = (uint)((ulong)pbVar27 >> 0x20);
          uVar19 = uVar5 >> 0x1e;
          uVar6 = (uint)(uVar13 >> 0x20);
          uVar23 = uVar6 >> 0x1e;
          iVar8 = (int)pbVar10;
          pbVar29 = pbVar27;
          if ((ulong)pbVar27 >> 0x3e == 3) {
            uVar21 = 0;
            if ((((pbVar10 != (byte *)0x0) || (pbVar27 != (byte *)0xc000000000000000)) ||
                (uVar13 >> 0x3e < 3)) ||
               ((uVar21 = 0, lVar15 != 0 || (uVar13 != 0xc000000000000000))))
            goto joined_r0x000100e26170;
code_r0x000100e26128:
            plVar9 = (long *)0x1;
          }
          else if (uVar5 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar21 = (ulong)pbVar27 >> 0x30 & 0xff;
            }
            else {
              iVar20 = (int)((ulong)pbVar10 >> 0x20);
              if (SBORROW4(iVar20,iVar8)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
                (*pcVar7)();
              }
              uVar21 = (ulong)(iVar20 - iVar8);
            }
joined_r0x000100e26170:
            if (uVar6 >> 0x1e < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
            if (uVar23 == 2) {
              uVar24 = *(long *)(lVar15 + 0x18) - *(long *)(lVar15 + 0x10);
              if (SBORROW8(*(long *)(lVar15 + 0x18),*(long *)(lVar15 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
                (*pcVar7)();
              }
              goto code_r0x000100e2608c;
            }
            plVar9 = (long *)(ulong)(uVar21 == 0);
          }
          else {
            if (uVar19 == 2) {
              uVar21 = *(long *)(pbVar10 + 0x18) - *(long *)(pbVar10 + 0x10);
              if (SBORROW8(*(long *)(pbVar10 + 0x18),*(long *)(pbVar10 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
                (*pcVar7)();
              }
              goto joined_r0x000100e26170;
            }
            uVar21 = 0;
            if (1 < uVar23) goto code_r0x000100e26050;
code_r0x000100e26084:
            if (uVar23 == 0) {
              uVar24 = uVar13 >> 0x30 & 0xff;
code_r0x000100e2608c:
              if (uVar21 == uVar24) goto code_r0x000100e26094;
            }
            else {
              iVar20 = (int)((ulong)lVar15 >> 0x20);
              if (SBORROW4(iVar20,(int)lVar15)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar7)();
              }
              if (uVar21 == (long)(iVar20 - (int)lVar15)) {
code_r0x000100e26094:
                if ((long)uVar21 < 1) goto code_r0x000100e26128;
                if (uVar19 < 2) {
                  if (uVar19 == 0) {
                    *(char *)((long)register0x00000008 + -0x70) = (char)pbVar10;
                    *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)pbVar10 >> 8);
                    *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)pbVar10 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)pbVar10 >> 0x18);
                    *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)pbVar10 >> 0x20);
                    *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)pbVar10 >> 0x28);
                    *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)pbVar10 >> 0x30);
                    *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)pbVar10 >> 0x38);
                    *(char *)((long)register0x00000008 + -0x68) = (char)pbVar27;
                    *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar27 >> 8);
                    *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar27 >> 0x10);
                    *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar27 >> 0x18);
                    *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar27 >> 0x20);
                    *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar27 >> 0x28);
                    pbVar29 = (byte *)((long)register0x00000008 +
                                      (((ulong)pbVar27 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
                    unaff_x21 = 0;
                    func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                        (undefined1 *)((long)register0x00000008 + -0x70));
                    plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
                    goto code_r0x000100e262b0;
                  }
                  unaff_x25 = (byte *)(long)iVar8;
                  unaff_x23 = (byte *)(((long)pbVar10 >> 0x20) - (long)unaff_x25);
                  if ((long)pbVar10 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec30();
                  unaff_x24 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar29 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar29);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar29) {
                        pbVar29 = unaff_x23;
                      }
                      pbVar29 = pbVar29 + (long)pbVar10;
                      goto code_r0x000100e262a4;
                    }
                  }
                  pbVar29 = (byte *)0x0;
                }
                else {
                  if (uVar19 != 2) {
                    *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
                    *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
                    pbVar29 = (byte *)((long)register0x00000008 + -0x70);
                    goto code_r0x000100e26260;
                  }
                  lVar18 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar29 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar18,(long)pbVar29)) {
                    /* WARNING: Does not return */
                      pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar7)();
                    }
                    pbVar10 = pbVar10 + (lVar18 - (long)pbVar29);
                  }
                  unaff_x23 = unaff_x24 + -lVar18;
                  if (SBORROW8((long)unaff_x24,lVar18)) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
                    (*pcVar7)();
                  }
                  func_0x000107c5ec38();
                  unaff_x19 = pbVar10;
                  unaff_x25 = pbVar27;
                  if (pbVar10 == (byte *)0x0) {
                    pbVar29 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar29) {
                      pbVar29 = unaff_x23;
                    }
                    pbVar29 = pbVar29 + (long)pbVar10;
                  }
                }
code_r0x000100e262a4:
                unaff_x20 = (ulong)pbVar27 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar10,pbVar29
                                    ,lVar15,uVar13);
                plVar9 = (long *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
                unaff_x22 = uVar13;
                goto code_r0x000100e262b0;
              }
            }
            plVar9 = (long *)0x0;
          }
code_r0x000100e262b0:
          if (*(long *)PTR____stack_chk_guard_11034bdc0 ==
              *(long *)((long)register0x00000008 + -0x58)) {
            auVar46._8_8_ = pbVar29;
            auVar46._0_8_ = plVar9;
            return auVar46;
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
          pbVar12 = (byte *)*plVar9;
          pbVar10 = (byte *)plVar9[1];
          pbVar25 = (byte *)plVar9[3];
          bVar30 = *(byte *)(plVar9 + 5);
          pbVar27 = (byte *)((ulong)*(uint *)((long)plVar9 + 0x11) << 8 |
                             (ulong)*(uint3 *)((long)plVar9 + 0x15) << 0x28 |
                            (ulong)*(byte *)(plVar9 + 2));
          pbVar14 = pbVar10;
          if (bVar30 < 3) {
            if (bVar30 == 0) {
              if (pbVar29[0x28] == 0) {
                pbVar29 = *(byte **)pbVar29;
                uVar11 = 0;
                func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar12,pbVar29,uVar11);
                uVar13 = (ulong)((uint)pbVar12 & 1);
                goto code_r0x000100e266f0;
              }
              goto code_r0x000100e266ec;
            }
            if (bVar30 != 1) {
              if (pbVar29[0x28] == 2) {
                pbVar16 = *(byte **)pbVar29;
                pbVar17 = *(byte **)(pbVar29 + 8);
                pbVar26 = *(byte **)(pbVar29 + 0x18);
                if ((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) goto code_r0x000107c605b8;
                if (((*(byte *)(plVar9 + 2) ^ pbVar29[0x10]) & 1) == 0) {
                  if (pbVar25 == (byte *)0x0) goto joined_r0x000100e26620;
                  if (pbVar26 != (byte *)0x0) {
                    func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
                    func_0x000107c61174(pbVar26);
                    func_0x000107c61174();
                    pbVar10 = pbVar25;
                    pbVar29 = pbVar26;
                    func_0x000107c60118();
                    func_0x000107c61170(pbVar25);
                    func_0x000107c61170(pbVar26);
                    pbVar25 = pbVar10;
                    goto joined_r0x000100e266a4;
                  }
                }
              }
              goto code_r0x000100e266ec;
            }
            if (pbVar29[0x28] != 1) goto code_r0x000100e266ec;
            pbVar16 = *(byte **)(pbVar29 + 8);
            pbVar17 = *(byte **)(pbVar29 + 0x10);
            pbVar29 = *(byte **)pbVar29;
            uVar11 = 0;
            func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar12,pbVar29,uVar11);
            if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
            pbVar12 = pbVar10;
            pbVar14 = pbVar27;
            if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)
                PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
              )(pbVar12,pbVar14,pbVar16,pbVar17,0);
              auVar48._8_8_ = pbVar14;
              auVar48._0_8_ = pbVar12;
              return auVar48;
            }
          }
          else {
            pbVar28 = (byte *)plVar9[4];
            if (4 < bVar30) {
              if (bVar30 != 5) {
                if ((((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar12 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0) && pbVar27 == (byte *)0x0) {
                  if (pbVar29[0x28] == 6) {
                    lVar18 = *(long *)(pbVar29 + 0x20);
                    lVar15 = *(long *)(pbVar29 + 0x18);
                    bVar30 = pbVar29[8] | (byte)lVar15;
                    bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                    bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                    bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                    bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                    bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                    bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                    bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                    bVar38 = pbVar29[0x10] | (byte)lVar18;
                    bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                    bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                    bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                    bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                    bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                    bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                    bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
                    auVar4[1] = bVar31;
                    auVar4[0] = bVar30;
                    auVar4[2] = bVar32;
                    auVar4[3] = bVar33;
                    auVar4[4] = bVar34;
                    auVar4[5] = bVar35;
                    auVar4[6] = bVar36;
                    auVar4[7] = bVar37;
                    auVar4[8] = bVar38;
                    auVar4[9] = bVar39;
                    auVar4[10] = bVar40;
                    auVar4[0xb] = bVar41;
                    auVar4[0xc] = bVar42;
                    auVar4[0xd] = bVar43;
                    auVar4[0xe] = bVar44;
                    auVar4[0xf] = bVar45;
                    auVar46 = NEON_ext(auVar3,auVar4,8,1);
                    if (CONCAT17(bVar37 | auVar46[7],
                                 CONCAT16(bVar36 | auVar46[6],
                                          CONCAT15(bVar35 | auVar46[5],
                                                   CONCAT14(bVar34 | auVar46[4],
                                                            CONCAT13(bVar33 | auVar46[3],
                                                                     CONCAT12(bVar32 | auVar46[2],
                                                                              CONCAT11(bVar31 | 
                                                  auVar46[1],bVar30 | auVar46[0]))))))) == 0 &&
                        *(long *)pbVar29 == 0) goto code_r0x000100e26708;
                  }
                  goto code_r0x000100e266ec;
                }
                if ((pbVar12 == (byte *)0x1) &&
                   (((pbVar25 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar27 == (byte *)0x0)
                    && pbVar28 == (byte *)0x0)) {
                  if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 1)) goto code_r0x000100e266ec;
                }
                else if ((pbVar29[0x28] != 6) || (*(long *)pbVar29 != 2)) goto code_r0x000100e266ec;
                lVar18 = *(long *)(pbVar29 + 0x20);
                lVar15 = *(long *)(pbVar29 + 0x18);
                bVar30 = pbVar29[8] | (byte)lVar15;
                bVar31 = pbVar29[9] | (byte)((ulong)lVar15 >> 8);
                bVar32 = pbVar29[10] | (byte)((ulong)lVar15 >> 0x10);
                bVar33 = pbVar29[0xb] | (byte)((ulong)lVar15 >> 0x18);
                bVar34 = pbVar29[0xc] | (byte)((ulong)lVar15 >> 0x20);
                bVar35 = pbVar29[0xd] | (byte)((ulong)lVar15 >> 0x28);
                bVar36 = pbVar29[0xe] | (byte)((ulong)lVar15 >> 0x30);
                bVar37 = pbVar29[0xf] | (byte)((ulong)lVar15 >> 0x38);
                bVar38 = pbVar29[0x10] | (byte)lVar18;
                bVar39 = pbVar29[0x11] | (byte)((ulong)lVar18 >> 8);
                bVar40 = pbVar29[0x12] | (byte)((ulong)lVar18 >> 0x10);
                bVar41 = pbVar29[0x13] | (byte)((ulong)lVar18 >> 0x18);
                bVar42 = pbVar29[0x14] | (byte)((ulong)lVar18 >> 0x20);
                bVar43 = pbVar29[0x15] | (byte)((ulong)lVar18 >> 0x28);
                bVar44 = pbVar29[0x16] | (byte)((ulong)lVar18 >> 0x30);
                bVar45 = pbVar29[0x17] | (byte)((ulong)lVar18 >> 0x38);
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
                pbVar26 = (byte *)CONCAT17(bVar37 | auVar46[7],
                                           CONCAT16(bVar36 | auVar46[6],
                                                    CONCAT15(bVar35 | auVar46[5],
                                                             CONCAT14(bVar34 | auVar46[4],
                                                                      CONCAT13(bVar33 | auVar46[3],
                                                                               CONCAT12(bVar32 | 
                                                  auVar46[2],
                                                  CONCAT11(bVar31 | auVar46[1],bVar30 | auVar46[0]))
                                                  )))));
                goto joined_r0x000100e26620;
              }
              if (pbVar29[0x28] != 5) goto code_r0x000100e266ec;
              lVar15 = *(long *)(pbVar29 + 8);
              uVar13 = *(ulong *)(pbVar29 + 0x10);
              pbVar29 = *(byte **)pbVar29;
              uVar11 = 0;
              func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
              func_0x000107c60118(pbVar12,pbVar29,uVar11);
              if (((ulong)pbVar12 & 1) == 0) goto code_r0x000100e266ec;
              unaff_x29 = *(undefined8 *)((long)register0x00000008 + -0x90);
              unaff_x30 = *(undefined8 *)((long)register0x00000008 + -0x88);
              unaff_x20 = *(ulong *)((long)register0x00000008 + -0xa0);
              unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
              unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
              unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
              unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
              unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
              register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
              goto SUB_100e25fcc;
            }
            if (bVar30 == 3) {
              if ((pbVar29[0x28] != 3) || ((uint)*pbVar29 != ((uint)pbVar12 & 0xff)))
              goto code_r0x000100e266ec;
              pbVar17 = *(byte **)(pbVar29 + 0x10);
              pbVar26 = *(byte **)(pbVar29 + 0x20);
              if (pbVar27 == (byte *)0x0) {
                if (pbVar17 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar17 == (byte *)0x0) goto code_r0x000100e266ec;
                pbVar16 = *(byte **)(pbVar29 + 8);
                pbVar12 = pbVar10;
                pbVar14 = pbVar27;
                if ((pbVar10 != pbVar16) || (pbVar27 != pbVar17)) goto code_r0x000107c605b8;
              }
              if (pbVar28 == (byte *)0x0) {
joined_r0x000100e26620:
                if (pbVar26 != (byte *)0x0) goto code_r0x000100e266ec;
              }
              else {
                if (pbVar26 == (byte *)0x0) goto code_r0x000100e266ec;
                if ((pbVar25 == *(byte **)(pbVar29 + 0x18)) && (pbVar28 == pbVar26))
                goto code_r0x000100e26708;
                func_0x000107c605b8(pbVar25,pbVar28,*(byte **)(pbVar29 + 0x18),pbVar26,0);
                pbVar29 = pbVar28;
joined_r0x000100e266a4:
                if (((ulong)pbVar25 & 1) == 0) {
code_r0x000100e266ec:
                  uVar13 = 0;
code_r0x000100e266f0:
                  auVar47._8_8_ = pbVar29;
                  auVar47._0_8_ = uVar13;
                  return auVar47;
                }
              }
            }
            else {
              if (pbVar29[0x28] != 4) goto code_r0x000100e266ec;
              pbVar16 = *(byte **)pbVar29;
              pbVar17 = *(byte **)(pbVar29 + 8);
              if (((pbVar12 != pbVar16) || (pbVar10 != pbVar17)) ||
                 (pbVar12 = pbVar27, pbVar14 = pbVar25, pbVar16 = *(byte **)(pbVar29 + 0x10),
                 pbVar17 = *(byte **)(pbVar29 + 0x18),
                 pbVar27 != *(byte **)(pbVar29 + 0x10) || pbVar25 != *(byte **)(pbVar29 + 0x18)))
              goto code_r0x000107c605b8;
            }
          }
code_r0x000100e26708:
          uVar13 = 1;
          goto code_r0x000100e266f0;
        }
      }
      else if (lVar22 == 1) goto SUB_100e25fcc;
    }
    else if (lVar18 == 2) {
      if (lVar22 == 2) goto SUB_100e25fcc;
    }
    else if (lVar18 == 3) {
      if (lVar22 == 3) goto SUB_100e25fcc;
    }
    else if (lVar22 == 4) goto SUB_100e25fcc;
  }
  else if (lVar22 == lVar18) goto SUB_100e25fcc;
  return ZEXT116(*(byte *)(param_1 + 1)) << 0x40;
}



/* Entry: 103c97e20; end: 103c97e67;  */

void FUN_103c97e20(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc76240,0x88,2);
  uRam000000011380dc18 = uStack_38;
  uRam000000011380dc10 = uStack_40;
  uRam000000011380dc28 = uStack_28;
  uRam000000011380dc20 = uStack_30;
  uRam000000011380dc38 = uStack_18;
  uRam000000011380dc30 = uStack_20;
  return;
}



/* Entry: 103c97e68; end: 103c97f07;  */

/* WARNING: Possible PIC construction at 0x000103c97eb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c97ec4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c97eb8) */
/* WARNING: Removing unreachable block (ram,0x000103c97ec8) */

void FUN_103c97e68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffefa0 != -1) {
    func_0x000107c61568(0x112ffefa0,FUN_103c97e20);
  }
  uVar5 = uRam000000011380dc38;
  uVar4 = uRam000000011380dc30;
  uVar3 = uRam000000011380dc28;
  uVar2 = uRam000000011380dc20;
  uVar1 = uRam000000011380dc18;
  *param_1 = uRam000000011380dc10;
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



/* Entry: 103c97f08; end: 103c97f3f;  */

void FUN_103c97f08(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458b410(&uStack_40);
  uRam000000011380dc48 = uStack_38;
  uRam000000011380dc40 = uStack_40;
  uRam000000011380dc58 = uStack_28;
  uRam000000011380dc50 = uStack_30;
  uRam000000011380dc68 = uStack_18;
  uRam000000011380dc60 = uStack_20;
  return;
}



/* Entry: 103c97f40; end: 103c97f77;  */

undefined1  [16] FUN_103c97f40(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2ed0;
  auVar1._0_8_ = 0xd000000000000032;
  return auVar1;
}



/* Entry: 103c97f78; end: 103c97faf;  */

uint FUN_103c97f78(long param_1,long param_2)

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
  func_0x000103ccbd90();
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



/* Entry: 103c97fb0; end: 103c9804f;  */

/* WARNING: Possible PIC construction at 0x000103c97ffc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c9800c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c98000) */
/* WARNING: Removing unreachable block (ram,0x000103c98010) */

void FUN_103c97fb0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffefa8 != -1) {
    func_0x000107c61568(0x112ffefa8,FUN_103c97f08);
  }
  uVar5 = uRam000000011380dc68;
  uVar4 = uRam000000011380dc60;
  uVar3 = uRam000000011380dc58;
  uVar2 = uRam000000011380dc50;
  uVar1 = uRam000000011380dc48;
  *param_1 = uRam000000011380dc40;
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



/* Entry: 103c98050; end: 103c98063;  */

void FUN_103c98050(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000520;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000520,&UNK_10dc75070);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c98064; end: 103c9809b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c98064(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbb71c();
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



/* Entry: 103c9809c; end: 103c980e3;  */

void FUN_103c9809c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc6e160,0xf,2);
  uRam000000011380dc78 = uStack_38;
  uRam000000011380dc70 = uStack_40;
  uRam000000011380dc88 = uStack_28;
  uRam000000011380dc80 = uStack_30;
  uRam000000011380dc98 = uStack_18;
  uRam000000011380dc90 = uStack_20;
  return;
}



/* Entry: 103c980e4; end: 103c9811b;  */

undefined1  [16] FUN_103c980e4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f1b2f10;
  auVar1._0_8_ = 0xd000000000000033;
  return auVar1;
}



/* Entry: 103c9811c; end: 103c98173;  */

void FUN_103c9811c(void)

{
  FUN_103ca72a8();
  return;
}



/* Entry: 103c98174; end: 103c981ab;  */

uint FUN_103c98174(long param_1,long param_2)

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
  func_0x000103ccbd50();
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



/* Entry: 103c981ac; end: 103c981b7;  */

uint FUN_103c981ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_238 [152];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  lVar2 = *unaff_x20;
  lVar6 = unaff_x20[1];
  lVar7 = unaff_x20[2];
  lVar9 = *(long *)(lVar2 + 0x10);
  if (lVar9 == *(long *)(lVar1 + 0x10)) {
    if (lVar9 != 0 && lVar2 != lVar1) {
      puVar10 = (undefined8 *)(lVar2 + 0x20);
      puVar11 = (undefined8 *)(lVar1 + 0x20);
      do {
        uStack_138 = puVar10[0xd];
        uStack_140 = puVar10[0xc];
        uStack_128 = puVar10[0xf];
        uStack_130 = puVar10[0xe];
        uStack_118 = puVar10[0x11];
        uStack_120 = puVar10[0x10];
        uStack_110 = puVar10[0x12];
        uStack_178 = puVar10[5];
        uStack_180 = puVar10[4];
        uStack_168 = puVar10[7];
        uStack_170 = puVar10[6];
        uStack_158 = puVar10[9];
        uStack_160 = puVar10[8];
        uStack_148 = puVar10[0xb];
        uStack_150 = puVar10[10];
        uStack_198 = puVar10[1];
        uStack_1a0 = *puVar10;
        uStack_188 = puVar10[3];
        uStack_190 = puVar10[2];
        uStack_98 = puVar11[0xd];
        uStack_a0 = puVar11[0xc];
        uStack_88 = puVar11[0xf];
        uStack_90 = puVar11[0xe];
        uStack_78 = puVar11[0x11];
        uStack_80 = puVar11[0x10];
        uStack_70 = puVar11[0x12];
        uStack_d8 = puVar11[5];
        uStack_e0 = puVar11[4];
        uStack_c8 = puVar11[7];
        uStack_d0 = puVar11[6];
        uStack_b8 = puVar11[9];
        uStack_c0 = puVar11[8];
        uStack_a8 = puVar11[0xb];
        uStack_b0 = puVar11[10];
        uStack_f8 = puVar11[1];
        uStack_100 = *puVar11;
        uStack_e8 = puVar11[3];
        uStack_f0 = puVar11[2];
        func_0x000103ccc86c(&uStack_1a0,auStack_238);
        func_0x000103ccc86c(&uStack_100,auStack_238);
        puVar5 = &uStack_1a0;
        FUN_103cb4f9c(puVar5,&uStack_100);
        func_0x000103ccc8a0(&uStack_100);
        func_0x000103ccc8a0(&uStack_1a0);
        if (((ulong)puVar5 & 1) == 0) goto code_r0x000103cb5548;
        puVar11 = puVar11 + 0x13;
        puVar10 = puVar10 + 0x13;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
code_r0x000103cb5548:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103c981b8; end: 103c98257;  */

/* WARNING: Possible PIC construction at 0x000103c98204: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c98214: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c98208) */
/* WARNING: Removing unreachable block (ram,0x000103c98218) */

void FUN_103c981b8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffefb8 != -1) {
    func_0x000107c61568(0x112ffefb8,FUN_103c9809c);
  }
  uVar5 = uRam000000011380dc98;
  uVar4 = uRam000000011380dc90;
  uVar3 = uRam000000011380dc88;
  uVar2 = uRam000000011380dc80;
  uVar1 = uRam000000011380dc78;
  *param_1 = uRam000000011380dc70;
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



/* Entry: 103c98258; end: 103c9826b;  */

void FUN_103c98258(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000510;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000510,&UNK_10dc75068);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c9826c; end: 103c982a3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c9826c(undefined8 *param_1,undefined8 param_2)

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
  FUN_103cbb818();
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



/* Entry: 103c982a4; end: 103c982af;  */

uint FUN_103c982a4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  uint uVar4;
  undefined8 *puVar5;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  undefined1 auStack_238 [152];
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
  long lVar6;
  
  lVar1 = *param_1;
  lVar6 = param_1[1];
  lVar7 = param_1[2];
  lVar2 = *param_2;
  lVar3 = param_2[1];
  lVar8 = param_2[2];
  lVar9 = *(long *)(lVar1 + 0x10);
  if (lVar9 == *(long *)(lVar2 + 0x10)) {
    if (lVar9 != 0 && lVar1 != lVar2) {
      puVar10 = (undefined8 *)(lVar1 + 0x20);
      puVar11 = (undefined8 *)(lVar2 + 0x20);
      do {
        uStack_138 = puVar10[0xd];
        uStack_140 = puVar10[0xc];
        uStack_128 = puVar10[0xf];
        uStack_130 = puVar10[0xe];
        uStack_118 = puVar10[0x11];
        uStack_120 = puVar10[0x10];
        uStack_110 = puVar10[0x12];
        uStack_178 = puVar10[5];
        uStack_180 = puVar10[4];
        uStack_168 = puVar10[7];
        uStack_170 = puVar10[6];
        uStack_158 = puVar10[9];
        uStack_160 = puVar10[8];
        uStack_148 = puVar10[0xb];
        uStack_150 = puVar10[10];
        uStack_198 = puVar10[1];
        uStack_1a0 = *puVar10;
        uStack_188 = puVar10[3];
        uStack_190 = puVar10[2];
        uStack_98 = puVar11[0xd];
        uStack_a0 = puVar11[0xc];
        uStack_88 = puVar11[0xf];
        uStack_90 = puVar11[0xe];
        uStack_78 = puVar11[0x11];
        uStack_80 = puVar11[0x10];
        uStack_70 = puVar11[0x12];
        uStack_d8 = puVar11[5];
        uStack_e0 = puVar11[4];
        uStack_c8 = puVar11[7];
        uStack_d0 = puVar11[6];
        uStack_b8 = puVar11[9];
        uStack_c0 = puVar11[8];
        uStack_a8 = puVar11[0xb];
        uStack_b0 = puVar11[10];
        uStack_f8 = puVar11[1];
        uStack_100 = *puVar11;
        uStack_e8 = puVar11[3];
        uStack_f0 = puVar11[2];
        func_0x000103ccc86c(&uStack_1a0,auStack_238);
        func_0x000103ccc86c(&uStack_100,auStack_238);
        puVar5 = &uStack_1a0;
        FUN_103cb4f9c(puVar5,&uStack_100);
        func_0x000103ccc8a0(&uStack_100);
        func_0x000103ccc8a0(&uStack_1a0);
        if (((ulong)puVar5 & 1) == 0) goto code_r0x000103cb5548;
        puVar11 = puVar11 + 0x13;
        puVar10 = puVar10 + 0x13;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
    func_0x000100e25fcc(lVar6,lVar7,lVar3,lVar8);
    uVar4 = (uint)lVar6;
  }
  else {
code_r0x000103cb5548:
    uVar4 = 0;
  }
  return uVar4 & 1;
}



/* Entry: 103c982b0; end: 103c982f7;  */

void FUN_103c982b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc761f0,0x44,2);
  uRam000000011380dca8 = uStack_38;
  uRam000000011380dca0 = uStack_40;
  uRam000000011380dcb8 = uStack_28;
  uRam000000011380dcb0 = uStack_30;
  uRam000000011380dcc8 = uStack_18;
  uRam000000011380dcc0 = uStack_20;
  return;
}



/* Entry: 103c982f8; end: 103c983df;  */

/* WARNING: Removing unreachable block (ram,0x000103c983dc) */

void FUN_103c982f8(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 == 3) {
        pcVar3 = *(code **)(param_3 + 0x198);
        FUN_103cbad84();
        (*pcVar3)(unaff_x20 + 0x30,&UNK_1106f7798,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 1) goto LAB_103c98384;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_103c98384:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c983e0; end: 103c9849b;  */

void FUN_103c983e0(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[3];
    uVar1 = unaff_x20[2] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if (((uVar1 == 0) ||
        ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 == 0)) &&
       (FUN_103c9849c(), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103c9849c; end: 103c9851f;  */

void FUN_103c9849c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  long lStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_60 = *(long *)(param_1 + 0x30);
  if (lStack_60 != 0) {
    uStack_50 = *(undefined8 *)(param_1 + 0x40);
    uStack_58 = *(undefined8 *)(param_1 + 0x38);
    uStack_48 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    FUN_103cbad84();
    (*pcVar1)(&lStack_60,3,&UNK_1106f7798,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103c98520; end: 103c98567;  */

void FUN_103c98520(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}



/* Entry: 103c98568; end: 103c98597;  */

undefined1  [16] FUN_103c98568(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103c98598; end: 103c985cb;  */

void FUN_103c98598(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103c985cc; end: 103c985df;  */

undefined1  [16] FUN_103c985cc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103c985dc;
  return auVar1;
}



/* Entry: 103c985e0; end: 103c985f3;  */

void FUN_103c985e0(void)

{
  FUN_103c982f8();
  return;
}



/* Entry: 103c985f4; end: 103c98633;  */

void FUN_103c985f4(void)

{
  FUN_103c983e0();
  return;
}



/* Entry: 103c98634; end: 103c9866b;  */

uint FUN_103c98634(long param_1,long param_2)

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
  func_0x000103ccbd10();
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



/* Entry: 103c9866c; end: 103c986c3;  */

uint FUN_103c9866c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_18 = param_1[9];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_68 = unaff_x20[9];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_103cb2300(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103c986c4; end: 103c98763;  */

/* WARNING: Possible PIC construction at 0x000103c98710: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c98720: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c98714) */
/* WARNING: Removing unreachable block (ram,0x000103c98724) */

void FUN_103c986c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffefd0 != -1) {
    func_0x000107c61568(0x112ffefd0,FUN_103c982b0);
  }
  uVar5 = uRam000000011380dcc8;
  uVar4 = uRam000000011380dcc0;
  uVar3 = uRam000000011380dcb8;
  uVar2 = uRam000000011380dcb0;
  uVar1 = uRam000000011380dca8;
  *param_1 = uRam000000011380dca0;
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



/* Entry: 103c98764; end: 103c98777;  */

void FUN_103c98764(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x113000500;
  uStack_18 = param_1;
  func_0x0001000285a8(0x113000500,&UNK_10dc75060);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c98778; end: 103c9888b;  */

void FUN_103c98778(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_c8 [72];
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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
  uStack_38 = unaff_x20[9];
  uStack_40 = unaff_x20[8];
  uStack_78 = unaff_x20[1];
  uStack_80 = *unaff_x20;
  uStack_68 = unaff_x20[3];
  uStack_70 = unaff_x20[2];
  func_0x000107c6068c(auStack_c8,0);
  func_0x000107c5fa50(auStack_c8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c9888c; end: 103c9892b;  */

uint FUN_103c9888c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_68 = param_1[9];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_18 = param_2[9];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_103cb2300(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 103c9892c; end: 103c98a0f;  */

void FUN_103c9892c(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb763c();
LAB_103c989b4:
        (*pcVar4)();
      }
      else if (lVar1 == 2) {
        pcVar4 = *(code **)(param_3 + 0x180);
        func_0x000103cb73bc();
        goto LAB_103c989b4;
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103c98a10; end: 103c98af3;  */

void FUN_103c98a10(undefined1 *param_1,undefined8 param_2,long param_3)

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
    func_0x000103cb763c();
    (*pcVar3)(&lStack_50,1,&UNK_1106f80b0,puVar1,param_2,param_3);
    puVar1 = (undefined1 *)plVar2;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar3 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x000103cb73bc();
    (*pcVar3)(&lStack_50,2,&UNK_1106f6ba0,puVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  return;
}



/* Entry: 103c98af4; end: 103c98b4f;  */

void FUN_103c98af4(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 1;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 103c98b50; end: 103c98b77;  */

void FUN_103c98b50(void)

{
  FUN_103c9892c();
  return;
}



/* Entry: 103c98b78; end: 103c98baf;  */

uint FUN_103c98b78(long param_1,long param_2)

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
  func_0x000103ccbcd0();
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



/* Entry: 103c98bb0; end: 103c98bf7;  */

uint FUN_103c98bb0(undefined8 *param_1)

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
  func_0x000103cb28c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c98bf8; end: 103c98c97;  */

/* WARNING: Possible PIC construction at 0x000103c98c44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c98c54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c98c48) */
/* WARNING: Removing unreachable block (ram,0x000103c98c58) */

void FUN_103c98bf8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffefe0 != -1) {
    func_0x000107c61568(0x112ffefe0,0x103c988e4);
  }
  uVar5 = uRam000000011380dcf8;
  uVar4 = uRam000000011380dcf0;
  uVar3 = uRam000000011380dce8;
  uVar2 = uRam000000011380dce0;
  uVar1 = uRam000000011380dcd8;
  *param_1 = uRam000000011380dcd0;
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



/* Entry: 103c98c98; end: 103c98cab;  */

void FUN_103c98c98(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130004f0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130004f0,&UNK_10dc75058);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c98cac; end: 103c98ddf;  */

void FUN_103c98cac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = *(undefined1 *)(unaff_x20 + 1);
  uStack_50 = unaff_x20[2];
  uStack_48 = *(undefined1 *)(unaff_x20 + 3);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103c98de0; end: 103c98e6b;  */

uint FUN_103c98de0(undefined8 *param_1,undefined8 *param_2)

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
  func_0x000103cb28c0(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 103c98e6c; end: 103c98f0b;  */

/* WARNING: Possible PIC construction at 0x000103c98eb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c98ec8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c98ebc) */
/* WARNING: Removing unreachable block (ram,0x000103c98ecc) */

void FUN_103c98e6c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112ffeff8 != -1) {
    func_0x000107c61568(0x112ffeff8,0x103c98e24);
  }
  uVar5 = uRam000000011380dd28;
  uVar4 = uRam000000011380dd20;
  uVar3 = uRam000000011380dd18;
  uVar2 = uRam000000011380dd10;
  uVar1 = uRam000000011380dd08;
  *param_1 = uRam000000011380dd00;
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



/* Entry: 103c98f0c; end: 103c98f53;  */

void FUN_103c98f0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc760c0,0x48,2);
  uRam000000011380dd38 = uStack_38;
  uRam000000011380dd30 = uStack_40;
  uRam000000011380dd48 = uStack_28;
  uRam000000011380dd40 = uStack_30;
  uRam000000011380dd58 = uStack_18;
  uRam000000011380dd50 = uStack_20;
  return;
}



/* Entry: 103c98f54; end: 103c99097;  */

/* WARNING: Removing unreachable block (ram,0x000103c99094) */

void FUN_103c98f54(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x150);
        }
        else {
          if (lVar1 != 2) goto LAB_103c98fdc;
          pcVar5 = *(code **)(param_3 + 0x60);
        }
        (*pcVar5)();
      }
      else {
        puVar3 = &UNK_1106f8e68;
        if (lVar1 == 3) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000103c8cafc();
          lVar2 = unaff_x20 + 0x38;
        }
        else if (lVar1 == 4) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x000103c8cafc();
          lVar2 = unaff_x20 + 0x60;
        }
        else {
          if (lVar1 != 5) goto LAB_103c98fdc;
          pcVar5 = *(code **)(param_3 + 0x180);
          func_0x000103cb76bc();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_1106f81d0;
        }
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103c98fdc:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103c99098; end: 103c991b3;  */

void FUN_103c99098(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  ulong uStack_50;
  undefined1 uStack_48;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[2] == 0 ||
       ((**(code **)(param_3 + 0x20))(unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) &&
     (FUN_103c991b4(), unaff_x21 == 0)) {
    puVar3 = unaff_x20;
    FUN_103c99240();
    if (unaff_x20[3] != 0) {
      uStack_48 = (undefined1)unaff_x20[4];
      pcVar4 = *(code **)(param_3 + 0x80);
      uStack_50 = unaff_x20[3];
      func_0x000103cb76bc();
      (*pcVar4)(&uStack_50,5,&UNK_1106f81d0,puVar3,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  }
  return;
}



/* Entry: 103c991b4; end: 103c9923f;  */

void FUN_103c991b4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x40);
    uStack_70 = *(undefined8 *)(param_1 + 0x38);
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103c8cafc();
    (*pcVar1)(&uStack_70,3,&UNK_1106f8e68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103c99240; end: 103c992c7;  */

void FUN_103c99240(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x80);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x68);
    uStack_70 = *(undefined8 *)(param_1 + 0x60);
    uStack_58 = *(undefined8 *)(param_1 + 0x78);
    uStack_60 = *(undefined8 *)(param_1 + 0x70);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000103c8cafc();
    (*pcVar1)(&uStack_70,4,&UNK_1106f8e68,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103c992c8; end: 103c9932b;  */

void FUN_103c992c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xb] = 0xf000000000000000;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0xf000000000000000;
  return;
}



/* Entry: 103c9932c; end: 103c9935b;  */

undefined1  [16] FUN_103c9932c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 103c9935c; end: 103c9938f;  */

void FUN_103c9935c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 103c99390; end: 103c993a3;  */

undefined1  [16] FUN_103c99390(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x103c993a0;
  return auVar1;
}



/* Entry: 103c993a4; end: 103c993b7;  */

void FUN_103c993a4(void)

{
  FUN_103c98f54();
  return;
}



/* Entry: 103c993b8; end: 103c99407;  */

void FUN_103c993b8(void)

{
  FUN_103c99098();
  return;
}



/* Entry: 103c99408; end: 103c9940b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103c99408(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103c9940c; end: 103c99443;  */

uint FUN_103c9940c(long param_1,long param_2)

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
  func_0x000103ccbc90();
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



/* Entry: 103c99444; end: 103c994c3;  */

uint FUN_103c99444(undefined8 *param_1)

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
  FUN_103cafb94(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103c994c4; end: 103c99563;  */

/* WARNING: Possible PIC construction at 0x000103c99510: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c99520: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c99514) */
/* WARNING: Removing unreachable block (ram,0x000103c99524) */

void FUN_103c994c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff000 != -1) {
    func_0x000107c61568(0x112fff000,FUN_103c98f0c);
  }
  uVar5 = uRam000000011380dd58;
  uVar4 = uRam000000011380dd50;
  uVar3 = uRam000000011380dd48;
  uVar2 = uRam000000011380dd40;
  uVar1 = uRam000000011380dd38;
  *param_1 = uRam000000011380dd30;
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



/* Entry: 103c99564; end: 103c9959f;  */

void FUN_103c99564(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x1130004e0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x1130004e0,&UNK_10dc75050);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103c995a0; end: 103c996db;  */

void FUN_103c995a0(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103c996dc; end: 103c9975b;  */

uint FUN_103c996dc(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103cafb94(&uStack_140,&uStack_b0);
  return uVar1 & 1;
}



/* Entry: 103c9975c; end: 103c997a3;  */

void FUN_103c9975c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc760a0,0x1f,2);
  uRam000000011380dd68 = uStack_38;
  uRam000000011380dd60 = uStack_40;
  uRam000000011380dd78 = uStack_28;
  uRam000000011380dd70 = uStack_30;
  uRam000000011380dd88 = uStack_18;
  uRam000000011380dd80 = uStack_20;
  return;
}



/* Entry: 103c997a4; end: 103c99843;  */

/* WARNING: Possible PIC construction at 0x000103c997f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103c99800: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103c997f4) */
/* WARNING: Removing unreachable block (ram,0x000103c99804) */

void FUN_103c997a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fff018 != -1) {
    func_0x000107c61568(0x112fff018,FUN_103c9975c);
  }
  uVar5 = uRam000000011380dd88;
  uVar4 = uRam000000011380dd80;
  uVar3 = uRam000000011380dd78;
  uVar2 = uRam000000011380dd70;
  uVar1 = uRam000000011380dd68;
  *param_1 = uRam000000011380dd60;
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



/* Entry: 103c99844; end: 103c9988b;  */

void FUN_103c99844(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc76040,0x5f,2);
  uRam000000011380dd98 = uStack_38;
  uRam000000011380dd90 = uStack_40;
  uRam000000011380dda8 = uStack_28;
  uRam000000011380dda0 = uStack_30;
  uRam000000011380ddb8 = uStack_18;
  uRam000000011380ddb0 = uStack_20;
  return;
}



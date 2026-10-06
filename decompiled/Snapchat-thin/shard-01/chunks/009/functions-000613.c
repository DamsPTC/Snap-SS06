/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101652ea8; end: 101652eef;  */

void FUN_101652ea8(void)

{
  FUN_101652ccc();
  return;
}



/* Entry: 101652ef0; end: 101652f27;  */

uint FUN_101652ef0(long param_1,long param_2)

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
  func_0x000101658d84();
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



/* Entry: 101652f28; end: 101652fc3;  */

/* WARNING: Possible PIC construction at 0x000101652f68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101652f6c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101652f28(undefined8 *param_1)

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
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar23;
  long lVar24;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *unaff_x25;
  ulong uVar25;
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
  
  lVar22 = param_1[3];
  uVar25 = param_1[4];
  uVar18 = unaff_x20[2];
  pbVar9 = (byte *)unaff_x20[3];
  pbVar23 = (byte *)unaff_x20[4];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar14 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  if ((byte *)*unaff_x20 != (byte *)*param_1 || (byte *)unaff_x20[1] != (byte *)param_1[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  func_0x000101654460(uVar18,param_1[2]);
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
    *(undefined8 **)((long)register0x00000008 + -0x20) = unaff_x20;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
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
    *(undefined8 **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
          if (pbVar21 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar22 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
      }
      goto code_r0x000107c605b8;
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
joined_r0x000100e266a4:
        if (((ulong)pbVar21 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
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
    unaff_x20 = *(undefined8 **)((long)register0x00000008 + -0xa0);
    unaff_x19 = *(byte **)((long)register0x00000008 + -0x98);
    unaff_x22 = *(ulong *)((long)register0x00000008 + -0xb0);
    unaff_x21 = *(undefined8 *)((long)register0x00000008 + -0xa8);
    unaff_x24 = *(byte **)((long)register0x00000008 + -0xc0);
    unaff_x23 = *(byte **)((long)register0x00000008 + -0xb8);
    register0x00000008 = (BADSPACEBASE *)((long)register0x00000008 + -0x80);
  } while( true );
}



/* Entry: 101652fc4; end: 101653063;  */

/* WARNING: Possible PIC construction at 0x000101653010: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101653020: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101653014) */
/* WARNING: Removing unreachable block (ram,0x000101653024) */

void FUN_101652fc4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcb20 != -1) {
    func_0x000107c61568(0x112dbcb20,FUN_101652c84);
  }
  uVar5 = uRam0000000113802480;
  uVar4 = uRam0000000113802478;
  uVar3 = uRam0000000113802470;
  uVar2 = uRam0000000113802468;
  uVar1 = uRam0000000113802460;
  *param_1 = uRam0000000113802458;
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



/* Entry: 101653064; end: 101653077;  */

void FUN_101653064(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcd78;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcd78,&UNK_10d974ed0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 101653078; end: 1016530ab;  */

void FUN_101653078(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c5fb20(&uStack_18,param_3);
  return;
}



/* Entry: 1016530ac; end: 1016531b7;  */

void FUN_1016530ac(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a0 [72];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = *unaff_x20;
  uStack_48 = unaff_x20[2];
  uStack_50 = unaff_x20[1];
  uStack_38 = unaff_x20[4];
  uStack_40 = unaff_x20[3];
  func_0x000107c6068c(auStack_a0,0);
  func_0x000107c5fa50(auStack_a0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016531b8; end: 10165324f;  */

/* WARNING: Possible PIC construction at 0x0001016531fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101653200) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1016531b8(undefined8 *param_1,undefined8 *param_2)

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
  ulong unaff_x20;
  undefined8 unaff_x21;
  byte *pbVar23;
  ulong unaff_x22;
  ulong uVar24;
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
  
  uVar18 = param_1[2];
  pbVar9 = (byte *)param_1[3];
  pbVar23 = (byte *)param_1[4];
  lVar22 = param_2[3];
  uVar24 = param_2[4];
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar14 = (byte *)*param_2;
  pbVar15 = (byte *)param_2[1];
  if ((byte *)*param_1 != (byte *)*param_2 || (byte *)param_1[1] != (byte *)param_2[1]) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  func_0x000101654460(uVar18,param_2[2]);
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
    *(ulong *)((long)register0x00000008 + -0x20) = unaff_x20;
    *(byte **)((long)register0x00000008 + -0x18) = unaff_x19;
    *(undefined8 *)((long)register0x00000008 + -0x10) = unaff_x29;
    *(undefined8 *)((long)register0x00000008 + -8) = unaff_x30;
    *(undefined8 *)((long)register0x00000008 + -0x58) =
         *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = (uint)((ulong)pbVar23 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar24 >> 0x20);
    uVar19 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar23;
    if ((ulong)pbVar23 >> 0x3e == 3) {
      uVar18 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar23 != (byte *)0xc000000000000000)) ||
          (uVar24 >> 0x3e < 3)) || ((uVar18 = 0, lVar22 != 0 || (uVar24 != 0xc000000000000000))))
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
        uVar20 = uVar24 >> 0x30 & 0xff;
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
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,uVar24)
        ;
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
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
    *(ulong *)((long)register0x00000008 + -0xa0) = unaff_x20;
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
          if (pbVar21 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar22 == 0) {
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
      if (lVar25 != 0) {
        if (lVar22 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar21 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar22)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar21,lVar25,*(byte **)(pbVar12 + 0x18),lVar22,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar21 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar23 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar22 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar22;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
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
         (((pbVar21 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar23 == (byte *)0x0) &&
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
      lVar22 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar22;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar22 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar22 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar22 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar22 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar22 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar22 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar22 >> 0x38);
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
    uVar24 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 101653250; end: 1016532bf;  */

void FUN_101653250(void)

{
  func_0x000107c5fb78(0xd000000000000013,0x800000010efb3f70);
  uRam0000000113802488 = 0xd000000000000029;
  uRam0000000113802490 = 0x800000010efb3f40;
  return;
}



/* Entry: 1016532c0; end: 101653307;  */

void FUN_1016532c0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d974f20,0x26,2);
  uRam00000001138024a0 = uStack_38;
  uRam0000000113802498 = uStack_40;
  uRam00000001138024b0 = uStack_28;
  uRam00000001138024a8 = uStack_30;
  uRam00000001138024c0 = uStack_18;
  uRam00000001138024b8 = uStack_20;
  return;
}



/* Entry: 101653308; end: 1016533b3;  */

void FUN_101653308(undefined8 param_1,long param_2,long param_3)

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
      pcVar3 = *(code **)(param_3 + 0x138);
      goto LAB_101653344;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_101653344:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_101653344;
}



/* Entry: 1016533b4; end: 10165347f;  */

void FUN_1016533b4(undefined8 param_1,undefined8 param_2,long param_3)

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
     (((char)unaff_x20[2] != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,2,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[4];
    uVar1 = unaff_x20[3] & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(unaff_x20[3],uVar2,3,param_2,param_3), unaff_x21 == 0)) {
      func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}



/* Entry: 101653480; end: 1016534c7;  */

void FUN_101653480(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0xe000000000000000;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 1016534c8; end: 1016534f7;  */

undefined1  [16] FUN_1016534c8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1016534f8; end: 10165352b;  */

void FUN_1016534f8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 10165352c; end: 10165353f;  */

undefined1  [16] FUN_10165352c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x10165353c;
  return auVar1;
}



/* Entry: 101653540; end: 101653567;  */

void FUN_101653540(void)

{
  FUN_101653308();
  return;
}



/* Entry: 101653568; end: 10165356b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_101653568(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10165356c; end: 1016535a3;  */

uint FUN_10165356c(long param_1,long param_2)

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
  FUN_101658d44();
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



/* Entry: 1016535a4; end: 1016535fb;  */

uint FUN_1016535a4(undefined8 *param_1)

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
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_28 = param_1[5];
  uStack_30 = param_1[4];
  uStack_20 = param_1[6];
  uStack_88 = unaff_x20[1];
  uStack_90 = *unaff_x20;
  uStack_78 = unaff_x20[3];
  uStack_80 = unaff_x20[2];
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_60 = unaff_x20[6];
  FUN_101656070(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 1016535fc; end: 10165369b;  */

/* WARNING: Possible PIC construction at 0x000101653648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101653658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010165364c) */
/* WARNING: Removing unreachable block (ram,0x00010165365c) */

void FUN_1016535fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112dbcb40 != -1) {
    func_0x000107c61568(0x112dbcb40,FUN_1016532c0);
  }
  uVar5 = uRam00000001138024c0;
  uVar4 = uRam00000001138024b8;
  uVar3 = uRam00000001138024b0;
  uVar2 = uRam00000001138024a8;
  uVar1 = uRam00000001138024a0;
  *param_1 = uRam0000000113802498;
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



/* Entry: 10165369c; end: 1016536d7;  */

void FUN_10165369c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112dbcd68;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112dbcd68,&UNK_10d974ec8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1016536d8; end: 1016537fb;  */

void FUN_1016536d8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = unaff_x20[1];
  uStack_58 = *(undefined1 *)(unaff_x20 + 2);
  uStack_50 = unaff_x20[3];
  uStack_48 = unaff_x20[4];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1016537fc; end: 101653853;  */

uint FUN_1016537fc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  uStack_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  uStack_30 = param_2[4];
  uStack_20 = param_2[6];
  FUN_101656070(&uStack_90,&uStack_50);
  return uVar1 & 1;
}



/* Entry: 101653854; end: 101655917;  */

/* WARNING: Possible PIC construction at 0x000101655094: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101655098) */
/* WARNING: Removing unreachable block (ram,0x00010165509c) */
/* WARNING: Removing unreachable block (ram,0x00010165511c) */
/* WARNING: Removing unreachable block (ram,0x000101655150) */
/* WARNING: Removing unreachable block (ram,0x0001016552d8) */
/* WARNING: Removing unreachable block (ram,0x0001016552e4) */
/* WARNING: Removing unreachable block (ram,0x000101655158) */
/* WARNING: Removing unreachable block (ram,0x000101655524) */
/* WARNING: Removing unreachable block (ram,0x000101655124) */
/* WARNING: Removing unreachable block (ram,0x0001016552b8) */
/* WARNING: Removing unreachable block (ram,0x000101655520) */
/* WARNING: Removing unreachable block (ram,0x0001016552c8) */
/* WARNING: Removing unreachable block (ram,0x0001016552d4) */
/* WARNING: Removing unreachable block (ram,0x000101655128) */
/* WARNING: Removing unreachable block (ram,0x0001016550ac) */
/* WARNING: Removing unreachable block (ram,0x0001016550b8) */
/* WARNING: Removing unreachable block (ram,0x0001016550c4) */
/* WARNING: Removing unreachable block (ram,0x0001016550cc) */
/* WARNING: Removing unreachable block (ram,0x0001016550d8) */
/* WARNING: Removing unreachable block (ram,0x000101655168) */
/* WARNING: Removing unreachable block (ram,0x000101655134) */
/* WARNING: Removing unreachable block (ram,0x000101654fc4) */
/* WARNING: Removing unreachable block (ram,0x00010165513c) */
/* WARNING: Removing unreachable block (ram,0x00010165514c) */
/* WARNING: Removing unreachable block (ram,0x00010165551c) */
/* WARNING: Removing unreachable block (ram,0x000101655170) */
/* WARNING: Removing unreachable block (ram,0x00010165517c) */
/* WARNING: Removing unreachable block (ram,0x000101655518) */
/* WARNING: Removing unreachable block (ram,0x00010165518c) */
/* WARNING: Removing unreachable block (ram,0x000101655174) */
/* WARNING: Removing unreachable block (ram,0x000101655190) */
/* WARNING: Removing unreachable block (ram,0x0001016554a4) */
/* WARNING: Removing unreachable block (ram,0x000101655198) */
/* WARNING: Removing unreachable block (ram,0x000101654fc8) */
/* WARNING: Removing unreachable block (ram,0x0001016551a0) */
/* WARNING: Removing unreachable block (ram,0x000101655274) */
/* WARNING: Removing unreachable block (ram,0x00010165534c) */
/* WARNING: Removing unreachable block (ram,0x00010165527c) */
/* WARNING: Removing unreachable block (ram,0x0001016553b4) */
/* WARNING: Removing unreachable block (ram,0x000101655298) */
/* WARNING: Removing unreachable block (ram,0x000101655530) */
/* WARNING: Removing unreachable block (ram,0x0001016552ac) */
/* WARNING: Removing unreachable block (ram,0x0001016553bc) */
/* WARNING: Removing unreachable block (ram,0x00010165552c) */
/* WARNING: Removing unreachable block (ram,0x0001016553c8) */
/* WARNING: Removing unreachable block (ram,0x000101655438) */
/* WARNING: Removing unreachable block (ram,0x0001016553d4) */
/* WARNING: Removing unreachable block (ram,0x0001016553d8) */
/* WARNING: Removing unreachable block (ram,0x00010165543c) */
/* WARNING: Removing unreachable block (ram,0x0001016551a8) */
/* WARNING: Removing unreachable block (ram,0x0001016552e8) */
/* WARNING: Removing unreachable block (ram,0x000101655528) */
/* WARNING: Removing unreachable block (ram,0x000101655300) */
/* WARNING: Removing unreachable block (ram,0x0001016553e4) */
/* WARNING: Removing unreachable block (ram,0x00010165530c) */
/* WARNING: Removing unreachable block (ram,0x000101655534) */
/* WARNING: Removing unreachable block (ram,0x000101655320) */
/* WARNING: Removing unreachable block (ram,0x000101655334) */
/* WARNING: Removing unreachable block (ram,0x000101655340) */
/* WARNING: Removing unreachable block (ram,0x000101655344) */
/* WARNING: Removing unreachable block (ram,0x0001016553f4) */
/* WARNING: Removing unreachable block (ram,0x000101655480) */
/* WARNING: Removing unreachable block (ram,0x000101655498) */
/* WARNING: Removing unreachable block (ram,0x0001016551b0) */
/* WARNING: Removing unreachable block (ram,0x0001016553a0) */
/* WARNING: Removing unreachable block (ram,0x0001016553b0) */
/* WARNING: Removing unreachable block (ram,0x0001016550e4) */
/* WARNING: Removing unreachable block (ram,0x000101654ffc) */
/* WARNING: Removing unreachable block (ram,0x000101655000) */

ulong * FUN_101653854(ulong *param_1,ulong *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  ulong *puVar4;
  code *pcVar5;
  undefined1 *puVar6;
  uint uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong *puVar10;
  long lVar11;
  long lVar12;
  ulong *puVar13;
  ulong uVar14;
  undefined1 *puVar15;
  byte *pbVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  ulong uVar20;
  ulong *puVar21;
  ulong uVar22;
  uint uVar23;
  ulong uVar24;
  int iVar25;
  ulong *unaff_x19;
  ulong *unaff_x20;
  undefined *puVar26;
  ulong *unaff_x21;
  long lVar27;
  ulong *unaff_x22;
  ulong *puVar28;
  ulong uVar29;
  int iVar30;
  ulong *unaff_x23;
  ulong *puVar31;
  ulong *unaff_x24;
  ulong uVar32;
  ulong *unaff_x25;
  ulong *unaff_x26;
  ulong *unaff_x27;
  ulong *puVar33;
  undefined1 **ppuVar34;
  undefined8 uVar35;
  undefined1 auStack_460 [8];
  ulong *puStack_458;
  ulong *puStack_450;
  ulong *puStack_448;
  ulong *puStack_440;
  ulong *puStack_438;
  ulong *puStack_430;
  ulong *puStack_428;
  ulong *puStack_420;
  ulong *puStack_418;
  byte abStack_409 [9];
  byte abStack_400 [240];
  ulong uStack_310;
  ulong uStack_308;
  ulong uStack_300;
  ulong uStack_2f8;
  ulong uStack_2f0;
  ulong uStack_2e8;
  ulong uStack_2e0;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  ulong uStack_2c0;
  ulong uStack_2b8;
  ulong uStack_2b0;
  ulong uStack_2a8;
  ulong uStack_2a0;
  ulong uStack_298;
  ulong uStack_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong uStack_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  ulong uStack_220;
  ulong uStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong uStack_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong uStack_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong uStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  ulong uStack_1a0;
  ulong uStack_198;
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  long lStack_128;
  ulong *puStack_110;
  ulong *puStack_108;
  ulong *puStack_100;
  ulong *puStack_f8;
  ulong *puStack_f0;
  ulong *puStack_e8;
  ulong *puStack_e0;
  ulong *puStack_d8;
  ulong *puStack_d0;
  ulong *puStack_c8;
  undefined1 *puStack_c0;
  undefined8 uStack_b8;
  ulong *puStack_b0;
  ulong *puStack_a8;
  ulong *puStack_a0;
  ulong *puStack_98;
  ulong *puStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar33 = (ulong *)param_1[2];
  if (puVar33 == (ulong *)param_2[2]) {
    if ((puVar33 != (ulong *)0x0) && (param_1 != param_2)) {
      unaff_x21 = (ulong *)0x0;
      unaff_x27 = param_2 + 6;
      unaff_x26 = param_1 + 6;
      do {
        unaff_x23 = (ulong *)unaff_x26[-2];
        unaff_x22 = (ulong *)unaff_x26[-1];
        unaff_x19 = (ulong *)*unaff_x26;
        unaff_x20 = (ulong *)unaff_x27[-2];
        unaff_x25 = (ulong *)unaff_x27[-1];
        unaff_x24 = (ulong *)*unaff_x27;
        func_0x00010006c00c(unaff_x23,unaff_x22);
        func_0x000107c6157c(unaff_x19);
        puStack_90 = unaff_x20;
        func_0x00010006c00c(unaff_x20,unaff_x25);
        puVar8 = unaff_x24;
        func_0x000107c6157c();
        param_2 = unaff_x22;
        if (unaff_x19 != unaff_x24) {
          func_0x000107c6157c(unaff_x19);
          func_0x000107c6157c(unaff_x24);
          unaff_x20 = unaff_x19;
          FUN_101651f90(unaff_x19,unaff_x24);
          func_0x000107c61574(unaff_x24);
          puVar8 = unaff_x19;
          func_0x000107c61574();
          if (((ulong)unaff_x20 & 1) != 0) goto LAB_101653964;
LAB_101653cac:
          func_0x00010006c090(puStack_90,unaff_x25);
          func_0x000107c61574(unaff_x24);
          func_0x00010006c090(unaff_x23);
          func_0x000107c61574(unaff_x19);
          goto LAB_101653cd4;
        }
LAB_101653964:
        puVar31 = puStack_90;
        uVar7 = (uint)((ulong)unaff_x22 >> 0x20);
        uVar18 = uVar7 >> 0x1e;
        uVar2 = (uint)((ulong)unaff_x25 >> 0x20);
        uVar23 = uVar2 >> 0x1e;
        iVar30 = (int)unaff_x23;
        if ((ulong)unaff_x22 >> 0x3e == 3) {
          uVar20 = 0;
          if ((((unaff_x23 != (ulong *)0x0) || (unaff_x22 != (ulong *)0xc000000000000000)) ||
              ((ulong)unaff_x25 >> 0x3e < 3)) ||
             ((uVar20 = 0, puStack_90 != (ulong *)0x0 || (unaff_x25 != (ulong *)0xc000000000000000))
             )) goto joined_r0x0001016539dc;
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c61574(unaff_x24);
          puVar8 = (ulong *)0x0;
          param_2 = (ulong *)0xc000000000000000;
LAB_1016538d0:
          func_0x00010006c090(puVar8);
          func_0x000107c61574(unaff_x19);
        }
        else {
          if (1 < uVar7 >> 0x1e) {
            if (uVar18 == 2) {
              uVar20 = unaff_x23[3] - unaff_x23[2];
              if (SBORROW8(unaff_x23[3],unaff_x23[2])) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d20);
                (*pcVar5)();
              }
              goto joined_r0x0001016539dc;
            }
            uVar20 = 0;
            if (uVar23 < 2) goto LAB_101653a18;
LAB_1016539e0:
            if (uVar23 == 2) {
              uVar24 = puStack_90[3] - puStack_90[2];
              if (SBORROW8(puStack_90[3],puStack_90[2])) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d14);
                (*pcVar5)();
              }
              goto LAB_101653a38;
            }
            if (uVar20 != 0) goto LAB_101653cac;
LAB_1016538b4:
            func_0x00010006c090(puStack_90,unaff_x25);
            func_0x000107c61574(unaff_x24);
            puVar8 = unaff_x23;
            goto LAB_1016538d0;
          }
          if (uVar18 == 0) {
            uVar20 = (ulong)unaff_x22 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)unaff_x23 >> 0x20);
            if (SBORROW4(iVar19,iVar30)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d1c);
              (*pcVar5)();
            }
            uVar20 = (ulong)(iVar19 - iVar30);
          }
joined_r0x0001016539dc:
          if (1 < uVar2 >> 0x1e) goto LAB_1016539e0;
LAB_101653a18:
          if (uVar23 == 0) {
            uVar24 = (ulong)unaff_x25 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)puStack_90 >> 0x20);
            if (SBORROW4(iVar19,(int)puStack_90)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d18);
              (*pcVar5)();
            }
            uVar24 = (ulong)(iVar19 - (int)puStack_90);
          }
LAB_101653a38:
          if (uVar20 != uVar24) goto LAB_101653cac;
          if ((long)uVar20 < 1) goto LAB_1016538b4;
          if (uVar18 < 2) {
            if (uVar18 != 0) {
              lVar27 = (long)iVar30;
              puStack_a0 = (ulong *)(((long)unaff_x23 >> 0x20) - lVar27);
              if ((long)unaff_x23 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d24);
                puStack_98 = unaff_x21;
                (*pcVar5)();
              }
              puStack_98 = unaff_x21;
              func_0x000107c5ec30();
              if (puVar8 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar27 = 0;
                lVar11 = 0;
              }
              else {
                puStack_a8 = puVar8;
                func_0x000107c5ec3c();
                if (SBORROW8(lVar27,(long)puVar8)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d30);
                  (*pcVar5)();
                }
                lVar17 = (lVar27 - (long)puVar8) + (long)puStack_a8;
                func_0x000107c5ec38();
                if ((long)puStack_a0 <= (long)puVar8) {
                  puVar8 = puStack_a0;
                }
                lVar27 = 0;
                if (lVar17 != 0) {
                  lVar27 = lVar17;
                }
                lVar11 = 0;
                if (lVar17 != 0) {
                  lVar11 = (long)puVar8 + lVar17;
                }
              }
              goto LAB_101653c60;
            }
            abStack_80[0] = (byte)unaff_x23;
            abStack_80[1] = (byte)((ulong)unaff_x23 >> 8);
            abStack_80[2] = (byte)((ulong)unaff_x23 >> 0x10);
            abStack_80[3] = (byte)((ulong)unaff_x23 >> 0x18);
            abStack_80[4] = (byte)((ulong)unaff_x23 >> 0x20);
            abStack_80[5] = (byte)((ulong)unaff_x23 >> 0x28);
            abStack_80[6] = (byte)((ulong)unaff_x23 >> 0x30);
            abStack_80[7] = (byte)((ulong)unaff_x23 >> 0x38);
            abStack_80[8] = (byte)unaff_x22;
            abStack_80[9] = (byte)((ulong)unaff_x22 >> 8);
            abStack_80[10] = (byte)((ulong)unaff_x22 >> 0x10);
            abStack_80[0xb] = (byte)((ulong)unaff_x22 >> 0x18);
            abStack_80[0xc] = (byte)((ulong)unaff_x22 >> 0x20);
            abStack_80[0xd] = (byte)((ulong)unaff_x22 >> 0x28);
            pbVar16 = abStack_80 + ((ulong)unaff_x22 >> 0x30 & 0xff);
LAB_101653bc0:
            FUN_100e25bdc(&bStack_81,abStack_80,pbVar16,puStack_90,unaff_x25);
            func_0x00010006c090(puVar31,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            unaff_x20 = puVar31;
            bVar3 = bStack_81;
          }
          else {
            if (uVar18 != 2) {
              abStack_80[8] = 0;
              abStack_80[9] = 0;
              abStack_80[10] = 0;
              abStack_80[0xb] = 0;
              abStack_80[0xc] = 0;
              abStack_80[0xd] = 0;
              abStack_80[0] = 0;
              abStack_80[1] = 0;
              abStack_80[2] = 0;
              abStack_80[3] = 0;
              abStack_80[4] = 0;
              abStack_80[5] = 0;
              abStack_80[6] = 0;
              abStack_80[7] = 0;
              pbVar16 = abStack_80;
              goto LAB_101653bc0;
            }
            puStack_a0 = (ulong *)unaff_x23[2];
            puStack_a8 = (ulong *)unaff_x23[3];
            puStack_98 = unaff_x21;
            func_0x000107c5ec30();
            puStack_b0 = unaff_x23;
            if (puVar8 == (ulong *)0x0) {
              lVar27 = 0;
            }
            else {
              puVar31 = puVar8;
              func_0x000107c5ec3c();
              if (SBORROW8((long)puStack_a0,(long)puVar31)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d2c);
                (*pcVar5)();
              }
              lVar27 = ((long)puStack_a0 - (long)puVar31) + (long)puVar8;
              puVar8 = puVar31;
            }
            puVar31 = (ulong *)((long)puStack_a8 - (long)puStack_a0);
            if (SBORROW8((long)puStack_a8,(long)puStack_a0)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101653d28);
              (*pcVar5)();
            }
            func_0x000107c5ec38();
            unaff_x23 = puStack_b0;
            if (lVar27 == 0) {
              lVar11 = 0;
            }
            else {
              if ((long)puVar31 <= (long)puVar8) {
                puVar8 = puVar31;
              }
              lVar11 = (long)puVar8 + lVar27;
            }
LAB_101653c60:
            unaff_x20 = puStack_90;
            unaff_x21 = puStack_98;
            FUN_100e25bdc(abStack_80,lVar27,lVar11,puStack_90,unaff_x25);
            func_0x00010006c090(unaff_x20,unaff_x25);
            func_0x000107c61574(unaff_x24);
            func_0x00010006c090(unaff_x23);
            func_0x000107c61574(unaff_x19);
            bVar3 = abStack_80[0];
          }
          if ((bVar3 & 1) == 0) goto LAB_101653cd4;
        }
        unaff_x27 = unaff_x27 + 3;
        unaff_x26 = unaff_x26 + 3;
        puVar33 = (ulong *)((long)puVar33 + -1);
      } while (puVar33 != (ulong *)0x0);
    }
    puVar8 = (ulong *)0x1;
  }
  else {
LAB_101653cd4:
    puVar8 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return puVar8;
  }
  func_0x000107c60e78();
  uStack_b8 = 0x101653d34;
  ppuVar34 = &puStack_c0;
  lStack_128 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar21 = (ulong *)puVar8[2];
  puVar28 = unaff_x22;
  puVar31 = unaff_x23;
  puStack_110 = puVar33;
  puStack_108 = unaff_x27;
  puStack_100 = unaff_x26;
  puStack_f8 = unaff_x25;
  puStack_f0 = unaff_x24;
  puStack_e8 = unaff_x23;
  puStack_e0 = unaff_x22;
  puStack_d8 = unaff_x21;
  puStack_d0 = unaff_x20;
  puStack_c8 = unaff_x19;
  puStack_c0 = &stack0xfffffffffffffff0;
  if (puVar21 == (ulong *)param_2[2]) {
    if ((puVar21 == (ulong *)0x0) || (puVar8 == param_2)) {
      puVar8 = (ulong *)0x1;
    }
    else {
      puVar31 = (ulong *)0x0;
      puStack_458 = (ulong *)0x0;
      puVar28 = &uStack_310;
      puStack_440 = puVar8 + 4;
      puStack_448 = param_2 + 4;
      puStack_450 = puVar21;
      do {
        puVar33 = puStack_440 + (long)puVar31 * 5;
        uVar20 = *puVar33;
        unaff_x20 = (ulong *)puVar33[1];
        unaff_x24 = (ulong *)puVar33[2];
        puStack_418 = (ulong *)puVar33[3];
        unaff_x19 = (ulong *)puVar33[4];
        puVar21 = puStack_448 + (long)puVar31 * 5;
        unaff_x27 = (ulong *)puVar21[1];
        puVar33 = (ulong *)puVar21[2];
        puVar8 = (ulong *)puVar21[3];
        unaff_x25 = (ulong *)puVar21[4];
        unaff_x26 = puVar8;
        if (((uVar20 != *puVar21 || unaff_x20 != unaff_x27) &&
            (param_2 = unaff_x20, func_0x000107c605b8(), (uVar20 & 1) == 0)) ||
           (unaff_x21 = (ulong *)unaff_x24[2], unaff_x21 != (ulong *)puVar33[2]))
        goto LAB_1016543f8;
        puVar21 = puVar8;
        puStack_438 = unaff_x20;
        puStack_430 = puVar8;
        puStack_428 = unaff_x25;
        puStack_420 = unaff_x19;
        if (unaff_x21 == (ulong *)0x0) {
          func_0x000107c61434(unaff_x20);
          func_0x000107c61434(unaff_x24);
          func_0x00010006c00c(puStack_418,unaff_x19);
          func_0x000107c61434(unaff_x27);
          func_0x000107c61434(puVar33);
          func_0x00010006c00c(puVar8,unaff_x25);
        }
        else {
          func_0x000107c61434(unaff_x20);
          func_0x000107c61434(unaff_x24);
          func_0x00010006c00c(puStack_418,unaff_x19);
          func_0x000107c61434(unaff_x27);
          func_0x000107c61434(puVar33);
          func_0x00010006c00c(puVar8,unaff_x25);
          if (unaff_x24 != puVar33) {
            puVar8 = (ulong *)0x0;
            unaff_x25 = unaff_x24 + 4;
            unaff_x19 = puVar33 + 4;
            do {
              if ((ulong *)unaff_x24[2] <= puVar8) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101654438);
                (*pcVar5)();
              }
              uStack_308 = unaff_x25[1];
              uStack_310 = *unaff_x25;
              uStack_2f8 = unaff_x25[3];
              uStack_300 = unaff_x25[2];
              uStack_2e8 = unaff_x25[5];
              uStack_2f0 = unaff_x25[4];
              uStack_2d8 = unaff_x25[7];
              uStack_2e0 = unaff_x25[6];
              uStack_2c8 = unaff_x25[9];
              uStack_2d0 = unaff_x25[8];
              uStack_2b8 = unaff_x25[0xb];
              uStack_2c0 = unaff_x25[10];
              uStack_2a8 = unaff_x25[0xd];
              uStack_2b0 = unaff_x25[0xc];
              uStack_298 = unaff_x25[0xf];
              uStack_2a0 = unaff_x25[0xe];
              uStack_288 = unaff_x25[0x11];
              uStack_290 = unaff_x25[0x10];
              uStack_278 = unaff_x25[0x13];
              uStack_280 = unaff_x25[0x12];
              uStack_268 = unaff_x25[0x15];
              uStack_270 = unaff_x25[0x14];
              uStack_258 = unaff_x25[0x17];
              uStack_260 = unaff_x25[0x16];
              uStack_248 = unaff_x25[0x19];
              uStack_250 = unaff_x25[0x18];
              uStack_238 = unaff_x25[0x1b];
              uStack_240 = unaff_x25[0x1a];
              uStack_228 = unaff_x25[0x1d];
              uStack_230 = unaff_x25[0x1c];
              if ((ulong *)puVar33[2] <= puVar8) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10165443c);
                (*pcVar5)();
              }
              uStack_218 = unaff_x19[1];
              uStack_220 = *unaff_x19;
              uStack_208 = unaff_x19[3];
              uStack_210 = unaff_x19[2];
              uStack_1f8 = unaff_x19[5];
              uStack_200 = unaff_x19[4];
              uStack_1e8 = unaff_x19[7];
              uStack_1f0 = unaff_x19[6];
              uStack_1d8 = unaff_x19[9];
              uStack_1e0 = unaff_x19[8];
              uStack_1c8 = unaff_x19[0xb];
              uStack_1d0 = unaff_x19[10];
              uStack_1b8 = unaff_x19[0xd];
              uStack_1c0 = unaff_x19[0xc];
              uStack_1a8 = unaff_x19[0xf];
              uStack_1b0 = unaff_x19[0xe];
              uStack_198 = unaff_x19[0x11];
              uStack_1a0 = unaff_x19[0x10];
              uStack_188 = unaff_x19[0x13];
              uStack_190 = unaff_x19[0x12];
              uStack_178 = unaff_x19[0x15];
              uStack_180 = unaff_x19[0x14];
              uStack_168 = unaff_x19[0x17];
              uStack_170 = unaff_x19[0x16];
              uStack_158 = unaff_x19[0x19];
              uStack_160 = unaff_x19[0x18];
              uStack_148 = unaff_x19[0x1b];
              uStack_150 = unaff_x19[0x1a];
              uStack_138 = unaff_x19[0x1d];
              uStack_140 = unaff_x19[0x1c];
              FUN_101553fa0(&uStack_310,abStack_400);
              FUN_101553fa0(&uStack_220,abStack_400);
              unaff_x20 = &uStack_310;
              FUN_101655a1c(unaff_x20,&uStack_220);
              func_0x000101554010(&uStack_220);
              puVar21 = &uStack_310;
              func_0x000101554010();
              if (((ulong)unaff_x20 & 1) == 0) goto LAB_1016543c8;
              puVar8 = (ulong *)((long)puVar8 + 1);
              unaff_x19 = unaff_x19 + 0x1e;
              unaff_x25 = unaff_x25 + 0x1e;
            } while (unaff_x21 != puVar8);
          }
        }
        puVar9 = puStack_418;
        unaff_x26 = puStack_420;
        puVar4 = puStack_428;
        puVar10 = puStack_430;
        puVar13 = puStack_458;
        uVar7 = (uint)((ulong)puStack_420 >> 0x20);
        uVar18 = uVar7 >> 0x1e;
        uVar2 = (uint)((ulong)puStack_428 >> 0x20);
        iVar30 = (int)puStack_418;
        if ((ulong)puStack_420 >> 0x3e != 3) {
          if (uVar7 >> 0x1e < 2) {
            if (uVar18 == 0) {
              uVar20 = (ulong)puStack_420 >> 0x30 & 0xff;
            }
            else {
              iVar19 = (int)((ulong)puStack_418 >> 0x20);
              if (SBORROW4(iVar19,iVar30)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101654448);
                (*pcVar5)();
              }
              uVar20 = (ulong)(iVar19 - iVar30);
            }
            goto joined_r0x00010165400c;
          }
          if (uVar18 == 2) {
            uVar20 = puStack_418[3] - puStack_418[2];
            if (SBORROW8(puStack_418[3],puStack_418[2])) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10165444c);
              (*pcVar5)();
            }
          }
          else {
            uVar20 = 0;
          }
joined_r0x000101654218:
          if (uVar2 >> 0x1e < 2) goto LAB_10165404c;
LAB_101654010:
          if (uVar2 >> 0x1e == 2) {
            uVar24 = puStack_430[3] - puStack_430[2];
            if (SBORROW8(puStack_430[3],puStack_430[2])) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101654444);
              (*pcVar5)();
            }
            goto LAB_101654070;
          }
          if (uVar20 == 0) goto LAB_10165415c;
LAB_1016543c8:
          unaff_x26 = puVar8;
          func_0x000107c6142c(puVar33);
          func_0x000107c6142c(unaff_x27);
          func_0x00010006c090(puStack_430,puStack_428);
          func_0x000107c6142c(unaff_x24);
          func_0x000107c6142c(puStack_438);
          param_2 = puStack_420;
          func_0x00010006c090(puStack_418);
          goto LAB_1016543f8;
        }
        uVar20 = 0;
        if (puStack_418 == (ulong *)0x0) {
          if (((puStack_420 != (ulong *)0xc000000000000000) || ((ulong)puStack_428 >> 0x3e < 3)) ||
             ((uVar20 = 0, puStack_430 != (ulong *)0x0 ||
              (puStack_428 != (ulong *)0xc000000000000000)))) goto joined_r0x000101654218;
          func_0x000107c6142c(puVar33);
          func_0x000107c6142c(unaff_x27);
          func_0x00010006c090(0,0xc000000000000000);
          func_0x000107c6142c(unaff_x24);
          func_0x000107c6142c(puStack_438);
          puVar21 = (ulong *)0x0;
          param_2 = (ulong *)0xc000000000000000;
LAB_101654188:
          func_0x00010006c090(puVar21);
          unaff_x26 = puVar8;
        }
        else {
joined_r0x00010165400c:
          if (1 < uVar2 >> 0x1e) goto LAB_101654010;
LAB_10165404c:
          if (uVar2 >> 0x1e == 0) {
            uVar24 = (ulong)puStack_428 >> 0x30 & 0xff;
          }
          else {
            iVar19 = (int)((ulong)puStack_430 >> 0x20);
            if (SBORROW4(iVar19,(int)puStack_430)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101654440);
              (*pcVar5)();
            }
            uVar24 = (ulong)(iVar19 - (int)puStack_430);
          }
LAB_101654070:
          if (uVar20 != uVar24) goto LAB_1016543c8;
          if ((long)uVar20 < 1) {
LAB_10165415c:
            func_0x000107c6142c(puVar33);
            func_0x000107c6142c(unaff_x27);
            func_0x00010006c090(puStack_430,puStack_428);
            func_0x000107c6142c(unaff_x24);
            func_0x000107c6142c(puStack_438);
            puVar21 = puStack_418;
            param_2 = puStack_420;
            goto LAB_101654188;
          }
          param_2 = unaff_x26;
          if (uVar18 < 2) {
            if (uVar18 != 0) {
              unaff_x25 = (ulong *)(long)iVar30;
              puVar8 = (ulong *)(((long)puStack_418 >> 0x20) - (long)unaff_x25);
              if ((long)puStack_418 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101654450);
                (*pcVar5)();
              }
              func_0x000107c5ec30();
              if (puVar21 == (ulong *)0x0) {
                func_0x000107c5ec38();
                lVar27 = 0;
                lVar11 = 0;
              }
              else {
                puVar13 = puVar21;
                func_0x000107c5ec3c();
                if (SBORROW8((long)unaff_x25,(long)puVar13)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10165445c);
                  (*pcVar5)();
                }
                lVar17 = ((long)unaff_x25 - (long)puVar13) + (long)puVar21;
                func_0x000107c5ec38();
                if ((long)puVar8 <= (long)puVar13) {
                  puVar13 = puVar8;
                }
                lVar27 = 0;
                if (lVar17 != 0) {
                  lVar27 = lVar17;
                }
                lVar11 = 0;
                if (lVar17 != 0) {
                  lVar11 = (long)puVar13 + lVar17;
                }
              }
              puVar10 = puStack_428;
              puVar13 = puStack_430;
              unaff_x21 = puStack_458;
              FUN_100e25bdc(abStack_400,lVar27,lVar11,puStack_430,puStack_428);
              puStack_458 = unaff_x21;
              func_0x000107c6142c(puVar33);
              func_0x000107c6142c(unaff_x27);
              unaff_x19 = puVar10;
              unaff_x20 = puVar13;
              goto LAB_101654380;
            }
            abStack_400[0] = (byte)puStack_418;
            abStack_400[1] = (byte)((ulong)puStack_418 >> 8);
            abStack_400[2] = (byte)((ulong)puStack_418 >> 0x10);
            abStack_400[3] = (byte)((ulong)puStack_418 >> 0x18);
            abStack_400[4] = (byte)((ulong)puStack_418 >> 0x20);
            abStack_400[5] = (byte)((ulong)puStack_418 >> 0x28);
            abStack_400[6] = (byte)((ulong)puStack_418 >> 0x30);
            abStack_400[7] = (byte)((ulong)puStack_418 >> 0x38);
            abStack_400[8] = (byte)puStack_420;
            abStack_400[9] = (byte)((ulong)puStack_420 >> 8);
            abStack_400[10] = (byte)((ulong)puStack_420 >> 0x10);
            abStack_400[0xb] = (byte)((ulong)puStack_420 >> 0x18);
            abStack_400[0xc] = (byte)((ulong)puStack_420 >> 0x20);
            abStack_400[0xd] = (byte)((ulong)puStack_420 >> 0x28);
            FUN_100e25bdc(abStack_409,abStack_400,abStack_400 + ((ulong)puStack_420 >> 0x30 & 0xff),
                          puStack_430,puStack_428);
            puStack_458 = puVar13;
            func_0x000107c6142c(puVar33);
            func_0x000107c6142c(unaff_x27);
            func_0x00010006c090(puVar10,puVar4);
            func_0x000107c6142c(unaff_x24);
            func_0x000107c6142c(puStack_438);
            unaff_x19 = puVar9;
            unaff_x20 = puVar4;
            unaff_x25 = puVar10;
LAB_1016542d8:
            func_0x00010006c090(puVar9);
            unaff_x21 = puVar13;
            bVar3 = abStack_409[0];
          }
          else {
            if (uVar18 != 2) {
              abStack_400[8] = 0;
              abStack_400[9] = 0;
              abStack_400[10] = 0;
              abStack_400[0xb] = 0;
              abStack_400[0xc] = 0;
              abStack_400[0xd] = 0;
              abStack_400[0] = 0;
              abStack_400[1] = 0;
              abStack_400[2] = 0;
              abStack_400[3] = 0;
              abStack_400[4] = 0;
              abStack_400[5] = 0;
              abStack_400[6] = 0;
              abStack_400[7] = 0;
              FUN_100e25bdc(abStack_409,abStack_400,abStack_400,puStack_430,puStack_428);
              puStack_458 = puVar13;
              func_0x000107c6142c(puVar33);
              func_0x000107c6142c(unaff_x27);
              func_0x00010006c090(puVar10,puVar4);
              func_0x000107c6142c(unaff_x24);
              func_0x000107c6142c(puStack_438);
              puVar9 = puStack_418;
              unaff_x19 = puVar4;
              unaff_x20 = puVar10;
              goto LAB_1016542d8;
            }
            uVar20 = puStack_418[2];
            unaff_x25 = (ulong *)puStack_418[3];
            func_0x000107c5ec30();
            puVar8 = puVar21;
            if (puVar21 != (ulong *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(uVar20,(long)puVar8)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101654458);
                (*pcVar5)();
              }
              puVar21 = (ulong *)((uVar20 - (long)puVar8) + (long)puVar21);
            }
            if (SBORROW8((long)unaff_x25,uVar20)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x101654454);
              (*pcVar5)();
            }
            func_0x000107c5ec38();
            puVar10 = puStack_428;
            puVar13 = puStack_430;
            unaff_x21 = puStack_458;
            if (puVar21 == (ulong *)0x0) {
              lVar27 = 0;
            }
            else {
              if ((long)((long)unaff_x25 - uVar20) <= (long)puVar8) {
                puVar8 = (ulong *)((long)unaff_x25 - uVar20);
              }
              lVar27 = (long)puVar8 + (long)puVar21;
            }
            FUN_100e25bdc(abStack_400,puVar21,lVar27,puStack_430,puStack_428);
            puStack_458 = unaff_x21;
            func_0x000107c6142c(puVar33);
            func_0x000107c6142c(unaff_x27);
            unaff_x19 = puVar13;
            unaff_x20 = puVar10;
LAB_101654380:
            func_0x00010006c090(puVar13,puVar10);
            func_0x000107c6142c(unaff_x24);
            func_0x000107c6142c(puStack_438);
            func_0x00010006c090(puStack_418);
            bVar3 = abStack_400[0];
          }
          if ((bVar3 & 1) == 0) goto LAB_1016543f8;
        }
        puVar31 = (ulong *)((long)puVar31 + 1);
        puVar8 = (ulong *)0x1;
      } while (puVar31 != puStack_450);
    }
  }
  else {
LAB_1016543f8:
    puVar8 = (ulong *)0x0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_128) {
    return puVar8;
  }
  uVar35 = 0x101654460;
  func_0x000107c60e78();
  puVar6 = auStack_460;
  do {
    *(ulong **)(puVar6 + -0x60) = puVar33;
    *(ulong **)(puVar6 + -0x58) = unaff_x27;
    *(ulong **)(puVar6 + -0x50) = unaff_x26;
    *(ulong **)(puVar6 + -0x48) = unaff_x25;
    *(ulong **)(puVar6 + -0x40) = unaff_x24;
    *(ulong **)(puVar6 + -0x38) = puVar31;
    *(ulong **)(puVar6 + -0x30) = puVar28;
    *(ulong **)(puVar6 + -0x28) = unaff_x21;
    *(ulong **)(puVar6 + -0x20) = unaff_x20;
    *(ulong **)(puVar6 + -0x18) = unaff_x19;
    *(undefined1 ***)(puVar6 + -0x10) = ppuVar34;
    *(undefined8 *)(puVar6 + -8) = uVar35;
    *(undefined8 *)(puVar6 + -0x68) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    uVar20 = puVar8[2];
    puVar13 = puVar28;
    puVar21 = unaff_x26;
    if (uVar20 == param_2[2]) {
      if ((uVar20 != 0) && (puVar8 != param_2)) {
        *(undefined8 *)(puVar6 + -0xb8) = 0;
        unaff_x27 = param_2 + 10;
        puVar33 = puVar8 + 5;
        do {
          uVar24 = puVar33[-1];
          param_2 = (ulong *)*puVar33;
          bVar3 = (byte)puVar33[1];
          unaff_x21 = (ulong *)(ulong)bVar3;
          unaff_x20 = (ulong *)puVar33[2];
          unaff_x26 = (ulong *)puVar33[3];
          puVar28 = (ulong *)puVar33[4];
          uVar22 = unaff_x27[-6];
          unaff_x25 = (ulong *)unaff_x27[-5];
          bVar1 = (byte)unaff_x27[-4];
          puVar21 = (ulong *)(ulong)bVar1;
          puVar31 = (ulong *)unaff_x27[-3];
          uVar14 = unaff_x27[-2];
          uVar32 = unaff_x27[-1];
          uVar29 = *unaff_x27;
          *(ulong *)(puVar6 + -0xa8) = puVar33[5];
          *(ulong *)(puVar6 + -0xa0) = uVar32;
          *(ulong *)(puVar6 + -0x98) = uVar29;
          *(ulong *)(puVar6 + -0x90) = uVar14;
          *(ulong **)(puVar6 + -0xb0) = param_2;
          unaff_x19 = puVar28;
          puVar13 = unaff_x26;
          if ((uVar24 == uVar22) && (param_2 == unaff_x25)) {
            if (bVar3 != bVar1) goto LAB_101654a24;
          }
          else {
            func_0x000107c605b8();
            puVar8 = (ulong *)0x0;
            if (((uVar24 & 1) == 0) || (((bVar3 ^ bVar1) & 1) != 0)) goto LAB_101654a30;
          }
          puVar21 = unaff_x26;
          if (((unaff_x20 != puVar31) || (unaff_x26 != *(ulong **)(puVar6 + -0x90))) &&
             (puVar8 = unaff_x20, param_2 = unaff_x26,
             func_0x000107c605b8(unaff_x20,unaff_x26,puVar31,*(undefined8 *)(puVar6 + -0x90),0),
             ((ulong)puVar8 & 1) == 0)) goto LAB_101654a24;
          puVar31 = *(ulong **)(puVar6 + -0xa8);
          unaff_x20 = *(ulong **)(puVar6 + -0x98);
          uVar7 = (uint)((ulong)puVar31 >> 0x20);
          uVar18 = uVar7 >> 0x1e;
          uVar2 = (uint)((ulong)unaff_x20 >> 0x20);
          uVar23 = uVar2 >> 0x1e;
          iVar30 = (int)puVar28;
          puVar13 = puVar28;
          if ((ulong)puVar31 >> 0x3e == 3) {
            uVar24 = 0;
            if (((puVar28 != (ulong *)0x0) || (puVar31 != (ulong *)0xc000000000000000)) ||
               (((ulong)unaff_x20 >> 0x3e < 3 ||
                ((uVar24 = 0, *(long *)(puVar6 + -0xa0) != 0 ||
                 (unaff_x20 != (ulong *)0xc000000000000000)))))) goto joined_r0x0001016547f8;
          }
          else {
            if (uVar7 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar24 = (ulong)puVar31 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)puVar28 >> 0x20);
                if (SBORROW4(iVar19,iVar30)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a78);
                  (*pcVar5)();
                }
                uVar24 = (ulong)(iVar19 - iVar30);
              }
joined_r0x0001016547f8:
              if (uVar2 >> 0x1e < 2) goto LAB_101654618;
LAB_1016545e0:
              if (uVar23 != 2) {
                if (uVar24 == 0) goto LAB_1016544c0;
                goto LAB_101654a24;
              }
              lVar27 = *(long *)(*(long *)(puVar6 + -0xa0) + 0x10);
              lVar11 = *(long *)(*(long *)(puVar6 + -0xa0) + 0x18);
              uVar22 = lVar11 - lVar27;
              if (SBORROW8(lVar11,lVar27)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a70);
                (*pcVar5)();
              }
            }
            else {
              if (uVar18 == 2) {
                uVar24 = puVar28[3] - puVar28[2];
                if (SBORROW8(puVar28[3],puVar28[2])) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a74);
                  (*pcVar5)();
                }
                goto joined_r0x0001016547f8;
              }
              uVar24 = 0;
              if (1 < uVar23) goto LAB_1016545e0;
LAB_101654618:
              if (uVar23 == 0) {
                uVar22 = (ulong)unaff_x20 >> 0x30 & 0xff;
              }
              else {
                iVar25 = (int)*(undefined8 *)(puVar6 + -0xa0);
                iVar19 = (int)((ulong)*(undefined8 *)(puVar6 + -0xa0) >> 0x20);
                if (SBORROW4(iVar19,iVar25)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a6c);
                  (*pcVar5)();
                }
                uVar22 = (ulong)(iVar19 - iVar25);
              }
            }
            if (uVar24 != uVar22) goto LAB_101654a24;
            if (0 < (long)uVar24) {
              if (uVar18 < 2) {
                if (uVar18 != 0) {
                  lVar27 = (long)iVar30;
                  *(long *)(puVar6 + -0xc0) = ((long)puVar28 >> 0x20) - lVar27;
                  if ((long)puVar28 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a7c);
                    (*pcVar5)();
                  }
                  func_0x000107c61434(*(undefined8 *)(puVar6 + -0xb0));
                  func_0x000107c61434(unaff_x26);
                  func_0x00010006c00c(puVar28,puVar31);
                  func_0x000107c61434(unaff_x25);
                  func_0x000107c61434(*(undefined8 *)(puVar6 + -0x90));
                  lVar11 = *(long *)(puVar6 + -0xa0);
                  func_0x00010006c00c(lVar11,unaff_x20);
                  func_0x000107c5ec30();
                  if (lVar11 == 0) {
                    func_0x000107c5ec38();
                    lVar27 = 0;
                    lVar17 = 0;
                  }
                  else {
                    lVar12 = lVar11;
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar27,lVar12)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a88);
                      (*pcVar5)();
                    }
                    lVar11 = (lVar27 - lVar12) + lVar11;
                    func_0x000107c5ec38();
                    if (*(long *)(puVar6 + -0xc0) <= lVar12) {
                      lVar12 = *(long *)(puVar6 + -0xc0);
                    }
                    lVar27 = 0;
                    if (lVar11 != 0) {
                      lVar27 = lVar11;
                    }
                    lVar17 = 0;
                    if (lVar11 != 0) {
                      lVar17 = lVar12 + lVar11;
                    }
                  }
                  puVar8 = *(ulong **)(puVar6 + -0xa0);
                  unaff_x20 = *(ulong **)(puVar6 + -0x98);
                  unaff_x21 = *(ulong **)(puVar6 + -0xb8);
                  FUN_100e25bdc(puVar6 + -0x80,lVar27,lVar17,puVar8,unaff_x20);
                  *(ulong **)(puVar6 + -0xb8) = unaff_x21;
                  func_0x000107c6142c(*(undefined8 *)(puVar6 + -0x90));
                  func_0x000107c6142c(unaff_x25);
                  func_0x00010006c090(puVar8,unaff_x20);
                  func_0x000107c6142c(unaff_x26);
                  func_0x000107c6142c(*(undefined8 *)(puVar6 + -0xb0));
                  unaff_x19 = puVar31;
LAB_101654a18:
                  func_0x00010006c090(puVar28);
                  param_2 = puVar31;
                  puVar31 = puVar8;
                  if ((puVar6[-0x80] & 1) != 0) goto LAB_1016544c0;
                  goto LAB_101654a24;
                }
                puVar6[-0x80] = (char)puVar28;
                puVar6[-0x7f] = (char)((ulong)puVar28 >> 8);
                puVar6[-0x7e] = (char)((ulong)puVar28 >> 0x10);
                puVar6[-0x7d] = (char)((ulong)puVar28 >> 0x18);
                puVar6[-0x7c] = (char)((ulong)puVar28 >> 0x20);
                puVar6[-0x7b] = (char)((ulong)puVar28 >> 0x28);
                puVar6[-0x7a] = (char)((ulong)puVar28 >> 0x30);
                puVar6[-0x79] = (char)((ulong)puVar28 >> 0x38);
                puVar6[-0x78] = (char)puVar31;
                puVar6[-0x77] = (char)((ulong)puVar31 >> 8);
                puVar6[-0x76] = (char)((ulong)puVar31 >> 0x10);
                puVar6[-0x75] = (char)((ulong)puVar31 >> 0x18);
                puVar6[-0x74] = (char)((ulong)puVar31 >> 0x20);
                puVar6[-0x73] = (char)((ulong)puVar31 >> 0x28);
                *(undefined1 **)(puVar6 + -0xc0) = puVar6 + (((ulong)puVar31 >> 0x30 & 0xff) - 0x80)
                ;
                func_0x000107c61434(*(undefined8 *)(puVar6 + -0xb0));
                func_0x000107c61434(unaff_x26);
                func_0x00010006c00c(puVar28,puVar31);
                func_0x000107c61434(unaff_x25);
                unaff_x19 = *(ulong **)(puVar6 + -0x90);
                func_0x000107c61434(unaff_x19);
                puVar8 = *(ulong **)(puVar6 + -0xa0);
                func_0x00010006c00c(puVar8,unaff_x20);
                unaff_x21 = *(ulong **)(puVar6 + -0xb8);
                FUN_100e25bdc(puVar6 + -0x81,puVar6 + -0x80,*(undefined8 *)(puVar6 + -0xc0),puVar8,
                              unaff_x20);
                *(ulong **)(puVar6 + -0xb8) = unaff_x21;
                func_0x000107c6142c(unaff_x19);
                func_0x000107c6142c(unaff_x25);
                func_0x00010006c090(puVar8,*(undefined8 *)(puVar6 + -0x98));
                unaff_x20 = puVar8;
              }
              else {
                if (uVar18 == 2) {
                  uVar24 = puVar28[2];
                  uVar22 = puVar28[3];
                  func_0x000107c61434(*(undefined8 *)(puVar6 + -0xb0));
                  func_0x000107c61434(unaff_x26);
                  func_0x00010006c00c(puVar28,puVar31);
                  func_0x000107c61434(unaff_x25);
                  func_0x000107c61434(*(undefined8 *)(puVar6 + -0x90));
                  puVar8 = *(ulong **)(puVar6 + -0xa0);
                  func_0x00010006c00c(puVar8,unaff_x20);
                  func_0x000107c5ec30();
                  puVar10 = puVar8;
                  if (puVar8 != (ulong *)0x0) {
                    func_0x000107c5ec3c(puVar31);
                    if (SBORROW8(uVar24,(long)puVar10)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a84);
                      (*pcVar5)();
                    }
                    puVar8 = (ulong *)((uVar24 - (long)puVar10) + (long)puVar8);
                  }
                  puVar31 = (ulong *)(uVar22 - uVar24);
                  if (SBORROW8(uVar22,uVar24)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101654a80);
                    (*pcVar5)();
                  }
                  func_0x000107c5ec38(*(undefined8 *)(puVar6 + -0xa8));
                  if (puVar8 == (ulong *)0x0) {
                    lVar27 = 0;
                  }
                  else {
                    if ((long)puVar31 <= (long)puVar10) {
                      puVar10 = puVar31;
                    }
                    lVar27 = (long)puVar10 + (long)puVar8;
                  }
                  unaff_x20 = *(ulong **)(puVar6 + -0xa0);
                  unaff_x19 = *(ulong **)(puVar6 + -0x98);
                  unaff_x21 = *(ulong **)(puVar6 + -0xb8);
                  FUN_100e25bdc(puVar6 + -0x80,puVar8,lVar27,unaff_x20,unaff_x19);
                  *(ulong **)(puVar6 + -0xb8) = unaff_x21;
                  func_0x000107c6142c(*(undefined8 *)(puVar6 + -0x90));
                  func_0x000107c6142c(unaff_x25);
                  func_0x00010006c090(unaff_x20,unaff_x19);
                  func_0x000107c6142c(unaff_x26);
                  func_0x000107c6142c(*(undefined8 *)(puVar6 + -0xb0));
                  puVar31 = *(ulong **)(puVar6 + -0xa8);
                  goto LAB_101654a18;
                }
                *(undefined8 *)(puVar6 + -0x7a) = 0;
                *(undefined8 *)(puVar6 + -0x80) = 0;
                func_0x000107c61434(*(undefined8 *)(puVar6 + -0xb0));
                func_0x000107c61434(unaff_x26);
                func_0x00010006c00c(puVar28,puVar31);
                func_0x000107c61434(unaff_x25);
                *(ulong **)(puVar6 + -0xc0) = unaff_x26;
                puVar21 = *(ulong **)(puVar6 + -0x90);
                func_0x000107c61434(puVar21);
                unaff_x19 = *(ulong **)(puVar6 + -0xa0);
                func_0x00010006c00c(unaff_x19,unaff_x20);
                unaff_x21 = *(ulong **)(puVar6 + -0xb8);
                FUN_100e25bdc(puVar6 + -0x81,puVar6 + -0x80,puVar6 + -0x80,unaff_x19,unaff_x20);
                *(ulong **)(puVar6 + -0xb8) = unaff_x21;
                func_0x000107c6142c(puVar21);
                func_0x000107c6142c(unaff_x25);
                func_0x00010006c090(unaff_x19,unaff_x20);
                unaff_x26 = *(ulong **)(puVar6 + -0xc0);
              }
              func_0x000107c6142c(unaff_x26);
              func_0x000107c6142c(*(undefined8 *)(puVar6 + -0xb0));
              param_2 = puVar31;
              func_0x00010006c090(puVar28);
              unaff_x26 = puVar21;
              if ((puVar6[-0x81] & 1) == 0) goto LAB_101654a24;
            }
          }
LAB_1016544c0:
          unaff_x27 = unaff_x27 + 7;
          puVar33 = puVar33 + 7;
          uVar20 = uVar20 - 1;
        } while (uVar20 != 0);
      }
      puVar8 = (ulong *)0x1;
      puVar13 = puVar28;
      puVar21 = unaff_x26;
    }
    else {
LAB_101654a24:
      puVar8 = (ulong *)0x0;
    }
LAB_101654a30:
    puVar28 = puVar13;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x68)) {
      return puVar8;
    }
    func_0x000107c60e78();
    *(ulong **)(puVar6 + -0x120) = puVar33;
    *(ulong **)(puVar6 + -0x118) = unaff_x27;
    *(ulong **)(puVar6 + -0x110) = puVar21;
    *(ulong **)(puVar6 + -0x108) = unaff_x25;
    *(ulong *)(puVar6 + -0x100) = uVar20;
    *(ulong **)(puVar6 + -0xf8) = puVar31;
    *(ulong **)(puVar6 + -0xf0) = puVar28;
    *(ulong **)(puVar6 + -0xe8) = unaff_x21;
    *(ulong **)(puVar6 + -0xe0) = unaff_x20;
    *(ulong **)(puVar6 + -0xd8) = unaff_x19;
    *(undefined1 **)(puVar6 + -0xd0) = puVar6 + -0x10;
    *(undefined8 *)(puVar6 + -200) = 0x101654a8c;
    *(undefined8 *)(puVar6 + -0x128) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    puVar33 = (ulong *)puVar8[2];
    if (puVar33 == (ulong *)param_2[2]) {
      if ((puVar33 != (ulong *)0x0) && (puVar8 != param_2)) {
        unaff_x21 = (ulong *)0x0;
        puVar31 = puVar8 + 7;
        unaff_x25 = param_2 + 7;
        do {
          uVar24 = puVar31[-3];
          unaff_x20 = (ulong *)puVar31[-2];
          puVar28 = (ulong *)puVar31[-1];
          unaff_x19 = (ulong *)*puVar31;
          puVar21 = (ulong *)unaff_x25[-2];
          unaff_x27 = (ulong *)unaff_x25[-1];
          uVar20 = *unaff_x25;
          if ((uVar24 != unaff_x25[-3] || unaff_x20 != puVar21) &&
             (param_2 = unaff_x20, func_0x000107c605b8(), (uVar24 & 1) == 0)) goto LAB_101654f00;
          uVar7 = (uint)((ulong)unaff_x19 >> 0x20);
          uVar18 = uVar7 >> 0x1e;
          uVar2 = (uint)(uVar20 >> 0x20);
          uVar23 = uVar2 >> 0x1e;
          iVar30 = (int)puVar28;
          if ((ulong)unaff_x19 >> 0x3e == 3) {
            uVar24 = 0;
            if ((((puVar28 != (ulong *)0x0 || unaff_x19 != (ulong *)0xc000000000000000) ||
                  uVar20 >> 0x3e < 3) || (unaff_x27 != (ulong *)0x0)) ||
               (uVar20 != 0xc000000000000000)) goto joined_r0x000101654d48;
          }
          else {
            if (uVar7 >> 0x1e < 2) {
              if (uVar18 == 0) {
                uVar24 = (ulong)unaff_x19 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)puVar28 >> 0x20);
                if (SBORROW4(iVar19,iVar30)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f54);
                  (*pcVar5)();
                }
                uVar24 = (ulong)(iVar19 - iVar30);
              }
joined_r0x000101654d48:
              if (uVar2 >> 0x1e < 2) goto LAB_101654bb4;
LAB_101654b80:
              if (uVar23 != 2) {
                if (uVar24 == 0) goto LAB_101654aec;
                goto LAB_101654f00;
              }
              uVar22 = unaff_x27[3] - unaff_x27[2];
              if (SBORROW8(unaff_x27[3],unaff_x27[2])) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f48);
                (*pcVar5)();
              }
            }
            else {
              if (uVar18 == 2) {
                uVar24 = puVar28[3] - puVar28[2];
                if (SBORROW8(puVar28[3],puVar28[2])) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f50);
                  (*pcVar5)();
                }
                goto joined_r0x000101654d48;
              }
              uVar24 = 0;
              if (1 < uVar23) goto LAB_101654b80;
LAB_101654bb4:
              if (uVar23 == 0) {
                uVar22 = uVar20 >> 0x30 & 0xff;
              }
              else {
                iVar19 = (int)((ulong)unaff_x27 >> 0x20);
                if (SBORROW4(iVar19,(int)unaff_x27)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f4c);
                  (*pcVar5)();
                }
                uVar22 = (ulong)(iVar19 - (int)unaff_x27);
              }
            }
            if (uVar24 != uVar22) goto LAB_101654f00;
            if (0 < (long)uVar24) {
              param_2 = unaff_x19;
              if (uVar18 < 2) {
                *(ulong **)(puVar6 + -0x150) = unaff_x21;
                if (uVar18 != 0) {
                  lVar27 = (long)iVar30;
                  *(long *)(puVar6 + -0x168) = ((long)puVar28 >> 0x20) - lVar27;
                  if ((long)puVar28 >> 0x20 < lVar27) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f58);
                    (*pcVar5)();
                  }
                  *(ulong **)(puVar6 + -0x158) = unaff_x20;
                  func_0x000107c61434(unaff_x20);
                  func_0x00010006c00c(puVar28,unaff_x19);
                  func_0x000107c61434(puVar21);
                  *(ulong **)(puVar6 + -0x160) = unaff_x27;
                  puVar8 = unaff_x27;
                  func_0x00010006c00c(unaff_x27,uVar20);
                  func_0x000107c5ec30();
                  if (puVar8 == (ulong *)0x0) {
                    func_0x000107c5ec38();
                    lVar27 = 0;
                    lVar11 = 0;
                    puVar8 = unaff_x27;
                  }
                  else {
                    puVar13 = puVar8;
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar27,(long)puVar13)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f64);
                      (*pcVar5)();
                    }
                    lVar17 = (lVar27 - (long)puVar13) + (long)puVar8;
                    func_0x000107c5ec38();
                    if ((long)*(ulong **)(puVar6 + -0x168) <= (long)puVar13) {
                      puVar13 = *(ulong **)(puVar6 + -0x168);
                    }
                    lVar27 = 0;
                    if (lVar17 != 0) {
                      lVar27 = lVar17;
                    }
                    lVar11 = 0;
                    if (lVar17 != 0) {
                      lVar11 = (long)puVar13 + lVar17;
                    }
                  }
                  unaff_x20 = *(ulong **)(puVar6 + -0x160);
                  unaff_x21 = *(ulong **)(puVar6 + -0x150);
                  FUN_100e25bdc(puVar6 + -0x140,lVar27,lVar11,unaff_x20,uVar20);
                  func_0x000107c6142c(puVar21);
                  func_0x00010006c090(unaff_x20,uVar20);
                  puVar13 = *(ulong **)(puVar6 + -0x158);
LAB_101654ee8:
                  func_0x000107c6142c(puVar13);
                  func_0x00010006c090(puVar28);
                  unaff_x27 = puVar8;
                  if ((puVar6[-0x140] & 1) != 0) goto LAB_101654aec;
                  goto LAB_101654f00;
                }
                puVar6[-0x140] = (char)puVar28;
                puVar6[-0x13f] = (char)((ulong)puVar28 >> 8);
                puVar6[-0x13e] = (char)((ulong)puVar28 >> 0x10);
                puVar6[-0x13d] = (char)((ulong)puVar28 >> 0x18);
                puVar6[-0x13c] = (char)((ulong)puVar28 >> 0x20);
                puVar6[-0x13b] = (char)((ulong)puVar28 >> 0x28);
                puVar6[-0x13a] = (char)((ulong)puVar28 >> 0x30);
                puVar6[-0x139] = (char)((ulong)puVar28 >> 0x38);
                puVar6[-0x138] = (char)unaff_x19;
                puVar6[-0x137] = (char)((ulong)unaff_x19 >> 8);
                puVar6[-0x136] = (char)((ulong)unaff_x19 >> 0x10);
                puVar6[-0x135] = (char)((ulong)unaff_x19 >> 0x18);
                puVar6[-0x134] = (char)((ulong)unaff_x19 >> 0x20);
                puVar6[-0x133] = (char)((ulong)unaff_x19 >> 0x28);
                puVar15 = puVar6 + (((ulong)unaff_x19 >> 0x30 & 0xff) - 0x140);
                func_0x000107c61434(unaff_x20);
                func_0x00010006c00c(puVar28,unaff_x19);
                func_0x000107c61434(puVar21);
                func_0x00010006c00c(unaff_x27,uVar20);
                unaff_x21 = *(ulong **)(puVar6 + -0x150);
              }
              else {
                if (uVar18 == 2) {
                  *(ulong **)(puVar6 + -0x158) = unaff_x20;
                  *(ulong **)(puVar6 + -0x150) = unaff_x21;
                  uVar24 = puVar28[2];
                  *(ulong *)(puVar6 + -0x168) = puVar28[3];
                  func_0x000107c61434(unaff_x20);
                  func_0x00010006c00c(puVar28,unaff_x19);
                  func_0x000107c61434(puVar21);
                  *(ulong **)(puVar6 + -0x160) = unaff_x27;
                  func_0x00010006c00c(unaff_x27,uVar20);
                  func_0x000107c5ec30();
                  puVar8 = unaff_x27;
                  if (unaff_x27 != (ulong *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(uVar24,(long)puVar8)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f60);
                      (*pcVar5)();
                    }
                    unaff_x27 = (ulong *)((uVar24 - (long)puVar8) + (long)unaff_x27);
                  }
                  puVar13 = (ulong *)(*(long *)(puVar6 + -0x168) - uVar24);
                  if (SBORROW8(*(long *)(puVar6 + -0x168),uVar24)) {
                    /* WARNING: Does not return */
                    pcVar5 = (code *)SoftwareBreakpoint(1,0x101654f5c);
                    (*pcVar5)();
                  }
                  func_0x000107c5ec38();
                  if (unaff_x27 == (ulong *)0x0) {
                    lVar27 = 0;
                  }
                  else {
                    if ((long)puVar13 <= (long)puVar8) {
                      puVar8 = puVar13;
                    }
                    lVar27 = (long)puVar8 + (long)unaff_x27;
                  }
                  puVar8 = *(ulong **)(puVar6 + -0x160);
                  puVar13 = *(ulong **)(puVar6 + -0x158);
                  unaff_x21 = *(ulong **)(puVar6 + -0x150);
                  FUN_100e25bdc(puVar6 + -0x140,unaff_x27,lVar27,puVar8,uVar20);
                  func_0x000107c6142c(puVar21);
                  func_0x00010006c090(puVar8,uVar20);
                  unaff_x20 = puVar13;
                  goto LAB_101654ee8;
                }
                *(undefined8 *)(puVar6 + -0x13a) = 0;
                *(undefined8 *)(puVar6 + -0x140) = 0;
                func_0x000107c61434(unaff_x20);
                func_0x00010006c00c(puVar28,unaff_x19);
                func_0x000107c61434(puVar21);
                func_0x00010006c00c(unaff_x27,uVar20);
                puVar15 = puVar6 + -0x140;
              }
              FUN_100e25bdc(puVar6 + -0x141,puVar6 + -0x140,puVar15,unaff_x27,uVar20);
              func_0x000107c6142c(puVar21);
              func_0x00010006c090(unaff_x27,uVar20);
              func_0x000107c6142c(unaff_x20);
              func_0x00010006c090(puVar28);
              if ((puVar6[-0x141] & 1) == 0) goto LAB_101654f00;
            }
          }
LAB_101654aec:
          puVar31 = puVar31 + 4;
          unaff_x25 = unaff_x25 + 4;
          puVar33 = (ulong *)((long)puVar33 + -1);
        } while (puVar33 != (ulong *)0x0);
      }
      puVar13 = (ulong *)0x1;
      puVar8 = param_2;
      param_2 = puVar33;
    }
    else {
LAB_101654f00:
      puVar13 = (ulong *)0x0;
      puVar8 = param_2;
      param_2 = puVar33;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x128)) {
      return puVar13;
    }
    func_0x000107c60e78();
    *(ulong **)(puVar6 + -0x1d0) = param_2;
    *(ulong **)(puVar6 + -0x1c8) = unaff_x27;
    *(ulong **)(puVar6 + -0x1c0) = puVar21;
    *(ulong **)(puVar6 + -0x1b8) = unaff_x25;
    *(ulong *)(puVar6 + -0x1b0) = uVar20;
    *(ulong **)(puVar6 + -0x1a8) = puVar31;
    *(ulong **)(puVar6 + -0x1a0) = puVar28;
    *(ulong **)(puVar6 + -0x198) = unaff_x21;
    *(ulong **)(puVar6 + -400) = unaff_x20;
    *(ulong **)(puVar6 + -0x188) = unaff_x19;
    *(undefined1 **)(puVar6 + -0x180) = puVar6 + -0xd0;
    *(undefined8 *)(puVar6 + -0x178) = 0x101654f68;
    ppuVar34 = (undefined1 **)(puVar6 + -0x180);
    *(undefined8 *)(puVar6 + -0x1d8) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
    unaff_x24 = (ulong *)puVar13[2];
    if (unaff_x24 != (ulong *)puVar8[2]) break;
    if ((unaff_x24 == (ulong *)0x0) || (puVar13 == puVar8)) {
      puVar33 = (ulong *)0x1;
      goto LAB_1016554e0;
    }
    unaff_x21 = (ulong *)0x0;
    puVar31 = puVar13 + 8;
    puVar28 = puVar8 + 8;
    uVar20 = puVar13[4];
    unaff_x20 = (ulong *)puVar13[5];
    uVar24 = puVar13[6];
    *(ulong *)(puVar6 + -0x200) = puVar13[7];
    unaff_x19 = (ulong *)*puVar31;
    uVar22 = puVar8[4];
    unaff_x27 = (ulong *)puVar8[5];
    param_2 = (ulong *)puVar8[6];
    uVar32 = puVar8[7];
    *(ulong *)(puVar6 + -0x210) = uVar24;
    *(ulong *)(puVar6 + -0x208) = uVar32;
    unaff_x25 = (ulong *)*puVar28;
    if ((uVar20 != uVar22 || unaff_x20 != unaff_x27) &&
       (puVar8 = unaff_x20, func_0x000107c605b8(), (uVar20 & 1) == 0)) break;
    func_0x000107c61434(unaff_x20);
    puVar8 = *(ulong **)(puVar6 + -0x210);
    func_0x000107c61434(puVar8);
    func_0x00010006c00c(*(undefined8 *)(puVar6 + -0x200),unaff_x19);
    func_0x000107c61434(unaff_x27);
    func_0x000107c61434(param_2);
    func_0x00010006c00c(*(undefined8 *)(puVar6 + -0x208),unaff_x25);
    uVar35 = 0x101655098;
    puVar6 = puVar6 + -0x230;
    unaff_x26 = puVar8;
    puVar33 = param_2;
  } while( true );
  puVar33 = (ulong *)0x0;
LAB_1016554e0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar6 + -0x1d8)) {
    return puVar33;
  }
  func_0x000107c60e78();
  if (*puVar33 != *puVar8) {
    return (ulong *)0x0;
  }
  *(ulong **)(puVar6 + -0x290) = param_2;
  *(ulong **)(puVar6 + -0x288) = unaff_x27;
  *(ulong **)(puVar6 + -0x280) = puVar21;
  *(ulong **)(puVar6 + -0x278) = unaff_x25;
  *(ulong **)(puVar6 + -0x270) = unaff_x24;
  *(ulong **)(puVar6 + -0x268) = puVar31;
  *(ulong **)(puVar6 + -0x260) = puVar28;
  *(ulong **)(puVar6 + -600) = unaff_x21;
  *(ulong **)(puVar6 + -0x250) = unaff_x20;
  *(ulong **)(puVar6 + -0x248) = unaff_x19;
  *(undefined1 ***)(puVar6 + -0x240) = ppuVar34;
  *(undefined8 *)(puVar6 + -0x238) = 0x10165553c;
  uVar20 = puVar33[1];
  if ((uVar20 == puVar8[1] && puVar33[2] == puVar8[2]) || (func_0x000107c605b8(), (uVar20 & 1) != 0)
     ) {
    uVar20 = puVar33[7];
    *(ulong *)(puVar6 + -0x2a8) = puVar33[8];
    *(ulong *)(puVar6 + -0x2b0) = uVar20;
    uVar22 = puVar33[9];
    *(ulong *)(puVar6 + -0x2a0) = uVar22;
    uVar20 = puVar8[7];
    *(ulong *)(puVar6 + -0x2c8) = puVar8[8];
    *(ulong *)(puVar6 + -0x2d0) = uVar20;
    uVar32 = puVar8[9];
    *(ulong *)(puVar6 + -0x2c0) = uVar32;
    lVar27 = *(long *)(puVar6 + -0x2b0);
    uVar20 = *(ulong *)(puVar6 + -0x2a8);
    lVar11 = *(long *)(puVar6 + -0x2d0);
    uVar24 = *(ulong *)(puVar6 + -0x2c8);
    if (uVar22 >> 0x3c < 0xf) {
      if (0xe < uVar32 >> 0x3c) goto LAB_1016556b0;
      if (lVar27 == lVar11) {
        FUN_10165596c(puVar6 + -0x2b0,puVar6 + -0x2f0,0x112db6f48,&UNK_10d969b40);
        FUN_10165596c(puVar6 + -0x2d0,puVar6 + -0x2f0,0x112db6f48,&UNK_10d969b40);
        uVar14 = uVar20;
        FUN_100e25fcc(uVar20,uVar22,uVar24,uVar32);
        func_0x000100cb725c(lVar27,uVar24,uVar32);
        if ((uVar14 & 1) != 0) goto LAB_101655610;
      }
      else {
        uVar35 = 0x112db6f48;
        puVar26 = &UNK_10d969b40;
        FUN_10165596c(puVar6 + -0x2b0,puVar6 + -0x2f0,0x112db6f48,&UNK_10d969b40);
        puVar15 = puVar6 + -0x2d0;
        puVar6 = puVar6 + -0x2f0;
LAB_1016557e0:
        FUN_10165596c(puVar15,puVar6,uVar35,puVar26);
        func_0x000100cb725c(lVar11,uVar24,uVar32);
      }
    }
    else {
      if (0xe < uVar32 >> 0x3c) {
        FUN_10165596c(puVar6 + -0x2b0,puVar6 + -0x2f0,0x112db6f48,&UNK_10d969b40);
        FUN_10165596c(puVar6 + -0x2d0,puVar6 + -0x2f0,0x112db6f48,&UNK_10d969b40);
LAB_101655610:
        func_0x000100cb725c(lVar27,uVar20,uVar22);
        uVar20 = puVar33[10];
        *(ulong *)(puVar6 + -0x2e8) = puVar33[0xb];
        *(ulong *)(puVar6 + -0x2f0) = uVar20;
        uVar22 = puVar33[0xc];
        *(ulong *)(puVar6 + -0x2e0) = uVar22;
        uVar20 = puVar8[10];
        *(ulong *)(puVar6 + -0x308) = puVar8[0xb];
        *(ulong *)(puVar6 + -0x310) = uVar20;
        uVar32 = puVar8[0xc];
        *(ulong *)(puVar6 + -0x300) = uVar32;
        lVar27 = *(long *)(puVar6 + -0x2f0);
        uVar20 = *(ulong *)(puVar6 + -0x2e8);
        lVar11 = *(long *)(puVar6 + -0x310);
        uVar24 = *(ulong *)(puVar6 + -0x308);
        if (uVar22 >> 0x3c < 0xf) {
          if (0xe < uVar32 >> 0x3c) goto LAB_10165575c;
          if ((float)lVar27 != (float)lVar11) {
            uVar35 = 0x112db6358;
            puVar26 = &UNK_10d961e20;
            FUN_10165596c(puVar6 + -0x2f0,puVar6 + -0x328,0x112db6358,&UNK_10d961e20);
            puVar15 = puVar6 + -0x310;
            puVar6 = puVar6 + -0x328;
            goto LAB_1016557e0;
          }
          FUN_10165596c(puVar6 + -0x2f0,puVar6 + -0x328,0x112db6358,&UNK_10d961e20);
          FUN_10165596c(puVar6 + -0x310,puVar6 + -0x328,0x112db6358,&UNK_10d961e20);
          uVar14 = uVar20;
          FUN_100e25fcc(uVar20,uVar22,uVar24,uVar32);
          func_0x000100cb725c(lVar11,uVar24,uVar32);
          if ((uVar14 & 1) == 0) goto LAB_101655808;
        }
        else {
          if (uVar32 >> 0x3c < 0xf) {
LAB_10165575c:
            uVar35 = 0x112db6358;
            puVar26 = &UNK_10d961e20;
            FUN_10165596c(puVar6 + -0x2f0,puVar6 + -0x328,0x112db6358,&UNK_10d961e20);
            puVar15 = puVar6 + -0x310;
            puVar6 = puVar6 + -0x328;
            uVar14 = uVar22;
            uVar29 = uVar20;
            lVar17 = lVar27;
            uVar22 = uVar32;
            uVar20 = uVar24;
            lVar27 = lVar11;
            goto LAB_101655788;
          }
          FUN_10165596c(puVar6 + -0x2f0,puVar6 + -0x328,0x112db6358,&UNK_10d961e20);
          FUN_10165596c(puVar6 + -0x310,puVar6 + -0x328,0x112db6358,&UNK_10d961e20);
        }
        func_0x000100cb725c(lVar27,uVar20,uVar22);
        if ((puVar33[3] == puVar8[3]) && (puVar33[4] == puVar8[4])) {
          uVar20 = puVar33[5];
          FUN_100e25fcc(uVar20,puVar33[6],puVar8[5],puVar8[6]);
          uVar7 = (uint)uVar20;
          goto LAB_101655810;
        }
        goto LAB_10165580c;
      }
LAB_1016556b0:
      uVar35 = 0x112db6f48;
      puVar26 = &UNK_10d969b40;
      FUN_10165596c(puVar6 + -0x2b0,puVar6 + -0x2f0,0x112db6f48,&UNK_10d969b40);
      puVar15 = puVar6 + -0x2d0;
      puVar6 = puVar6 + -0x2f0;
      uVar14 = uVar22;
      uVar29 = uVar20;
      lVar17 = lVar27;
      uVar22 = uVar32;
      uVar20 = uVar24;
      lVar27 = lVar11;
LAB_101655788:
      FUN_10165596c(puVar15,puVar6,uVar35,puVar26);
      func_0x000100cb725c(lVar17,uVar29,uVar14);
    }
LAB_101655808:
    func_0x000100cb725c(lVar27,uVar20,uVar22);
  }
LAB_10165580c:
  uVar7 = 0;
LAB_101655810:
  return (ulong *)(ulong)(uVar7 & 1);
}



/* Entry: 101655918; end: 101655933;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101655918(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  
  if (0xe < param_4 >> 0x3c) {
    return;
  }
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



/* Entry: 101655934; end: 101655953;  */

void FUN_101655934(void)

{
  func_0x000107c61168(&PTR_PTR_112dbcc48);
  return;
}



/* Entry: 101655954; end: 10165596b;  */

int FUN_101655954(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10165596c; end: 1016559b3;  */

undefined8 FUN_10165596c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1016559b4; end: 1016559db;  */

void FUN_1016559b4(undefined8 *param_1)

{
  param_1[0x1b] = 0;
  param_1[0x1a] = 0;
  param_1[0x1d] = 0;
  param_1[0x1c] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x19] = 0;
  param_1[0x18] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Entry: 1016559dc; end: 101655a1b;  */

undefined8 FUN_1016559dc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101655a1c; end: 10165602f;  */

uint FUN_101655a1c(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_438 [104];
  long lStack_3d0;
  long lStack_3c8;
  ulong uStack_3c0;
  ulong uStack_3b8;
  long lStack_3b0;
  long lStack_3a8;
  long lStack_3a0;
  long lStack_398;
  long lStack_390;
  long lStack_388;
  long lStack_380;
  long lStack_378;
  long lStack_370;
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
  long lStack_2f8;
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
  long lStack_288;
  ulong uStack_280;
  ulong uStack_278;
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
  long lStack_218;
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
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (lVar7 == *(long *)(lVar6 + 0x10)) {
    if (lVar7 != 0 && lVar5 != lVar6) {
      plVar2 = (long *)(lVar6 + 0x28);
      plVar8 = (long *)(lVar5 + 0x28);
      do {
        uVar3 = plVar8[-1];
        if ((uVar3 != plVar2[-1] || *plVar8 != *plVar2) && (func_0x000107c605b8(), (uVar3 & 1) == 0)
           ) goto LAB_101655ce0;
        plVar2 = plVar2 + 2;
        plVar8 = plVar8 + 2;
        lVar7 = lVar7 + -1;
      } while (lVar7 != 0);
    }
    lStack_118 = param_1[0x14];
    lStack_120 = param_1[0x13];
    lStack_108 = param_1[0x16];
    lStack_110 = param_1[0x15];
    lStack_f8 = param_1[0x18];
    lStack_100 = param_1[0x17];
    lStack_f0 = param_1[0x19];
    lStack_148 = param_1[0xe];
    lStack_150 = param_1[0xd];
    lStack_138 = param_1[0x10];
    lStack_140 = param_1[0xf];
    lStack_128 = param_1[0x12];
    lStack_130 = param_1[0x11];
    lStack_1b8 = param_2[0xe];
    lStack_1c0 = param_2[0xd];
    lStack_1a8 = param_2[0x10];
    lStack_1b0 = param_2[0xf];
    lStack_198 = param_2[0x12];
    lStack_1a0 = param_2[0x11];
    lStack_188 = param_2[0x14];
    lStack_190 = param_2[0x13];
    lStack_178 = param_2[0x16];
    lStack_180 = param_2[0x15];
    lStack_168 = param_2[0x18];
    lStack_170 = param_2[0x17];
    lStack_160 = param_2[0x19];
    lStack_258 = param_1[0x14];
    lStack_260 = param_1[0x13];
    lStack_248 = param_1[0x16];
    lStack_250 = param_1[0x15];
    lStack_238 = param_1[0x18];
    lStack_240 = param_1[0x17];
    lStack_230 = param_1[0x19];
    lStack_288 = param_1[0xe];
    lStack_290 = param_1[0xd];
    uStack_278 = param_1[0x10];
    uStack_280 = param_1[0xf];
    lStack_268 = param_1[0x12];
    lStack_270 = param_1[0x11];
    lStack_2f0 = param_2[0xe];
    lStack_2f8 = param_2[0xd];
    lStack_2e0 = param_2[0x10];
    lStack_2e8 = param_2[0xf];
    lStack_2d0 = param_2[0x12];
    lStack_2d8 = param_2[0x11];
    lStack_2c0 = param_2[0x14];
    lStack_2c8 = param_2[0x13];
    lStack_2b0 = param_2[0x16];
    lStack_2b8 = param_2[0x15];
    lStack_2a0 = param_2[0x18];
    lStack_2a8 = param_2[0x17];
    lStack_298 = param_2[0x19];
    lStack_228 = lStack_2f8;
    lStack_220 = lStack_2f0;
    lStack_218 = lStack_2e8;
    lStack_210 = lStack_2e0;
    lStack_208 = lStack_2d8;
    lStack_200 = lStack_2d0;
    lStack_1f8 = lStack_2c8;
    lStack_1f0 = lStack_2c0;
    lStack_1e8 = lStack_2b8;
    lStack_1e0 = lStack_2b0;
    lStack_1d8 = lStack_2a8;
    lStack_1d0 = lStack_2a0;
    lStack_1c8 = lStack_298;
    if (uStack_280 == 0) {
      if (lStack_2e8 != 0) goto LAB_101655c58;
      lStack_328 = param_1[0x14];
      lStack_330 = param_1[0x13];
      lStack_318 = param_1[0x16];
      lStack_320 = param_1[0x15];
      lStack_308 = param_1[0x18];
      lStack_310 = param_1[0x17];
      lStack_300 = param_1[0x19];
      lStack_358 = param_1[0xe];
      lStack_360 = param_1[0xd];
      lStack_348 = param_1[0x10];
      lStack_350 = param_1[0xf];
      lStack_338 = param_1[0x12];
      lStack_340 = param_1[0x11];
      FUN_10165596c(&lStack_150,&lStack_e0,0x112dbca30,&UNK_10d974420);
      FUN_10165596c(&lStack_1c0,&lStack_e0,0x112dbca30,&UNK_10d974420);
      FUN_1016559dc(&lStack_360,0x112dbca30,&UNK_10d974420);
LAB_101655d7c:
      uVar3 = param_1[1];
      if (((uVar3 == param_2[1]) && (param_1[2] == param_2[2])) ||
         (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
        uVar3 = param_1[3];
        if (((uVar3 == param_2[3]) && (param_1[4] == param_2[4])) ||
           (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
          uVar3 = param_1[5];
          if ((((uVar3 == param_2[5]) && (param_1[6] == param_2[6])) ||
              (func_0x000107c605b8(), (uVar3 & 1) != 0)) && (param_1[7] == param_2[7])) {
            uVar3 = param_1[8];
            if (((uVar3 == param_2[8]) && (param_1[9] == param_2[9])) ||
               (func_0x000107c605b8(), (uVar3 & 1) != 0)) {
              uVar3 = param_1[10];
              func_0x000101654a8c(uVar3,param_2[10]);
              if ((uVar3 & 1) != 0) {
                lVar5 = param_1[0x1b];
                lVar7 = param_1[0x1a];
                uVar11 = param_1[0x1d];
                uVar3 = param_1[0x1c];
                lVar9 = param_2[0x1b];
                lVar6 = param_2[0x1a];
                uVar12 = param_2[0x1d];
                uVar10 = param_2[0x1c];
                lStack_3d0 = lVar6;
                lStack_3c8 = lVar9;
                uStack_3c0 = uVar10;
                uStack_3b8 = uVar12;
                lStack_290 = lVar7;
                lStack_288 = lVar5;
                uStack_280 = uVar3;
                uStack_278 = uVar11;
                if (uVar11 >> 0x3c < 0xf) {
                  if (0xe < uVar12 >> 0x3c) goto LAB_101655ecc;
                  if ((((float)lVar7 == (float)lVar6) &&
                      ((float)((ulong)lVar7 >> 0x20) == (float)((ulong)lVar6 >> 0x20))) &&
                     ((int)lVar5 == (int)lVar9)) {
                    FUN_10165596c(&lStack_290,auStack_438,0x112dbca40,&UNK_10d974430);
                    FUN_10165596c(&lStack_3d0,auStack_438,0x112dbca40,&UNK_10d974430);
                    uVar4 = uVar3;
                    FUN_100e25fcc(uVar3,uVar11,uVar10,uVar12);
                    FUN_101655918(lVar6,lVar9,uVar10,uVar12);
                    if ((uVar4 & 1) != 0) goto LAB_101655e9c;
                  }
                  else {
                    FUN_10165596c(&lStack_290,auStack_438,0x112dbca40,&UNK_10d974430);
                    FUN_10165596c(&lStack_3d0,auStack_438,0x112dbca40,&UNK_10d974430);
                    FUN_101655918(lVar6,lVar9,uVar10,uVar12);
                  }
                }
                else {
                  if (0xe < uVar12 >> 0x3c) {
                    FUN_10165596c(&lStack_290,auStack_438,0x112dbca40,&UNK_10d974430);
                    FUN_10165596c(&lStack_3d0,auStack_438,0x112dbca40,&UNK_10d974430);
LAB_101655e9c:
                    FUN_101655918(lVar7,lVar5,uVar3,uVar11);
                    lVar7 = param_1[0xb];
                    FUN_100e25fcc(lVar7,param_1[0xc],param_2[0xb],param_2[0xc]);
                    uVar1 = (uint)lVar7;
                    goto LAB_101655ce4;
                  }
LAB_101655ecc:
                  FUN_10165596c(&lStack_290,auStack_438,0x112dbca40,&UNK_10d974430);
                  FUN_10165596c(&lStack_3d0,auStack_438,0x112dbca40,&UNK_10d974430);
                  FUN_101655918(lVar7,lVar5,uVar3,uVar11);
                  lVar7 = lVar6;
                  lVar5 = lVar9;
                  uVar3 = uVar10;
                  uVar11 = uVar12;
                }
                FUN_101655918(lVar7,lVar5,uVar3,uVar11);
              }
            }
          }
        }
      }
    }
    else if (lStack_2e8 == 0) {
LAB_101655c58:
      lStack_360 = lStack_290;
      lStack_358 = lStack_288;
      lStack_350 = uStack_280;
      lStack_348 = uStack_278;
      lStack_340 = lStack_270;
      lStack_338 = lStack_268;
      lStack_330 = lStack_260;
      lStack_328 = lStack_258;
      lStack_320 = lStack_250;
      lStack_318 = lStack_248;
      lStack_310 = lStack_240;
      lStack_308 = lStack_238;
      lStack_300 = lStack_230;
      FUN_10165596c(&lStack_150,&lStack_e0,0x112dbca30,&UNK_10d974420);
      FUN_10165596c(&lStack_1c0,&lStack_e0,0x112dbca30,&UNK_10d974420);
      FUN_1016559dc(&lStack_360,0x112dbca38,&UNK_10d974428);
    }
    else {
      lStack_398 = param_2[0x14];
      lStack_3a0 = param_2[0x13];
      lStack_388 = param_2[0x16];
      lStack_390 = param_2[0x15];
      lStack_378 = param_2[0x18];
      lStack_380 = param_2[0x17];
      lStack_370 = param_2[0x19];
      lStack_3c8 = param_2[0xe];
      lStack_3d0 = param_2[0xd];
      uStack_3b8 = param_2[0x10];
      uStack_3c0 = param_2[0xf];
      lStack_3a8 = param_2[0x12];
      lStack_3b0 = param_2[0x11];
      lStack_a8 = param_1[0x14];
      lStack_b0 = param_1[0x13];
      lStack_98 = param_1[0x16];
      lStack_a0 = param_1[0x15];
      lStack_88 = param_1[0x18];
      lStack_90 = param_1[0x17];
      lStack_80 = param_1[0x19];
      lStack_d8 = param_1[0xe];
      lStack_e0 = param_1[0xd];
      lStack_c8 = param_1[0x10];
      lStack_d0 = param_1[0xf];
      lStack_b8 = param_1[0x12];
      lStack_c0 = param_1[0x11];
      lStack_360 = lStack_3d0;
      lStack_358 = lStack_3c8;
      lStack_350 = uStack_3c0;
      lStack_348 = uStack_3b8;
      lStack_340 = lStack_3b0;
      lStack_338 = lStack_3a8;
      lStack_330 = lStack_3a0;
      lStack_328 = lStack_398;
      lStack_320 = lStack_390;
      lStack_318 = lStack_388;
      lStack_310 = lStack_380;
      lStack_308 = lStack_378;
      lStack_300 = lStack_370;
      FUN_10165596c(&lStack_150,auStack_438,0x112dbca30,&UNK_10d974420);
      FUN_10165596c(&lStack_1c0,auStack_438,0x112dbca30,&UNK_10d974420);
      plVar2 = &lStack_e0;
      func_0x00010165553c(plVar2,&lStack_360);
      FUN_1016559dc(&lStack_3d0,0x112dbca30,&UNK_10d974420);
      FUN_1016559dc(&lStack_290,0x112dbca30,&UNK_10d974420);
      if (((ulong)plVar2 & 1) != 0) goto LAB_101655d7c;
    }
  }
LAB_101655ce0:
  uVar1 = 0;
LAB_101655ce4:
  return uVar1 & 1;
}



/* Entry: 101656030; end: 10165606f;  */

void FUN_101656030(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9746d0;
  func_0x000107c61520(&DAT_10d9746d0,&UNK_1103ee3d0);
  puRam0000000112dbca70 = puVar1;
  return;
}



/* Entry: 101656070; end: 1016560fb;  */

/* WARNING: Possible PIC construction at 0x0001016560a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001016560a4) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_101656070(undefined8 *param_1,undefined8 *param_2)

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
  if ((((*(byte *)(param_1 + 2) ^ *(byte *)(param_2 + 2)) & 1) != 0) ||
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar21 == 0) {
        uVar22 = uVar13 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar19 = (int)((ulong)lVar24 >> 0x20);
      if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar21 == 2) {
        uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
        if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar20 < 1) goto LAB_100e26128;
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
              goto LAB_100e262a4;
            }
          }
          pbVar14 = (byte *)0x0;
        }
        else {
          if (uVar18 != 2) {
            *(undefined8 *)(puVar7 + -0x6a) = 0;
            *(undefined8 *)(puVar7 + -0x70) = 0;
            pbVar14 = puVar7 + -0x70;
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar14,lVar24,uVar13);
        pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
        unaff_x22 = uVar13;
      }
      else {
        pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1016560fc; end: 10165625b;  */

uint FUN_1016560fc(long *param_1,long *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auStack_320 [240];
  undefined8 uStack_230;
  undefined8 uStack_228;
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
  
  lVar5 = *param_1;
  lVar4 = *param_2;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (lVar6 == *(long *)(lVar4 + 0x10)) {
    if (lVar6 != 0 && lVar5 != lVar4) {
      puVar7 = (undefined8 *)(lVar5 + 0x20);
      puVar8 = (undefined8 *)(lVar4 + 0x20);
      do {
        uStack_228 = puVar7[1];
        uStack_230 = *puVar7;
        uStack_218 = puVar7[3];
        uStack_220 = puVar7[2];
        uStack_208 = puVar7[5];
        uStack_210 = puVar7[4];
        uStack_1f8 = puVar7[7];
        uStack_200 = puVar7[6];
        uStack_1e8 = puVar7[9];
        uStack_1f0 = puVar7[8];
        uStack_1d8 = puVar7[0xb];
        uStack_1e0 = puVar7[10];
        uStack_1c8 = puVar7[0xd];
        uStack_1d0 = puVar7[0xc];
        uStack_1b8 = puVar7[0xf];
        uStack_1c0 = puVar7[0xe];
        uStack_1a8 = puVar7[0x11];
        uStack_1b0 = puVar7[0x10];
        uStack_198 = puVar7[0x13];
        uStack_1a0 = puVar7[0x12];
        uStack_188 = puVar7[0x15];
        uStack_190 = puVar7[0x14];
        uStack_178 = puVar7[0x17];
        uStack_180 = puVar7[0x16];
        uStack_168 = puVar7[0x19];
        uStack_170 = puVar7[0x18];
        uStack_158 = puVar7[0x1b];
        uStack_160 = puVar7[0x1a];
        uStack_148 = puVar7[0x1d];
        uStack_150 = puVar7[0x1c];
        uStack_138 = puVar8[1];
        uStack_140 = *puVar8;
        uStack_128 = puVar8[3];
        uStack_130 = puVar8[2];
        uStack_118 = puVar8[5];
        uStack_120 = puVar8[4];
        uStack_108 = puVar8[7];
        uStack_110 = puVar8[6];
        uStack_f8 = puVar8[9];
        uStack_100 = puVar8[8];
        uStack_e8 = puVar8[0xb];
        uStack_f0 = puVar8[10];
        uStack_d8 = puVar8[0xd];
        uStack_e0 = puVar8[0xc];
        uStack_c8 = puVar8[0xf];
        uStack_d0 = puVar8[0xe];
        uStack_b8 = puVar8[0x11];
        uStack_c0 = puVar8[0x10];
        uStack_a8 = puVar8[0x13];
        uStack_b0 = puVar8[0x12];
        uStack_98 = puVar8[0x15];
        uStack_a0 = puVar8[0x14];
        uStack_88 = puVar8[0x17];
        uStack_90 = puVar8[0x16];
        uStack_78 = puVar8[0x19];
        uStack_80 = puVar8[0x18];
        uStack_68 = puVar8[0x1b];
        uStack_70 = puVar8[0x1a];
        uStack_58 = puVar8[0x1d];
        uStack_60 = puVar8[0x1c];
        FUN_101553fa0(&uStack_230,auStack_320);
        FUN_101553fa0(&uStack_140,auStack_320);
        puVar2 = &uStack_230;
        FUN_101655a1c(puVar2,&uStack_140);
        func_0x000101554010(&uStack_140);
        func_0x000101554010(&uStack_230);
        if (((ulong)puVar2 & 1) == 0) goto LAB_101656238;
        puVar8 = puVar8 + 0x1e;
        puVar7 = puVar7 + 0x1e;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
    }
    uVar3 = param_1[1];
    FUN_100e25fcc(uVar3,param_1[2],param_2[1],param_2[2]);
    if ((uVar3 & 1) != 0) {
      lVar6 = param_1[3];
      FUN_100e25fcc(lVar6,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)lVar6;
      goto LAB_10165623c;
    }
  }
LAB_101656238:
  uVar1 = 0;
LAB_10165623c:
  return uVar1 & 1;
}



/* Entry: 10165625c; end: 10165629b;  */

void FUN_10165625c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9744b8;
  func_0x000107c61520(&UNK_10d9744b8,&UNK_1103ee228);
  puRam0000000112dbca78 = puVar1;
  return;
}



/* Entry: 10165629c; end: 10165636b;  */

/* WARNING: Possible PIC construction at 0x0001016562cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101656340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000101656344) */
/* WARNING: Removing unreachable block (ram,0x0001016562d0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10165629c(undefined8 *param_1,undefined8 *param_2)

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
  ulong uVar14;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar16 = (byte *)param_1[1];
  pbVar17 = (byte *)*param_2;
  pbVar12 = (byte *)param_2[1];
  if (pbVar13 != pbVar17 || pbVar16 != pbVar12) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar13,pbVar16,pbVar17,pbVar12,0);
    return pbVar13;
  }
  uVar14 = param_1[2];
  FUN_101653854(uVar14,param_2[2]);
  if ((uVar14 & 1) != 0) {
    uVar14 = param_1[3];
    FUN_100e25fcc(uVar14,param_1[4],param_2[3],param_2[4]);
    if ((uVar14 & 1) != 0) {
      uVar14 = param_1[5];
      func_0x000101653d34(uVar14,param_2[5]);
      if ((((uVar14 & 1) != 0) && (param_1[6] == param_2[6])) && (param_1[7] == param_2[7])) {
        pbVar13 = (byte *)param_1[8];
        pbVar16 = (byte *)param_1[9];
        pbVar17 = (byte *)param_2[8];
        pbVar12 = (byte *)param_2[9];
        if ((pbVar13 == pbVar17) && (pbVar16 == pbVar12)) {
          pbVar10 = (byte *)param_1[10];
          pbVar25 = (byte *)param_1[0xb];
          lVar24 = param_2[10];
          uVar14 = param_2[0xb];
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
            uVar5 = (uint)(uVar14 >> 0x20);
            uVar21 = uVar5 >> 0x1e;
            iVar8 = (int)pbVar10;
            pbVar15 = pbVar25;
            if ((ulong)pbVar25 >> 0x3e == 3) {
              uVar20 = 0;
              if (((pbVar10 != (byte *)0x0) || (pbVar25 != (byte *)0xc000000000000000)) ||
                 ((uVar14 >> 0x3e < 3 ||
                  ((uVar20 = 0, lVar24 != 0 || (uVar14 != 0xc000000000000000))))))
              goto joined_r0x000100e26170;
LAB_100e26128:
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
              if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
              if (uVar21 == 0) {
                uVar22 = uVar14 >> 0x30 & 0xff;
                goto LAB_100e2608c;
              }
              iVar19 = (int)((ulong)lVar24 >> 0x20);
              if (SBORROW4(iVar19,(int)lVar24)) {
                    /* WARNING: Does not return */
                pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
                (*pcVar6)();
              }
              if (uVar20 == (long)(iVar19 - (int)lVar24)) goto LAB_100e26094;
LAB_100e26154:
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
              if (uVar21 < 2) goto LAB_100e26084;
LAB_100e26050:
              if (uVar21 == 2) {
                uVar22 = *(long *)(lVar24 + 0x18) - *(long *)(lVar24 + 0x10);
                if (SBORROW8(*(long *)(lVar24 + 0x18),*(long *)(lVar24 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
                  (*pcVar6)();
                }
LAB_100e2608c:
                if (uVar20 != uVar22) goto LAB_100e26154;
LAB_100e26094:
                if ((long)uVar20 < 1) goto LAB_100e26128;
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
                    pbVar15 = puVar7 + (((ulong)pbVar25 >> 0x30 & 0xff) - 0x70);
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
                  unaff_x24 = pbVar25;
                  if (pbVar10 == (byte *)0x0) {
                    func_0x000107c5ec38();
                    pbVar10 = (byte *)0x0;
                  }
                  else {
                    pbVar15 = pbVar10;
                    func_0x000107c5ec3c();
                    if (SBORROW8((long)unaff_x25,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + ((long)unaff_x25 - (long)pbVar15);
                    func_0x000107c5ec38();
                    unaff_x19 = pbVar10;
                    if (pbVar10 != (byte *)0x0) {
                      if ((long)unaff_x23 <= (long)pbVar15) {
                        pbVar15 = unaff_x23;
                      }
                      pbVar15 = pbVar15 + (long)pbVar10;
                      goto LAB_100e262a4;
                    }
                  }
                  pbVar15 = (byte *)0x0;
                }
                else {
                  if (uVar18 != 2) {
                    *(undefined8 *)(puVar7 + -0x6a) = 0;
                    *(undefined8 *)(puVar7 + -0x70) = 0;
                    pbVar15 = puVar7 + -0x70;
                    goto LAB_100e26260;
                  }
                  lVar26 = *(long *)(pbVar10 + 0x10);
                  unaff_x24 = *(byte **)(pbVar10 + 0x18);
                  func_0x000107c5ec30();
                  pbVar15 = pbVar10;
                  if (pbVar10 != (byte *)0x0) {
                    func_0x000107c5ec3c();
                    if (SBORROW8(lVar26,(long)pbVar15)) {
                    /* WARNING: Does not return */
                      pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                      (*pcVar6)();
                    }
                    pbVar10 = pbVar10 + (lVar26 - (long)pbVar15);
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
                    pbVar15 = (byte *)0x0;
                  }
                  else {
                    if ((long)unaff_x23 <= (long)pbVar15) {
                      pbVar15 = unaff_x23;
                    }
                    pbVar15 = pbVar15 + (long)pbVar10;
                  }
                }
LAB_100e262a4:
                unaff_x20 = (ulong)pbVar25 & 0x3fffffffffffffff;
                unaff_x21 = 0;
                FUN_100e25bdc(puVar7 + -0x70,pbVar10,pbVar15,lVar24,uVar14);
                pbVar9 = (byte *)(ulong)(byte)puVar7[-0x70];
                unaff_x22 = uVar14;
              }
              else {
                pbVar9 = (byte *)(ulong)(uVar20 == 0);
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
            pbVar13 = *(byte **)pbVar9;
            pbVar10 = *(byte **)(pbVar9 + 8);
            pbVar23 = *(byte **)(pbVar9 + 0x18);
            bVar27 = pbVar9[0x28];
            pbVar25 = (byte *)((ulong)*(uint *)(pbVar9 + 0x11) << 8 |
                               (ulong)*(uint3 *)(pbVar9 + 0x15) << 0x28 | (ulong)pbVar9[0x10]);
            pbVar16 = pbVar10;
            if (bVar27 < 3) {
              if (bVar27 == 0) {
                if (pbVar15[0x28] == 0) {
                  lVar24 = *(long *)pbVar15;
                  uVar11 = 0;
                  FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                  func_0x000107c60118(pbVar13,lVar24,uVar11);
                  return (byte *)(ulong)((uint)pbVar13 & 1);
                }
                return (byte *)0x0;
              }
              if (bVar27 == 1) {
                if (pbVar15[0x28] != 1) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar12 = *(byte **)(pbVar15 + 0x10);
                lVar24 = *(long *)pbVar15;
                uVar11 = 0;
                FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
                func_0x000107c60118(pbVar13,lVar24,uVar11);
                if (((ulong)pbVar13 & 1) == 0) {
                  return (byte *)0x0;
                }
                pbVar13 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 == pbVar17) && (pbVar25 == pbVar12)) {
                  return (byte *)0x1;
                }
              }
              else {
                if (pbVar15[0x28] != 2) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                lVar24 = *(long *)(pbVar15 + 0x18);
                if ((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) {
                  if (((pbVar9[0x10] ^ pbVar15[0x10]) & 1) != 0) {
                    return (byte *)0x0;
                  }
                  if (pbVar23 != (byte *)0x0) {
                    if (lVar24 == 0) {
                      return (byte *)0x0;
                    }
                    FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
              break;
            }
            lVar26 = *(long *)(pbVar9 + 0x20);
            if (bVar27 < 5) {
              if (bVar27 != 3) {
                if (pbVar15[0x28] != 4) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)pbVar15;
                pbVar12 = *(byte **)(pbVar15 + 8);
                if (((pbVar13 == pbVar17) && (pbVar10 == pbVar12)) &&
                   (pbVar13 = pbVar25, pbVar16 = pbVar23, pbVar17 = *(byte **)(pbVar15 + 0x10),
                   pbVar12 = *(byte **)(pbVar15 + 0x18),
                   pbVar25 == *(byte **)(pbVar15 + 0x10) && pbVar23 == *(byte **)(pbVar15 + 0x18)))
                {
                  return (byte *)0x1;
                }
                break;
              }
              if (pbVar15[0x28] != 3) {
                return (byte *)0x0;
              }
              if ((uint)*pbVar15 != ((uint)pbVar13 & 0xff)) {
                return (byte *)0x0;
              }
              pbVar12 = *(byte **)(pbVar15 + 0x10);
              lVar24 = *(long *)(pbVar15 + 0x20);
              if (pbVar25 == (byte *)0x0) {
                if (pbVar12 != (byte *)0x0) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar12 == (byte *)0x0) {
                  return (byte *)0x0;
                }
                pbVar17 = *(byte **)(pbVar15 + 8);
                pbVar13 = pbVar10;
                pbVar16 = pbVar25;
                if ((pbVar10 != pbVar17) || (pbVar25 != pbVar12)) break;
              }
              if (lVar26 != 0) {
                if (lVar24 == 0) {
                  return (byte *)0x0;
                }
                if ((pbVar23 == *(byte **)(pbVar15 + 0x18)) && (lVar26 == lVar24)) {
                  return (byte *)0x1;
                }
                func_0x000107c605b8(pbVar23,lVar26,*(byte **)(pbVar15 + 0x18),lVar24,0);
joined_r0x000100e266a4:
                if (((ulong)pbVar23 & 1) == 0) {
                  return (byte *)0x0;
                }
                return (byte *)0x1;
              }
              goto joined_r0x000100e26620;
            }
            if (bVar27 != 5) {
              if ((((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
                  lVar26 == 0) && pbVar25 == (byte *)0x0) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                lVar26 = *(long *)(pbVar15 + 0x20);
                lVar24 = *(long *)(pbVar15 + 0x18);
                bVar27 = pbVar15[8] | (byte)lVar24;
                bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
                bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
                bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
                bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
                bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
                bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
                bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
                bVar35 = pbVar15[0x10] | (byte)lVar26;
                bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
                bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
                bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
                bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
                bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
                bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
                bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                          CONCAT11(bVar28 | auVar43[
                                                  1],bVar27 | auVar43[0]))))))) == 0 &&
                    *(long *)pbVar15 == 0) {
                  return (byte *)0x1;
                }
                return (byte *)0x0;
              }
              if ((pbVar13 == (byte *)0x1) &&
                 (((pbVar23 == (byte *)0x0 && pbVar10 == (byte *)0x0) && pbVar25 == (byte *)0x0) &&
                  lVar26 == 0)) {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 1) {
                  return (byte *)0x0;
                }
              }
              else {
                if (pbVar15[0x28] != 6) {
                  return (byte *)0x0;
                }
                if (*(long *)pbVar15 != 2) {
                  return (byte *)0x0;
                }
              }
              lVar26 = *(long *)(pbVar15 + 0x20);
              lVar24 = *(long *)(pbVar15 + 0x18);
              bVar27 = pbVar15[8] | (byte)lVar24;
              bVar28 = pbVar15[9] | (byte)((ulong)lVar24 >> 8);
              bVar29 = pbVar15[10] | (byte)((ulong)lVar24 >> 0x10);
              bVar30 = pbVar15[0xb] | (byte)((ulong)lVar24 >> 0x18);
              bVar31 = pbVar15[0xc] | (byte)((ulong)lVar24 >> 0x20);
              bVar32 = pbVar15[0xd] | (byte)((ulong)lVar24 >> 0x28);
              bVar33 = pbVar15[0xe] | (byte)((ulong)lVar24 >> 0x30);
              bVar34 = pbVar15[0xf] | (byte)((ulong)lVar24 >> 0x38);
              bVar35 = pbVar15[0x10] | (byte)lVar26;
              bVar36 = pbVar15[0x11] | (byte)((ulong)lVar26 >> 8);
              bVar37 = pbVar15[0x12] | (byte)((ulong)lVar26 >> 0x10);
              bVar38 = pbVar15[0x13] | (byte)((ulong)lVar26 >> 0x18);
              bVar39 = pbVar15[0x14] | (byte)((ulong)lVar26 >> 0x20);
              bVar40 = pbVar15[0x15] | (byte)((ulong)lVar26 >> 0x28);
              bVar41 = pbVar15[0x16] | (byte)((ulong)lVar26 >> 0x30);
              bVar42 = pbVar15[0x17] | (byte)((ulong)lVar26 >> 0x38);
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
                                                                             CONCAT11(bVar28 | 
                                                  auVar43[1],bVar27 | auVar43[0])))))));
              goto joined_r0x000100e26620;
            }
            if (pbVar15[0x28] != 5) {
              return (byte *)0x0;
            }
            lVar24 = *(long *)(pbVar15 + 8);
            uVar14 = *(ulong *)(pbVar15 + 0x10);
            lVar26 = *(long *)pbVar15;
            uVar11 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar26,uVar11);
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
        goto code_r0x000107c605b8;
      }
    }
  }
  return (byte *)0x0;
}



/* Entry: 10165636c; end: 1016564df;  */

uint FUN_10165636c(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined1 auStack_320 [240];
  undefined8 uStack_230;
  undefined8 uStack_228;
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
          uStack_228 = puVar6[1];
          uStack_230 = *puVar6;
          uStack_218 = puVar6[3];
          uStack_220 = puVar6[2];
          uStack_208 = puVar6[5];
          uStack_210 = puVar6[4];
          uStack_1f8 = puVar6[7];
          uStack_200 = puVar6[6];
          uStack_1e8 = puVar6[9];
          uStack_1f0 = puVar6[8];
          uStack_1d8 = puVar6[0xb];
          uStack_1e0 = puVar6[10];
          uStack_1c8 = puVar6[0xd];
          uStack_1d0 = puVar6[0xc];
          uStack_1b8 = puVar6[0xf];
          uStack_1c0 = puVar6[0xe];
          uStack_1a8 = puVar6[0x11];
          uStack_1b0 = puVar6[0x10];
          uStack_198 = puVar6[0x13];
          uStack_1a0 = puVar6[0x12];
          uStack_188 = puVar6[0x15];
          uStack_190 = puVar6[0x14];
          uStack_178 = puVar6[0x17];
          uStack_180 = puVar6[0x16];
          uStack_168 = puVar6[0x19];
          uStack_170 = puVar6[0x18];
          uStack_158 = puVar6[0x1b];
          uStack_160 = puVar6[0x1a];
          uStack_148 = puVar6[0x1d];
          uStack_150 = puVar6[0x1c];
          uStack_138 = puVar7[1];
          uStack_140 = *puVar7;
          uStack_128 = puVar7[3];
          uStack_130 = puVar7[2];
          uStack_118 = puVar7[5];
          uStack_120 = puVar7[4];
          uStack_108 = puVar7[7];
          uStack_110 = puVar7[6];
          uStack_f8 = puVar7[9];
          uStack_100 = puVar7[8];
          uStack_e8 = puVar7[0xb];
          uStack_f0 = puVar7[10];
          uStack_d8 = puVar7[0xd];
          uStack_e0 = puVar7[0xc];
          uStack_c8 = puVar7[0xf];
          uStack_d0 = puVar7[0xe];
          uStack_b8 = puVar7[0x11];
          uStack_c0 = puVar7[0x10];
          uStack_a8 = puVar7[0x13];
          uStack_b0 = puVar7[0x12];
          uStack_98 = puVar7[0x15];
          uStack_a0 = puVar7[0x14];
          uStack_88 = puVar7[0x17];
          uStack_90 = puVar7[0x16];
          uStack_78 = puVar7[0x19];
          uStack_80 = puVar7[0x18];
          uStack_68 = puVar7[0x1b];
          uStack_70 = puVar7[0x1a];
          uStack_58 = puVar7[0x1d];
          uStack_60 = puVar7[0x1c];
          FUN_101553fa0(&uStack_230,auStack_320);
          FUN_101553fa0(&uStack_140,auStack_320);
          puVar3 = &uStack_230;
          FUN_101655a1c(puVar3,&uStack_140);
          func_0x000101554010(&uStack_140);
          func_0x000101554010(&uStack_230);
          if (((ulong)puVar3 & 1) == 0) goto LAB_1016564bc;
          puVar7 = puVar7 + 0x1e;
          puVar6 = puVar6 + 0x1e;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      uVar2 = param_1[3];
      FUN_100e25fcc(uVar2,param_1[4],param_2[3],param_2[4]);
      uVar1 = (uint)uVar2;
      goto LAB_1016564c0;
    }
  }
LAB_1016564bc:
  uVar1 = 0;
LAB_1016564c0:
  return uVar1 & 1;
}



/* Entry: 1016564e0; end: 10165681f;  */

void FUN_1016564e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbca88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974590;
  func_0x000107c61520(&UNK_10d974590,&UNK_1103ee2b0);
  puRam0000000112dbca88 = puVar1;
  return;
}



/* Entry: 101656820; end: 101656843;  */

void FUN_101656820(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656844();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656844; end: 101656883;  */

void FUN_101656844(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb50 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974490;
  func_0x000107c61520(&UNK_10d974490,&UNK_1103ee228);
  puRam0000000112dbcb50 = puVar1;
  return;
}



/* Entry: 101656884; end: 10165689b;  */

void FUN_101656884(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10165625c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10164adb4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10165689c; end: 1016568db;  */

void FUN_10165689c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb58 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9744f8;
  func_0x000107c61520(&UNK_10d9744f8,&UNK_1103ee228);
  puRam0000000112dbcb58 = puVar1;
  return;
}



/* Entry: 1016568dc; end: 1016568ff;  */

void FUN_1016568dc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656900();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656900; end: 10165693f;  */

void FUN_101656900(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb60 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974568;
  func_0x000107c61520(&UNK_10d974568,&UNK_1103ee2b0);
  puRam0000000112dbcb60 = puVar1;
  return;
}



/* Entry: 101656940; end: 101656957;  */

void FUN_101656940(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016564e0();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101656560)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656958; end: 101656997;  */

void FUN_101656958(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9745d0;
  func_0x000107c61520(&UNK_10d9745d0,&UNK_1103ee2b0);
  puRam0000000112dbcb68 = puVar1;
  return;
}



/* Entry: 101656998; end: 1016569bb;  */

void FUN_101656998(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1016569bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1016569bc; end: 1016569fb;  */

void FUN_1016569bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974640;
  func_0x000107c61520(&UNK_10d974640,&UNK_1103ee338);
  puRam0000000112dbcb70 = puVar1;
  return;
}



/* Entry: 1016569fc; end: 101656a13;  */

void FUN_1016569fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1016565a0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10164adf4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656a14; end: 101656a53;  */

void FUN_101656a14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb78 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9746a8;
  func_0x000107c61520(&UNK_10d9746a8,&UNK_1103ee338);
  puRam0000000112dbcb78 = puVar1;
  return;
}



/* Entry: 101656a54; end: 101656a77;  */

void FUN_101656a54(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656a78();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656a78; end: 101656ab7;  */

void FUN_101656a78(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974718;
  func_0x000107c61520(&UNK_10d974718,&UNK_1103ee3d0);
  puRam0000000112dbcb80 = puVar1;
  return;
}



/* Entry: 101656ab8; end: 101656acf;  */

void FUN_101656ab8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101656620)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101656030();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656ad0; end: 101656b0f;  */

void FUN_101656ad0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974780;
  func_0x000107c61520(&UNK_10d974780,&UNK_1103ee3d0);
  puRam0000000112dbcb88 = puVar1;
  return;
}



/* Entry: 101656b10; end: 101656b33;  */

void FUN_101656b10(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656b34();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656b34; end: 101656b73;  */

void FUN_101656b34(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9747f0;
  func_0x000107c61520(&UNK_10d9747f0,&UNK_1103ee470);
  puRam0000000112dbcb90 = puVar1;
  return;
}



/* Entry: 101656b74; end: 101656b8b;  */

void FUN_101656b74(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101656660)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1016565e0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656b8c; end: 101656bcb;  */

void FUN_101656b8c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcb98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974858;
  func_0x000107c61520(&UNK_10d974858,&UNK_1103ee470);
  puRam0000000112dbcb98 = puVar1;
  return;
}



/* Entry: 101656bcc; end: 101656bef;  */

void FUN_101656bcc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656bf0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656bf0; end: 101656c2f;  */

void FUN_101656bf0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9748c8;
  func_0x000107c61520(&UNK_10d9748c8,&UNK_1103ee4f0);
  puRam0000000112dbcba0 = puVar1;
  return;
}



/* Entry: 101656c30; end: 101656c43;  */

void FUN_101656c30(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1016566a0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101656c44();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656c44; end: 101656c83;  */

void FUN_101656c44(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcba8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d974880;
  func_0x000107c61520(&DAT_10d974880,&UNK_1103ee4f0);
  puRam0000000112dbcba8 = puVar1;
  return;
}



/* Entry: 101656c84; end: 101656c87;  */

void FUN_101656c84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974930;
  func_0x000107c61520(&UNK_10d974930,&UNK_1103ee4f0);
  puRam0000000112dbcbb0 = puVar1;
  return;
}



/* Entry: 101656c88; end: 101656cc7;  */

void FUN_101656c88(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbb0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974930;
  func_0x000107c61520(&UNK_10d974930,&UNK_1103ee4f0);
  puRam0000000112dbcbb0 = puVar1;
  return;
}



/* Entry: 101656cc8; end: 101656ceb;  */

void FUN_101656cc8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656cec();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656cec; end: 101656d2b;  */

void FUN_101656cec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbb8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9749a0;
  func_0x000107c61520(&UNK_10d9749a0,&UNK_1103ee578);
  puRam0000000112dbcbb8 = puVar1;
  return;
}



/* Entry: 101656d2c; end: 101656d3f;  */

void FUN_101656d2c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1016566e0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101656d40();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656d40; end: 101656d7f;  */

void FUN_101656d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbc0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d974958;
  func_0x000107c61520(&DAT_10d974958,&UNK_1103ee578);
  puRam0000000112dbcbc0 = puVar1;
  return;
}



/* Entry: 101656d80; end: 101656d83;  */

void FUN_101656d80(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974a08;
  func_0x000107c61520(&UNK_10d974a08,&UNK_1103ee578);
  puRam0000000112dbcbc8 = puVar1;
  return;
}



/* Entry: 101656d84; end: 101656dc3;  */

void FUN_101656d84(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974a08;
  func_0x000107c61520(&UNK_10d974a08,&UNK_1103ee578);
  puRam0000000112dbcbc8 = puVar1;
  return;
}



/* Entry: 101656dc4; end: 101656de7;  */

void FUN_101656dc4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656de8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656de8; end: 101656e27;  */

void FUN_101656de8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbd0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974a78;
  func_0x000107c61520(&UNK_10d974a78,&UNK_1103ee610);
  puRam0000000112dbcbd0 = puVar1;
  return;
}



/* Entry: 101656e28; end: 101656e3f;  */

void FUN_101656e28(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x101656720)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101656520)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656e40; end: 101656e7f;  */

void FUN_101656e40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbd8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974ae0;
  func_0x000107c61520(&UNK_10d974ae0,&UNK_1103ee610);
  puRam0000000112dbcbd8 = puVar1;
  return;
}



/* Entry: 101656e80; end: 101656ea3;  */

void FUN_101656e80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656ea4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656ea4; end: 101656ee3;  */

void FUN_101656ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbe0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974b50;
  func_0x000107c61520(&UNK_10d974b50,&UNK_1103ee690);
  puRam0000000112dbcbe0 = puVar1;
  return;
}



/* Entry: 101656ee4; end: 101656ef7;  */

void FUN_101656ee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1016567a0)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_101656ef8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656ef8; end: 101656f37;  */

void FUN_101656ef8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbe8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d974b08;
  func_0x000107c61520(&DAT_10d974b08,&UNK_1103ee690);
  puRam0000000112dbcbe8 = puVar1;
  return;
}



/* Entry: 101656f38; end: 101656f3b;  */

void FUN_101656f38(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974bb8;
  func_0x000107c61520(&UNK_10d974bb8,&UNK_1103ee690);
  puRam0000000112dbcbf0 = puVar1;
  return;
}



/* Entry: 101656f3c; end: 101656f7b;  */

void FUN_101656f3c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbf0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974bb8;
  func_0x000107c61520(&UNK_10d974bb8,&UNK_1103ee690);
  puRam0000000112dbcbf0 = puVar1;
  return;
}



/* Entry: 101656f7c; end: 101656f9f;  */

void FUN_101656f7c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_101656fa0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 101656fa0; end: 101656fdf;  */

void FUN_101656fa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcbf8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974c28;
  func_0x000107c61520(&UNK_10d974c28,&UNK_1103ee718);
  puRam0000000112dbcbf8 = puVar1;
  return;
}



/* Entry: 101656fe0; end: 101656ff3;  */

void FUN_101656fe0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x1016567e0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x101656760)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101656ff4; end: 101657023;  */

void FUN_101656ff4(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 101657024; end: 101657027;  */

void FUN_101657024(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974c90;
  func_0x000107c61520(&UNK_10d974c90,&UNK_1103ee718);
  puRam0000000112dbcc00 = puVar1;
  return;
}



/* Entry: 101657028; end: 101657067;  */

void FUN_101657028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112dbcc00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d974c90;
  func_0x000107c61520(&UNK_10d974c90,&UNK_1103ee718);
  puRam0000000112dbcc00 = puVar1;
  return;
}



/* Entry: 101657068; end: 101657097;  */

/* WARNING: Possible PIC construction at 0x000101657084: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101657088) */

void FUN_101657068(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101657098; end: 101657173;  */

undefined8 * FUN_101657098(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  uVar1 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  return param_1;
}



/* Entry: 101657174; end: 1016571c7;  */

undefined8 * FUN_101657174(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  uVar2 = param_1[3];
  uVar1 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1016571c8; end: 101657277;  */

int FUN_1016571c8(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 101657278; end: 1016572bf;  */

/* WARNING: Possible PIC construction at 0x00010165729c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016572a0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101657278(long param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + 0x10));
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



/* Entry: 1016572c0; end: 10165735b;  */

undefined8 * FUN_1016572c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[2];
  uVar1 = param_2[3];
  param_1[2] = uVar3;
  uVar2 = param_2[4];
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  func_0x00010006c00c(uVar1,uVar2);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  param_1[5] = param_2[5];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  uVar3 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x00010006c00c(uVar3,uVar2);
  param_1[10] = uVar3;
  param_1[0xb] = uVar2;
  return param_1;
}



/* Entry: 10165735c; end: 10165743f;  */

undefined8 * FUN_10165735c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar4 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[3];
  uVar2 = param_2[4];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[3];
  uVar3 = param_1[4];
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  uVar4 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar4 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar4);
  uVar4 = param_2[10];
  uVar2 = param_2[0xb];
  func_0x00010006c00c(uVar4,uVar2);
  uVar1 = param_1[10];
  uVar3 = param_1[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar2;
  func_0x00010006c090(uVar1,uVar3);
  return param_1;
}



/* Entry: 101657440; end: 1016574cb;  */

undefined8 * FUN_101657440(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6142c(uVar1);
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  uVar1 = param_2[9];
  uVar2 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[10];
  uVar2 = param_1[0xb];
  uVar3 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1016574cc; end: 10165757b;  */

int FUN_1016574cc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x18] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10165757c; end: 101657633;  */

/* WARNING: Possible PIC construction at 0x0001016575c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001016575d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101657604: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001016575c4) */
/* WARNING: Removing unreachable block (ram,0x0001016575cc) */
/* WARNING: Removing unreachable block (ram,0x0001016575d8) */
/* WARNING: Removing unreachable block (ram,0x0001016575e8) */
/* WARNING: Removing unreachable block (ram,0x0001016575f0) */
/* WARNING: Removing unreachable block (ram,0x000101657608) */
/* WARNING: Removing unreachable block (ram,0x000101657624) */
/* WARNING: Removing unreachable block (ram,0x000101657618) */
/* WARNING: Removing unreachable block (ram,0x000101657600) */

void FUN_10165757c(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  func_0x000107c6142c(param_1[2]);
  func_0x000107c6142c(param_1[4]);
  func_0x000107c6142c(param_1[6]);
  func_0x000107c6142c(param_1[9]);
  func_0x000107c6142c(param_1[10]);
  uVar1 = param_1[0xc];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    func_0x000107c61574(param_1[0xb]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 101657634; end: 101657813;  */

undefined8 * FUN_101657634(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  uVar5 = param_2[2];
  uVar9 = param_2[3];
  param_1[2] = uVar5;
  param_1[3] = uVar9;
  uVar9 = param_2[4];
  uVar8 = param_2[5];
  param_1[4] = uVar9;
  param_1[5] = uVar8;
  uVar7 = param_2[6];
  param_1[6] = uVar7;
  uVar8 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar8;
  uVar8 = param_2[9];
  uVar2 = param_2[10];
  param_1[9] = uVar8;
  param_1[10] = uVar2;
  uVar1 = param_2[0xb];
  uVar3 = param_2[0xc];
  func_0x000107c61434();
  func_0x000107c61434(uVar5);
  func_0x000107c61434(uVar9);
  func_0x000107c61434(uVar7);
  func_0x000107c61434(uVar8);
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[0xb] = uVar1;
  param_1[0xc] = uVar3;
  lVar4 = param_2[0xf];
  if (lVar4 == 0) {
    uVar5 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar5;
    uVar5 = param_2[0x15];
    param_1[0x16] = param_2[0x16];
    param_1[0x15] = uVar5;
    uVar5 = param_2[0x17];
    param_1[0x18] = param_2[0x18];
    param_1[0x17] = uVar5;
    param_1[0x19] = param_2[0x19];
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    uVar5 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar5;
    uVar5 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
  }
  else {
    uVar5 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0xf] = lVar4;
    uVar5 = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar5;
    uVar5 = param_2[0x12];
    uVar9 = param_2[0x13];
    func_0x000107c61434();
    func_0x00010006c00c(uVar5,uVar9);
    param_1[0x12] = uVar5;
    param_1[0x13] = uVar9;
    uVar6 = param_2[0x16];
    if (uVar6 >> 0x3c < 0xf) {
      uVar5 = param_2[0x15];
      param_1[0x14] = param_2[0x14];
      func_0x00010006c00c(uVar5,uVar6);
      param_1[0x15] = uVar5;
      param_1[0x16] = uVar6;
    }
    else {
      uVar5 = param_2[0x14];
      param_1[0x15] = param_2[0x15];
      param_1[0x14] = uVar5;
      param_1[0x16] = param_2[0x16];
    }
    uVar6 = param_2[0x19];
    if (uVar6 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
      uVar5 = param_2[0x18];
      func_0x00010006c00c(uVar5,uVar6);
      param_1[0x18] = uVar5;
      param_1[0x19] = uVar6;
    }
    else {
      uVar5 = param_2[0x17];
      param_1[0x18] = param_2[0x18];
      param_1[0x17] = uVar5;
      param_1[0x19] = param_2[0x19];
    }
  }
  uVar6 = param_2[0x1d];
  if (uVar6 >> 0x3c < 0xf) {
    param_1[0x1a] = param_2[0x1a];
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
    uVar5 = param_2[0x1c];
    func_0x00010006c00c(uVar5,uVar6);
    param_1[0x1c] = uVar5;
    param_1[0x1d] = uVar6;
  }
  else {
    uVar5 = param_2[0x1a];
    uVar8 = param_2[0x1d];
    uVar9 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar5;
    param_1[0x1d] = uVar8;
    param_1[0x1c] = uVar9;
  }
  return param_1;
}



/* Entry: 101657814; end: 101657c67;  */

undefined8 * FUN_101657814(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[1] = param_2[1];
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[3] = param_2[3];
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[5] = param_2[5];
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_2[0xb];
  uVar5 = param_2[0xc];
  func_0x00010006c00c(uVar2,uVar5);
  uVar4 = param_1[0xb];
  uVar6 = param_1[0xc];
  param_1[0xb] = uVar2;
  param_1[0xc] = uVar5;
  func_0x00010006c090(uVar4,uVar6);
  lVar3 = param_1[0xf];
  if (lVar3 == 0) {
    if (param_2[0xf] == 0) {
      uVar4 = param_2[0xe];
      uVar2 = param_2[0xd];
      uVar6 = param_2[0x10];
      uVar5 = param_2[0xf];
      uVar7 = param_2[0x11];
      param_1[0x12] = param_2[0x12];
      param_1[0x11] = uVar7;
      param_1[0x10] = uVar6;
      param_1[0xf] = uVar5;
      param_1[0xe] = uVar4;
      param_1[0xd] = uVar2;
      uVar4 = param_2[0x14];
      uVar2 = param_2[0x13];
      uVar6 = param_2[0x16];
      uVar5 = param_2[0x15];
      uVar8 = param_2[0x18];
      uVar7 = param_2[0x17];
      param_1[0x19] = param_2[0x19];
      param_1[0x18] = uVar8;
      param_1[0x17] = uVar7;
      param_1[0x16] = uVar6;
      param_1[0x15] = uVar5;
      param_1[0x14] = uVar4;
      param_1[0x13] = uVar2;
      goto LAB_101657ba8;
    }
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar4 = param_2[0x13];
    func_0x000107c61434();
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar4;
    if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      param_1[0x14] = param_2[0x14];
      uVar2 = param_2[0x15];
      uVar4 = param_2[0x16];
      func_0x00010006c00c(uVar2,uVar4);
      param_1[0x15] = uVar2;
      param_1[0x16] = uVar4;
    }
    else {
      uVar4 = param_2[0x15];
      uVar2 = param_2[0x14];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      param_1[0x14] = uVar2;
    }
    uVar1 = (ulong)param_2[0x19] >> 0x3c;
  }
  else {
    if (param_2[0xf] == 0) {
      func_0x000101553fdc(param_1 + 0xd);
      uVar4 = param_2[0x12];
      uVar2 = param_2[0x11];
      uVar6 = param_2[0x10];
      uVar5 = param_2[0xf];
      uVar7 = param_2[0xd];
      param_1[0xe] = param_2[0xe];
      param_1[0xd] = uVar7;
      param_1[0x10] = uVar6;
      param_1[0xf] = uVar5;
      param_1[0x12] = uVar4;
      param_1[0x11] = uVar2;
      uVar5 = param_2[0x16];
      uVar4 = param_2[0x15];
      uVar7 = param_2[0x18];
      uVar6 = param_2[0x17];
      uVar2 = param_2[0x19];
      uVar8 = param_2[0x13];
      param_1[0x14] = param_2[0x14];
      param_1[0x13] = uVar8;
      param_1[0x19] = uVar2;
      param_1[0x18] = uVar7;
      param_1[0x17] = uVar6;
      param_1[0x16] = uVar5;
      param_1[0x15] = uVar4;
      goto LAB_101657ba8;
    }
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xf] = param_2[0xf];
    func_0x000107c61434();
    func_0x000107c6142c(lVar3);
    param_1[0x10] = param_2[0x10];
    param_1[0x11] = param_2[0x11];
    uVar2 = param_2[0x12];
    uVar5 = param_2[0x13];
    func_0x00010006c00c(uVar2,uVar5);
    uVar4 = param_1[0x12];
    uVar6 = param_1[0x13];
    param_1[0x12] = uVar2;
    param_1[0x13] = uVar5;
    func_0x00010006c090(uVar4,uVar6);
    if ((ulong)param_1[0x16] >> 0x3c < 0xf) {
      if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
        param_1[0x14] = param_2[0x14];
        uVar2 = param_2[0x15];
        uVar5 = param_2[0x16];
        func_0x00010006c00c(uVar2,uVar5);
        uVar4 = param_1[0x15];
        uVar6 = param_1[0x16];
        param_1[0x15] = uVar2;
        param_1[0x16] = uVar5;
        func_0x00010006c090(uVar4,uVar6);
      }
      else {
        func_0x00010159d670(param_1 + 0x14);
        uVar2 = param_2[0x16];
        uVar4 = param_2[0x14];
        param_1[0x15] = param_2[0x15];
        param_1[0x14] = uVar4;
        param_1[0x16] = uVar2;
      }
    }
    else if ((ulong)param_2[0x16] >> 0x3c < 0xf) {
      param_1[0x14] = param_2[0x14];
      uVar2 = param_2[0x15];
      uVar4 = param_2[0x16];
      func_0x00010006c00c(uVar2,uVar4);
      param_1[0x15] = uVar2;
      param_1[0x16] = uVar4;
    }
    else {
      uVar4 = param_2[0x15];
      uVar2 = param_2[0x14];
      param_1[0x16] = param_2[0x16];
      param_1[0x15] = uVar4;
      param_1[0x14] = uVar2;
    }
    uVar1 = (ulong)param_2[0x19] >> 0x3c;
    if ((ulong)param_1[0x19] >> 0x3c < 0xf) {
      if (uVar1 < 0xf) {
        *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
        uVar2 = param_2[0x18];
        uVar5 = param_2[0x19];
        func_0x00010006c00c(uVar2,uVar5);
        uVar4 = param_1[0x18];
        uVar6 = param_1[0x19];
        param_1[0x18] = uVar2;
        param_1[0x19] = uVar5;
        func_0x00010006c090(uVar4,uVar6);
      }
      else {
        FUN_101599dcc(param_1 + 0x17);
        uVar2 = param_2[0x19];
        uVar4 = param_2[0x17];
        param_1[0x18] = param_2[0x18];
        param_1[0x17] = uVar4;
        param_1[0x19] = uVar2;
      }
      goto LAB_101657ba8;
    }
  }
  if (uVar1 < 0xf) {
    *(undefined4 *)(param_1 + 0x17) = *(undefined4 *)(param_2 + 0x17);
    uVar2 = param_2[0x18];
    uVar4 = param_2[0x19];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x18] = uVar2;
    param_1[0x19] = uVar4;
  }
  else {
    uVar4 = param_2[0x18];
    uVar2 = param_2[0x17];
    param_1[0x19] = param_2[0x19];
    param_1[0x18] = uVar4;
    param_1[0x17] = uVar2;
  }
LAB_101657ba8:
  if ((ulong)param_1[0x1d] >> 0x3c < 0xf) {
    if ((ulong)param_2[0x1d] >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
      *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)((long)param_2 + 0xd4);
      *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
      uVar2 = param_2[0x1c];
      uVar5 = param_2[0x1d];
      func_0x00010006c00c(uVar2,uVar5);
      uVar4 = param_1[0x1c];
      uVar6 = param_1[0x1d];
      param_1[0x1c] = uVar2;
      param_1[0x1d] = uVar5;
      func_0x00010006c090(uVar4,uVar6);
    }
    else {
      FUN_101657c68(param_1 + 0x1a);
      uVar5 = param_2[0x1a];
      uVar4 = param_2[0x1d];
      uVar2 = param_2[0x1c];
      param_1[0x1b] = param_2[0x1b];
      param_1[0x1a] = uVar5;
      param_1[0x1d] = uVar4;
      param_1[0x1c] = uVar2;
    }
  }
  else if ((ulong)param_2[0x1d] >> 0x3c < 0xf) {
    *(undefined4 *)(param_1 + 0x1a) = *(undefined4 *)(param_2 + 0x1a);
    *(undefined4 *)((long)param_1 + 0xd4) = *(undefined4 *)((long)param_2 + 0xd4);
    *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(param_2 + 0x1b);
    uVar2 = param_2[0x1c];
    uVar4 = param_2[0x1d];
    func_0x00010006c00c(uVar2,uVar4);
    param_1[0x1c] = uVar2;
    param_1[0x1d] = uVar4;
  }
  else {
    uVar2 = param_2[0x1a];
    uVar5 = param_2[0x1d];
    uVar4 = param_2[0x1c];
    param_1[0x1b] = param_2[0x1b];
    param_1[0x1a] = uVar2;
    param_1[0x1d] = uVar5;
    param_1[0x1c] = uVar4;
  }
  return param_1;
}



/* Entry: 101657c68; end: 101657e9b;  */

long FUN_101657c68(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
  return param_1;
}



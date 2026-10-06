/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1035285b4; end: 103528613;  */

void FUN_1035285b4(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f760b8 != -1) {
    func_0x000107c61568(0x112f760b8,0x10352668c);
  }
  uVar1 = uRam0000000112f760c0;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103528614; end: 103528637;  */

undefined1  [16] FUN_103528614(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f155110;
  auVar1._0_8_ = 0xd000000000000039;
  return auVar1;
}



/* Entry: 103528638; end: 103528667;  */

undefined1  [16] FUN_103528638(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 103528668; end: 10352869b;  */

void FUN_103528668(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 10352869c; end: 1035286af;  */

undefined8 FUN_10352869c(void)

{
  return 0x1035286ac;
}



/* Entry: 1035286b0; end: 1035286e7;  */

void FUN_1035286b0(void)

{
  FUN_1035267a4();
  return;
}



/* Entry: 1035286e8; end: 1035286eb;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1035286e8(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035286ec; end: 103528723;  */

uint FUN_1035286ec(long param_1,long param_2)

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
  func_0x00010352d9c4();
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



/* Entry: 103528724; end: 1035287cb;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103528724(long *param_1)

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
    FUN_103527abc(uVar25,uVar26);
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



/* Entry: 1035287cc; end: 10352886b;  */

/* WARNING: Possible PIC construction at 0x000103528818: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103528828: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352881c) */
/* WARNING: Removing unreachable block (ram,0x00010352882c) */

void FUN_1035287cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f760d8 != -1) {
    func_0x000107c61568(0x112f760d8,FUN_103526644);
  }
  uVar5 = uRam0000000113807c48;
  uVar4 = uRam0000000113807c40;
  uVar3 = uRam0000000113807c38;
  uVar2 = uRam0000000113807c30;
  uVar1 = uRam0000000113807c28;
  *param_1 = uRam0000000113807c20;
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



/* Entry: 10352886c; end: 1035288a7;  */

void FUN_10352886c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f764d8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f764d8,&UNK_10dbd5750);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1035288a8; end: 1035289ab;  */

void FUN_1035288a8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1035289ac; end: 103528a53;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1035289ac(undefined8 *param_1,long *param_2)

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
    FUN_103527abc(uVar25,uVar26);
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



/* Entry: 103528a54; end: 103528a9b;  */

void FUN_103528a54(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd58a0,0x2c,2);
  uRam0000000113807c58 = uStack_38;
  uRam0000000113807c50 = uStack_40;
  uRam0000000113807c68 = uStack_28;
  uRam0000000113807c60 = uStack_30;
  uRam0000000113807c78 = uStack_18;
  uRam0000000113807c70 = uStack_20;
  return;
}



/* Entry: 103528a9c; end: 103528b47;  */

void FUN_103528a9c(undefined8 param_1,long param_2,long param_3)

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
      pcVar3 = *(code **)(param_3 + 0x48);
      goto LAB_103528ad8;
    }
    if (lVar1 == 1) {
      pcVar3 = *(code **)(param_3 + 0x150);
LAB_103528ad8:
      (*pcVar3)();
    }
  }
  pcVar3 = *(code **)(param_3 + 0x60);
  goto LAB_103528ad8;
}



/* Entry: 103528b48; end: 103528bfb;  */

void FUN_103528b48(undefined8 param_1,undefined8 param_2,long param_3)

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
  if ((((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
      (((int)unaff_x20[2] == 0 ||
       ((**(code **)(param_3 + 0x18))((int)unaff_x20[2],2,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[3] == 0 ||
      ((**(code **)(param_3 + 0x20))(unaff_x20[3],3,param_2,param_3), unaff_x21 == 0)))) {
    func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}



/* Entry: 103528bfc; end: 103528c3b;  */

void FUN_103528bfc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  *(undefined4 *)(param_1 + 2) = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0xc000000000000000;
  return;
}



/* Entry: 103528c3c; end: 103528c6b;  */

undefined1  [16] FUN_103528c3c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 103528c6c; end: 103528c9f;  */

void FUN_103528c6c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 103528ca0; end: 103528cb3;  */

undefined1  [16] FUN_103528ca0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x103528cb0;
  return auVar1;
}



/* Entry: 103528cb4; end: 103528cdb;  */

void FUN_103528cb4(void)

{
  FUN_103528a9c();
  return;
}



/* Entry: 103528cdc; end: 103528cdf;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103528cdc(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103528ce0; end: 103528d17;  */

uint FUN_103528ce0(long param_1,long param_2)

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
  func_0x00010352d984();
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



/* Entry: 103528d18; end: 103528dcb;  */

/* WARNING: Possible PIC construction at 0x000103528d68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103528d6c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103528d18(undefined8 *param_1)

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
  
  pbVar14 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  lVar22 = param_1[4];
  uVar25 = param_1[5];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  pbVar9 = (byte *)unaff_x20[4];
  pbVar23 = (byte *)unaff_x20[5];
  if ((pbVar11 != pbVar14) || (pbVar13 != pbVar15)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  if ((*(int *)(unaff_x20 + 2) != *(int *)(param_1 + 2)) || (unaff_x20[3] != param_1[3])) {
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
code_r0x000100e26128:
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar25 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
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
          if (uVar16 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar12 = (byte *)((long)register0x00000008 + -0x70);
            goto code_r0x000100e26260;
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
code_r0x000100e262a4:
        unaff_x20 = (undefined8 *)((ulong)pbVar23 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar25);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar25;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
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
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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



/* Entry: 103528dcc; end: 103528e6b;  */

/* WARNING: Possible PIC construction at 0x000103528e18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103528e28: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103528e1c) */
/* WARNING: Removing unreachable block (ram,0x000103528e2c) */

void FUN_103528dcc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f760e8 != -1) {
    func_0x000107c61568(0x112f760e8,FUN_103528a54);
  }
  uVar5 = uRam0000000113807c78;
  uVar4 = uRam0000000113807c70;
  uVar3 = uRam0000000113807c68;
  uVar2 = uRam0000000113807c60;
  uVar1 = uRam0000000113807c58;
  *param_1 = uRam0000000113807c50;
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



/* Entry: 103528e6c; end: 103528ea7;  */

void FUN_103528e6c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f764c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f764c8,&UNK_10dbd5748);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103528ea8; end: 103528fcb;  */

void FUN_103528ea8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined4 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_60 = *unaff_x20;
  uStack_58 = unaff_x20[1];
  uStack_50 = *(undefined4 *)(unaff_x20 + 2);
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  uStack_48 = unaff_x20[3];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103528fcc; end: 10352907f;  */

/* WARNING: Possible PIC construction at 0x000103529024: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000103529028) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103528fcc(undefined8 *param_1,undefined8 *param_2)

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
  byte *pbVar23;
  undefined8 unaff_x21;
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
  
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  pbVar9 = (byte *)param_1[4];
  pbVar23 = (byte *)param_1[5];
  pbVar14 = (byte *)*param_2;
  pbVar15 = (byte *)param_2[1];
  lVar22 = param_2[4];
  uVar24 = param_2[5];
  if ((pbVar11 != pbVar14) || (pbVar13 != pbVar15)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  if ((*(int *)(param_1 + 2) != *(int *)(param_2 + 2)) || (param_1[3] != param_2[3])) {
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
code_r0x000100e26128:
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
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar19 == 0) {
        uVar20 = uVar24 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar17 = (int)((ulong)lVar22 >> 0x20);
      if (SBORROW4(iVar17,(int)lVar22)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar18 == (long)(iVar17 - (int)lVar22)) goto code_r0x000100e26094;
code_r0x000100e26154:
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
      if (uVar19 < 2) goto code_r0x000100e26084;
code_r0x000100e26050:
      if (uVar19 == 2) {
        uVar20 = *(long *)(lVar22 + 0x18) - *(long *)(lVar22 + 0x10);
        if (SBORROW8(*(long *)(lVar22 + 0x18),*(long *)(lVar22 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
code_r0x000100e2608c:
        if (uVar18 != uVar20) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar18 < 1) goto code_r0x000100e26128;
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
          if (uVar16 != 2) {
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
code_r0x000100e262a4:
        unaff_x20 = (ulong)pbVar23 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar22,
                            uVar24);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar24;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar18 == 0);
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
    bVar26 = pbVar8[0x28];
    pbVar23 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar22 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
            func_0x000100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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



/* Entry: 103529080; end: 1035290c7;  */

void FUN_103529080(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd57c0,0xd8,2);
  uRam0000000113807c88 = uStack_38;
  uRam0000000113807c80 = uStack_40;
  uRam0000000113807c98 = uStack_28;
  uRam0000000113807c90 = uStack_30;
  uRam0000000113807ca8 = uStack_18;
  uRam0000000113807ca0 = uStack_20;
  return;
}



/* Entry: 1035290c8; end: 1035292af;  */

/* WARNING: Removing unreachable block (ram,0x0001035292ac) */

void FUN_1035290c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  code *pcVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  uVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x00010352b380();
        break;
      case 2:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x00010352b340();
        break;
      case 3:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        break;
      case 4:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x000101568c04();
        break;
      case 5:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        break;
      case 6:
        pcVar3 = *(code **)(param_3 + 0x138);
        lVar2 = unaff_x20 + 0x19;
        goto code_r0x00010352929c;
      case 7:
        pcVar3 = *(code **)(param_3 + 0x48);
        lVar2 = unaff_x20 + 0x1c;
        goto code_r0x00010352929c;
      case 8:
        pcVar3 = *(code **)(param_3 + 0x198);
        func_0x0001015d5420();
        break;
      case 9:
        pcVar3 = *(code **)(param_3 + 0x48);
        lVar2 = unaff_x20 + 0x20;
        goto code_r0x00010352929c;
      case 10:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x00010352b2c0();
        break;
      case 0xb:
        pcVar3 = *(code **)(param_3 + 0x138);
        lVar2 = unaff_x20 + 0x31;
code_r0x00010352929c:
        (*pcVar3)(lVar2,param_2,param_3);
        goto LAB_103529168;
      case 0xc:
        pcVar3 = *(code **)(param_3 + 0x180);
        func_0x00010352b300();
        break;
      default:
        goto LAB_103529168;
      }
      (*pcVar3)();
LAB_103529168:
      uVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1035292b0; end: 103529517;  */

void FUN_1035292b0(undefined1 *param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  undefined1 *puVar2;
  long *plVar3;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long lStack_50;
  undefined1 uStack_48;
  
  plVar1 = &lStack_50;
  plVar3 = &lStack_50;
  puVar2 = param_1;
  if (*unaff_x20 != 0) {
    uStack_48 = (undefined1)unaff_x20[1];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = *unaff_x20;
    func_0x00010352b380();
    (*pcVar4)(&lStack_50,1,&UNK_110661e38,puVar2,param_2,param_3);
    puVar2 = (undefined1 *)plVar1;
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[2] != 0) {
    uStack_48 = (undefined1)unaff_x20[3];
    pcVar4 = *(code **)(param_3 + 0x80);
    lStack_50 = unaff_x20[2];
    func_0x00010352b340();
    (*pcVar4)(&lStack_50,2,&UNK_110661ec8,puVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_103529518();
  if (unaff_x21 == 0) {
    FUN_10352959c();
    FUN_103529620();
    if (*(char *)((long)unaff_x20 + 0x19) == '\x01') {
      (**(code **)(param_3 + 0x68))(1,6,param_2,param_3);
    }
    if (*(int *)((long)unaff_x20 + 0x1c) != 0) {
      (**(code **)(param_3 + 0x18))(*(int *)((long)unaff_x20 + 0x1c),7,param_2,param_3);
    }
    FUN_1035296a8();
    puVar2 = (undefined1 *)(ulong)*(uint *)(unaff_x20 + 4);
    if (*(uint *)(unaff_x20 + 4) != 0) {
      (**(code **)(param_3 + 0x18))(puVar2,9,param_2,param_3);
    }
    if (unaff_x20[5] != 0) {
      uStack_48 = (undefined1)unaff_x20[6];
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[5];
      func_0x00010352b2c0();
      (*pcVar4)(&lStack_50,10,&UNK_110661298,puVar2,param_2,param_3);
      puVar2 = (undefined1 *)plVar3;
    }
    if (*(char *)((long)unaff_x20 + 0x31) == '\x01') {
      puVar2 = (undefined1 *)0x1;
      (**(code **)(param_3 + 0x68))(1,0xb,param_2,param_3);
    }
    if (unaff_x20[7] != 0) {
      uStack_48 = (undefined1)unaff_x20[8];
      pcVar4 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[7];
      func_0x00010352b300();
      (*pcVar4)(&lStack_50,0xc,&UNK_110662228,puVar2,param_2,param_3);
    }
    func_0x000100076224(param_1,unaff_x20[9],unaff_x20[10],param_2,param_3);
  }
  return;
}



/* Entry: 103529518; end: 10352959b;  */

void FUN_103529518(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x60);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x58);
    uStack_48 = *(undefined8 *)(param_1 + 0x70);
    uStack_50 = *(undefined8 *)(param_1 + 0x68);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,3,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10352959c; end: 10352961f;  */

void FUN_10352959c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x80);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x78);
    uStack_48 = *(undefined8 *)(param_1 + 0x90);
    uStack_50 = *(undefined8 *)(param_1 + 0x88);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,4,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103529620; end: 1035296a7;  */

void FUN_103529620(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xa8);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xa0);
    uStack_60 = *(undefined8 *)(param_1 + 0x98);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,5,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1035296a8; end: 10352972f;  */

void FUN_1035296a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0xc0);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0xb8);
    uStack_60 = *(undefined8 *)(param_1 + 0xb0);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,8,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103529730; end: 1035297af;  */

void FUN_103529730(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  param_1[2] = 0;
  *(undefined2 *)(param_1 + 3) = 1;
  *(undefined4 *)((long)param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 6) = 1;
  param_1[7] = 0;
  *(undefined1 *)(param_1 + 8) = 1;
  param_1[10] = 0xc000000000000000;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0xf000000000000000;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0xf000000000000000;
  return;
}



/* Entry: 1035297b0; end: 1035297df;  */

undefined1  [16] FUN_1035297b0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x48);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return auVar1;
}



/* Entry: 1035297e0; end: 103529813;  */

void FUN_1035297e0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  *(undefined8 *)(unaff_x20 + 0x48) = param_1;
  *(undefined8 *)(unaff_x20 + 0x50) = param_2;
  return;
}



/* Entry: 103529814; end: 103529827;  */

undefined1  [16] FUN_103529814(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x48;
  auVar1._0_8_ = 0x103529824;
  return auVar1;
}



/* Entry: 103529828; end: 10352983b;  */

void FUN_103529828(void)

{
  FUN_1035290c8();
  return;
}



/* Entry: 10352983c; end: 10352989b;  */

void FUN_10352983c(void)

{
  FUN_1035292b0();
  return;
}



/* Entry: 10352989c; end: 10352989f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10352989c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1035298a0; end: 1035298d7;  */

uint FUN_1035298a0(long param_1,long param_2)

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
  func_0x00010352d944();
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



/* Entry: 1035298d8; end: 103529977;  */

uint FUN_1035298d8(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  uStack_48 = param_1[0x15];
  uStack_50 = param_1[0x14];
  uStack_38 = param_1[0x17];
  uStack_40 = param_1[0x16];
  uStack_30 = param_1[0x18];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_78 = param_1[0xf];
  uStack_80 = param_1[0xe];
  uStack_68 = param_1[0x11];
  uStack_70 = param_1[0x10];
  uStack_58 = param_1[0x13];
  uStack_60 = param_1[0x12];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_118 = unaff_x20[0x15];
  uStack_120 = unaff_x20[0x14];
  uStack_108 = unaff_x20[0x17];
  uStack_110 = unaff_x20[0x16];
  uStack_100 = unaff_x20[0x18];
  uStack_158 = unaff_x20[0xd];
  uStack_160 = unaff_x20[0xc];
  uStack_148 = unaff_x20[0xf];
  uStack_150 = unaff_x20[0xe];
  uStack_138 = unaff_x20[0x11];
  uStack_140 = unaff_x20[0x10];
  uStack_128 = unaff_x20[0x13];
  uStack_130 = unaff_x20[0x12];
  uStack_198 = unaff_x20[5];
  uStack_1a0 = unaff_x20[4];
  uStack_188 = unaff_x20[7];
  uStack_190 = unaff_x20[6];
  uStack_178 = unaff_x20[9];
  uStack_180 = unaff_x20[8];
  uStack_168 = unaff_x20[0xb];
  uStack_170 = unaff_x20[10];
  uStack_1b8 = unaff_x20[1];
  uStack_1c0 = *unaff_x20;
  uStack_1a8 = unaff_x20[3];
  uStack_1b0 = unaff_x20[2];
  FUN_10352b3c0(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103529978; end: 103529a17;  */

/* WARNING: Possible PIC construction at 0x0001035299c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001035299d4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001035299c8) */
/* WARNING: Removing unreachable block (ram,0x0001035299d8) */

void FUN_103529978(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f760f8 != -1) {
    func_0x000107c61568(0x112f760f8,FUN_103529080);
  }
  uVar5 = uRam0000000113807ca8;
  uVar4 = uRam0000000113807ca0;
  uVar3 = uRam0000000113807c98;
  uVar2 = uRam0000000113807c90;
  uVar1 = uRam0000000113807c88;
  *param_1 = uRam0000000113807c80;
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



/* Entry: 103529a18; end: 103529a53;  */

void FUN_103529a18(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f764b8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f764b8,&UNK_10dbd5740);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103529a54; end: 103529baf;  */

void FUN_103529a54(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_148 [72];
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
  
  uStack_58 = unaff_x20[0x15];
  uStack_60 = unaff_x20[0x14];
  uStack_48 = unaff_x20[0x17];
  uStack_50 = unaff_x20[0x16];
  uStack_40 = unaff_x20[0x18];
  uStack_98 = unaff_x20[0xd];
  uStack_a0 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_78 = unaff_x20[0x11];
  uStack_80 = unaff_x20[0x10];
  uStack_68 = unaff_x20[0x13];
  uStack_70 = unaff_x20[0x12];
  uStack_d8 = unaff_x20[5];
  uStack_e0 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  uStack_c0 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  uStack_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  func_0x000107c6068c(auStack_148,0);
  func_0x000107c5fa50(auStack_148,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103529bb0; end: 103529c4f;  */

uint FUN_103529bb0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  uStack_118 = param_1[0x15];
  uStack_120 = param_1[0x14];
  uStack_108 = param_1[0x17];
  uStack_110 = param_1[0x16];
  uStack_100 = param_1[0x18];
  uStack_158 = param_1[0xd];
  uStack_160 = param_1[0xc];
  uStack_148 = param_1[0xf];
  uStack_150 = param_1[0xe];
  uStack_138 = param_1[0x11];
  uStack_140 = param_1[0x10];
  uStack_128 = param_1[0x13];
  uStack_130 = param_1[0x12];
  uStack_198 = param_1[5];
  uStack_1a0 = param_1[4];
  uStack_188 = param_1[7];
  uStack_190 = param_1[6];
  uStack_178 = param_1[9];
  uStack_180 = param_1[8];
  uStack_168 = param_1[0xb];
  uStack_170 = param_1[10];
  uStack_1b8 = param_1[1];
  uStack_1c0 = *param_1;
  uStack_1a8 = param_1[3];
  uStack_1b0 = param_1[2];
  uStack_48 = param_2[0x15];
  uStack_50 = param_2[0x14];
  uStack_38 = param_2[0x17];
  uStack_40 = param_2[0x16];
  uStack_30 = param_2[0x18];
  uStack_88 = param_2[0xd];
  uStack_90 = param_2[0xc];
  uStack_78 = param_2[0xf];
  uStack_80 = param_2[0xe];
  uStack_68 = param_2[0x11];
  uStack_70 = param_2[0x10];
  uStack_58 = param_2[0x13];
  uStack_60 = param_2[0x12];
  uStack_c8 = param_2[5];
  uStack_d0 = param_2[4];
  uStack_b8 = param_2[7];
  uStack_c0 = param_2[6];
  uStack_a8 = param_2[9];
  uStack_b0 = param_2[8];
  uStack_98 = param_2[0xb];
  uStack_a0 = param_2[10];
  uStack_e8 = param_2[1];
  uStack_f0 = *param_2;
  uStack_d8 = param_2[3];
  uStack_e0 = param_2[2];
  FUN_10352b3c0(&uStack_1c0,&uStack_f0);
  return uVar1 & 1;
}



/* Entry: 103529c50; end: 103529c97;  */

void FUN_103529c50(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbd5760,0x59,2);
  uRam0000000113807cb8 = uStack_38;
  uRam0000000113807cb0 = uStack_40;
  uRam0000000113807cc8 = uStack_28;
  uRam0000000113807cc0 = uStack_30;
  uRam0000000113807cd8 = uStack_18;
  uRam0000000113807cd0 = uStack_20;
  return;
}



/* Entry: 103529c98; end: 103529df7;  */

/* WARNING: Removing unreachable block (ram,0x000103529df4) */

void FUN_103529c98(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 4) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x000101568c04();
          lVar2 = unaff_x20 + 0x28;
          puVar3 = &UNK_110790c80;
        }
        else {
          if (lVar1 != 2) {
            if (lVar1 == 3) {
              pcVar4 = *(code **)(param_3 + 0x138);
              goto LAB_103529d10;
            }
            goto LAB_103529d20;
          }
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001015d5420();
          lVar2 = unaff_x20 + 0x48;
          puVar3 = &UNK_110790b00;
        }
LAB_103529de0:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 4) {
          pcVar4 = *(code **)(param_3 + 0x48);
        }
        else {
          if (lVar1 == 5) {
            pcVar4 = *(code **)(param_3 + 0x180);
            func_0x00010352bd28();
            lVar2 = unaff_x20 + 8;
            puVar3 = &UNK_110661328;
            goto LAB_103529de0;
          }
          if (lVar1 != 6) goto LAB_103529d20;
          pcVar4 = *(code **)(param_3 + 0x138);
        }
LAB_103529d10:
        (*pcVar4)();
      }
LAB_103529d20:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103529df8; end: 103529f37;  */

void FUN_103529df8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  char *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  long lStack_50;
  char cStack_48;
  
  FUN_103529f38();
  if (unaff_x21 == 0) {
    FUN_103529fbc();
    if (*unaff_x20 == '\x01') {
      (**(code **)(param_3 + 0x68))(1,3,param_2,param_3);
    }
    uVar1 = (ulong)*(uint *)(unaff_x20 + 4);
    if (*(uint *)(unaff_x20 + 4) != 0) {
      (**(code **)(param_3 + 0x18))(uVar1,4,param_2,param_3);
    }
    if (*(long *)(unaff_x20 + 8) != 0) {
      cStack_48 = unaff_x20[0x10];
      pcVar2 = *(code **)(param_3 + 0x80);
      lStack_50 = *(long *)(unaff_x20 + 8);
      func_0x00010352bd28();
      (*pcVar2)(&lStack_50,5,&UNK_110661328,uVar1,param_2,param_3);
    }
    if (unaff_x20[0x11] == '\x01') {
      (**(code **)(param_3 + 0x68))(1,6,param_2,param_3);
    }
    func_0x000100076224(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                        param_2,param_3);
  }
  return;
}



/* Entry: 103529f38; end: 103529fbb;  */

void FUN_103529f38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  lStack_58 = *(long *)(param_1 + 0x30);
  if (lStack_58 != 0) {
    uStack_60 = *(undefined8 *)(param_1 + 0x28);
    uStack_48 = *(undefined8 *)(param_1 + 0x40);
    uStack_50 = *(undefined8 *)(param_1 + 0x38);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar1)(&uStack_60,1,&UNK_110790c80,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 103529fbc; end: 10352a043;  */

void FUN_103529fbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_50 = *(ulong *)(param_1 + 0x58);
  if (uStack_50 >> 0x3c < 0xf) {
    uStack_58 = *(undefined8 *)(param_1 + 0x50);
    uStack_60 = *(undefined8 *)(param_1 + 0x48);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001015d5420();
    (*pcVar1)(&uStack_60,2,&UNK_110790b00,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 10352a044; end: 10352a0a3;  */

void FUN_10352a044(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0x10) = 1;
  *(undefined8 *)(param_1 + 0x20) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xf000000000000000;
  return;
}



/* Entry: 10352a0a4; end: 10352a0d3;  */

undefined1  [16] FUN_10352a0a4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x18);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return auVar1;
}



/* Entry: 10352a0d4; end: 10352a107;  */

void FUN_10352a0d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Entry: 10352a108; end: 10352a11b;  */

undefined1  [16] FUN_10352a108(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x18;
  auVar1._0_8_ = 0x10352a118;
  return auVar1;
}



/* Entry: 10352a11c; end: 10352a12f;  */

void FUN_10352a11c(void)

{
  FUN_103529c98();
  return;
}



/* Entry: 10352a130; end: 10352a16f;  */

void FUN_10352a130(void)

{
  FUN_103529df8();
  return;
}



/* Entry: 10352a170; end: 10352a173;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_10352a170(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10352a174; end: 10352a1ab;  */

uint FUN_10352a174(long param_1,long param_2)

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
  FUN_10352d904();
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



/* Entry: 10352a1ac; end: 10352a203;  */

uint FUN_10352a1ac(undefined8 *param_1)

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
  uStack_48 = param_1[5];
  uStack_50 = param_1[4];
  uStack_38 = param_1[7];
  uStack_40 = param_1[6];
  uStack_28 = param_1[9];
  uStack_30 = param_1[8];
  uStack_18 = param_1[0xb];
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
  uStack_78 = unaff_x20[0xb];
  uStack_80 = unaff_x20[10];
  uStack_c8 = unaff_x20[1];
  uStack_d0 = *unaff_x20;
  uStack_b8 = unaff_x20[3];
  uStack_c0 = unaff_x20[2];
  FUN_10352bd68(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10352a204; end: 10352a2a3;  */

/* WARNING: Possible PIC construction at 0x00010352a250: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010352a260: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010352a254) */
/* WARNING: Removing unreachable block (ram,0x00010352a264) */

void FUN_10352a204(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f76128 != -1) {
    func_0x000107c61568(0x112f76128,FUN_103529c50);
  }
  uVar5 = uRam0000000113807cd8;
  uVar4 = uRam0000000113807cd0;
  uVar3 = uRam0000000113807cc8;
  uVar2 = uRam0000000113807cc0;
  uVar1 = uRam0000000113807cb8;
  *param_1 = uRam0000000113807cb0;
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



/* Entry: 10352a2a4; end: 10352a2df;  */

void FUN_10352a2a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f764a8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f764a8,&UNK_10dbd5738);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 10352a2e0; end: 10352a3fb;  */

void FUN_10352a2e0(undefined8 param_1,undefined8 param_2)

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
  undefined8 uStack_38;
  
  uStack_68 = unaff_x20[5];
  uStack_70 = unaff_x20[4];
  uStack_58 = unaff_x20[7];
  uStack_60 = unaff_x20[6];
  uStack_48 = unaff_x20[9];
  uStack_50 = unaff_x20[8];
  uStack_38 = unaff_x20[0xb];
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



/* Entry: 10352a3fc; end: 10352a453;  */

uint FUN_10352a3fc(undefined8 *param_1,undefined8 *param_2)

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
  uStack_a8 = param_1[5];
  uStack_b0 = param_1[4];
  uStack_98 = param_1[7];
  uStack_a0 = param_1[6];
  uStack_88 = param_1[9];
  uStack_90 = param_1[8];
  uStack_78 = param_1[0xb];
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
  uStack_18 = param_2[0xb];
  uStack_20 = param_2[10];
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  FUN_10352bd68(&uStack_d0,&uStack_70);
  return uVar1 & 1;
}



/* Entry: 10352a454; end: 10352a9e3;  */

byte * FUN_10352a454(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  code *pcVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  uint uVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  byte *unaff_x19;
  byte *pbVar16;
  byte *unaff_x20;
  byte *unaff_x21;
  byte *pbVar17;
  byte *unaff_x22;
  byte *pbVar18;
  byte *unaff_x23;
  byte *unaff_x24;
  byte *pbVar19;
  byte *pbVar20;
  undefined1 auStack_358 [200];
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
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
  byte *pbStack_f0;
  byte *pbStack_e8;
  byte *pbStack_e0;
  byte *pbStack_d8;
  byte *pbStack_d0;
  byte *pbStack_c8;
  undefined1 *puStack_c0;
  code *pcStack_b8;
  byte *pbStack_b0;
  byte *pbStack_a8;
  byte *pbStack_a0;
  byte *pbStack_98;
  byte *pbStack_90;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  pbVar20 = *(byte **)(param_1 + 0x10);
  pbVar4 = unaff_x21;
  if (pbVar20 == *(byte **)(param_2 + 0x10)) {
    if ((pbVar20 != (byte *)0x0) && (param_1 != param_2)) {
      pbStack_a8 = (byte *)0x0;
      unaff_x22 = param_2 + 0x48;
      param_1 = param_1 + 0x28;
      do {
        uVar11 = *(ulong *)(param_1 + -8);
        pbVar17 = *(byte **)param_1;
        uVar15 = *(uint *)(param_1 + 8);
        pbVar5 = *(byte **)(param_1 + 0x10);
        pbVar1 = *(byte **)(param_1 + 0x18);
        unaff_x19 = *(byte **)(param_1 + 0x20);
        pbStack_90 = *(byte **)(unaff_x22 + -0x20);
        uVar2 = *(uint *)(unaff_x22 + -0x18);
        unaff_x23 = (byte *)(ulong)uVar2;
        unaff_x20 = *(byte **)(unaff_x22 + -0x10);
        pbVar4 = *(byte **)(unaff_x22 + -8);
        unaff_x24 = *(byte **)unaff_x22;
        if ((uVar11 != *(ulong *)(unaff_x22 + -0x28)) ||
           (pbVar19 = unaff_x24, pbVar16 = unaff_x19, pbVar18 = unaff_x22, unaff_x21 = pbVar4,
           pbVar17 != pbStack_90)) {
          param_2 = pbVar17;
          pbStack_a0 = param_1;
          pbStack_98 = pbVar4;
          func_0x000107c605b8();
          pbVar6 = (byte *)0x0;
          pbVar16 = pbVar1;
          pbVar4 = pbVar20;
          pbVar18 = unaff_x24;
          pbVar19 = pbVar17;
          param_1 = pbStack_a0;
          unaff_x21 = pbStack_98;
          if ((uVar11 & 1) == 0) goto LAB_10352a988;
        }
        pbVar6 = (byte *)0x0;
        if ((uVar15 != uVar2) ||
           (pbVar6 = (byte *)0x0, pbVar16 = unaff_x19, pbVar4 = unaff_x21, pbVar18 = unaff_x22,
           pbVar19 = unaff_x24, pbVar5 != unaff_x20)) goto LAB_10352a988;
        uVar15 = (uint)((ulong)unaff_x19 >> 0x20);
        uVar8 = uVar15 >> 0x1e;
        uVar2 = (uint)((ulong)unaff_x24 >> 0x20);
        uVar12 = uVar2 >> 0x1e;
        iVar14 = (int)pbVar1;
        if ((ulong)unaff_x19 >> 0x3e == 3) {
          uVar11 = 0;
          if ((((pbVar1 != (byte *)0x0) || (unaff_x19 != (byte *)0xc000000000000000)) ||
              ((ulong)unaff_x24 >> 0x3e < 3)) ||
             ((uVar11 = 0, unaff_x21 != (byte *)0x0 || (unaff_x24 != (byte *)0xc000000000000000))))
          goto joined_r0x00010352a7ac;
        }
        else {
          if (uVar15 >> 0x1e < 2) {
            if (uVar8 == 0) {
              uVar11 = (ulong)unaff_x19 >> 0x30 & 0xff;
            }
            else {
              iVar10 = (int)((ulong)pbVar1 >> 0x20);
              if (SBORROW4(iVar10,iVar14)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9d0);
                (*pcVar3)();
              }
              uVar11 = (ulong)(iVar10 - iVar14);
            }
joined_r0x00010352a7ac:
            if (uVar2 >> 0x1e < 2) goto LAB_10352a5fc;
LAB_10352a5c8:
            if (uVar12 != 2) {
              if (uVar11 == 0) goto LAB_10352a4b4;
              goto LAB_10352a97c;
            }
            uVar13 = *(long *)(unaff_x21 + 0x18) - *(long *)(unaff_x21 + 0x10);
            if (SBORROW8(*(long *)(unaff_x21 + 0x18),*(long *)(unaff_x21 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9c4);
              (*pcVar3)();
            }
          }
          else {
            if (uVar8 == 2) {
              uVar11 = *(long *)(pbVar1 + 0x18) - *(long *)(pbVar1 + 0x10);
              if (SBORROW8(*(long *)(pbVar1 + 0x18),*(long *)(pbVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9cc);
                (*pcVar3)();
              }
              goto joined_r0x00010352a7ac;
            }
            uVar11 = 0;
            if (1 < uVar12) goto LAB_10352a5c8;
LAB_10352a5fc:
            if (uVar12 == 0) {
              uVar13 = (ulong)unaff_x24 >> 0x30 & 0xff;
            }
            else {
              iVar10 = (int)((ulong)unaff_x21 >> 0x20);
              if (SBORROW4(iVar10,(int)unaff_x21)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9c8);
                (*pcVar3)();
              }
              uVar13 = (ulong)(iVar10 - (int)unaff_x21);
            }
          }
          if (uVar11 != uVar13) goto LAB_10352a97c;
          if (0 < (long)uVar11) {
            param_2 = unaff_x19;
            unaff_x23 = pbVar1;
            if (uVar8 < 2) {
              if (uVar8 != 0) {
                lVar9 = (long)iVar14;
                pbVar4 = (byte *)(((long)pbVar1 >> 0x20) - lVar9);
                if ((long)pbVar1 >> 0x20 < lVar9) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9d4);
                  pbStack_b0 = pbVar17;
                  (*pcVar3)();
                }
                pbStack_b0 = pbVar17;
                func_0x000107c61434(pbVar17);
                func_0x00010006c00c(pbVar1,unaff_x19);
                func_0x000107c61434(pbStack_90);
                pbStack_98 = unaff_x21;
                func_0x00010006c00c(unaff_x21,unaff_x24);
                func_0x000107c5ec30();
                if (unaff_x21 == (byte *)0x0) {
                  func_0x000107c5ec38();
                  pbVar5 = (byte *)0x0;
                  pbVar4 = (byte *)0x0;
                }
                else {
                  pbVar17 = unaff_x21;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar9,(long)pbVar17)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9e0);
                    (*pcVar3)();
                  }
                  pbVar19 = unaff_x21 + (lVar9 - (long)pbVar17);
                  func_0x000107c5ec38();
                  if ((long)pbVar4 <= (long)pbVar17) {
                    pbVar17 = pbVar4;
                  }
                  pbVar5 = (byte *)0x0;
                  if (pbVar19 != (byte *)0x0) {
                    pbVar5 = pbVar19;
                  }
                  pbVar4 = (byte *)0x0;
                  if (pbVar19 != (byte *)0x0) {
                    pbVar4 = pbVar17 + (long)pbVar19;
                  }
                }
LAB_10352a938:
                unaff_x20 = pbStack_98;
                unaff_x21 = pbStack_a8;
                func_0x000100e25bdc(abStack_80,pbVar5,pbVar4,pbStack_98,unaff_x24);
                pbStack_a8 = unaff_x21;
                func_0x000107c6142c(pbStack_90);
                func_0x00010006c090(unaff_x20,unaff_x24);
                func_0x000107c6142c(pbStack_b0);
                func_0x00010006c090(pbVar1);
                pbVar4 = unaff_x21;
                if ((abStack_80[0] & 1) != 0) goto LAB_10352a4b4;
                goto LAB_10352a97c;
              }
              abStack_80[0] = (byte)pbVar1;
              abStack_80[1] = (byte)((ulong)pbVar1 >> 8);
              abStack_80[2] = (byte)((ulong)pbVar1 >> 0x10);
              abStack_80[3] = (byte)((ulong)pbVar1 >> 0x18);
              abStack_80[4] = (byte)((ulong)pbVar1 >> 0x20);
              abStack_80[5] = (byte)((ulong)pbVar1 >> 0x28);
              abStack_80[6] = (byte)((ulong)pbVar1 >> 0x30);
              abStack_80[7] = (byte)((ulong)pbVar1 >> 0x38);
              abStack_80[8] = (byte)unaff_x19;
              abStack_80[9] = (byte)((ulong)unaff_x19 >> 8);
              abStack_80[10] = (byte)((ulong)unaff_x19 >> 0x10);
              abStack_80[0xb] = (byte)((ulong)unaff_x19 >> 0x18);
              abStack_80[0xc] = (byte)((ulong)unaff_x19 >> 0x20);
              abStack_80[0xd] = (byte)((ulong)unaff_x19 >> 0x28);
              pbStack_b0 = pbVar17;
              func_0x000107c61434(pbVar17);
              func_0x00010006c00c(pbVar1,unaff_x19);
              pbVar5 = pbStack_90;
              func_0x000107c61434(pbStack_90);
              func_0x00010006c00c(unaff_x21,unaff_x24);
              pbVar4 = pbStack_a8;
              func_0x000100e25bdc(&bStack_81,abStack_80,
                                  abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff),unaff_x21,unaff_x24
                                 );
              pbStack_a8 = pbVar4;
              func_0x000107c6142c(pbVar5);
              func_0x00010006c090(unaff_x21,unaff_x24);
              pbVar17 = pbStack_b0;
              unaff_x20 = abStack_80 + ((ulong)unaff_x19 >> 0x30 & 0xff);
            }
            else {
              if (uVar8 == 2) {
                pbStack_a0 = *(byte **)(pbVar1 + 0x10);
                lVar9 = *(long *)(pbVar1 + 0x18);
                pbStack_b0 = pbVar17;
                func_0x000107c61434(pbVar17);
                func_0x00010006c00c(pbVar1,unaff_x19);
                func_0x000107c61434(pbStack_90);
                pbStack_98 = unaff_x21;
                func_0x00010006c00c(unaff_x21,unaff_x24);
                func_0x000107c5ec30();
                pbVar4 = unaff_x21;
                if (unaff_x21 == (byte *)0x0) {
                  pbVar5 = (byte *)0x0;
                }
                else {
                  func_0x000107c5ec3c();
                  if (SBORROW8((long)pbStack_a0,(long)pbVar4)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9dc);
                    (*pcVar3)();
                  }
                  pbVar5 = unaff_x21 + ((long)pbStack_a0 - (long)pbVar4);
                }
                if (SBORROW8(lVar9,(long)pbStack_a0)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10352a9d8);
                  (*pcVar3)();
                }
                pbVar17 = (byte *)(lVar9 - (long)pbStack_a0);
                func_0x000107c5ec38();
                if (pbVar5 == (byte *)0x0) {
                  pbVar4 = (byte *)0x0;
                }
                else {
                  if ((long)pbVar17 <= (long)pbVar4) {
                    pbVar4 = pbVar17;
                  }
                  pbVar4 = pbVar4 + (long)pbVar5;
                }
                goto LAB_10352a938;
              }
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
              func_0x000107c61434(pbVar17);
              func_0x00010006c00c(pbVar1,unaff_x19);
              pbVar5 = pbStack_90;
              func_0x000107c61434(pbStack_90);
              func_0x00010006c00c(unaff_x21,unaff_x24);
              pbVar4 = pbStack_a8;
              func_0x000100e25bdc(&bStack_81,abStack_80,abStack_80,unaff_x21,unaff_x24);
              pbStack_a8 = pbVar4;
              func_0x000107c6142c(pbVar5);
              func_0x00010006c090(unaff_x21,unaff_x24);
              unaff_x20 = pbVar17;
            }
            func_0x000107c6142c(pbVar17);
            func_0x00010006c090(pbVar1);
            unaff_x21 = pbVar4;
            if ((bStack_81 & 1) == 0) goto LAB_10352a97c;
          }
        }
LAB_10352a4b4:
        unaff_x22 = unaff_x22 + 0x30;
        param_1 = param_1 + 0x30;
        pbVar20 = pbVar20 + -1;
      } while (pbVar20 != (byte *)0x0);
    }
    pbVar6 = (byte *)0x1;
    pbVar16 = unaff_x19;
    pbVar4 = unaff_x21;
    pbVar18 = unaff_x22;
    pbVar19 = unaff_x24;
  }
  else {
LAB_10352a97c:
    pbVar6 = (byte *)0x0;
    pbVar16 = unaff_x19;
    pbVar18 = unaff_x22;
    pbVar19 = unaff_x24;
  }
LAB_10352a988:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return pbVar6;
  }
  func_0x000107c60e78();
  pcStack_b8 = FUN_10352a9e4;
  lVar9 = *(long *)(pbVar6 + 0x10);
  if (lVar9 == *(long *)(param_2 + 0x10)) {
    if ((lVar9 == 0) || (pbVar6 == param_2)) {
      uVar15 = 1;
    }
    else {
      pbVar6 = pbVar6 + 0x20;
      param_2 = param_2 + 0x20;
      pbStack_f0 = pbVar19;
      pbStack_e8 = unaff_x23;
      pbStack_e0 = pbVar18;
      pbStack_d8 = pbVar4;
      pbStack_d0 = unaff_x20;
      pbStack_c8 = pbVar16;
      puStack_c0 = &stack0xfffffffffffffff0;
      do {
        lVar9 = lVar9 + -1;
        uStack_1e8 = *(undefined8 *)(pbVar6 + 0xa8);
        uStack_1f0 = *(undefined8 *)(pbVar6 + 0xa0);
        uStack_1d8 = *(undefined8 *)(pbVar6 + 0xb8);
        uStack_1e0 = *(undefined8 *)(pbVar6 + 0xb0);
        uStack_1d0 = *(undefined8 *)(pbVar6 + 0xc0);
        uStack_228 = *(undefined8 *)(pbVar6 + 0x68);
        uStack_230 = *(undefined8 *)(pbVar6 + 0x60);
        uStack_218 = *(undefined8 *)(pbVar6 + 0x78);
        uStack_220 = *(undefined8 *)(pbVar6 + 0x70);
        uStack_208 = *(undefined8 *)(pbVar6 + 0x88);
        uStack_210 = *(undefined8 *)(pbVar6 + 0x80);
        uStack_1f8 = *(undefined8 *)(pbVar6 + 0x98);
        uStack_200 = *(undefined8 *)(pbVar6 + 0x90);
        uStack_268 = *(undefined8 *)(pbVar6 + 0x28);
        uStack_270 = *(undefined8 *)(pbVar6 + 0x20);
        uStack_258 = *(undefined8 *)(pbVar6 + 0x38);
        uStack_260 = *(undefined8 *)(pbVar6 + 0x30);
        uStack_248 = *(undefined8 *)(pbVar6 + 0x48);
        uStack_250 = *(undefined8 *)(pbVar6 + 0x40);
        uStack_238 = *(undefined8 *)(pbVar6 + 0x58);
        uStack_240 = *(undefined8 *)(pbVar6 + 0x50);
        uStack_288 = *(undefined8 *)(pbVar6 + 8);
        uStack_290 = *(undefined8 *)pbVar6;
        uStack_278 = *(undefined8 *)(pbVar6 + 0x18);
        uStack_280 = *(undefined8 *)(pbVar6 + 0x10);
        uStack_118 = *(undefined8 *)(param_2 + 0xa8);
        uStack_120 = *(undefined8 *)(param_2 + 0xa0);
        uStack_108 = *(undefined8 *)(param_2 + 0xb8);
        uStack_110 = *(undefined8 *)(param_2 + 0xb0);
        uStack_100 = *(undefined8 *)(param_2 + 0xc0);
        uStack_158 = *(undefined8 *)(param_2 + 0x68);
        uStack_160 = *(undefined8 *)(param_2 + 0x60);
        uStack_148 = *(undefined8 *)(param_2 + 0x78);
        uStack_150 = *(undefined8 *)(param_2 + 0x70);
        uStack_138 = *(undefined8 *)(param_2 + 0x88);
        uStack_140 = *(undefined8 *)(param_2 + 0x80);
        uStack_128 = *(undefined8 *)(param_2 + 0x98);
        uStack_130 = *(undefined8 *)(param_2 + 0x90);
        uStack_198 = *(undefined8 *)(param_2 + 0x28);
        uStack_1a0 = *(undefined8 *)(param_2 + 0x20);
        uStack_188 = *(undefined8 *)(param_2 + 0x38);
        uStack_190 = *(undefined8 *)(param_2 + 0x30);
        uStack_178 = *(undefined8 *)(param_2 + 0x48);
        uStack_180 = *(undefined8 *)(param_2 + 0x40);
        uStack_168 = *(undefined8 *)(param_2 + 0x58);
        uStack_170 = *(undefined8 *)(param_2 + 0x50);
        uStack_1b8 = *(undefined8 *)(param_2 + 8);
        uStack_1c0 = *(undefined8 *)param_2;
        uStack_1a8 = *(undefined8 *)(param_2 + 0x18);
        uStack_1b0 = *(undefined8 *)(param_2 + 0x10);
        func_0x00010352da64(&uStack_290,auStack_358);
        func_0x00010352da64(&uStack_1c0,auStack_358);
        puVar7 = &uStack_290;
        FUN_10352b3c0(puVar7,&uStack_1c0);
        uVar15 = (uint)puVar7;
        func_0x00010352da98(&uStack_1c0);
        func_0x00010352da98(&uStack_290);
        if (((ulong)puVar7 & 1) == 0) break;
        param_2 = param_2 + 200;
        pbVar6 = pbVar6 + 200;
      } while (lVar9 != 0);
    }
  }
  else {
    uVar15 = 0;
  }
  return (byte *)(ulong)(uVar15 & 1);
}



/* Entry: 10352a9e4; end: 10352ab13;  */

uint FUN_10352a9e4(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_2a8 [200];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_138 = puVar4[0x15];
        uStack_140 = puVar4[0x14];
        uStack_128 = puVar4[0x17];
        uStack_130 = puVar4[0x16];
        uStack_120 = puVar4[0x18];
        uStack_178 = puVar4[0xd];
        uStack_180 = puVar4[0xc];
        uStack_168 = puVar4[0xf];
        uStack_170 = puVar4[0xe];
        uStack_158 = puVar4[0x11];
        uStack_160 = puVar4[0x10];
        uStack_148 = puVar4[0x13];
        uStack_150 = puVar4[0x12];
        uStack_1b8 = puVar4[5];
        uStack_1c0 = puVar4[4];
        uStack_1a8 = puVar4[7];
        uStack_1b0 = puVar4[6];
        uStack_198 = puVar4[9];
        uStack_1a0 = puVar4[8];
        uStack_188 = puVar4[0xb];
        uStack_190 = puVar4[10];
        uStack_1d8 = puVar4[1];
        uStack_1e0 = *puVar4;
        uStack_1c8 = puVar4[3];
        uStack_1d0 = puVar4[2];
        uStack_68 = puVar5[0x15];
        uStack_70 = puVar5[0x14];
        uStack_58 = puVar5[0x17];
        uStack_60 = puVar5[0x16];
        uStack_50 = puVar5[0x18];
        uStack_a8 = puVar5[0xd];
        uStack_b0 = puVar5[0xc];
        uStack_98 = puVar5[0xf];
        uStack_a0 = puVar5[0xe];
        uStack_88 = puVar5[0x11];
        uStack_90 = puVar5[0x10];
        uStack_78 = puVar5[0x13];
        uStack_80 = puVar5[0x12];
        uStack_e8 = puVar5[5];
        uStack_f0 = puVar5[4];
        uStack_d8 = puVar5[7];
        uStack_e0 = puVar5[6];
        uStack_c8 = puVar5[9];
        uStack_d0 = puVar5[8];
        uStack_b8 = puVar5[0xb];
        uStack_c0 = puVar5[10];
        uStack_108 = puVar5[1];
        uStack_110 = *puVar5;
        uStack_f8 = puVar5[3];
        uStack_100 = puVar5[2];
        func_0x00010352da64(&uStack_1e0,auStack_2a8);
        func_0x00010352da64(&uStack_110,auStack_2a8);
        puVar1 = &uStack_1e0;
        FUN_10352b3c0(puVar1,&uStack_110);
        uVar3 = (uint)puVar1;
        func_0x00010352da98(&uStack_110);
        func_0x00010352da98(&uStack_1e0);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar5 = puVar5 + 0x19;
        puVar4 = puVar4 + 0x19;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10352ab14; end: 10352abf7;  */

uint FUN_10352ab14(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auStack_160 [96];
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
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == *(long *)(param_2 + 0x10)) {
    if ((lVar2 == 0) || (param_1 == param_2)) {
      uVar3 = 1;
    }
    else {
      puVar4 = (undefined8 *)(param_1 + 0x20);
      puVar5 = (undefined8 *)(param_2 + 0x20);
      do {
        lVar2 = lVar2 + -1;
        uStack_d8 = puVar4[5];
        uStack_e0 = puVar4[4];
        uStack_c8 = puVar4[7];
        uStack_d0 = puVar4[6];
        uStack_b8 = puVar4[9];
        uStack_c0 = puVar4[8];
        uStack_a8 = puVar4[0xb];
        uStack_b0 = puVar4[10];
        uStack_f8 = puVar4[1];
        uStack_100 = *puVar4;
        uStack_e8 = puVar4[3];
        uStack_f0 = puVar4[2];
        uStack_78 = puVar5[5];
        uStack_80 = puVar5[4];
        uStack_68 = puVar5[7];
        uStack_70 = puVar5[6];
        uStack_58 = puVar5[9];
        uStack_60 = puVar5[8];
        uStack_48 = puVar5[0xb];
        uStack_50 = puVar5[10];
        uStack_98 = puVar5[1];
        uStack_a0 = *puVar5;
        uStack_88 = puVar5[3];
        uStack_90 = puVar5[2];
        FUN_10352da04(&uStack_100,auStack_160);
        FUN_10352da04(&uStack_a0,auStack_160);
        puVar1 = &uStack_100;
        FUN_10352bd68(puVar1,&uStack_a0);
        uVar3 = (uint)puVar1;
        func_0x00010352da38(&uStack_a0);
        func_0x00010352da38(&uStack_100);
        if (((ulong)puVar1 & 1) == 0) break;
        puVar4 = puVar4 + 0xc;
        puVar5 = puVar5 + 0xc;
      } while (lVar2 != 0);
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Entry: 10352abf8; end: 10352ac17;  */

void FUN_10352abf8(void)

{
  func_0x000107c61168(&PTR_PTR_112f76228);
  return;
}



/* Entry: 10352ac18; end: 10352b1f7;  */

void FUN_10352ac18(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  undefined8 *puVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined1 auStack_398 [24];
  undefined1 auStack_380 [24];
  undefined1 auStack_368 [24];
  undefined1 auStack_350 [24];
  undefined1 auStack_338 [24];
  undefined1 auStack_320 [24];
  undefined1 auStack_308 [24];
  undefined1 auStack_2f0 [24];
  undefined1 auStack_2d8 [24];
  undefined1 auStack_2c0 [24];
  undefined1 auStack_2a8 [24];
  undefined1 auStack_290 [24];
  undefined1 auStack_278 [24];
  undefined1 auStack_260 [24];
  undefined1 auStack_248 [24];
  undefined1 auStack_230 [24];
  undefined1 auStack_218 [24];
  undefined1 auStack_200 [24];
  undefined1 auStack_1e8 [24];
  undefined1 auStack_1d0 [24];
  undefined1 auStack_1b8 [24];
  undefined1 auStack_1a0 [24];
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  puVar21 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar21 = 0;
  puVar18 = (undefined1 *)(unaff_x20 + 0x20);
  *puVar18 = 0;
  puVar20 = (undefined8 *)(unaff_x20 + 0x28);
  *puVar20 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xe000000000000000;
  puVar6 = (undefined8 *)(unaff_x20 + 0x40);
  *puVar6 = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0xf000000000000000;
  puVar8 = (undefined8 *)(unaff_x20 + 0x58);
  *puVar8 = 0;
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar13 = (undefined8 *)(unaff_x20 + 0x70);
  *puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar14 = (undefined8 *)(unaff_x20 + 0x78);
  *puVar14 = puVar5;
  puVar15 = (undefined8 *)(unaff_x20 + 0x80);
  *puVar15 = puVar5;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0xf000000000000000;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  puVar7 = (undefined8 *)(unaff_x20 + 0x88);
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *puVar7 = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined1 *)(unaff_x20 + 0xb8) = 1;
  puVar9 = (undefined8 *)(unaff_x20 + 0xc0);
  *puVar9 = 0;
  *(undefined1 *)(unaff_x20 + 200) = 1;
  puVar10 = (undefined8 *)(unaff_x20 + 0xf8);
  *puVar10 = 0;
  *(undefined8 *)(unaff_x20 + 0xe8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  puVar11 = (undefined4 *)(unaff_x20 + 0xf0);
  *puVar11 = 0;
  puVar12 = (undefined8 *)(unaff_x20 + 0xd0);
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *puVar12 = 0;
  *(undefined2 *)(unaff_x20 + 0x100) = 1;
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  func_0x000107c61428(puVar21,auStack_98,1,0);
  *puVar21 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  func_0x000107c61428(param_1 + 0x20,auStack_b0,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x20);
  func_0x000107c61428(puVar18,auStack_c8,1,0);
  *puVar18 = uVar4;
  func_0x000107c61428(param_1 + 0x28,auStack_e0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar22 = *(undefined8 *)(param_1 + 0x38);
  func_0x000107c61428(puVar20,auStack_f8,1,0);
  uVar23 = *puVar20;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar19 = *(undefined8 *)(unaff_x20 + 0x38);
  *puVar20 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x38) = uVar22;
  func_0x000107c61434(uVar1);
  func_0x000100d5520c(uVar16,uVar2,uVar22);
  func_0x000100d55228(uVar23,uVar17,uVar19);
  func_0x000107c61428(param_1 + 0x40,auStack_110,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x40);
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  uVar19 = *(undefined8 *)(param_1 + 0x50);
  func_0x000107c61428(puVar6,auStack_128,1,0);
  uVar22 = *puVar6;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *puVar6 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar19;
  func_0x000100d5520c(uVar16,uVar1,uVar19);
  func_0x000100d55228(uVar22,uVar17,uVar2);
  func_0x000107c61428(param_1 + 0x58,auStack_140,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x58);
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  uVar19 = *(undefined8 *)(param_1 + 0x68);
  func_0x000107c61428(puVar8,auStack_158,1,0);
  uVar22 = *puVar8;
  uVar17 = *(undefined8 *)(unaff_x20 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x68);
  *puVar8 = uVar16;
  *(undefined8 *)(unaff_x20 + 0x60) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x68) = uVar19;
  func_0x000100d5520c(uVar16,uVar1,uVar19);
  func_0x000100d55228(uVar22,uVar17,uVar2);
  func_0x000107c61428(param_1 + 0x70,auStack_170,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x70);
  func_0x000107c61428(puVar13,auStack_188,1,0);
  uVar17 = *puVar13;
  *puVar13 = uVar16;
  func_0x000107c61434(uVar16);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x78,auStack_1a0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x78);
  func_0x000107c61428(puVar14,auStack_1b8,1,0);
  uVar17 = *puVar14;
  *puVar14 = uVar16;
  func_0x000107c61434(uVar16);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x80,auStack_1d0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x80);
  func_0x000107c61428(puVar15,auStack_1e8,1,0);
  uVar17 = *puVar15;
  *puVar15 = uVar16;
  func_0x000107c61434(uVar16);
  func_0x000107c6142c(uVar17);
  func_0x000107c61428(param_1 + 0x88,auStack_200,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x88);
  func_0x000107c61428(puVar7,auStack_218,1,0);
  *(undefined4 *)puVar7 = uVar3;
  func_0x000107c61428(param_1 + 0x8c,auStack_230,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0x8c);
  func_0x000107c61428(unaff_x20 + 0x8c,auStack_248,1,0);
  *(undefined4 *)(unaff_x20 + 0x8c) = uVar3;
  func_0x000107c61428(param_1 + 0x90,auStack_260,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0x90);
  uVar19 = *(undefined8 *)(param_1 + 0x98);
  uVar17 = *(undefined8 *)(param_1 + 0xa0);
  uVar22 = *(undefined8 *)(param_1 + 0xa8);
  func_0x000107c61428(unaff_x20 + 0x90,auStack_278,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0x90) = uVar16;
  *(undefined8 *)(unaff_x20 + 0x98) = uVar19;
  *(undefined8 *)(unaff_x20 + 0xa0) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar22;
  func_0x000101597350(uVar16,uVar19,uVar17,uVar22);
  func_0x000101597ae4(uVar1,uVar23,uVar2,uVar24);
  func_0x000107c61428(param_1 + 0xb0,auStack_290,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xb0);
  uVar4 = *(undefined1 *)(param_1 + 0xb8);
  func_0x000107c61428(unaff_x20 + 0xb0,auStack_2a8,1,0);
  *(undefined8 *)(unaff_x20 + 0xb0) = uVar16;
  *(undefined1 *)(unaff_x20 + 0xb8) = uVar4;
  func_0x000107c61428(param_1 + 0xc0,auStack_2c0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xc0);
  uVar4 = *(undefined1 *)(param_1 + 200);
  func_0x000107c61428(puVar9,auStack_2d8,1,0);
  *puVar9 = uVar16;
  *(undefined1 *)(unaff_x20 + 200) = uVar4;
  func_0x000107c61428(param_1 + 0xd0,auStack_2f0,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xd0);
  uVar2 = *(undefined8 *)(param_1 + 0xd8);
  uVar17 = *(undefined8 *)(param_1 + 0xe0);
  uVar19 = *(undefined8 *)(param_1 + 0xe8);
  func_0x000107c61428(puVar12,auStack_308,1,0);
  uVar23 = *puVar12;
  uVar1 = *(undefined8 *)(unaff_x20 + 0xd8);
  uVar22 = *(undefined8 *)(unaff_x20 + 0xe0);
  uVar24 = *(undefined8 *)(unaff_x20 + 0xe8);
  *puVar12 = uVar16;
  *(undefined8 *)(unaff_x20 + 0xd8) = uVar2;
  *(undefined8 *)(unaff_x20 + 0xe0) = uVar17;
  *(undefined8 *)(unaff_x20 + 0xe8) = uVar19;
  func_0x000101597350(uVar16,uVar2,uVar17,uVar19);
  func_0x000101597ae4(uVar23,uVar1,uVar22,uVar24);
  func_0x000107c61428(param_1 + 0xf0,auStack_320,0,0);
  uVar3 = *(undefined4 *)(param_1 + 0xf0);
  func_0x000107c61428(puVar11,auStack_338,1,0);
  *puVar11 = uVar3;
  func_0x000107c61428(param_1 + 0xf8,auStack_350,0,0);
  uVar16 = *(undefined8 *)(param_1 + 0xf8);
  uVar4 = *(undefined1 *)(param_1 + 0x100);
  func_0x000107c61428(puVar10,auStack_368,1,0);
  *puVar10 = uVar16;
  *(undefined1 *)(unaff_x20 + 0x100) = uVar4;
  func_0x000107c61428(param_1 + 0x101,auStack_380,0,0);
  uVar4 = *(undefined1 *)(param_1 + 0x101);
  func_0x000107c61428(unaff_x20 + 0x101,auStack_398,1,0);
  *(undefined1 *)(unaff_x20 + 0x101) = uVar4;
  return;
}



/* Entry: 10352b1f8; end: 10352b23f;  */

undefined8 FUN_10352b1f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10352b240; end: 10352b3bf;  */

void FUN_10352b240(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f760e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd51d8;
  func_0x000107c61520(&UNK_10dbd51d8,&UNK_1106613a0);
  puRam0000000112f760e0 = puVar1;
  return;
}



/* Entry: 10352b3c0; end: 10352bce7;  */

long * FUN_10352b3c0(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  ulong auStack_1a8 [3];
  ulong uStack_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_160;
  long lStack_158;
  ulong uStack_150;
  long lStack_148;
  long lStack_140;
  long lStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_110;
  ulong uStack_108;
  ulong uStack_100;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  ulong uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  long lStack_b8;
  ulong uStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((char)param_2[1] == '\x01') {
    if (lVar6 < 4) {
      if (lVar6 < 2) {
        if (lVar6 == 0) {
          if (lVar5 != 0) {
            return (long *)0x0;
          }
        }
        else if (lVar5 != 1) {
          return (long *)0x0;
        }
      }
      else if (lVar6 == 2) {
        if (lVar5 != 2) {
          return (long *)0x0;
        }
      }
      else if (lVar5 != 3) {
        return (long *)0x0;
      }
    }
    else if (lVar6 < 6) {
      if (lVar6 == 4) {
        if (lVar5 != 4) {
          return (long *)0x0;
        }
      }
      else if (lVar5 != 5) {
        return (long *)0x0;
      }
    }
    else if (lVar6 == 6) {
      if (lVar5 != 6) {
        return (long *)0x0;
      }
    }
    else if (lVar5 != 7) {
      return (long *)0x0;
    }
  }
  else if (lVar5 != lVar6) {
    return (long *)0x0;
  }
  if ((char)param_2[3] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x00010352b420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((ulong)(byte)(&UNK_10dbd4f29)[param_2[2]] * 4 + 0x10352b424))();
    return param_1;
  }
  if (param_1[2] != param_2[2]) {
    return (long *)0x0;
  }
  lVar6 = param_1[0xc];
  uVar11 = param_1[0xb];
  lVar5 = param_1[0xe];
  uVar7 = param_1[0xd];
  lVar14 = param_2[0xc];
  uVar12 = param_2[0xb];
  lVar17 = param_2[0xe];
  lVar16 = param_2[0xd];
  uStack_b0 = uVar12;
  lStack_a8 = lVar14;
  lStack_a0 = lVar16;
  lStack_98 = lVar17;
  uStack_90 = uVar11;
  lStack_88 = lVar6;
  uStack_80 = uVar7;
  lStack_78 = lVar5;
  if (lVar6 == 0) {
    if (lVar14 == 0) {
      FUN_10352b1f8(&uStack_90,&uStack_170,0x112db6f40,&UNK_10d9681d0);
      FUN_10352b1f8(&uStack_b0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
LAB_10352b61c:
      func_0x000101597ae4(uVar11,lVar6,uVar7,lVar5);
      lVar6 = param_1[0x10];
      uVar11 = param_1[0xf];
      lVar5 = param_1[0x12];
      uVar7 = param_1[0x11];
      lVar14 = param_2[0x10];
      uVar12 = param_2[0xf];
      lVar17 = param_2[0x12];
      lVar16 = param_2[0x11];
      uStack_f0 = uVar12;
      lStack_e8 = lVar14;
      lStack_e0 = lVar16;
      lStack_d8 = lVar17;
      uStack_d0 = uVar11;
      lStack_c8 = lVar6;
      uStack_c0 = uVar7;
      lStack_b8 = lVar5;
      if (lVar6 == 0) {
        if (lVar14 != 0) goto LAB_10352b704;
        FUN_10352b1f8(&uStack_d0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
        FUN_10352b1f8(&uStack_f0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
      }
      else {
        if (lVar14 == 0) {
LAB_10352b704:
          uStack_170 = uVar11;
          uStack_168 = lVar6;
          uStack_160 = uVar7;
          lStack_158 = lVar5;
          uStack_150 = uVar12;
          lStack_148 = lVar14;
          lStack_140 = lVar16;
          lStack_138 = lVar17;
          FUN_10352b1f8(&uStack_d0,&uStack_190,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_190;
          goto LAB_10352b740;
        }
        if (((uVar11 != uVar12) || (lVar6 != lVar14)) &&
           (uVar10 = uVar11, func_0x000107c605b8(uVar11,lVar6,uVar12,lVar14,0), (uVar10 & 1) == 0))
        {
          FUN_10352b1f8(&uStack_d0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
          puVar3 = &uStack_f0;
          goto LAB_10352ba54;
        }
        FUN_10352b1f8(&uStack_d0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
        FUN_10352b1f8(&uStack_f0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
        uVar10 = uVar7;
        func_0x000100e25fcc(uVar7,lVar5,lVar16,lVar17);
        func_0x000101597ae4(uVar12,lVar14,lVar16,lVar17);
        if ((uVar10 & 1) == 0) goto LAB_10352ba78;
      }
      func_0x000101597ae4(uVar11,lVar6,uVar7,lVar5);
      uVar11 = param_1[0x14];
      uVar12 = param_1[0x13];
      uVar7 = param_1[0x15];
      uVar15 = param_2[0x14];
      uVar13 = param_2[0x13];
      uVar10 = param_2[0x15];
      uStack_190 = uVar13;
      uStack_188 = uVar15;
      uStack_180 = uVar10;
      uStack_170 = uVar12;
      uStack_168 = uVar11;
      uStack_160 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_10352b9d4;
        if ((int)uVar12 == (int)uVar13) {
          FUN_10352b1f8(&uStack_170,&uStack_110,0x112db80f8,&UNK_10d9671e0);
          FUN_10352b1f8(&uStack_190,&uStack_110,0x112db80f8,&UNK_10d9671e0);
          uVar2 = uVar11;
          func_0x000100e25fcc(uVar11,uVar7,uVar15,uVar10);
          func_0x000100d55228(uVar13,uVar15,uVar10);
          if ((uVar2 & 1) != 0) goto LAB_10352b8d8;
        }
        else {
          FUN_10352b1f8(&uStack_170,&uStack_110,0x112db80f8,&UNK_10d9671e0);
          puVar3 = &uStack_190;
          puVar4 = &uStack_110;
LAB_10352bb30:
          FUN_10352b1f8(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
          func_0x000100d55228(uVar13,uVar15,uVar10);
        }
      }
      else {
        if (0xe < uVar10 >> 0x3c) {
          FUN_10352b1f8(&uStack_170,&uStack_110,0x112db80f8,&UNK_10d9671e0);
          FUN_10352b1f8(&uStack_190,&uStack_110,0x112db80f8,&UNK_10d9671e0);
LAB_10352b8d8:
          func_0x000100d55228(uVar12,uVar11,uVar7);
          if ((((*(byte *)((long)param_1 + 0x19) ^ *(byte *)((long)param_2 + 0x19)) & 1) != 0) ||
             (*(int *)((long)param_1 + 0x1c) != *(int *)((long)param_2 + 0x1c))) goto LAB_10352ba8c;
          uVar11 = param_1[0x17];
          uVar12 = param_1[0x16];
          uVar7 = param_1[0x18];
          uVar15 = param_2[0x17];
          uVar13 = param_2[0x16];
          uVar10 = param_2[0x18];
          uStack_130 = uVar13;
          uStack_128 = uVar15;
          uStack_120 = uVar10;
          uStack_110 = uVar12;
          uStack_108 = uVar11;
          uStack_100 = uVar7;
          if (uVar7 >> 0x3c < 0xf) {
            if (0xe < uVar10 >> 0x3c) goto LAB_10352bb6c;
            if ((int)uVar12 != (int)uVar13) {
              FUN_10352b1f8(&uStack_110,auStack_1a8,0x112db80f8,&UNK_10d9671e0);
              puVar3 = &uStack_130;
              puVar4 = auStack_1a8;
              goto LAB_10352bb30;
            }
            FUN_10352b1f8(&uStack_110,auStack_1a8,0x112db80f8,&UNK_10d9671e0);
            FUN_10352b1f8(&uStack_130,auStack_1a8,0x112db80f8,&UNK_10d9671e0);
            uVar2 = uVar11;
            func_0x000100e25fcc(uVar11,uVar7,uVar15,uVar10);
            func_0x000100d55228(uVar13,uVar15,uVar10);
            if ((uVar2 & 1) == 0) goto LAB_10352bb58;
          }
          else {
            if (uVar10 >> 0x3c < 0xf) {
LAB_10352bb6c:
              FUN_10352b1f8(&uStack_110,auStack_1a8,0x112db80f8,&UNK_10d9671e0);
              puVar3 = &uStack_130;
              puVar4 = auStack_1a8;
              uVar2 = uVar7;
              uVar8 = uVar11;
              uVar9 = uVar12;
              uVar7 = uVar10;
              uVar11 = uVar15;
              uVar12 = uVar13;
              goto LAB_10352ba00;
            }
            FUN_10352b1f8(&uStack_110,auStack_1a8,0x112db80f8,&UNK_10d9671e0);
            FUN_10352b1f8(&uStack_130,auStack_1a8,0x112db80f8,&UNK_10d9671e0);
          }
          func_0x000100d55228(uVar12,uVar11,uVar7);
          if ((int)param_1[4] == (int)param_2[4]) {
            lVar5 = param_1[5];
            lVar6 = param_2[5];
            if ((char)param_2[6] == '\x01') {
              if (lVar6 < 2) {
                if (lVar6 == 0) {
                  if (lVar5 == 0) {
LAB_10352bc24:
                    if (((*(byte *)((long)param_1 + 0x31) ^ *(byte *)((long)param_2 + 0x31)) & 1) ==
                        0) {
                      lVar5 = param_1[7];
                      lVar6 = param_2[7];
                      if ((char)param_2[8] == '\x01') {
                        if (lVar6 < 2) {
                          if (lVar6 == 0) {
                            if (lVar5 == 0) {
LAB_10352bca8:
                              lVar5 = param_1[9];
                              func_0x000100e25fcc(lVar5,param_1[10],param_2[9],param_2[10]);
                              uVar1 = (uint)lVar5;
                              goto LAB_10352ba90;
                            }
                          }
                          else if (lVar5 == 1) goto LAB_10352bca8;
                        }
                        else if (lVar6 == 2) {
                          if (lVar5 == 2) goto LAB_10352bca8;
                        }
                        else if (lVar6 == 3) {
                          if (lVar5 == 3) goto LAB_10352bca8;
                        }
                        else if (lVar5 == 4) goto LAB_10352bca8;
                      }
                      else if (lVar5 == lVar6) goto LAB_10352bca8;
                    }
                  }
                }
                else if (lVar5 == 1) goto LAB_10352bc24;
              }
              else if (lVar6 == 2) {
                if (lVar5 == 2) goto LAB_10352bc24;
              }
              else if (lVar5 == 3) goto LAB_10352bc24;
            }
            else if (lVar5 == lVar6) goto LAB_10352bc24;
          }
          goto LAB_10352ba8c;
        }
LAB_10352b9d4:
        FUN_10352b1f8(&uStack_170,&uStack_110,0x112db80f8,&UNK_10d9671e0);
        puVar3 = &uStack_190;
        puVar4 = &uStack_110;
        uVar2 = uVar7;
        uVar8 = uVar11;
        uVar9 = uVar12;
        uVar7 = uVar10;
        uVar11 = uVar15;
        uVar12 = uVar13;
LAB_10352ba00:
        FUN_10352b1f8(puVar3,puVar4,0x112db80f8,&UNK_10d9671e0);
        func_0x000100d55228(uVar9,uVar8,uVar2);
      }
LAB_10352bb58:
      func_0x000100d55228(uVar12,uVar11,uVar7);
    }
    else {
LAB_10352b570:
      uStack_170 = uVar11;
      uStack_168 = lVar6;
      uStack_160 = uVar7;
      lStack_158 = lVar5;
      uStack_150 = uVar12;
      lStack_148 = lVar14;
      lStack_140 = lVar16;
      lStack_138 = lVar17;
      FUN_10352b1f8(&uStack_90,&uStack_d0,0x112db6f40,&UNK_10d9681d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_10352b740:
      FUN_10352b1f8(puVar3,puVar4,0x112db6f40,&UNK_10d9681d0);
      func_0x000101628968(&uStack_170);
    }
  }
  else {
    if (lVar14 == 0) goto LAB_10352b570;
    if (((uVar11 == uVar12) && (lVar6 == lVar14)) ||
       (uVar10 = uVar11, func_0x000107c605b8(uVar11,lVar6,uVar12,lVar14,0), (uVar10 & 1) != 0)) {
      FUN_10352b1f8(&uStack_90,&uStack_170,0x112db6f40,&UNK_10d9681d0);
      FUN_10352b1f8(&uStack_b0,&uStack_170,0x112db6f40,&UNK_10d9681d0);
      uVar10 = uVar7;
      func_0x000100e25fcc(uVar7,lVar5,lVar16,lVar17);
      func_0x000101597ae4(uVar12,lVar14,lVar16,lVar17);
      if ((uVar10 & 1) != 0) goto LAB_10352b61c;
    }
    else {
      FUN_10352b1f8(&uStack_90,&uStack_170,0x112db6f40,&UNK_10d9681d0);
      puVar3 = &uStack_b0;
LAB_10352ba54:
      FUN_10352b1f8(puVar3,&uStack_170,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar12,lVar14,lVar16,lVar17);
    }
LAB_10352ba78:
    func_0x000101597ae4(uVar11,lVar6,uVar7,lVar5);
  }
LAB_10352ba8c:
  uVar1 = 0;
LAB_10352ba90:
  return (long *)(ulong)(uVar1 & 1);
}



/* Entry: 10352bce8; end: 10352bd67;  */

void FUN_10352bce8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76120 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5388;
  func_0x000107c61520(&UNK_10dbd5388,&UNK_1106614a8);
  puRam0000000112f76120 = puVar1;
  return;
}



/* Entry: 10352bd68; end: 10352c20b;  */

uint FUN_10352bd68(byte *param_1,byte *param_2)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined1 auStack_108 [24];
  undefined8 uStack_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  undefined8 uStack_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  ulong uStack_b0;
  long lStack_a8;
  ulong uStack_a0;
  undefined8 uStack_98;
  ulong uStack_90;
  long lStack_88;
  ulong uStack_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(param_1 + 0x30);
  uVar7 = *(ulong *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(param_1 + 0x40);
  uVar5 = *(ulong *)(param_1 + 0x38);
  lVar4 = *(long *)(param_2 + 0x30);
  uVar6 = *(ulong *)(param_2 + 0x28);
  uVar9 = *(undefined8 *)(param_2 + 0x40);
  uVar10 = *(ulong *)(param_2 + 0x38);
  uStack_b0 = uVar6;
  lStack_a8 = lVar4;
  uStack_a0 = uVar10;
  uStack_98 = uVar9;
  uStack_90 = uVar7;
  lStack_88 = lVar3;
  uStack_80 = uVar5;
  uStack_78 = uVar8;
  if (lVar3 == 0) {
    if (lVar4 != 0) goto LAB_10352be78;
    FUN_10352b1f8(&uStack_90,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
    FUN_10352b1f8(&uStack_b0,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
LAB_10352bf1c:
    func_0x000101597ae4(uVar7,lVar3,uVar5,uVar8);
    uVar7 = *(ulong *)(param_1 + 0x50);
    uVar8 = *(undefined8 *)(param_1 + 0x48);
    uVar5 = *(ulong *)(param_1 + 0x58);
    uVar10 = *(ulong *)(param_2 + 0x50);
    uVar9 = *(undefined8 *)(param_2 + 0x48);
    uVar6 = *(ulong *)(param_2 + 0x58);
    uStack_f0 = uVar8;
    uStack_e8 = uVar7;
    uStack_e0 = uVar5;
    uStack_d0 = uVar9;
    uStack_c8 = uVar10;
    uStack_c0 = uVar6;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar6 >> 0x3c) goto LAB_10352c010;
      if ((int)uVar8 == (int)uVar9) {
        FUN_10352b1f8(&uStack_f0,auStack_108,0x112db80f8,&UNK_10d9671e0);
        FUN_10352b1f8(&uStack_d0,auStack_108,0x112db80f8,&UNK_10d9671e0);
        uVar2 = uVar7;
        func_0x000100e25fcc(uVar7,uVar5,uVar10,uVar6);
        func_0x000100d55228(uVar9,uVar10,uVar6);
        if ((uVar2 & 1) != 0) goto LAB_10352bfac;
      }
      else {
        FUN_10352b1f8(&uStack_f0,auStack_108,0x112db80f8,&UNK_10d9671e0);
        FUN_10352b1f8(&uStack_d0,auStack_108,0x112db80f8,&UNK_10d9671e0);
        func_0x000100d55228(uVar9,uVar10,uVar6);
      }
    }
    else {
      if (0xe < uVar6 >> 0x3c) {
        FUN_10352b1f8(&uStack_f0,auStack_108,0x112db80f8,&UNK_10d9671e0);
        FUN_10352b1f8(&uStack_d0,auStack_108,0x112db80f8,&UNK_10d9671e0);
LAB_10352bfac:
        func_0x000100d55228(uVar8,uVar7,uVar5);
        if ((((*param_1 ^ *param_2) & 1) == 0) && (*(int *)(param_1 + 4) == *(int *)(param_2 + 4)))
        {
          lVar3 = *(long *)(param_1 + 8);
          lVar4 = *(long *)(param_2 + 8);
          if (param_2[0x10] == 1) {
            if (lVar4 < 2) {
              if (lVar4 == 0) {
                if (lVar3 == 0) {
LAB_10352c1c0:
                  if (((param_1[0x11] ^ param_2[0x11]) & 1) == 0) {
                    uVar8 = *(undefined8 *)(param_1 + 0x18);
                    func_0x000100e25fcc(uVar8,*(undefined8 *)(param_1 + 0x20),
                                        *(undefined8 *)(param_2 + 0x18),
                                        *(undefined8 *)(param_2 + 0x20));
                    uVar1 = (uint)uVar8;
                    goto LAB_10352c194;
                  }
                }
              }
              else if (lVar3 == 1) goto LAB_10352c1c0;
            }
            else if (lVar4 == 2) {
              if (lVar3 == 2) goto LAB_10352c1c0;
            }
            else if (lVar3 == 3) goto LAB_10352c1c0;
          }
          else if (lVar3 == lVar4) goto LAB_10352c1c0;
        }
        goto LAB_10352c190;
      }
LAB_10352c010:
      FUN_10352b1f8(&uStack_f0,auStack_108,0x112db80f8,&UNK_10d9671e0);
      FUN_10352b1f8(&uStack_d0,auStack_108,0x112db80f8,&UNK_10d9671e0);
      func_0x000100d55228(uVar8,uVar7,uVar5);
      uVar8 = uVar9;
      uVar7 = uVar10;
      uVar5 = uVar6;
    }
    func_0x000100d55228(uVar8,uVar7,uVar5);
  }
  else {
    if (lVar4 == 0) {
LAB_10352be78:
      FUN_10352b1f8(&uStack_90,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
      FUN_10352b1f8(&uStack_b0,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar7,lVar3,uVar5,uVar8);
      uVar7 = uVar6;
      lVar3 = lVar4;
      uVar5 = uVar10;
      uVar8 = uVar9;
    }
    else if (((uVar7 == uVar6) && (lVar3 == lVar4)) ||
            (uVar2 = uVar7, func_0x000107c605b8(uVar7,lVar3,uVar6,lVar4,0), (uVar2 & 1) != 0)) {
      FUN_10352b1f8(&uStack_90,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
      FUN_10352b1f8(&uStack_b0,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
      uVar2 = uVar5;
      func_0x000100e25fcc(uVar5,uVar8,uVar10,uVar9);
      func_0x000101597ae4(uVar6,lVar4,uVar10,uVar9);
      if ((uVar2 & 1) != 0) goto LAB_10352bf1c;
    }
    else {
      FUN_10352b1f8(&uStack_90,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
      FUN_10352b1f8(&uStack_b0,&uStack_f0,0x112db6f40,&UNK_10d9681d0);
      func_0x000101597ae4(uVar6,lVar4,uVar10,uVar9);
    }
    func_0x000101597ae4(uVar7,lVar3,uVar5,uVar8);
  }
LAB_10352c190:
  uVar1 = 0;
LAB_10352c194:
  return uVar1 & 1;
}



/* Entry: 10352c20c; end: 10352c24b;  */

void FUN_10352c20c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76138 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5460;
  func_0x000107c61520(&UNK_10dbd5460,&UNK_110661558);
  puRam0000000112f76138 = puVar1;
  return;
}



/* Entry: 10352c24c; end: 10352c25f;  */

void FUN_10352c24c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c260();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10352c2a0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c260; end: 10352c30b;  */

void FUN_10352c260(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd4fe0;
  func_0x000107c61520(&UNK_10dbd4fe0,&UNK_110661298);
  puRam0000000112f76140 = puVar1;
  return;
}



/* Entry: 10352c30c; end: 10352c30f;  */

void FUN_10352c30c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5020;
  func_0x000107c61520(&UNK_10dbd5020,&UNK_110661298);
  puRam0000000112f76160 = puVar1;
  return;
}



/* Entry: 10352c310; end: 10352c34f;  */

void FUN_10352c310(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5020;
  func_0x000107c61520(&UNK_10dbd5020,&UNK_110661298);
  puRam0000000112f76160 = puVar1;
  return;
}



/* Entry: 10352c350; end: 10352c363;  */

void FUN_10352c350(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c364();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10352c3a4)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c364; end: 10352c40f;  */

void FUN_10352c364(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76168 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd50e0;
  func_0x000107c61520(&UNK_10dbd50e0,&UNK_110661328);
  puRam0000000112f76168 = puVar1;
  return;
}



/* Entry: 10352c410; end: 10352c453;  */

void FUN_10352c410(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 10352c454; end: 10352c457;  */

void FUN_10352c454(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5120;
  func_0x000107c61520(&UNK_10dbd5120,&UNK_110661328);
  puRam0000000112f76188 = puVar1;
  return;
}



/* Entry: 10352c458; end: 10352c497;  */

void FUN_10352c458(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76188 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5120;
  func_0x000107c61520(&UNK_10dbd5120,&UNK_110661328);
  puRam0000000112f76188 = puVar1;
  return;
}



/* Entry: 10352c498; end: 10352c4bb;  */

void FUN_10352c498(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c4bc();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10352c4bc; end: 10352c4fb;  */

void FUN_10352c4bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76190 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd51b0;
  func_0x000107c61520(&UNK_10dbd51b0,&UNK_1106613a0);
  puRam0000000112f76190 = puVar1;
  return;
}



/* Entry: 10352c4fc; end: 10352c513;  */

void FUN_10352c4fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352b240();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1034c7384();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c514; end: 10352c553;  */

void FUN_10352c514(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f76198 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5218;
  func_0x000107c61520(&UNK_10dbd5218,&UNK_1106613a0);
  puRam0000000112f76198 = puVar1;
  return;
}



/* Entry: 10352c554; end: 10352c577;  */

void FUN_10352c554(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c578();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10352c578; end: 10352c5b7;  */

void FUN_10352c578(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5288;
  func_0x000107c61520(&UNK_10dbd5288,&UNK_110661420);
  puRam0000000112f761a0 = puVar1;
  return;
}



/* Entry: 10352c5b8; end: 10352c5cb;  */

void FUN_10352c5b8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x10352b280)();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10352c5cc();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c5cc; end: 10352c60b;  */

void FUN_10352c5cc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761a8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd5240;
  func_0x000107c61520(&DAT_10dbd5240,&UNK_110661420);
  puRam0000000112f761a8 = puVar1;
  return;
}



/* Entry: 10352c60c; end: 10352c60f;  */

void FUN_10352c60c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd52f0;
  func_0x000107c61520(&UNK_10dbd52f0,&UNK_110661420);
  puRam0000000112f761b0 = puVar1;
  return;
}



/* Entry: 10352c610; end: 10352c64f;  */

void FUN_10352c610(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd52f0;
  func_0x000107c61520(&UNK_10dbd52f0,&UNK_110661420);
  puRam0000000112f761b0 = puVar1;
  return;
}



/* Entry: 10352c650; end: 10352c673;  */

void FUN_10352c650(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352c674();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10352c674; end: 10352c6b3;  */

void FUN_10352c674(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbd5360;
  func_0x000107c61520(&UNK_10dbd5360,&UNK_1106614a8);
  puRam0000000112f761b8 = puVar1;
  return;
}



/* Entry: 10352c6b4; end: 10352c6c7;  */

void FUN_10352c6b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10352bce8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_10352c6c8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10352c6c8; end: 10352c707;  */

void FUN_10352c6c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f761c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbd5318;
  func_0x000107c61520(&DAT_10dbd5318,&UNK_1106614a8);
  puRam0000000112f761c0 = puVar1;
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1036435b0; end: 1036435ef;  */

void FUN_1036435b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f814a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf118c;
  func_0x000107c61520(&DAT_10dbf118c,&UNK_110674410);
  puRam0000000112f814a0 = puVar1;
  return;
}



/* Entry: 1036435f0; end: 103643603;  */

undefined * FUN_1036435f0(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 103643604; end: 103643643;  */

undefined8 FUN_103643604(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 103643644; end: 10364364f;  */

void FUN_103643644(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103644c58();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103643650; end: 10364368f;  */

void FUN_103643650(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f81510;
  func_0x0001000285a8(0x112f81510,&UNK_10dbf1350);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103643690; end: 1036436b3;  */

void FUN_103643690(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_103644c58();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1036436b4; end: 103643723;  */

void FUN_1036436b4(undefined8 *param_1,undefined8 param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  (*param_5)();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103643724; end: 10364372f;  */

void FUN_103643724(undefined8 *param_1,undefined8 *param_2,undefined2 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*(code *)0x103644c64)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103643730; end: 1036437e7;  */

void FUN_103643730(undefined8 *param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  (*param_5)();
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 1036437e8; end: 10364382f;  */

void FUN_1036437e8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1960,0x16,2);
  uRam000000011380ae98 = uStack_38;
  uRam000000011380ae90 = uStack_40;
  uRam000000011380aea8 = uStack_28;
  uRam000000011380aea0 = uStack_30;
  uRam000000011380aeb8 = uStack_18;
  uRam000000011380aeb0 = uStack_20;
  return;
}



/* Entry: 103643830; end: 1036438e3;  */

/* WARNING: Removing unreachable block (ram,0x0001036438e0) */

void FUN_103643830(undefined8 param_1,long param_2,long param_3)

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
        FUN_103644c70();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1036438e4; end: 10364397f;  */

void FUN_1036438e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_103644c70();
    (*pcVar2)(param_2,1,&UNK_110674828,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 103643980; end: 1036439df;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103643980(ulong param_1,byte *param_2,byte *param_3,undefined8 param_4,long param_5,
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
  
  FUN_1036447a4(param_1,param_4);
  if ((param_1 & 1) == 0) {
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
    uVar4 = (uint)((ulong)param_3 >> 0x20);
    uVar15 = uVar4 >> 0x1e;
    uVar5 = (uint)(param_6 >> 0x20);
    uVar18 = uVar5 >> 0x1e;
    iVar7 = (int)param_2;
    pbVar11 = param_3;
    if ((ulong)param_3 >> 0x3e == 3) {
      uVar17 = 0;
      if ((((param_2 != (byte *)0x0) || (param_3 != (byte *)0xc000000000000000)) ||
          (param_6 >> 0x3e < 3)) || ((uVar17 = 0, param_5 != 0 || (param_6 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)param_2 >> 0x20);
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
        uVar19 = param_6 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar16 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar16,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_5)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
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
        uVar19 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
            *(char *)((long)register0x00000008 + -0x70) = (char)param_2;
            *(char *)((long)register0x00000008 + -0x6f) = (char)((ulong)param_2 >> 8);
            *(char *)((long)register0x00000008 + -0x6e) = (char)((ulong)param_2 >> 0x10);
            *(char *)((long)register0x00000008 + -0x6d) = (char)((ulong)param_2 >> 0x18);
            *(char *)((long)register0x00000008 + -0x6c) = (char)((ulong)param_2 >> 0x20);
            *(char *)((long)register0x00000008 + -0x6b) = (char)((ulong)param_2 >> 0x28);
            *(char *)((long)register0x00000008 + -0x6a) = (char)((ulong)param_2 >> 0x30);
            *(char *)((long)register0x00000008 + -0x69) = (char)((ulong)param_2 >> 0x38);
            *(char *)((long)register0x00000008 + -0x68) = (char)param_3;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)param_3 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)param_3 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)param_3 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)param_3 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)param_3 >> 0x28);
            pbVar11 = (byte *)((long)register0x00000008 + (((ulong)param_3 >> 0x30 & 0xff) - 0x70));
code_r0x000100e26260:
            unaff_x21 = 0;
            func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                                (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto code_r0x000100e262b0;
          }
          unaff_x25 = (byte *)(long)iVar7;
          unaff_x23 = (byte *)(((long)param_2 >> 0x20) - (long)unaff_x25);
          if ((long)param_2 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f4);
            (*pcVar6)();
          }
          func_0x000107c5ec30();
          unaff_x24 = param_3;
          if (param_2 == (byte *)0x0) {
            func_0x000107c5ec38();
            param_2 = (byte *)0x0;
          }
          else {
            pbVar11 = param_2;
            func_0x000107c5ec3c();
            if (SBORROW8((long)unaff_x25,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26300);
              (*pcVar6)();
            }
            param_2 = param_2 + ((long)unaff_x25 - (long)pbVar11);
            func_0x000107c5ec38();
            unaff_x19 = param_2;
            if (param_2 != (byte *)0x0) {
              if ((long)unaff_x23 <= (long)pbVar11) {
                pbVar11 = unaff_x23;
              }
              pbVar11 = pbVar11 + (long)param_2;
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
          lVar21 = *(long *)(param_2 + 0x10);
          unaff_x24 = *(byte **)(param_2 + 0x18);
          func_0x000107c5ec30();
          pbVar11 = param_2;
          if (param_2 != (byte *)0x0) {
            func_0x000107c5ec3c();
            if (SBORROW8(lVar21,(long)pbVar11)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262fc);
              (*pcVar6)();
            }
            param_2 = param_2 + (lVar21 - (long)pbVar11);
          }
          unaff_x23 = unaff_x24 + -lVar21;
          if (SBORROW8((long)unaff_x24,lVar21)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f8);
            (*pcVar6)();
          }
          func_0x000107c5ec38();
          unaff_x19 = param_2;
          unaff_x25 = param_3;
          if (param_2 == (byte *)0x0) {
            pbVar11 = (byte *)0x0;
          }
          else {
            if ((long)unaff_x23 <= (long)pbVar11) {
              pbVar11 = unaff_x23;
            }
            pbVar11 = pbVar11 + (long)param_2;
          }
        }
code_r0x000100e262a4:
        unaff_x20 = (ulong)param_3 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_2,pbVar11,param_5
                            ,param_6);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_6;
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
    param_2 = *(byte **)(pbVar8 + 8);
    pbVar20 = *(byte **)(pbVar8 + 0x18);
    bVar23 = pbVar8[0x28];
    param_3 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar12 = param_2;
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
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 == pbVar13) && (param_3 == pbVar14)) {
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
        if ((pbVar10 == pbVar13) && (param_2 == pbVar14)) {
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
        if (((pbVar10 == pbVar13) && (param_2 == pbVar14)) &&
           (pbVar10 = param_3, pbVar12 = pbVar20, pbVar13 = *(byte **)(pbVar11 + 0x10),
           pbVar14 = *(byte **)(pbVar11 + 0x18),
           param_3 == *(byte **)(pbVar11 + 0x10) && pbVar20 == *(byte **)(pbVar11 + 0x18))) {
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
      if (param_3 == (byte *)0x0) {
        if (pbVar14 != (byte *)0x0) {
          return (byte *)0x0;
        }
      }
      else {
        if (pbVar14 == (byte *)0x0) {
          return (byte *)0x0;
        }
        pbVar13 = *(byte **)(pbVar11 + 8);
        pbVar10 = param_2;
        pbVar12 = param_3;
        if ((param_2 != pbVar13) || (param_3 != pbVar14)) goto code_r0x000107c605b8;
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
      if ((((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && pbVar10 == (byte *)0x0) &&
          lVar22 == 0) && param_3 == (byte *)0x0) {
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
         (((pbVar20 == (byte *)0x0 && param_2 == (byte *)0x0) && param_3 == (byte *)0x0) &&
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
    param_5 = *(long *)(pbVar11 + 8);
    param_6 = *(ulong *)(pbVar11 + 0x10);
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



/* Entry: 1036439e0; end: 103643a1f;  */

void FUN_1036439e0(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 103643a20; end: 103643a4f;  */

undefined1  [16] FUN_103643a20(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 103643a50; end: 103643a83;  */

void FUN_103643a50(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 103643a84; end: 103643a97;  */

undefined1  [16] FUN_103643a84(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x103643a94;
  return auVar1;
}



/* Entry: 103643a98; end: 103643acf;  */

void FUN_103643a98(void)

{
  FUN_103643830();
  return;
}



/* Entry: 103643ad0; end: 103643ad3;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103643ad0(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103643ad4; end: 103643b0b;  */

uint FUN_103643ad4(long param_1,long param_2)

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
  func_0x000103646114();
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



/* Entry: 103643b0c; end: 103643c13;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103643b0c(undefined8 *param_1)

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
  FUN_1036447a4(uVar18,*param_1);
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
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
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
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 103643c14; end: 103643c4f;  */

void FUN_103643c14(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81690;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81690,&UNK_10dbf17f8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103643c50; end: 103643db7;  */

void FUN_103643c50(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_90 [72];
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_48 = *unaff_x20;
  uStack_38 = unaff_x20[2];
  uStack_40 = unaff_x20[1];
  func_0x000107c6068c(auStack_90,0);
  func_0x000107c5fa50(auStack_90,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103643db8; end: 103643dff;  */

void FUN_103643db8(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1920,0x3f,2);
  uRam000000011380aec8 = uStack_38;
  uRam000000011380aec0 = uStack_40;
  uRam000000011380aed8 = uStack_28;
  uRam000000011380aed0 = uStack_30;
  uRam000000011380aee8 = uStack_18;
  uRam000000011380aee0 = uStack_20;
  return;
}



/* Entry: 103643e00; end: 103643f37;  */

/* WARNING: Removing unreachable block (ram,0x000103643f34) */

void FUN_103643e00(undefined8 param_1,long param_2,long param_3)

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
          (**(code **)(param_3 + 0x60))();
        }
        else if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103644cf0();
          lVar2 = unaff_x20 + 8;
          puVar3 = &UNK_1106748d0;
          goto LAB_103643e88;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x0001035eeb64();
          lVar2 = unaff_x20 + 0x38;
          puVar3 = &UNK_110674b48;
        }
        else {
          if (lVar1 != 4) goto LAB_103643e9c;
          pcVar4 = *(code **)(param_3 + 0x180);
          func_0x000103644d30();
          lVar2 = unaff_x20 + 0x18;
          puVar3 = &UNK_110674960;
        }
LAB_103643e88:
        (*pcVar4)(lVar2,puVar3,lVar1,param_2,param_3);
      }
LAB_103643e9c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar5)();
    }
  }
  return;
}



/* Entry: 103643f38; end: 103644053;  */

void FUN_103643f38(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long *plVar2;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long lStack_50;
  undefined1 uStack_48;
  
  lVar1 = *unaff_x20;
  if ((lVar1 == 0) || ((**(code **)(param_3 + 0x20))(lVar1,1,param_2,param_3), unaff_x21 == 0)) {
    if (unaff_x20[1] != 0) {
      uStack_48 = (undefined1)unaff_x20[2];
      pcVar3 = *(code **)(param_3 + 0x80);
      lStack_50 = unaff_x20[1];
      func_0x000103644cf0();
      (*pcVar3)(&lStack_50,2,&UNK_1106748d0,lVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    plVar2 = unaff_x20;
    FUN_103644054();
    if (unaff_x21 == 0) {
      if (unaff_x20[3] != 0) {
        uStack_48 = (undefined1)unaff_x20[4];
        pcVar3 = *(code **)(param_3 + 0x80);
        lStack_50 = unaff_x20[3];
        func_0x000103644d30();
        (*pcVar3)(&lStack_50,4,&UNK_110674960,plVar2,param_2,param_3);
      }
      func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}



/* Entry: 103644054; end: 1036440fb;  */

void FUN_103644054(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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
  
  uStack_a8 = *(ulong *)(param_1 + 0x40);
  if (uStack_a8 >> 0x3c < 0xf) {
    uStack_b0 = *(undefined8 *)(param_1 + 0x38);
    uStack_78 = *(undefined8 *)(param_1 + 0x70);
    uStack_80 = *(undefined8 *)(param_1 + 0x68);
    uStack_68 = *(undefined8 *)(param_1 + 0x80);
    uStack_70 = *(undefined8 *)(param_1 + 0x78);
    uStack_58 = *(undefined8 *)(param_1 + 0x90);
    uStack_60 = *(undefined8 *)(param_1 + 0x88);
    uStack_48 = *(undefined8 *)(param_1 + 0xa0);
    uStack_50 = *(undefined8 *)(param_1 + 0x98);
    uStack_98 = *(undefined8 *)(param_1 + 0x50);
    uStack_a0 = *(undefined8 *)(param_1 + 0x48);
    uStack_88 = *(undefined8 *)(param_1 + 0x60);
    uStack_90 = *(undefined8 *)(param_1 + 0x58);
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x0001035eeb64();
    (*pcVar1)(&uStack_b0,3,&UNK_110674b48,param_1,param_3,param_4);
  }
  return;
}



/* Entry: 1036440fc; end: 10364416b;  */

void FUN_1036440fc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 1;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[8] = 0xf000000000000000;
  param_1[7] = 0;
  param_1[10] = 0;
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
  return;
}



/* Entry: 10364416c; end: 10364419b;  */

undefined1  [16] FUN_10364416c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 10364419c; end: 1036441cf;  */

void FUN_10364419c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1036441d0; end: 1036441e3;  */

undefined1  [16] FUN_1036441d0(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1036441e0;
  return auVar1;
}



/* Entry: 1036441e4; end: 1036441f7;  */

void FUN_1036441e4(void)

{
  FUN_103643e00();
  return;
}



/* Entry: 1036441f8; end: 10364424f;  */

void FUN_1036441f8(void)

{
  FUN_103643f38();
  return;
}



/* Entry: 103644250; end: 103644253;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103644250(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103644254; end: 10364428b;  */

uint FUN_103644254(long param_1,long param_2)

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
  FUN_1036460d4();
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



/* Entry: 10364428c; end: 10364431b;  */

uint FUN_10364428c(undefined8 *param_1)

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
  FUN_103644d70(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 10364431c; end: 1036443bb;  */

/* WARNING: Possible PIC construction at 0x000103644368: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103644378: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364436c) */
/* WARNING: Removing unreachable block (ram,0x00010364437c) */

void FUN_10364431c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f815e0 != -1) {
    func_0x000107c61568(0x112f815e0,FUN_103643db8);
  }
  uVar5 = uRam000000011380aee8;
  uVar4 = uRam000000011380aee0;
  uVar3 = uRam000000011380aed8;
  uVar2 = uRam000000011380aed0;
  uVar1 = uRam000000011380aec8;
  *param_1 = uRam000000011380aec0;
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



/* Entry: 1036443bc; end: 1036443f7;  */

void FUN_1036443bc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f81680;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f81680,&UNK_10dbf17f0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036443f8; end: 103644543;  */

void FUN_1036443f8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 103644544; end: 1036445d3;  */

uint FUN_103644544(undefined8 *param_1,undefined8 *param_2)

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
  FUN_103644d70(&uStack_180,&uStack_d0);
  return uVar1 & 1;
}



/* Entry: 1036445d4; end: 10364461b;  */

void FUN_1036445d4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf18a0,0x78,2);
  uRam000000011380aef8 = uStack_38;
  uRam000000011380aef0 = uStack_40;
  uRam000000011380af08 = uStack_28;
  uRam000000011380af00 = uStack_30;
  uRam000000011380af18 = uStack_18;
  uRam000000011380af10 = uStack_20;
  return;
}



/* Entry: 10364461c; end: 1036446bb;  */

/* WARNING: Possible PIC construction at 0x000103644668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103644678: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010364466c) */
/* WARNING: Removing unreachable block (ram,0x00010364467c) */

void FUN_10364461c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81600 != -1) {
    func_0x000107c61568(0x112f81600,FUN_1036445d4);
  }
  uVar5 = uRam000000011380af18;
  uVar4 = uRam000000011380af10;
  uVar3 = uRam000000011380af08;
  uVar2 = uRam000000011380af00;
  uVar1 = uRam000000011380aef8;
  *param_1 = uRam000000011380aef0;
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



/* Entry: 1036446bc; end: 103644703;  */

void FUN_1036446bc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1800,0x99,2);
  uRam000000011380af28 = uStack_38;
  uRam000000011380af20 = uStack_40;
  uRam000000011380af38 = uStack_28;
  uRam000000011380af30 = uStack_30;
  uRam000000011380af48 = uStack_18;
  uRam000000011380af40 = uStack_20;
  return;
}



/* Entry: 103644704; end: 1036447a3;  */

/* WARNING: Possible PIC construction at 0x000103644750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103644760: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103644754) */
/* WARNING: Removing unreachable block (ram,0x000103644764) */

void FUN_103644704(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f81608 != -1) {
    func_0x000107c61568(0x112f81608,FUN_1036446bc);
  }
  uVar5 = uRam000000011380af48;
  uVar4 = uRam000000011380af40;
  uVar3 = uRam000000011380af38;
  uVar2 = uRam000000011380af30;
  uVar1 = uRam000000011380af28;
  *param_1 = uRam000000011380af20;
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



/* Entry: 1036447a4; end: 103644c57;  */

undefined8 FUN_1036447a4(long param_1,long param_2)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lStack_4d0;
  long lStack_4c8;
  long lStack_4c0;
  long lStack_4b8;
  long lStack_4b0;
  long lStack_4a8;
  long lStack_4a0;
  long lStack_498;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  ulong uStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  long lStack_438;
  long lStack_430;
  long lStack_428;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  ulong uStack_3e8;
  long lStack_3e0;
  long lStack_3d8;
  long lStack_3d0;
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
  ulong uStack_378;
  long lStack_370;
  long lStack_368;
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
  ulong uStack_308;
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
  long lStack_280;
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
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == *(long *)(param_2 + 0x10)) {
    if ((lVar3 == 0) || (param_1 == param_2)) {
      return 1;
    }
    lStack_218 = *(long *)(param_1 + 0xa8);
    lStack_220 = *(long *)(param_1 + 0xa0);
    lStack_208 = *(long *)(param_1 + 0xb8);
    lStack_210 = *(long *)(param_1 + 0xb0);
    lStack_200 = *(long *)(param_1 + 0xc0);
    lStack_258 = *(long *)(param_1 + 0x68);
    lStack_260 = *(long *)(param_1 + 0x60);
    lStack_248 = *(long *)(param_1 + 0x78);
    lStack_250 = *(long *)(param_1 + 0x70);
    lStack_238 = *(long *)(param_1 + 0x88);
    lStack_240 = *(long *)(param_1 + 0x80);
    lStack_228 = *(long *)(param_1 + 0x98);
    lStack_230 = *(long *)(param_1 + 0x90);
    lStack_298 = *(long *)(param_1 + 0x28);
    lStack_2a0 = *(long *)(param_1 + 0x20);
    lStack_288 = *(long *)(param_1 + 0x38);
    lStack_290 = *(long *)(param_1 + 0x30);
    uStack_278 = *(ulong *)(param_1 + 0x48);
    lStack_280 = *(long *)(param_1 + 0x40);
    lStack_268 = *(long *)(param_1 + 0x58);
    lStack_270 = *(long *)(param_1 + 0x50);
    lStack_168 = *(long *)(param_2 + 0xa8);
    lStack_170 = *(long *)(param_2 + 0xa0);
    lStack_158 = *(long *)(param_2 + 0xb8);
    lStack_160 = *(long *)(param_2 + 0xb0);
    lStack_150 = *(long *)(param_2 + 0xc0);
    lStack_1a8 = *(long *)(param_2 + 0x68);
    lStack_1b0 = *(long *)(param_2 + 0x60);
    lStack_198 = *(long *)(param_2 + 0x78);
    lStack_1a0 = *(long *)(param_2 + 0x70);
    lStack_188 = *(long *)(param_2 + 0x88);
    lStack_190 = *(long *)(param_2 + 0x80);
    lStack_178 = *(long *)(param_2 + 0x98);
    lStack_180 = *(long *)(param_2 + 0x90);
    lStack_1e8 = *(long *)(param_2 + 0x28);
    lStack_1f0 = *(long *)(param_2 + 0x20);
    lStack_1d8 = *(long *)(param_2 + 0x38);
    lStack_1e0 = *(long *)(param_2 + 0x30);
    lStack_1c8 = *(long *)(param_2 + 0x48);
    lStack_1d0 = *(long *)(param_2 + 0x40);
    lStack_1b8 = *(long *)(param_2 + 0x58);
    lStack_1c0 = *(long *)(param_2 + 0x50);
    if (lStack_2a0 == lStack_1f0) {
      plVar5 = (long *)(param_2 + 200);
      plVar4 = (long *)(param_1 + 200);
      do {
        if ((char)lStack_1e0 == '\x01') {
          if (lStack_1e8 < 2) {
            if (lStack_1e8 == 0) {
              if (lStack_298 != 0) {
                return 0;
              }
            }
            else if (lStack_298 != 1) {
              return 0;
            }
          }
          else if (lStack_1e8 == 2) {
            if (lStack_298 != 2) {
              return 0;
            }
          }
          else if (lStack_298 != 3) {
            return 0;
          }
        }
        else if (lStack_298 != lStack_1e8) {
          return 0;
        }
        lStack_418 = plVar4[-5];
        lStack_420 = plVar4[-6];
        lStack_408 = plVar4[-3];
        lStack_410 = plVar4[-4];
        lStack_3f8 = plVar4[-1];
        lStack_400 = plVar4[-2];
        uStack_458 = plVar4[-0xd];
        lStack_460 = plVar4[-0xe];
        lStack_448 = plVar4[-0xb];
        lStack_450 = plVar4[-0xc];
        lStack_438 = plVar4[-9];
        lStack_440 = plVar4[-10];
        lStack_428 = plVar4[-7];
        lStack_430 = plVar4[-8];
        uStack_3e8 = plVar5[-0xd];
        lStack_3f0 = plVar5[-0xe];
        lStack_3d8 = plVar5[-0xb];
        lStack_3e0 = plVar5[-0xc];
        lStack_398 = plVar5[-3];
        lStack_3a0 = plVar5[-4];
        lStack_388 = plVar5[-1];
        lStack_390 = plVar5[-2];
        lStack_3b8 = plVar5[-7];
        lStack_3c0 = plVar5[-8];
        lStack_3a8 = plVar5[-5];
        lStack_3b0 = plVar5[-6];
        lStack_3c8 = plVar5[-9];
        lStack_3d0 = plVar5[-10];
        lStack_380 = lStack_460;
        uStack_378 = uStack_458;
        lStack_370 = lStack_450;
        lStack_368 = lStack_448;
        lStack_360 = lStack_440;
        lStack_358 = lStack_438;
        lStack_350 = lStack_430;
        lStack_348 = lStack_428;
        lStack_340 = lStack_420;
        lStack_338 = lStack_418;
        lStack_330 = lStack_410;
        lStack_328 = lStack_408;
        lStack_320 = lStack_400;
        lStack_318 = lStack_3f8;
        lStack_310 = lStack_3f0;
        uStack_308 = uStack_3e8;
        lStack_300 = lStack_3e0;
        lStack_2f8 = lStack_3d8;
        lStack_2f0 = lStack_3d0;
        lStack_2e8 = lStack_3c8;
        lStack_2e0 = lStack_3c0;
        lStack_2d8 = lStack_3b8;
        lStack_2d0 = lStack_3b0;
        lStack_2c8 = lStack_3a8;
        lStack_2c0 = lStack_3a0;
        lStack_2b8 = lStack_398;
        lStack_2b0 = lStack_390;
        lStack_2a8 = lStack_388;
        if (uStack_458 >> 0x3c < 0xf) {
          if (0xe < uStack_3e8 >> 0x3c) goto LAB_103644bcc;
          lStack_488 = plVar5[-5];
          lStack_490 = plVar5[-6];
          lStack_478 = plVar5[-3];
          lStack_480 = plVar5[-4];
          lStack_468 = plVar5[-1];
          lStack_470 = plVar5[-2];
          lStack_4c8 = plVar5[-0xd];
          lStack_4d0 = plVar5[-0xe];
          lStack_4b8 = plVar5[-0xb];
          lStack_4c0 = plVar5[-0xc];
          lStack_4a8 = plVar5[-9];
          lStack_4b0 = plVar5[-10];
          lStack_498 = plVar5[-7];
          lStack_4a0 = plVar5[-8];
          lStack_f8 = plVar4[-5];
          lStack_100 = plVar4[-6];
          lStack_e8 = plVar4[-3];
          lStack_f0 = plVar4[-4];
          lStack_d8 = plVar4[-1];
          lStack_e0 = plVar4[-2];
          lStack_138 = plVar4[-0xd];
          lStack_140 = plVar4[-0xe];
          lStack_128 = plVar4[-0xb];
          lStack_130 = plVar4[-0xc];
          lStack_118 = plVar4[-9];
          lStack_120 = plVar4[-10];
          lStack_108 = plVar4[-7];
          lStack_110 = plVar4[-8];
          lStack_d0 = lStack_4d0;
          lStack_c8 = lStack_4c8;
          lStack_c0 = lStack_4c0;
          lStack_b8 = lStack_4b8;
          lStack_b0 = lStack_4b0;
          lStack_a8 = lStack_4a8;
          lStack_a0 = lStack_4a0;
          lStack_98 = lStack_498;
          lStack_90 = lStack_490;
          lStack_88 = lStack_488;
          lStack_80 = lStack_480;
          lStack_78 = lStack_478;
          lStack_70 = lStack_470;
          lStack_68 = lStack_468;
          FUN_103646154(&lStack_2a0,&lStack_460);
          FUN_103646154(&lStack_1f0,&lStack_460);
          FUN_1035f8fd4(&lStack_268,&lStack_460);
          FUN_1035f8fd4(&lStack_1b8,&lStack_460);
          plVar1 = &lStack_140;
          FUN_103646638(plVar1,&lStack_d0);
          FUN_103643604(&lStack_4d0,0x112f73200,&UNK_10dbe5440);
          FUN_103643604(&lStack_380,0x112f73200,&UNK_10dbe5440);
          if (((ulong)plVar1 & 1) == 0) goto LAB_103644bb0;
        }
        else {
          if (uStack_3e8 >> 0x3c < 0xf) {
LAB_103644bcc:
            FUN_1035f8fd4(&lStack_268,&lStack_4d0);
            FUN_1035f8fd4(&lStack_1b8,&lStack_4d0);
            FUN_103643604(&lStack_460,0x112f7d130,&UNK_10dbe5a80);
            return 0;
          }
          lStack_488 = plVar4[-5];
          lStack_490 = plVar4[-6];
          lStack_478 = plVar4[-3];
          lStack_480 = plVar4[-4];
          lStack_468 = plVar4[-1];
          lStack_470 = plVar4[-2];
          lStack_4c8 = plVar4[-0xd];
          lStack_4d0 = plVar4[-0xe];
          lStack_4b8 = plVar4[-0xb];
          lStack_4c0 = plVar4[-0xc];
          lStack_4a8 = plVar4[-9];
          lStack_4b0 = plVar4[-10];
          lStack_498 = plVar4[-7];
          lStack_4a0 = plVar4[-8];
          FUN_103646154(&lStack_2a0,&lStack_460);
          FUN_103646154(&lStack_1f0,&lStack_460);
          FUN_1035f8fd4(&lStack_268,&lStack_460);
          FUN_1035f8fd4(&lStack_1b8,&lStack_460);
          FUN_103643604(&lStack_4d0,0x112f73200,&UNK_10dbe5440);
        }
        if ((char)lStack_1d0 == '\x01') {
          if (lStack_1d8 < 4) {
            if (lStack_1d8 < 2) {
              if (lStack_1d8 == 0) {
                if (lStack_288 != 0) {
LAB_103644bb0:
                  func_0x000103646188(&lStack_1f0);
                  func_0x000103646188(&lStack_2a0);
                  return 0;
                }
              }
              else if (lStack_288 != 1) goto LAB_103644bb0;
            }
            else if (lStack_1d8 == 2) {
              if (lStack_288 != 2) goto LAB_103644bb0;
            }
            else if (lStack_288 != 3) goto LAB_103644bb0;
          }
          else if (lStack_1d8 < 6) {
            if (lStack_1d8 == 4) {
              if (lStack_288 != 4) goto LAB_103644bb0;
            }
            else if (lStack_288 != 5) goto LAB_103644bb0;
          }
          else if (lStack_1d8 == 6) {
            if (lStack_288 != 6) goto LAB_103644bb0;
          }
          else if (lStack_288 != 7) goto LAB_103644bb0;
        }
        else if (lStack_288 != lStack_1d8) goto LAB_103644bb0;
        uVar2 = uStack_278;
        func_0x000100e25fcc(uStack_278,lStack_270,lStack_1c8,lStack_1c0);
        func_0x000103646188(&lStack_1f0);
        func_0x000103646188(&lStack_2a0);
        if ((uVar2 & 1) == 0) {
          return 0;
        }
        lVar3 = lVar3 + -1;
        if (lVar3 == 0) {
          return 1;
        }
        lStack_218 = plVar4[0x11];
        lStack_220 = plVar4[0x10];
        lStack_208 = plVar4[0x13];
        lStack_210 = plVar4[0x12];
        lStack_258 = plVar4[9];
        lStack_260 = plVar4[8];
        lStack_248 = plVar4[0xb];
        lStack_250 = plVar4[10];
        lStack_238 = plVar4[0xd];
        lStack_240 = plVar4[0xc];
        lStack_228 = plVar4[0xf];
        lStack_230 = plVar4[0xe];
        lStack_298 = plVar4[1];
        lStack_2a0 = *plVar4;
        lStack_288 = plVar4[3];
        lStack_290 = plVar4[2];
        uStack_278 = plVar4[5];
        lStack_280 = plVar4[4];
        lStack_268 = plVar4[7];
        lStack_270 = plVar4[6];
        lStack_168 = plVar5[0x11];
        lStack_170 = plVar5[0x10];
        lStack_158 = plVar5[0x13];
        lStack_160 = plVar5[0x12];
        lStack_150 = plVar5[0x14];
        lStack_1a8 = plVar5[9];
        lStack_1b0 = plVar5[8];
        lStack_198 = plVar5[0xb];
        lStack_1a0 = plVar5[10];
        lStack_188 = plVar5[0xd];
        lStack_190 = plVar5[0xc];
        lStack_178 = plVar5[0xf];
        lStack_180 = plVar5[0xe];
        lStack_1e8 = plVar5[1];
        lStack_1f0 = *plVar5;
        lStack_1d8 = plVar5[3];
        lStack_1e0 = plVar5[2];
        lStack_1c8 = plVar5[5];
        lStack_1d0 = plVar5[4];
        lStack_1b8 = plVar5[7];
        lStack_1c0 = plVar5[6];
        plVar5 = plVar5 + 0x15;
        lStack_200 = plVar4[0x14];
        plVar4 = plVar4 + 0x15;
      } while (lStack_2a0 == lStack_1f0);
    }
  }
  return 0;
}



/* Entry: 103644c58; end: 103644c6f;  */

void FUN_103644c58(void)

{
  return;
}



/* Entry: 103644c70; end: 103644d6f;  */

void FUN_103644c70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f815d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf1638;
  func_0x000107c61520(&DAT_10dbf1638,&UNK_110674828);
  puRam0000000112f815d0 = puVar1;
  return;
}



/* Entry: 103644d70; end: 1036450b7;  */

uint FUN_103644d70(long *param_1,long *param_2)

{
  uint uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_430 [112];
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
  long lStack_368;
  long lStack_360;
  long lStack_358;
  long lStack_350;
  ulong uStack_348;
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
  ulong uStack_2d8;
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
  long lStack_280;
  long lStack_278;
  long lStack_270;
  ulong uStack_268;
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
  ulong uStack_1f8;
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
  long lStack_60;
  long lStack_58;
  long lStack_50;
  long lStack_48;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar4 = param_1[1];
  lVar5 = param_2[1];
  if ((char)param_2[2] == '\x01') {
    if (lVar5 < 2) {
      if (lVar5 == 0) {
        if (lVar4 != 0) {
          return 0;
        }
      }
      else if (lVar4 != 1) {
        return 0;
      }
    }
    else if (lVar5 == 2) {
      if (lVar4 != 2) {
        return 0;
      }
    }
    else if (lVar4 != 3) {
      return 0;
    }
  }
  else if (lVar4 != lVar5) {
    return 0;
  }
  lStack_e8 = param_1[0xe];
  lStack_f0 = param_1[0xd];
  lStack_d8 = param_1[0x10];
  lStack_e0 = param_1[0xf];
  lStack_c8 = param_1[0x12];
  lStack_d0 = param_1[0x11];
  lStack_b8 = param_1[0x14];
  lStack_c0 = param_1[0x13];
  lStack_118 = param_1[8];
  lStack_120 = param_1[7];
  lStack_108 = param_1[10];
  lStack_110 = param_1[9];
  lStack_f8 = param_1[0xc];
  lStack_100 = param_1[0xb];
  lStack_188 = param_2[8];
  lStack_190 = param_2[7];
  lStack_178 = param_2[10];
  lStack_180 = param_2[9];
  lStack_168 = param_2[0xc];
  lStack_170 = param_2[0xb];
  lStack_158 = param_2[0xe];
  lStack_160 = param_2[0xd];
  lStack_148 = param_2[0x10];
  lStack_150 = param_2[0xf];
  lStack_128 = param_2[0x14];
  lStack_130 = param_2[0x13];
  lStack_138 = param_2[0x12];
  lStack_140 = param_2[0x11];
  lStack_238 = param_1[0xe];
  lStack_240 = param_1[0xd];
  lStack_228 = param_1[0x10];
  lStack_230 = param_1[0xf];
  lStack_218 = param_1[0x12];
  lStack_220 = param_1[0x11];
  lStack_208 = param_1[0x14];
  lStack_210 = param_1[0x13];
  uStack_268 = param_1[8];
  lStack_270 = param_1[7];
  lStack_258 = param_1[10];
  lStack_260 = param_1[9];
  lStack_248 = param_1[0xc];
  lStack_250 = param_1[0xb];
  uStack_2d8 = param_2[8];
  lStack_2e0 = param_2[7];
  lStack_2c8 = param_2[10];
  lStack_2d0 = param_2[9];
  lStack_2b8 = param_2[0xc];
  lStack_2c0 = param_2[0xb];
  lStack_2a8 = param_2[0xe];
  lStack_2b0 = param_2[0xd];
  lStack_298 = param_2[0x10];
  lStack_2a0 = param_2[0xf];
  lStack_288 = param_2[0x12];
  lStack_290 = param_2[0x11];
  lStack_278 = param_2[0x14];
  lStack_280 = param_2[0x13];
  lStack_200 = lStack_2e0;
  uStack_1f8 = uStack_2d8;
  lStack_1f0 = lStack_2d0;
  lStack_1e8 = lStack_2c8;
  lStack_1e0 = lStack_2c0;
  lStack_1d8 = lStack_2b8;
  lStack_1d0 = lStack_2b0;
  lStack_1c8 = lStack_2a8;
  lStack_1c0 = lStack_2a0;
  lStack_1b8 = lStack_298;
  lStack_1b0 = lStack_290;
  lStack_1a8 = lStack_288;
  lStack_1a0 = lStack_280;
  lStack_198 = lStack_278;
  if (uStack_268 >> 0x3c < 0xf) {
    if (0xe < uStack_2d8 >> 0x3c) goto LAB_103644f1c;
    lStack_388 = param_2[0xe];
    lStack_390 = param_2[0xd];
    lStack_378 = param_2[0x10];
    lStack_380 = param_2[0xf];
    lStack_368 = param_2[0x12];
    lStack_370 = param_2[0x11];
    lStack_358 = param_2[0x14];
    lStack_360 = param_2[0x13];
    lStack_3b8 = param_2[8];
    lStack_3c0 = param_2[7];
    lStack_3a8 = param_2[10];
    lStack_3b0 = param_2[9];
    lStack_398 = param_2[0xc];
    lStack_3a0 = param_2[0xb];
    lStack_78 = param_1[0xe];
    lStack_80 = param_1[0xd];
    lStack_68 = param_1[0x10];
    lStack_70 = param_1[0xf];
    lStack_58 = param_1[0x12];
    lStack_60 = param_1[0x11];
    lStack_48 = param_1[0x14];
    lStack_50 = param_1[0x13];
    lStack_a8 = param_1[8];
    lStack_b0 = param_1[7];
    lStack_98 = param_1[10];
    lStack_a0 = param_1[9];
    lStack_88 = param_1[0xc];
    lStack_90 = param_1[0xb];
    lStack_350 = lStack_3c0;
    uStack_348 = lStack_3b8;
    lStack_340 = lStack_3b0;
    lStack_338 = lStack_3a8;
    lStack_330 = lStack_3a0;
    lStack_328 = lStack_398;
    lStack_320 = lStack_390;
    lStack_318 = lStack_388;
    lStack_310 = lStack_380;
    lStack_308 = lStack_378;
    lStack_300 = lStack_370;
    lStack_2f8 = lStack_368;
    lStack_2f0 = lStack_360;
    lStack_2e8 = lStack_358;
    FUN_1035f8fd4(&lStack_120,auStack_430);
    FUN_1035f8fd4(&lStack_190,auStack_430);
    plVar2 = &lStack_b0;
    FUN_103646638(plVar2,&lStack_350);
    FUN_103643604(&lStack_3c0,0x112f73200,&UNK_10dbe5440);
    FUN_103643604(&lStack_270,0x112f73200,&UNK_10dbe5440);
    if (((ulong)plVar2 & 1) != 0) goto LAB_103645068;
  }
  else if (uStack_2d8 >> 0x3c < 0xf) {
LAB_103644f1c:
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    lStack_340 = lStack_260;
    lStack_338 = lStack_258;
    lStack_330 = lStack_250;
    lStack_328 = lStack_248;
    lStack_320 = lStack_240;
    lStack_318 = lStack_238;
    lStack_310 = lStack_230;
    lStack_308 = lStack_228;
    lStack_300 = lStack_220;
    lStack_2f8 = lStack_218;
    lStack_2f0 = lStack_210;
    lStack_2e8 = lStack_208;
    FUN_1035f8fd4(&lStack_120,&lStack_b0);
    FUN_1035f8fd4(&lStack_190,&lStack_b0);
    FUN_103643604(&lStack_350,0x112f7d130,&UNK_10dbe5a80);
  }
  else {
    lStack_318 = param_1[0xe];
    lStack_320 = param_1[0xd];
    lStack_308 = param_1[0x10];
    lStack_310 = param_1[0xf];
    lStack_2f8 = param_1[0x12];
    lStack_300 = param_1[0x11];
    lStack_2e8 = param_1[0x14];
    lStack_2f0 = param_1[0x13];
    uStack_348 = param_1[8];
    lStack_350 = param_1[7];
    lStack_338 = param_1[10];
    lStack_340 = param_1[9];
    lStack_328 = param_1[0xc];
    lStack_330 = param_1[0xb];
    FUN_1035f8fd4(&lStack_120,&lStack_b0);
    FUN_1035f8fd4(&lStack_190,&lStack_b0);
    FUN_103643604(&lStack_350,0x112f73200,&UNK_10dbe5440);
LAB_103645068:
    uVar3 = param_1[3];
    func_0x00010364369c(uVar3,(char)param_1[4],param_2[3],(char)param_2[4]);
    if ((uVar3 & 1) != 0) {
      lVar4 = param_1[5];
      func_0x000100e25fcc(lVar4,param_1[6],param_2[5],param_2[6]);
      uVar1 = (uint)lVar4;
      goto LAB_10364509c;
    }
  }
  uVar1 = 0;
LAB_10364509c:
  return uVar1 & 1;
}



/* Entry: 1036450b8; end: 1036450f7;  */

void FUN_1036450b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f815f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf16a8;
  func_0x000107c61520(&UNK_10dbf16a8,&UNK_110674828);
  puRam0000000112f815f8 = puVar1;
  return;
}



/* Entry: 1036450f8; end: 10364510b;  */

void FUN_1036450f8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10364510c();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10364514c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 10364510c; end: 1036451b7;  */

void FUN_10364510c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81610 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf13f8;
  func_0x000107c61520(&UNK_10dbf13f8,&UNK_1106748d0);
  puRam0000000112f81610 = puVar1;
  return;
}



/* Entry: 1036451b8; end: 1036451bb;  */

void FUN_1036451b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1438;
  func_0x000107c61520(&UNK_10dbf1438,&UNK_1106748d0);
  puRam0000000112f81630 = puVar1;
  return;
}



/* Entry: 1036451bc; end: 1036451fb;  */

void FUN_1036451bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81630 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1438;
  func_0x000107c61520(&UNK_10dbf1438,&UNK_1106748d0);
  puRam0000000112f81630 = puVar1;
  return;
}



/* Entry: 1036451fc; end: 10364520f;  */

void FUN_1036451fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103645210();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103645250)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103645210; end: 1036452bb;  */

void FUN_103645210(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81638 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf14f8;
  func_0x000107c61520(&UNK_10dbf14f8,&UNK_110674960);
  puRam0000000112f81638 = puVar1;
  return;
}



/* Entry: 1036452bc; end: 1036452ff;  */

void FUN_1036452bc(long *param_1,undefined8 param_2,undefined8 param_3)

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



/* Entry: 103645300; end: 103645303;  */

void FUN_103645300(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1538;
  func_0x000107c61520(&UNK_10dbf1538,&UNK_110674960);
  puRam0000000112f81658 = puVar1;
  return;
}



/* Entry: 103645304; end: 103645343;  */

void FUN_103645304(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81658 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1538;
  func_0x000107c61520(&UNK_10dbf1538,&UNK_110674960);
  puRam0000000112f81658 = puVar1;
  return;
}



/* Entry: 103645344; end: 103645367;  */

void FUN_103645344(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103645368();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103645368; end: 1036453a7;  */

void FUN_103645368(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf15a8;
  func_0x000107c61520(&UNK_10dbf15a8,&UNK_1106747a8);
  puRam0000000112f81660 = puVar1;
  return;
}



/* Entry: 1036453a8; end: 1036453bf;  */

void FUN_1036453a8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103644cb0)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x1035e0ff8)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036453c0; end: 1036453ff;  */

void FUN_1036453c0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81668 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1610;
  func_0x000107c61520(&UNK_10dbf1610,&UNK_1106747a8);
  puRam0000000112f81668 = puVar1;
  return;
}



/* Entry: 103645400; end: 103645423;  */

void FUN_103645400(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103645424();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103645424; end: 103645463;  */

void FUN_103645424(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81670 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf1680;
  func_0x000107c61520(&UNK_10dbf1680,&UNK_110674828);
  puRam0000000112f81670 = puVar1;
  return;
}



/* Entry: 103645464; end: 103645477;  */

void FUN_103645464(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036450b8();
  *(long *)(param_1 + 8) = lVar1;
  FUN_103644c70();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103645478; end: 1036454a7;  */

void FUN_103645478(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036454a8; end: 1036454ab;  */

void FUN_1036454a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf16e8;
  func_0x000107c61520(&UNK_10dbf16e8,&UNK_110674828);
  puRam0000000112f81678 = puVar1;
  return;
}



/* Entry: 1036454ac; end: 1036454eb;  */

void FUN_1036454ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81678 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf16e8;
  func_0x000107c61520(&UNK_10dbf16e8,&UNK_110674828);
  puRam0000000112f81678 = puVar1;
  return;
}



/* Entry: 1036454ec; end: 103645513;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1036454ec(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  func_0x000107c6142c(*param_1);
  uVar1 = param_1[1];
  uVar2 = (uint)((ulong)param_1[2] >> 0x3e);
  if (uVar2 == 1) {
    uVar1 = param_1[2] & 0x3fffffffffffffff;
  }
  else if (uVar2 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 103645514; end: 1036455bb;  */

undefined8 * FUN_103645514(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 1036455bc; end: 1036455ff;  */

undefined8 * FUN_1036455bc(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 103645600; end: 103645697;  */

int FUN_103645600(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103645698; end: 10364576b;  */

long FUN_103645698(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10364576c; end: 103645db3;  */

undefined8 * FUN_10364576c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar3 = param_2[5];
  uVar1 = param_2[6];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[5] = uVar3;
  param_1[6] = uVar1;
  uVar2 = param_2[8];
  if (uVar2 >> 0x3c < 0xf) {
    uVar3 = param_2[7];
    func_0x00010006c00c(uVar3,uVar2);
    param_1[7] = uVar3;
    param_1[8] = uVar2;
    uVar2 = param_2[0xb];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
      uVar3 = param_2[10];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[10] = uVar3;
      param_1[0xb] = uVar2;
    }
    else {
      uVar3 = param_2[9];
      param_1[10] = param_2[10];
      param_1[9] = uVar3;
      param_1[0xb] = param_2[0xb];
    }
    uVar2 = param_2[0xe];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
      uVar3 = param_2[0xd];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0xd] = uVar3;
      param_1[0xe] = uVar2;
    }
    else {
      uVar3 = param_2[0xc];
      param_1[0xd] = param_2[0xd];
      param_1[0xc] = uVar3;
      param_1[0xe] = param_2[0xe];
    }
    uVar2 = param_2[0x11];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0xf);
      uVar3 = param_2[0x10];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x10] = uVar3;
      param_1[0x11] = uVar2;
    }
    else {
      uVar3 = param_2[0xf];
      param_1[0x10] = param_2[0x10];
      param_1[0xf] = uVar3;
      param_1[0x11] = param_2[0x11];
    }
    uVar2 = param_2[0x14];
    if (uVar2 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar3 = param_2[0x13];
      func_0x00010006c00c(uVar3,uVar2);
      param_1[0x13] = uVar3;
      param_1[0x14] = uVar2;
    }
    else {
      uVar3 = param_2[0x12];
      param_1[0x13] = param_2[0x13];
      param_1[0x12] = uVar3;
      param_1[0x14] = param_2[0x14];
    }
  }
  else {
    uVar3 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar3;
    uVar3 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar3;
    uVar3 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar3;
    uVar3 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar3;
    uVar3 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar3;
    uVar3 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar3;
    uVar3 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar3;
  }
  return param_1;
}



/* Entry: 103645db4; end: 103645fcf;  */

undefined8 * FUN_103645db4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_1[5];
  uVar2 = param_1[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  func_0x00010006c090(uVar1,uVar2);
  if (0xe < (ulong)param_1[8] >> 0x3c) {
LAB_103645e24:
    uVar1 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar1;
    uVar1 = param_2[0xf];
    param_1[0x10] = param_2[0x10];
    param_1[0xf] = uVar1;
    uVar1 = param_2[0x11];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar1;
    uVar1 = param_2[0x13];
    param_1[0x14] = param_2[0x14];
    param_1[0x13] = uVar1;
    uVar1 = param_2[7];
    param_1[8] = param_2[8];
    param_1[7] = uVar1;
    uVar1 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar1;
    uVar1 = param_2[0xb];
    param_1[0xc] = param_2[0xc];
    param_1[0xb] = uVar1;
    return param_1;
  }
  uVar3 = param_2[8];
  if (0xe < uVar3 >> 0x3c) {
    FUN_1035ecb74(param_1 + 7);
    goto LAB_103645e24;
  }
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  param_1[8] = uVar3;
  func_0x00010006c090(uVar1);
  if ((ulong)param_1[0xb] >> 0x3c < 0xf) {
    uVar3 = param_2[0xb];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 9);
      goto LAB_103645ea4;
    }
    *(undefined4 *)(param_1 + 9) = *(undefined4 *)(param_2 + 9);
    uVar1 = param_1[10];
    param_1[10] = param_2[10];
    param_1[0xb] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103645ea4:
    uVar1 = param_2[9];
    param_1[10] = param_2[10];
    param_1[9] = uVar1;
    param_1[0xb] = param_2[0xb];
  }
  if ((ulong)param_1[0xe] >> 0x3c < 0xf) {
    uVar3 = param_2[0xe];
    if (0xe < uVar3 >> 0x3c) {
      func_0x000101599dcc(param_1 + 0xc);
      goto LAB_103645ef8;
    }
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
    uVar1 = param_1[0xd];
    param_1[0xd] = param_2[0xd];
    param_1[0xe] = uVar3;
    func_0x00010006c090(uVar1);
  }
  else {
LAB_103645ef8:
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
      goto LAB_103645f78;
    }
    func_0x000101599dcc(param_1 + 0xf);
  }
  uVar1 = param_2[0xf];
  param_1[0x10] = param_2[0x10];
  param_1[0xf] = uVar1;
  param_1[0x11] = param_2[0x11];
LAB_103645f78:
  if ((ulong)param_1[0x14] >> 0x3c < 0xf) {
    uVar3 = param_2[0x14];
    if (uVar3 >> 0x3c < 0xf) {
      *(undefined4 *)(param_1 + 0x12) = *(undefined4 *)(param_2 + 0x12);
      uVar1 = param_1[0x13];
      param_1[0x13] = param_2[0x13];
      param_1[0x14] = uVar3;
      func_0x00010006c090(uVar1);
      return param_1;
    }
    func_0x000101599dcc(param_1 + 0x12);
  }
  uVar1 = param_2[0x12];
  param_1[0x13] = param_2[0x13];
  param_1[0x12] = uVar1;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



/* Entry: 103645fd0; end: 1036460d3;  */

int FUN_103645fd0(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1036460d4; end: 103646153;  */

void FUN_1036460d4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f81688 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf1654;
  func_0x000107c61520(&DAT_10dbf1654,&UNK_110674828);
  puRam0000000112f81688 = puVar1;
  return;
}



/* Entry: 103646154; end: 1036461b3;  */

undefined8 FUN_103646154(undefined8 param_1,undefined8 param_2)

{
  FUN_10364576c(param_2,param_1,&UNK_110674828);
  return param_2;
}



/* Entry: 1036461b4; end: 103646213;  */

void FUN_1036461b4(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 103646214; end: 10364625b;  */

void FUN_103646214(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf1ab0,0x43,2);
  uRam000000011380af58 = uStack_38;
  uRam000000011380af50 = uStack_40;
  uRam000000011380af68 = uStack_28;
  uRam000000011380af60 = uStack_30;
  uRam000000011380af78 = uStack_18;
  uRam000000011380af70 = uStack_20;
  return;
}



/* Entry: 10364625c; end: 103646373;  */

void FUN_10364625c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 < 3) {
        if (lVar1 == 1) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_1036462d0;
        }
        if (lVar1 == 2) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_1036462d0;
        }
      }
      else {
        if (lVar1 == 3) {
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x40;
        }
        else {
          if (lVar1 != 4) goto LAB_1036462e8;
          pcVar4 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x58;
        }
LAB_1036462d0:
        (*pcVar4)(lVar2,&UNK_110790980,lVar1,param_2,param_3);
      }
LAB_1036462e8:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 103646374; end: 103646417;  */

void FUN_103646374(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103646418();
  if (unaff_x21 == 0) {
    FUN_1036464a0();
    FUN_103646528();
    FUN_1036465b0();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103646418; end: 10364649f;  */

void FUN_103646418(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1036464a0; end: 103646527;  */

void FUN_1036464a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103646528; end: 1036465af;  */

void FUN_103646528(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 1036465b0; end: 103646637;  */

void FUN_1036465b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103646638; end: 10364668b;  */

uint FUN_103646638(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_188 [3];
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
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103646b00;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103646b6c;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_103646e94:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_103646b6c:
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103646be4;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_103646e94;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103646eb4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103646be4:
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103646de0;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar8 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar8;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103646cd8;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_103646e94;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103646eb4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103646cd8:
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103646de0;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar8 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar8;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103646dcc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          goto LAB_103646e94;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103646eb4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103646dcc:
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103646de0;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_103646ebc;
    }
LAB_103646b00:
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_103646de0:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_103646eb4:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_103646ebc:
  return uVar1 & 1;
}



/* Entry: 10364668c; end: 1036466bb;  */

undefined1  [16] FUN_10364668c(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1036466bc; end: 1036466ef;  */

void FUN_1036466bc(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1036466f0; end: 103646703;  */

undefined8 FUN_1036466f0(void)

{
  return 0x103646700;
}



/* Entry: 103646704; end: 103646717;  */

void FUN_103646704(void)

{
  FUN_10364625c();
  return;
}



/* Entry: 103646718; end: 10364675f;  */

void FUN_103646718(void)

{
  FUN_103646374();
  return;
}



/* Entry: 103646760; end: 103646763;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103646760(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103646764; end: 10364679b;  */

uint FUN_103646764(long param_1,long param_2)

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
  FUN_10364770c();
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



/* Entry: 10364679c; end: 103646803;  */

uint FUN_10364679c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *unaff_x20;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_38 = param_1[9];
  uStack_40 = param_1[8];
  uStack_28 = param_1[0xb];
  uStack_30 = param_1[10];
  uStack_18 = param_1[0xd];
  uStack_20 = param_1[0xc];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_e8 = unaff_x20[1];
  uStack_f0 = *unaff_x20;
  uStack_d8 = unaff_x20[3];
  uStack_e0 = unaff_x20[2];
  uStack_c8 = unaff_x20[5];
  uStack_d0 = unaff_x20[4];
  uStack_b8 = unaff_x20[7];
  uStack_c0 = unaff_x20[6];
  uStack_98 = unaff_x20[0xb];
  uStack_a0 = unaff_x20[10];
  uStack_88 = unaff_x20[0xd];
  uStack_90 = unaff_x20[0xc];
  uStack_a8 = unaff_x20[9];
  uStack_b0 = unaff_x20[8];
  FUN_103646a70(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103646804; end: 1036468a3;  */

/* WARNING: Possible PIC construction at 0x000103646850: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103646860: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103646854) */
/* WARNING: Removing unreachable block (ram,0x000103646864) */

void FUN_103646804(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f816a0 != -1) {
    func_0x000107c61568(0x112f816a0,FUN_103646214);
  }
  uVar5 = uRam000000011380af78;
  uVar4 = uRam000000011380af70;
  uVar3 = uRam000000011380af68;
  uVar2 = uRam000000011380af60;
  uVar1 = uRam000000011380af58;
  *param_1 = uRam000000011380af50;
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



/* Entry: 1036468a4; end: 1036468df;  */

void FUN_1036468a4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f816c0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f816c0,&UNK_10dbf1aa0);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036468e0; end: 103646a0b;  */

void FUN_1036468e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_e8 [72];
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
  
  uStack_58 = unaff_x20[9];
  uStack_60 = unaff_x20[8];
  uStack_48 = unaff_x20[0xb];
  uStack_50 = unaff_x20[10];
  uStack_38 = unaff_x20[0xd];
  uStack_40 = unaff_x20[0xc];
  uStack_98 = unaff_x20[1];
  uStack_a0 = *unaff_x20;
  uStack_88 = unaff_x20[3];
  uStack_90 = unaff_x20[2];
  uStack_78 = unaff_x20[5];
  uStack_80 = unaff_x20[4];
  uStack_68 = unaff_x20[7];
  uStack_70 = unaff_x20[6];
  func_0x000107c6068c(auStack_e8,0);
  func_0x000107c5fa50(auStack_e8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 103646a0c; end: 103646a6f;  */

uint FUN_103646a0c(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  uStack_98 = param_1[0xb];
  uStack_a0 = param_1[10];
  uStack_88 = param_1[0xd];
  uStack_90 = param_1[0xc];
  uStack_e8 = param_1[1];
  uStack_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  uStack_d0 = param_1[4];
  uStack_b8 = param_1[7];
  uStack_c0 = param_1[6];
  uStack_78 = param_2[1];
  uStack_80 = *param_2;
  uStack_68 = param_2[3];
  uStack_70 = param_2[2];
  uStack_58 = param_2[5];
  uStack_60 = param_2[4];
  uStack_48 = param_2[7];
  uStack_50 = param_2[6];
  uStack_28 = param_2[0xb];
  uStack_30 = param_2[10];
  uStack_18 = param_2[0xd];
  uStack_20 = param_2[0xc];
  uStack_38 = param_2[9];
  uStack_40 = param_2[8];
  FUN_103646a70(&uStack_f0,&uStack_80);
  return uVar1 & 1;
}



/* Entry: 103646a70; end: 103646edf;  */

uint FUN_103646a70(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 auStack_188 [3];
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
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_b0 = uVar10;
  uStack_a8 = uVar12;
  uStack_a0 = uVar8;
  uStack_90 = uVar9;
  uStack_88 = uVar11;
  uStack_80 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_103646b00;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
      uVar2 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar2 & 1) != 0) goto LAB_103646b6c;
    }
    else {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      puVar3 = &uStack_b0;
      puVar4 = &uStack_d0;
LAB_103646e94:
      func_0x00010161ef18(puVar3,puVar4);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
  }
  else {
    if (0xe < uVar8 >> 0x3c) {
      func_0x00010161ef18(&uStack_90,&uStack_d0);
      func_0x00010161ef18(&uStack_b0,&uStack_d0);
LAB_103646b6c:
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[6];
      uVar9 = param_1[5];
      uVar5 = param_1[7];
      uVar12 = param_2[6];
      uVar10 = param_2[5];
      uVar8 = param_2[7];
      uStack_f0 = uVar10;
      uStack_e8 = uVar12;
      uStack_e0 = uVar8;
      uStack_d0 = uVar9;
      uStack_c8 = uVar11;
      uStack_c0 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103646be4;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          goto LAB_103646e94;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103646eb4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103646be4:
          func_0x00010161ef18(&uStack_d0,&uStack_110);
          puVar3 = &uStack_f0;
          puVar4 = &uStack_110;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103646de0;
        }
        func_0x00010161ef18(&uStack_d0,&uStack_110);
        func_0x00010161ef18(&uStack_f0,&uStack_110);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[9];
      uVar9 = param_1[8];
      uVar5 = param_1[10];
      uVar12 = param_2[9];
      uVar10 = param_2[8];
      uVar8 = param_2[10];
      uStack_130 = uVar10;
      uStack_128 = uVar12;
      uStack_120 = uVar8;
      uStack_110 = uVar9;
      uStack_108 = uVar11;
      uStack_100 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103646cd8;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          goto LAB_103646e94;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103646eb4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103646cd8:
          func_0x00010161ef18(&uStack_110,&uStack_150);
          puVar3 = &uStack_130;
          puVar4 = &uStack_150;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103646de0;
        }
        func_0x00010161ef18(&uStack_110,&uStack_150);
        func_0x00010161ef18(&uStack_130,&uStack_150);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar11 = param_1[0xc];
      uVar9 = param_1[0xb];
      uVar5 = param_1[0xd];
      uVar12 = param_2[0xc];
      uVar10 = param_2[0xb];
      uVar8 = param_2[0xd];
      uStack_170 = uVar10;
      uStack_168 = uVar12;
      uStack_160 = uVar8;
      uStack_150 = uVar9;
      uStack_148 = uVar11;
      uStack_140 = uVar5;
      if (uVar5 >> 0x3c < 0xf) {
        if (0xe < uVar8 >> 0x3c) goto LAB_103646dcc;
        if ((float)uVar9 != (float)uVar10) {
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          goto LAB_103646e94;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
        uVar2 = uVar11;
        func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
        func_0x000101553ccc(uVar10,uVar12,uVar8);
        if ((uVar2 & 1) == 0) goto LAB_103646eb4;
      }
      else {
        if (uVar8 >> 0x3c < 0xf) {
LAB_103646dcc:
          func_0x00010161ef18(&uStack_150,auStack_188);
          puVar3 = &uStack_170;
          puVar4 = auStack_188;
          uVar2 = uVar5;
          uVar6 = uVar11;
          uVar7 = uVar9;
          uVar5 = uVar8;
          uVar11 = uVar12;
          uVar9 = uVar10;
          goto LAB_103646de0;
        }
        func_0x00010161ef18(&uStack_150,auStack_188);
        func_0x00010161ef18(&uStack_170,auStack_188);
      }
      func_0x000101553ccc(uVar9,uVar11,uVar5);
      uVar9 = *param_1;
      func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
      uVar1 = (uint)uVar9;
      goto LAB_103646ebc;
    }
LAB_103646b00:
    func_0x00010161ef18(&uStack_90,&uStack_d0);
    puVar3 = &uStack_b0;
    puVar4 = &uStack_d0;
    uVar2 = uVar5;
    uVar6 = uVar11;
    uVar7 = uVar9;
    uVar5 = uVar8;
    uVar11 = uVar12;
    uVar9 = uVar10;
LAB_103646de0:
    func_0x00010161ef18(puVar3,puVar4);
    func_0x000101553ccc(uVar7,uVar6,uVar2);
  }
LAB_103646eb4:
  func_0x000101553ccc(uVar9,uVar11,uVar5);
  uVar1 = 0;
LAB_103646ebc:
  return uVar1 & 1;
}



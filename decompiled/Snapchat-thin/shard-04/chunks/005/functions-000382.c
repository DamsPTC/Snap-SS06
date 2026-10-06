/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103663bf0; end: 103663c97;  */

void FUN_103663bf0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 800;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x330);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x328);
    uStack_70 = *(undefined8 *)(param_1 + 800);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar2)(&uStack_70,0x21,&UNK_110790a00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663c98; end: 103663d43;  */

void FUN_103663c98(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  ulong uStack_60;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_1 + 0x338);
  puVar2 = puVar1;
  func_0x000107c61428(puVar1,auStack_58,0,0);
  uStack_60 = *(ulong *)(param_1 + 0x348);
  if (uStack_60 >> 0x3c < 0xf) {
    uStack_68 = *(undefined8 *)(param_1 + 0x340);
    uStack_70 = *puVar1;
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x0001015c5cfc();
    (*pcVar3)(&uStack_70,0x22,&UNK_110790a00,puVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103663d44; end: 103663de7;  */

void FUN_103663d44(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined8 uStack_78;
  long lStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x350;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  lStack_70 = *(long *)(param_1 + 0x358);
  if (lStack_70 != 0) {
    uStack_78 = *(undefined8 *)(param_1 + 0x350);
    uStack_60 = *(undefined8 *)(param_1 + 0x368);
    uStack_68 = *(undefined8 *)(param_1 + 0x360);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x000101568c04();
    (*pcVar2)(&uStack_78,0x23,&UNK_110790c80,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663de8; end: 103663e93;  */

void FUN_103663de8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  byte abStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  
  lVar1 = param_1 + 0x370;
  func_0x000107c61428(lVar1,auStack_58,0,0);
  if (*(byte *)(param_1 + 0x370) != 2) {
    abStack_70[0] = *(byte *)(param_1 + 0x370) & 1;
    uStack_60 = *(undefined8 *)(param_1 + 0x380);
    uStack_68 = *(undefined8 *)(param_1 + 0x378);
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x0001015fdfec();
    (*pcVar2)(abStack_70,0x24,&UNK_110790c00,lVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103663e94; end: 103663f43;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103663e94(byte *param_1,byte *param_2,ulong param_3,long param_4,ulong param_5,
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
    FUN_103663f44(param_3,param_6);
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



/* Entry: 103663f44; end: 103666313;  */

undefined8 FUN_103663f44(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_750 [24];
  undefined1 auStack_738 [24];
  undefined1 auStack_720 [24];
  undefined1 auStack_708 [24];
  undefined1 auStack_6f0 [24];
  undefined1 auStack_6d8 [24];
  undefined1 auStack_6c0 [24];
  undefined1 auStack_6a8 [24];
  undefined1 auStack_690 [24];
  undefined1 auStack_678 [24];
  undefined1 auStack_660 [24];
  undefined1 auStack_648 [24];
  undefined1 auStack_630 [24];
  undefined1 auStack_618 [24];
  undefined1 auStack_600 [24];
  undefined1 auStack_5e8 [24];
  undefined1 auStack_5d0 [24];
  undefined1 auStack_5b8 [24];
  undefined1 auStack_5a0 [24];
  undefined1 auStack_588 [24];
  undefined1 auStack_570 [24];
  undefined1 auStack_558 [24];
  undefined1 auStack_540 [24];
  undefined1 auStack_528 [24];
  undefined1 auStack_510 [24];
  undefined1 auStack_4f8 [24];
  undefined1 auStack_4e0 [24];
  undefined1 auStack_4c8 [24];
  undefined1 auStack_4b0 [24];
  undefined1 auStack_498 [24];
  undefined1 auStack_480 [24];
  undefined1 auStack_468 [24];
  undefined1 auStack_450 [24];
  undefined1 auStack_438 [24];
  undefined1 auStack_420 [24];
  undefined1 auStack_408 [24];
  undefined1 auStack_3f0 [24];
  undefined1 auStack_3d8 [24];
  undefined1 auStack_3c0 [24];
  undefined1 auStack_3a8 [24];
  undefined1 auStack_390 [24];
  undefined1 auStack_378 [24];
  undefined1 auStack_360 [24];
  undefined1 auStack_348 [24];
  undefined1 auStack_330 [24];
  undefined1 auStack_318 [24];
  undefined1 auStack_300 [24];
  undefined1 auStack_2e8 [24];
  undefined1 auStack_2d0 [24];
  undefined1 auStack_2b8 [24];
  undefined1 auStack_2a0 [24];
  ulong uStack_288;
  long lStack_280;
  ulong uStack_278;
  undefined8 uStack_270;
  ulong uStack_268;
  long lStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
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
  
  func_0x000107c61428(param_1 + 0x10,auStack_80,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_98,0,0);
  lVar7 = *(long *)(param_1 + 0x10);
  uVar5 = *(ulong *)(param_1 + 0x18);
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar12 = *(long *)(param_2 + 0x10);
  uVar10 = *(ulong *)(param_2 + 0x18);
  uVar8 = *(ulong *)(param_2 + 0x20);
  uVar11 = uVar2;
  uVar1 = uVar5;
  lVar6 = lVar7;
  if (uVar2 >> 0x3c < 0xf) {
    if (uVar8 >> 0x3c < 0xf) {
      func_0x000100d57520(lVar7,uVar5,uVar2);
      if (lVar7 == lVar12) {
        func_0x000100d57520(lVar7,uVar10,uVar8);
        uVar11 = uVar5;
        func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
        func_0x000100d5753c(lVar7,uVar10,uVar8);
        if ((uVar11 & 1) == 0) goto LAB_103666104;
        goto LAB_103663fdc;
      }
LAB_1036660d8:
      func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036660e8:
      func_0x000100d5753c(lVar12,uVar10,uVar8);
      goto LAB_103666104;
    }
  }
  else if (0xe < uVar8 >> 0x3c) {
    func_0x000100d57520(lVar7,uVar5,uVar2);
    func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103663fdc:
    func_0x000100d5753c(lVar7,uVar5,uVar2);
    func_0x000107c61428(param_1 + 0x28,auStack_b0,0,0);
    func_0x000107c61428(param_2 + 0x28,auStack_c8,0,0);
    lVar7 = *(long *)(param_1 + 0x28);
    uVar5 = *(ulong *)(param_1 + 0x30);
    uVar2 = *(ulong *)(param_1 + 0x38);
    lVar12 = *(long *)(param_2 + 0x28);
    uVar10 = *(ulong *)(param_2 + 0x30);
    uVar8 = *(ulong *)(param_2 + 0x38);
    uVar11 = uVar2;
    uVar1 = uVar5;
    lVar6 = lVar7;
    if (uVar2 >> 0x3c < 0xf) {
      if (uVar8 >> 0x3c < 0xf) {
        func_0x000100d57520(lVar7,uVar5,uVar2);
        if (lVar7 != lVar12) goto LAB_1036660d8;
        func_0x000100d57520(lVar7,uVar10,uVar8);
        uVar11 = uVar5;
        func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
        func_0x000100d5753c(lVar7,uVar10,uVar8);
        if ((uVar11 & 1) == 0) goto LAB_103666104;
        goto LAB_10366405c;
      }
    }
    else if (0xe < uVar8 >> 0x3c) {
      func_0x000100d57520(lVar7,uVar5,uVar2);
      func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366405c:
      func_0x000100d5753c(lVar7,uVar5,uVar2);
      func_0x000107c61428(param_1 + 0x40,auStack_e0,0,0);
      func_0x000107c61428(param_2 + 0x40,auStack_f8,0,0);
      lVar7 = *(long *)(param_1 + 0x40);
      uVar5 = *(ulong *)(param_1 + 0x48);
      uVar2 = *(ulong *)(param_1 + 0x50);
      lVar12 = *(long *)(param_2 + 0x40);
      uVar10 = *(ulong *)(param_2 + 0x48);
      uVar8 = *(ulong *)(param_2 + 0x50);
      uVar11 = uVar2;
      uVar1 = uVar5;
      lVar6 = lVar7;
      if (uVar2 >> 0x3c < 0xf) {
        if (uVar8 >> 0x3c < 0xf) {
          func_0x000100d57520(lVar7,uVar5,uVar2);
          if (lVar7 != lVar12) goto LAB_1036660d8;
          func_0x000100d57520(lVar7,uVar10,uVar8);
          uVar11 = uVar5;
          func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
          func_0x000100d5753c(lVar7,uVar10,uVar8);
          if ((uVar11 & 1) == 0) goto LAB_103666104;
          goto LAB_1036640dc;
        }
      }
      else if (0xe < uVar8 >> 0x3c) {
        func_0x000100d57520(lVar7,uVar5,uVar2);
        func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036640dc:
        func_0x000100d5753c(lVar7,uVar5,uVar2);
        func_0x000107c61428(param_1 + 0x58,auStack_110,0,0);
        func_0x000107c61428(param_2 + 0x58,auStack_128,0,0);
        lVar7 = *(long *)(param_1 + 0x58);
        uVar5 = *(ulong *)(param_1 + 0x60);
        uVar2 = *(ulong *)(param_1 + 0x68);
        lVar12 = *(long *)(param_2 + 0x58);
        uVar10 = *(ulong *)(param_2 + 0x60);
        uVar8 = *(ulong *)(param_2 + 0x68);
        uVar11 = uVar2;
        uVar1 = uVar5;
        lVar6 = lVar7;
        if (uVar2 >> 0x3c < 0xf) {
          if (uVar8 >> 0x3c < 0xf) {
            func_0x000100d57520(lVar7,uVar5,uVar2);
            if (lVar7 != lVar12) goto LAB_1036660d8;
            func_0x000100d57520(lVar7,uVar10,uVar8);
            uVar11 = uVar5;
            func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
            func_0x000100d5753c(lVar7,uVar10,uVar8);
            if ((uVar11 & 1) == 0) goto LAB_103666104;
            goto LAB_10366415c;
          }
        }
        else if (0xe < uVar8 >> 0x3c) {
          func_0x000100d57520(lVar7,uVar5,uVar2);
          func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366415c:
          func_0x000100d5753c(lVar7,uVar5,uVar2);
          func_0x000107c61428(param_1 + 0x70,auStack_140,0,0);
          func_0x000107c61428(param_2 + 0x70,auStack_158,0,0);
          lVar7 = *(long *)(param_1 + 0x70);
          uVar5 = *(ulong *)(param_1 + 0x78);
          uVar2 = *(ulong *)(param_1 + 0x80);
          lVar12 = *(long *)(param_2 + 0x70);
          uVar10 = *(ulong *)(param_2 + 0x78);
          uVar8 = *(ulong *)(param_2 + 0x80);
          uVar11 = uVar2;
          uVar1 = uVar5;
          lVar6 = lVar7;
          if (uVar2 >> 0x3c < 0xf) {
            if (uVar8 >> 0x3c < 0xf) {
              func_0x000100d57520(lVar7,uVar5,uVar2);
              func_0x000100d57520(lVar12,uVar10,uVar8);
              if ((int)lVar7 == (int)lVar12) {
                uVar11 = uVar5;
                func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                func_0x000100d5753c(lVar12,uVar10,uVar8);
                if ((uVar11 & 1) == 0) goto LAB_103666104;
                goto LAB_1036641dc;
              }
              goto LAB_1036660e8;
            }
          }
          else if (0xe < uVar8 >> 0x3c) {
            func_0x000100d57520(lVar7,uVar5,uVar2);
            func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036641dc:
            func_0x000100d5753c(lVar7,uVar5,uVar2);
            func_0x000107c61428(param_1 + 0x88,auStack_170,0,0);
            func_0x000107c61428(param_2 + 0x88,auStack_188,0,0);
            uVar5 = *(ulong *)(param_1 + 0x88);
            uVar8 = *(ulong *)(param_1 + 0x90);
            uVar3 = *(undefined8 *)(param_1 + 0x98);
            uVar10 = *(ulong *)(param_2 + 0x88);
            uVar11 = *(ulong *)(param_2 + 0x90);
            uVar9 = *(undefined8 *)(param_2 + 0x98);
            uVar4 = uVar3;
            uVar1 = uVar8;
            uVar2 = uVar5;
            if ((uVar5 & 0xff) == 2) {
              if ((uVar10 & 0xff) == 2) {
                func_0x000101541464(uVar5,uVar8,uVar3);
                func_0x000101541464(uVar10,uVar11,uVar9);
LAB_10366425c:
                func_0x000101556278(uVar5,uVar8,uVar3);
                func_0x000107c61428(param_1 + 0xa0,auStack_1a0,0,0);
                func_0x000107c61428(param_2 + 0xa0,auStack_1b8,0,0);
                lVar7 = *(long *)(param_1 + 0xa0);
                uVar5 = *(ulong *)(param_1 + 0xa8);
                uVar2 = *(ulong *)(param_1 + 0xb0);
                lVar12 = *(long *)(param_2 + 0xa0);
                uVar10 = *(ulong *)(param_2 + 0xa8);
                uVar8 = *(ulong *)(param_2 + 0xb0);
                uVar11 = uVar2;
                uVar1 = uVar5;
                lVar6 = lVar7;
                if (uVar2 >> 0x3c < 0xf) {
                  if (uVar8 >> 0x3c < 0xf) {
                    func_0x000100d57520(lVar7,uVar5,uVar2);
                    func_0x000100d57520(lVar12,uVar10,uVar8);
                    if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                    uVar11 = uVar5;
                    func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                    func_0x000100d5753c(lVar12,uVar10,uVar8);
                    if ((uVar11 & 1) == 0) goto LAB_103666104;
                    goto LAB_1036642dc;
                  }
                }
                else if (0xe < uVar8 >> 0x3c) {
                  func_0x000100d57520(lVar7,uVar5,uVar2);
                  func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036642dc:
                  func_0x000100d5753c(lVar7,uVar5,uVar2);
                  func_0x000107c61428(param_1 + 0xb8,auStack_1d0,0,0);
                  func_0x000107c61428(param_2 + 0xb8,auStack_1e8,0,0);
                  lVar7 = *(long *)(param_1 + 0xb8);
                  uVar5 = *(ulong *)(param_1 + 0xc0);
                  uVar2 = *(ulong *)(param_1 + 200);
                  lVar12 = *(long *)(param_2 + 0xb8);
                  uVar10 = *(ulong *)(param_2 + 0xc0);
                  uVar8 = *(ulong *)(param_2 + 200);
                  uVar11 = uVar2;
                  uVar1 = uVar5;
                  lVar6 = lVar7;
                  if (uVar2 >> 0x3c < 0xf) {
                    if (uVar8 >> 0x3c < 0xf) {
                      func_0x000100d57520(lVar7,uVar5,uVar2);
                      func_0x000100d57520(lVar12,uVar10,uVar8);
                      if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                      uVar11 = uVar5;
                      func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                      func_0x000100d5753c(lVar12,uVar10,uVar8);
                      if ((uVar11 & 1) == 0) goto LAB_103666104;
                      goto LAB_10366435c;
                    }
                  }
                  else if (0xe < uVar8 >> 0x3c) {
                    func_0x000100d57520(lVar7,uVar5,uVar2);
                    func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366435c:
                    func_0x000100d5753c(lVar7,uVar5,uVar2);
                    func_0x000107c61428(param_1 + 0xd0,auStack_200,0,0);
                    func_0x000107c61428(param_2 + 0xd0,auStack_218,0,0);
                    lVar7 = *(long *)(param_1 + 0xd0);
                    uVar5 = *(ulong *)(param_1 + 0xd8);
                    uVar2 = *(ulong *)(param_1 + 0xe0);
                    lVar12 = *(long *)(param_2 + 0xd0);
                    uVar10 = *(ulong *)(param_2 + 0xd8);
                    uVar8 = *(ulong *)(param_2 + 0xe0);
                    uVar11 = uVar2;
                    uVar1 = uVar5;
                    lVar6 = lVar7;
                    if (uVar2 >> 0x3c < 0xf) {
                      if (uVar8 >> 0x3c < 0xf) {
                        func_0x000100d57520(lVar7,uVar5,uVar2);
                        if (lVar7 != lVar12) goto LAB_1036660d8;
                        func_0x000100d57520(lVar7,uVar10,uVar8);
                        uVar11 = uVar5;
                        func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                        func_0x000100d5753c(lVar7,uVar10,uVar8);
                        if ((uVar11 & 1) == 0) goto LAB_103666104;
                        goto LAB_1036643dc;
                      }
                    }
                    else if (0xe < uVar8 >> 0x3c) {
                      func_0x000100d57520(lVar7,uVar5,uVar2);
                      func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036643dc:
                      func_0x000100d5753c(lVar7,uVar5,uVar2);
                      func_0x000107c61428(param_1 + 0xe8,auStack_230,0,0);
                      func_0x000107c61428(param_2 + 0xe8,auStack_248,0,0);
                      uVar10 = *(ulong *)(param_1 + 0xe8);
                      lVar12 = *(long *)(param_1 + 0xf0);
                      uVar8 = *(ulong *)(param_1 + 0xf8);
                      uVar4 = *(undefined8 *)(param_1 + 0x100);
                      uVar5 = *(ulong *)(param_2 + 0xe8);
                      lVar7 = *(long *)(param_2 + 0xf0);
                      uVar3 = *(undefined8 *)(param_2 + 0xf8);
                      uVar9 = *(undefined8 *)(param_2 + 0x100);
                      if (lVar12 == 0) {
                        if (lVar7 == 0) {
                          func_0x000101597350(uVar10,0,uVar8,uVar4);
                          func_0x000101597350(uVar5,0,uVar3,uVar9);
LAB_1036648e8:
                          func_0x000101597ae4(uVar10,lVar12,uVar8,uVar4);
                          func_0x000107c61428(param_1 + 0x108,auStack_2a0,0,0);
                          func_0x000107c61428(param_2 + 0x108,auStack_2b8,0,0);
                          uVar10 = *(ulong *)(param_1 + 0x108);
                          lVar12 = *(long *)(param_1 + 0x110);
                          uVar8 = *(ulong *)(param_1 + 0x118);
                          uVar4 = *(undefined8 *)(param_1 + 0x120);
                          uVar5 = *(ulong *)(param_2 + 0x108);
                          lVar7 = *(long *)(param_2 + 0x110);
                          uVar3 = *(undefined8 *)(param_2 + 0x118);
                          uVar9 = *(undefined8 *)(param_2 + 0x120);
                          if (lVar12 == 0) {
                            if (lVar7 == 0) {
                              func_0x000101597350(uVar10,0,uVar8,uVar4);
                              func_0x000101597350(uVar5,0,uVar3,uVar9);
                              goto LAB_103664a9c;
                            }
                          }
                          else if (lVar7 != 0) {
                            if (((uVar10 != uVar5) || (lVar12 != lVar7)) &&
                               (uVar11 = uVar10, func_0x000107c605b8(uVar10,lVar12,uVar5,lVar7,0),
                               (uVar11 & 1) == 0)) goto LAB_1036649c8;
                            func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
                            func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                            uVar11 = uVar8;
                            func_0x000100e25fcc(uVar8,uVar4,uVar3,uVar9);
                            func_0x000101597ae4(uVar5,lVar7,uVar3,uVar9);
                            if ((uVar11 & 1) == 0) goto LAB_103664a0c;
LAB_103664a9c:
                            func_0x000101597ae4(uVar10,lVar12,uVar8,uVar4);
                            func_0x000107c61428(param_1 + 0x128,auStack_2d0,0,0);
                            func_0x000107c61428(param_2 + 0x128,auStack_2e8,0,0);
                            lVar7 = *(long *)(param_1 + 0x128);
                            uVar5 = *(ulong *)(param_1 + 0x130);
                            uVar2 = *(ulong *)(param_1 + 0x138);
                            lVar12 = *(long *)(param_2 + 0x128);
                            uVar10 = *(ulong *)(param_2 + 0x130);
                            uVar8 = *(ulong *)(param_2 + 0x138);
                            uVar11 = uVar2;
                            uVar1 = uVar5;
                            lVar6 = lVar7;
                            if (uVar2 >> 0x3c < 0xf) {
                              if (uVar8 >> 0x3c < 0xf) {
                                func_0x000100d57520(lVar7,uVar5,uVar2);
                                func_0x000100d57520(lVar12,uVar10,uVar8);
                                if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                uVar11 = uVar5;
                                func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                func_0x000100d5753c(lVar12,uVar10,uVar8);
                                if ((uVar11 & 1) == 0) goto LAB_103666104;
                                goto LAB_103664b20;
                              }
                            }
                            else if (0xe < uVar8 >> 0x3c) {
                              func_0x000100d57520(lVar7,uVar5,uVar2);
                              func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103664b20:
                              func_0x000100d5753c(lVar7,uVar5,uVar2);
                              func_0x000107c61428(param_1 + 0x140,auStack_300,0,0);
                              func_0x000107c61428(param_2 + 0x140,auStack_318,0,0);
                              lVar7 = *(long *)(param_1 + 0x140);
                              uVar5 = *(ulong *)(param_1 + 0x148);
                              uVar2 = *(ulong *)(param_1 + 0x150);
                              lVar12 = *(long *)(param_2 + 0x140);
                              uVar10 = *(ulong *)(param_2 + 0x148);
                              uVar8 = *(ulong *)(param_2 + 0x150);
                              uVar11 = uVar2;
                              uVar1 = uVar5;
                              lVar6 = lVar7;
                              if (uVar2 >> 0x3c < 0xf) {
                                if (uVar8 >> 0x3c < 0xf) {
                                  func_0x000100d57520(lVar7,uVar5,uVar2);
                                  func_0x000100d57520(lVar12,uVar10,uVar8);
                                  if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                  uVar11 = uVar5;
                                  func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                  func_0x000100d5753c(lVar12,uVar10,uVar8);
                                  if ((uVar11 & 1) == 0) goto LAB_103666104;
                                  goto LAB_103664ba0;
                                }
                              }
                              else if (0xe < uVar8 >> 0x3c) {
                                func_0x000100d57520(lVar7,uVar5,uVar2);
                                func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103664ba0:
                                func_0x000100d5753c(lVar7,uVar5,uVar2);
                                func_0x000107c61428(param_1 + 0x158,auStack_330,0,0);
                                func_0x000107c61428(param_2 + 0x158,auStack_348,0,0);
                                lVar7 = *(long *)(param_1 + 0x158);
                                uVar5 = *(ulong *)(param_1 + 0x160);
                                uVar2 = *(ulong *)(param_1 + 0x168);
                                lVar12 = *(long *)(param_2 + 0x158);
                                uVar10 = *(ulong *)(param_2 + 0x160);
                                uVar8 = *(ulong *)(param_2 + 0x168);
                                uVar11 = uVar2;
                                uVar1 = uVar5;
                                lVar6 = lVar7;
                                if (uVar2 >> 0x3c < 0xf) {
                                  if (uVar8 >> 0x3c < 0xf) {
                                    func_0x000100d57520(lVar7,uVar5,uVar2);
                                    func_0x000100d57520(lVar12,uVar10,uVar8);
                                    if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                    uVar11 = uVar5;
                                    func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                    func_0x000100d5753c(lVar12,uVar10,uVar8);
                                    if ((uVar11 & 1) == 0) goto LAB_103666104;
                                    goto LAB_103664c20;
                                  }
                                }
                                else if (0xe < uVar8 >> 0x3c) {
                                  func_0x000100d57520(lVar7,uVar5,uVar2);
                                  func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103664c20:
                                  func_0x000100d5753c(lVar7,uVar5,uVar2);
                                  func_0x000107c61428(param_1 + 0x170,auStack_360,0,0);
                                  func_0x000107c61428(param_2 + 0x170,auStack_378,0,0);
                                  lVar7 = *(long *)(param_1 + 0x170);
                                  uVar5 = *(ulong *)(param_1 + 0x178);
                                  uVar2 = *(ulong *)(param_1 + 0x180);
                                  lVar12 = *(long *)(param_2 + 0x170);
                                  uVar10 = *(ulong *)(param_2 + 0x178);
                                  uVar8 = *(ulong *)(param_2 + 0x180);
                                  uVar11 = uVar2;
                                  uVar1 = uVar5;
                                  lVar6 = lVar7;
                                  if (uVar2 >> 0x3c < 0xf) {
                                    if (uVar8 >> 0x3c < 0xf) {
                                      func_0x000100d57520(lVar7,uVar5,uVar2);
                                      func_0x000100d57520(lVar12,uVar10,uVar8);
                                      if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                      uVar11 = uVar5;
                                      func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                      func_0x000100d5753c(lVar12,uVar10,uVar8);
                                      if ((uVar11 & 1) == 0) goto LAB_103666104;
                                      goto LAB_103664e28;
                                    }
                                  }
                                  else if (0xe < uVar8 >> 0x3c) {
                                    func_0x000100d57520(lVar7,uVar5,uVar2);
                                    func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103664e28:
                                    func_0x000100d5753c(lVar7,uVar5,uVar2);
                                    func_0x000107c61428(param_1 + 0x188,auStack_390,0,0);
                                    func_0x000107c61428(param_2 + 0x188,auStack_3a8,0,0);
                                    lVar7 = *(long *)(param_1 + 0x188);
                                    uVar5 = *(ulong *)(param_1 + 400);
                                    uVar2 = *(ulong *)(param_1 + 0x198);
                                    lVar12 = *(long *)(param_2 + 0x188);
                                    uVar10 = *(ulong *)(param_2 + 400);
                                    uVar8 = *(ulong *)(param_2 + 0x198);
                                    uVar11 = uVar2;
                                    uVar1 = uVar5;
                                    lVar6 = lVar7;
                                    if (uVar2 >> 0x3c < 0xf) {
                                      if (uVar8 >> 0x3c < 0xf) {
                                        func_0x000100d57520(lVar7,uVar5,uVar2);
                                        func_0x000100d57520(lVar12,uVar10,uVar8);
                                        if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                        uVar11 = uVar5;
                                        func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                        func_0x000100d5753c(lVar12,uVar10,uVar8);
                                        if ((uVar11 & 1) == 0) goto LAB_103666104;
                                        goto LAB_103664ea8;
                                      }
                                    }
                                    else if (0xe < uVar8 >> 0x3c) {
                                      func_0x000100d57520(lVar7,uVar5,uVar2);
                                      func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103664ea8:
                                      func_0x000100d5753c(lVar7,uVar5,uVar2);
                                      func_0x000107c61428(param_1 + 0x1a0,auStack_3c0,0,0);
                                      func_0x000107c61428(param_2 + 0x1a0,auStack_3d8,0,0);
                                      lVar7 = *(long *)(param_1 + 0x1a0);
                                      uVar5 = *(ulong *)(param_1 + 0x1a8);
                                      uVar2 = *(ulong *)(param_1 + 0x1b0);
                                      lVar12 = *(long *)(param_2 + 0x1a0);
                                      uVar10 = *(ulong *)(param_2 + 0x1a8);
                                      uVar8 = *(ulong *)(param_2 + 0x1b0);
                                      uVar11 = uVar2;
                                      uVar1 = uVar5;
                                      lVar6 = lVar7;
                                      if (uVar2 >> 0x3c < 0xf) {
                                        if (uVar8 >> 0x3c < 0xf) {
                                          func_0x000100d57520(lVar7,uVar5,uVar2);
                                          func_0x000100d57520(lVar12,uVar10,uVar8);
                                          if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                          uVar11 = uVar5;
                                          func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                          func_0x000100d5753c(lVar12,uVar10,uVar8);
                                          if ((uVar11 & 1) == 0) goto LAB_103666104;
                                          goto LAB_103664fe8;
                                        }
                                      }
                                      else if (0xe < uVar8 >> 0x3c) {
                                        func_0x000100d57520(lVar7,uVar5,uVar2);
                                        func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103664fe8:
                                        func_0x000100d5753c(lVar7,uVar5,uVar2);
                                        func_0x000107c61428(param_1 + 0x1b8,auStack_3f0,0,0);
                                        func_0x000107c61428(param_2 + 0x1b8,auStack_408,0,0);
                                        lVar7 = *(long *)(param_1 + 0x1b8);
                                        uVar5 = *(ulong *)(param_1 + 0x1c0);
                                        uVar2 = *(ulong *)(param_1 + 0x1c8);
                                        lVar12 = *(long *)(param_2 + 0x1b8);
                                        uVar10 = *(ulong *)(param_2 + 0x1c0);
                                        uVar8 = *(ulong *)(param_2 + 0x1c8);
                                        uVar11 = uVar2;
                                        uVar1 = uVar5;
                                        lVar6 = lVar7;
                                        if (uVar2 >> 0x3c < 0xf) {
                                          if (uVar8 >> 0x3c < 0xf) {
                                            func_0x000100d57520(lVar7,uVar5,uVar2);
                                            func_0x000100d57520(lVar12,uVar10,uVar8);
                                            if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                            uVar11 = uVar5;
                                            func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                            func_0x000100d5753c(lVar12,uVar10,uVar8);
                                            if ((uVar11 & 1) == 0) goto LAB_103666104;
                                            goto LAB_103665068;
                                          }
                                        }
                                        else if (0xe < uVar8 >> 0x3c) {
                                          func_0x000100d57520(lVar7,uVar5,uVar2);
                                          func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103665068:
                                          func_0x000100d5753c(lVar7,uVar5,uVar2);
                                          func_0x000107c61428(param_1 + 0x1d0,auStack_420,0,0);
                                          func_0x000107c61428(param_2 + 0x1d0,auStack_438,0,0);
                                          lVar7 = *(long *)(param_1 + 0x1d0);
                                          uVar5 = *(ulong *)(param_1 + 0x1d8);
                                          uVar2 = *(ulong *)(param_1 + 0x1e0);
                                          lVar12 = *(long *)(param_2 + 0x1d0);
                                          uVar10 = *(ulong *)(param_2 + 0x1d8);
                                          uVar8 = *(ulong *)(param_2 + 0x1e0);
                                          uVar11 = uVar2;
                                          uVar1 = uVar5;
                                          lVar6 = lVar7;
                                          if (uVar2 >> 0x3c < 0xf) {
                                            if (uVar8 >> 0x3c < 0xf) {
                                              func_0x000100d57520(lVar7,uVar5,uVar2);
                                              func_0x000100d57520(lVar12,uVar10,uVar8);
                                              if ((int)lVar7 != (int)lVar12) goto LAB_1036660e8;
                                              uVar11 = uVar5;
                                              func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                              func_0x000100d5753c(lVar12,uVar10,uVar8);
                                              if ((uVar11 & 1) == 0) goto LAB_103666104;
                                              goto LAB_1036650e8;
                                            }
                                          }
                                          else if (0xe < uVar8 >> 0x3c) {
                                            func_0x000100d57520(lVar7,uVar5,uVar2);
                                            func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036650e8:
                                            func_0x000100d5753c(lVar7,uVar5,uVar2);
                                            func_0x000107c61428(param_1 + 0x1e8,auStack_450,0,0);
                                            func_0x000107c61428(param_2 + 0x1e8,auStack_468,0,0);
                                            lVar7 = *(long *)(param_1 + 0x1e8);
                                            uVar5 = *(ulong *)(param_1 + 0x1f0);
                                            uVar2 = *(ulong *)(param_1 + 0x1f8);
                                            lVar12 = *(long *)(param_2 + 0x1e8);
                                            uVar10 = *(ulong *)(param_2 + 0x1f0);
                                            uVar8 = *(ulong *)(param_2 + 0x1f8);
                                            uVar11 = uVar2;
                                            uVar1 = uVar5;
                                            lVar6 = lVar7;
                                            if (uVar2 >> 0x3c < 0xf) {
                                              if (uVar8 >> 0x3c < 0xf) {
                                                func_0x000100d57520(lVar7,uVar5,uVar2);
                                                if (lVar7 != lVar12) goto LAB_1036660d8;
                                                func_0x000100d57520(lVar7,uVar10,uVar8);
                                                uVar11 = uVar5;
                                                func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                                func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                if ((uVar11 & 1) == 0) goto LAB_103666104;
                                                goto LAB_10366528c;
                                              }
                                            }
                                            else if (0xe < uVar8 >> 0x3c) {
                                              func_0x000100d57520(lVar7,uVar5,uVar2);
                                              func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366528c:
                                              func_0x000100d5753c(lVar7,uVar5,uVar2);
                                              func_0x000107c61428(param_1 + 0x200,auStack_480,0,0);
                                              func_0x000107c61428(param_2 + 0x200,auStack_498,0,0);
                                              lVar7 = *(long *)(param_1 + 0x200);
                                              uVar5 = *(ulong *)(param_1 + 0x208);
                                              uVar2 = *(ulong *)(param_1 + 0x210);
                                              lVar12 = *(long *)(param_2 + 0x200);
                                              uVar10 = *(ulong *)(param_2 + 0x208);
                                              uVar8 = *(ulong *)(param_2 + 0x210);
                                              uVar11 = uVar2;
                                              uVar1 = uVar5;
                                              lVar6 = lVar7;
                                              if (uVar2 >> 0x3c < 0xf) {
                                                if (uVar8 >> 0x3c < 0xf) {
                                                  func_0x000100d57520(lVar7,uVar5,uVar2);
                                                  if (lVar7 != lVar12) goto LAB_1036660d8;
                                                  func_0x000100d57520(lVar7,uVar10,uVar8);
                                                  uVar11 = uVar5;
                                                  func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                                  func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                  if ((uVar11 & 1) == 0) goto LAB_103666104;
                                                  goto LAB_103665314;
                                                }
                                              }
                                              else if (0xe < uVar8 >> 0x3c) {
                                                func_0x000100d57520(lVar7,uVar5,uVar2);
                                                func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_103665314:
                                                func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                func_0x000107c61428(param_1 + 0x218,auStack_4b0,0,0)
                                                ;
                                                func_0x000107c61428(param_2 + 0x218,auStack_4c8,0,0)
                                                ;
                                                lVar7 = *(long *)(param_1 + 0x218);
                                                uVar5 = *(ulong *)(param_1 + 0x220);
                                                uVar2 = *(ulong *)(param_1 + 0x228);
                                                lVar12 = *(long *)(param_2 + 0x218);
                                                uVar10 = *(ulong *)(param_2 + 0x220);
                                                uVar8 = *(ulong *)(param_2 + 0x228);
                                                uVar11 = uVar2;
                                                uVar1 = uVar5;
                                                lVar6 = lVar7;
                                                if (uVar2 >> 0x3c < 0xf) {
                                                  if (uVar8 >> 0x3c < 0xf) {
                                                    func_0x000100d57520(lVar7,uVar5,uVar2);
                                                    if (lVar7 != lVar12) goto LAB_1036660d8;
                                                    func_0x000100d57520(lVar7,uVar10,uVar8);
                                                    uVar11 = uVar5;
                                                    func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                                    func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                    if ((uVar11 & 1) == 0) goto LAB_103666104;
                                                    goto LAB_10366545c;
                                                  }
                                                }
                                                else if (0xe < uVar8 >> 0x3c) {
                                                  func_0x000100d57520(lVar7,uVar5,uVar2);
                                                  func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366545c:
                                                  func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                  func_0x000107c61428(param_1 + 0x230,auStack_4e0,0,
                                                                      0);
                                                  func_0x000107c61428(param_2 + 0x230,auStack_4f8,0,
                                                                      0);
                                                  lVar7 = *(long *)(param_1 + 0x230);
                                                  uVar5 = *(ulong *)(param_1 + 0x238);
                                                  uVar2 = *(ulong *)(param_1 + 0x240);
                                                  lVar12 = *(long *)(param_2 + 0x230);
                                                  uVar10 = *(ulong *)(param_2 + 0x238);
                                                  uVar8 = *(ulong *)(param_2 + 0x240);
                                                  uVar11 = uVar2;
                                                  uVar1 = uVar5;
                                                  lVar6 = lVar7;
                                                  if (uVar2 >> 0x3c < 0xf) {
                                                    if (uVar8 >> 0x3c < 0xf) {
                                                      func_0x000100d57520(lVar7,uVar5,uVar2);
                                                      if (lVar7 != lVar12) goto LAB_1036660d8;
                                                      func_0x000100d57520(lVar7,uVar10,uVar8);
                                                      uVar11 = uVar5;
                                                      func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8);
                                                      func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                      if ((uVar11 & 1) == 0) goto LAB_103666104;
                                                      goto LAB_1036654e4;
                                                    }
                                                  }
                                                  else if (0xe < uVar8 >> 0x3c) {
                                                    func_0x000100d57520(lVar7,uVar5,uVar2);
                                                    func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_1036654e4:
                                                    func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                    func_0x000107c61428(param_1 + 0x248,auStack_510,
                                                                        0,0);
                                                    func_0x000107c61428(param_2 + 0x248,auStack_528,
                                                                        0,0);
                                                    lVar7 = *(long *)(param_1 + 0x248);
                                                    uVar5 = *(ulong *)(param_1 + 0x250);
                                                    uVar2 = *(ulong *)(param_1 + 600);
                                                    lVar12 = *(long *)(param_2 + 0x248);
                                                    uVar10 = *(ulong *)(param_2 + 0x250);
                                                    uVar8 = *(ulong *)(param_2 + 600);
                                                    uVar11 = uVar2;
                                                    uVar1 = uVar5;
                                                    lVar6 = lVar7;
                                                    if (uVar2 >> 0x3c < 0xf) {
                                                      if (uVar8 >> 0x3c < 0xf) {
                                                        func_0x000100d57520(lVar7,uVar5,uVar2);
                                                        if (lVar7 != lVar12) goto LAB_1036660d8;
                                                        func_0x000100d57520(lVar7,uVar10,uVar8);
                                                        uVar11 = uVar5;
                                                        func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8
                                                                           );
                                                        func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                        if ((uVar11 & 1) == 0) goto LAB_103666104;
                                                        goto LAB_10366556c;
                                                      }
                                                    }
                                                    else if (0xe < uVar8 >> 0x3c) {
                                                      func_0x000100d57520(lVar7,uVar5,uVar2);
                                                      func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366556c:
                                                      func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                      func_0x000107c61428(param_1 + 0x260,
                                                                          auStack_540,0,0);
                                                      func_0x000107c61428(param_2 + 0x260,
                                                                          auStack_558,0,0);
                                                      lVar7 = *(long *)(param_1 + 0x260);
                                                      uVar5 = *(ulong *)(param_1 + 0x268);
                                                      uVar2 = *(ulong *)(param_1 + 0x270);
                                                      lVar12 = *(long *)(param_2 + 0x260);
                                                      uVar10 = *(ulong *)(param_2 + 0x268);
                                                      uVar8 = *(ulong *)(param_2 + 0x270);
                                                      uVar11 = uVar2;
                                                      uVar1 = uVar5;
                                                      lVar6 = lVar7;
                                                      if (uVar2 >> 0x3c < 0xf) {
                                                        if (uVar8 >> 0x3c < 0xf) {
                                                          func_0x000100d57520(lVar7,uVar5,uVar2);
                                                          if (lVar7 != lVar12) goto LAB_1036660d8;
                                                          func_0x000100d57520(lVar7,uVar10,uVar8);
                                                          uVar11 = uVar5;
                                                          func_0x000100e25fcc(uVar5,uVar2,uVar10,
                                                                              uVar8);
                                                          func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                          if ((uVar11 & 1) == 0) goto LAB_103666104;
                                                          goto LAB_10366571c;
                                                        }
                                                      }
                                                      else if (0xe < uVar8 >> 0x3c) {
                                                        func_0x000100d57520(lVar7,uVar5,uVar2);
                                                        func_0x000100d57520(lVar12,uVar10,uVar8);
LAB_10366571c:
                                                        func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                        func_0x000107c61428(param_1 + 0x278,
                                                                            auStack_570,0,0);
                                                        func_0x000107c61428(param_2 + 0x278,
                                                                            auStack_588,0,0);
                                                        lVar7 = *(long *)(param_1 + 0x278);
                                                        uVar5 = *(ulong *)(param_1 + 0x280);
                                                        uVar2 = *(ulong *)(param_1 + 0x288);
                                                        lVar12 = *(long *)(param_2 + 0x278);
                                                        uVar10 = *(ulong *)(param_2 + 0x280);
                                                        uVar8 = *(ulong *)(param_2 + 0x288);
                                                        uVar11 = uVar2;
                                                        uVar1 = uVar5;
                                                        lVar6 = lVar7;
                                                        if (uVar2 >> 0x3c < 0xf) {
                                                          if (uVar8 >> 0x3c < 0xf) {
                                                            func_0x000100d57520(lVar7,uVar5,uVar2);
                                                            if (lVar7 != lVar12) goto LAB_1036660d8;
                                                            func_0x000100d57520(lVar7,uVar10,uVar8);
                                                            uVar11 = uVar5;
                                                            func_0x000100e25fcc(uVar5,uVar2,uVar10,
                                                                                uVar8);
                                                            func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                            func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                            if ((uVar11 & 1) == 0) {
                                                              return 0;
                                                            }
                                                            goto LAB_103665824;
                                                          }
                                                        }
                                                        else if (0xe < uVar8 >> 0x3c) {
                                                          func_0x000100d57520(lVar7,uVar5,uVar2);
                                                          func_0x000100d57520(lVar12,uVar10,uVar8);
                                                          func_0x000100d5753c(lVar7,uVar5,uVar2);
LAB_103665824:
                                                          func_0x000107c61428(param_1 + 0x290,
                                                                              auStack_5a0,0,0);
                                                          func_0x000107c61428(param_2 + 0x290,
                                                                              auStack_5b8,0,0);
                                                          lVar7 = *(long *)(param_1 + 0x290);
                                                          uVar5 = *(ulong *)(param_1 + 0x298);
                                                          uVar2 = *(ulong *)(param_1 + 0x2a0);
                                                          lVar12 = *(long *)(param_2 + 0x290);
                                                          uVar10 = *(ulong *)(param_2 + 0x298);
                                                          uVar8 = *(ulong *)(param_2 + 0x2a0);
                                                          uVar11 = uVar2;
                                                          uVar1 = uVar5;
                                                          lVar6 = lVar7;
                                                          if (uVar2 >> 0x3c < 0xf) {
                                                            if (uVar8 >> 0x3c < 0xf) {
                                                              func_0x000100d57520(lVar7,uVar5,uVar2)
                                                              ;
                                                              if (lVar7 != lVar12)
                                                              goto LAB_1036660d8;
                                                              func_0x000100d57520(lVar7,uVar10,uVar8
                                                                                 );
                                                              uVar11 = uVar5;
                                                              func_0x000100e25fcc(uVar5,uVar2,uVar10
                                                                                  ,uVar8);
                                                              func_0x000100d5753c(lVar7,uVar10,uVar8
                                                                                 );
                                                              func_0x000100d5753c(lVar7,uVar5,uVar2)
                                                              ;
                                                              if ((uVar11 & 1) == 0) {
                                                                return 0;
                                                              }
                                                              goto LAB_103665920;
                                                            }
                                                          }
                                                          else if (0xe < uVar8 >> 0x3c) {
                                                            func_0x000100d57520(lVar7,uVar5,uVar2);
                                                            func_0x000100d57520(lVar12,uVar10,uVar8)
                                                            ;
                                                            func_0x000100d5753c(lVar7,uVar5,uVar2);
LAB_103665920:
                                                            func_0x000107c61428(param_1 + 0x2a8,
                                                                                auStack_5d0,0,0);
                                                            func_0x000107c61428(param_2 + 0x2a8,
                                                                                auStack_5e8,0,0);
                                                            uVar10 = *(ulong *)(param_1 + 0x2a8);
                                                            lVar12 = *(long *)(param_1 + 0x2b0);
                                                            uVar8 = *(ulong *)(param_1 + 0x2b8);
                                                            uVar4 = *(undefined8 *)(param_1 + 0x2c0)
                                                            ;
                                                            uVar5 = *(ulong *)(param_2 + 0x2a8);
                                                            lVar7 = *(long *)(param_2 + 0x2b0);
                                                            uVar3 = *(undefined8 *)(param_2 + 0x2b8)
                                                            ;
                                                            uVar9 = *(undefined8 *)(param_2 + 0x2c0)
                                                            ;
                                                            if (lVar12 == 0) {
                                                              if (lVar7 == 0) {
                                                                func_0x000101597350(uVar10,0,uVar8,
                                                                                    uVar4);
                                                                func_0x000101597350(uVar5,0,uVar3,
                                                                                    uVar9);
                                                                func_0x000101597ae4(uVar10,0,uVar8,
                                                                                    uVar4);
LAB_103665a98:
                                                                func_0x000107c61428(param_1 + 0x2c8,
                                                                                    auStack_600,0,0)
                                                                ;
                                                                func_0x000107c61428(param_2 + 0x2c8,
                                                                                    auStack_618,0,0)
                                                                ;
                                                                uVar5 = *(ulong *)(param_1 + 0x2c8);
                                                                uVar8 = *(ulong *)(param_1 + 0x2d0);
                                                                uVar3 = *(undefined8 *)
                                                                         (param_1 + 0x2d8);
                                                                uVar10 = *(ulong *)(param_2 + 0x2c8)
                                                                ;
                                                                uVar11 = *(ulong *)(param_2 + 0x2d0)
                                                                ;
                                                                uVar9 = *(undefined8 *)
                                                                         (param_2 + 0x2d8);
                                                                uVar4 = uVar3;
                                                                uVar1 = uVar8;
                                                                uVar2 = uVar5;
                                                                if ((uVar5 & 0xff) == 2) {
                                                                  if ((uVar10 & 0xff) == 2) {
                                                                    func_0x000101541464(uVar5,uVar8,
                                                                                        uVar3);
                                                                    func_0x000101541464(uVar10,
                                                  uVar11,uVar9);
                                                  func_0x000101556278(uVar5,uVar8,uVar3);
LAB_103665b20:
                                                  func_0x000107c61428(param_1 + 0x2e0,auStack_630,0,
                                                                      0);
                                                  func_0x000107c61428(param_2 + 0x2e0,auStack_648,0,
                                                                      0);
                                                  uVar10 = *(ulong *)(param_1 + 0x2e0);
                                                  lVar12 = *(long *)(param_1 + 0x2e8);
                                                  uVar8 = *(ulong *)(param_1 + 0x2f0);
                                                  uVar4 = *(undefined8 *)(param_1 + 0x2f8);
                                                  uVar5 = *(ulong *)(param_2 + 0x2e0);
                                                  lVar7 = *(long *)(param_2 + 0x2e8);
                                                  uVar3 = *(undefined8 *)(param_2 + 0x2f0);
                                                  uVar9 = *(undefined8 *)(param_2 + 0x2f8);
                                                  if (lVar12 == 0) {
                                                    if (lVar7 == 0) {
                                                      func_0x000101597350(uVar10,0,uVar8,uVar4);
                                                      func_0x000101597350(uVar5,0,uVar3,uVar9);
                                                      func_0x000101597ae4(uVar10,0,uVar8,uVar4);
                                                      goto LAB_103665cc0;
                                                    }
                                                  }
                                                  else if (lVar7 != 0) {
                                                    if (((uVar10 != uVar5) || (lVar12 != lVar7)) &&
                                                       (uVar11 = uVar10,
                                                       func_0x000107c605b8(uVar10,lVar12,uVar5,lVar7
                                                                           ,0), (uVar11 & 1) == 0))
                                                    goto LAB_10366612c;
                                                    func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
                                                    func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                                                    uVar11 = uVar8;
                                                    func_0x000100e25fcc(uVar8,uVar4,uVar3,uVar9);
                                                    func_0x000101597ae4(uVar5,lVar7,uVar3,uVar9);
                                                    func_0x000101597ae4(uVar10,lVar12,uVar8,uVar4);
                                                    if ((uVar11 & 1) == 0) {
                                                      return 0;
                                                    }
LAB_103665cc0:
                                                    func_0x000107c61428(param_1 + 0x300,auStack_660,
                                                                        0,0);
                                                    func_0x000107c61428(param_2 + 0x300,auStack_678,
                                                                        0,0);
                                                    lVar7 = *(long *)(param_1 + 0x300);
                                                    uVar5 = *(ulong *)(param_1 + 0x308);
                                                    uVar2 = *(ulong *)(param_1 + 0x310);
                                                    lVar12 = *(long *)(param_2 + 0x300);
                                                    uVar10 = *(ulong *)(param_2 + 0x308);
                                                    uVar8 = *(ulong *)(param_2 + 0x310);
                                                    uVar11 = uVar2;
                                                    uVar1 = uVar5;
                                                    lVar6 = lVar7;
                                                    if (uVar2 >> 0x3c < 0xf) {
                                                      if (uVar8 >> 0x3c < 0xf) {
                                                        func_0x000100d57520(lVar7,uVar5,uVar2);
                                                        if (lVar7 != lVar12) goto LAB_1036660d8;
                                                        func_0x000100d57520(lVar7,uVar10,uVar8);
                                                        uVar11 = uVar5;
                                                        func_0x000100e25fcc(uVar5,uVar2,uVar10,uVar8
                                                                           );
                                                        func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                        func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                        if ((uVar11 & 1) == 0) {
                                                          return 0;
                                                        }
                                                        goto LAB_103665db8;
                                                      }
                                                    }
                                                    else if (0xe < uVar8 >> 0x3c) {
                                                      func_0x000100d57520(lVar7,uVar5,uVar2);
                                                      func_0x000100d57520(lVar12,uVar10,uVar8);
                                                      func_0x000100d5753c(lVar7,uVar5,uVar2);
LAB_103665db8:
                                                      func_0x000107c61428(param_1 + 0x318,
                                                                          auStack_690,0,0);
                                                      uVar5 = *(ulong *)(param_1 + 0x318);
                                                      func_0x000107c61428(param_2 + 0x318,
                                                                          auStack_6a8,0,0);
                                                      FUN_1036667b4(uVar5,*(undefined8 *)
                                                                           (param_2 + 0x318));
                                                      if ((uVar5 & 1) == 0) {
                                                        return 0;
                                                      }
                                                      func_0x000107c61428(param_1 + 800,auStack_6c0,
                                                                          0,0);
                                                      func_0x000107c61428(param_2 + 800,auStack_6d8,
                                                                          0,0);
                                                      lVar7 = *(long *)(param_1 + 800);
                                                      uVar5 = *(ulong *)(param_1 + 0x328);
                                                      uVar2 = *(ulong *)(param_1 + 0x330);
                                                      lVar12 = *(long *)(param_2 + 800);
                                                      uVar10 = *(ulong *)(param_2 + 0x328);
                                                      uVar8 = *(ulong *)(param_2 + 0x330);
                                                      uVar11 = uVar2;
                                                      uVar1 = uVar5;
                                                      lVar6 = lVar7;
                                                      if (uVar2 >> 0x3c < 0xf) {
                                                        if (uVar8 >> 0x3c < 0xf) {
                                                          func_0x000100d57520(lVar7,uVar5,uVar2);
                                                          if (lVar7 != lVar12) goto LAB_1036660d8;
                                                          func_0x000100d57520(lVar7,uVar10,uVar8);
                                                          uVar11 = uVar5;
                                                          func_0x000100e25fcc(uVar5,uVar2,uVar10,
                                                                              uVar8);
                                                          func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                          func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                          if ((uVar11 & 1) == 0) {
                                                            return 0;
                                                          }
                                                          goto LAB_103665eec;
                                                        }
                                                      }
                                                      else if (0xe < uVar8 >> 0x3c) {
                                                        func_0x000100d57520(lVar7,uVar5,uVar2);
                                                        func_0x000100d57520(lVar12,uVar10,uVar8);
                                                        func_0x000100d5753c(lVar7,uVar5,uVar2);
LAB_103665eec:
                                                        func_0x000107c61428(param_1 + 0x338,
                                                                            auStack_6f0,0,0);
                                                        func_0x000107c61428(param_2 + 0x338,
                                                                            auStack_708,0,0);
                                                        lVar7 = *(long *)(param_1 + 0x338);
                                                        uVar5 = *(ulong *)(param_1 + 0x340);
                                                        uVar2 = *(ulong *)(param_1 + 0x348);
                                                        lVar12 = *(long *)(param_2 + 0x338);
                                                        uVar10 = *(ulong *)(param_2 + 0x340);
                                                        uVar8 = *(ulong *)(param_2 + 0x348);
                                                        uVar11 = uVar2;
                                                        uVar1 = uVar5;
                                                        lVar6 = lVar7;
                                                        if (uVar2 >> 0x3c < 0xf) {
                                                          if (uVar8 >> 0x3c < 0xf) {
                                                            func_0x000100d57520(lVar7,uVar5,uVar2);
                                                            if (lVar7 != lVar12) goto LAB_1036660d8;
                                                            func_0x000100d57520(lVar7,uVar10,uVar8);
                                                            uVar11 = uVar5;
                                                            func_0x000100e25fcc(uVar5,uVar2,uVar10,
                                                                                uVar8);
                                                            func_0x000100d5753c(lVar7,uVar10,uVar8);
                                                            func_0x000100d5753c(lVar7,uVar5,uVar2);
                                                            if ((uVar11 & 1) == 0) {
                                                              return 0;
                                                            }
                                                            goto LAB_103665fe8;
                                                          }
                                                        }
                                                        else if (0xe < uVar8 >> 0x3c) {
                                                          func_0x000100d57520(lVar7,uVar5,uVar2);
                                                          func_0x000100d57520(lVar12,uVar10,uVar8);
                                                          func_0x000100d5753c(lVar7,uVar5,uVar2);
LAB_103665fe8:
                                                          func_0x000107c61428(param_1 + 0x350,
                                                                              auStack_720,0,0);
                                                          func_0x000107c61428(param_2 + 0x350,
                                                                              auStack_738,0,0);
                                                          uVar10 = *(ulong *)(param_1 + 0x350);
                                                          lVar12 = *(long *)(param_1 + 0x358);
                                                          uVar8 = *(ulong *)(param_1 + 0x360);
                                                          uVar4 = *(undefined8 *)(param_1 + 0x368);
                                                          uVar5 = *(ulong *)(param_2 + 0x350);
                                                          lVar7 = *(long *)(param_2 + 0x358);
                                                          uVar3 = *(undefined8 *)(param_2 + 0x360);
                                                          uVar9 = *(undefined8 *)(param_2 + 0x368);
                                                          if (lVar12 == 0) {
                                                            if (lVar7 == 0) {
                                                              func_0x000101597350(uVar10,0,uVar8,
                                                                                  uVar4);
                                                              func_0x000101597350(uVar5,0,uVar3,
                                                                                  uVar9);
                                                              func_0x000101597ae4(uVar10,0,uVar8,
                                                                                  uVar4);
                                                              goto LAB_1036661b4;
                                                            }
                                                          }
                                                          else if (lVar7 != 0) {
                                                            if (((uVar10 != uVar5) ||
                                                                (lVar12 != lVar7)) &&
                                                               (uVar11 = uVar10,
                                                               func_0x000107c605b8(uVar10,lVar12,
                                                                                   uVar5,lVar7,0),
                                                               (uVar11 & 1) == 0))
                                                            goto LAB_10366612c;
                                                            func_0x000101597350(uVar10,lVar12,uVar8,
                                                                                uVar4);
                                                            func_0x000101597350(uVar5,lVar7,uVar3,
                                                                                uVar9);
                                                            uVar11 = uVar8;
                                                            func_0x000100e25fcc(uVar8,uVar4,uVar3,
                                                                                uVar9);
                                                            func_0x000101597ae4(uVar5,lVar7,uVar3,
                                                                                uVar9);
                                                            func_0x000101597ae4(uVar10,lVar12,uVar8,
                                                                                uVar4);
                                                            if ((uVar11 & 1) == 0) {
                                                              return 0;
                                                            }
LAB_1036661b4:
                                                            func_0x000107c61428(param_1 + 0x370,
                                                                                &uStack_288,0,0);
                                                            func_0x000107c61428(param_2 + 0x370,
                                                                                auStack_750,0,0);
                                                            uVar5 = *(ulong *)(param_1 + 0x370);
                                                            uVar8 = *(ulong *)(param_1 + 0x378);
                                                            uVar3 = *(undefined8 *)(param_1 + 0x380)
                                                            ;
                                                            uVar11 = *(ulong *)(param_2 + 0x370);
                                                            uVar10 = *(ulong *)(param_2 + 0x378);
                                                            uVar9 = *(undefined8 *)(param_2 + 0x380)
                                                            ;
                                                            if ((uVar5 & 0xff) == 2) {
                                                              if ((uVar11 & 0xff) == 2) {
                                                                func_0x000101541464(uVar5,uVar8,
                                                                                    uVar3);
                                                                func_0x000101541464(uVar11,uVar10,
                                                                                    uVar9);
                                                                func_0x000101556278(uVar5,uVar8,
                                                                                    uVar3);
                                                                return 1;
                                                              }
                                                            }
                                                            else if ((uVar11 & 0xff) != 2) {
                                                              func_0x000101541464(uVar5,uVar8,uVar3)
                                                              ;
                                                              func_0x000101541464(uVar11,uVar10,
                                                                                  uVar9);
                                                              if ((((uint)uVar11 ^ (uint)uVar5) & 1)
                                                                  == 0) {
                                                                uVar1 = uVar8;
                                                                func_0x000100e25fcc(uVar8,uVar3,
                                                                                    uVar10,uVar9);
                                                                func_0x000101556278(uVar11,uVar10,
                                                                                    uVar9);
                                                                func_0x000101556278(uVar5,uVar8,
                                                                                    uVar3);
                                                                if ((uVar1 & 1) == 0) {
                                                                  return 0;
                                                                }
                                                                return 1;
                                                              }
                                                              func_0x000101556278(uVar11,uVar10,
                                                                                  uVar9);
                                                              goto LAB_1036647f4;
                                                            }
                                                            func_0x000101541464(uVar5,uVar8,uVar3);
                                                            func_0x000101541464(uVar11,uVar10,uVar9)
                                                            ;
                                                            func_0x000101556278(uVar5,uVar8,uVar3);
                                                            uVar5 = uVar11;
                                                            uVar8 = uVar10;
                                                            uVar3 = uVar9;
                                                            goto LAB_1036647f4;
                                                          }
                                                          goto LAB_103665a14;
                                                        }
                                                      }
                                                    }
                                                    goto LAB_103664640;
                                                  }
                                                  goto LAB_103665a14;
                                                  }
                                                  }
                                                  else if ((uVar10 & 0xff) != 2) {
                                                    func_0x000101541464(uVar5,uVar8,uVar3);
                                                    func_0x000101541464(uVar10,uVar11,uVar9);
                                                    if ((((uint)uVar10 ^ (uint)uVar5) & 1) != 0)
                                                    goto LAB_103664748;
                                                    func_0x000100e25fcc(uVar8,uVar3,uVar11,uVar9);
                                                    func_0x000101556278(uVar10,uVar11,uVar9);
                                                    func_0x000101556278(uVar5,uVar8,uVar3);
                                                    if ((uVar1 & 1) == 0) {
                                                      return 0;
                                                    }
                                                    goto LAB_103665b20;
                                                  }
                                                  goto LAB_1036646e0;
                                                  }
                                                  }
                                                  else if (lVar7 != 0) {
                                                    if (((uVar10 == uVar5) && (lVar12 == lVar7)) ||
                                                       (uVar11 = uVar10,
                                                       func_0x000107c605b8(uVar10,lVar12,uVar5,lVar7
                                                                           ,0), (uVar11 & 1) != 0))
                                                    {
                                                      func_0x000101597350(uVar10,lVar12,uVar8,uVar4)
                                                      ;
                                                      func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                                                      uVar11 = uVar8;
                                                      func_0x000100e25fcc(uVar8,uVar4,uVar3,uVar9);
                                                      func_0x000101597ae4(uVar5,lVar7,uVar3,uVar9);
                                                      func_0x000101597ae4(uVar10,lVar12,uVar8,uVar4)
                                                      ;
                                                      if ((uVar11 & 1) == 0) {
                                                        return 0;
                                                      }
                                                      goto LAB_103665a98;
                                                    }
LAB_10366612c:
                                                    func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
                                                    func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                                                    func_0x000101597ae4(uVar5,lVar7,uVar3,uVar9);
LAB_103664a0c:
                                                    func_0x000101597ae4(uVar10,lVar12,uVar8,uVar4);
                                                    return 0;
                                                  }
LAB_103665a14:
                                                  uStack_288 = uVar10;
                                                  lStack_280 = lVar12;
                                                  uStack_278 = uVar8;
                                                  uStack_270 = uVar4;
                                                  uStack_268 = uVar5;
                                                  lStack_260 = lVar7;
                                                  uStack_258 = uVar3;
                                                  uStack_250 = uVar9;
                                                  func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
                                                  goto LAB_103664a64;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            goto LAB_103664640;
                          }
                        }
                      }
                      else if (lVar7 != 0) {
                        if (((uVar10 == uVar5) && (lVar12 == lVar7)) ||
                           (uVar11 = uVar10, func_0x000107c605b8(uVar10,lVar12,uVar5,lVar7,0),
                           (uVar11 & 1) != 0)) {
                          func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
                          func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                          uVar11 = uVar8;
                          func_0x000100e25fcc(uVar8,uVar4,uVar3,uVar9);
                          func_0x000101597ae4(uVar5,lVar7,uVar3,uVar9);
                          if ((uVar11 & 1) == 0) goto LAB_103664a0c;
                          goto LAB_1036648e8;
                        }
LAB_1036649c8:
                        func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
                        func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                        func_0x000101597ae4(uVar5,lVar7,uVar3,uVar9);
                        goto LAB_103664a0c;
                      }
                      uStack_288 = uVar10;
                      lStack_280 = lVar12;
                      uStack_278 = uVar8;
                      uStack_270 = uVar4;
                      uStack_268 = uVar5;
                      lStack_260 = lVar7;
                      uStack_258 = uVar3;
                      uStack_250 = uVar9;
                      func_0x000101597350(uVar10,lVar12,uVar8,uVar4);
LAB_103664a64:
                      func_0x000101597350(uVar5,lVar7,uVar3,uVar9);
                      func_0x000101628968(&uStack_288);
                      return 0;
                    }
                  }
                }
                goto LAB_103664640;
              }
            }
            else if ((uVar10 & 0xff) != 2) {
              func_0x000101541464(uVar5,uVar8,uVar3);
              func_0x000101541464(uVar10,uVar11,uVar9);
              if ((((uint)uVar10 ^ (uint)uVar5) & 1) == 0) {
                func_0x000100e25fcc(uVar8,uVar3,uVar11,uVar9);
                func_0x000101556278(uVar10,uVar11,uVar9);
                if ((uVar1 & 1) == 0) goto LAB_1036647f4;
                goto LAB_10366425c;
              }
LAB_103664748:
              func_0x000101556278(uVar10,uVar11,uVar9);
              goto LAB_1036647f4;
            }
LAB_1036646e0:
            uVar5 = uVar10;
            uVar8 = uVar11;
            uVar3 = uVar9;
            func_0x000101541464(uVar2,uVar1,uVar4);
            func_0x000101541464(uVar5,uVar8,uVar3);
            func_0x000101556278(uVar2,uVar1,uVar4);
LAB_1036647f4:
            func_0x000101556278(uVar5,uVar8,uVar3);
            return 0;
          }
        }
      }
    }
  }
LAB_103664640:
  lVar7 = lVar12;
  uVar5 = uVar10;
  uVar2 = uVar8;
  func_0x000100d57520(lVar6,uVar1,uVar11);
  func_0x000100d57520(lVar7,uVar5,uVar2);
  func_0x000100d5753c(lVar6,uVar1,uVar11);
LAB_103666104:
  func_0x000100d5753c(lVar7,uVar5,uVar2);
  return 0;
}



/* Entry: 103666314; end: 103666373;  */

void FUN_103666314(undefined8 *param_1)

{
  undefined8 uVar1;
  
  if (lRam0000000112f82698 != -1) {
    func_0x000107c61568(0x112f82698,FUN_10365f51c);
  }
  uVar1 = uRam0000000112f826a0;
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 103666374; end: 103666397;  */

undefined1  [16] FUN_103666374(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156d70;
  auVar1._0_8_ = 0xd00000000000002b;
  return auVar1;
}



/* Entry: 103666398; end: 1036663c7;  */

undefined1  [16] FUN_103666398(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1036663c8; end: 1036663fb;  */

void FUN_1036663c8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1036663fc; end: 10366640f;  */

undefined8 FUN_1036663fc(void)

{
  return 0x10366640c;
}



/* Entry: 103666410; end: 103666447;  */

void FUN_103666410(void)

{
  FUN_103660958();
  return;
}



/* Entry: 103666448; end: 10366644b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103666448(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 10366644c; end: 103666483;  */

uint FUN_10366644c(long param_1,long param_2)

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
  FUN_103666d40();
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



/* Entry: 103666484; end: 10366652b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103666484(long *param_1)

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
    FUN_103663f44(uVar25,uVar26);
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



/* Entry: 10366652c; end: 1036665cb;  */

/* WARNING: Possible PIC construction at 0x000103666578: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103666588: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010366657c) */
/* WARNING: Removing unreachable block (ram,0x00010366658c) */

void FUN_10366652c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f826b0 != -1) {
    func_0x000107c61568(0x112f826b0,FUN_10365f4d4);
  }
  uVar5 = uRam000000011380b218;
  uVar4 = uRam000000011380b210;
  uVar3 = uRam000000011380b208;
  uVar2 = uRam000000011380b200;
  uVar1 = uRam000000011380b1f8;
  *param_1 = uRam000000011380b1f0;
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



/* Entry: 1036665cc; end: 103666607;  */

void FUN_1036665cc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82c18;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82c18,&UNK_10dbf3c90);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103666608; end: 10366670b;  */

void FUN_103666608(undefined8 param_1,undefined8 param_2)

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



/* Entry: 10366670c; end: 1036667b3;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_10366670c(undefined8 *param_1,long *param_2)

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
    FUN_103663f44(uVar25,uVar26);
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



/* Entry: 1036667b4; end: 10366686f;  */

undefined8 FUN_1036667b4(long param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != *(long *)(param_2 + 0x10)) {
    return 0;
  }
  if ((lVar1 != 0) && (param_1 != param_2)) {
    pcVar3 = (char *)(param_2 + 0x28);
    plVar2 = (long *)(param_1 + 0x20);
    do {
      lVar4 = *plVar2;
      lVar5 = *(long *)(pcVar3 + -8);
      if (*pcVar3 == '\x01') {
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
        else if (lVar5 == 3) {
          if (lVar4 != 3) {
            return 0;
          }
        }
        else if (lVar4 != 4) {
          return 0;
        }
      }
      else if (lVar4 != lVar5) {
        return 0;
      }
      pcVar3 = pcVar3 + 0x10;
      lVar1 = lVar1 + -1;
      plVar2 = plVar2 + 2;
    } while (lVar1 != 0);
  }
  return 1;
}



/* Entry: 103666870; end: 1036668cf;  */

void FUN_103666870(void)

{
  func_0x000107c61168(&PTR_PTR_112f82738);
  return;
}



/* Entry: 1036668d0; end: 1036668e3;  */

void FUN_1036668d0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036668e4();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x103666924)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036668e4; end: 103666963;  */

void FUN_1036668e4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f826c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf3978;
  func_0x000107c61520(&UNK_10dbf3978,&UNK_110675e78);
  puRam0000000112f826c0 = puVar1;
  return;
}



/* Entry: 103666964; end: 103666967;  */

void FUN_103666964(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f826d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f826d8;
  func_0x00010002969c(0x112f826d8,&UNK_10dbf3900);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f826d0 = puVar2;
  return;
}



/* Entry: 103666968; end: 1036669b7;  */

void FUN_103666968(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f826d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f826d8;
  func_0x00010002969c(0x112f826d8,&UNK_10dbf3900);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f826d0 = puVar2;
  return;
}



/* Entry: 1036669b8; end: 1036669bb;  */

void FUN_1036669b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f826e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf39b8;
  func_0x000107c61520(&UNK_10dbf39b8,&UNK_110675e78);
  puRam0000000112f826e0 = puVar1;
  return;
}



/* Entry: 1036669bc; end: 1036669fb;  */

void FUN_1036669bc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f826e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf39b8;
  func_0x000107c61520(&UNK_10dbf39b8,&UNK_110675e78);
  puRam0000000112f826e0 = puVar1;
  return;
}



/* Entry: 1036669fc; end: 103666a1f;  */

void FUN_1036669fc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103666a20();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103666a20; end: 103666a5f;  */

void FUN_103666a20(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f826e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf3a38;
  func_0x000107c61520(&UNK_10dbf3a38,&UNK_110675ef0);
  puRam0000000112f826e8 = puVar1;
  return;
}



/* Entry: 103666a60; end: 103666a73;  */

void FUN_103666a60(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  (*(code *)0x103666890)();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x10365975c)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103666a74; end: 103666aa3;  */

void FUN_103666a74(long param_1,undefined8 param_2,undefined8 param_3,code *param_4,code *param_5)

{
  long lVar1;
  
  lVar1 = param_1;
  (*param_4)();
  *(long *)(param_1 + 8) = lVar1;
  (*param_5)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103666aa4; end: 103666aa7;  */

void FUN_103666aa4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f826f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf3aa0;
  func_0x000107c61520(&UNK_10dbf3aa0,&UNK_110675ef0);
  puRam0000000112f826f0 = puVar1;
  return;
}



/* Entry: 103666aa8; end: 103666ae7;  */

void FUN_103666aa8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f826f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf3aa0;
  func_0x000107c61520(&UNK_10dbf3aa0,&UNK_110675ef0);
  puRam0000000112f826f0 = puVar1;
  return;
}



/* Entry: 103666ae8; end: 103666b87;  */

int FUN_103666ae8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103666b88; end: 103666bb3;  */

void FUN_103666b88(undefined8 *param_1)

{
  func_0x00010006c090(*param_1,param_1[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1[2]);
  return;
}



/* Entry: 103666bb4; end: 103666c5f;  */

undefined8 * FUN_103666bb4(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103666c60; end: 103666ca7;  */

undefined8 * FUN_103666c60(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103666ca8; end: 103666d3f;  */

int FUN_103666ca8(int *param_1,int param_2)

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



/* Entry: 103666d40; end: 103666dbf;  */

void FUN_103666d40(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82c20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dbf3a0c;
  func_0x000107c61520(&DAT_10dbf3a0c,&UNK_110675ef0);
  puRam0000000112f82c20 = puVar1;
  return;
}



/* Entry: 103666dc0; end: 103666dd7;  */

undefined8 * FUN_103666dc0(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 103666dd8; end: 103666e07;  */

void FUN_103666dd8(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103667038();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103666e08; end: 103666e0f;  */

undefined8 FUN_103666e08(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103666e10; end: 103666e83;  */

void FUN_103666e10(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f82c98;
  func_0x0001000285a8(0x112f82c98,&UNK_10dbf40e0);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 103666e84; end: 103666e8f;  */

void FUN_103666e84(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 103666e90; end: 103666f3b;  */

void FUN_103666e90(void)

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



/* Entry: 103666f3c; end: 103666f4f;  */

bool FUN_103666f3c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 103666f50; end: 103666f97;  */

void FUN_103666f50(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4260,0x2d,2);
  uRam000000011380b228 = uStack_38;
  uRam000000011380b220 = uStack_40;
  uRam000000011380b238 = uStack_28;
  uRam000000011380b230 = uStack_30;
  uRam000000011380b248 = uStack_18;
  uRam000000011380b240 = uStack_20;
  return;
}



/* Entry: 103666f98; end: 103667037;  */

/* WARNING: Possible PIC construction at 0x000103666fe4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103666ff4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103666fe8) */
/* WARNING: Removing unreachable block (ram,0x000103666ff8) */

void FUN_103666f98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82ca0 != -1) {
    func_0x000107c61568(0x112f82ca0,FUN_103666f50);
  }
  uVar5 = uRam000000011380b248;
  uVar4 = uRam000000011380b240;
  uVar3 = uRam000000011380b238;
  uVar2 = uRam000000011380b230;
  uVar1 = uRam000000011380b228;
  *param_1 = uRam000000011380b220;
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



/* Entry: 103667038; end: 103667043;  */

void FUN_103667038(void)

{
  return;
}



/* Entry: 103667044; end: 10366706f;  */

void FUN_103667044(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103667070();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001036670b0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103667070; end: 1036670ef;  */

void FUN_103667070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82ca8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4180;
  func_0x000107c61520(&UNK_10dbf4180,&UNK_1106760a8);
  puRam0000000112f82ca8 = puVar1;
  return;
}



/* Entry: 1036670f0; end: 1036670f3;  */

void FUN_1036670f0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f82cb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f82cc0;
  func_0x00010002969c(0x112f82cc0,&UNK_10dbf4108);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f82cb8 = puVar2;
  return;
}



/* Entry: 1036670f4; end: 103667143;  */

void FUN_1036670f4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f82cb8 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f82cc0;
  func_0x00010002969c(0x112f82cc0,&UNK_10dbf4108);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f82cb8 = puVar2;
  return;
}



/* Entry: 103667144; end: 103667147;  */

void FUN_103667144(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf41c0;
  func_0x000107c61520(&UNK_10dbf41c0,&UNK_1106760a8);
  puRam0000000112f82cc8 = puVar1;
  return;
}



/* Entry: 103667148; end: 103667187;  */

void FUN_103667148(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82cc8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf41c0;
  func_0x000107c61520(&UNK_10dbf41c0,&UNK_1106760a8);
  puRam0000000112f82cc8 = puVar1;
  return;
}



/* Entry: 103667188; end: 103667237;  */

int FUN_103667188(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103667238; end: 103667267;  */

void FUN_103667238(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  FUN_103667498();
  *param_1 = param_2;
  *(char *)(param_1 + 1) = (char)param_3;
  *(char *)((long)param_1 + 9) = (char)((ushort)param_3 >> 8);
  return;
}



/* Entry: 103667268; end: 10366726f;  */

undefined8 FUN_103667268(void)

{
  undefined8 *unaff_x20;
  
  return *unaff_x20;
}



/* Entry: 103667270; end: 1036672e3;  */

void FUN_103667270(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112f82d38;
  func_0x0001000285a8(0x112f82d38,&UNK_10dbf4290);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1036672e4; end: 1036672ef;  */

void FUN_1036672e4(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1036672f0; end: 10366739b;  */

void FUN_1036672f0(void)

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



/* Entry: 10366739c; end: 1036673af;  */

bool FUN_10366739c(long *param_1,long *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1036673b0; end: 1036673f7;  */

void FUN_1036673b0(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4400,0x28,2);
  uRam000000011380b258 = uStack_38;
  uRam000000011380b250 = uStack_40;
  uRam000000011380b268 = uStack_28;
  uRam000000011380b260 = uStack_30;
  uRam000000011380b278 = uStack_18;
  uRam000000011380b270 = uStack_20;
  return;
}



/* Entry: 1036673f8; end: 103667497;  */

/* WARNING: Possible PIC construction at 0x000103667444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103667454: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103667448) */
/* WARNING: Removing unreachable block (ram,0x000103667458) */

void FUN_1036673f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82d40 != -1) {
    func_0x000107c61568(0x112f82d40,FUN_1036673b0);
  }
  uVar5 = uRam000000011380b278;
  uVar4 = uRam000000011380b270;
  uVar3 = uRam000000011380b268;
  uVar2 = uRam000000011380b260;
  uVar1 = uRam000000011380b258;
  *param_1 = uRam000000011380b250;
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



/* Entry: 103667498; end: 1036674a3;  */

void FUN_103667498(void)

{
  return;
}



/* Entry: 1036674a4; end: 1036674cf;  */

void FUN_1036674a4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1036674d0();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000103667510();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1036674d0; end: 10366754f;  */

void FUN_1036674d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4330;
  func_0x000107c61520(&UNK_10dbf4330,&UNK_110676238);
  puRam0000000112f82d48 = puVar1;
  return;
}



/* Entry: 103667550; end: 103667553;  */

void FUN_103667550(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f82d58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f82d60;
  func_0x00010002969c(0x112f82d60,&UNK_10dbf42b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f82d58 = puVar2;
  return;
}



/* Entry: 103667554; end: 1036675a3;  */

void FUN_103667554(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112f82d58 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112f82d60;
  func_0x00010002969c(0x112f82d60,&UNK_10dbf42b8);
  puVar2 = PTR___sSayxGSlsMc_11034dd20;
  func_0x000107c61520(PTR___sSayxGSlsMc_11034dd20,uVar1);
  puRam0000000112f82d58 = puVar2;
  return;
}



/* Entry: 1036675a4; end: 1036675a7;  */

void FUN_1036675a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4370;
  func_0x000107c61520(&UNK_10dbf4370,&UNK_110676238);
  puRam0000000112f82d68 = puVar1;
  return;
}



/* Entry: 1036675a8; end: 1036675e7;  */

void FUN_1036675a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d68 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4370;
  func_0x000107c61520(&UNK_10dbf4370,&UNK_110676238);
  puRam0000000112f82d68 = puVar1;
  return;
}



/* Entry: 1036675e8; end: 103667687;  */

int FUN_1036675e8(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Entry: 103667688; end: 103667bf3;  */

bool FUN_103667688(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  undefined8 uStack_48;
  ulong uStack_40;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(ulong *)(unaff_x20 + 0x20);
  uVar4 = uVar3 >> 0x3c;
  uStack_50 = uVar1;
  uStack_48 = uVar2;
  uStack_40 = uVar3;
  if (uVar4 < 0xf) {
    func_0x00010366844c(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
    func_0x000101553ccc(uVar1,uVar2,uVar3);
    uVar1 = 0;
    uVar2 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    func_0x00010366844c(&uStack_50,auStack_68,0x112db6358,&UNK_10d961e20);
  }
  func_0x000101553ccc(uVar1,uVar2,uVar3);
  return uVar4 < 0xf;
}



/* Entry: 103667bf4; end: 103667c3b;  */

void FUN_103667bf4(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dbf4570,0x3e,2);
  uRam000000011380b288 = uStack_38;
  uRam000000011380b280 = uStack_40;
  uRam000000011380b298 = uStack_28;
  uRam000000011380b290 = uStack_30;
  uRam000000011380b2a8 = uStack_18;
  uRam000000011380b2a0 = uStack_20;
  return;
}



/* Entry: 103667c3c; end: 103667d3f;  */

void FUN_103667c3c(undefined8 param_1,long param_2,long param_3)

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
      if (lVar1 == 3) {
        pcVar5 = *(code **)(param_3 + 0x198);
        func_0x00010366a584();
        lVar2 = unaff_x20 + 0x40;
        puVar3 = &UNK_1106766d0;
LAB_103667cc4:
        (*pcVar5)(lVar2,puVar3,lVar1,param_2,param_3);
      }
      else {
        puVar3 = &UNK_110790980;
        if (lVar1 == 2) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x28;
          goto LAB_103667cc4;
        }
        if (lVar1 == 1) {
          pcVar5 = *(code **)(param_3 + 0x198);
          func_0x00010157193c();
          lVar2 = unaff_x20 + 0x10;
          goto LAB_103667cc4;
        }
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 103667d40; end: 103667dcb;  */

void FUN_103667d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  
  FUN_103667dcc();
  if (unaff_x21 == 0) {
    FUN_103667e54();
    FUN_103667edc();
    func_0x000100076224(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}



/* Entry: 103667dcc; end: 103667e53;  */

void FUN_103667dcc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103667e54; end: 103667edb;  */

void FUN_103667e54(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

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



/* Entry: 103667edc; end: 103667fdf;  */

void FUN_103667edc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
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
  
  uStack_78 = *(undefined8 *)(param_1 + 0x108);
  uStack_80 = *(undefined8 *)(param_1 + 0x100);
  uStack_68 = *(undefined8 *)(param_1 + 0x118);
  uStack_70 = *(undefined8 *)(param_1 + 0x110);
  uStack_58 = *(undefined8 *)(param_1 + 0x128);
  uStack_60 = *(undefined8 *)(param_1 + 0x120);
  uStack_48 = *(undefined8 *)(param_1 + 0x138);
  uStack_50 = *(undefined8 *)(param_1 + 0x130);
  uStack_b8 = *(undefined8 *)(param_1 + 200);
  uStack_c0 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd8);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd0);
  uStack_98 = *(undefined8 *)(param_1 + 0xe8);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe0);
  uStack_88 = *(undefined8 *)(param_1 + 0xf8);
  uStack_90 = *(undefined8 *)(param_1 + 0xf0);
  uStack_f8 = *(undefined8 *)(param_1 + 0x88);
  uStack_100 = *(undefined8 *)(param_1 + 0x80);
  uStack_e8 = *(undefined8 *)(param_1 + 0x98);
  uStack_f0 = *(undefined8 *)(param_1 + 0x90);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa8);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb8);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb0);
  uStack_138 = *(undefined8 *)(param_1 + 0x48);
  uStack_140 = *(undefined8 *)(param_1 + 0x40);
  uStack_128 = *(undefined8 *)(param_1 + 0x58);
  uStack_130 = *(undefined8 *)(param_1 + 0x50);
  uStack_118 = *(undefined8 *)(param_1 + 0x68);
  uStack_120 = *(undefined8 *)(param_1 + 0x60);
  uStack_108 = *(undefined8 *)(param_1 + 0x78);
  uStack_110 = *(undefined8 *)(param_1 + 0x70);
  puVar1 = &uStack_140;
  func_0x00010155b68c();
  if ((int)puVar1 != 1) {
    uStack_178 = uStack_78;
    uStack_180 = uStack_80;
    uStack_168 = uStack_68;
    uStack_170 = uStack_70;
    uStack_158 = uStack_58;
    uStack_160 = uStack_60;
    uStack_148 = uStack_48;
    uStack_150 = uStack_50;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    uStack_1a8 = uStack_a8;
    uStack_1b0 = uStack_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = uStack_88;
    uStack_190 = uStack_90;
    uStack_1f8 = uStack_f8;
    uStack_200 = uStack_100;
    uStack_1e8 = uStack_e8;
    uStack_1f0 = uStack_f0;
    uStack_1d8 = uStack_d8;
    uStack_1e0 = uStack_e0;
    uStack_1c8 = uStack_c8;
    uStack_1d0 = uStack_d0;
    uStack_238 = uStack_138;
    uStack_240 = uStack_140;
    uStack_228 = uStack_128;
    uStack_230 = uStack_130;
    uStack_218 = uStack_118;
    uStack_220 = uStack_120;
    uStack_208 = uStack_108;
    uStack_210 = uStack_110;
    pcVar2 = *(code **)(param_4 + 0x88);
    func_0x00010366a584();
    (*pcVar2)(&uStack_240,3,&UNK_1106766d0,puVar1,param_3,param_4);
  }
  return;
}



/* Entry: 103667fe0; end: 103667fe3;  */

uint FUN_103667fe0(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_b30 [256];
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
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
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_1f0 = uVar10;
  uStack_1e8 = uVar12;
  uStack_1e0 = uVar8;
  uStack_1d0 = uVar9;
  uStack_1c8 = uVar11;
  uStack_1c0 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10366859c;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x00010366844c(&uStack_1f0,&uStack_630,0x112db6358,&UNK_10d961e20);
      uVar3 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar3 & 1) != 0) goto LAB_10366863c;
    }
    else {
      func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
      puVar4 = &uStack_1f0;
LAB_103668b38:
      func_0x00010366844c(puVar4,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
LAB_103668b64:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_10366859c:
      func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
      puVar4 = &uStack_1f0;
      uVar3 = uVar5;
      uVar6 = uVar11;
      uVar7 = uVar9;
      uVar5 = uVar8;
      uVar11 = uVar12;
      uVar9 = uVar10;
LAB_103668704:
      func_0x00010366844c(puVar4,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar7,uVar6,uVar3);
      goto LAB_103668b64;
    }
    func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
    func_0x00010366844c(&uStack_1f0,&uStack_630,0x112db6358,&UNK_10d961e20);
LAB_10366863c:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[6];
    uVar9 = param_1[5];
    uVar5 = param_1[7];
    uVar12 = param_2[6];
    uVar10 = param_2[5];
    uVar8 = param_2[7];
    uStack_230 = uVar10;
    uStack_228 = uVar12;
    uStack_220 = uVar8;
    uStack_210 = uVar9;
    uStack_208 = uVar11;
    uStack_200 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_1036686dc;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_230;
        goto LAB_103668b38;
      }
      func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x00010366844c(&uStack_230,&uStack_630,0x112db6358,&UNK_10d961e20);
      uVar3 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar3 & 1) == 0) goto LAB_103668b64;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_1036686dc:
        func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_230;
        uVar3 = uVar5;
        uVar6 = uVar11;
        uVar7 = uVar9;
        uVar5 = uVar8;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_103668704;
      }
      func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x00010366844c(&uStack_230,&uStack_630,0x112db6358,&UNK_10d961e20);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uStack_568 = param_1[0x21];
    uStack_570 = param_1[0x20];
    uStack_258 = param_1[0x23];
    uStack_260 = param_1[0x22];
    uStack_578 = param_1[0x1f];
    uStack_580 = param_1[0x1e];
    uStack_268 = param_1[0x21];
    uStack_270 = param_1[0x20];
    uStack_558 = param_1[0x23];
    uStack_560 = param_1[0x22];
    uStack_248 = param_1[0x25];
    uStack_250 = param_1[0x24];
    uStack_548 = param_1[0x25];
    uStack_550 = param_1[0x24];
    uStack_238 = param_1[0x27];
    uStack_240 = param_1[0x26];
    uStack_5a8 = param_1[0x19];
    uStack_5b0 = param_1[0x18];
    uStack_298 = param_1[0x1b];
    uStack_2a0 = param_1[0x1a];
    uStack_5b8 = param_1[0x17];
    uStack_5c0 = param_1[0x16];
    uStack_2a8 = param_1[0x19];
    uStack_2b0 = param_1[0x18];
    uStack_598 = param_1[0x1b];
    uStack_5a0 = param_1[0x1a];
    uStack_288 = param_1[0x1d];
    uStack_290 = param_1[0x1c];
    uStack_588 = param_1[0x1d];
    uStack_590 = param_1[0x1c];
    uStack_278 = param_1[0x1f];
    uStack_280 = param_1[0x1e];
    uStack_5e8 = param_1[0x11];
    uStack_5f0 = param_1[0x10];
    uStack_2d8 = param_1[0x13];
    uStack_2e0 = param_1[0x12];
    uStack_5f8 = param_1[0xf];
    uStack_600 = param_1[0xe];
    uStack_2e8 = param_1[0x11];
    uStack_2f0 = param_1[0x10];
    uStack_5d8 = param_1[0x13];
    uStack_5e0 = param_1[0x12];
    uStack_2c8 = param_1[0x15];
    uStack_2d0 = param_1[0x14];
    uStack_5c8 = param_1[0x15];
    uStack_5d0 = param_1[0x14];
    uStack_2b8 = param_1[0x17];
    uStack_2c0 = param_1[0x16];
    uStack_328 = param_1[9];
    uStack_330 = param_1[8];
    uStack_318 = param_1[0xb];
    uStack_320 = param_1[10];
    uStack_308 = param_1[0xd];
    uStack_310 = param_1[0xc];
    uStack_2f8 = param_1[0xf];
    uStack_300 = param_1[0xe];
    uStack_628 = param_1[9];
    uStack_630 = param_1[8];
    uStack_618 = param_1[0xb];
    uStack_620 = param_1[10];
    uStack_608 = param_1[0xd];
    uStack_610 = param_1[0xc];
    uStack_468 = param_2[0x21];
    uStack_470 = param_2[0x20];
    uStack_358 = param_2[0x23];
    uStack_360 = param_2[0x22];
    uStack_478 = param_2[0x1f];
    uStack_480 = param_2[0x1e];
    uStack_368 = param_2[0x21];
    uStack_370 = param_2[0x20];
    uStack_458 = param_2[0x23];
    uStack_460 = param_2[0x22];
    uStack_348 = param_2[0x25];
    uStack_350 = param_2[0x24];
    uStack_448 = param_2[0x25];
    uStack_450 = param_2[0x24];
    uStack_338 = param_2[0x27];
    uStack_340 = param_2[0x26];
    uStack_4a8 = param_2[0x19];
    uStack_4b0 = param_2[0x18];
    uStack_398 = param_2[0x1b];
    uStack_3a0 = param_2[0x1a];
    uStack_4b8 = param_2[0x17];
    uStack_4c0 = param_2[0x16];
    uStack_3a8 = param_2[0x19];
    uStack_3b0 = param_2[0x18];
    uStack_498 = param_2[0x1b];
    uStack_4a0 = param_2[0x1a];
    uStack_388 = param_2[0x1d];
    uStack_390 = param_2[0x1c];
    uStack_488 = param_2[0x1d];
    uStack_490 = param_2[0x1c];
    uStack_380 = param_2[0x1e];
    uStack_378 = param_2[0x1f];
    uStack_4f0 = param_2[0x10];
    uStack_4e8 = param_2[0x11];
    uStack_3d8 = param_2[0x13];
    uStack_3e0 = param_2[0x12];
    uStack_4f8 = param_2[0xf];
    uStack_500 = param_2[0xe];
    uStack_3e8 = param_2[0x11];
    uStack_3f0 = param_2[0x10];
    uStack_4d8 = param_2[0x13];
    uStack_4e0 = param_2[0x12];
    uStack_3c8 = param_2[0x15];
    uStack_3d0 = param_2[0x14];
    uStack_4c8 = param_2[0x15];
    uStack_4d0 = param_2[0x14];
    uStack_3b8 = param_2[0x17];
    uStack_3c0 = param_2[0x16];
    uStack_428 = param_2[9];
    uStack_430 = param_2[8];
    uStack_418 = param_2[0xb];
    uStack_420 = param_2[10];
    uStack_408 = param_2[0xd];
    uStack_410 = param_2[0xc];
    uStack_3f8 = param_2[0xf];
    uStack_400 = param_2[0xe];
    uStack_528 = param_2[9];
    uStack_530 = param_2[8];
    uStack_518 = param_2[0xb];
    uStack_520 = param_2[10];
    uStack_508 = param_2[0xd];
    uStack_510 = param_2[0xc];
    uStack_538 = param_1[0x27];
    uStack_540 = param_1[0x26];
    uStack_438 = param_2[0x27];
    uStack_440 = param_2[0x26];
    iVar1 = (int)&uStack_630;
    func_0x00010155b68c();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_530;
      func_0x00010155b68c();
      if (iVar1 == 1) {
        uStack_768 = uStack_568;
        uStack_770 = uStack_570;
        uStack_758 = uStack_558;
        uStack_760 = uStack_560;
        uStack_748 = uStack_548;
        uStack_750 = uStack_550;
        uStack_738 = uStack_538;
        uStack_740 = uStack_540;
        uStack_7a8 = uStack_5a8;
        uStack_7b0 = uStack_5b0;
        uStack_798 = uStack_598;
        uStack_7a0 = uStack_5a0;
        uStack_788 = uStack_588;
        uStack_790 = uStack_590;
        uStack_778 = uStack_578;
        uStack_780 = uStack_580;
        uStack_7e8 = uStack_5e8;
        uStack_7f0 = uStack_5f0;
        uStack_7d8 = uStack_5d8;
        uStack_7e0 = uStack_5e0;
        uStack_7c8 = uStack_5c8;
        uStack_7d0 = uStack_5d0;
        uStack_7b8 = uStack_5b8;
        uStack_7c0 = uStack_5c0;
        uStack_828 = uStack_628;
        uStack_830 = uStack_630;
        uStack_818 = uStack_618;
        uStack_820 = uStack_620;
        uStack_808 = uStack_608;
        uStack_810 = uStack_610;
        uStack_7f8 = uStack_5f8;
        uStack_800 = uStack_600;
        func_0x00010366844c(&uStack_330,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
        func_0x00010366844c(&uStack_430,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
        func_0x000103668494(&uStack_830,0x112f82d70,&UNK_10dbf4438);
LAB_103668cf0:
        uVar9 = *param_1;
        func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
        uVar2 = (uint)uVar9;
        goto LAB_103668b6c;
      }
LAB_103668aac:
      func_0x000107c610b4(&uStack_830,&uStack_630,0x200);
      func_0x00010366844c(&uStack_330,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
      func_0x00010366844c(&uStack_430,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
      func_0x000103668494(&uStack_830,0x112f82d78,&UNK_10dbf4440);
    }
    else {
      uStack_868 = uStack_568;
      uStack_870 = uStack_570;
      uStack_858 = uStack_558;
      uStack_860 = uStack_560;
      uStack_848 = uStack_548;
      uStack_850 = uStack_550;
      uStack_838 = uStack_538;
      uStack_840 = uStack_540;
      uStack_8a8 = uStack_5a8;
      uStack_8b0 = uStack_5b0;
      uStack_898 = uStack_598;
      uStack_8a0 = uStack_5a0;
      uStack_888 = uStack_588;
      uStack_890 = uStack_590;
      uStack_878 = uStack_578;
      uStack_880 = uStack_580;
      uStack_8e8 = uStack_5e8;
      uStack_8f0 = uStack_5f0;
      uStack_8d8 = uStack_5d8;
      uStack_8e0 = uStack_5e0;
      uStack_8c8 = uStack_5c8;
      uStack_8d0 = uStack_5d0;
      uStack_8b8 = uStack_5b8;
      uStack_8c0 = uStack_5c0;
      uStack_928 = uStack_628;
      uStack_930 = uStack_630;
      uStack_918 = uStack_618;
      uStack_920 = uStack_620;
      uStack_908 = uStack_608;
      uStack_910 = uStack_610;
      uStack_8f8 = uStack_5f8;
      uStack_900 = uStack_600;
      iVar1 = (int)&uStack_530;
      func_0x00010155b68c();
      if (iVar1 == 1) goto LAB_103668aac;
      uStack_968 = uStack_468;
      uStack_970 = uStack_470;
      uStack_958 = uStack_458;
      uStack_960 = uStack_460;
      uStack_948 = uStack_448;
      uStack_950 = uStack_450;
      uStack_938 = uStack_438;
      uStack_940 = uStack_440;
      uStack_9a8 = uStack_4a8;
      uStack_9b0 = uStack_4b0;
      uStack_998 = uStack_498;
      uStack_9a0 = uStack_4a0;
      uStack_988 = uStack_488;
      uStack_990 = uStack_490;
      uStack_978 = uStack_478;
      uStack_980 = uStack_480;
      uStack_9e8 = uStack_4e8;
      uStack_9f0 = uStack_4f0;
      uStack_9d8 = uStack_4d8;
      uStack_9e0 = uStack_4e0;
      uStack_9c8 = uStack_4c8;
      uStack_9d0 = uStack_4d0;
      uStack_9b8 = uStack_4b8;
      uStack_9c0 = uStack_4c0;
      uStack_a28 = uStack_528;
      uStack_a30 = uStack_530;
      uStack_a18 = uStack_518;
      uStack_a20 = uStack_520;
      uStack_a08 = uStack_508;
      uStack_a10 = uStack_510;
      uStack_9f8 = uStack_4f8;
      uStack_a00 = uStack_500;
      uStack_768 = uStack_468;
      uStack_770 = uStack_470;
      uStack_758 = uStack_458;
      uStack_760 = uStack_460;
      uStack_748 = uStack_448;
      uStack_750 = uStack_450;
      uStack_738 = uStack_438;
      uStack_740 = uStack_440;
      uStack_7a8 = uStack_4a8;
      uStack_7b0 = uStack_4b0;
      uStack_798 = uStack_498;
      uStack_7a0 = uStack_4a0;
      uStack_788 = uStack_488;
      uStack_790 = uStack_490;
      uStack_778 = uStack_478;
      uStack_780 = uStack_480;
      uStack_7e8 = uStack_4e8;
      uStack_7f0 = uStack_4f0;
      uStack_7d8 = uStack_4d8;
      uStack_7e0 = uStack_4e0;
      uStack_7c8 = uStack_4c8;
      uStack_7d0 = uStack_4d0;
      uStack_7b8 = uStack_4b8;
      uStack_7c0 = uStack_4c0;
      uStack_828 = uStack_528;
      uStack_830 = uStack_530;
      uStack_818 = uStack_518;
      uStack_820 = uStack_520;
      uStack_808 = uStack_508;
      uStack_810 = uStack_510;
      uStack_7f8 = uStack_4f8;
      uStack_800 = uStack_500;
      uStack_e8 = uStack_868;
      uStack_f0 = uStack_870;
      uStack_d8 = uStack_858;
      uStack_e0 = uStack_860;
      uStack_c8 = uStack_848;
      uStack_d0 = uStack_850;
      uStack_b8 = uStack_838;
      uStack_c0 = uStack_840;
      uStack_128 = uStack_8a8;
      uStack_130 = uStack_8b0;
      uStack_118 = uStack_898;
      uStack_120 = uStack_8a0;
      uStack_108 = uStack_888;
      uStack_110 = uStack_890;
      uStack_f8 = uStack_878;
      uStack_100 = uStack_880;
      uStack_168 = uStack_8e8;
      uStack_170 = uStack_8f0;
      uStack_158 = uStack_8d8;
      uStack_160 = uStack_8e0;
      uStack_148 = uStack_8c8;
      uStack_150 = uStack_8d0;
      uStack_138 = uStack_8b8;
      uStack_140 = uStack_8c0;
      uStack_1a8 = uStack_928;
      uStack_1b0 = uStack_930;
      uStack_198 = uStack_918;
      uStack_1a0 = uStack_920;
      uStack_188 = uStack_908;
      uStack_190 = uStack_910;
      uStack_178 = uStack_8f8;
      uStack_180 = uStack_900;
      func_0x00010366844c(&uStack_330,auStack_b30,0x112f82d70,&UNK_10dbf4438);
      func_0x00010366844c(&uStack_430,auStack_b30,0x112f82d70,&UNK_10dbf4438);
      puVar4 = &uStack_1b0;
      FUN_10366b9cc(puVar4,&uStack_830);
      func_0x000103668494(&uStack_a30,0x112f82d70,&UNK_10dbf4438);
      func_0x000103668494(&uStack_630,0x112f82d70,&UNK_10dbf4438);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103668cf0;
    }
  }
  uVar2 = 0;
LAB_103668b6c:
  return uVar2 & 1;
}



/* Entry: 103667fe4; end: 10366806b;  */

void FUN_103667fe4(undefined8 *param_1)

{
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
  
  func_0x0001016152c0(&uStack_120);
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0xf000000000000000;
  param_1[0x21] = uStack_58;
  param_1[0x20] = uStack_60;
  param_1[0x23] = uStack_48;
  param_1[0x22] = uStack_50;
  param_1[0x25] = uStack_38;
  param_1[0x24] = uStack_40;
  param_1[0x27] = uStack_28;
  param_1[0x26] = uStack_30;
  param_1[0x19] = uStack_98;
  param_1[0x18] = uStack_a0;
  param_1[0x1b] = uStack_88;
  param_1[0x1a] = uStack_90;
  param_1[0x1d] = uStack_78;
  param_1[0x1c] = uStack_80;
  param_1[0x1f] = uStack_68;
  param_1[0x1e] = uStack_70;
  param_1[0x11] = uStack_d8;
  param_1[0x10] = uStack_e0;
  param_1[0x13] = uStack_c8;
  param_1[0x12] = uStack_d0;
  param_1[0x15] = uStack_b8;
  param_1[0x14] = uStack_c0;
  param_1[0x17] = uStack_a8;
  param_1[0x16] = uStack_b0;
  param_1[9] = uStack_118;
  param_1[8] = uStack_120;
  param_1[0xb] = uStack_108;
  param_1[10] = uStack_110;
  param_1[0xd] = uStack_f8;
  param_1[0xc] = uStack_100;
  param_1[0xf] = uStack_e8;
  param_1[0xe] = uStack_f0;
  return;
}



/* Entry: 10366806c; end: 10366808f;  */

undefined1  [16] FUN_10366806c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x800000010f156da0;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Entry: 103668090; end: 1036680bf;  */

undefined1  [16] FUN_103668090(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x00010006c00c(*(undefined8 *)*unaff_x20,*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 1036680c0; end: 1036680f3;  */

void FUN_1036680c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  func_0x00010006c090(*unaff_x20,unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 1036680f4; end: 103668107;  */

undefined8 FUN_1036680f4(void)

{
  return 0x103668104;
}



/* Entry: 103668108; end: 10366811b;  */

void FUN_103668108(void)

{
  FUN_103667c3c();
  return;
}



/* Entry: 10366811c; end: 103668183;  */

void FUN_10366811c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_180 [320];
  
  func_0x000107c610b4(auStack_180);
  FUN_103667d40(param_1,param_2,param_3);
  return;
}



/* Entry: 103668184; end: 103668187;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103668184(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 103668188; end: 1036681bf;  */

uint FUN_103668188(long param_1,long param_2)

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
  FUN_10366a544();
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



/* Entry: 1036681c0; end: 10366820f;  */

uint FUN_1036681c0(undefined8 param_1)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_160,param_1,0x140);
  func_0x000107c610b4(auStack_2a0);
  FUN_1036684d4(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 103668210; end: 1036682af;  */

/* WARNING: Possible PIC construction at 0x00010366825c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010366826c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103668260) */
/* WARNING: Removing unreachable block (ram,0x000103668270) */

void FUN_103668210(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112f82d80 != -1) {
    func_0x000107c61568(0x112f82d80,FUN_103667bf4);
  }
  uVar5 = uRam000000011380b2a8;
  uVar4 = uRam000000011380b2a0;
  uVar3 = uRam000000011380b298;
  uVar2 = uRam000000011380b290;
  uVar1 = uRam000000011380b288;
  *param_1 = uRam000000011380b280;
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



/* Entry: 1036682b0; end: 1036682eb;  */

void FUN_1036682b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112f82da0;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112f82da0,&UNK_10dbf4568);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1036682ec; end: 1036683f7;  */

void FUN_1036682ec(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_1b8 [72];
  undefined1 auStack_170 [320];
  
  func_0x000107c610b4(auStack_170);
  func_0x000107c6068c(auStack_1b8,0);
  func_0x000107c5fa50(auStack_1b8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1036683f8; end: 1036684d3;  */

uint FUN_1036683f8(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined1 auStack_2a0 [320];
  undefined1 auStack_160 [320];
  
  uVar1 = 0;
  func_0x000107c610b4(auStack_2a0,param_1,0x140);
  func_0x000107c610b4(auStack_160,param_2,0x140);
  FUN_1036684d4(auStack_2a0,auStack_160);
  return uVar1 & 1;
}



/* Entry: 1036684d4; end: 103668cff;  */

uint FUN_1036684d4(undefined8 *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined1 auStack_b30 [256];
  undefined8 uStack_a30;
  undefined8 uStack_a28;
  undefined8 uStack_a20;
  undefined8 uStack_a18;
  undefined8 uStack_a10;
  undefined8 uStack_a08;
  undefined8 uStack_a00;
  undefined8 uStack_9f8;
  undefined8 uStack_9f0;
  undefined8 uStack_9e8;
  undefined8 uStack_9e0;
  undefined8 uStack_9d8;
  undefined8 uStack_9d0;
  undefined8 uStack_9c8;
  undefined8 uStack_9c0;
  undefined8 uStack_9b8;
  undefined8 uStack_9b0;
  undefined8 uStack_9a8;
  undefined8 uStack_9a0;
  undefined8 uStack_998;
  undefined8 uStack_990;
  undefined8 uStack_988;
  undefined8 uStack_980;
  undefined8 uStack_978;
  undefined8 uStack_970;
  undefined8 uStack_968;
  undefined8 uStack_960;
  undefined8 uStack_958;
  undefined8 uStack_950;
  undefined8 uStack_948;
  undefined8 uStack_940;
  undefined8 uStack_938;
  undefined8 uStack_930;
  undefined8 uStack_928;
  undefined8 uStack_920;
  undefined8 uStack_918;
  undefined8 uStack_910;
  undefined8 uStack_908;
  undefined8 uStack_900;
  undefined8 uStack_8f8;
  undefined8 uStack_8f0;
  undefined8 uStack_8e8;
  undefined8 uStack_8e0;
  undefined8 uStack_8d8;
  undefined8 uStack_8d0;
  undefined8 uStack_8c8;
  undefined8 uStack_8c0;
  undefined8 uStack_8b8;
  undefined8 uStack_8b0;
  undefined8 uStack_8a8;
  undefined8 uStack_8a0;
  undefined8 uStack_898;
  undefined8 uStack_890;
  undefined8 uStack_888;
  undefined8 uStack_880;
  undefined8 uStack_878;
  undefined8 uStack_870;
  undefined8 uStack_868;
  undefined8 uStack_860;
  undefined8 uStack_858;
  undefined8 uStack_850;
  undefined8 uStack_848;
  undefined8 uStack_840;
  undefined8 uStack_838;
  undefined8 uStack_830;
  undefined8 uStack_828;
  undefined8 uStack_820;
  undefined8 uStack_818;
  undefined8 uStack_810;
  undefined8 uStack_808;
  undefined8 uStack_800;
  undefined8 uStack_7f8;
  undefined8 uStack_7f0;
  undefined8 uStack_7e8;
  undefined8 uStack_7e0;
  undefined8 uStack_7d8;
  undefined8 uStack_7d0;
  undefined8 uStack_7c8;
  undefined8 uStack_7c0;
  undefined8 uStack_7b8;
  undefined8 uStack_7b0;
  undefined8 uStack_7a8;
  undefined8 uStack_7a0;
  undefined8 uStack_798;
  undefined8 uStack_790;
  undefined8 uStack_788;
  undefined8 uStack_780;
  undefined8 uStack_778;
  undefined8 uStack_770;
  undefined8 uStack_768;
  undefined8 uStack_760;
  undefined8 uStack_758;
  undefined8 uStack_750;
  undefined8 uStack_748;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined8 uStack_610;
  undefined8 uStack_608;
  undefined8 uStack_600;
  undefined8 uStack_5f8;
  undefined8 uStack_5f0;
  undefined8 uStack_5e8;
  undefined8 uStack_5e0;
  undefined8 uStack_5d8;
  undefined8 uStack_5d0;
  undefined8 uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 uStack_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  undefined8 uStack_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined8 uStack_570;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 uStack_558;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined8 uStack_520;
  undefined8 uStack_518;
  undefined8 uStack_510;
  undefined8 uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  undefined8 uStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 uStack_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 uStack_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 uStack_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 uStack_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 uStack_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 uStack_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 uStack_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 uStack_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 uStack_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
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
  
  uVar11 = param_1[3];
  uVar9 = param_1[2];
  uVar5 = param_1[4];
  uVar12 = param_2[3];
  uVar10 = param_2[2];
  uVar8 = param_2[4];
  uStack_1f0 = uVar10;
  uStack_1e8 = uVar12;
  uStack_1e0 = uVar8;
  uStack_1d0 = uVar9;
  uStack_1c8 = uVar11;
  uStack_1c0 = uVar5;
  if (uVar5 >> 0x3c < 0xf) {
    if (0xe < uVar8 >> 0x3c) goto LAB_10366859c;
    if ((float)uVar9 == (float)uVar10) {
      func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x00010366844c(&uStack_1f0,&uStack_630,0x112db6358,&UNK_10d961e20);
      uVar3 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar3 & 1) != 0) goto LAB_10366863c;
    }
    else {
      func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
      puVar4 = &uStack_1f0;
LAB_103668b38:
      func_0x00010366844c(puVar4,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
    }
LAB_103668b64:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
  }
  else {
    if (uVar8 >> 0x3c < 0xf) {
LAB_10366859c:
      func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
      puVar4 = &uStack_1f0;
      uVar3 = uVar5;
      uVar6 = uVar11;
      uVar7 = uVar9;
      uVar5 = uVar8;
      uVar11 = uVar12;
      uVar9 = uVar10;
LAB_103668704:
      func_0x00010366844c(puVar4,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x000101553ccc(uVar7,uVar6,uVar3);
      goto LAB_103668b64;
    }
    func_0x00010366844c(&uStack_1d0,&uStack_630,0x112db6358,&UNK_10d961e20);
    func_0x00010366844c(&uStack_1f0,&uStack_630,0x112db6358,&UNK_10d961e20);
LAB_10366863c:
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uVar11 = param_1[6];
    uVar9 = param_1[5];
    uVar5 = param_1[7];
    uVar12 = param_2[6];
    uVar10 = param_2[5];
    uVar8 = param_2[7];
    uStack_230 = uVar10;
    uStack_228 = uVar12;
    uStack_220 = uVar8;
    uStack_210 = uVar9;
    uStack_208 = uVar11;
    uStack_200 = uVar5;
    if (uVar5 >> 0x3c < 0xf) {
      if (0xe < uVar8 >> 0x3c) goto LAB_1036686dc;
      if ((float)uVar9 != (float)uVar10) {
        func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_230;
        goto LAB_103668b38;
      }
      func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x00010366844c(&uStack_230,&uStack_630,0x112db6358,&UNK_10d961e20);
      uVar3 = uVar11;
      func_0x000100e25fcc(uVar11,uVar5,uVar12,uVar8);
      func_0x000101553ccc(uVar10,uVar12,uVar8);
      if ((uVar3 & 1) == 0) goto LAB_103668b64;
    }
    else {
      if (uVar8 >> 0x3c < 0xf) {
LAB_1036686dc:
        func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
        puVar4 = &uStack_230;
        uVar3 = uVar5;
        uVar6 = uVar11;
        uVar7 = uVar9;
        uVar5 = uVar8;
        uVar11 = uVar12;
        uVar9 = uVar10;
        goto LAB_103668704;
      }
      func_0x00010366844c(&uStack_210,&uStack_630,0x112db6358,&UNK_10d961e20);
      func_0x00010366844c(&uStack_230,&uStack_630,0x112db6358,&UNK_10d961e20);
    }
    func_0x000101553ccc(uVar9,uVar11,uVar5);
    uStack_568 = param_1[0x21];
    uStack_570 = param_1[0x20];
    uStack_258 = param_1[0x23];
    uStack_260 = param_1[0x22];
    uStack_578 = param_1[0x1f];
    uStack_580 = param_1[0x1e];
    uStack_268 = param_1[0x21];
    uStack_270 = param_1[0x20];
    uStack_558 = param_1[0x23];
    uStack_560 = param_1[0x22];
    uStack_248 = param_1[0x25];
    uStack_250 = param_1[0x24];
    uStack_548 = param_1[0x25];
    uStack_550 = param_1[0x24];
    uStack_238 = param_1[0x27];
    uStack_240 = param_1[0x26];
    uStack_5a8 = param_1[0x19];
    uStack_5b0 = param_1[0x18];
    uStack_298 = param_1[0x1b];
    uStack_2a0 = param_1[0x1a];
    uStack_5b8 = param_1[0x17];
    uStack_5c0 = param_1[0x16];
    uStack_2a8 = param_1[0x19];
    uStack_2b0 = param_1[0x18];
    uStack_598 = param_1[0x1b];
    uStack_5a0 = param_1[0x1a];
    uStack_288 = param_1[0x1d];
    uStack_290 = param_1[0x1c];
    uStack_588 = param_1[0x1d];
    uStack_590 = param_1[0x1c];
    uStack_278 = param_1[0x1f];
    uStack_280 = param_1[0x1e];
    uStack_5e8 = param_1[0x11];
    uStack_5f0 = param_1[0x10];
    uStack_2d8 = param_1[0x13];
    uStack_2e0 = param_1[0x12];
    uStack_5f8 = param_1[0xf];
    uStack_600 = param_1[0xe];
    uStack_2e8 = param_1[0x11];
    uStack_2f0 = param_1[0x10];
    uStack_5d8 = param_1[0x13];
    uStack_5e0 = param_1[0x12];
    uStack_2c8 = param_1[0x15];
    uStack_2d0 = param_1[0x14];
    uStack_5c8 = param_1[0x15];
    uStack_5d0 = param_1[0x14];
    uStack_2b8 = param_1[0x17];
    uStack_2c0 = param_1[0x16];
    uStack_328 = param_1[9];
    uStack_330 = param_1[8];
    uStack_318 = param_1[0xb];
    uStack_320 = param_1[10];
    uStack_308 = param_1[0xd];
    uStack_310 = param_1[0xc];
    uStack_2f8 = param_1[0xf];
    uStack_300 = param_1[0xe];
    uStack_628 = param_1[9];
    uStack_630 = param_1[8];
    uStack_618 = param_1[0xb];
    uStack_620 = param_1[10];
    uStack_608 = param_1[0xd];
    uStack_610 = param_1[0xc];
    uStack_468 = param_2[0x21];
    uStack_470 = param_2[0x20];
    uStack_358 = param_2[0x23];
    uStack_360 = param_2[0x22];
    uStack_478 = param_2[0x1f];
    uStack_480 = param_2[0x1e];
    uStack_368 = param_2[0x21];
    uStack_370 = param_2[0x20];
    uStack_458 = param_2[0x23];
    uStack_460 = param_2[0x22];
    uStack_348 = param_2[0x25];
    uStack_350 = param_2[0x24];
    uStack_448 = param_2[0x25];
    uStack_450 = param_2[0x24];
    uStack_338 = param_2[0x27];
    uStack_340 = param_2[0x26];
    uStack_4a8 = param_2[0x19];
    uStack_4b0 = param_2[0x18];
    uStack_398 = param_2[0x1b];
    uStack_3a0 = param_2[0x1a];
    uStack_4b8 = param_2[0x17];
    uStack_4c0 = param_2[0x16];
    uStack_3a8 = param_2[0x19];
    uStack_3b0 = param_2[0x18];
    uStack_498 = param_2[0x1b];
    uStack_4a0 = param_2[0x1a];
    uStack_388 = param_2[0x1d];
    uStack_390 = param_2[0x1c];
    uStack_488 = param_2[0x1d];
    uStack_490 = param_2[0x1c];
    uStack_380 = param_2[0x1e];
    uStack_378 = param_2[0x1f];
    uStack_4f0 = param_2[0x10];
    uStack_4e8 = param_2[0x11];
    uStack_3d8 = param_2[0x13];
    uStack_3e0 = param_2[0x12];
    uStack_4f8 = param_2[0xf];
    uStack_500 = param_2[0xe];
    uStack_3e8 = param_2[0x11];
    uStack_3f0 = param_2[0x10];
    uStack_4d8 = param_2[0x13];
    uStack_4e0 = param_2[0x12];
    uStack_3c8 = param_2[0x15];
    uStack_3d0 = param_2[0x14];
    uStack_4c8 = param_2[0x15];
    uStack_4d0 = param_2[0x14];
    uStack_3b8 = param_2[0x17];
    uStack_3c0 = param_2[0x16];
    uStack_428 = param_2[9];
    uStack_430 = param_2[8];
    uStack_418 = param_2[0xb];
    uStack_420 = param_2[10];
    uStack_408 = param_2[0xd];
    uStack_410 = param_2[0xc];
    uStack_3f8 = param_2[0xf];
    uStack_400 = param_2[0xe];
    uStack_528 = param_2[9];
    uStack_530 = param_2[8];
    uStack_518 = param_2[0xb];
    uStack_520 = param_2[10];
    uStack_508 = param_2[0xd];
    uStack_510 = param_2[0xc];
    uStack_538 = param_1[0x27];
    uStack_540 = param_1[0x26];
    uStack_438 = param_2[0x27];
    uStack_440 = param_2[0x26];
    iVar1 = (int)&uStack_630;
    func_0x00010155b68c();
    if (iVar1 == 1) {
      iVar1 = (int)&uStack_530;
      func_0x00010155b68c();
      if (iVar1 == 1) {
        uStack_768 = uStack_568;
        uStack_770 = uStack_570;
        uStack_758 = uStack_558;
        uStack_760 = uStack_560;
        uStack_748 = uStack_548;
        uStack_750 = uStack_550;
        uStack_738 = uStack_538;
        uStack_740 = uStack_540;
        uStack_7a8 = uStack_5a8;
        uStack_7b0 = uStack_5b0;
        uStack_798 = uStack_598;
        uStack_7a0 = uStack_5a0;
        uStack_788 = uStack_588;
        uStack_790 = uStack_590;
        uStack_778 = uStack_578;
        uStack_780 = uStack_580;
        uStack_7e8 = uStack_5e8;
        uStack_7f0 = uStack_5f0;
        uStack_7d8 = uStack_5d8;
        uStack_7e0 = uStack_5e0;
        uStack_7c8 = uStack_5c8;
        uStack_7d0 = uStack_5d0;
        uStack_7b8 = uStack_5b8;
        uStack_7c0 = uStack_5c0;
        uStack_828 = uStack_628;
        uStack_830 = uStack_630;
        uStack_818 = uStack_618;
        uStack_820 = uStack_620;
        uStack_808 = uStack_608;
        uStack_810 = uStack_610;
        uStack_7f8 = uStack_5f8;
        uStack_800 = uStack_600;
        func_0x00010366844c(&uStack_330,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
        func_0x00010366844c(&uStack_430,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
        func_0x000103668494(&uStack_830,0x112f82d70,&UNK_10dbf4438);
LAB_103668cf0:
        uVar9 = *param_1;
        func_0x000100e25fcc(uVar9,param_1[1],*param_2,param_2[1]);
        uVar2 = (uint)uVar9;
        goto LAB_103668b6c;
      }
LAB_103668aac:
      func_0x000107c610b4(&uStack_830,&uStack_630,0x200);
      func_0x00010366844c(&uStack_330,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
      func_0x00010366844c(&uStack_430,&uStack_1b0,0x112f82d70,&UNK_10dbf4438);
      func_0x000103668494(&uStack_830,0x112f82d78,&UNK_10dbf4440);
    }
    else {
      uStack_868 = uStack_568;
      uStack_870 = uStack_570;
      uStack_858 = uStack_558;
      uStack_860 = uStack_560;
      uStack_848 = uStack_548;
      uStack_850 = uStack_550;
      uStack_838 = uStack_538;
      uStack_840 = uStack_540;
      uStack_8a8 = uStack_5a8;
      uStack_8b0 = uStack_5b0;
      uStack_898 = uStack_598;
      uStack_8a0 = uStack_5a0;
      uStack_888 = uStack_588;
      uStack_890 = uStack_590;
      uStack_878 = uStack_578;
      uStack_880 = uStack_580;
      uStack_8e8 = uStack_5e8;
      uStack_8f0 = uStack_5f0;
      uStack_8d8 = uStack_5d8;
      uStack_8e0 = uStack_5e0;
      uStack_8c8 = uStack_5c8;
      uStack_8d0 = uStack_5d0;
      uStack_8b8 = uStack_5b8;
      uStack_8c0 = uStack_5c0;
      uStack_928 = uStack_628;
      uStack_930 = uStack_630;
      uStack_918 = uStack_618;
      uStack_920 = uStack_620;
      uStack_908 = uStack_608;
      uStack_910 = uStack_610;
      uStack_8f8 = uStack_5f8;
      uStack_900 = uStack_600;
      iVar1 = (int)&uStack_530;
      func_0x00010155b68c();
      if (iVar1 == 1) goto LAB_103668aac;
      uStack_968 = uStack_468;
      uStack_970 = uStack_470;
      uStack_958 = uStack_458;
      uStack_960 = uStack_460;
      uStack_948 = uStack_448;
      uStack_950 = uStack_450;
      uStack_938 = uStack_438;
      uStack_940 = uStack_440;
      uStack_9a8 = uStack_4a8;
      uStack_9b0 = uStack_4b0;
      uStack_998 = uStack_498;
      uStack_9a0 = uStack_4a0;
      uStack_988 = uStack_488;
      uStack_990 = uStack_490;
      uStack_978 = uStack_478;
      uStack_980 = uStack_480;
      uStack_9e8 = uStack_4e8;
      uStack_9f0 = uStack_4f0;
      uStack_9d8 = uStack_4d8;
      uStack_9e0 = uStack_4e0;
      uStack_9c8 = uStack_4c8;
      uStack_9d0 = uStack_4d0;
      uStack_9b8 = uStack_4b8;
      uStack_9c0 = uStack_4c0;
      uStack_a28 = uStack_528;
      uStack_a30 = uStack_530;
      uStack_a18 = uStack_518;
      uStack_a20 = uStack_520;
      uStack_a08 = uStack_508;
      uStack_a10 = uStack_510;
      uStack_9f8 = uStack_4f8;
      uStack_a00 = uStack_500;
      uStack_768 = uStack_468;
      uStack_770 = uStack_470;
      uStack_758 = uStack_458;
      uStack_760 = uStack_460;
      uStack_748 = uStack_448;
      uStack_750 = uStack_450;
      uStack_738 = uStack_438;
      uStack_740 = uStack_440;
      uStack_7a8 = uStack_4a8;
      uStack_7b0 = uStack_4b0;
      uStack_798 = uStack_498;
      uStack_7a0 = uStack_4a0;
      uStack_788 = uStack_488;
      uStack_790 = uStack_490;
      uStack_778 = uStack_478;
      uStack_780 = uStack_480;
      uStack_7e8 = uStack_4e8;
      uStack_7f0 = uStack_4f0;
      uStack_7d8 = uStack_4d8;
      uStack_7e0 = uStack_4e0;
      uStack_7c8 = uStack_4c8;
      uStack_7d0 = uStack_4d0;
      uStack_7b8 = uStack_4b8;
      uStack_7c0 = uStack_4c0;
      uStack_828 = uStack_528;
      uStack_830 = uStack_530;
      uStack_818 = uStack_518;
      uStack_820 = uStack_520;
      uStack_808 = uStack_508;
      uStack_810 = uStack_510;
      uStack_7f8 = uStack_4f8;
      uStack_800 = uStack_500;
      uStack_e8 = uStack_868;
      uStack_f0 = uStack_870;
      uStack_d8 = uStack_858;
      uStack_e0 = uStack_860;
      uStack_c8 = uStack_848;
      uStack_d0 = uStack_850;
      uStack_b8 = uStack_838;
      uStack_c0 = uStack_840;
      uStack_128 = uStack_8a8;
      uStack_130 = uStack_8b0;
      uStack_118 = uStack_898;
      uStack_120 = uStack_8a0;
      uStack_108 = uStack_888;
      uStack_110 = uStack_890;
      uStack_f8 = uStack_878;
      uStack_100 = uStack_880;
      uStack_168 = uStack_8e8;
      uStack_170 = uStack_8f0;
      uStack_158 = uStack_8d8;
      uStack_160 = uStack_8e0;
      uStack_148 = uStack_8c8;
      uStack_150 = uStack_8d0;
      uStack_138 = uStack_8b8;
      uStack_140 = uStack_8c0;
      uStack_1a8 = uStack_928;
      uStack_1b0 = uStack_930;
      uStack_198 = uStack_918;
      uStack_1a0 = uStack_920;
      uStack_188 = uStack_908;
      uStack_190 = uStack_910;
      uStack_178 = uStack_8f8;
      uStack_180 = uStack_900;
      func_0x00010366844c(&uStack_330,auStack_b30,0x112f82d70,&UNK_10dbf4438);
      func_0x00010366844c(&uStack_430,auStack_b30,0x112f82d70,&UNK_10dbf4438);
      puVar4 = &uStack_1b0;
      FUN_10366b9cc(puVar4,&uStack_830);
      func_0x000103668494(&uStack_a30,0x112f82d70,&UNK_10dbf4438);
      func_0x000103668494(&uStack_630,0x112f82d70,&UNK_10dbf4438);
      if (((ulong)puVar4 & 1) != 0) goto LAB_103668cf0;
    }
  }
  uVar2 = 0;
LAB_103668b6c:
  return uVar2 & 1;
}



/* Entry: 103668d00; end: 103668d3f;  */

void FUN_103668d00(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf44b8;
  func_0x000107c61520(&UNK_10dbf44b8,&UNK_110676400);
  puRam0000000112f82d88 = puVar1;
  return;
}



/* Entry: 103668d40; end: 103668d63;  */

void FUN_103668d40(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103668d64();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 103668d64; end: 103668da3;  */

void FUN_103668d64(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf4490;
  func_0x000107c61520(&UNK_10dbf4490,&UNK_110676400);
  puRam0000000112f82d90 = puVar1;
  return;
}



/* Entry: 103668da4; end: 103668dcf;  */

void FUN_103668da4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_103668d00();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000101618238();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 103668dd0; end: 103668dd3;  */

void FUN_103668dd0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f82d98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dbf44f8;
  func_0x000107c61520(&UNK_10dbf44f8,&UNK_110676400);
  puRam0000000112f82d98 = puVar1;
  return;
}



/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1015d5c58; end: 1015d5c97;  */

void FUN_1015d5c58(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8228 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967640;
  func_0x000107c61520(&UNK_10d967640,&UNK_1103e41f0);
  puRam0000000112db8228 = puVar1;
  return;
}



/* Entry: 1015d5c98; end: 1015d5cf3;  */

long FUN_1015d5c98(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015d5cf4; end: 1015d5dd3;  */

undefined8 * FUN_1015d5cf4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1015d5dd4; end: 1015d5e27;  */

undefined8 * FUN_1015d5dd4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1015d5e28; end: 1015d5ecb;  */

int FUN_1015d5e28(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015d5ecc; end: 1015d5f0b;  */

void FUN_1015d5ecc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8238 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9675ac;
  func_0x000107c61520(&DAT_10d9675ac,&UNK_1103e41f0);
  puRam0000000112db8238 = puVar1;
  return;
}



/* Entry: 1015d5f0c; end: 1015d5f1f;  */

undefined * FUN_1015d5f0c(void)

{
  return PTR___swiftEmptyArrayStorage_11034f1c8;
}



/* Entry: 1015d5f20; end: 1015d5f67;  */

void FUN_1015d5f20(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d967820,0x10,2);
  uRam0000000113800c40 = uStack_38;
  uRam0000000113800c38 = uStack_40;
  uRam0000000113800c50 = uStack_28;
  uRam0000000113800c48 = uStack_30;
  uRam0000000113800c60 = uStack_18;
  uRam0000000113800c58 = uStack_20;
  return;
}



/* Entry: 1015d5f68; end: 1015d601b;  */

/* WARNING: Removing unreachable block (ram,0x0001015d6018) */

void FUN_1015d5f68(undefined8 param_1,long param_2,long param_3)

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
        FUN_1015d60b8();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1015d601c; end: 1015d60b7;  */

void FUN_1015d601c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    FUN_1015d60b8();
    (*pcVar2)(param_2,1,&UNK_1103e4548,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 1015d60b8; end: 1015d60f7;  */

void FUN_1015d60b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8248 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d967840;
  func_0x000107c61520(&DAT_10d967840,&UNK_1103e4548);
  puRam0000000112db8248 = puVar1;
  return;
}



/* Entry: 1015d60f8; end: 1015d6157;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d60f8(ulong param_1,byte *param_2,byte *param_3,undefined8 param_4,long param_5,
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
  
  FUN_1015d6530(param_1,param_4);
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
LAB_100e26128:
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
      if (1 < uVar5 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
      if (uVar18 == 0) {
        uVar19 = param_6 >> 0x30 & 0xff;
        goto LAB_100e2608c;
      }
      iVar16 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar16,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar17 == (long)(iVar16 - (int)param_5)) goto LAB_100e26094;
LAB_100e26154:
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
      if (uVar18 < 2) goto LAB_100e26084;
LAB_100e26050:
      if (uVar18 == 2) {
        uVar19 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
        if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e26068);
          (*pcVar6)();
        }
LAB_100e2608c:
        if (uVar17 != uVar19) goto LAB_100e26154;
LAB_100e26094:
        if ((long)uVar17 < 1) goto LAB_100e26128;
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
LAB_100e26260:
            unaff_x21 = 0;
            FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x71),
                          (undefined1 *)((long)register0x00000008 + -0x70));
            pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x71);
            goto LAB_100e262b0;
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
              goto LAB_100e262a4;
            }
          }
          pbVar11 = (byte *)0x0;
        }
        else {
          if (uVar15 != 2) {
            *(undefined8 *)((long)register0x00000008 + -0x6a) = 0;
            *(undefined8 *)((long)register0x00000008 + -0x70) = 0;
            pbVar11 = (byte *)((long)register0x00000008 + -0x70);
            goto LAB_100e26260;
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
LAB_100e262a4:
        unaff_x20 = (ulong)param_3 & 0x3fffffffffffffff;
        unaff_x21 = 0;
        FUN_100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),param_2,pbVar11,param_5,
                      param_6);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = param_6;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar17 == 0);
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
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
        FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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
          FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015d6158; end: 1015d6197;  */

void FUN_1015d6158(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 1015d6198; end: 1015d61c7;  */

undefined1  [16] FUN_1015d6198(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                      *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 1015d61c8; end: 1015d61fb;  */

void FUN_1015d61c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 1015d61fc; end: 1015d620f;  */

undefined1  [16] FUN_1015d61fc(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1015d620c;
  return auVar1;
}



/* Entry: 1015d6210; end: 1015d6247;  */

void FUN_1015d6210(void)

{
  FUN_1015d5f68();
  return;
}



/* Entry: 1015d6248; end: 1015d624b;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d6248(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d624c; end: 1015d6283;  */

uint FUN_1015d624c(long param_1,long param_2)

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
  FUN_1015d6dc4();
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



/* Entry: 1015d6284; end: 1015d638b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d6284(undefined8 *param_1)

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
  FUN_1015d6530(uVar18,*param_1);
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
        unaff_x20 = (ulong *)((ulong)pbVar23 & 0x3fffffffffffffff);
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
    *(ulong **)((long)register0x00000008 + -0xa0) = unaff_x20;
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
          if (pbVar21 == (byte *)0x0) goto joined_r0x000100e26620;
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
    FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
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



/* Entry: 1015d638c; end: 1015d63c7;  */

void FUN_1015d638c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8268;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8268,&UNK_10d967818);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d63c8; end: 1015d652f;  */

void FUN_1015d63c8(undefined8 param_1,undefined8 param_2)

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



/* Entry: 1015d6530; end: 1015d6b03;  */

void FUN_1015d6530(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  uint uVar16;
  int iVar17;
  ulong uVar18;
  uint uVar19;
  ulong uVar20;
  long lVar21;
  int iVar22;
  long lVar23;
  ulong *puVar24;
  ulong *puVar25;
  byte bStack_81;
  byte abStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar23 = *(long *)(param_1 + 0x10);
  if (lVar23 == *(long *)(param_2 + 0x10)) {
    if ((lVar23 != 0) && (param_1 != param_2)) {
      puVar24 = (ulong *)(param_2 + 0x48);
      puVar25 = (ulong *)(param_1 + 0x28);
      do {
        uVar18 = puVar25[-1];
        uVar3 = *puVar25;
        uVar20 = puVar25[1];
        uVar4 = puVar25[2];
        uVar1 = puVar25[3];
        uVar5 = puVar25[4];
        uVar6 = puVar24[-4];
        uVar13 = puVar24[-3];
        uVar7 = puVar24[-2];
        uVar2 = puVar24[-1];
        uVar8 = *puVar24;
        if ((((uVar18 != puVar24[-5]) || (uVar3 != uVar6)) &&
            (func_0x000107c605b8(uVar18,uVar3,puVar24[-5],uVar6,0), (uVar18 & 1) == 0)) ||
           (((uVar20 != uVar13 || (uVar4 != uVar7)) &&
            (func_0x000107c605b8(uVar20,uVar4,uVar13,uVar7,0), (uVar20 & 1) == 0))))
        goto LAB_1015d6a9c;
        uVar10 = (uint)(uVar5 >> 0x20);
        uVar16 = uVar10 >> 0x1e;
        uVar11 = (uint)(uVar8 >> 0x20);
        uVar19 = uVar11 >> 0x1e;
        iVar22 = (int)uVar1;
        if (uVar5 >> 0x3e == 3) {
          uVar18 = 0;
          if (((uVar1 != 0) || (uVar5 != 0xc000000000000000)) ||
             ((uVar8 >> 0x3e < 3 || ((uVar18 = 0, uVar2 != 0 || (uVar8 != 0xc000000000000000))))))
          goto joined_r0x0001015d68c4;
        }
        else {
          if (uVar10 >> 0x1e < 2) {
            if (uVar16 == 0) {
              uVar18 = uVar5 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar1 >> 0x20);
              if (SBORROW4(iVar17,iVar22)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6af0);
                (*pcVar12)();
              }
              uVar18 = (ulong)(iVar17 - iVar22);
            }
joined_r0x0001015d68c4:
            if (1 < uVar11 >> 0x1e) goto LAB_1015d66c0;
LAB_1015d66f4:
            if (uVar19 == 0) {
              uVar20 = uVar8 >> 0x30 & 0xff;
            }
            else {
              iVar17 = (int)(uVar2 >> 0x20);
              if (SBORROW4(iVar17,(int)uVar2)) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6ae8);
                (*pcVar12)();
              }
              uVar20 = (ulong)(iVar17 - (int)uVar2);
            }
          }
          else {
            if (uVar16 == 2) {
              uVar18 = *(long *)(uVar1 + 0x18) - *(long *)(uVar1 + 0x10);
              if (SBORROW8(*(long *)(uVar1 + 0x18),*(long *)(uVar1 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6aec);
                (*pcVar12)();
              }
              goto joined_r0x0001015d68c4;
            }
            uVar18 = 0;
            if (uVar19 < 2) goto LAB_1015d66f4;
LAB_1015d66c0:
            if (uVar19 != 2) {
              if (uVar18 == 0) goto LAB_1015d6590;
              goto LAB_1015d6a9c;
            }
            uVar20 = *(long *)(uVar2 + 0x18) - *(long *)(uVar2 + 0x10);
            if (SBORROW8(*(long *)(uVar2 + 0x18),*(long *)(uVar2 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6ae4);
              (*pcVar12)();
            }
          }
          if (uVar18 != uVar20) goto LAB_1015d6a9c;
          if (0 < (long)uVar18) {
            if (uVar16 < 2) {
              if (uVar16 != 0) {
                lVar21 = (long)iVar22;
                uVar18 = ((long)uVar1 >> 0x20) - lVar21;
                if ((long)uVar1 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6af4);
                  (*pcVar12)();
                }
                func_0x000107c61434(uVar3);
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar1,uVar5);
                func_0x000107c61434(uVar6);
                func_0x000107c61434(uVar7);
                uVar20 = uVar2;
                func_0x00010006c00c(uVar2,uVar8);
                func_0x000107c5ec30();
                if (uVar20 == 0) {
                  func_0x000107c5ec38();
                  uVar18 = 0;
                  lVar21 = 0;
                }
                else {
                  uVar13 = uVar20;
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar13)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6b00);
                    (*pcVar12)();
                  }
                  uVar20 = (lVar21 - uVar13) + uVar20;
                  func_0x000107c5ec38();
                  if ((long)uVar18 <= (long)uVar13) {
                    uVar13 = uVar18;
                  }
                  uVar18 = 0;
                  if (uVar20 != 0) {
                    uVar18 = uVar20;
                  }
                  lVar21 = 0;
                  if (uVar20 != 0) {
                    lVar21 = uVar13 + uVar20;
                  }
                }
LAB_1015d6a44:
                FUN_100e25bdc(abStack_80,uVar18,lVar21,uVar2,uVar8);
                func_0x000107c6142c(uVar7);
                func_0x000107c6142c(uVar6);
                func_0x00010006c090(uVar2,uVar8);
                func_0x000107c6142c(uVar4);
                func_0x000107c6142c(uVar3);
                func_0x00010006c090(uVar1,uVar5);
                if ((abStack_80[0] & 1) != 0) goto LAB_1015d6590;
                goto LAB_1015d6a9c;
              }
              abStack_80[0] = (byte)uVar1;
              abStack_80[1] = (byte)(uVar1 >> 8);
              abStack_80[2] = (byte)(uVar1 >> 0x10);
              abStack_80[3] = (byte)(uVar1 >> 0x18);
              abStack_80[4] = (byte)(uVar1 >> 0x20);
              abStack_80[5] = (byte)(uVar1 >> 0x28);
              abStack_80[6] = (byte)(uVar1 >> 0x30);
              abStack_80[7] = (byte)(uVar1 >> 0x38);
              abStack_80[8] = (byte)uVar5;
              abStack_80[9] = (byte)(uVar5 >> 8);
              abStack_80[10] = (byte)(uVar5 >> 0x10);
              abStack_80[0xb] = (byte)(uVar5 >> 0x18);
              abStack_80[0xc] = (byte)(uVar5 >> 0x20);
              abStack_80[0xd] = (byte)(uVar5 >> 0x28);
              func_0x000107c61434(uVar3);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar1,uVar5);
              func_0x000107c61434(uVar6);
              func_0x000107c61434(uVar7);
              func_0x00010006c00c(uVar2,uVar8);
              FUN_100e25bdc(&bStack_81,abStack_80,abStack_80 + (uVar5 >> 0x30 & 0xff),uVar2,uVar8);
              func_0x000107c6142c(uVar7);
            }
            else {
              if (uVar16 == 2) {
                lVar21 = *(long *)(uVar1 + 0x10);
                lVar9 = *(long *)(uVar1 + 0x18);
                func_0x000107c61434(uVar3);
                func_0x000107c61434(uVar4);
                func_0x00010006c00c(uVar1,uVar5);
                func_0x000107c61434(uVar6);
                func_0x000107c61434(uVar7);
                uVar18 = uVar2;
                func_0x00010006c00c(uVar2,uVar8);
                func_0x000107c5ec30();
                uVar20 = uVar18;
                if (uVar18 != 0) {
                  func_0x000107c5ec3c();
                  if (SBORROW8(lVar21,uVar20)) {
                    /* WARNING: Does not return */
                    pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6afc);
                    (*pcVar12)();
                  }
                  uVar18 = (lVar21 - uVar20) + uVar18;
                }
                uVar13 = lVar9 - lVar21;
                if (SBORROW8(lVar9,lVar21)) {
                    /* WARNING: Does not return */
                  pcVar12 = (code *)SoftwareBreakpoint(1,0x1015d6af8);
                  (*pcVar12)();
                }
                func_0x000107c5ec38();
                if (uVar18 == 0) {
                  lVar21 = 0;
                }
                else {
                  if ((long)uVar13 <= (long)uVar20) {
                    uVar20 = uVar13;
                  }
                  lVar21 = uVar20 + uVar18;
                }
                goto LAB_1015d6a44;
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
              func_0x000107c61434(uVar3);
              func_0x000107c61434(uVar4);
              func_0x00010006c00c(uVar1,uVar5);
              func_0x000107c61434(uVar6);
              func_0x000107c61434(uVar7);
              func_0x00010006c00c(uVar2,uVar8);
              FUN_100e25bdc(&bStack_81,abStack_80,abStack_80,uVar2,uVar8);
              func_0x000107c6142c(uVar7);
            }
            func_0x000107c6142c(uVar6);
            func_0x00010006c090(uVar2,uVar8);
            func_0x000107c6142c(uVar4);
            func_0x000107c6142c(uVar3);
            func_0x00010006c090(uVar1,uVar5);
            if ((bStack_81 & 1) == 0) goto LAB_1015d6a9c;
          }
        }
LAB_1015d6590:
        puVar24 = puVar24 + 6;
        puVar25 = puVar25 + 6;
        lVar23 = lVar23 + -1;
      } while (lVar23 != 0);
    }
    uVar14 = 1;
  }
  else {
LAB_1015d6a9c:
    uVar14 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78(uVar14);
  if (puRam0000000112db8250 != (undefined *)0x0) {
    return;
  }
  puVar15 = &UNK_10d967760;
  func_0x000107c61520(&UNK_10d967760,&UNK_1103e43a0);
  puRam0000000112db8250 = puVar15;
  return;
}



/* Entry: 1015d6b04; end: 1015d6b43;  */

void FUN_1015d6b04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8250 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967760;
  func_0x000107c61520(&UNK_10d967760,&UNK_1103e43a0);
  puRam0000000112db8250 = puVar1;
  return;
}



/* Entry: 1015d6b44; end: 1015d6b67;  */

void FUN_1015d6b44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d6b68();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d6b68; end: 1015d6ba7;  */

void FUN_1015d6b68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8258 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967738;
  func_0x000107c61520(&UNK_10d967738,&UNK_1103e43a0);
  puRam0000000112db8258 = puVar1;
  return;
}



/* Entry: 1015d6ba8; end: 1015d6bd3;  */

void FUN_1015d6ba8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d6b04();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015d50e0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d6bd4; end: 1015d6bd7;  */

void FUN_1015d6bd4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9677a0;
  func_0x000107c61520(&UNK_10d9677a0,&UNK_1103e43a0);
  puRam0000000112db8260 = puVar1;
  return;
}



/* Entry: 1015d6bd8; end: 1015d6c17;  */

void FUN_1015d6bd8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8260 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9677a0;
  func_0x000107c61520(&UNK_10d9677a0,&UNK_1103e43a0);
  puRam0000000112db8260 = puVar1;
  return;
}



/* Entry: 1015d6c18; end: 1015d6c3f;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1015d6c18(undefined8 *param_1)

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



/* Entry: 1015d6c40; end: 1015d6ce7;  */

undefined8 * FUN_1015d6c40(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015d6ce8; end: 1015d6d2b;  */

undefined8 * FUN_1015d6ce8(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015d6d2c; end: 1015d6dc3;  */

int FUN_1015d6d2c(ulong *param_1,int param_2)

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



/* Entry: 1015d6dc4; end: 1015d6e03;  */

void FUN_1015d6dc4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96770c;
  func_0x000107c61520(&DAT_10d96770c,&UNK_1103e43a0);
  puRam0000000112db8270 = puVar1;
  return;
}



/* Entry: 1015d6e04; end: 1015d6e0b;  */

undefined8 * FUN_1015d6e04(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015d6e0c; end: 1015d6e53;  */

void FUN_1015d6e0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d967970,0x20,2);
  uRam0000000113800c70 = uStack_38;
  uRam0000000113800c68 = uStack_40;
  uRam0000000113800c80 = uStack_28;
  uRam0000000113800c78 = uStack_30;
  uRam0000000113800c90 = uStack_18;
  uRam0000000113800c88 = uStack_20;
  return;
}



/* Entry: 1015d6e54; end: 1015d6eeb;  */

void FUN_1015d6e54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1015d6ea8:
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
    return;
  }
  if (lVar1 != 1) goto code_r0x0001015d6ec4;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1015d6e90;
code_r0x0001015d6ec4:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1015d6e90:
    (*pcVar3)();
  }
  goto LAB_1015d6ea8;
}



/* Entry: 1015d6eec; end: 1015d6f8f;  */

void FUN_1015d6eec(undefined8 param_1,undefined8 param_2,long param_3)

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
      func_0x000100076224(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
    }
  }
  return;
}



/* Entry: 1015d6f90; end: 1015d6fcf;  */

void FUN_1015d6f90(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[2] = 0;
  param_1[3] = 0xe000000000000000;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 1015d6fd0; end: 1015d6fff;  */

undefined1  [16] FUN_1015d6fd0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 1015d7000; end: 1015d7033;  */

void FUN_1015d7000(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 1015d7034; end: 1015d7047;  */

undefined1  [16] FUN_1015d7034(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1015d7044;
  return auVar1;
}



/* Entry: 1015d7048; end: 1015d706f;  */

void FUN_1015d7048(void)

{
  FUN_1015d6e54();
  return;
}



/* Entry: 1015d7070; end: 1015d7073;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d7070(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d7074; end: 1015d70ab;  */

uint FUN_1015d7074(long param_1,long param_2)

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
  FUN_1015d76ec();
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



/* Entry: 1015d70ac; end: 1015d70f3;  */

uint FUN_1015d70ac(undefined8 *param_1)

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
  FUN_1015d7328(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015d70f4; end: 1015d7193;  */

/* WARNING: Possible PIC construction at 0x0001015d7140: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d7150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d7144) */
/* WARNING: Removing unreachable block (ram,0x0001015d7154) */

void FUN_1015d70f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db8278 != -1) {
    func_0x000107c61568(0x112db8278,FUN_1015d6e0c);
  }
  uVar5 = uRam0000000113800c90;
  uVar4 = uRam0000000113800c88;
  uVar3 = uRam0000000113800c80;
  uVar2 = uRam0000000113800c78;
  uVar1 = uRam0000000113800c70;
  *param_1 = uRam0000000113800c68;
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



/* Entry: 1015d7194; end: 1015d71cf;  */

void FUN_1015d7194(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db8298;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db8298,&UNK_10d967968);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d71d0; end: 1015d72e3;  */

void FUN_1015d71d0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [72];
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_50 = unaff_x20[2];
  uStack_48 = unaff_x20[3];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  func_0x000107c6068c(auStack_a8,0);
  func_0x000107c5fa50(auStack_a8,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1015d72e4; end: 1015d7327;  */

uint FUN_1015d72e4(undefined8 *param_1,undefined8 *param_2)

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
  FUN_1015d7328(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 1015d7328; end: 1015d73a3;  */

/* WARNING: Possible PIC construction at 0x0001015d7358: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015d735c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d7328(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 1015d73a4; end: 1015d73e3;  */

void FUN_1015d73a4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8280 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9678b0;
  func_0x000107c61520(&UNK_10d9678b0,&UNK_1103e4548);
  puRam0000000112db8280 = puVar1;
  return;
}



/* Entry: 1015d73e4; end: 1015d7407;  */

void FUN_1015d73e4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d7408();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d7408; end: 1015d7447;  */

void FUN_1015d7408(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967888;
  func_0x000107c61520(&UNK_10d967888,&UNK_1103e4548);
  puRam0000000112db8288 = puVar1;
  return;
}



/* Entry: 1015d7448; end: 1015d7473;  */

void FUN_1015d7448(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d73a4();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1015d60b8();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d7474; end: 1015d7477;  */

void FUN_1015d7474(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9678f0;
  func_0x000107c61520(&UNK_10d9678f0,&UNK_1103e4548);
  puRam0000000112db8290 = puVar1;
  return;
}



/* Entry: 1015d7478; end: 1015d74b7;  */

void FUN_1015d7478(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db8290 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9678f0;
  func_0x000107c61520(&UNK_10d9678f0,&UNK_1103e4548);
  puRam0000000112db8290 = puVar1;
  return;
}



/* Entry: 1015d74b8; end: 1015d7513;  */

long FUN_1015d74b8(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015d7514; end: 1015d75f3;  */

undefined8 * FUN_1015d7514(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  uVar1 = param_2[4];
  uVar3 = param_2[5];
  func_0x000107c61434();
  func_0x000107c61434(uVar2);
  func_0x00010006c00c(uVar1,uVar3);
  param_1[4] = uVar1;
  param_1[5] = uVar3;
  return param_1;
}



/* Entry: 1015d75f4; end: 1015d7647;  */

undefined8 * FUN_1015d75f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_1[4];
  uVar2 = param_1[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  func_0x00010006c090(uVar1,uVar2);
  return param_1;
}



/* Entry: 1015d7648; end: 1015d76eb;  */

int FUN_1015d7648(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015d76ec; end: 1015d772b;  */

void FUN_1015d76ec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d96785c;
  func_0x000107c61520(&DAT_10d96785c,&UNK_1103e4548);
  puRam0000000112db82a0 = puVar1;
  return;
}



/* Entry: 1015d772c; end: 1015d7747;  */

long FUN_1015d772c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if ((char)param_1[2] == '\x01') {
    if ((char)param_2[2] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[2] == '\x01') {
    return 0;
  }
  if ((lVar1 == *param_2) && (param_1[1] == param_2[1])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,param_1[1],*param_2,param_2[1],0);
  return lVar1;
}



/* Entry: 1015d7748; end: 1015d778f;  */

void FUN_1015d7748(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d967b20,0x3d,2);
  uRam0000000113800ca0 = uStack_38;
  uRam0000000113800c98 = uStack_40;
  uRam0000000113800cb0 = uStack_28;
  uRam0000000113800ca8 = uStack_30;
  uRam0000000113800cc0 = uStack_18;
  uRam0000000113800cb8 = uStack_20;
  return;
}



/* Entry: 1015d7790; end: 1015d7883;  */

/* WARNING: Removing unreachable block (ram,0x0001015d7848) */
/* WARNING: Removing unreachable block (ram,0x0001015d77e0) */

void FUN_1015d7790(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
LAB_1015d77e4:
  while( true ) {
    lVar1 = param_2;
    lVar2 = param_3;
    (*pcVar4)();
    if ((unaff_x21 != 0) || (((uint)lVar2 & 0xff) == 1)) {
      return;
    }
    if (lVar1 < 3) break;
    if (lVar1 == 3) {
      FUN_1015d7884(param_1);
    }
    else if (lVar1 == 4) {
      FUN_1015d7884(param_1);
    }
  }
  if (lVar1 != 1) goto code_r0x0001015d7808;
  pcVar3 = *(code **)(param_3 + 0x150);
  goto LAB_1015d7854;
code_r0x0001015d7808:
  if (lVar1 == 2) {
    pcVar3 = *(code **)(param_3 + 0x150);
LAB_1015d7854:
    (*pcVar3)();
  }
  goto LAB_1015d77e4;
}



/* Entry: 1015d7884; end: 1015d7967;  */

/* WARNING: Removing unreachable block (ram,0x0001015d792c) */

void FUN_1015d7884(undefined8 param_1,long param_2,undefined8 param_3,long param_4,
                  undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 uVar5;
  long unaff_x21;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = 0;
  uStack_60 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_60,param_3,param_4);
  lVar4 = lStack_58;
  uVar3 = uStack_60;
  if (unaff_x21 == 0) {
    if (lStack_58 != 0) {
      if (*(char *)(param_2 + 0x30) == -1) {
        uVar5 = 0xff;
      }
      else {
        (**(code **)(param_4 + 8))(param_3,param_4);
        uVar5 = *(undefined1 *)(param_2 + 0x30);
      }
      uVar1 = *(undefined8 *)(param_2 + 0x20);
      uVar2 = *(undefined8 *)(param_2 + 0x28);
      *(undefined8 *)(param_2 + 0x20) = uVar3;
      *(long *)(param_2 + 0x28) = lVar4;
      *(undefined1 *)(param_2 + 0x30) = param_5;
      FUN_1015d37f8(uVar1,uVar2,uVar5);
    }
  }
  else {
    func_0x000107c6142c(lStack_58);
  }
  return;
}



/* Entry: 1015d7968; end: 1015d7a4b;  */

void FUN_1015d7968(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((char)unaff_x20[6] == '\x01') {
    uVar1 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    pcVar4 = *(code **)(param_3 + 0x70);
    uVar3 = 4;
  }
  else {
    if ((char)unaff_x20[6] == -1) goto LAB_1015d7a28;
    uVar1 = unaff_x20[4];
    uVar2 = unaff_x20[5];
    pcVar4 = *(code **)(param_3 + 0x70);
    uVar3 = 3;
  }
  (*pcVar4)(uVar1,uVar2,uVar3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_1015d7a28:
  func_0x000100076224(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  return;
}



/* Entry: 1015d7a4c; end: 1015d7a9b;  */

/* WARNING: Possible PIC construction at 0x0001015d7ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d7f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015d7ea8) */
/* WARNING: Removing unreachable block (ram,0x0001015d7f4c) */
/* WARNING: Removing unreachable block (ram,0x0001015d7f50) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d7a4c(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar17 = (byte *)param_1[1];
  pbVar18 = (byte *)*param_2;
  pbVar14 = (byte *)param_2[1];
  if ((byte *)*param_1 == (byte *)*param_2 && (byte *)param_1[1] == (byte *)param_2[1]) {
    uVar15 = param_1[2];
    if ((uVar15 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar15 & 1) == 0)) {
      return (byte *)0x0;
    }
    cVar1 = *(char *)(param_2 + 6);
    if (*(char *)(param_1 + 6) == -1) {
      if (cVar1 != -1) {
        return (byte *)0x0;
      }
    }
    else {
      if (cVar1 == -1) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[4];
      pbVar17 = (byte *)param_1[5];
      pbVar18 = (byte *)param_2[4];
      pbVar14 = (byte *)param_2[5];
      if (*(char *)(param_1 + 6) == '\x01') {
        if (cVar1 != '\x01') {
          return (byte *)0x0;
        }
      }
      else if (cVar1 == '\x01') {
        return (byte *)0x0;
      }
      if ((pbVar13 != pbVar18) || (pbVar17 != pbVar14)) goto code_r0x000107c605b8;
    }
    pbVar11 = (byte *)param_1[7];
    pbVar26 = (byte *)param_1[8];
    lVar25 = param_2[7];
    uVar15 = param_2[8];
    puVar8 = (undefined1 *)register0x00000008;
    do {
      *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
      *(byte **)(puVar8 + -0x48) = unaff_x25;
      *(byte **)(puVar8 + -0x40) = unaff_x24;
      *(byte **)(puVar8 + -0x38) = unaff_x23;
      *(ulong *)(puVar8 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
      *(ulong *)(puVar8 + -0x20) = unaff_x20;
      *(byte **)(puVar8 + -0x18) = unaff_x19;
      *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar8 + -8) = unaff_x30;
      *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar5 = (uint)((ulong)pbVar26 >> 0x20);
      uVar19 = uVar5 >> 0x1e;
      uVar6 = (uint)(uVar15 >> 0x20);
      uVar22 = uVar6 >> 0x1e;
      iVar9 = (int)pbVar11;
      pbVar16 = pbVar26;
      if ((ulong)pbVar26 >> 0x3e == 3) {
        uVar21 = 0;
        if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
            (uVar15 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar15 != 0xc000000000000000))))
        goto joined_r0x000100e26170;
LAB_100e26128:
        pbVar10 = (byte *)0x1;
      }
      else if (uVar5 >> 0x1e < 2) {
        if (uVar19 == 0) {
          uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
        }
        else {
          iVar20 = (int)((ulong)pbVar11 >> 0x20);
          if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
            (*pcVar7)();
          }
          uVar21 = (ulong)(iVar20 - iVar9);
        }
joined_r0x000100e26170:
        if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
        if (uVar22 == 0) {
          uVar23 = uVar15 >> 0x30 & 0xff;
          goto LAB_100e2608c;
        }
        iVar20 = (int)((ulong)lVar25 >> 0x20);
        if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
          (*pcVar7)();
        }
        if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar19 == 2) {
          uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
          if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
            (*pcVar7)();
          }
          goto joined_r0x000100e26170;
        }
        uVar21 = 0;
        if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
        if (uVar22 == 2) {
          uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
          if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
            (*pcVar7)();
          }
LAB_100e2608c:
          if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
          if ((long)uVar21 < 1) goto LAB_100e26128;
          if (uVar19 < 2) {
            if (uVar19 == 0) {
              puVar8[-0x70] = (char)pbVar11;
              puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
              puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
              puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
              puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
              puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
              puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
              puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
              puVar8[-0x68] = (char)pbVar26;
              puVar8[-0x67] = (char)((ulong)pbVar26 >> 8);
              puVar8[-0x66] = (char)((ulong)pbVar26 >> 0x10);
              puVar8[-0x65] = (char)((ulong)pbVar26 >> 0x18);
              puVar8[-100] = (char)((ulong)pbVar26 >> 0x20);
              puVar8[-99] = (char)((ulong)pbVar26 >> 0x28);
              pbVar16 = puVar8 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
              unaff_x21 = 0;
              FUN_100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
              pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
              goto LAB_100e262b0;
            }
            unaff_x25 = (byte *)(long)iVar9;
            unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
            if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
              (*pcVar7)();
            }
            func_0x000107c5ec30();
            unaff_x24 = pbVar26;
            if (pbVar11 == (byte *)0x0) {
              func_0x000107c5ec38();
              pbVar11 = (byte *)0x0;
            }
            else {
              pbVar16 = pbVar11;
              func_0x000107c5ec3c();
              if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                (*pcVar7)();
              }
              pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar16);
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                if ((long)unaff_x23 <= (long)pbVar16) {
                  pbVar16 = unaff_x23;
                }
                pbVar16 = pbVar16 + (long)pbVar11;
                goto LAB_100e262a4;
              }
            }
            pbVar16 = (byte *)0x0;
          }
          else {
            if (uVar19 != 2) {
              *(undefined8 *)(puVar8 + -0x6a) = 0;
              *(undefined8 *)(puVar8 + -0x70) = 0;
              pbVar16 = puVar8 + -0x70;
              goto LAB_100e26260;
            }
            lVar27 = *(long *)(pbVar11 + 0x10);
            unaff_x24 = *(byte **)(pbVar11 + 0x18);
            func_0x000107c5ec30();
            pbVar16 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar27,(long)pbVar16)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                (*pcVar7)();
              }
              pbVar11 = pbVar11 + (lVar27 - (long)pbVar16);
            }
            unaff_x23 = unaff_x24 + -lVar27;
            if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
              (*pcVar7)();
            }
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            unaff_x25 = pbVar26;
            if (pbVar11 == (byte *)0x0) {
              pbVar16 = (byte *)0x0;
            }
            else {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar11;
            }
          }
LAB_100e262a4:
          unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
          unaff_x21 = 0;
          FUN_100e25bdc(puVar8 + -0x70,pbVar11,pbVar16,lVar25,uVar15);
          pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
          unaff_x22 = uVar15;
        }
        else {
          pbVar10 = (byte *)(ulong)(uVar21 == 0);
        }
      }
LAB_100e262b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
        return pbVar10;
      }
      func_0x000107c60e78();
      *(byte **)(puVar8 + -0xc0) = unaff_x24;
      *(byte **)(puVar8 + -0xb8) = unaff_x23;
      *(ulong *)(puVar8 + -0xb0) = unaff_x22;
      *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
      *(ulong *)(puVar8 + -0xa0) = unaff_x20;
      *(byte **)(puVar8 + -0x98) = unaff_x19;
      *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
      *(code **)(puVar8 + -0x88) = FUN_100e26304;
      pbVar13 = *(byte **)pbVar10;
      pbVar11 = *(byte **)(pbVar10 + 8);
      pbVar24 = *(byte **)(pbVar10 + 0x18);
      bVar28 = pbVar10[0x28];
      pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                         (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
      pbVar17 = pbVar11;
      if (bVar28 < 3) {
        if (bVar28 == 0) {
          if (pbVar16[0x28] == 0) {
            lVar25 = *(long *)pbVar16;
            uVar12 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar25,uVar12);
            return (byte *)(ulong)((uint)pbVar13 & 1);
          }
          return (byte *)0x0;
        }
        if (bVar28 == 1) {
          if (pbVar16[0x28] != 1) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar16 + 8);
          pbVar14 = *(byte **)(pbVar16 + 0x10);
          lVar25 = *(long *)pbVar16;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          if (((ulong)pbVar13 & 1) == 0) {
            return (byte *)0x0;
          }
          pbVar13 = pbVar11;
          pbVar17 = pbVar26;
          if ((pbVar11 == pbVar18) && (pbVar26 == pbVar14)) {
            return (byte *)0x1;
          }
        }
        else {
          if (pbVar16[0x28] != 2) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)pbVar16;
          pbVar14 = *(byte **)(pbVar16 + 8);
          lVar25 = *(long *)(pbVar16 + 0x18);
          if ((pbVar13 == pbVar18) && (pbVar11 == pbVar14)) {
            if (((pbVar10[0x10] ^ pbVar16[0x10]) & 1) != 0) {
              return (byte *)0x0;
            }
            if (pbVar24 != (byte *)0x0) {
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar25);
              func_0x000107c61174();
              pbVar14 = pbVar24;
              func_0x000107c60118();
              func_0x000107c61170(pbVar24);
              func_0x000107c61170(lVar25);
              pbVar24 = pbVar14;
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar25 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
        }
        break;
      }
      lVar27 = *(long *)(pbVar10 + 0x20);
      if (bVar28 < 5) {
        if (bVar28 != 3) {
          if (pbVar16[0x28] != 4) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)pbVar16;
          pbVar14 = *(byte **)(pbVar16 + 8);
          if (((pbVar13 == pbVar18) && (pbVar11 == pbVar14)) &&
             (pbVar13 = pbVar26, pbVar17 = pbVar24, pbVar18 = *(byte **)(pbVar16 + 0x10),
             pbVar14 = *(byte **)(pbVar16 + 0x18),
             pbVar26 == *(byte **)(pbVar16 + 0x10) && pbVar24 == *(byte **)(pbVar16 + 0x18))) {
            return (byte *)0x1;
          }
          break;
        }
        if (pbVar16[0x28] != 3) {
          return (byte *)0x0;
        }
        if ((uint)*pbVar16 != ((uint)pbVar13 & 0xff)) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar16 + 0x10);
        lVar25 = *(long *)(pbVar16 + 0x20);
        if (pbVar26 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          if (pbVar14 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar16 + 8);
          pbVar13 = pbVar11;
          pbVar17 = pbVar26;
          if ((pbVar11 != pbVar18) || (pbVar26 != pbVar14)) break;
        }
        if (lVar27 != 0) {
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          if ((pbVar24 == *(byte **)(pbVar16 + 0x18)) && (lVar27 == lVar25)) {
            return (byte *)0x1;
          }
          func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar16 + 0x18),lVar25,0);
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
        goto joined_r0x000100e26620;
      }
      if (bVar28 != 5) {
        if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
            lVar27 == 0) && pbVar26 == (byte *)0x0) {
          if (pbVar16[0x28] != 6) {
            return (byte *)0x0;
          }
          lVar27 = *(long *)(pbVar16 + 0x20);
          lVar25 = *(long *)(pbVar16 + 0x18);
          bVar28 = pbVar16[8] | (byte)lVar25;
          bVar29 = pbVar16[9] | (byte)((ulong)lVar25 >> 8);
          bVar30 = pbVar16[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar31 = pbVar16[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar32 = pbVar16[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar33 = pbVar16[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar34 = pbVar16[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar35 = pbVar16[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar36 = pbVar16[0x10] | (byte)lVar27;
          bVar37 = pbVar16[0x11] | (byte)((ulong)lVar27 >> 8);
          bVar38 = pbVar16[0x12] | (byte)((ulong)lVar27 >> 0x10);
          bVar39 = pbVar16[0x13] | (byte)((ulong)lVar27 >> 0x18);
          bVar40 = pbVar16[0x14] | (byte)((ulong)lVar27 >> 0x20);
          bVar41 = pbVar16[0x15] | (byte)((ulong)lVar27 >> 0x28);
          bVar42 = pbVar16[0x16] | (byte)((ulong)lVar27 >> 0x30);
          bVar43 = pbVar16[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
          auVar4[1] = bVar29;
          auVar4[0] = bVar28;
          auVar4[2] = bVar30;
          auVar4[3] = bVar31;
          auVar4[4] = bVar32;
          auVar4[5] = bVar33;
          auVar4[6] = bVar34;
          auVar4[7] = bVar35;
          auVar4[8] = bVar36;
          auVar4[9] = bVar37;
          auVar4[10] = bVar38;
          auVar4[0xb] = bVar39;
          auVar4[0xc] = bVar40;
          auVar4[0xd] = bVar41;
          auVar4[0xe] = bVar42;
          auVar4[0xf] = bVar43;
          auVar44 = NEON_ext(auVar44,auVar4,8,1);
          if (CONCAT17(bVar35 | auVar44[7],
                       CONCAT16(bVar34 | auVar44[6],
                                CONCAT15(bVar33 | auVar44[5],
                                         CONCAT14(bVar32 | auVar44[4],
                                                  CONCAT13(bVar31 | auVar44[3],
                                                           CONCAT12(bVar30 | auVar44[2],
                                                                    CONCAT11(bVar29 | auVar44[1],
                                                                             bVar28 | auVar44[0]))))
                                        ))) == 0 && *(long *)pbVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if ((pbVar13 == (byte *)0x1) &&
           (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
            lVar27 == 0)) {
          if (pbVar16[0x28] != 6) {
            return (byte *)0x0;
          }
          if (*(long *)pbVar16 != 1) {
            return (byte *)0x0;
          }
        }
        else {
          if (pbVar16[0x28] != 6) {
            return (byte *)0x0;
          }
          if (*(long *)pbVar16 != 2) {
            return (byte *)0x0;
          }
        }
        lVar27 = *(long *)(pbVar16 + 0x20);
        lVar25 = *(long *)(pbVar16 + 0x18);
        bVar28 = pbVar16[8] | (byte)lVar25;
        bVar29 = pbVar16[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar16[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar16[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar16[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar16[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar16[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar16[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar16[0x10] | (byte)lVar27;
        bVar37 = pbVar16[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar16[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar16[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar16[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar16[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar16[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar16[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
        auVar44 = NEON_ext(auVar2,auVar3,8,1);
        lVar25 = CONCAT17(bVar35 | auVar44[7],
                          CONCAT16(bVar34 | auVar44[6],
                                   CONCAT15(bVar33 | auVar44[5],
                                            CONCAT14(bVar32 | auVar44[4],
                                                     CONCAT13(bVar31 | auVar44[3],
                                                              CONCAT12(bVar30 | auVar44[2],
                                                                       CONCAT11(bVar29 | auVar44[1],
                                                                                bVar28 | auVar44[0])
                                                                      ))))));
        goto joined_r0x000100e26620;
      }
      if (pbVar16[0x28] != 5) {
        return (byte *)0x0;
      }
      lVar25 = *(long *)(pbVar16 + 8);
      uVar15 = *(ulong *)(pbVar16 + 0x10);
      lVar27 = *(long *)pbVar16;
      uVar12 = 0;
      FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(pbVar13,lVar27,uVar12);
      if (((ulong)pbVar13 & 1) == 0) {
        return (byte *)0x0;
      }
      unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
      unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
      unaff_x20 = *(ulong *)(puVar8 + -0xa0);
      unaff_x19 = *(byte **)(puVar8 + -0x98);
      unaff_x22 = *(ulong *)(puVar8 + -0xb0);
      unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
      unaff_x24 = *(byte **)(puVar8 + -0xc0);
      unaff_x23 = *(byte **)(puVar8 + -0xb8);
      puVar8 = puVar8 + -0x80;
    } while( true );
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar17,pbVar18,pbVar14,0);
  return pbVar13;
}



/* Entry: 1015d7a9c; end: 1015d7acb;  */

undefined1  [16] FUN_1015d7a9c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x38);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40));
  return auVar1;
}



/* Entry: 1015d7acc; end: 1015d7aff;  */

void FUN_1015d7acc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  *(undefined8 *)(unaff_x20 + 0x38) = param_1;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  return;
}



/* Entry: 1015d7b00; end: 1015d7b13;  */

undefined1  [16] FUN_1015d7b00(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x38;
  auVar1._0_8_ = 0x1015d7b10;
  return auVar1;
}



/* Entry: 1015d7b14; end: 1015d7b3b;  */

void FUN_1015d7b14(void)

{
  FUN_1015d7790();
  return;
}



/* Entry: 1015d7b3c; end: 1015d7b3f;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1015d7b3c(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1015d7b40; end: 1015d7b77;  */

uint FUN_1015d7b40(long param_1,long param_2)

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
  FUN_1015d85b4();
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



/* Entry: 1015d7b78; end: 1015d7bcf;  */

uint FUN_1015d7b78(undefined8 *param_1)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_38 = param_1[5];
  uStack_40 = param_1[4];
  uStack_28 = param_1[7];
  uStack_30 = param_1[6];
  uStack_20 = param_1[8];
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_48 = param_1[3];
  uStack_50 = param_1[2];
  uStack_88 = unaff_x20[5];
  uStack_90 = unaff_x20[4];
  uStack_78 = unaff_x20[7];
  uStack_80 = unaff_x20[6];
  uStack_70 = unaff_x20[8];
  uStack_a8 = unaff_x20[1];
  uStack_b0 = *unaff_x20;
  uStack_98 = unaff_x20[3];
  uStack_a0 = unaff_x20[2];
  FUN_1015d7e74(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1015d7bd0; end: 1015d7c6f;  */

/* WARNING: Possible PIC construction at 0x0001015d7c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d7c2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001015d7c20) */
/* WARNING: Removing unreachable block (ram,0x0001015d7c30) */

void FUN_1015d7bd0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112db82a8 != -1) {
    func_0x000107c61568(0x112db82a8,FUN_1015d7748);
  }
  uVar5 = uRam0000000113800cc0;
  uVar4 = uRam0000000113800cb8;
  uVar3 = uRam0000000113800cb0;
  uVar2 = uRam0000000113800ca8;
  uVar1 = uRam0000000113800ca0;
  *param_1 = uRam0000000113800c98;
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



/* Entry: 1015d7c70; end: 1015d7cab;  */

void FUN_1015d7c70(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112db82c8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112db82c8,&UNK_10d967b10);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1015d7cac; end: 1015d7dbf;  */

void FUN_1015d7cac(undefined8 param_1,undefined8 param_2)

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
  
  uStack_58 = unaff_x20[5];
  uStack_60 = unaff_x20[4];
  uStack_48 = unaff_x20[7];
  uStack_50 = unaff_x20[6];
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



/* Entry: 1015d7dc0; end: 1015d7e17;  */

uint FUN_1015d7dc0(undefined8 *param_1,undefined8 *param_2)

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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  uVar1 = 0;
  uStack_88 = param_1[5];
  uStack_90 = param_1[4];
  uStack_78 = param_1[7];
  uStack_80 = param_1[6];
  uStack_70 = param_1[8];
  uStack_a8 = param_1[1];
  uStack_b0 = *param_1;
  uStack_98 = param_1[3];
  uStack_a0 = param_1[2];
  uStack_38 = param_2[5];
  uStack_40 = param_2[4];
  uStack_28 = param_2[7];
  uStack_30 = param_2[6];
  uStack_20 = param_2[8];
  uStack_58 = param_2[1];
  uStack_60 = *param_2;
  uStack_48 = param_2[3];
  uStack_50 = param_2[2];
  FUN_1015d7e74(&uStack_b0,&uStack_60);
  return uVar1 & 1;
}



/* Entry: 1015d7e18; end: 1015d7e73;  */

long FUN_1015d7e18(long param_1,long param_2,char param_3,long param_4,long param_5,char param_6)

{
  if (param_3 == '\x01') {
    if (param_6 != '\x01') {
      return 0;
    }
  }
  else if (param_6 == '\x01') {
    return 0;
  }
  if ((param_1 == param_4) && (param_2 == param_5)) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(param_1,param_2,param_4,param_5,0);
  return param_1;
}



/* Entry: 1015d7e74; end: 1015d7f53;  */

/* WARNING: Possible PIC construction at 0x0001015d7ea4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001015d7f48: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001015d7ea8) */
/* WARNING: Removing unreachable block (ram,0x0001015d7f4c) */
/* WARNING: Removing unreachable block (ram,0x0001015d7f50) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1015d7e74(undefined8 *param_1,undefined8 *param_2)

{
  char cVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  code *pcVar7;
  undefined1 *puVar8;
  int iVar9;
  byte *pbVar10;
  byte *pbVar11;
  undefined8 uVar12;
  byte *pbVar13;
  byte *pbVar14;
  ulong uVar15;
  byte *pbVar16;
  byte *pbVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
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
  
  pbVar13 = (byte *)*param_1;
  pbVar17 = (byte *)param_1[1];
  pbVar18 = (byte *)*param_2;
  pbVar14 = (byte *)param_2[1];
  if ((byte *)*param_1 == (byte *)*param_2 && (byte *)param_1[1] == (byte *)param_2[1]) {
    uVar15 = param_1[2];
    if ((uVar15 != param_2[2] || param_1[3] != param_2[3]) &&
       (func_0x000107c605b8(), (uVar15 & 1) == 0)) {
      return (byte *)0x0;
    }
    cVar1 = *(char *)(param_2 + 6);
    if (*(char *)(param_1 + 6) == -1) {
      if (cVar1 != -1) {
        return (byte *)0x0;
      }
    }
    else {
      if (cVar1 == -1) {
        return (byte *)0x0;
      }
      pbVar13 = (byte *)param_1[4];
      pbVar17 = (byte *)param_1[5];
      pbVar18 = (byte *)param_2[4];
      pbVar14 = (byte *)param_2[5];
      if (*(char *)(param_1 + 6) == '\x01') {
        if (cVar1 != '\x01') {
          return (byte *)0x0;
        }
      }
      else if (cVar1 == '\x01') {
        return (byte *)0x0;
      }
      if ((pbVar13 != pbVar18) || (pbVar17 != pbVar14)) goto code_r0x000107c605b8;
    }
    pbVar11 = (byte *)param_1[7];
    pbVar26 = (byte *)param_1[8];
    lVar25 = param_2[7];
    uVar15 = param_2[8];
    puVar8 = (undefined1 *)register0x00000008;
    do {
      *(undefined8 *)(puVar8 + -0x50) = unaff_x26;
      *(byte **)(puVar8 + -0x48) = unaff_x25;
      *(byte **)(puVar8 + -0x40) = unaff_x24;
      *(byte **)(puVar8 + -0x38) = unaff_x23;
      *(ulong *)(puVar8 + -0x30) = unaff_x22;
      *(undefined8 *)(puVar8 + -0x28) = unaff_x21;
      *(ulong *)(puVar8 + -0x20) = unaff_x20;
      *(byte **)(puVar8 + -0x18) = unaff_x19;
      *(undefined8 *)(puVar8 + -0x10) = unaff_x29;
      *(undefined8 *)(puVar8 + -8) = unaff_x30;
      *(undefined8 *)(puVar8 + -0x58) = *(undefined8 *)PTR____stack_chk_guard_11034bdc0;
      uVar5 = (uint)((ulong)pbVar26 >> 0x20);
      uVar19 = uVar5 >> 0x1e;
      uVar6 = (uint)(uVar15 >> 0x20);
      uVar22 = uVar6 >> 0x1e;
      iVar9 = (int)pbVar11;
      pbVar16 = pbVar26;
      if ((ulong)pbVar26 >> 0x3e == 3) {
        uVar21 = 0;
        if ((((pbVar11 != (byte *)0x0) || (pbVar26 != (byte *)0xc000000000000000)) ||
            (uVar15 >> 0x3e < 3)) || ((uVar21 = 0, lVar25 != 0 || (uVar15 != 0xc000000000000000))))
        goto joined_r0x000100e26170;
LAB_100e26128:
        pbVar10 = (byte *)0x1;
      }
      else if (uVar5 >> 0x1e < 2) {
        if (uVar19 == 0) {
          uVar21 = (ulong)pbVar26 >> 0x30 & 0xff;
        }
        else {
          iVar20 = (int)((ulong)pbVar11 >> 0x20);
          if (SBORROW4(iVar20,iVar9)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f0);
            (*pcVar7)();
          }
          uVar21 = (ulong)(iVar20 - iVar9);
        }
joined_r0x000100e26170:
        if (1 < uVar6 >> 0x1e) goto LAB_100e26050;
LAB_100e26084:
        if (uVar22 == 0) {
          uVar23 = uVar15 >> 0x30 & 0xff;
          goto LAB_100e2608c;
        }
        iVar20 = (int)((ulong)lVar25 >> 0x20);
        if (SBORROW4(iVar20,(int)lVar25)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262e8);
          (*pcVar7)();
        }
        if (uVar21 == (long)(iVar20 - (int)lVar25)) goto LAB_100e26094;
LAB_100e26154:
        pbVar10 = (byte *)0x0;
      }
      else {
        if (uVar19 == 2) {
          uVar21 = *(long *)(pbVar11 + 0x18) - *(long *)(pbVar11 + 0x10);
          if (SBORROW8(*(long *)(pbVar11 + 0x18),*(long *)(pbVar11 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262ec);
            (*pcVar7)();
          }
          goto joined_r0x000100e26170;
        }
        uVar21 = 0;
        if (uVar22 < 2) goto LAB_100e26084;
LAB_100e26050:
        if (uVar22 == 2) {
          uVar23 = *(long *)(lVar25 + 0x18) - *(long *)(lVar25 + 0x10);
          if (SBORROW8(*(long *)(lVar25 + 0x18),*(long *)(lVar25 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26068);
            (*pcVar7)();
          }
LAB_100e2608c:
          if (uVar21 != uVar23) goto LAB_100e26154;
LAB_100e26094:
          if ((long)uVar21 < 1) goto LAB_100e26128;
          if (uVar19 < 2) {
            if (uVar19 == 0) {
              puVar8[-0x70] = (char)pbVar11;
              puVar8[-0x6f] = (char)((ulong)pbVar11 >> 8);
              puVar8[-0x6e] = (char)((ulong)pbVar11 >> 0x10);
              puVar8[-0x6d] = (char)((ulong)pbVar11 >> 0x18);
              puVar8[-0x6c] = (char)((ulong)pbVar11 >> 0x20);
              puVar8[-0x6b] = (char)((ulong)pbVar11 >> 0x28);
              puVar8[-0x6a] = (char)((ulong)pbVar11 >> 0x30);
              puVar8[-0x69] = (char)((ulong)pbVar11 >> 0x38);
              puVar8[-0x68] = (char)pbVar26;
              puVar8[-0x67] = (char)((ulong)pbVar26 >> 8);
              puVar8[-0x66] = (char)((ulong)pbVar26 >> 0x10);
              puVar8[-0x65] = (char)((ulong)pbVar26 >> 0x18);
              puVar8[-100] = (char)((ulong)pbVar26 >> 0x20);
              puVar8[-99] = (char)((ulong)pbVar26 >> 0x28);
              pbVar16 = puVar8 + (((ulong)pbVar26 >> 0x30 & 0xff) - 0x70);
LAB_100e26260:
              unaff_x21 = 0;
              FUN_100e25bdc(puVar8 + -0x71,puVar8 + -0x70);
              pbVar10 = (byte *)(ulong)(byte)puVar8[-0x71];
              goto LAB_100e262b0;
            }
            unaff_x25 = (byte *)(long)iVar9;
            unaff_x23 = (byte *)(((long)pbVar11 >> 0x20) - (long)unaff_x25);
            if ((long)pbVar11 >> 0x20 < (long)unaff_x25) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f4);
              (*pcVar7)();
            }
            func_0x000107c5ec30();
            unaff_x24 = pbVar26;
            if (pbVar11 == (byte *)0x0) {
              func_0x000107c5ec38();
              pbVar11 = (byte *)0x0;
            }
            else {
              pbVar16 = pbVar11;
              func_0x000107c5ec3c();
              if (SBORROW8((long)unaff_x25,(long)pbVar16)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e26300);
                (*pcVar7)();
              }
              pbVar11 = pbVar11 + ((long)unaff_x25 - (long)pbVar16);
              func_0x000107c5ec38();
              unaff_x19 = pbVar11;
              if (pbVar11 != (byte *)0x0) {
                if ((long)unaff_x23 <= (long)pbVar16) {
                  pbVar16 = unaff_x23;
                }
                pbVar16 = pbVar16 + (long)pbVar11;
                goto LAB_100e262a4;
              }
            }
            pbVar16 = (byte *)0x0;
          }
          else {
            if (uVar19 != 2) {
              *(undefined8 *)(puVar8 + -0x6a) = 0;
              *(undefined8 *)(puVar8 + -0x70) = 0;
              pbVar16 = puVar8 + -0x70;
              goto LAB_100e26260;
            }
            lVar27 = *(long *)(pbVar11 + 0x10);
            unaff_x24 = *(byte **)(pbVar11 + 0x18);
            func_0x000107c5ec30();
            pbVar16 = pbVar11;
            if (pbVar11 != (byte *)0x0) {
              func_0x000107c5ec3c();
              if (SBORROW8(lVar27,(long)pbVar16)) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262fc);
                (*pcVar7)();
              }
              pbVar11 = pbVar11 + (lVar27 - (long)pbVar16);
            }
            unaff_x23 = unaff_x24 + -lVar27;
            if (SBORROW8((long)unaff_x24,lVar27)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100e262f8);
              (*pcVar7)();
            }
            func_0x000107c5ec38();
            unaff_x19 = pbVar11;
            unaff_x25 = pbVar26;
            if (pbVar11 == (byte *)0x0) {
              pbVar16 = (byte *)0x0;
            }
            else {
              if ((long)unaff_x23 <= (long)pbVar16) {
                pbVar16 = unaff_x23;
              }
              pbVar16 = pbVar16 + (long)pbVar11;
            }
          }
LAB_100e262a4:
          unaff_x20 = (ulong)pbVar26 & 0x3fffffffffffffff;
          unaff_x21 = 0;
          FUN_100e25bdc(puVar8 + -0x70,pbVar11,pbVar16,lVar25,uVar15);
          pbVar10 = (byte *)(ulong)(byte)puVar8[-0x70];
          unaff_x22 = uVar15;
        }
        else {
          pbVar10 = (byte *)(ulong)(uVar21 == 0);
        }
      }
LAB_100e262b0:
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)(puVar8 + -0x58)) {
        return pbVar10;
      }
      func_0x000107c60e78();
      *(byte **)(puVar8 + -0xc0) = unaff_x24;
      *(byte **)(puVar8 + -0xb8) = unaff_x23;
      *(ulong *)(puVar8 + -0xb0) = unaff_x22;
      *(undefined8 *)(puVar8 + -0xa8) = unaff_x21;
      *(ulong *)(puVar8 + -0xa0) = unaff_x20;
      *(byte **)(puVar8 + -0x98) = unaff_x19;
      *(undefined1 **)(puVar8 + -0x90) = puVar8 + -0x10;
      *(code **)(puVar8 + -0x88) = FUN_100e26304;
      pbVar13 = *(byte **)pbVar10;
      pbVar11 = *(byte **)(pbVar10 + 8);
      pbVar24 = *(byte **)(pbVar10 + 0x18);
      bVar28 = pbVar10[0x28];
      pbVar26 = (byte *)((ulong)*(uint *)(pbVar10 + 0x11) << 8 |
                         (ulong)*(uint3 *)(pbVar10 + 0x15) << 0x28 | (ulong)pbVar10[0x10]);
      pbVar17 = pbVar11;
      if (bVar28 < 3) {
        if (bVar28 == 0) {
          if (pbVar16[0x28] == 0) {
            lVar25 = *(long *)pbVar16;
            uVar12 = 0;
            FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
            func_0x000107c60118(pbVar13,lVar25,uVar12);
            return (byte *)(ulong)((uint)pbVar13 & 1);
          }
          return (byte *)0x0;
        }
        if (bVar28 == 1) {
          if (pbVar16[0x28] != 1) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar16 + 8);
          pbVar14 = *(byte **)(pbVar16 + 0x10);
          lVar25 = *(long *)pbVar16;
          uVar12 = 0;
          FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar13,lVar25,uVar12);
          if (((ulong)pbVar13 & 1) == 0) {
            return (byte *)0x0;
          }
          pbVar13 = pbVar11;
          pbVar17 = pbVar26;
          if ((pbVar11 == pbVar18) && (pbVar26 == pbVar14)) {
            return (byte *)0x1;
          }
        }
        else {
          if (pbVar16[0x28] != 2) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)pbVar16;
          pbVar14 = *(byte **)(pbVar16 + 8);
          lVar25 = *(long *)(pbVar16 + 0x18);
          if ((pbVar13 == pbVar18) && (pbVar11 == pbVar14)) {
            if (((pbVar10[0x10] ^ pbVar16[0x10]) & 1) != 0) {
              return (byte *)0x0;
            }
            if (pbVar24 != (byte *)0x0) {
              if (lVar25 == 0) {
                return (byte *)0x0;
              }
              FUN_100e275ac(0,0x112d3a1e0,&PTR_PTR_1126dead8);
              func_0x000107c61174(lVar25);
              func_0x000107c61174();
              pbVar14 = pbVar24;
              func_0x000107c60118();
              func_0x000107c61170(pbVar24);
              func_0x000107c61170(lVar25);
              pbVar24 = pbVar14;
              goto joined_r0x000100e266a4;
            }
joined_r0x000100e26620:
            if (lVar25 == 0) {
              return (byte *)0x1;
            }
            return (byte *)0x0;
          }
        }
        break;
      }
      lVar27 = *(long *)(pbVar10 + 0x20);
      if (bVar28 < 5) {
        if (bVar28 != 3) {
          if (pbVar16[0x28] != 4) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)pbVar16;
          pbVar14 = *(byte **)(pbVar16 + 8);
          if (((pbVar13 == pbVar18) && (pbVar11 == pbVar14)) &&
             (pbVar13 = pbVar26, pbVar17 = pbVar24, pbVar18 = *(byte **)(pbVar16 + 0x10),
             pbVar14 = *(byte **)(pbVar16 + 0x18),
             pbVar26 == *(byte **)(pbVar16 + 0x10) && pbVar24 == *(byte **)(pbVar16 + 0x18))) {
            return (byte *)0x1;
          }
          break;
        }
        if (pbVar16[0x28] != 3) {
          return (byte *)0x0;
        }
        if ((uint)*pbVar16 != ((uint)pbVar13 & 0xff)) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)(pbVar16 + 0x10);
        lVar25 = *(long *)(pbVar16 + 0x20);
        if (pbVar26 == (byte *)0x0) {
          if (pbVar14 != (byte *)0x0) {
            return (byte *)0x0;
          }
        }
        else {
          if (pbVar14 == (byte *)0x0) {
            return (byte *)0x0;
          }
          pbVar18 = *(byte **)(pbVar16 + 8);
          pbVar13 = pbVar11;
          pbVar17 = pbVar26;
          if ((pbVar11 != pbVar18) || (pbVar26 != pbVar14)) break;
        }
        if (lVar27 != 0) {
          if (lVar25 == 0) {
            return (byte *)0x0;
          }
          if ((pbVar24 == *(byte **)(pbVar16 + 0x18)) && (lVar27 == lVar25)) {
            return (byte *)0x1;
          }
          func_0x000107c605b8(pbVar24,lVar27,*(byte **)(pbVar16 + 0x18),lVar25,0);
joined_r0x000100e266a4:
          if (((ulong)pbVar24 & 1) == 0) {
            return (byte *)0x0;
          }
          return (byte *)0x1;
        }
        goto joined_r0x000100e26620;
      }
      if (bVar28 != 5) {
        if ((((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar13 == (byte *)0x0) &&
            lVar27 == 0) && pbVar26 == (byte *)0x0) {
          if (pbVar16[0x28] != 6) {
            return (byte *)0x0;
          }
          lVar27 = *(long *)(pbVar16 + 0x20);
          lVar25 = *(long *)(pbVar16 + 0x18);
          bVar28 = pbVar16[8] | (byte)lVar25;
          bVar29 = pbVar16[9] | (byte)((ulong)lVar25 >> 8);
          bVar30 = pbVar16[10] | (byte)((ulong)lVar25 >> 0x10);
          bVar31 = pbVar16[0xb] | (byte)((ulong)lVar25 >> 0x18);
          bVar32 = pbVar16[0xc] | (byte)((ulong)lVar25 >> 0x20);
          bVar33 = pbVar16[0xd] | (byte)((ulong)lVar25 >> 0x28);
          bVar34 = pbVar16[0xe] | (byte)((ulong)lVar25 >> 0x30);
          bVar35 = pbVar16[0xf] | (byte)((ulong)lVar25 >> 0x38);
          bVar36 = pbVar16[0x10] | (byte)lVar27;
          bVar37 = pbVar16[0x11] | (byte)((ulong)lVar27 >> 8);
          bVar38 = pbVar16[0x12] | (byte)((ulong)lVar27 >> 0x10);
          bVar39 = pbVar16[0x13] | (byte)((ulong)lVar27 >> 0x18);
          bVar40 = pbVar16[0x14] | (byte)((ulong)lVar27 >> 0x20);
          bVar41 = pbVar16[0x15] | (byte)((ulong)lVar27 >> 0x28);
          bVar42 = pbVar16[0x16] | (byte)((ulong)lVar27 >> 0x30);
          bVar43 = pbVar16[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
          auVar4[1] = bVar29;
          auVar4[0] = bVar28;
          auVar4[2] = bVar30;
          auVar4[3] = bVar31;
          auVar4[4] = bVar32;
          auVar4[5] = bVar33;
          auVar4[6] = bVar34;
          auVar4[7] = bVar35;
          auVar4[8] = bVar36;
          auVar4[9] = bVar37;
          auVar4[10] = bVar38;
          auVar4[0xb] = bVar39;
          auVar4[0xc] = bVar40;
          auVar4[0xd] = bVar41;
          auVar4[0xe] = bVar42;
          auVar4[0xf] = bVar43;
          auVar44 = NEON_ext(auVar44,auVar4,8,1);
          if (CONCAT17(bVar35 | auVar44[7],
                       CONCAT16(bVar34 | auVar44[6],
                                CONCAT15(bVar33 | auVar44[5],
                                         CONCAT14(bVar32 | auVar44[4],
                                                  CONCAT13(bVar31 | auVar44[3],
                                                           CONCAT12(bVar30 | auVar44[2],
                                                                    CONCAT11(bVar29 | auVar44[1],
                                                                             bVar28 | auVar44[0]))))
                                        ))) == 0 && *(long *)pbVar16 == 0) {
            return (byte *)0x1;
          }
          return (byte *)0x0;
        }
        if ((pbVar13 == (byte *)0x1) &&
           (((pbVar24 == (byte *)0x0 && pbVar11 == (byte *)0x0) && pbVar26 == (byte *)0x0) &&
            lVar27 == 0)) {
          if (pbVar16[0x28] != 6) {
            return (byte *)0x0;
          }
          if (*(long *)pbVar16 != 1) {
            return (byte *)0x0;
          }
        }
        else {
          if (pbVar16[0x28] != 6) {
            return (byte *)0x0;
          }
          if (*(long *)pbVar16 != 2) {
            return (byte *)0x0;
          }
        }
        lVar27 = *(long *)(pbVar16 + 0x20);
        lVar25 = *(long *)(pbVar16 + 0x18);
        bVar28 = pbVar16[8] | (byte)lVar25;
        bVar29 = pbVar16[9] | (byte)((ulong)lVar25 >> 8);
        bVar30 = pbVar16[10] | (byte)((ulong)lVar25 >> 0x10);
        bVar31 = pbVar16[0xb] | (byte)((ulong)lVar25 >> 0x18);
        bVar32 = pbVar16[0xc] | (byte)((ulong)lVar25 >> 0x20);
        bVar33 = pbVar16[0xd] | (byte)((ulong)lVar25 >> 0x28);
        bVar34 = pbVar16[0xe] | (byte)((ulong)lVar25 >> 0x30);
        bVar35 = pbVar16[0xf] | (byte)((ulong)lVar25 >> 0x38);
        bVar36 = pbVar16[0x10] | (byte)lVar27;
        bVar37 = pbVar16[0x11] | (byte)((ulong)lVar27 >> 8);
        bVar38 = pbVar16[0x12] | (byte)((ulong)lVar27 >> 0x10);
        bVar39 = pbVar16[0x13] | (byte)((ulong)lVar27 >> 0x18);
        bVar40 = pbVar16[0x14] | (byte)((ulong)lVar27 >> 0x20);
        bVar41 = pbVar16[0x15] | (byte)((ulong)lVar27 >> 0x28);
        bVar42 = pbVar16[0x16] | (byte)((ulong)lVar27 >> 0x30);
        bVar43 = pbVar16[0x17] | (byte)((ulong)lVar27 >> 0x38);
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
        auVar44 = NEON_ext(auVar2,auVar3,8,1);
        lVar25 = CONCAT17(bVar35 | auVar44[7],
                          CONCAT16(bVar34 | auVar44[6],
                                   CONCAT15(bVar33 | auVar44[5],
                                            CONCAT14(bVar32 | auVar44[4],
                                                     CONCAT13(bVar31 | auVar44[3],
                                                              CONCAT12(bVar30 | auVar44[2],
                                                                       CONCAT11(bVar29 | auVar44[1],
                                                                                bVar28 | auVar44[0])
                                                                      ))))));
        goto joined_r0x000100e26620;
      }
      if (pbVar16[0x28] != 5) {
        return (byte *)0x0;
      }
      lVar25 = *(long *)(pbVar16 + 8);
      uVar15 = *(ulong *)(pbVar16 + 0x10);
      lVar27 = *(long *)pbVar16;
      uVar12 = 0;
      FUN_100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      func_0x000107c60118(pbVar13,lVar27,uVar12);
      if (((ulong)pbVar13 & 1) == 0) {
        return (byte *)0x0;
      }
      unaff_x29 = *(undefined8 *)(puVar8 + -0x90);
      unaff_x30 = *(undefined8 *)(puVar8 + -0x88);
      unaff_x20 = *(ulong *)(puVar8 + -0xa0);
      unaff_x19 = *(byte **)(puVar8 + -0x98);
      unaff_x22 = *(ulong *)(puVar8 + -0xb0);
      unaff_x21 = *(undefined8 *)(puVar8 + -0xa8);
      unaff_x24 = *(byte **)(puVar8 + -0xc0);
      unaff_x23 = *(byte **)(puVar8 + -0xb8);
      puVar8 = puVar8 + -0x80;
    } while( true );
  }
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(pbVar13,pbVar17,pbVar18,pbVar14,0);
  return pbVar13;
}



/* Entry: 1015d7f54; end: 1015d7f93;  */

void FUN_1015d7f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967a38;
  func_0x000107c61520(&UNK_10d967a38,&UNK_1103e46f8);
  puRam0000000112db82b0 = puVar1;
  return;
}



/* Entry: 1015d7f94; end: 1015d7fb7;  */

void FUN_1015d7f94(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d7fb8();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1015d7fb8; end: 1015d7ff7;  */

void FUN_1015d7fb8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967a10;
  func_0x000107c61520(&UNK_10d967a10,&UNK_1103e46f8);
  puRam0000000112db82b8 = puVar1;
  return;
}



/* Entry: 1015d7ff8; end: 1015d8023;  */

void FUN_1015d7ff8(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1015d7f54();
  *(long *)(param_1 + 8) = lVar1;
  func_0x0001015d52a0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1015d8024; end: 1015d8027;  */

void FUN_1015d8024(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967a78;
  func_0x000107c61520(&UNK_10d967a78,&UNK_1103e46f8);
  puRam0000000112db82c0 = puVar1;
  return;
}



/* Entry: 1015d8028; end: 1015d8067;  */

void FUN_1015d8028(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d967a78;
  func_0x000107c61520(&UNK_10d967a78,&UNK_1103e46f8);
  puRam0000000112db82c0 = puVar1;
  return;
}



/* Entry: 1015d8068; end: 1015d80d7;  */

long FUN_1015d8068(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1015d80d8; end: 1015d829f;  */

undefined8 * FUN_1015d80d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  
  uVar3 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  cVar2 = *(char *)(param_2 + 6);
  func_0x000107c61434();
  func_0x000107c61434(uVar3);
  if (cVar2 == -1) {
    uVar3 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar3;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  }
  else {
    uVar3 = param_2[4];
    uVar1 = param_2[5];
    func_0x00010155442c(uVar3,uVar1,cVar2);
    param_1[4] = uVar3;
    param_1[5] = uVar1;
    *(char *)(param_1 + 6) = cVar2;
  }
  uVar3 = param_2[7];
  uVar1 = param_2[8];
  func_0x00010006c00c(uVar3,uVar1);
  param_1[7] = uVar3;
  param_1[8] = uVar1;
  return param_1;
}



/* Entry: 1015d82a0; end: 1015d836b;  */

undefined8 * FUN_1015d82a0(undefined8 *param_1)

{
  func_0x0001015d380c(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return param_1;
}



/* Entry: 1015d836c; end: 1015d8423;  */

int FUN_1015d836c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1015d8424; end: 1015d84bf;  */

undefined8 * FUN_1015d8424(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010155442c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1015d84c0; end: 1015d8503;  */

undefined8 * FUN_1015d84c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  func_0x0001015d380c(uVar3,uVar4,uVar2);
  return param_1;
}



/* Entry: 1015d8504; end: 1015d85b3;  */

int FUN_1015d8504(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 2) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 1015d85b4; end: 1015d85f3;  */

void FUN_1015d85b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112db82d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d9679e4;
  func_0x000107c61520(&DAT_10d9679e4,&UNK_1103e46f8);
  puRam0000000112db82d0 = puVar1;
  return;
}



/* Entry: 1015d85f4; end: 1015d85fb;  */

undefined8 * FUN_1015d85f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  func_0x00010155442c(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Entry: 1015d85fc; end: 1015d8643;  */

void FUN_1015d85fc(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10d967c90,0xb,2);
  uRam0000000113800cd0 = uStack_38;
  uRam0000000113800cc8 = uStack_40;
  uRam0000000113800ce0 = uStack_28;
  uRam0000000113800cd8 = uStack_30;
  uRam0000000113800cf0 = uStack_18;
  uRam0000000113800ce8 = uStack_20;
  return;
}



/* Entry: 1015d8644; end: 1015d86c7;  */

void FUN_1015d8644(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x150))();
    }
  }
  return;
}



/* Entry: 1015d86c8; end: 1015d874f;  */

void FUN_1015d86c8(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long unaff_x21;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_7 + 0x70))(param_2,param_3,1,param_6,param_7), unaff_x21 == 0)) {
    func_0x000100076224(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 1015d8750; end: 1015d878b;  */

void FUN_1015d8750(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



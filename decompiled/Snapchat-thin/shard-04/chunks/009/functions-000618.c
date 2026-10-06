/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1039f723c; end: 1039f7283;  */

void FUN_1039f723c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc38c10,0x21,2);
  uRam000000011380c710 = uStack_38;
  uRam000000011380c708 = uStack_40;
  uRam000000011380c720 = uStack_28;
  uRam000000011380c718 = uStack_30;
  uRam000000011380c730 = uStack_18;
  uRam000000011380c728 = uStack_20;
  return;
}



/* Entry: 1039f7284; end: 1039f736b;  */

/* WARNING: Removing unreachable block (ram,0x0001039f7368) */

void FUN_1039f7284(undefined8 param_1,long param_2,long param_3)

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
        pcVar3 = *(code **)(param_3 + 0x1a0);
        FUN_1039f7488();
        (*pcVar3)(unaff_x20 + 0x20,&UNK_11078ace8,lVar1,param_2,param_3);
      }
      else {
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x168);
        }
        else {
          if (lVar1 != 1) goto LAB_1039f7310;
          pcVar3 = *(code **)(param_3 + 0x150);
        }
        (*pcVar3)();
      }
LAB_1039f7310:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



/* Entry: 1039f736c; end: 1039f7487;  */

void FUN_1039f736c(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar6;
  code *pcVar7;
  
  uVar6 = unaff_x20[1];
  uVar2 = *unaff_x20 & 0xffffffffffff;
  if ((uVar6 & 0x2000000000000000) != 0) {
    uVar2 = uVar6 >> 0x38 & 0xf;
  }
  if ((uVar2 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar6,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar2 = unaff_x20[2];
  uVar6 = unaff_x20[3];
  uVar1 = (uint)(uVar6 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 != 0) {
      lVar4 = (long)(int)uVar2;
      lVar5 = (long)uVar2 >> 0x20;
      goto LAB_1039f73fc;
    }
    if ((uVar6 & 0xff000000000000) == 0) goto LAB_1039f741c;
  }
  else {
    if (uVar3 != 2) goto LAB_1039f741c;
    lVar4 = *(long *)(uVar2 + 0x10);
    lVar5 = *(long *)(uVar2 + 0x18);
LAB_1039f73fc:
    if (lVar4 == lVar5) goto LAB_1039f741c;
  }
  (**(code **)(param_3 + 0x78))(uVar2,uVar6,2,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_1039f741c:
  uVar6 = unaff_x20[4];
  if (*(long *)(uVar6 + 0x10) != 0) {
    pcVar7 = *(code **)(param_3 + 0x118);
    FUN_1039f7488();
    (*pcVar7)(uVar6,3,&UNK_11078ace8,uVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  func_0x000100076224(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  return;
}



/* Entry: 1039f7488; end: 1039f74c7;  */

void FUN_1039f7488(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9848 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dd19630;
  func_0x000107c61520(&DAT_10dd19630,&UNK_11078ace8);
  puRam0000000112fc9848 = puVar1;
  return;
}



/* Entry: 1039f74c8; end: 1039f7513;  */

void FUN_1039f74c8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  return;
}



/* Entry: 1039f7514; end: 1039f7543;  */

undefined1  [16] FUN_1039f7514(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x28);
  func_0x00010006c00c(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  return auVar1;
}



/* Entry: 1039f7544; end: 1039f7577;  */

void FUN_1039f7544(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x00010006c090(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  return;
}



/* Entry: 1039f7578; end: 1039f758b;  */

undefined1  [16] FUN_1039f7578(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x28;
  auVar1._0_8_ = 0x1039f7588;
  return auVar1;
}



/* Entry: 1039f758c; end: 1039f75b3;  */

void FUN_1039f758c(void)

{
  FUN_1039f7284();
  return;
}



/* Entry: 1039f75b4; end: 1039f75b7;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_1039f75b4(undefined8 *param_1,undefined8 param_2,long param_3)

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



/* Entry: 1039f75b8; end: 1039f75ef;  */

uint FUN_1039f75b8(long param_1,long param_2)

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
  FUN_1039f7d68();
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



/* Entry: 1039f75f0; end: 1039f76cb;  */

/* WARNING: Possible PIC construction at 0x0001039f7648: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039f764c) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039f75f0(undefined8 *param_1)

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
  ulong uVar17;
  int iVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  byte *pbVar22;
  byte *unaff_x19;
  long lVar23;
  undefined8 *unaff_x20;
  undefined8 unaff_x21;
  ulong unaff_x22;
  byte *pbVar24;
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
  
  pbVar14 = (byte *)*param_1;
  pbVar15 = (byte *)param_1[1];
  uVar10 = param_1[4];
  lVar23 = param_1[5];
  uVar17 = param_1[6];
  pbVar11 = (byte *)*unaff_x20;
  pbVar13 = (byte *)unaff_x20[1];
  uVar19 = unaff_x20[2];
  uVar21 = unaff_x20[4];
  pbVar9 = (byte *)unaff_x20[5];
  pbVar24 = (byte *)unaff_x20[6];
  if ((pbVar11 != pbVar14) || (pbVar13 != pbVar15)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  func_0x000100e25fcc(uVar19,unaff_x20[3],param_1[2],param_1[3]);
  if (((uVar19 & 1) == 0) || (func_0x0001039f5bf0(uVar21,uVar10), (uVar21 & 1) == 0)) {
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
    uVar4 = (uint)((ulong)pbVar24 >> 0x20);
    uVar16 = uVar4 >> 0x1e;
    uVar5 = (uint)(uVar17 >> 0x20);
    uVar20 = uVar5 >> 0x1e;
    iVar7 = (int)pbVar9;
    pbVar12 = pbVar24;
    if ((ulong)pbVar24 >> 0x3e == 3) {
      uVar19 = 0;
      if ((((pbVar9 != (byte *)0x0) || (pbVar24 != (byte *)0xc000000000000000)) ||
          (uVar17 >> 0x3e < 3)) || ((uVar19 = 0, lVar23 != 0 || (uVar17 != 0xc000000000000000))))
      goto joined_r0x000100e26170;
code_r0x000100e26128:
      pbVar8 = (byte *)0x1;
    }
    else if (uVar4 >> 0x1e < 2) {
      if (uVar16 == 0) {
        uVar19 = (ulong)pbVar24 >> 0x30 & 0xff;
      }
      else {
        iVar18 = (int)((ulong)pbVar9 >> 0x20);
        if (SBORROW4(iVar18,iVar7)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262f0);
          (*pcVar6)();
        }
        uVar19 = (ulong)(iVar18 - iVar7);
      }
joined_r0x000100e26170:
      if (1 < uVar5 >> 0x1e) goto code_r0x000100e26050;
code_r0x000100e26084:
      if (uVar20 == 0) {
        uVar21 = uVar17 >> 0x30 & 0xff;
        goto code_r0x000100e2608c;
      }
      iVar18 = (int)((ulong)lVar23 >> 0x20);
      if (SBORROW4(iVar18,(int)lVar23)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262e8);
        (*pcVar6)();
      }
      if (uVar19 == (long)(iVar18 - (int)lVar23)) goto code_r0x000100e26094;
code_r0x000100e26154:
      pbVar8 = (byte *)0x0;
    }
    else {
      if (uVar16 == 2) {
        uVar19 = *(long *)(pbVar9 + 0x18) - *(long *)(pbVar9 + 0x10);
        if (SBORROW8(*(long *)(pbVar9 + 0x18),*(long *)(pbVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100e262ec);
          (*pcVar6)();
        }
        goto joined_r0x000100e26170;
      }
      uVar19 = 0;
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
        if (uVar19 != uVar21) goto code_r0x000100e26154;
code_r0x000100e26094:
        if ((long)uVar19 < 1) goto code_r0x000100e26128;
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
            *(char *)((long)register0x00000008 + -0x68) = (char)pbVar24;
            *(char *)((long)register0x00000008 + -0x67) = (char)((ulong)pbVar24 >> 8);
            *(char *)((long)register0x00000008 + -0x66) = (char)((ulong)pbVar24 >> 0x10);
            *(char *)((long)register0x00000008 + -0x65) = (char)((ulong)pbVar24 >> 0x18);
            *(char *)((long)register0x00000008 + -100) = (char)((ulong)pbVar24 >> 0x20);
            *(char *)((long)register0x00000008 + -99) = (char)((ulong)pbVar24 >> 0x28);
            pbVar12 = (byte *)((long)register0x00000008 + (((ulong)pbVar24 >> 0x30 & 0xff) - 0x70));
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
          unaff_x25 = pbVar24;
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
        unaff_x20 = (undefined8 *)((ulong)pbVar24 & 0x3fffffffffffffff);
        unaff_x21 = 0;
        func_0x000100e25bdc((undefined1 *)((long)register0x00000008 + -0x70),pbVar9,pbVar12,lVar23,
                            uVar17);
        pbVar8 = (byte *)(ulong)*(byte *)((long)register0x00000008 + -0x70);
        unaff_x22 = uVar17;
      }
      else {
        pbVar8 = (byte *)(ulong)(uVar19 == 0);
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
    pbVar22 = *(byte **)(pbVar8 + 0x18);
    bVar26 = pbVar8[0x28];
    pbVar24 = (byte *)((ulong)*(uint *)(pbVar8 + 0x11) << 8 |
                       (ulong)*(uint3 *)(pbVar8 + 0x15) << 0x28 | (ulong)pbVar8[0x10]);
    pbVar13 = pbVar9;
    if (bVar26 < 3) {
      if (bVar26 == 0) {
        if (pbVar12[0x28] == 0) {
          lVar23 = *(long *)pbVar12;
          uVar10 = 0;
          func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
          func_0x000107c60118(pbVar11,lVar23,uVar10);
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
        lVar23 = *(long *)pbVar12;
        uVar10 = 0;
        func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        func_0x000107c60118(pbVar11,lVar23,uVar10);
        if (((ulong)pbVar11 & 1) == 0) {
          return (byte *)0x0;
        }
        pbVar11 = pbVar9;
        pbVar13 = pbVar24;
        if ((pbVar9 == pbVar14) && (pbVar24 == pbVar15)) {
          return (byte *)0x1;
        }
      }
      else {
        if (pbVar12[0x28] != 2) {
          return (byte *)0x0;
        }
        pbVar14 = *(byte **)pbVar12;
        pbVar15 = *(byte **)(pbVar12 + 8);
        lVar23 = *(long *)(pbVar12 + 0x18);
        if ((pbVar11 == pbVar14) && (pbVar9 == pbVar15)) {
          if (((pbVar8[0x10] ^ pbVar12[0x10]) & 1) != 0) {
            return (byte *)0x0;
          }
          if (pbVar22 != (byte *)0x0) {
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
            goto joined_r0x000100e266a4;
          }
joined_r0x000100e26620:
          if (lVar23 == 0) {
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
           (pbVar11 = pbVar24, pbVar13 = pbVar22, pbVar14 = *(byte **)(pbVar12 + 0x10),
           pbVar15 = *(byte **)(pbVar12 + 0x18),
           pbVar24 == *(byte **)(pbVar12 + 0x10) && pbVar22 == *(byte **)(pbVar12 + 0x18))) {
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
      lVar23 = *(long *)(pbVar12 + 0x20);
      if (pbVar24 == (byte *)0x0) {
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
        pbVar13 = pbVar24;
        if ((pbVar9 != pbVar14) || (pbVar24 != pbVar15)) goto code_r0x000107c605b8;
      }
      if (lVar25 != 0) {
        if (lVar23 == 0) {
          return (byte *)0x0;
        }
        if ((pbVar22 == *(byte **)(pbVar12 + 0x18)) && (lVar25 == lVar23)) {
          return (byte *)0x1;
        }
        func_0x000107c605b8(pbVar22,lVar25,*(byte **)(pbVar12 + 0x18),lVar23,0);
joined_r0x000100e266a4:
        if (((ulong)pbVar22 & 1) == 0) {
          return (byte *)0x0;
        }
        return (byte *)0x1;
      }
      goto joined_r0x000100e26620;
    }
    if (bVar26 != 5) {
      if ((((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar11 == (byte *)0x0) &&
          lVar25 == 0) && pbVar24 == (byte *)0x0) {
        if (pbVar12[0x28] != 6) {
          return (byte *)0x0;
        }
        lVar25 = *(long *)(pbVar12 + 0x20);
        lVar23 = *(long *)(pbVar12 + 0x18);
        bVar26 = pbVar12[8] | (byte)lVar23;
        bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
        bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
        bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
        bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
        bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
        bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
        bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
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
         (((pbVar22 == (byte *)0x0 && pbVar9 == (byte *)0x0) && pbVar24 == (byte *)0x0) &&
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
      lVar23 = *(long *)(pbVar12 + 0x18);
      bVar26 = pbVar12[8] | (byte)lVar23;
      bVar27 = pbVar12[9] | (byte)((ulong)lVar23 >> 8);
      bVar28 = pbVar12[10] | (byte)((ulong)lVar23 >> 0x10);
      bVar29 = pbVar12[0xb] | (byte)((ulong)lVar23 >> 0x18);
      bVar30 = pbVar12[0xc] | (byte)((ulong)lVar23 >> 0x20);
      bVar31 = pbVar12[0xd] | (byte)((ulong)lVar23 >> 0x28);
      bVar32 = pbVar12[0xe] | (byte)((ulong)lVar23 >> 0x30);
      bVar33 = pbVar12[0xf] | (byte)((ulong)lVar23 >> 0x38);
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
    if (pbVar12[0x28] != 5) {
      return (byte *)0x0;
    }
    lVar23 = *(long *)(pbVar12 + 8);
    uVar17 = *(ulong *)(pbVar12 + 0x10);
    lVar25 = *(long *)pbVar12;
    uVar10 = 0;
    func_0x000100e275ac(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
    func_0x000107c60118(pbVar11,lVar25,uVar10);
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



/* Entry: 1039f76cc; end: 1039f776b;  */

/* WARNING: Possible PIC construction at 0x0001039f7718: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039f7728: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f771c) */
/* WARNING: Removing unreachable block (ram,0x0001039f772c) */

void FUN_1039f76cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9840 != -1) {
    func_0x000107c61568(0x112fc9840,FUN_1039f723c);
  }
  uVar5 = uRam000000011380c730;
  uVar4 = uRam000000011380c728;
  uVar3 = uRam000000011380c720;
  uVar2 = uRam000000011380c718;
  uVar1 = uRam000000011380c710;
  *param_1 = uRam000000011380c708;
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



/* Entry: 1039f776c; end: 1039f77a7;  */

void FUN_1039f776c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fc9870;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fc9870,&UNK_10dc38c08);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 1039f77a8; end: 1039f78cb;  */

void FUN_1039f77a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined1 auStack_b0 [72];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_68 = *unaff_x20;
  uStack_60 = unaff_x20[1];
  uStack_48 = unaff_x20[4];
  uStack_50 = unaff_x20[3];
  uStack_58 = unaff_x20[2];
  uStack_38 = unaff_x20[6];
  uStack_40 = unaff_x20[5];
  func_0x000107c6068c(auStack_b0,0);
  func_0x000107c5fa50(auStack_b0,param_1,param_2);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039f78cc; end: 1039f799f;  */

/* WARNING: Possible PIC construction at 0x0001039f7924: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x0001039f7928) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_1039f78cc(undefined8 *param_1,undefined8 *param_2)

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
  
  pbVar11 = (byte *)*param_1;
  pbVar13 = (byte *)param_1[1];
  uVar18 = param_1[2];
  uVar20 = param_1[4];
  pbVar9 = (byte *)param_1[5];
  pbVar23 = (byte *)param_1[6];
  pbVar14 = (byte *)*param_2;
  pbVar15 = (byte *)param_2[1];
  uVar10 = param_2[4];
  lVar22 = param_2[5];
  uVar24 = param_2[6];
  if ((pbVar11 != pbVar14) || (pbVar13 != pbVar15)) {
code_r0x000107c605b8:
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)
      PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
    )(pbVar11,pbVar13,pbVar14,pbVar15,0);
    return pbVar11;
  }
  func_0x000100e25fcc(uVar18,param_1[3],param_2[2],param_2[3]);
  if (((uVar18 & 1) == 0) || (func_0x0001039f5bf0(uVar20,uVar10), (uVar20 & 1) == 0)) {
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



/* Entry: 1039f79a0; end: 1039f79df;  */

void FUN_1039f79a0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9850 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38b80;
  func_0x000107c61520(&UNK_10dc38b80,&UNK_1106bcff0);
  puRam0000000112fc9850 = puVar1;
  return;
}



/* Entry: 1039f79e0; end: 1039f7a03;  */

void FUN_1039f79e0(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039f7a04();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 1039f7a04; end: 1039f7a43;  */

void FUN_1039f7a04(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9858 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38b58;
  func_0x000107c61520(&UNK_10dc38b58,&UNK_1106bcff0);
  puRam0000000112fc9858 = puVar1;
  return;
}



/* Entry: 1039f7a44; end: 1039f7a6f;  */

void FUN_1039f7a44(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1039f79a0();
  *(long *)(param_1 + 8) = lVar1;
  FUN_1039f7a70();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 1039f7a70; end: 1039f7aaf;  */

void FUN_1039f7a70(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9860 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38b10;
  func_0x000107c61520(&DAT_10dc38b10,&UNK_1106bcff0);
  puRam0000000112fc9860 = puVar1;
  return;
}



/* Entry: 1039f7ab0; end: 1039f7ab3;  */

void FUN_1039f7ab0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38bc0;
  func_0x000107c61520(&UNK_10dc38bc0,&UNK_1106bcff0);
  puRam0000000112fc9868 = puVar1;
  return;
}



/* Entry: 1039f7ab4; end: 1039f7af3;  */

void FUN_1039f7ab4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9868 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc38bc0;
  func_0x000107c61520(&UNK_10dc38bc0,&UNK_1106bcff0);
  puRam0000000112fc9868 = puVar1;
  return;
}



/* Entry: 1039f7af4; end: 1039f7b57;  */

long FUN_1039f7af4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 1039f7b58; end: 1039f7c5f;  */

undefined8 * FUN_1039f7b58(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  func_0x000107c61434();
  func_0x00010006c00c(uVar1,uVar2);
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  return param_1;
}



/* Entry: 1039f7c60; end: 1039f7cc3;  */

undefined8 * FUN_1039f7c60(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  func_0x000107c6142c(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_1[6];
  uVar3 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar3;
  func_0x00010006c090(uVar2,uVar1);
  return param_1;
}



/* Entry: 1039f7cc4; end: 1039f7d67;  */

int FUN_1039f7cc4(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1039f7d68; end: 1039f7da7;  */

void FUN_1039f7d68(void)

{
  undefined *puVar1;
  
  if (puRam0000000112fc9878 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc38b2c;
  func_0x000107c61520(&DAT_10dc38b2c,&UNK_1106bcff0);
  puRam0000000112fc9878 = puVar1;
  return;
}



/* Entry: 1039f7da8; end: 1039f7dbb;  */

bool FUN_1039f7da8(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1039f7dbc; end: 1039f7e67;  */

void FUN_1039f7dbc(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1039f7e68; end: 1039f7eaf;  */

void FUN_1039f7e68(undefined1 *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_2;
  if (2 < uVar1) {
    uVar1 = 3;
  }
  *param_1 = (char)uVar1;
  return;
}



/* Entry: 1039f7eb0; end: 1039f7eef;  */

void FUN_1039f7eb0(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0x112fc9880;
  func_0x0001000285a8(0x112fc9880,&UNK_10dc38d00);
  func_0x000107c61538();
  *param_1 = uVar1;
  return;
}



/* Entry: 1039f7ef0; end: 1039f7f03;  */

/* WARNING: Possible PIC construction at 0x00010006c030: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c034) */

void FUN_1039f7ef0(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\x03') {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_1);
  return;
}



/* Entry: 1039f7f04; end: 1039f7f23;  */

void FUN_1039f7f04(void)

{
  func_0x000107c61168(&PTR_PTR_112fc9e98);
  return;
}



/* Entry: 1039f7f24; end: 1039f7fd3;  */

uint FUN_1039f7f24(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
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
  undefined1 uStack_120;
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
  undefined1 uStack_30;
  
  uVar1 = 0;
  uStack_138 = param_1[0x19];
  uStack_140 = param_1[0x18];
  uStack_128 = param_1[0x1b];
  uStack_130 = param_1[0x1a];
  uStack_120 = *(undefined1 *)(param_1 + 0x1c);
  uStack_178 = param_1[0x11];
  uStack_180 = param_1[0x10];
  uStack_168 = param_1[0x13];
  uStack_170 = param_1[0x12];
  uStack_158 = param_1[0x15];
  uStack_160 = param_1[0x14];
  uStack_148 = param_1[0x17];
  uStack_150 = param_1[0x16];
  uStack_1b8 = param_1[9];
  uStack_1c0 = param_1[8];
  uStack_1a8 = param_1[0xb];
  uStack_1b0 = param_1[10];
  uStack_198 = param_1[0xd];
  uStack_1a0 = param_1[0xc];
  uStack_188 = param_1[0xf];
  uStack_190 = param_1[0xe];
  uStack_1f8 = param_1[1];
  uStack_200 = *param_1;
  uStack_1e8 = param_1[3];
  uStack_1f0 = param_1[2];
  uStack_1d8 = param_1[5];
  uStack_1e0 = param_1[4];
  uStack_1c8 = param_1[7];
  uStack_1d0 = param_1[6];
  uStack_48 = param_2[0x19];
  uStack_50 = param_2[0x18];
  uStack_38 = param_2[0x1b];
  uStack_40 = param_2[0x1a];
  uStack_30 = *(undefined1 *)(param_2 + 0x1c);
  uStack_88 = param_2[0x11];
  uStack_90 = param_2[0x10];
  uStack_78 = param_2[0x13];
  uStack_80 = param_2[0x12];
  uStack_68 = param_2[0x15];
  uStack_70 = param_2[0x14];
  uStack_58 = param_2[0x17];
  uStack_60 = param_2[0x16];
  uStack_c8 = param_2[9];
  uStack_d0 = param_2[8];
  uStack_b8 = param_2[0xb];
  uStack_c0 = param_2[10];
  uStack_a8 = param_2[0xd];
  uStack_b0 = param_2[0xc];
  uStack_98 = param_2[0xf];
  uStack_a0 = param_2[0xe];
  uStack_108 = param_2[1];
  uStack_110 = *param_2;
  uStack_f8 = param_2[3];
  uStack_100 = param_2[2];
  uStack_e8 = param_2[5];
  uStack_f0 = param_2[4];
  uStack_d8 = param_2[7];
  uStack_e0 = param_2[6];
  func_0x000103a10384(&uStack_200,&uStack_110);
  return uVar1 & 1;
}



/* Entry: 1039f7fd4; end: 1039f802b;  */

undefined8 * FUN_1039f7fd4(byte *param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 in_ZR;
  undefined1 in_CY;
  uint uVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined8 *puVar6;
  uint uVar7;
  ulong uVar8;
  byte bVar9;
  undefined8 *unaff_x19;
  ulong *unaff_x20;
  ulong unaff_x21;
  undefined8 *unaff_x22;
  undefined8 *unaff_x23;
  undefined8 *unaff_x24;
  undefined8 *unaff_x25;
  undefined8 *unaff_x26;
  long unaff_x29;
  undefined8 *puVar10;
  undefined8 *in_stack_00000010;
  undefined8 *in_stack_00000018;
  undefined8 *in_stack_00000020;
  ulong in_stack_00000028;
  undefined8 *in_stack_00000030;
  undefined8 *in_stack_00000038;
  undefined8 *in_stack_00000040;
  ulong in_stack_00000048;
  undefined8 *in_stack_00000050;
  undefined8 *in_stack_00000058;
  undefined8 *in_stack_00000060;
  ulong in_stack_00000068;
  
  bVar1 = *param_2;
  puVar6 = (undefined8 *)(ulong)bVar1;
  bVar2 = *param_1;
  puVar4 = (undefined8 *)(ulong)bVar2;
  uVar7 = (uint)(bVar2 >> 4);
  uVar8 = (ulong)uVar7;
  bVar9 = 0x9e;
  uVar3 = 0xdc38c9e;
  uVar5 = (uint)bVar1;
  puVar10 = unaff_x23;
  switch(bVar2 >> 4) {
  default:
    uVar7 = (uint)bVar1;
  case 0xd:
  case 0xf:
  case 0x11:
  case 0x19:
  case 0x29:
  case 0x2d:
  case 0x33:
  case 0x92:
  case 0xa0:
  case 0xe0:
    in_CY = 0xf < uVar7;
    goto code_r0x000103a0e780;
  case 1:
  case 0x40:
  case 0x55:
    in_ZR = (uVar5 & 0xf0) == 0x10;
  case 0x48:
  case 0x5d:
    break;
  case 2:
    in_ZR = (uVar5 & 0xf0) == 0x20;
  case 0x14:
    break;
  case 3:
    in_ZR = (uVar5 & 0xf0) == 0x30;
    break;
  case 4:
  case 0x6e:
  case 0x7e:
    in_ZR = (uVar5 & 0xf0) == 0x40;
    break;
  case 5:
    in_ZR = (uVar5 & 0xf0) == 0x50;
    break;
  case 6:
  case 0x87:
  case 0xaf:
  case 0xef:
    uVar7 = uVar5 & 0xf0;
  case 0x28:
    in_ZR = uVar7 == 0x60;
    break;
  case 7:
    in_ZR = (uVar5 & 0xf0) == 0x70;
    break;
  case 8:
    uVar3 = (bVar1 ^ bVar2) ^ 1;
    if (-0x71 < (char)bVar1) {
      uVar3 = 0;
    }
    return (undefined8 *)(ulong)(uVar3 & 1);
  case 9:
    uVar7 = bVar1 & 0xf0;
    bVar9 = bVar1 ^ bVar2;
  case 0x66:
    uVar3 = (uint)((bVar9 & 0xf) == 0);
    in_ZR = uVar7 == 0x90;
code_r0x000103a0e7b4:
    if (!(bool)in_ZR) {
      uVar3 = 0;
    }
    return (undefined8 *)(ulong)(uVar3 & 1);
  case 0xc:
  case 0x62:
    goto code_r0x000103a0e9a0;
  case 0xe:
  case 0x90:
  case 0xb8:
  case 0xf8:
  case 0xfa:
    goto code_r0x000103a0e784;
  case 0x10:
    goto code_r0x000103a0e898;
  case 0x12:
    goto code_r0x000103a0ea00;
  case 0x15:
  case 0x17:
  case 0x1b:
  case 0x1f:
  case 0x25:
  case 0x2f:
  case 0x31:
  case 0x85:
  case 0x99:
  case 0xad:
  case 0xc1:
  case 0xc9:
  case 0xd1:
  case 0xd9:
  case 0xed:
    goto code_r0x000103a0e780;
  case 0x16:
  case 0x47:
  case 0x5c:
    goto code_r0x000103a0e944;
  case 0x18:
    goto code_r0x000103a0e91c;
  case 0x1a:
    goto code_r0x000103a0eac8;
  case 0x1c:
    goto code_r0x000103a0eb00;
  case 0x1e:
    goto code_r0x000103a0ea4c;
  case 0x20:
    goto code_r0x000103a0e97c;
  case 0x22:
    goto code_r0x000103a0ea7c;
  case 0x24:
    if (!(bool)in_CY || (bool)in_ZR) {
      if (uVar8 < 0xf) {
        param_3 = (undefined8 *)0x112d56fe0;
        param_4 = (undefined8 *)&UNK_10d91dda0;
        puVar4 = (undefined8 *)(unaff_x29 + -0x50);
        puVar6 = &stack0x00000060;
        unaff_x25 = param_3;
        unaff_x26 = param_4;
        goto code_r0x000103a0e968;
      }
    }
    else if (0xe < uVar8) {
      unaff_x23 = (undefined8 *)0x112d56000;
      goto code_r0x000103a0e888;
    }
    unaff_x19 = (undefined8 *)0x112d56fe0;
  case 0xea:
    func_0x000103a11d64(unaff_x29 + -0x50,&stack0x00000060,unaff_x19,&UNK_10d91dda0);
code_r0x000103a0e8f8:
    puVar6 = (undefined8 *)(unaff_x29 + -0x60);
    goto code_r0x000103a0e900;
  case 0x26:
  case 0xfe:
    goto code_r0x000103a0e8ac;
  case 0x2a:
    goto code_r0x000103a0e814;
  case 0x2c:
  case 0x88:
  case 0xb0:
  case 0xf0:
    goto code_r0x000103a0ea50;
  case 0x2e:
    goto code_r0x000103a0e9c0;
  case 0x30:
    goto code_r0x000103a0eb68;
  case 0x32:
    goto code_r0x000103a0eae8;
  case 0x41:
  case 0x44:
  case 0x45:
  case 0x56:
  case 0x59:
  case 0x5a:
    goto code_r0x000103a0e7b4;
  case 0x42:
  case 0x57:
    goto code_r0x000103a0e8b4;
  case 99:
  case 0x6b:
  case 0x7b:
  case 0xc3:
    goto code_r0x000103a0e9d0;
  case 100:
  case 0x6c:
  case 0x7c:
  case 0xc4:
    goto code_r0x000103a0ead4;
  case 0x6a:
  case 0xd2:
    goto code_r0x000103a0e9b8;
  case 0x7a:
    goto code_r0x000103a0e998;
  case 0x82:
    goto code_r0x000103a0e99c;
  case 0x83:
  case 0x97:
  case 0xab:
  case 0xbf:
  case 199:
  case 0xcf:
  case 0xd7:
  case 0xeb:
  case 0xff:
    goto code_r0x000103a0e8f8;
  case 0x84:
  case 0x98:
  case 0xac:
  case 0xc0:
  case 200:
  case 0xd0:
  case 0xd8:
  case 0xec:
    goto code_r0x000103a0ea18;
  case 0x86:
    goto code_r0x000103a0ea28;
  case 0x96:
    goto code_r0x000103a0e96c;
  case 0x9a:
    goto code_r0x000103a0e938;
  case 0x9b:
  case 0xcb:
  case 0xd3:
  case 0xdb:
    goto code_r0x000103a0eb38;
  case 0x9c:
  case 0xcc:
  case 0xd4:
  case 0xdc:
    goto code_r0x000103a0eae4;
  case 0x9d:
  case 0xcd:
  case 0xd5:
  case 0xdd:
    goto code_r0x000103a0eb4c;
  case 0xa6:
code_r0x000103a0e968:
    func_0x000103a11d64(puVar4,puVar6,param_3,param_4);
code_r0x000103a0e96c:
    param_4 = unaff_x26;
    param_3 = unaff_x25;
    puVar4 = (undefined8 *)(unaff_x29 + -0x60);
    puVar6 = &stack0x00000060;
code_r0x000103a0e97c:
    func_0x000103a11d64(puVar4,puVar6,param_3,param_4);
    puVar4 = unaff_x22;
code_r0x000103a0e988:
    func_0x000100e25fcc();
    unaff_x25 = puVar4;
code_r0x000103a0e998:
code_r0x000103a0e99c:
code_r0x000103a0e9a0:
    func_0x0001000b44c0();
    func_0x0001000b44c0();
    if (((ulong)unaff_x25 & 1) != 0) goto code_r0x000103a0e9b4;
    goto code_r0x000103a0e924;
  case 0xa7:
  case 0xe7:
    goto code_r0x000103a0eb48;
  case 0xa8:
  case 0xe8:
    goto code_r0x000103a0e9c4;
  case 0xa9:
  case 0xe9:
    goto code_r0x000103a0e78c;
  case 0xaa:
    goto code_r0x000103a0e93c;
  case 0xae:
    goto code_r0x000103a0e988;
  case 0xba:
    goto code_r0x000103a0e788;
  case 0xbe:
  case 0xc6:
  case 0xce:
  case 0xd6:
    goto code_r0x000103a0e90c;
  case 0xc2:
    goto code_r0x000103a0e89c;
  case 0xca:
    goto code_r0x000103a0e8c8;
  case 0xda:
    goto code_r0x000103a0ea38;
  case 0xe6:
    goto code_r0x000103a0ea68;
  case 0xee:
code_r0x000103a0e888:
    unaff_x23 = unaff_x23 + 0x1fc;
    unaff_x24 = (undefined8 *)&UNK_10d91dda0;
    puVar4 = (undefined8 *)(unaff_x29 + -0x50);
    goto code_r0x000103a0e898;
  }
  uVar3 = (bVar1 ^ bVar2) ^ 1;
  if (!(bool)in_ZR) {
    uVar3 = 0;
  }
  puVar4 = (undefined8 *)(ulong)(uVar3 & 1);
code_r0x000103a0e814:
  return puVar4;
code_r0x000103a0e898:
  puVar6 = &stack0x00000060;
code_r0x000103a0e89c:
  func_0x000103a11d64(puVar4,puVar6,unaff_x23,unaff_x24);
  puVar4 = (undefined8 *)(unaff_x29 + -0x60);
code_r0x000103a0e8ac:
  param_3 = unaff_x23;
  puVar6 = &stack0x00000060;
code_r0x000103a0e8b4:
  func_0x000103a11d64(puVar4,puVar6,param_3,unaff_x24);
  func_0x0001000b44c0();
code_r0x000103a0e8c8:
code_r0x000103a0e9b4:
  uVar3 = (uint)(byte)unaff_x20[8];
code_r0x000103a0e9b8:
  uVar7 = (uint)*(byte *)(unaff_x19 + 8);
  in_ZR = uVar3 == 1;
code_r0x000103a0e9c0:
  if (!(bool)in_ZR) {
code_r0x000103a0e9d0:
    uVar3 = 0;
    if ((uVar7 != 1) && (unaff_x20[7] == unaff_x19[7])) goto code_r0x000103a0e9ec;
    goto code_r0x000103a0e928;
  }
code_r0x000103a0e9c4:
  if (uVar7 == 1) {
code_r0x000103a0e9ec:
    if ((char)unaff_x20[10] != '\x01') {
      puVar4 = (undefined8 *)0x0;
      uVar3 = 0;
      if (*(char *)(unaff_x19 + 10) != '\x01') {
        uVar8 = unaff_x19[9];
code_r0x000103a0ea18:
        uVar3 = (uint)puVar4;
        if (unaff_x20[9] == uVar8) goto code_r0x000103a0ea24;
      }
      goto code_r0x000103a0e928;
    }
    in_ZR = *(char *)(unaff_x19 + 10) == '\x01';
code_r0x000103a0ea00:
    if ((bool)in_ZR) {
code_r0x000103a0ea24:
      uVar3 = (uint)(byte)unaff_x20[0xc];
code_r0x000103a0ea28:
      if (uVar3 != 1) {
        puVar4 = (undefined8 *)0x0;
        uVar3 = 0;
        if (*(char *)(unaff_x19 + 0xc) != '\x01') {
code_r0x000103a0ea4c:
          uVar8 = unaff_x19[0xb];
code_r0x000103a0ea50:
          uVar3 = (uint)puVar4;
          if (unaff_x20[0xb] == uVar8) goto code_r0x000103a0ea5c;
        }
        goto code_r0x000103a0e928;
      }
      in_ZR = *(char *)(unaff_x19 + 0xc) == '\x01';
code_r0x000103a0ea38:
      if ((bool)in_ZR) {
code_r0x000103a0ea5c:
        puVar6 = (undefined8 *)unaff_x20[0xe];
        param_4 = (undefined8 *)unaff_x19[0xe];
        if (puVar6 == (undefined8 *)0x0) {
          if (param_4 == (undefined8 *)0x0) {
code_r0x000103a0ea98:
            unaff_x21 = unaff_x20[0x10];
            unaff_x22 = (undefined8 *)unaff_x20[0xf];
            unaff_x24 = (undefined8 *)unaff_x19[0x10];
            puVar10 = (undefined8 *)unaff_x19[0xf];
            in_stack_00000050 = puVar10;
            in_stack_00000058 = unaff_x24;
            in_stack_00000060 = unaff_x22;
            in_stack_00000068 = unaff_x21;
            if (unaff_x21 >> 0x3c < 0xf) {
              if (0xe < (ulong)unaff_x24 >> 0x3c) {
code_r0x000103a0eb18:
                param_3 = (undefined8 *)0x112d56fe0;
                param_4 = (undefined8 *)&UNK_10d91dda0;
                puVar4 = &stack0x00000060;
                puVar6 = &stack0x00000040;
                unaff_x23 = puVar10;
code_r0x000103a0eb38:
                func_0x000103a11d64(puVar4,puVar6,param_3,param_4);
                puVar6 = &stack0x00000050;
code_r0x000103a0e900:
                func_0x000103a11d64(puVar6);
code_r0x000103a0e90c:
                puVar4 = unaff_x23;
                func_0x0001000b44c0(unaff_x22,unaff_x21);
                goto code_r0x000103a0e91c;
              }
code_r0x000103a0eb48:
              unaff_x25 = (undefined8 *)0x112d56000;
code_r0x000103a0eb4c:
              param_3 = unaff_x25 + 0x1fc;
              param_4 = (undefined8 *)&UNK_10d91dda0;
              puVar4 = &stack0x00000060;
              puVar6 = &stack0x00000040;
              unaff_x25 = param_3;
              unaff_x26 = param_4;
code_r0x000103a0eb68:
              func_0x000103a11d64(puVar4,puVar6,param_3,param_4);
              func_0x000103a11d64(&stack0x00000050,&stack0x00000040,unaff_x25,unaff_x26);
              puVar6 = unaff_x22;
              func_0x000100e25fcc(unaff_x22,unaff_x21,puVar10,unaff_x24);
              func_0x0001000b44c0(puVar10,unaff_x24);
              func_0x0001000b44c0(unaff_x22,unaff_x21);
              if (((ulong)puVar6 & 1) != 0) goto code_r0x000103a0ebb4;
            }
            else {
              if ((ulong)unaff_x24 >> 0x3c < 0xf) goto code_r0x000103a0eb18;
              unaff_x23 = (undefined8 *)0x112d56000;
code_r0x000103a0eac8:
              unaff_x23 = unaff_x23 + 0x1fc;
              unaff_x24 = (undefined8 *)&UNK_10d91dda0;
code_r0x000103a0ead4:
              param_4 = unaff_x24;
              param_3 = unaff_x23;
              puVar4 = &stack0x00000060;
              puVar6 = &stack0x00000040;
              unaff_x23 = param_3;
              unaff_x24 = param_4;
code_r0x000103a0eae4:
              func_0x000103a11d64(puVar4,puVar6,param_3,param_4);
code_r0x000103a0eae8:
              puVar4 = unaff_x22;
              func_0x000103a11d64(&stack0x00000050,&stack0x00000040,unaff_x23,unaff_x24);
code_r0x000103a0eb00:
              func_0x0001000b44c0(puVar4,unaff_x21);
code_r0x000103a0ebb4:
              unaff_x21 = unaff_x20[0x12];
              unaff_x22 = (undefined8 *)unaff_x20[0x11];
              unaff_x24 = (undefined8 *)unaff_x19[0x12];
              unaff_x23 = (undefined8 *)unaff_x19[0x11];
              in_stack_00000030 = unaff_x23;
              in_stack_00000038 = unaff_x24;
              in_stack_00000040 = unaff_x22;
              in_stack_00000048 = unaff_x21;
              if (unaff_x21 >> 0x3c < 0xf) {
                if (0xe < (ulong)unaff_x24 >> 0x3c) goto code_r0x000103a0ec34;
                func_0x000103a11d64(&stack0x00000040,&stack0x00000020,0x112d56fe0,&UNK_10d91dda0);
                func_0x000103a11d64(&stack0x00000030,&stack0x00000020,0x112d56fe0,&UNK_10d91dda0);
                puVar6 = unaff_x22;
                func_0x000100e25fcc(unaff_x22,unaff_x21,unaff_x23,unaff_x24);
                func_0x0001000b44c0(unaff_x23,unaff_x24);
                func_0x0001000b44c0(unaff_x22,unaff_x21);
                if (((ulong)puVar6 & 1) == 0) goto code_r0x000103a0e924;
              }
              else {
                if ((ulong)unaff_x24 >> 0x3c < 0xf) {
code_r0x000103a0ec34:
                  func_0x000103a11d64(&stack0x00000040,&stack0x00000020,0x112d56fe0,&UNK_10d91dda0);
                  puVar6 = &stack0x00000030;
                  goto code_r0x000103a0e900;
                }
                func_0x000103a11d64(&stack0x00000040,&stack0x00000020,0x112d56fe0,&UNK_10d91dda0);
                func_0x000103a11d64(&stack0x00000030,&stack0x00000020,0x112d56fe0,&UNK_10d91dda0);
                func_0x0001000b44c0(unaff_x22,unaff_x21);
              }
              unaff_x21 = unaff_x20[0x14];
              unaff_x22 = (undefined8 *)unaff_x20[0x13];
              unaff_x24 = (undefined8 *)unaff_x19[0x14];
              unaff_x23 = (undefined8 *)unaff_x19[0x13];
              in_stack_00000010 = unaff_x23;
              in_stack_00000018 = unaff_x24;
              in_stack_00000020 = unaff_x22;
              in_stack_00000028 = unaff_x21;
              if (unaff_x21 >> 0x3c < 0xf) {
                if (0xe < (ulong)unaff_x24 >> 0x3c) goto code_r0x000103a0ed50;
                func_0x000103a11d64(&stack0x00000020);
                func_0x000103a11d64(&stack0x00000010);
                puVar6 = unaff_x22;
                func_0x000100e25fcc(unaff_x22,unaff_x21,unaff_x23,unaff_x24);
                func_0x0001000b44c0(unaff_x23,unaff_x24);
                func_0x0001000b44c0(unaff_x22,unaff_x21);
                if (((ulong)puVar6 & 1) == 0) goto code_r0x000103a0e924;
              }
              else {
                if ((ulong)unaff_x24 >> 0x3c < 0xf) {
code_r0x000103a0ed50:
                  func_0x000103a11d64(&stack0x00000020);
                  puVar6 = &stack0x00000010;
                  goto code_r0x000103a0e900;
                }
                func_0x000103a11d64(&stack0x00000020);
                func_0x000103a11d64(&stack0x00000010);
                func_0x0001000b44c0(unaff_x22,unaff_x21);
              }
              uVar8 = *unaff_x20;
              func_0x000101731444(uVar8,*unaff_x19);
              if ((uVar8 & 1) != 0) {
                uVar8 = unaff_x20[1];
                func_0x000101731444(uVar8,unaff_x19[1]);
                if ((uVar8 & 1) != 0) {
                  bVar9 = (byte)unaff_x20[2];
                  bVar1 = *(byte *)(unaff_x19 + 2);
                  if (bVar9 < 0xfe) {
                    if (bVar1 < 0xfe) {
                      if (bVar9 >> 6 == 0) {
                        uVar3 = 0;
                        if (bVar1 < 0x40) goto code_r0x000103a0ee74;
                      }
                      else if (bVar9 >> 6 == 1) {
                        uVar3 = 0;
                        if ((bVar1 & 0xc0) == 0x40) {
code_r0x000103a0ee74:
                          uVar3 = 0;
                          if (((bVar1 ^ bVar9) & 1) == 0) goto code_r0x000103a0ee7c;
                        }
                      }
                      else {
                        uVar3 = 0;
                        if ((char)bVar1 < -0x40) goto code_r0x000103a0ee74;
                      }
                      goto code_r0x000103a0e928;
                    }
                  }
                  else if (0xfd < bVar1) {
code_r0x000103a0ee7c:
                    bVar9 = *(byte *)(unaff_x19 + 0x15);
                    if ((byte)unaff_x20[0x15] == 2) {
                      if (bVar9 != 2) goto code_r0x000103a0e924;
                    }
                    else {
                      uVar3 = 0;
                      if ((bVar9 == 2) || ((((byte)unaff_x20[0x15] ^ bVar9) & 1) != 0))
                      goto code_r0x000103a0e928;
                    }
                    uVar8 = unaff_x20[3];
                    func_0x000100e25fcc(uVar8,unaff_x20[4],unaff_x19[3],unaff_x19[4]);
                    uVar3 = (uint)uVar8;
                    goto code_r0x000103a0e928;
                  }
                }
              }
            }
          }
        }
        else {
code_r0x000103a0ea68:
          if (param_4 != (undefined8 *)0x0) {
            puVar4 = (undefined8 *)unaff_x20[0xd];
            if (puVar4 == (undefined8 *)unaff_x19[0xd]) {
code_r0x000103a0ea7c:
              if (puVar6 == param_4) goto code_r0x000103a0ea98;
            }
            func_0x000107c605b8();
            if (((ulong)puVar4 & 1) != 0) goto code_r0x000103a0ea98;
          }
        }
      }
    }
  }
code_r0x000103a0e924:
  uVar3 = 0;
code_r0x000103a0e928:
  puVar4 = (undefined8 *)(ulong)(uVar3 & 1);
code_r0x000103a0e938:
  goto code_r0x000103a0e93c;
code_r0x000103a0e91c:
  func_0x0001000b44c0(puVar4,unaff_x24);
  goto code_r0x000103a0e924;
code_r0x000103a0e780:
  uVar7 = (uint)(bVar1 ^ bVar2);
code_r0x000103a0e784:
  uVar7 = uVar7 ^ 1;
  goto code_r0x000103a0e788;
code_r0x000103a0e93c:
code_r0x000103a0e944:
  return puVar4;
code_r0x000103a0e788:
  if ((bool)in_CY) {
    uVar7 = 0;
  }
code_r0x000103a0e78c:
  return (undefined8 *)(ulong)(uVar7 & 1);
}



/* Entry: 1039f802c; end: 1039f8073;  */

void FUN_1039f802c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3ab20,0x30,2);
  uRam000000011380c740 = uStack_38;
  uRam000000011380c738 = uStack_40;
  uRam000000011380c750 = uStack_28;
  uRam000000011380c748 = uStack_30;
  uRam000000011380c760 = uStack_18;
  uRam000000011380c758 = uStack_20;
  return;
}



/* Entry: 1039f8074; end: 1039f8113;  */

/* WARNING: Possible PIC construction at 0x0001039f80c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001039f80d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001039f80c4) */
/* WARNING: Removing unreachable block (ram,0x0001039f80d4) */

void FUN_1039f8074(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9a88 != -1) {
    func_0x000107c61568(0x112fc9a88,FUN_1039f802c);
  }
  uVar5 = uRam000000011380c760;
  uVar4 = uRam000000011380c758;
  uVar3 = uRam000000011380c750;
  uVar2 = uRam000000011380c748;
  uVar1 = uRam000000011380c740;
  *param_1 = uRam000000011380c738;
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



/* Entry: 1039f8114; end: 1039f815b;  */

void FUN_1039f8114(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3aa60,0xb1,2);
  uRam000000011380c770 = uStack_38;
  uRam000000011380c768 = uStack_40;
  uRam000000011380c780 = uStack_28;
  uRam000000011380c778 = uStack_30;
  uRam000000011380c790 = uStack_18;
  uRam000000011380c788 = uStack_20;
  return;
}



/* Entry: 1039f815c; end: 1039f83f7;  */

void FUN_1039f815c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  long unaff_x20;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auStack_358 [24];
  undefined1 auStack_340 [24];
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
  undefined1 uStack_248;
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
  undefined1 uStack_160;
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
  undefined1 uStack_70;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  puVar5 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar5 = 0;
  *(undefined2 *)(unaff_x20 + 0x20) = 3;
  func_0x000103a17eec(&uStack_328);
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_270;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_278;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_260;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_268;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_250;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_258;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_2b0;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_2b8;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_2a0;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_2a8;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_290;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_298;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_280;
  *(undefined8 *)(unaff_x20 + 200) = uStack_288;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_2f0;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_2f8;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_2e0;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_2e8;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_2d0;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_2d8;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_2c0;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_2c8;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_320;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_328;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_310;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_318;
  *(undefined1 *)(unaff_x20 + 0x108) = uStack_248;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_300;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_308;
  func_0x000107c61428(param_1 + 0x10,auStack_340,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined2 *)(param_1 + 0x20);
  func_0x000107c61428(puVar5,auStack_358,1,0);
  uVar6 = *puVar5;
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  *puVar5 = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  uVar4 = *(undefined2 *)(unaff_x20 + 0x20);
  *(undefined2 *)(unaff_x20 + 0x20) = uVar3;
  FUN_1039f7ef0(uVar1,uVar2,uVar3);
  FUN_1039f83f8(uVar6,uVar7,uVar4);
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  uStack_210 = *(undefined8 *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  uStack_238 = *(undefined8 *)(param_1 + 0x30);
  uStack_240 = *(undefined8 *)(param_1 + 0x28);
  uStack_228 = *(undefined8 *)(param_1 + 0x40);
  uStack_230 = *(undefined8 *)(param_1 + 0x38);
  uStack_218 = *(undefined8 *)(param_1 + 0x50);
  uStack_220 = *(undefined8 *)(param_1 + 0x48);
  func_0x000103a11d64(&uStack_240,&uStack_150,0x112fc9888,&UNK_10dc38d08);
  func_0x000107c61574(param_1);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0xe0);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0xd8);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0xf0);
  uStack_90 = *(undefined8 *)(unaff_x20 + 0xe8);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x100);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0xf8);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xa0);
  uStack_e0 = *(undefined8 *)(unaff_x20 + 0x98);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0xb0);
  uStack_d0 = *(undefined8 *)(unaff_x20 + 0xa8);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0xc0);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0xb8);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0xd0);
  uStack_b0 = *(undefined8 *)(unaff_x20 + 200);
  uStack_118 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_120 = *(undefined8 *)(unaff_x20 + 0x58);
  uStack_108 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_110 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_100 = *(undefined8 *)(unaff_x20 + 0x78);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_f0 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_148 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_150 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_138 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_140 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_128 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_130 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0xe0) = uStack_188;
  *(undefined8 *)(unaff_x20 + 0xd8) = uStack_190;
  *(undefined8 *)(unaff_x20 + 0xf0) = uStack_178;
  *(undefined8 *)(unaff_x20 + 0xe8) = uStack_180;
  *(undefined8 *)(unaff_x20 + 0x100) = uStack_168;
  *(undefined8 *)(unaff_x20 + 0xf8) = uStack_170;
  *(undefined8 *)(unaff_x20 + 0xa0) = uStack_1c8;
  *(undefined8 *)(unaff_x20 + 0x98) = uStack_1d0;
  *(undefined8 *)(unaff_x20 + 0xb0) = uStack_1b8;
  *(undefined8 *)(unaff_x20 + 0xa8) = uStack_1c0;
  *(undefined8 *)(unaff_x20 + 0xc0) = uStack_1a8;
  *(undefined8 *)(unaff_x20 + 0xb8) = uStack_1b0;
  *(undefined8 *)(unaff_x20 + 0xd0) = uStack_198;
  *(undefined8 *)(unaff_x20 + 200) = uStack_1a0;
  *(undefined8 *)(unaff_x20 + 0x60) = uStack_208;
  *(undefined8 *)(unaff_x20 + 0x58) = uStack_210;
  *(undefined8 *)(unaff_x20 + 0x70) = uStack_1f8;
  *(undefined8 *)(unaff_x20 + 0x68) = uStack_200;
  *(undefined8 *)(unaff_x20 + 0x80) = uStack_1e8;
  *(undefined8 *)(unaff_x20 + 0x78) = uStack_1f0;
  *(undefined8 *)(unaff_x20 + 0x90) = uStack_1d8;
  *(undefined8 *)(unaff_x20 + 0x88) = uStack_1e0;
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_238;
  *(undefined8 *)(unaff_x20 + 0x28) = uStack_240;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_228;
  *(undefined8 *)(unaff_x20 + 0x38) = uStack_230;
  uStack_70 = *(undefined1 *)(unaff_x20 + 0x108);
  *(undefined1 *)(unaff_x20 + 0x108) = uStack_160;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_218;
  *(undefined8 *)(unaff_x20 + 0x48) = uStack_220;
  func_0x000103a17eac(&uStack_150,0x112fc9888,&UNK_10dc38d08);
  return;
}



/* Entry: 1039f83f8; end: 1039f840b;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1039f83f8(ulong param_1,ulong param_2,char param_3)

{
  uint uVar1;
  
  if (param_3 == '\x03') {
    return;
  }
  uVar1 = (uint)(param_2 >> 0x3e);
  if (uVar1 == 1) {
    param_1 = param_2 & 0x3fffffffffffffff;
  }
  else if (uVar1 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_1);
  return;
}



/* Entry: 1039f840c; end: 1039f844b;  */

void FUN_1039f840c(void)

{
  long unaff_x20;
  
  FUN_1039f83f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined2 *)(unaff_x20 + 0x20));
  func_0x000103a17eac(unaff_x20 + 0x28,0x112fc9888,&UNK_10dc38d08);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1039f844c; end: 1039f84db;  */

void FUN_1039f844c(void)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(ulong *)(unaff_x20 + 0x10);
  func_0x000107c61558();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar1 & 1) == 0) {
    uVar3 = 0;
    FUN_1039f7f04(0);
    func_0x000107c613fc();
    FUN_1039f815c(uVar2,uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = uVar2;
  }
  FUN_1039f84dc();
  return;
}



/* Entry: 1039f84dc; end: 1039f87cf;  */

/* WARNING: Removing unreachable block (ram,0x0001039f859c) */
/* WARNING: Removing unreachable block (ram,0x0001039f8644) */
/* WARNING: Removing unreachable block (ram,0x0001039f85f0) */
/* WARNING: Removing unreachable block (ram,0x0001039f875c) */
/* WARNING: Removing unreachable block (ram,0x0001039f87b0) */
/* WARNING: Removing unreachable block (ram,0x0001039f8794) */
/* WARNING: Removing unreachable block (ram,0x0001039f860c) */
/* WARNING: Removing unreachable block (ram,0x0001039f85b8) */
/* WARNING: Removing unreachable block (ram,0x0001039f8778) */
/* WARNING: Removing unreachable block (ram,0x0001039f86ec) */
/* WARNING: Removing unreachable block (ram,0x0001039f87cc) */
/* WARNING: Removing unreachable block (ram,0x0001039f86d0) */
/* WARNING: Removing unreachable block (ram,0x0001039f8660) */
/* WARNING: Removing unreachable block (ram,0x0001039f8740) */
/* WARNING: Removing unreachable block (ram,0x0001039f85d4) */
/* WARNING: Removing unreachable block (ram,0x0001039f8628) */
/* WARNING: Removing unreachable block (ram,0x0001039f8698) */
/* WARNING: Removing unreachable block (ram,0x0001039f8708) */
/* WARNING: Removing unreachable block (ram,0x0001039f867c) */
/* WARNING: Removing unreachable block (ram,0x0001039f86b4) */
/* WARNING: Removing unreachable block (ram,0x0001039f8724) */

void FUN_1039f84dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_4 + 0x10);
  uVar1 = param_3;
  lVar2 = param_4;
  (*pcVar3)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      switch(uVar1) {
      case 1:
        FUN_1039f87d0(param_1,param_2,param_3,param_4);
        break;
      case 2:
        FUN_1039f8cbc(param_1,param_2,param_3,param_4);
        break;
      case 3:
        FUN_1039f91f4(param_1,param_2,param_3,param_4);
        break;
      case 4:
        FUN_1039f96e4(param_1,param_2,param_3,param_4);
        break;
      case 5:
        FUN_1039f9c1c(param_1,param_2,param_3,param_4);
        break;
      case 6:
        FUN_1039fa10c(param_1,param_2,param_3,param_4);
        break;
      case 7:
        FUN_1039fa644(param_1,param_2,param_3,param_4);
        break;
      case 8:
        FUN_1039fab34(param_1,param_2,param_3,param_4);
        break;
      case 9:
        FUN_1039fb06c(param_1,param_2,param_3,param_4);
        break;
      case 10:
        FUN_1039fb55c(param_1,param_2,param_3,param_4);
        break;
      case 0xb:
        FUN_1039fba94(param_1,param_2,param_3,param_4);
        break;
      case 0xc:
        FUN_1039fbf84(param_1,param_2,param_3,param_4);
        break;
      case 0xd:
        FUN_1039fc4bc(param_1,param_2,param_3,param_4);
        break;
      case 0xe:
        FUN_1039fc8c8(param_1,param_2,param_3,param_4);
        break;
      case 0xf:
        FUN_1039fcce8(param_1,param_2,param_3,param_4);
        break;
      case 0x10:
        FUN_1039fd3b0(param_1,param_2,param_3,param_4);
        break;
      case 0x11:
        FUN_1039fd884(param_2,param_1,param_3,param_4);
        break;
      case 0x12:
        FUN_1039fd918(param_1,param_2,param_3,param_4);
        break;
      case 0x13:
        FUN_1039fdd38(param_1,param_2,param_3,param_4);
        break;
      case 0x14:
        FUN_1039fe158(param_1,param_2,param_3,param_4);
        break;
      case 0x15:
        FUN_1039fe5dc(param_1,param_2,param_3,param_4);
        break;
      case 0x16:
        FUN_1039fecd8(param_1,param_2,param_3,param_4);
      }
      uVar1 = param_3;
      lVar2 = param_4;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 1039f87d0; end: 1039f8cbb;  */

/* WARNING: Removing unreachable block (ram,0x0001039f8b3c) */

void FUN_1039f87d0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined6 uStack_5c8;
  undefined2 uStack_5c2;
  undefined6 uStack_5c0;
  undefined2 uStack_5ba;
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
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
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
  undefined1 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
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
  undefined1 uStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_160;
  long lStack_150;
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
  undefined1 uStack_70;
  
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_252 = 0;
  lStack_260 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  lStack_210 = *(long *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  lStack_238 = *(long *)(param_1 + 0x30);
  lStack_240 = *(long *)(param_1 + 0x28);
  lStack_228 = *(long *)(param_1 + 0x40);
  lStack_230 = *(long *)(param_1 + 0x38);
  lStack_218 = *(long *)(param_1 + 0x50);
  lStack_220 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = *(undefined8 *)(param_1 + 0xe8);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined1 *)(param_1 + 0x108);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  lStack_150 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_240;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_88;
    uStack_360 = uStack_90;
    uStack_348 = uStack_78;
    uStack_350 = uStack_80;
    uStack_340 = uStack_70;
    uStack_398 = uStack_c8;
    uStack_3a0 = uStack_d0;
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uStack_3d8 = uStack_108;
    uStack_3e0 = (undefined6)uStack_110;
    uStack_3da = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_3c8 = uStack_f8;
    uStack_3d0 = uStack_100;
    uStack_3b8 = uStack_e8;
    uStack_3c0 = uStack_f0;
    uStack_3a8 = uStack_d8;
    uStack_3b0 = uStack_e0;
    lStack_418 = uStack_148;
    lStack_420 = lStack_150;
    lStack_408 = uStack_138;
    lStack_410 = uStack_140;
    lStack_3f8 = uStack_128;
    lStack_400 = uStack_130;
    uStack_3e8 = (undefined6)uStack_118;
    uStack_3e2 = (undefined2)((ulong)uStack_118 >> 0x30);
    lStack_3f0 = uStack_120;
    plVar2 = &lStack_150;
    func_0x000103a0db54();
    if ((int)plVar2 == 0) {
      plVar3 = &lStack_420;
      func_0x000103a0db5c();
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      lStack_2d0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_2a2 = 0;
      uStack_2a0 = 0;
      uStack_448 = uStack_178;
      uStack_450 = uStack_180;
      uStack_438 = uStack_168;
      uStack_440 = uStack_170;
      uStack_430 = uStack_160;
      uStack_488 = uStack_1b8;
      uStack_490 = uStack_1c0;
      uStack_478 = uStack_1a8;
      uStack_480 = uStack_1b0;
      uStack_468 = uStack_198;
      uStack_470 = uStack_1a0;
      uStack_458 = uStack_188;
      uStack_460 = uStack_190;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_4b8 = uStack_1e8;
      uStack_4c0 = uStack_1f0;
      uStack_4a8 = uStack_1d8;
      uStack_4b0 = uStack_1e0;
      uStack_498 = uStack_1c8;
      uStack_4a0 = uStack_1d0;
      lStack_508 = lStack_238;
      lStack_510 = lStack_240;
      lStack_4f8 = lStack_228;
      lStack_500 = lStack_230;
      lStack_4e8 = lStack_218;
      lStack_4f0 = lStack_220;
      uStack_4d8 = uStack_208;
      lStack_4e0 = lStack_210;
      func_0x000103a0db60(&lStack_510,&lStack_600);
      plVar2 = &lStack_2e0;
      func_0x000103a17eac(plVar2,0x112fca640,&UNK_10dc3a9e8);
      lStack_288 = plVar3[1];
      lStack_290 = *plVar3;
      lStack_268 = plVar3[5];
      lStack_270 = plVar3[4];
      lStack_260 = plVar3[6];
      lStack_278 = plVar3[3];
      lStack_280 = plVar3[2];
      uStack_250 = (undefined6)((ulong)*(undefined8 *)((long)plVar3 + 0x3e) >> 0x10);
      uStack_258 = (undefined6)plVar3[7];
      uStack_252 = (undefined2)((ulong)plVar3[7] >> 0x30);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a1264c();
  (*pcVar6)(&lStack_290,&UNK_1106bdfe0,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_328 = lStack_288;
    lStack_330 = lStack_290;
    lStack_318 = lStack_278;
    lStack_320 = lStack_280;
    lStack_308 = lStack_268;
    lStack_310 = lStack_270;
    lStack_300 = lStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f2 = uStack_252;
    uStack_2f0 = uStack_250;
    lStack_2b8 = lStack_268;
    lStack_2c0 = lStack_270;
    uStack_2a8 = uStack_258;
    lStack_2b0 = lStack_260;
    uStack_2a2 = uStack_252;
    uStack_2a0 = uStack_250;
    lStack_2d8 = lStack_288;
    lStack_2e0 = lStack_290;
    lStack_2c8 = lStack_278;
    lStack_2d0 = lStack_280;
    if (lStack_290 != 0) {
      if (iVar1 == 1) {
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dba0(&lStack_420,&lStack_510);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dba0(&lStack_420,&lStack_510);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_290,0x112fca640,&UNK_10dc3a9e8);
      lStack_5d8 = lStack_2b8;
      lStack_5e0 = lStack_2c0;
      uStack_5c8 = uStack_2a8;
      lStack_5d0 = lStack_2b0;
      uStack_5c2 = uStack_2a2;
      uStack_5c0 = uStack_2a0;
      lStack_5f8 = lStack_2d8;
      lStack_600 = lStack_2e0;
      lStack_5e8 = lStack_2c8;
      lStack_5f0 = lStack_2d0;
      func_0x000103a0db94(&lStack_600);
      uStack_448 = uStack_538;
      uStack_450 = uStack_540;
      uStack_438 = uStack_528;
      uStack_440 = uStack_530;
      uStack_430 = uStack_520;
      uStack_488 = uStack_578;
      uStack_490 = uStack_580;
      uStack_478 = uStack_568;
      uStack_480 = uStack_570;
      uStack_468 = uStack_558;
      uStack_470 = uStack_560;
      uStack_458 = uStack_548;
      uStack_460 = uStack_550;
      uStack_4d0 = CONCAT26(uStack_5ba,uStack_5c0);
      uStack_4c8 = uStack_5b8;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_498 = uStack_588;
      uStack_4a0 = uStack_590;
      lStack_508 = lStack_5f8;
      lStack_510 = lStack_600;
      lStack_4f8 = lStack_5e8;
      lStack_500 = lStack_5f0;
      uStack_4d8 = CONCAT26(uStack_5c2,uStack_5c8);
      lStack_4e8 = lStack_5d8;
      lStack_4f0 = lStack_5e0;
      lStack_4e0 = lStack_5d0;
      func_0x000103a0db9c(&lStack_510);
      uStack_368 = *(undefined8 *)(param_1 + 0xe0);
      uStack_370 = *(undefined8 *)(param_1 + 0xd8);
      uStack_358 = *(undefined8 *)(param_1 + 0xf0);
      uStack_360 = *(undefined8 *)(param_1 + 0xe8);
      uStack_348 = *(undefined8 *)(param_1 + 0x100);
      uStack_350 = *(undefined8 *)(param_1 + 0xf8);
      uStack_3a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_398 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_388 = *(undefined8 *)(param_1 + 0xc0);
      uStack_390 = *(undefined8 *)(param_1 + 0xb8);
      uStack_378 = *(undefined8 *)(param_1 + 0xd0);
      uStack_380 = *(undefined8 *)(param_1 + 200);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_3e0 = (undefined6)*(undefined8 *)(param_1 + 0x68);
      uStack_3da = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x30);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x88);
      lStack_418 = *(undefined8 *)(param_1 + 0x30);
      lStack_420 = *(long *)(param_1 + 0x28);
      lStack_408 = *(undefined8 *)(param_1 + 0x40);
      lStack_410 = *(undefined8 *)(param_1 + 0x38);
      lStack_3f8 = *(undefined8 *)(param_1 + 0x50);
      lStack_400 = *(undefined8 *)(param_1 + 0x48);
      uStack_3e8 = (undefined6)*(undefined8 *)(param_1 + 0x60);
      uStack_3e2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x30);
      *(undefined8 *)(param_1 + 0xe0) = uStack_458;
      *(undefined8 *)(param_1 + 0xd8) = uStack_460;
      *(undefined8 *)(param_1 + 0xf0) = uStack_448;
      *(undefined8 *)(param_1 + 0xe8) = uStack_450;
      *(undefined8 *)(param_1 + 0x100) = uStack_438;
      *(undefined8 *)(param_1 + 0xf8) = uStack_440;
      *(undefined8 *)(param_1 + 0xa0) = uStack_498;
      *(undefined8 *)(param_1 + 0x98) = uStack_4a0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_488;
      *(undefined8 *)(param_1 + 0xa8) = uStack_490;
      *(undefined8 *)(param_1 + 0xc0) = uStack_478;
      *(undefined8 *)(param_1 + 0xb8) = uStack_480;
      *(undefined8 *)(param_1 + 0xd0) = uStack_468;
      *(undefined8 *)(param_1 + 200) = uStack_470;
      *(undefined8 *)(param_1 + 0x60) = uStack_4d8;
      *(long *)(param_1 + 0x58) = lStack_4e0;
      *(undefined8 *)(param_1 + 0x70) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x68) = uStack_4d0;
      *(undefined8 *)(param_1 + 0x80) = uStack_4b8;
      *(undefined8 *)(param_1 + 0x78) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x90) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x88) = uStack_4b0;
      *(long *)(param_1 + 0x30) = lStack_508;
      *(long *)(param_1 + 0x28) = lStack_510;
      *(long *)(param_1 + 0x40) = lStack_4f8;
      *(long *)(param_1 + 0x38) = lStack_500;
      uStack_340 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_430;
      *(long *)(param_1 + 0x50) = lStack_4e8;
      *(long *)(param_1 + 0x48) = lStack_4f0;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_420;
      goto LAB_1039f8a74;
    }
  }
  uVar4 = 0x112fca640;
  puVar5 = &UNK_10dc3a9e8;
  plVar2 = &lStack_290;
LAB_1039f8a74:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039f8cbc; end: 1039f91f3;  */

/* WARNING: Removing unreachable block (ram,0x0001039f906c) */

void FUN_1039f8cbc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined2 uStack_618;
  undefined6 uStack_616;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined6 uStack_606;
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
  undefined1 uStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
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
  undefined1 uStack_4a0;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
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
  undefined1 uStack_3b0;
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
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined8 uStack_33e;
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
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined8 uStack_2ce;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_25e = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  lStack_270 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  lStack_218 = *(long *)(param_1 + 0x60);
  lStack_220 = *(long *)(param_1 + 0x58);
  lStack_208 = *(long *)(param_1 + 0x70);
  lStack_210 = *(long *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  lStack_200 = *(long *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  lStack_248 = *(long *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  lStack_238 = *(long *)(param_1 + 0x40);
  lStack_240 = *(long *)(param_1 + 0x38);
  lStack_228 = *(long *)(param_1 + 0x50);
  lStack_230 = *(long *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_250;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_3c8 = uStack_98;
    uStack_3d0 = uStack_a0;
    uStack_3b8 = uStack_88;
    uStack_3c0 = uStack_90;
    uStack_3b0 = uStack_80;
    uStack_408 = uStack_d8;
    uStack_410 = uStack_e0;
    uStack_3f8 = uStack_c8;
    uStack_400 = uStack_d0;
    uStack_3e8 = uStack_b8;
    uStack_3f0 = uStack_c0;
    uStack_3d8 = uStack_a8;
    uStack_3e0 = uStack_b0;
    lStack_448 = uStack_118;
    lStack_450 = uStack_120;
    uStack_438 = (undefined2)uStack_108;
    uStack_436 = (undefined6)((ulong)uStack_108 >> 0x10);
    lStack_440 = uStack_110;
    uStack_428 = (undefined2)uStack_f8;
    uStack_426 = (undefined6)((ulong)uStack_f8 >> 0x10);
    uStack_430 = (undefined2)uStack_100;
    uStack_42e = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_418 = uStack_e8;
    uStack_420 = uStack_f0;
    lStack_488 = uStack_158;
    lStack_490 = lStack_160;
    lStack_478 = uStack_148;
    lStack_480 = uStack_150;
    lStack_468 = uStack_138;
    lStack_470 = uStack_140;
    lStack_458 = uStack_128;
    lStack_460 = uStack_130;
    plVar2 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar2 == 1) {
      plVar3 = &lStack_490;
      func_0x000103a0dbd4();
      lStack_328 = 0;
      lStack_330 = 0;
      lStack_318 = 0;
      lStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      lStack_2f8 = 0;
      lStack_300 = 0;
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      lStack_2e0 = 0;
      uStack_2ce = 0;
      uStack_2d6 = 0;
      uStack_2d0 = 0;
      uStack_4b8 = uStack_188;
      uStack_4c0 = uStack_190;
      uStack_4a8 = uStack_178;
      uStack_4b0 = uStack_180;
      uStack_4a0 = uStack_170;
      uStack_4f8 = uStack_1c8;
      uStack_500 = uStack_1d0;
      uStack_4e8 = uStack_1b8;
      uStack_4f0 = uStack_1c0;
      uStack_4d8 = uStack_1a8;
      uStack_4e0 = uStack_1b0;
      uStack_4c8 = uStack_198;
      uStack_4d0 = uStack_1a0;
      lStack_538 = lStack_208;
      lStack_540 = lStack_210;
      uStack_528 = uStack_1f8;
      lStack_530 = lStack_200;
      uStack_518 = uStack_1e8;
      uStack_520 = uStack_1f0;
      uStack_508 = uStack_1d8;
      uStack_510 = uStack_1e0;
      lStack_578 = lStack_248;
      lStack_580 = lStack_250;
      lStack_568 = lStack_238;
      lStack_570 = lStack_240;
      lStack_558 = lStack_228;
      lStack_560 = lStack_230;
      lStack_548 = lStack_218;
      lStack_550 = lStack_220;
      func_0x000103a0db60(&lStack_580,&lStack_670);
      plVar2 = &lStack_330;
      func_0x000103a17eac(plVar2,0x112fca648,&UNK_10dc3a9f0);
      lStack_2a8 = plVar3[3];
      lStack_2b0 = plVar3[2];
      lStack_298 = plVar3[5];
      lStack_2a0 = plVar3[4];
      lStack_2b8 = plVar3[1];
      lStack_2c0 = *plVar3;
      lStack_278 = plVar3[9];
      lStack_280 = plVar3[8];
      lStack_270 = plVar3[10];
      uStack_25e = *(undefined8 *)((long)plVar3 + 0x62);
      lStack_288 = plVar3[7];
      lStack_290 = plVar3[6];
      uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)plVar3 + 0x5a) >> 0x30);
      uStack_268 = (undefined2)plVar3[0xb];
      uStack_266 = (undefined6)((ulong)plVar3[0xb] >> 0x10);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12748();
  (*pcVar6)(&lStack_2c0,&UNK_1106be080,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    lStack_360 = lStack_280;
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    uStack_33e = uStack_25e;
    uStack_346 = uStack_266;
    uStack_340 = uStack_260;
    lStack_398 = lStack_2b8;
    lStack_3a0 = lStack_2c0;
    lStack_388 = lStack_2a8;
    lStack_390 = lStack_2b0;
    lStack_378 = lStack_298;
    lStack_380 = lStack_2a0;
    lStack_368 = lStack_288;
    lStack_370 = lStack_290;
    lStack_328 = lStack_2b8;
    lStack_330 = lStack_2c0;
    lStack_318 = lStack_2a8;
    lStack_320 = lStack_2b0;
    uStack_2ce = uStack_25e;
    uStack_2d0 = uStack_260;
    lStack_308 = lStack_298;
    lStack_310 = lStack_2a0;
    lStack_2f8 = lStack_288;
    lStack_300 = lStack_290;
    lStack_2e8 = lStack_278;
    lStack_2f0 = lStack_280;
    uStack_2d8 = uStack_268;
    uStack_2d6 = uStack_266;
    lStack_2e0 = lStack_270;
    if (lStack_2c0 != 0) {
      uStack_428 = (undefined2)((ulong)uStack_25e >> 0x30);
      uStack_42e = (undefined6)uStack_25e;
      if (iVar1 == 1) {
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dbe4(&lStack_490,&lStack_580);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dbe4(&lStack_490,&lStack_580);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_2c0,0x112fca648,&UNK_10dc3a9f0);
      lStack_628 = lStack_2e8;
      lStack_630 = lStack_2f0;
      uStack_618 = uStack_2d8;
      lStack_620 = lStack_2e0;
      uStack_60e = (undefined6)uStack_2ce;
      uStack_608 = (undefined2)((ulong)uStack_2ce >> 0x30);
      uStack_616 = uStack_2d6;
      uStack_610 = uStack_2d0;
      lStack_668 = lStack_328;
      lStack_670 = lStack_330;
      lStack_658 = lStack_318;
      lStack_660 = lStack_320;
      lStack_648 = lStack_308;
      lStack_650 = lStack_310;
      lStack_638 = lStack_2f8;
      lStack_640 = lStack_300;
      func_0x000103a0dbd8(&lStack_670);
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_4a0 = uStack_590;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_528 = CONCAT62(uStack_616,uStack_618);
      lStack_538 = lStack_628;
      lStack_540 = lStack_630;
      lStack_530 = lStack_620;
      uStack_518 = CONCAT62(uStack_606,uStack_608);
      uStack_520 = CONCAT62(uStack_60e,uStack_610);
      uStack_508 = uStack_5f8;
      uStack_510 = uStack_600;
      lStack_578 = lStack_668;
      lStack_580 = lStack_670;
      lStack_568 = lStack_658;
      lStack_570 = lStack_660;
      lStack_558 = lStack_648;
      lStack_560 = lStack_650;
      lStack_548 = lStack_638;
      lStack_550 = lStack_640;
      func_0x000103a0db9c(&lStack_580);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_3e0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
      uStack_3c0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_418 = *(undefined8 *)(param_1 + 0xa0);
      uStack_420 = *(undefined8 *)(param_1 + 0x98);
      uStack_408 = *(undefined8 *)(param_1 + 0xb0);
      uStack_410 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_400 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3f0 = *(undefined8 *)(param_1 + 200);
      lStack_458 = *(undefined8 *)(param_1 + 0x60);
      lStack_460 = *(undefined8 *)(param_1 + 0x58);
      lStack_448 = *(undefined8 *)(param_1 + 0x70);
      lStack_450 = *(undefined8 *)(param_1 + 0x68);
      lStack_440 = *(undefined8 *)(param_1 + 0x78);
      uStack_438 = (undefined2)*(undefined8 *)(param_1 + 0x80);
      uStack_436 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x10);
      uStack_428 = (undefined2)*(undefined8 *)(param_1 + 0x90);
      uStack_426 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x10);
      uStack_430 = (undefined2)*(undefined8 *)(param_1 + 0x88);
      uStack_42e = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x10);
      lStack_488 = *(undefined8 *)(param_1 + 0x30);
      lStack_490 = *(long *)(param_1 + 0x28);
      lStack_478 = *(undefined8 *)(param_1 + 0x40);
      lStack_480 = *(undefined8 *)(param_1 + 0x38);
      lStack_468 = *(undefined8 *)(param_1 + 0x50);
      lStack_470 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_4c8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_4d0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_4b8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x100) = uStack_4a8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_4b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_508;
      *(undefined8 *)(param_1 + 0x98) = uStack_510;
      *(undefined8 *)(param_1 + 0xb0) = uStack_4f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_500;
      *(undefined8 *)(param_1 + 0xc0) = uStack_4e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_4f0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_4d8;
      *(undefined8 *)(param_1 + 200) = uStack_4e0;
      *(long *)(param_1 + 0x60) = lStack_548;
      *(long *)(param_1 + 0x58) = lStack_550;
      *(long *)(param_1 + 0x70) = lStack_538;
      *(long *)(param_1 + 0x68) = lStack_540;
      *(undefined8 *)(param_1 + 0x80) = uStack_528;
      *(long *)(param_1 + 0x78) = lStack_530;
      *(undefined8 *)(param_1 + 0x90) = uStack_518;
      *(undefined8 *)(param_1 + 0x88) = uStack_520;
      *(long *)(param_1 + 0x30) = lStack_578;
      *(long *)(param_1 + 0x28) = lStack_580;
      *(long *)(param_1 + 0x40) = lStack_568;
      *(long *)(param_1 + 0x38) = lStack_570;
      uStack_3b0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_4a0;
      *(long *)(param_1 + 0x50) = lStack_558;
      *(long *)(param_1 + 0x48) = lStack_560;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_490;
      goto LAB_1039f8f88;
    }
  }
  uVar4 = 0x112fca648;
  puVar5 = &UNK_10dc3a9f0;
  plVar2 = &lStack_2c0;
LAB_1039f8f88:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039f91f4; end: 1039f96e3;  */

/* WARNING: Removing unreachable block (ram,0x0001039f9564) */

void FUN_1039f91f4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined6 uStack_5c8;
  undefined2 uStack_5c2;
  undefined6 uStack_5c0;
  undefined2 uStack_5ba;
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
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
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
  undefined1 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
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
  undefined1 uStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_160;
  long lStack_150;
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
  undefined1 uStack_70;
  
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_252 = 0;
  lStack_260 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  lStack_210 = *(long *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  lStack_238 = *(long *)(param_1 + 0x30);
  lStack_240 = *(long *)(param_1 + 0x28);
  lStack_228 = *(long *)(param_1 + 0x40);
  lStack_230 = *(long *)(param_1 + 0x38);
  lStack_218 = *(long *)(param_1 + 0x50);
  lStack_220 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = *(undefined8 *)(param_1 + 0xe8);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined1 *)(param_1 + 0x108);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  lStack_150 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_240;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_88;
    uStack_360 = uStack_90;
    uStack_348 = uStack_78;
    uStack_350 = uStack_80;
    uStack_340 = uStack_70;
    uStack_398 = uStack_c8;
    uStack_3a0 = uStack_d0;
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uStack_3d8 = uStack_108;
    uStack_3e0 = (undefined6)uStack_110;
    uStack_3da = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_3c8 = uStack_f8;
    uStack_3d0 = uStack_100;
    uStack_3b8 = uStack_e8;
    uStack_3c0 = uStack_f0;
    uStack_3a8 = uStack_d8;
    uStack_3b0 = uStack_e0;
    lStack_418 = uStack_148;
    lStack_420 = lStack_150;
    lStack_408 = uStack_138;
    lStack_410 = uStack_140;
    lStack_3f8 = uStack_128;
    lStack_400 = uStack_130;
    uStack_3e8 = (undefined6)uStack_118;
    uStack_3e2 = (undefined2)((ulong)uStack_118 >> 0x30);
    lStack_3f0 = uStack_120;
    plVar2 = &lStack_150;
    func_0x000103a0db54();
    if ((int)plVar2 == 2) {
      plVar3 = &lStack_420;
      func_0x000103a0dc18();
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      lStack_2d0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_2a2 = 0;
      uStack_2a0 = 0;
      uStack_448 = uStack_178;
      uStack_450 = uStack_180;
      uStack_438 = uStack_168;
      uStack_440 = uStack_170;
      uStack_430 = uStack_160;
      uStack_488 = uStack_1b8;
      uStack_490 = uStack_1c0;
      uStack_478 = uStack_1a8;
      uStack_480 = uStack_1b0;
      uStack_468 = uStack_198;
      uStack_470 = uStack_1a0;
      uStack_458 = uStack_188;
      uStack_460 = uStack_190;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_4b8 = uStack_1e8;
      uStack_4c0 = uStack_1f0;
      uStack_4a8 = uStack_1d8;
      uStack_4b0 = uStack_1e0;
      uStack_498 = uStack_1c8;
      uStack_4a0 = uStack_1d0;
      lStack_508 = lStack_238;
      lStack_510 = lStack_240;
      lStack_4f8 = lStack_228;
      lStack_500 = lStack_230;
      lStack_4e8 = lStack_218;
      lStack_4f0 = lStack_220;
      uStack_4d8 = uStack_208;
      lStack_4e0 = lStack_210;
      func_0x000103a0db60(&lStack_510,&lStack_600);
      plVar2 = &lStack_2e0;
      func_0x000103a17eac(plVar2,0x112fca650,&UNK_10dc3a9f8);
      lStack_288 = plVar3[1];
      lStack_290 = *plVar3;
      lStack_268 = plVar3[5];
      lStack_270 = plVar3[4];
      lStack_260 = plVar3[6];
      lStack_278 = plVar3[3];
      lStack_280 = plVar3[2];
      uStack_250 = (undefined6)((ulong)*(undefined8 *)((long)plVar3 + 0x3e) >> 0x10);
      uStack_258 = (undefined6)plVar3[7];
      uStack_252 = (undefined2)((ulong)plVar3[7] >> 0x30);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12844();
  (*pcVar6)(&lStack_290,&UNK_1106be120,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_328 = lStack_288;
    lStack_330 = lStack_290;
    lStack_318 = lStack_278;
    lStack_320 = lStack_280;
    lStack_308 = lStack_268;
    lStack_310 = lStack_270;
    lStack_300 = lStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f2 = uStack_252;
    uStack_2f0 = uStack_250;
    lStack_2b8 = lStack_268;
    lStack_2c0 = lStack_270;
    uStack_2a8 = uStack_258;
    lStack_2b0 = lStack_260;
    uStack_2a2 = uStack_252;
    uStack_2a0 = uStack_250;
    lStack_2d8 = lStack_288;
    lStack_2e0 = lStack_290;
    lStack_2c8 = lStack_278;
    lStack_2d0 = lStack_280;
    if (lStack_290 != 0) {
      if (iVar1 == 1) {
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dc28(&lStack_420,&lStack_510);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dc28(&lStack_420,&lStack_510);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_290,0x112fca650,&UNK_10dc3a9f8);
      lStack_5d8 = lStack_2b8;
      lStack_5e0 = lStack_2c0;
      uStack_5c8 = uStack_2a8;
      lStack_5d0 = lStack_2b0;
      uStack_5c2 = uStack_2a2;
      uStack_5c0 = uStack_2a0;
      lStack_5f8 = lStack_2d8;
      lStack_600 = lStack_2e0;
      lStack_5e8 = lStack_2c8;
      lStack_5f0 = lStack_2d0;
      func_0x000103a0dc1c(&lStack_600);
      uStack_448 = uStack_538;
      uStack_450 = uStack_540;
      uStack_438 = uStack_528;
      uStack_440 = uStack_530;
      uStack_430 = uStack_520;
      uStack_488 = uStack_578;
      uStack_490 = uStack_580;
      uStack_478 = uStack_568;
      uStack_480 = uStack_570;
      uStack_468 = uStack_558;
      uStack_470 = uStack_560;
      uStack_458 = uStack_548;
      uStack_460 = uStack_550;
      uStack_4d0 = CONCAT26(uStack_5ba,uStack_5c0);
      uStack_4c8 = uStack_5b8;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_498 = uStack_588;
      uStack_4a0 = uStack_590;
      lStack_508 = lStack_5f8;
      lStack_510 = lStack_600;
      lStack_4f8 = lStack_5e8;
      lStack_500 = lStack_5f0;
      uStack_4d8 = CONCAT26(uStack_5c2,uStack_5c8);
      lStack_4e8 = lStack_5d8;
      lStack_4f0 = lStack_5e0;
      lStack_4e0 = lStack_5d0;
      func_0x000103a0db9c(&lStack_510);
      uStack_368 = *(undefined8 *)(param_1 + 0xe0);
      uStack_370 = *(undefined8 *)(param_1 + 0xd8);
      uStack_358 = *(undefined8 *)(param_1 + 0xf0);
      uStack_360 = *(undefined8 *)(param_1 + 0xe8);
      uStack_348 = *(undefined8 *)(param_1 + 0x100);
      uStack_350 = *(undefined8 *)(param_1 + 0xf8);
      uStack_3a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_398 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_388 = *(undefined8 *)(param_1 + 0xc0);
      uStack_390 = *(undefined8 *)(param_1 + 0xb8);
      uStack_378 = *(undefined8 *)(param_1 + 0xd0);
      uStack_380 = *(undefined8 *)(param_1 + 200);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_3e0 = (undefined6)*(undefined8 *)(param_1 + 0x68);
      uStack_3da = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x30);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x88);
      lStack_418 = *(undefined8 *)(param_1 + 0x30);
      lStack_420 = *(long *)(param_1 + 0x28);
      lStack_408 = *(undefined8 *)(param_1 + 0x40);
      lStack_410 = *(undefined8 *)(param_1 + 0x38);
      lStack_3f8 = *(undefined8 *)(param_1 + 0x50);
      lStack_400 = *(undefined8 *)(param_1 + 0x48);
      uStack_3e8 = (undefined6)*(undefined8 *)(param_1 + 0x60);
      uStack_3e2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x30);
      *(undefined8 *)(param_1 + 0xe0) = uStack_458;
      *(undefined8 *)(param_1 + 0xd8) = uStack_460;
      *(undefined8 *)(param_1 + 0xf0) = uStack_448;
      *(undefined8 *)(param_1 + 0xe8) = uStack_450;
      *(undefined8 *)(param_1 + 0x100) = uStack_438;
      *(undefined8 *)(param_1 + 0xf8) = uStack_440;
      *(undefined8 *)(param_1 + 0xa0) = uStack_498;
      *(undefined8 *)(param_1 + 0x98) = uStack_4a0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_488;
      *(undefined8 *)(param_1 + 0xa8) = uStack_490;
      *(undefined8 *)(param_1 + 0xc0) = uStack_478;
      *(undefined8 *)(param_1 + 0xb8) = uStack_480;
      *(undefined8 *)(param_1 + 0xd0) = uStack_468;
      *(undefined8 *)(param_1 + 200) = uStack_470;
      *(undefined8 *)(param_1 + 0x60) = uStack_4d8;
      *(long *)(param_1 + 0x58) = lStack_4e0;
      *(undefined8 *)(param_1 + 0x70) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x68) = uStack_4d0;
      *(undefined8 *)(param_1 + 0x80) = uStack_4b8;
      *(undefined8 *)(param_1 + 0x78) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x90) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x88) = uStack_4b0;
      *(long *)(param_1 + 0x30) = lStack_508;
      *(long *)(param_1 + 0x28) = lStack_510;
      *(long *)(param_1 + 0x40) = lStack_4f8;
      *(long *)(param_1 + 0x38) = lStack_500;
      uStack_340 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_430;
      *(long *)(param_1 + 0x50) = lStack_4e8;
      *(long *)(param_1 + 0x48) = lStack_4f0;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_420;
      goto LAB_1039f949c;
    }
  }
  uVar4 = 0x112fca650;
  puVar5 = &UNK_10dc3a9f8;
  plVar2 = &lStack_290;
LAB_1039f949c:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039f96e4; end: 1039f9c1b;  */

/* WARNING: Removing unreachable block (ram,0x0001039f9a94) */

void FUN_1039f96e4(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined2 uStack_618;
  undefined6 uStack_616;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined6 uStack_606;
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
  undefined1 uStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
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
  undefined1 uStack_4a0;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
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
  undefined1 uStack_3b0;
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
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined8 uStack_33e;
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
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined8 uStack_2ce;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_25e = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  lStack_270 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  lStack_218 = *(long *)(param_1 + 0x60);
  lStack_220 = *(long *)(param_1 + 0x58);
  lStack_208 = *(long *)(param_1 + 0x70);
  lStack_210 = *(long *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  lStack_200 = *(long *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  lStack_248 = *(long *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  lStack_238 = *(long *)(param_1 + 0x40);
  lStack_240 = *(long *)(param_1 + 0x38);
  lStack_228 = *(long *)(param_1 + 0x50);
  lStack_230 = *(long *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_250;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_3c8 = uStack_98;
    uStack_3d0 = uStack_a0;
    uStack_3b8 = uStack_88;
    uStack_3c0 = uStack_90;
    uStack_3b0 = uStack_80;
    uStack_408 = uStack_d8;
    uStack_410 = uStack_e0;
    uStack_3f8 = uStack_c8;
    uStack_400 = uStack_d0;
    uStack_3e8 = uStack_b8;
    uStack_3f0 = uStack_c0;
    uStack_3d8 = uStack_a8;
    uStack_3e0 = uStack_b0;
    lStack_448 = uStack_118;
    lStack_450 = uStack_120;
    uStack_438 = (undefined2)uStack_108;
    uStack_436 = (undefined6)((ulong)uStack_108 >> 0x10);
    lStack_440 = uStack_110;
    uStack_428 = (undefined2)uStack_f8;
    uStack_426 = (undefined6)((ulong)uStack_f8 >> 0x10);
    uStack_430 = (undefined2)uStack_100;
    uStack_42e = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_418 = uStack_e8;
    uStack_420 = uStack_f0;
    lStack_488 = uStack_158;
    lStack_490 = lStack_160;
    lStack_478 = uStack_148;
    lStack_480 = uStack_150;
    lStack_468 = uStack_138;
    lStack_470 = uStack_140;
    lStack_458 = uStack_128;
    lStack_460 = uStack_130;
    plVar2 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar2 == 3) {
      plVar3 = &lStack_490;
      func_0x000103a0dc5c();
      lStack_328 = 0;
      lStack_330 = 0;
      lStack_318 = 0;
      lStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      lStack_2f8 = 0;
      lStack_300 = 0;
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      lStack_2e0 = 0;
      uStack_2ce = 0;
      uStack_2d6 = 0;
      uStack_2d0 = 0;
      uStack_4b8 = uStack_188;
      uStack_4c0 = uStack_190;
      uStack_4a8 = uStack_178;
      uStack_4b0 = uStack_180;
      uStack_4a0 = uStack_170;
      uStack_4f8 = uStack_1c8;
      uStack_500 = uStack_1d0;
      uStack_4e8 = uStack_1b8;
      uStack_4f0 = uStack_1c0;
      uStack_4d8 = uStack_1a8;
      uStack_4e0 = uStack_1b0;
      uStack_4c8 = uStack_198;
      uStack_4d0 = uStack_1a0;
      lStack_538 = lStack_208;
      lStack_540 = lStack_210;
      uStack_528 = uStack_1f8;
      lStack_530 = lStack_200;
      uStack_518 = uStack_1e8;
      uStack_520 = uStack_1f0;
      uStack_508 = uStack_1d8;
      uStack_510 = uStack_1e0;
      lStack_578 = lStack_248;
      lStack_580 = lStack_250;
      lStack_568 = lStack_238;
      lStack_570 = lStack_240;
      lStack_558 = lStack_228;
      lStack_560 = lStack_230;
      lStack_548 = lStack_218;
      lStack_550 = lStack_220;
      func_0x000103a0db60(&lStack_580,&lStack_670);
      plVar2 = &lStack_330;
      func_0x000103a17eac(plVar2,0x112fca658,&UNK_10dc3aa00);
      lStack_2a8 = plVar3[3];
      lStack_2b0 = plVar3[2];
      lStack_298 = plVar3[5];
      lStack_2a0 = plVar3[4];
      lStack_2b8 = plVar3[1];
      lStack_2c0 = *plVar3;
      lStack_278 = plVar3[9];
      lStack_280 = plVar3[8];
      lStack_270 = plVar3[10];
      uStack_25e = *(undefined8 *)((long)plVar3 + 0x62);
      lStack_288 = plVar3[7];
      lStack_290 = plVar3[6];
      uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)plVar3 + 0x5a) >> 0x30);
      uStack_268 = (undefined2)plVar3[0xb];
      uStack_266 = (undefined6)((ulong)plVar3[0xb] >> 0x10);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12940();
  (*pcVar6)(&lStack_2c0,&UNK_1106be1c0,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    lStack_360 = lStack_280;
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    uStack_33e = uStack_25e;
    uStack_346 = uStack_266;
    uStack_340 = uStack_260;
    lStack_398 = lStack_2b8;
    lStack_3a0 = lStack_2c0;
    lStack_388 = lStack_2a8;
    lStack_390 = lStack_2b0;
    lStack_378 = lStack_298;
    lStack_380 = lStack_2a0;
    lStack_368 = lStack_288;
    lStack_370 = lStack_290;
    lStack_328 = lStack_2b8;
    lStack_330 = lStack_2c0;
    lStack_318 = lStack_2a8;
    lStack_320 = lStack_2b0;
    uStack_2ce = uStack_25e;
    uStack_2d0 = uStack_260;
    lStack_308 = lStack_298;
    lStack_310 = lStack_2a0;
    lStack_2f8 = lStack_288;
    lStack_300 = lStack_290;
    lStack_2e8 = lStack_278;
    lStack_2f0 = lStack_280;
    uStack_2d8 = uStack_268;
    uStack_2d6 = uStack_266;
    lStack_2e0 = lStack_270;
    if (lStack_2c0 != 0) {
      uStack_428 = (undefined2)((ulong)uStack_25e >> 0x30);
      uStack_42e = (undefined6)uStack_25e;
      if (iVar1 == 1) {
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dc6c(&lStack_490,&lStack_580);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dc6c(&lStack_490,&lStack_580);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_2c0,0x112fca658,&UNK_10dc3aa00);
      lStack_628 = lStack_2e8;
      lStack_630 = lStack_2f0;
      uStack_618 = uStack_2d8;
      lStack_620 = lStack_2e0;
      uStack_60e = (undefined6)uStack_2ce;
      uStack_608 = (undefined2)((ulong)uStack_2ce >> 0x30);
      uStack_616 = uStack_2d6;
      uStack_610 = uStack_2d0;
      lStack_668 = lStack_328;
      lStack_670 = lStack_330;
      lStack_658 = lStack_318;
      lStack_660 = lStack_320;
      lStack_648 = lStack_308;
      lStack_650 = lStack_310;
      lStack_638 = lStack_2f8;
      lStack_640 = lStack_300;
      func_0x000103a0dc60(&lStack_670);
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_4a0 = uStack_590;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_528 = CONCAT62(uStack_616,uStack_618);
      lStack_538 = lStack_628;
      lStack_540 = lStack_630;
      lStack_530 = lStack_620;
      uStack_518 = CONCAT62(uStack_606,uStack_608);
      uStack_520 = CONCAT62(uStack_60e,uStack_610);
      uStack_508 = uStack_5f8;
      uStack_510 = uStack_600;
      lStack_578 = lStack_668;
      lStack_580 = lStack_670;
      lStack_568 = lStack_658;
      lStack_570 = lStack_660;
      lStack_558 = lStack_648;
      lStack_560 = lStack_650;
      lStack_548 = lStack_638;
      lStack_550 = lStack_640;
      func_0x000103a0db9c(&lStack_580);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_3e0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
      uStack_3c0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_418 = *(undefined8 *)(param_1 + 0xa0);
      uStack_420 = *(undefined8 *)(param_1 + 0x98);
      uStack_408 = *(undefined8 *)(param_1 + 0xb0);
      uStack_410 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_400 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3f0 = *(undefined8 *)(param_1 + 200);
      lStack_458 = *(undefined8 *)(param_1 + 0x60);
      lStack_460 = *(undefined8 *)(param_1 + 0x58);
      lStack_448 = *(undefined8 *)(param_1 + 0x70);
      lStack_450 = *(undefined8 *)(param_1 + 0x68);
      lStack_440 = *(undefined8 *)(param_1 + 0x78);
      uStack_438 = (undefined2)*(undefined8 *)(param_1 + 0x80);
      uStack_436 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x10);
      uStack_428 = (undefined2)*(undefined8 *)(param_1 + 0x90);
      uStack_426 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x10);
      uStack_430 = (undefined2)*(undefined8 *)(param_1 + 0x88);
      uStack_42e = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x10);
      lStack_488 = *(undefined8 *)(param_1 + 0x30);
      lStack_490 = *(long *)(param_1 + 0x28);
      lStack_478 = *(undefined8 *)(param_1 + 0x40);
      lStack_480 = *(undefined8 *)(param_1 + 0x38);
      lStack_468 = *(undefined8 *)(param_1 + 0x50);
      lStack_470 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_4c8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_4d0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_4b8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x100) = uStack_4a8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_4b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_508;
      *(undefined8 *)(param_1 + 0x98) = uStack_510;
      *(undefined8 *)(param_1 + 0xb0) = uStack_4f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_500;
      *(undefined8 *)(param_1 + 0xc0) = uStack_4e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_4f0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_4d8;
      *(undefined8 *)(param_1 + 200) = uStack_4e0;
      *(long *)(param_1 + 0x60) = lStack_548;
      *(long *)(param_1 + 0x58) = lStack_550;
      *(long *)(param_1 + 0x70) = lStack_538;
      *(long *)(param_1 + 0x68) = lStack_540;
      *(undefined8 *)(param_1 + 0x80) = uStack_528;
      *(long *)(param_1 + 0x78) = lStack_530;
      *(undefined8 *)(param_1 + 0x90) = uStack_518;
      *(undefined8 *)(param_1 + 0x88) = uStack_520;
      *(long *)(param_1 + 0x30) = lStack_578;
      *(long *)(param_1 + 0x28) = lStack_580;
      *(long *)(param_1 + 0x40) = lStack_568;
      *(long *)(param_1 + 0x38) = lStack_570;
      uStack_3b0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_4a0;
      *(long *)(param_1 + 0x50) = lStack_558;
      *(long *)(param_1 + 0x48) = lStack_560;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_490;
      goto LAB_1039f99b0;
    }
  }
  uVar4 = 0x112fca658;
  puVar5 = &UNK_10dc3aa00;
  plVar2 = &lStack_2c0;
LAB_1039f99b0:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039f9c1c; end: 1039fa10b;  */

/* WARNING: Removing unreachable block (ram,0x0001039f9f8c) */

void FUN_1039f9c1c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined6 uStack_5c8;
  undefined2 uStack_5c2;
  undefined6 uStack_5c0;
  undefined2 uStack_5ba;
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
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
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
  undefined1 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
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
  undefined1 uStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_160;
  long lStack_150;
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
  undefined1 uStack_70;
  
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_252 = 0;
  lStack_260 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  lStack_210 = *(long *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  lStack_238 = *(long *)(param_1 + 0x30);
  lStack_240 = *(long *)(param_1 + 0x28);
  lStack_228 = *(long *)(param_1 + 0x40);
  lStack_230 = *(long *)(param_1 + 0x38);
  lStack_218 = *(long *)(param_1 + 0x50);
  lStack_220 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = *(undefined8 *)(param_1 + 0xe8);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined1 *)(param_1 + 0x108);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  lStack_150 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_240;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_88;
    uStack_360 = uStack_90;
    uStack_348 = uStack_78;
    uStack_350 = uStack_80;
    uStack_340 = uStack_70;
    uStack_398 = uStack_c8;
    uStack_3a0 = uStack_d0;
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uStack_3d8 = uStack_108;
    uStack_3e0 = (undefined6)uStack_110;
    uStack_3da = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_3c8 = uStack_f8;
    uStack_3d0 = uStack_100;
    uStack_3b8 = uStack_e8;
    uStack_3c0 = uStack_f0;
    uStack_3a8 = uStack_d8;
    uStack_3b0 = uStack_e0;
    lStack_418 = uStack_148;
    lStack_420 = lStack_150;
    lStack_408 = uStack_138;
    lStack_410 = uStack_140;
    lStack_3f8 = uStack_128;
    lStack_400 = uStack_130;
    uStack_3e8 = (undefined6)uStack_118;
    uStack_3e2 = (undefined2)((ulong)uStack_118 >> 0x30);
    lStack_3f0 = uStack_120;
    plVar2 = &lStack_150;
    func_0x000103a0db54();
    if ((int)plVar2 == 4) {
      plVar3 = &lStack_420;
      func_0x000103a0dca0();
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      lStack_2d0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_2a2 = 0;
      uStack_2a0 = 0;
      uStack_448 = uStack_178;
      uStack_450 = uStack_180;
      uStack_438 = uStack_168;
      uStack_440 = uStack_170;
      uStack_430 = uStack_160;
      uStack_488 = uStack_1b8;
      uStack_490 = uStack_1c0;
      uStack_478 = uStack_1a8;
      uStack_480 = uStack_1b0;
      uStack_468 = uStack_198;
      uStack_470 = uStack_1a0;
      uStack_458 = uStack_188;
      uStack_460 = uStack_190;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_4b8 = uStack_1e8;
      uStack_4c0 = uStack_1f0;
      uStack_4a8 = uStack_1d8;
      uStack_4b0 = uStack_1e0;
      uStack_498 = uStack_1c8;
      uStack_4a0 = uStack_1d0;
      lStack_508 = lStack_238;
      lStack_510 = lStack_240;
      lStack_4f8 = lStack_228;
      lStack_500 = lStack_230;
      lStack_4e8 = lStack_218;
      lStack_4f0 = lStack_220;
      uStack_4d8 = uStack_208;
      lStack_4e0 = lStack_210;
      func_0x000103a0db60(&lStack_510,&lStack_600);
      plVar2 = &lStack_2e0;
      func_0x000103a17eac(plVar2,0x112fca660,&UNK_10dc3aa08);
      lStack_288 = plVar3[1];
      lStack_290 = *plVar3;
      lStack_268 = plVar3[5];
      lStack_270 = plVar3[4];
      lStack_260 = plVar3[6];
      lStack_278 = plVar3[3];
      lStack_280 = plVar3[2];
      uStack_250 = (undefined6)((ulong)*(undefined8 *)((long)plVar3 + 0x3e) >> 0x10);
      uStack_258 = (undefined6)plVar3[7];
      uStack_252 = (undefined2)((ulong)plVar3[7] >> 0x30);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12a3c();
  (*pcVar6)(&lStack_290,&UNK_1106be260,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_328 = lStack_288;
    lStack_330 = lStack_290;
    lStack_318 = lStack_278;
    lStack_320 = lStack_280;
    lStack_308 = lStack_268;
    lStack_310 = lStack_270;
    lStack_300 = lStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f2 = uStack_252;
    uStack_2f0 = uStack_250;
    lStack_2b8 = lStack_268;
    lStack_2c0 = lStack_270;
    uStack_2a8 = uStack_258;
    lStack_2b0 = lStack_260;
    uStack_2a2 = uStack_252;
    uStack_2a0 = uStack_250;
    lStack_2d8 = lStack_288;
    lStack_2e0 = lStack_290;
    lStack_2c8 = lStack_278;
    lStack_2d0 = lStack_280;
    if (lStack_290 != 0) {
      if (iVar1 == 1) {
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dcb0(&lStack_420,&lStack_510);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dcb0(&lStack_420,&lStack_510);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_290,0x112fca660,&UNK_10dc3aa08);
      lStack_5d8 = lStack_2b8;
      lStack_5e0 = lStack_2c0;
      uStack_5c8 = uStack_2a8;
      lStack_5d0 = lStack_2b0;
      uStack_5c2 = uStack_2a2;
      uStack_5c0 = uStack_2a0;
      lStack_5f8 = lStack_2d8;
      lStack_600 = lStack_2e0;
      lStack_5e8 = lStack_2c8;
      lStack_5f0 = lStack_2d0;
      func_0x000103a0dca4(&lStack_600);
      uStack_448 = uStack_538;
      uStack_450 = uStack_540;
      uStack_438 = uStack_528;
      uStack_440 = uStack_530;
      uStack_430 = uStack_520;
      uStack_488 = uStack_578;
      uStack_490 = uStack_580;
      uStack_478 = uStack_568;
      uStack_480 = uStack_570;
      uStack_468 = uStack_558;
      uStack_470 = uStack_560;
      uStack_458 = uStack_548;
      uStack_460 = uStack_550;
      uStack_4d0 = CONCAT26(uStack_5ba,uStack_5c0);
      uStack_4c8 = uStack_5b8;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_498 = uStack_588;
      uStack_4a0 = uStack_590;
      lStack_508 = lStack_5f8;
      lStack_510 = lStack_600;
      lStack_4f8 = lStack_5e8;
      lStack_500 = lStack_5f0;
      uStack_4d8 = CONCAT26(uStack_5c2,uStack_5c8);
      lStack_4e8 = lStack_5d8;
      lStack_4f0 = lStack_5e0;
      lStack_4e0 = lStack_5d0;
      func_0x000103a0db9c(&lStack_510);
      uStack_368 = *(undefined8 *)(param_1 + 0xe0);
      uStack_370 = *(undefined8 *)(param_1 + 0xd8);
      uStack_358 = *(undefined8 *)(param_1 + 0xf0);
      uStack_360 = *(undefined8 *)(param_1 + 0xe8);
      uStack_348 = *(undefined8 *)(param_1 + 0x100);
      uStack_350 = *(undefined8 *)(param_1 + 0xf8);
      uStack_3a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_398 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_388 = *(undefined8 *)(param_1 + 0xc0);
      uStack_390 = *(undefined8 *)(param_1 + 0xb8);
      uStack_378 = *(undefined8 *)(param_1 + 0xd0);
      uStack_380 = *(undefined8 *)(param_1 + 200);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_3e0 = (undefined6)*(undefined8 *)(param_1 + 0x68);
      uStack_3da = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x30);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x88);
      lStack_418 = *(undefined8 *)(param_1 + 0x30);
      lStack_420 = *(long *)(param_1 + 0x28);
      lStack_408 = *(undefined8 *)(param_1 + 0x40);
      lStack_410 = *(undefined8 *)(param_1 + 0x38);
      lStack_3f8 = *(undefined8 *)(param_1 + 0x50);
      lStack_400 = *(undefined8 *)(param_1 + 0x48);
      uStack_3e8 = (undefined6)*(undefined8 *)(param_1 + 0x60);
      uStack_3e2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x30);
      *(undefined8 *)(param_1 + 0xe0) = uStack_458;
      *(undefined8 *)(param_1 + 0xd8) = uStack_460;
      *(undefined8 *)(param_1 + 0xf0) = uStack_448;
      *(undefined8 *)(param_1 + 0xe8) = uStack_450;
      *(undefined8 *)(param_1 + 0x100) = uStack_438;
      *(undefined8 *)(param_1 + 0xf8) = uStack_440;
      *(undefined8 *)(param_1 + 0xa0) = uStack_498;
      *(undefined8 *)(param_1 + 0x98) = uStack_4a0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_488;
      *(undefined8 *)(param_1 + 0xa8) = uStack_490;
      *(undefined8 *)(param_1 + 0xc0) = uStack_478;
      *(undefined8 *)(param_1 + 0xb8) = uStack_480;
      *(undefined8 *)(param_1 + 0xd0) = uStack_468;
      *(undefined8 *)(param_1 + 200) = uStack_470;
      *(undefined8 *)(param_1 + 0x60) = uStack_4d8;
      *(long *)(param_1 + 0x58) = lStack_4e0;
      *(undefined8 *)(param_1 + 0x70) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x68) = uStack_4d0;
      *(undefined8 *)(param_1 + 0x80) = uStack_4b8;
      *(undefined8 *)(param_1 + 0x78) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x90) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x88) = uStack_4b0;
      *(long *)(param_1 + 0x30) = lStack_508;
      *(long *)(param_1 + 0x28) = lStack_510;
      *(long *)(param_1 + 0x40) = lStack_4f8;
      *(long *)(param_1 + 0x38) = lStack_500;
      uStack_340 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_430;
      *(long *)(param_1 + 0x50) = lStack_4e8;
      *(long *)(param_1 + 0x48) = lStack_4f0;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_420;
      goto LAB_1039f9ec4;
    }
  }
  uVar4 = 0x112fca660;
  puVar5 = &UNK_10dc3aa08;
  plVar2 = &lStack_290;
LAB_1039f9ec4:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fa10c; end: 1039fa643;  */

/* WARNING: Removing unreachable block (ram,0x0001039fa4bc) */

void FUN_1039fa10c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined2 uStack_618;
  undefined6 uStack_616;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined6 uStack_606;
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
  undefined1 uStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
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
  undefined1 uStack_4a0;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
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
  undefined1 uStack_3b0;
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
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined8 uStack_33e;
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
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined8 uStack_2ce;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_25e = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  lStack_270 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  lStack_218 = *(long *)(param_1 + 0x60);
  lStack_220 = *(long *)(param_1 + 0x58);
  lStack_208 = *(long *)(param_1 + 0x70);
  lStack_210 = *(long *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  lStack_200 = *(long *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  lStack_248 = *(long *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  lStack_238 = *(long *)(param_1 + 0x40);
  lStack_240 = *(long *)(param_1 + 0x38);
  lStack_228 = *(long *)(param_1 + 0x50);
  lStack_230 = *(long *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_250;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_3c8 = uStack_98;
    uStack_3d0 = uStack_a0;
    uStack_3b8 = uStack_88;
    uStack_3c0 = uStack_90;
    uStack_3b0 = uStack_80;
    uStack_408 = uStack_d8;
    uStack_410 = uStack_e0;
    uStack_3f8 = uStack_c8;
    uStack_400 = uStack_d0;
    uStack_3e8 = uStack_b8;
    uStack_3f0 = uStack_c0;
    uStack_3d8 = uStack_a8;
    uStack_3e0 = uStack_b0;
    lStack_448 = uStack_118;
    lStack_450 = uStack_120;
    uStack_438 = (undefined2)uStack_108;
    uStack_436 = (undefined6)((ulong)uStack_108 >> 0x10);
    lStack_440 = uStack_110;
    uStack_428 = (undefined2)uStack_f8;
    uStack_426 = (undefined6)((ulong)uStack_f8 >> 0x10);
    uStack_430 = (undefined2)uStack_100;
    uStack_42e = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_418 = uStack_e8;
    uStack_420 = uStack_f0;
    lStack_488 = uStack_158;
    lStack_490 = lStack_160;
    lStack_478 = uStack_148;
    lStack_480 = uStack_150;
    lStack_468 = uStack_138;
    lStack_470 = uStack_140;
    lStack_458 = uStack_128;
    lStack_460 = uStack_130;
    plVar2 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar2 == 5) {
      plVar3 = &lStack_490;
      func_0x000103a0dce4();
      lStack_328 = 0;
      lStack_330 = 0;
      lStack_318 = 0;
      lStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      lStack_2f8 = 0;
      lStack_300 = 0;
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      lStack_2e0 = 0;
      uStack_2ce = 0;
      uStack_2d6 = 0;
      uStack_2d0 = 0;
      uStack_4b8 = uStack_188;
      uStack_4c0 = uStack_190;
      uStack_4a8 = uStack_178;
      uStack_4b0 = uStack_180;
      uStack_4a0 = uStack_170;
      uStack_4f8 = uStack_1c8;
      uStack_500 = uStack_1d0;
      uStack_4e8 = uStack_1b8;
      uStack_4f0 = uStack_1c0;
      uStack_4d8 = uStack_1a8;
      uStack_4e0 = uStack_1b0;
      uStack_4c8 = uStack_198;
      uStack_4d0 = uStack_1a0;
      lStack_538 = lStack_208;
      lStack_540 = lStack_210;
      uStack_528 = uStack_1f8;
      lStack_530 = lStack_200;
      uStack_518 = uStack_1e8;
      uStack_520 = uStack_1f0;
      uStack_508 = uStack_1d8;
      uStack_510 = uStack_1e0;
      lStack_578 = lStack_248;
      lStack_580 = lStack_250;
      lStack_568 = lStack_238;
      lStack_570 = lStack_240;
      lStack_558 = lStack_228;
      lStack_560 = lStack_230;
      lStack_548 = lStack_218;
      lStack_550 = lStack_220;
      func_0x000103a0db60(&lStack_580,&lStack_670);
      plVar2 = &lStack_330;
      func_0x000103a17eac(plVar2,0x112fca668,&UNK_10dc3aa10);
      lStack_2a8 = plVar3[3];
      lStack_2b0 = plVar3[2];
      lStack_298 = plVar3[5];
      lStack_2a0 = plVar3[4];
      lStack_2b8 = plVar3[1];
      lStack_2c0 = *plVar3;
      lStack_278 = plVar3[9];
      lStack_280 = plVar3[8];
      lStack_270 = plVar3[10];
      uStack_25e = *(undefined8 *)((long)plVar3 + 0x62);
      lStack_288 = plVar3[7];
      lStack_290 = plVar3[6];
      uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)plVar3 + 0x5a) >> 0x30);
      uStack_268 = (undefined2)plVar3[0xb];
      uStack_266 = (undefined6)((ulong)plVar3[0xb] >> 0x10);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12b38();
  (*pcVar6)(&lStack_2c0,&UNK_1106be300,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    lStack_360 = lStack_280;
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    uStack_33e = uStack_25e;
    uStack_346 = uStack_266;
    uStack_340 = uStack_260;
    lStack_398 = lStack_2b8;
    lStack_3a0 = lStack_2c0;
    lStack_388 = lStack_2a8;
    lStack_390 = lStack_2b0;
    lStack_378 = lStack_298;
    lStack_380 = lStack_2a0;
    lStack_368 = lStack_288;
    lStack_370 = lStack_290;
    lStack_328 = lStack_2b8;
    lStack_330 = lStack_2c0;
    lStack_318 = lStack_2a8;
    lStack_320 = lStack_2b0;
    uStack_2ce = uStack_25e;
    uStack_2d0 = uStack_260;
    lStack_308 = lStack_298;
    lStack_310 = lStack_2a0;
    lStack_2f8 = lStack_288;
    lStack_300 = lStack_290;
    lStack_2e8 = lStack_278;
    lStack_2f0 = lStack_280;
    uStack_2d8 = uStack_268;
    uStack_2d6 = uStack_266;
    lStack_2e0 = lStack_270;
    if (lStack_2c0 != 0) {
      uStack_428 = (undefined2)((ulong)uStack_25e >> 0x30);
      uStack_42e = (undefined6)uStack_25e;
      if (iVar1 == 1) {
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dcf4(&lStack_490,&lStack_580);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dcf4(&lStack_490,&lStack_580);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_2c0,0x112fca668,&UNK_10dc3aa10);
      lStack_628 = lStack_2e8;
      lStack_630 = lStack_2f0;
      uStack_618 = uStack_2d8;
      lStack_620 = lStack_2e0;
      uStack_60e = (undefined6)uStack_2ce;
      uStack_608 = (undefined2)((ulong)uStack_2ce >> 0x30);
      uStack_616 = uStack_2d6;
      uStack_610 = uStack_2d0;
      lStack_668 = lStack_328;
      lStack_670 = lStack_330;
      lStack_658 = lStack_318;
      lStack_660 = lStack_320;
      lStack_648 = lStack_308;
      lStack_650 = lStack_310;
      lStack_638 = lStack_2f8;
      lStack_640 = lStack_300;
      func_0x000103a0dce8(&lStack_670);
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_4a0 = uStack_590;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_528 = CONCAT62(uStack_616,uStack_618);
      lStack_538 = lStack_628;
      lStack_540 = lStack_630;
      lStack_530 = lStack_620;
      uStack_518 = CONCAT62(uStack_606,uStack_608);
      uStack_520 = CONCAT62(uStack_60e,uStack_610);
      uStack_508 = uStack_5f8;
      uStack_510 = uStack_600;
      lStack_578 = lStack_668;
      lStack_580 = lStack_670;
      lStack_568 = lStack_658;
      lStack_570 = lStack_660;
      lStack_558 = lStack_648;
      lStack_560 = lStack_650;
      lStack_548 = lStack_638;
      lStack_550 = lStack_640;
      func_0x000103a0db9c(&lStack_580);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_3e0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
      uStack_3c0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_418 = *(undefined8 *)(param_1 + 0xa0);
      uStack_420 = *(undefined8 *)(param_1 + 0x98);
      uStack_408 = *(undefined8 *)(param_1 + 0xb0);
      uStack_410 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_400 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3f0 = *(undefined8 *)(param_1 + 200);
      lStack_458 = *(undefined8 *)(param_1 + 0x60);
      lStack_460 = *(undefined8 *)(param_1 + 0x58);
      lStack_448 = *(undefined8 *)(param_1 + 0x70);
      lStack_450 = *(undefined8 *)(param_1 + 0x68);
      lStack_440 = *(undefined8 *)(param_1 + 0x78);
      uStack_438 = (undefined2)*(undefined8 *)(param_1 + 0x80);
      uStack_436 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x10);
      uStack_428 = (undefined2)*(undefined8 *)(param_1 + 0x90);
      uStack_426 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x10);
      uStack_430 = (undefined2)*(undefined8 *)(param_1 + 0x88);
      uStack_42e = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x10);
      lStack_488 = *(undefined8 *)(param_1 + 0x30);
      lStack_490 = *(long *)(param_1 + 0x28);
      lStack_478 = *(undefined8 *)(param_1 + 0x40);
      lStack_480 = *(undefined8 *)(param_1 + 0x38);
      lStack_468 = *(undefined8 *)(param_1 + 0x50);
      lStack_470 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_4c8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_4d0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_4b8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x100) = uStack_4a8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_4b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_508;
      *(undefined8 *)(param_1 + 0x98) = uStack_510;
      *(undefined8 *)(param_1 + 0xb0) = uStack_4f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_500;
      *(undefined8 *)(param_1 + 0xc0) = uStack_4e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_4f0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_4d8;
      *(undefined8 *)(param_1 + 200) = uStack_4e0;
      *(long *)(param_1 + 0x60) = lStack_548;
      *(long *)(param_1 + 0x58) = lStack_550;
      *(long *)(param_1 + 0x70) = lStack_538;
      *(long *)(param_1 + 0x68) = lStack_540;
      *(undefined8 *)(param_1 + 0x80) = uStack_528;
      *(long *)(param_1 + 0x78) = lStack_530;
      *(undefined8 *)(param_1 + 0x90) = uStack_518;
      *(undefined8 *)(param_1 + 0x88) = uStack_520;
      *(long *)(param_1 + 0x30) = lStack_578;
      *(long *)(param_1 + 0x28) = lStack_580;
      *(long *)(param_1 + 0x40) = lStack_568;
      *(long *)(param_1 + 0x38) = lStack_570;
      uStack_3b0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_4a0;
      *(long *)(param_1 + 0x50) = lStack_558;
      *(long *)(param_1 + 0x48) = lStack_560;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_490;
      goto LAB_1039fa3d8;
    }
  }
  uVar4 = 0x112fca668;
  puVar5 = &UNK_10dc3aa10;
  plVar2 = &lStack_2c0;
LAB_1039fa3d8:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fa644; end: 1039fab33;  */

/* WARNING: Removing unreachable block (ram,0x0001039fa9b4) */

void FUN_1039fa644(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined6 uStack_5c8;
  undefined2 uStack_5c2;
  undefined6 uStack_5c0;
  undefined2 uStack_5ba;
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
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
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
  undefined1 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
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
  undefined1 uStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_160;
  long lStack_150;
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
  undefined1 uStack_70;
  
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_252 = 0;
  lStack_260 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  lStack_210 = *(long *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  lStack_238 = *(long *)(param_1 + 0x30);
  lStack_240 = *(long *)(param_1 + 0x28);
  lStack_228 = *(long *)(param_1 + 0x40);
  lStack_230 = *(long *)(param_1 + 0x38);
  lStack_218 = *(long *)(param_1 + 0x50);
  lStack_220 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = *(undefined8 *)(param_1 + 0xe8);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined1 *)(param_1 + 0x108);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  lStack_150 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_240;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_88;
    uStack_360 = uStack_90;
    uStack_348 = uStack_78;
    uStack_350 = uStack_80;
    uStack_340 = uStack_70;
    uStack_398 = uStack_c8;
    uStack_3a0 = uStack_d0;
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uStack_3d8 = uStack_108;
    uStack_3e0 = (undefined6)uStack_110;
    uStack_3da = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_3c8 = uStack_f8;
    uStack_3d0 = uStack_100;
    uStack_3b8 = uStack_e8;
    uStack_3c0 = uStack_f0;
    uStack_3a8 = uStack_d8;
    uStack_3b0 = uStack_e0;
    lStack_418 = uStack_148;
    lStack_420 = lStack_150;
    lStack_408 = uStack_138;
    lStack_410 = uStack_140;
    lStack_3f8 = uStack_128;
    lStack_400 = uStack_130;
    uStack_3e8 = (undefined6)uStack_118;
    uStack_3e2 = (undefined2)((ulong)uStack_118 >> 0x30);
    lStack_3f0 = uStack_120;
    plVar2 = &lStack_150;
    func_0x000103a0db54();
    if ((int)plVar2 == 6) {
      plVar3 = &lStack_420;
      func_0x000103a0dd28();
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      lStack_2d0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_2a2 = 0;
      uStack_2a0 = 0;
      uStack_448 = uStack_178;
      uStack_450 = uStack_180;
      uStack_438 = uStack_168;
      uStack_440 = uStack_170;
      uStack_430 = uStack_160;
      uStack_488 = uStack_1b8;
      uStack_490 = uStack_1c0;
      uStack_478 = uStack_1a8;
      uStack_480 = uStack_1b0;
      uStack_468 = uStack_198;
      uStack_470 = uStack_1a0;
      uStack_458 = uStack_188;
      uStack_460 = uStack_190;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_4b8 = uStack_1e8;
      uStack_4c0 = uStack_1f0;
      uStack_4a8 = uStack_1d8;
      uStack_4b0 = uStack_1e0;
      uStack_498 = uStack_1c8;
      uStack_4a0 = uStack_1d0;
      lStack_508 = lStack_238;
      lStack_510 = lStack_240;
      lStack_4f8 = lStack_228;
      lStack_500 = lStack_230;
      lStack_4e8 = lStack_218;
      lStack_4f0 = lStack_220;
      uStack_4d8 = uStack_208;
      lStack_4e0 = lStack_210;
      func_0x000103a0db60(&lStack_510,&lStack_600);
      plVar2 = &lStack_2e0;
      func_0x000103a17eac(plVar2,0x112fca670,&UNK_10dc3aa18);
      lStack_288 = plVar3[1];
      lStack_290 = *plVar3;
      lStack_268 = plVar3[5];
      lStack_270 = plVar3[4];
      lStack_260 = plVar3[6];
      lStack_278 = plVar3[3];
      lStack_280 = plVar3[2];
      uStack_250 = (undefined6)((ulong)*(undefined8 *)((long)plVar3 + 0x3e) >> 0x10);
      uStack_258 = (undefined6)plVar3[7];
      uStack_252 = (undefined2)((ulong)plVar3[7] >> 0x30);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12c34();
  (*pcVar6)(&lStack_290,&UNK_1106be3a0,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_328 = lStack_288;
    lStack_330 = lStack_290;
    lStack_318 = lStack_278;
    lStack_320 = lStack_280;
    lStack_308 = lStack_268;
    lStack_310 = lStack_270;
    lStack_300 = lStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f2 = uStack_252;
    uStack_2f0 = uStack_250;
    lStack_2b8 = lStack_268;
    lStack_2c0 = lStack_270;
    uStack_2a8 = uStack_258;
    lStack_2b0 = lStack_260;
    uStack_2a2 = uStack_252;
    uStack_2a0 = uStack_250;
    lStack_2d8 = lStack_288;
    lStack_2e0 = lStack_290;
    lStack_2c8 = lStack_278;
    lStack_2d0 = lStack_280;
    if (lStack_290 != 0) {
      if (iVar1 == 1) {
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dd38(&lStack_420,&lStack_510);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0dd38(&lStack_420,&lStack_510);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_290,0x112fca670,&UNK_10dc3aa18);
      lStack_5d8 = lStack_2b8;
      lStack_5e0 = lStack_2c0;
      uStack_5c8 = uStack_2a8;
      lStack_5d0 = lStack_2b0;
      uStack_5c2 = uStack_2a2;
      uStack_5c0 = uStack_2a0;
      lStack_5f8 = lStack_2d8;
      lStack_600 = lStack_2e0;
      lStack_5e8 = lStack_2c8;
      lStack_5f0 = lStack_2d0;
      func_0x000103a0dd2c(&lStack_600);
      uStack_448 = uStack_538;
      uStack_450 = uStack_540;
      uStack_438 = uStack_528;
      uStack_440 = uStack_530;
      uStack_430 = uStack_520;
      uStack_488 = uStack_578;
      uStack_490 = uStack_580;
      uStack_478 = uStack_568;
      uStack_480 = uStack_570;
      uStack_468 = uStack_558;
      uStack_470 = uStack_560;
      uStack_458 = uStack_548;
      uStack_460 = uStack_550;
      uStack_4d0 = CONCAT26(uStack_5ba,uStack_5c0);
      uStack_4c8 = uStack_5b8;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_498 = uStack_588;
      uStack_4a0 = uStack_590;
      lStack_508 = lStack_5f8;
      lStack_510 = lStack_600;
      lStack_4f8 = lStack_5e8;
      lStack_500 = lStack_5f0;
      uStack_4d8 = CONCAT26(uStack_5c2,uStack_5c8);
      lStack_4e8 = lStack_5d8;
      lStack_4f0 = lStack_5e0;
      lStack_4e0 = lStack_5d0;
      func_0x000103a0db9c(&lStack_510);
      uStack_368 = *(undefined8 *)(param_1 + 0xe0);
      uStack_370 = *(undefined8 *)(param_1 + 0xd8);
      uStack_358 = *(undefined8 *)(param_1 + 0xf0);
      uStack_360 = *(undefined8 *)(param_1 + 0xe8);
      uStack_348 = *(undefined8 *)(param_1 + 0x100);
      uStack_350 = *(undefined8 *)(param_1 + 0xf8);
      uStack_3a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_398 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_388 = *(undefined8 *)(param_1 + 0xc0);
      uStack_390 = *(undefined8 *)(param_1 + 0xb8);
      uStack_378 = *(undefined8 *)(param_1 + 0xd0);
      uStack_380 = *(undefined8 *)(param_1 + 200);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_3e0 = (undefined6)*(undefined8 *)(param_1 + 0x68);
      uStack_3da = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x30);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x88);
      lStack_418 = *(undefined8 *)(param_1 + 0x30);
      lStack_420 = *(long *)(param_1 + 0x28);
      lStack_408 = *(undefined8 *)(param_1 + 0x40);
      lStack_410 = *(undefined8 *)(param_1 + 0x38);
      lStack_3f8 = *(undefined8 *)(param_1 + 0x50);
      lStack_400 = *(undefined8 *)(param_1 + 0x48);
      uStack_3e8 = (undefined6)*(undefined8 *)(param_1 + 0x60);
      uStack_3e2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x30);
      *(undefined8 *)(param_1 + 0xe0) = uStack_458;
      *(undefined8 *)(param_1 + 0xd8) = uStack_460;
      *(undefined8 *)(param_1 + 0xf0) = uStack_448;
      *(undefined8 *)(param_1 + 0xe8) = uStack_450;
      *(undefined8 *)(param_1 + 0x100) = uStack_438;
      *(undefined8 *)(param_1 + 0xf8) = uStack_440;
      *(undefined8 *)(param_1 + 0xa0) = uStack_498;
      *(undefined8 *)(param_1 + 0x98) = uStack_4a0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_488;
      *(undefined8 *)(param_1 + 0xa8) = uStack_490;
      *(undefined8 *)(param_1 + 0xc0) = uStack_478;
      *(undefined8 *)(param_1 + 0xb8) = uStack_480;
      *(undefined8 *)(param_1 + 0xd0) = uStack_468;
      *(undefined8 *)(param_1 + 200) = uStack_470;
      *(undefined8 *)(param_1 + 0x60) = uStack_4d8;
      *(long *)(param_1 + 0x58) = lStack_4e0;
      *(undefined8 *)(param_1 + 0x70) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x68) = uStack_4d0;
      *(undefined8 *)(param_1 + 0x80) = uStack_4b8;
      *(undefined8 *)(param_1 + 0x78) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x90) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x88) = uStack_4b0;
      *(long *)(param_1 + 0x30) = lStack_508;
      *(long *)(param_1 + 0x28) = lStack_510;
      *(long *)(param_1 + 0x40) = lStack_4f8;
      *(long *)(param_1 + 0x38) = lStack_500;
      uStack_340 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_430;
      *(long *)(param_1 + 0x50) = lStack_4e8;
      *(long *)(param_1 + 0x48) = lStack_4f0;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_420;
      goto LAB_1039fa8ec;
    }
  }
  uVar4 = 0x112fca670;
  puVar5 = &UNK_10dc3aa18;
  plVar2 = &lStack_290;
LAB_1039fa8ec:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fab34; end: 1039fb06b;  */

/* WARNING: Removing unreachable block (ram,0x0001039faee4) */

void FUN_1039fab34(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined2 uStack_618;
  undefined6 uStack_616;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined6 uStack_606;
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
  undefined1 uStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
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
  undefined1 uStack_4a0;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
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
  undefined1 uStack_3b0;
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
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined8 uStack_33e;
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
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined8 uStack_2ce;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_25e = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  lStack_270 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  lStack_218 = *(long *)(param_1 + 0x60);
  lStack_220 = *(long *)(param_1 + 0x58);
  lStack_208 = *(long *)(param_1 + 0x70);
  lStack_210 = *(long *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  lStack_200 = *(long *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  lStack_248 = *(long *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  lStack_238 = *(long *)(param_1 + 0x40);
  lStack_240 = *(long *)(param_1 + 0x38);
  lStack_228 = *(long *)(param_1 + 0x50);
  lStack_230 = *(long *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_250;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_3c8 = uStack_98;
    uStack_3d0 = uStack_a0;
    uStack_3b8 = uStack_88;
    uStack_3c0 = uStack_90;
    uStack_3b0 = uStack_80;
    uStack_408 = uStack_d8;
    uStack_410 = uStack_e0;
    uStack_3f8 = uStack_c8;
    uStack_400 = uStack_d0;
    uStack_3e8 = uStack_b8;
    uStack_3f0 = uStack_c0;
    uStack_3d8 = uStack_a8;
    uStack_3e0 = uStack_b0;
    lStack_448 = uStack_118;
    lStack_450 = uStack_120;
    uStack_438 = (undefined2)uStack_108;
    uStack_436 = (undefined6)((ulong)uStack_108 >> 0x10);
    lStack_440 = uStack_110;
    uStack_428 = (undefined2)uStack_f8;
    uStack_426 = (undefined6)((ulong)uStack_f8 >> 0x10);
    uStack_430 = (undefined2)uStack_100;
    uStack_42e = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_418 = uStack_e8;
    uStack_420 = uStack_f0;
    lStack_488 = uStack_158;
    lStack_490 = lStack_160;
    lStack_478 = uStack_148;
    lStack_480 = uStack_150;
    lStack_468 = uStack_138;
    lStack_470 = uStack_140;
    lStack_458 = uStack_128;
    lStack_460 = uStack_130;
    plVar2 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar2 == 7) {
      plVar3 = &lStack_490;
      func_0x000103a0dd6c();
      lStack_328 = 0;
      lStack_330 = 0;
      lStack_318 = 0;
      lStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      lStack_2f8 = 0;
      lStack_300 = 0;
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      lStack_2e0 = 0;
      uStack_2ce = 0;
      uStack_2d6 = 0;
      uStack_2d0 = 0;
      uStack_4b8 = uStack_188;
      uStack_4c0 = uStack_190;
      uStack_4a8 = uStack_178;
      uStack_4b0 = uStack_180;
      uStack_4a0 = uStack_170;
      uStack_4f8 = uStack_1c8;
      uStack_500 = uStack_1d0;
      uStack_4e8 = uStack_1b8;
      uStack_4f0 = uStack_1c0;
      uStack_4d8 = uStack_1a8;
      uStack_4e0 = uStack_1b0;
      uStack_4c8 = uStack_198;
      uStack_4d0 = uStack_1a0;
      lStack_538 = lStack_208;
      lStack_540 = lStack_210;
      uStack_528 = uStack_1f8;
      lStack_530 = lStack_200;
      uStack_518 = uStack_1e8;
      uStack_520 = uStack_1f0;
      uStack_508 = uStack_1d8;
      uStack_510 = uStack_1e0;
      lStack_578 = lStack_248;
      lStack_580 = lStack_250;
      lStack_568 = lStack_238;
      lStack_570 = lStack_240;
      lStack_558 = lStack_228;
      lStack_560 = lStack_230;
      lStack_548 = lStack_218;
      lStack_550 = lStack_220;
      func_0x000103a0db60(&lStack_580,&lStack_670);
      plVar2 = &lStack_330;
      func_0x000103a17eac(plVar2,0x112fca678,&UNK_10dc3aa20);
      lStack_2a8 = plVar3[3];
      lStack_2b0 = plVar3[2];
      lStack_298 = plVar3[5];
      lStack_2a0 = plVar3[4];
      lStack_2b8 = plVar3[1];
      lStack_2c0 = *plVar3;
      lStack_278 = plVar3[9];
      lStack_280 = plVar3[8];
      lStack_270 = plVar3[10];
      uStack_25e = *(undefined8 *)((long)plVar3 + 0x62);
      lStack_288 = plVar3[7];
      lStack_290 = plVar3[6];
      uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)plVar3 + 0x5a) >> 0x30);
      uStack_268 = (undefined2)plVar3[0xb];
      uStack_266 = (undefined6)((ulong)plVar3[0xb] >> 0x10);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12d30();
  (*pcVar6)(&lStack_2c0,&UNK_1106be440,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    lStack_360 = lStack_280;
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    uStack_33e = uStack_25e;
    uStack_346 = uStack_266;
    uStack_340 = uStack_260;
    lStack_398 = lStack_2b8;
    lStack_3a0 = lStack_2c0;
    lStack_388 = lStack_2a8;
    lStack_390 = lStack_2b0;
    lStack_378 = lStack_298;
    lStack_380 = lStack_2a0;
    lStack_368 = lStack_288;
    lStack_370 = lStack_290;
    lStack_328 = lStack_2b8;
    lStack_330 = lStack_2c0;
    lStack_318 = lStack_2a8;
    lStack_320 = lStack_2b0;
    uStack_2ce = uStack_25e;
    uStack_2d0 = uStack_260;
    lStack_308 = lStack_298;
    lStack_310 = lStack_2a0;
    lStack_2f8 = lStack_288;
    lStack_300 = lStack_290;
    lStack_2e8 = lStack_278;
    lStack_2f0 = lStack_280;
    uStack_2d8 = uStack_268;
    uStack_2d6 = uStack_266;
    lStack_2e0 = lStack_270;
    if (lStack_2c0 != 0) {
      uStack_428 = (undefined2)((ulong)uStack_25e >> 0x30);
      uStack_42e = (undefined6)uStack_25e;
      if (iVar1 == 1) {
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dd7c(&lStack_490,&lStack_580);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0dd7c(&lStack_490,&lStack_580);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_2c0,0x112fca678,&UNK_10dc3aa20);
      lStack_628 = lStack_2e8;
      lStack_630 = lStack_2f0;
      uStack_618 = uStack_2d8;
      lStack_620 = lStack_2e0;
      uStack_60e = (undefined6)uStack_2ce;
      uStack_608 = (undefined2)((ulong)uStack_2ce >> 0x30);
      uStack_616 = uStack_2d6;
      uStack_610 = uStack_2d0;
      lStack_668 = lStack_328;
      lStack_670 = lStack_330;
      lStack_658 = lStack_318;
      lStack_660 = lStack_320;
      lStack_648 = lStack_308;
      lStack_650 = lStack_310;
      lStack_638 = lStack_2f8;
      lStack_640 = lStack_300;
      func_0x000103a0dd70(&lStack_670);
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_4a0 = uStack_590;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_528 = CONCAT62(uStack_616,uStack_618);
      lStack_538 = lStack_628;
      lStack_540 = lStack_630;
      lStack_530 = lStack_620;
      uStack_518 = CONCAT62(uStack_606,uStack_608);
      uStack_520 = CONCAT62(uStack_60e,uStack_610);
      uStack_508 = uStack_5f8;
      uStack_510 = uStack_600;
      lStack_578 = lStack_668;
      lStack_580 = lStack_670;
      lStack_568 = lStack_658;
      lStack_570 = lStack_660;
      lStack_558 = lStack_648;
      lStack_560 = lStack_650;
      lStack_548 = lStack_638;
      lStack_550 = lStack_640;
      func_0x000103a0db9c(&lStack_580);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_3e0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
      uStack_3c0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_418 = *(undefined8 *)(param_1 + 0xa0);
      uStack_420 = *(undefined8 *)(param_1 + 0x98);
      uStack_408 = *(undefined8 *)(param_1 + 0xb0);
      uStack_410 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_400 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3f0 = *(undefined8 *)(param_1 + 200);
      lStack_458 = *(undefined8 *)(param_1 + 0x60);
      lStack_460 = *(undefined8 *)(param_1 + 0x58);
      lStack_448 = *(undefined8 *)(param_1 + 0x70);
      lStack_450 = *(undefined8 *)(param_1 + 0x68);
      lStack_440 = *(undefined8 *)(param_1 + 0x78);
      uStack_438 = (undefined2)*(undefined8 *)(param_1 + 0x80);
      uStack_436 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x10);
      uStack_428 = (undefined2)*(undefined8 *)(param_1 + 0x90);
      uStack_426 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x10);
      uStack_430 = (undefined2)*(undefined8 *)(param_1 + 0x88);
      uStack_42e = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x10);
      lStack_488 = *(undefined8 *)(param_1 + 0x30);
      lStack_490 = *(long *)(param_1 + 0x28);
      lStack_478 = *(undefined8 *)(param_1 + 0x40);
      lStack_480 = *(undefined8 *)(param_1 + 0x38);
      lStack_468 = *(undefined8 *)(param_1 + 0x50);
      lStack_470 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_4c8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_4d0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_4b8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x100) = uStack_4a8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_4b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_508;
      *(undefined8 *)(param_1 + 0x98) = uStack_510;
      *(undefined8 *)(param_1 + 0xb0) = uStack_4f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_500;
      *(undefined8 *)(param_1 + 0xc0) = uStack_4e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_4f0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_4d8;
      *(undefined8 *)(param_1 + 200) = uStack_4e0;
      *(long *)(param_1 + 0x60) = lStack_548;
      *(long *)(param_1 + 0x58) = lStack_550;
      *(long *)(param_1 + 0x70) = lStack_538;
      *(long *)(param_1 + 0x68) = lStack_540;
      *(undefined8 *)(param_1 + 0x80) = uStack_528;
      *(long *)(param_1 + 0x78) = lStack_530;
      *(undefined8 *)(param_1 + 0x90) = uStack_518;
      *(undefined8 *)(param_1 + 0x88) = uStack_520;
      *(long *)(param_1 + 0x30) = lStack_578;
      *(long *)(param_1 + 0x28) = lStack_580;
      *(long *)(param_1 + 0x40) = lStack_568;
      *(long *)(param_1 + 0x38) = lStack_570;
      uStack_3b0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_4a0;
      *(long *)(param_1 + 0x50) = lStack_558;
      *(long *)(param_1 + 0x48) = lStack_560;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_490;
      goto LAB_1039fae00;
    }
  }
  uVar4 = 0x112fca678;
  puVar5 = &UNK_10dc3aa20;
  plVar2 = &lStack_2c0;
LAB_1039fae00:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fb06c; end: 1039fb55b;  */

/* WARNING: Removing unreachable block (ram,0x0001039fb3dc) */

void FUN_1039fb06c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined6 uStack_5c8;
  undefined2 uStack_5c2;
  undefined6 uStack_5c0;
  undefined2 uStack_5ba;
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
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
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
  undefined1 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
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
  undefined1 uStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_160;
  long lStack_150;
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
  undefined1 uStack_70;
  
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_252 = 0;
  lStack_260 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  lStack_210 = *(long *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  lStack_238 = *(long *)(param_1 + 0x30);
  lStack_240 = *(long *)(param_1 + 0x28);
  lStack_228 = *(long *)(param_1 + 0x40);
  lStack_230 = *(long *)(param_1 + 0x38);
  lStack_218 = *(long *)(param_1 + 0x50);
  lStack_220 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = *(undefined8 *)(param_1 + 0xe8);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined1 *)(param_1 + 0x108);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  lStack_150 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_240;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_88;
    uStack_360 = uStack_90;
    uStack_348 = uStack_78;
    uStack_350 = uStack_80;
    uStack_340 = uStack_70;
    uStack_398 = uStack_c8;
    uStack_3a0 = uStack_d0;
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uStack_3d8 = uStack_108;
    uStack_3e0 = (undefined6)uStack_110;
    uStack_3da = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_3c8 = uStack_f8;
    uStack_3d0 = uStack_100;
    uStack_3b8 = uStack_e8;
    uStack_3c0 = uStack_f0;
    uStack_3a8 = uStack_d8;
    uStack_3b0 = uStack_e0;
    lStack_418 = uStack_148;
    lStack_420 = lStack_150;
    lStack_408 = uStack_138;
    lStack_410 = uStack_140;
    lStack_3f8 = uStack_128;
    lStack_400 = uStack_130;
    uStack_3e8 = (undefined6)uStack_118;
    uStack_3e2 = (undefined2)((ulong)uStack_118 >> 0x30);
    lStack_3f0 = uStack_120;
    plVar2 = &lStack_150;
    func_0x000103a0db54();
    if ((int)plVar2 == 8) {
      plVar3 = &lStack_420;
      func_0x000103a0ddb0();
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      lStack_2d0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_2a2 = 0;
      uStack_2a0 = 0;
      uStack_448 = uStack_178;
      uStack_450 = uStack_180;
      uStack_438 = uStack_168;
      uStack_440 = uStack_170;
      uStack_430 = uStack_160;
      uStack_488 = uStack_1b8;
      uStack_490 = uStack_1c0;
      uStack_478 = uStack_1a8;
      uStack_480 = uStack_1b0;
      uStack_468 = uStack_198;
      uStack_470 = uStack_1a0;
      uStack_458 = uStack_188;
      uStack_460 = uStack_190;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_4b8 = uStack_1e8;
      uStack_4c0 = uStack_1f0;
      uStack_4a8 = uStack_1d8;
      uStack_4b0 = uStack_1e0;
      uStack_498 = uStack_1c8;
      uStack_4a0 = uStack_1d0;
      lStack_508 = lStack_238;
      lStack_510 = lStack_240;
      lStack_4f8 = lStack_228;
      lStack_500 = lStack_230;
      lStack_4e8 = lStack_218;
      lStack_4f0 = lStack_220;
      uStack_4d8 = uStack_208;
      lStack_4e0 = lStack_210;
      func_0x000103a0db60(&lStack_510,&lStack_600);
      plVar2 = &lStack_2e0;
      func_0x000103a17eac(plVar2,0x112fca680,&UNK_10dc3aa28);
      lStack_288 = plVar3[1];
      lStack_290 = *plVar3;
      lStack_268 = plVar3[5];
      lStack_270 = plVar3[4];
      lStack_260 = plVar3[6];
      lStack_278 = plVar3[3];
      lStack_280 = plVar3[2];
      uStack_250 = (undefined6)((ulong)*(undefined8 *)((long)plVar3 + 0x3e) >> 0x10);
      uStack_258 = (undefined6)plVar3[7];
      uStack_252 = (undefined2)((ulong)plVar3[7] >> 0x30);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12e2c();
  (*pcVar6)(&lStack_290,&UNK_1106be4e0,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_328 = lStack_288;
    lStack_330 = lStack_290;
    lStack_318 = lStack_278;
    lStack_320 = lStack_280;
    lStack_308 = lStack_268;
    lStack_310 = lStack_270;
    lStack_300 = lStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f2 = uStack_252;
    uStack_2f0 = uStack_250;
    lStack_2b8 = lStack_268;
    lStack_2c0 = lStack_270;
    uStack_2a8 = uStack_258;
    lStack_2b0 = lStack_260;
    uStack_2a2 = uStack_252;
    uStack_2a0 = uStack_250;
    lStack_2d8 = lStack_288;
    lStack_2e0 = lStack_290;
    lStack_2c8 = lStack_278;
    lStack_2d0 = lStack_280;
    if (lStack_290 != 0) {
      if (iVar1 == 1) {
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0ddc0(&lStack_420,&lStack_510);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0ddc0(&lStack_420,&lStack_510);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_290,0x112fca680,&UNK_10dc3aa28);
      lStack_5d8 = lStack_2b8;
      lStack_5e0 = lStack_2c0;
      uStack_5c8 = uStack_2a8;
      lStack_5d0 = lStack_2b0;
      uStack_5c2 = uStack_2a2;
      uStack_5c0 = uStack_2a0;
      lStack_5f8 = lStack_2d8;
      lStack_600 = lStack_2e0;
      lStack_5e8 = lStack_2c8;
      lStack_5f0 = lStack_2d0;
      func_0x000103a0ddb4(&lStack_600);
      uStack_448 = uStack_538;
      uStack_450 = uStack_540;
      uStack_438 = uStack_528;
      uStack_440 = uStack_530;
      uStack_430 = uStack_520;
      uStack_488 = uStack_578;
      uStack_490 = uStack_580;
      uStack_478 = uStack_568;
      uStack_480 = uStack_570;
      uStack_468 = uStack_558;
      uStack_470 = uStack_560;
      uStack_458 = uStack_548;
      uStack_460 = uStack_550;
      uStack_4d0 = CONCAT26(uStack_5ba,uStack_5c0);
      uStack_4c8 = uStack_5b8;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_498 = uStack_588;
      uStack_4a0 = uStack_590;
      lStack_508 = lStack_5f8;
      lStack_510 = lStack_600;
      lStack_4f8 = lStack_5e8;
      lStack_500 = lStack_5f0;
      uStack_4d8 = CONCAT26(uStack_5c2,uStack_5c8);
      lStack_4e8 = lStack_5d8;
      lStack_4f0 = lStack_5e0;
      lStack_4e0 = lStack_5d0;
      func_0x000103a0db9c(&lStack_510);
      uStack_368 = *(undefined8 *)(param_1 + 0xe0);
      uStack_370 = *(undefined8 *)(param_1 + 0xd8);
      uStack_358 = *(undefined8 *)(param_1 + 0xf0);
      uStack_360 = *(undefined8 *)(param_1 + 0xe8);
      uStack_348 = *(undefined8 *)(param_1 + 0x100);
      uStack_350 = *(undefined8 *)(param_1 + 0xf8);
      uStack_3a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_398 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_388 = *(undefined8 *)(param_1 + 0xc0);
      uStack_390 = *(undefined8 *)(param_1 + 0xb8);
      uStack_378 = *(undefined8 *)(param_1 + 0xd0);
      uStack_380 = *(undefined8 *)(param_1 + 200);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_3e0 = (undefined6)*(undefined8 *)(param_1 + 0x68);
      uStack_3da = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x30);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x88);
      lStack_418 = *(undefined8 *)(param_1 + 0x30);
      lStack_420 = *(long *)(param_1 + 0x28);
      lStack_408 = *(undefined8 *)(param_1 + 0x40);
      lStack_410 = *(undefined8 *)(param_1 + 0x38);
      lStack_3f8 = *(undefined8 *)(param_1 + 0x50);
      lStack_400 = *(undefined8 *)(param_1 + 0x48);
      uStack_3e8 = (undefined6)*(undefined8 *)(param_1 + 0x60);
      uStack_3e2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x30);
      *(undefined8 *)(param_1 + 0xe0) = uStack_458;
      *(undefined8 *)(param_1 + 0xd8) = uStack_460;
      *(undefined8 *)(param_1 + 0xf0) = uStack_448;
      *(undefined8 *)(param_1 + 0xe8) = uStack_450;
      *(undefined8 *)(param_1 + 0x100) = uStack_438;
      *(undefined8 *)(param_1 + 0xf8) = uStack_440;
      *(undefined8 *)(param_1 + 0xa0) = uStack_498;
      *(undefined8 *)(param_1 + 0x98) = uStack_4a0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_488;
      *(undefined8 *)(param_1 + 0xa8) = uStack_490;
      *(undefined8 *)(param_1 + 0xc0) = uStack_478;
      *(undefined8 *)(param_1 + 0xb8) = uStack_480;
      *(undefined8 *)(param_1 + 0xd0) = uStack_468;
      *(undefined8 *)(param_1 + 200) = uStack_470;
      *(undefined8 *)(param_1 + 0x60) = uStack_4d8;
      *(long *)(param_1 + 0x58) = lStack_4e0;
      *(undefined8 *)(param_1 + 0x70) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x68) = uStack_4d0;
      *(undefined8 *)(param_1 + 0x80) = uStack_4b8;
      *(undefined8 *)(param_1 + 0x78) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x90) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x88) = uStack_4b0;
      *(long *)(param_1 + 0x30) = lStack_508;
      *(long *)(param_1 + 0x28) = lStack_510;
      *(long *)(param_1 + 0x40) = lStack_4f8;
      *(long *)(param_1 + 0x38) = lStack_500;
      uStack_340 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_430;
      *(long *)(param_1 + 0x50) = lStack_4e8;
      *(long *)(param_1 + 0x48) = lStack_4f0;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_420;
      goto LAB_1039fb314;
    }
  }
  uVar4 = 0x112fca680;
  puVar5 = &UNK_10dc3aa28;
  plVar2 = &lStack_290;
LAB_1039fb314:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fb55c; end: 1039fba93;  */

/* WARNING: Removing unreachable block (ram,0x0001039fb90c) */

void FUN_1039fb55c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined2 uStack_618;
  undefined6 uStack_616;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined6 uStack_606;
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
  undefined1 uStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
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
  undefined1 uStack_4a0;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
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
  undefined1 uStack_3b0;
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
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined8 uStack_33e;
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
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined8 uStack_2ce;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_25e = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  lStack_270 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  lStack_218 = *(long *)(param_1 + 0x60);
  lStack_220 = *(long *)(param_1 + 0x58);
  lStack_208 = *(long *)(param_1 + 0x70);
  lStack_210 = *(long *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  lStack_200 = *(long *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  lStack_248 = *(long *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  lStack_238 = *(long *)(param_1 + 0x40);
  lStack_240 = *(long *)(param_1 + 0x38);
  lStack_228 = *(long *)(param_1 + 0x50);
  lStack_230 = *(long *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_250;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_3c8 = uStack_98;
    uStack_3d0 = uStack_a0;
    uStack_3b8 = uStack_88;
    uStack_3c0 = uStack_90;
    uStack_3b0 = uStack_80;
    uStack_408 = uStack_d8;
    uStack_410 = uStack_e0;
    uStack_3f8 = uStack_c8;
    uStack_400 = uStack_d0;
    uStack_3e8 = uStack_b8;
    uStack_3f0 = uStack_c0;
    uStack_3d8 = uStack_a8;
    uStack_3e0 = uStack_b0;
    lStack_448 = uStack_118;
    lStack_450 = uStack_120;
    uStack_438 = (undefined2)uStack_108;
    uStack_436 = (undefined6)((ulong)uStack_108 >> 0x10);
    lStack_440 = uStack_110;
    uStack_428 = (undefined2)uStack_f8;
    uStack_426 = (undefined6)((ulong)uStack_f8 >> 0x10);
    uStack_430 = (undefined2)uStack_100;
    uStack_42e = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_418 = uStack_e8;
    uStack_420 = uStack_f0;
    lStack_488 = uStack_158;
    lStack_490 = lStack_160;
    lStack_478 = uStack_148;
    lStack_480 = uStack_150;
    lStack_468 = uStack_138;
    lStack_470 = uStack_140;
    lStack_458 = uStack_128;
    lStack_460 = uStack_130;
    plVar2 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar2 == 9) {
      plVar3 = &lStack_490;
      func_0x000103a0ddf4();
      lStack_328 = 0;
      lStack_330 = 0;
      lStack_318 = 0;
      lStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      lStack_2f8 = 0;
      lStack_300 = 0;
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      lStack_2e0 = 0;
      uStack_2ce = 0;
      uStack_2d6 = 0;
      uStack_2d0 = 0;
      uStack_4b8 = uStack_188;
      uStack_4c0 = uStack_190;
      uStack_4a8 = uStack_178;
      uStack_4b0 = uStack_180;
      uStack_4a0 = uStack_170;
      uStack_4f8 = uStack_1c8;
      uStack_500 = uStack_1d0;
      uStack_4e8 = uStack_1b8;
      uStack_4f0 = uStack_1c0;
      uStack_4d8 = uStack_1a8;
      uStack_4e0 = uStack_1b0;
      uStack_4c8 = uStack_198;
      uStack_4d0 = uStack_1a0;
      lStack_538 = lStack_208;
      lStack_540 = lStack_210;
      uStack_528 = uStack_1f8;
      lStack_530 = lStack_200;
      uStack_518 = uStack_1e8;
      uStack_520 = uStack_1f0;
      uStack_508 = uStack_1d8;
      uStack_510 = uStack_1e0;
      lStack_578 = lStack_248;
      lStack_580 = lStack_250;
      lStack_568 = lStack_238;
      lStack_570 = lStack_240;
      lStack_558 = lStack_228;
      lStack_560 = lStack_230;
      lStack_548 = lStack_218;
      lStack_550 = lStack_220;
      func_0x000103a0db60(&lStack_580,&lStack_670);
      plVar2 = &lStack_330;
      func_0x000103a17eac(plVar2,0x112fca688,&UNK_10dc3aa30);
      lStack_2a8 = plVar3[3];
      lStack_2b0 = plVar3[2];
      lStack_298 = plVar3[5];
      lStack_2a0 = plVar3[4];
      lStack_2b8 = plVar3[1];
      lStack_2c0 = *plVar3;
      lStack_278 = plVar3[9];
      lStack_280 = plVar3[8];
      lStack_270 = plVar3[10];
      uStack_25e = *(undefined8 *)((long)plVar3 + 0x62);
      lStack_288 = plVar3[7];
      lStack_290 = plVar3[6];
      uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)plVar3 + 0x5a) >> 0x30);
      uStack_268 = (undefined2)plVar3[0xb];
      uStack_266 = (undefined6)((ulong)plVar3[0xb] >> 0x10);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a12f28();
  (*pcVar6)(&lStack_2c0,&UNK_1106be580,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    lStack_360 = lStack_280;
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    uStack_33e = uStack_25e;
    uStack_346 = uStack_266;
    uStack_340 = uStack_260;
    lStack_398 = lStack_2b8;
    lStack_3a0 = lStack_2c0;
    lStack_388 = lStack_2a8;
    lStack_390 = lStack_2b0;
    lStack_378 = lStack_298;
    lStack_380 = lStack_2a0;
    lStack_368 = lStack_288;
    lStack_370 = lStack_290;
    lStack_328 = lStack_2b8;
    lStack_330 = lStack_2c0;
    lStack_318 = lStack_2a8;
    lStack_320 = lStack_2b0;
    uStack_2ce = uStack_25e;
    uStack_2d0 = uStack_260;
    lStack_308 = lStack_298;
    lStack_310 = lStack_2a0;
    lStack_2f8 = lStack_288;
    lStack_300 = lStack_290;
    lStack_2e8 = lStack_278;
    lStack_2f0 = lStack_280;
    uStack_2d8 = uStack_268;
    uStack_2d6 = uStack_266;
    lStack_2e0 = lStack_270;
    if (lStack_2c0 != 0) {
      uStack_428 = (undefined2)((ulong)uStack_25e >> 0x30);
      uStack_42e = (undefined6)uStack_25e;
      if (iVar1 == 1) {
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0de04(&lStack_490,&lStack_580);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0de04(&lStack_490,&lStack_580);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_2c0,0x112fca688,&UNK_10dc3aa30);
      lStack_628 = lStack_2e8;
      lStack_630 = lStack_2f0;
      uStack_618 = uStack_2d8;
      lStack_620 = lStack_2e0;
      uStack_60e = (undefined6)uStack_2ce;
      uStack_608 = (undefined2)((ulong)uStack_2ce >> 0x30);
      uStack_616 = uStack_2d6;
      uStack_610 = uStack_2d0;
      lStack_668 = lStack_328;
      lStack_670 = lStack_330;
      lStack_658 = lStack_318;
      lStack_660 = lStack_320;
      lStack_648 = lStack_308;
      lStack_650 = lStack_310;
      lStack_638 = lStack_2f8;
      lStack_640 = lStack_300;
      func_0x000103a0ddf8(&lStack_670);
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_4a0 = uStack_590;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_528 = CONCAT62(uStack_616,uStack_618);
      lStack_538 = lStack_628;
      lStack_540 = lStack_630;
      lStack_530 = lStack_620;
      uStack_518 = CONCAT62(uStack_606,uStack_608);
      uStack_520 = CONCAT62(uStack_60e,uStack_610);
      uStack_508 = uStack_5f8;
      uStack_510 = uStack_600;
      lStack_578 = lStack_668;
      lStack_580 = lStack_670;
      lStack_568 = lStack_658;
      lStack_570 = lStack_660;
      lStack_558 = lStack_648;
      lStack_560 = lStack_650;
      lStack_548 = lStack_638;
      lStack_550 = lStack_640;
      func_0x000103a0db9c(&lStack_580);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_3e0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
      uStack_3c0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_418 = *(undefined8 *)(param_1 + 0xa0);
      uStack_420 = *(undefined8 *)(param_1 + 0x98);
      uStack_408 = *(undefined8 *)(param_1 + 0xb0);
      uStack_410 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_400 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3f0 = *(undefined8 *)(param_1 + 200);
      lStack_458 = *(undefined8 *)(param_1 + 0x60);
      lStack_460 = *(undefined8 *)(param_1 + 0x58);
      lStack_448 = *(undefined8 *)(param_1 + 0x70);
      lStack_450 = *(undefined8 *)(param_1 + 0x68);
      lStack_440 = *(undefined8 *)(param_1 + 0x78);
      uStack_438 = (undefined2)*(undefined8 *)(param_1 + 0x80);
      uStack_436 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x10);
      uStack_428 = (undefined2)*(undefined8 *)(param_1 + 0x90);
      uStack_426 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x10);
      uStack_430 = (undefined2)*(undefined8 *)(param_1 + 0x88);
      uStack_42e = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x10);
      lStack_488 = *(undefined8 *)(param_1 + 0x30);
      lStack_490 = *(long *)(param_1 + 0x28);
      lStack_478 = *(undefined8 *)(param_1 + 0x40);
      lStack_480 = *(undefined8 *)(param_1 + 0x38);
      lStack_468 = *(undefined8 *)(param_1 + 0x50);
      lStack_470 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_4c8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_4d0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_4b8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x100) = uStack_4a8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_4b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_508;
      *(undefined8 *)(param_1 + 0x98) = uStack_510;
      *(undefined8 *)(param_1 + 0xb0) = uStack_4f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_500;
      *(undefined8 *)(param_1 + 0xc0) = uStack_4e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_4f0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_4d8;
      *(undefined8 *)(param_1 + 200) = uStack_4e0;
      *(long *)(param_1 + 0x60) = lStack_548;
      *(long *)(param_1 + 0x58) = lStack_550;
      *(long *)(param_1 + 0x70) = lStack_538;
      *(long *)(param_1 + 0x68) = lStack_540;
      *(undefined8 *)(param_1 + 0x80) = uStack_528;
      *(long *)(param_1 + 0x78) = lStack_530;
      *(undefined8 *)(param_1 + 0x90) = uStack_518;
      *(undefined8 *)(param_1 + 0x88) = uStack_520;
      *(long *)(param_1 + 0x30) = lStack_578;
      *(long *)(param_1 + 0x28) = lStack_580;
      *(long *)(param_1 + 0x40) = lStack_568;
      *(long *)(param_1 + 0x38) = lStack_570;
      uStack_3b0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_4a0;
      *(long *)(param_1 + 0x50) = lStack_558;
      *(long *)(param_1 + 0x48) = lStack_560;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_490;
      goto LAB_1039fb828;
    }
  }
  uVar4 = 0x112fca688;
  puVar5 = &UNK_10dc3aa30;
  plVar2 = &lStack_2c0;
LAB_1039fb828:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fba94; end: 1039fbf83;  */

/* WARNING: Removing unreachable block (ram,0x0001039fbe04) */

void FUN_1039fba94(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_600;
  long lStack_5f8;
  long lStack_5f0;
  long lStack_5e8;
  long lStack_5e0;
  long lStack_5d8;
  long lStack_5d0;
  undefined6 uStack_5c8;
  undefined2 uStack_5c2;
  undefined6 uStack_5c0;
  undefined2 uStack_5ba;
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
  undefined1 uStack_520;
  long lStack_510;
  long lStack_508;
  long lStack_500;
  long lStack_4f8;
  long lStack_4f0;
  long lStack_4e8;
  long lStack_4e0;
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
  undefined1 uStack_430;
  long lStack_420;
  long lStack_418;
  long lStack_410;
  long lStack_408;
  long lStack_400;
  long lStack_3f8;
  long lStack_3f0;
  undefined6 uStack_3e8;
  undefined2 uStack_3e2;
  undefined6 uStack_3e0;
  undefined2 uStack_3da;
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
  undefined1 uStack_340;
  long lStack_330;
  long lStack_328;
  long lStack_320;
  long lStack_318;
  long lStack_310;
  long lStack_308;
  long lStack_300;
  undefined6 uStack_2f8;
  undefined2 uStack_2f2;
  undefined6 uStack_2f0;
  long lStack_2e0;
  long lStack_2d8;
  long lStack_2d0;
  long lStack_2c8;
  long lStack_2c0;
  long lStack_2b8;
  long lStack_2b0;
  undefined6 uStack_2a8;
  undefined2 uStack_2a2;
  undefined6 uStack_2a0;
  long lStack_290;
  long lStack_288;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  long lStack_260;
  undefined6 uStack_258;
  undefined2 uStack_252;
  undefined6 uStack_250;
  long lStack_240;
  long lStack_238;
  long lStack_230;
  long lStack_228;
  long lStack_220;
  long lStack_218;
  long lStack_210;
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
  undefined1 uStack_160;
  long lStack_150;
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
  undefined1 uStack_70;
  
  uStack_250 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_258 = 0;
  uStack_252 = 0;
  lStack_260 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_188 = *(undefined8 *)(param_1 + 0xe0);
  uStack_190 = *(undefined8 *)(param_1 + 0xd8);
  uStack_178 = *(undefined8 *)(param_1 + 0xf0);
  uStack_180 = *(undefined8 *)(param_1 + 0xe8);
  uStack_168 = *(undefined8 *)(param_1 + 0x100);
  uStack_170 = *(undefined8 *)(param_1 + 0xf8);
  uStack_160 = *(undefined1 *)(param_1 + 0x108);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_198 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1a0 = *(undefined8 *)(param_1 + 200);
  uStack_208 = *(undefined8 *)(param_1 + 0x60);
  lStack_210 = *(long *)(param_1 + 0x58);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_200 = *(undefined8 *)(param_1 + 0x68);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x88);
  lStack_238 = *(long *)(param_1 + 0x30);
  lStack_240 = *(long *)(param_1 + 0x28);
  lStack_228 = *(long *)(param_1 + 0x40);
  lStack_230 = *(long *)(param_1 + 0x38);
  lStack_218 = *(long *)(param_1 + 0x50);
  lStack_220 = *(long *)(param_1 + 0x48);
  uStack_98 = *(undefined8 *)(param_1 + 0xe0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_88 = *(undefined8 *)(param_1 + 0xf0);
  uStack_90 = *(undefined8 *)(param_1 + 0xe8);
  uStack_78 = *(undefined8 *)(param_1 + 0x100);
  uStack_80 = *(undefined8 *)(param_1 + 0xf8);
  uStack_70 = *(undefined1 *)(param_1 + 0x108);
  uStack_d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_b0 = *(undefined8 *)(param_1 + 200);
  uStack_118 = *(undefined8 *)(param_1 + 0x60);
  uStack_120 = *(undefined8 *)(param_1 + 0x58);
  uStack_108 = *(undefined8 *)(param_1 + 0x70);
  uStack_110 = *(undefined8 *)(param_1 + 0x68);
  uStack_f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_100 = *(undefined8 *)(param_1 + 0x78);
  uStack_e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_148 = *(undefined8 *)(param_1 + 0x30);
  lStack_150 = *(long *)(param_1 + 0x28);
  uStack_138 = *(undefined8 *)(param_1 + 0x40);
  uStack_140 = *(undefined8 *)(param_1 + 0x38);
  uStack_128 = *(undefined8 *)(param_1 + 0x50);
  uStack_130 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_240;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_358 = uStack_88;
    uStack_360 = uStack_90;
    uStack_348 = uStack_78;
    uStack_350 = uStack_80;
    uStack_340 = uStack_70;
    uStack_398 = uStack_c8;
    uStack_3a0 = uStack_d0;
    uStack_388 = uStack_b8;
    uStack_390 = uStack_c0;
    uStack_378 = uStack_a8;
    uStack_380 = uStack_b0;
    uStack_368 = uStack_98;
    uStack_370 = uStack_a0;
    uStack_3d8 = uStack_108;
    uStack_3e0 = (undefined6)uStack_110;
    uStack_3da = (undefined2)((ulong)uStack_110 >> 0x30);
    uStack_3c8 = uStack_f8;
    uStack_3d0 = uStack_100;
    uStack_3b8 = uStack_e8;
    uStack_3c0 = uStack_f0;
    uStack_3a8 = uStack_d8;
    uStack_3b0 = uStack_e0;
    lStack_418 = uStack_148;
    lStack_420 = lStack_150;
    lStack_408 = uStack_138;
    lStack_410 = uStack_140;
    lStack_3f8 = uStack_128;
    lStack_400 = uStack_130;
    uStack_3e8 = (undefined6)uStack_118;
    uStack_3e2 = (undefined2)((ulong)uStack_118 >> 0x30);
    lStack_3f0 = uStack_120;
    plVar2 = &lStack_150;
    func_0x000103a0db54();
    if ((int)plVar2 == 10) {
      plVar3 = &lStack_420;
      func_0x000103a0de38();
      lStack_2d8 = 0;
      lStack_2e0 = 0;
      lStack_2c8 = 0;
      lStack_2d0 = 0;
      lStack_2b8 = 0;
      lStack_2c0 = 0;
      uStack_2a8 = 0;
      lStack_2b0 = 0;
      uStack_2a2 = 0;
      uStack_2a0 = 0;
      uStack_448 = uStack_178;
      uStack_450 = uStack_180;
      uStack_438 = uStack_168;
      uStack_440 = uStack_170;
      uStack_430 = uStack_160;
      uStack_488 = uStack_1b8;
      uStack_490 = uStack_1c0;
      uStack_478 = uStack_1a8;
      uStack_480 = uStack_1b0;
      uStack_468 = uStack_198;
      uStack_470 = uStack_1a0;
      uStack_458 = uStack_188;
      uStack_460 = uStack_190;
      uStack_4c8 = uStack_1f8;
      uStack_4d0 = uStack_200;
      uStack_4b8 = uStack_1e8;
      uStack_4c0 = uStack_1f0;
      uStack_4a8 = uStack_1d8;
      uStack_4b0 = uStack_1e0;
      uStack_498 = uStack_1c8;
      uStack_4a0 = uStack_1d0;
      lStack_508 = lStack_238;
      lStack_510 = lStack_240;
      lStack_4f8 = lStack_228;
      lStack_500 = lStack_230;
      lStack_4e8 = lStack_218;
      lStack_4f0 = lStack_220;
      uStack_4d8 = uStack_208;
      lStack_4e0 = lStack_210;
      func_0x000103a0db60(&lStack_510,&lStack_600);
      plVar2 = &lStack_2e0;
      func_0x000103a17eac(plVar2,0x112fca690,&UNK_10dc3aa38);
      lStack_288 = plVar3[1];
      lStack_290 = *plVar3;
      lStack_268 = plVar3[5];
      lStack_270 = plVar3[4];
      lStack_260 = plVar3[6];
      lStack_278 = plVar3[3];
      lStack_280 = plVar3[2];
      uStack_250 = (undefined6)((ulong)*(undefined8 *)((long)plVar3 + 0x3e) >> 0x10);
      uStack_258 = (undefined6)plVar3[7];
      uStack_252 = (undefined2)((ulong)plVar3[7] >> 0x30);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a13024();
  (*pcVar6)(&lStack_290,&UNK_1106be620,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_328 = lStack_288;
    lStack_330 = lStack_290;
    lStack_318 = lStack_278;
    lStack_320 = lStack_280;
    lStack_308 = lStack_268;
    lStack_310 = lStack_270;
    lStack_300 = lStack_260;
    uStack_2f8 = uStack_258;
    uStack_2f2 = uStack_252;
    uStack_2f0 = uStack_250;
    lStack_2b8 = lStack_268;
    lStack_2c0 = lStack_270;
    uStack_2a8 = uStack_258;
    lStack_2b0 = lStack_260;
    uStack_2a2 = uStack_252;
    uStack_2a0 = uStack_250;
    lStack_2d8 = lStack_288;
    lStack_2e0 = lStack_290;
    lStack_2c8 = lStack_278;
    lStack_2d0 = lStack_280;
    if (lStack_290 != 0) {
      if (iVar1 == 1) {
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0de48(&lStack_420,&lStack_510);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_3f8 = lStack_268;
        lStack_400 = lStack_270;
        uStack_3e8 = uStack_258;
        lStack_3f0 = lStack_260;
        uStack_3e2 = uStack_252;
        uStack_3e0 = uStack_250;
        lStack_418 = lStack_288;
        lStack_420 = lStack_290;
        lStack_408 = lStack_278;
        lStack_410 = lStack_280;
        func_0x000103a0de48(&lStack_420,&lStack_510);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_290,0x112fca690,&UNK_10dc3aa38);
      lStack_5d8 = lStack_2b8;
      lStack_5e0 = lStack_2c0;
      uStack_5c8 = uStack_2a8;
      lStack_5d0 = lStack_2b0;
      uStack_5c2 = uStack_2a2;
      uStack_5c0 = uStack_2a0;
      lStack_5f8 = lStack_2d8;
      lStack_600 = lStack_2e0;
      lStack_5e8 = lStack_2c8;
      lStack_5f0 = lStack_2d0;
      func_0x000103a0de3c(&lStack_600);
      uStack_448 = uStack_538;
      uStack_450 = uStack_540;
      uStack_438 = uStack_528;
      uStack_440 = uStack_530;
      uStack_430 = uStack_520;
      uStack_488 = uStack_578;
      uStack_490 = uStack_580;
      uStack_478 = uStack_568;
      uStack_480 = uStack_570;
      uStack_468 = uStack_558;
      uStack_470 = uStack_560;
      uStack_458 = uStack_548;
      uStack_460 = uStack_550;
      uStack_4d0 = CONCAT26(uStack_5ba,uStack_5c0);
      uStack_4c8 = uStack_5b8;
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_498 = uStack_588;
      uStack_4a0 = uStack_590;
      lStack_508 = lStack_5f8;
      lStack_510 = lStack_600;
      lStack_4f8 = lStack_5e8;
      lStack_500 = lStack_5f0;
      uStack_4d8 = CONCAT26(uStack_5c2,uStack_5c8);
      lStack_4e8 = lStack_5d8;
      lStack_4f0 = lStack_5e0;
      lStack_4e0 = lStack_5d0;
      func_0x000103a0db9c(&lStack_510);
      uStack_368 = *(undefined8 *)(param_1 + 0xe0);
      uStack_370 = *(undefined8 *)(param_1 + 0xd8);
      uStack_358 = *(undefined8 *)(param_1 + 0xf0);
      uStack_360 = *(undefined8 *)(param_1 + 0xe8);
      uStack_348 = *(undefined8 *)(param_1 + 0x100);
      uStack_350 = *(undefined8 *)(param_1 + 0xf8);
      uStack_3a8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_3b0 = *(undefined8 *)(param_1 + 0x98);
      uStack_398 = *(undefined8 *)(param_1 + 0xb0);
      uStack_3a0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_388 = *(undefined8 *)(param_1 + 0xc0);
      uStack_390 = *(undefined8 *)(param_1 + 0xb8);
      uStack_378 = *(undefined8 *)(param_1 + 0xd0);
      uStack_380 = *(undefined8 *)(param_1 + 200);
      lStack_3f0 = *(undefined8 *)(param_1 + 0x58);
      uStack_3d8 = *(undefined8 *)(param_1 + 0x70);
      uStack_3c8 = *(undefined8 *)(param_1 + 0x80);
      uStack_3d0 = *(undefined8 *)(param_1 + 0x78);
      uStack_3e0 = (undefined6)*(undefined8 *)(param_1 + 0x68);
      uStack_3da = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x68) >> 0x30);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x90);
      uStack_3c0 = *(undefined8 *)(param_1 + 0x88);
      lStack_418 = *(undefined8 *)(param_1 + 0x30);
      lStack_420 = *(long *)(param_1 + 0x28);
      lStack_408 = *(undefined8 *)(param_1 + 0x40);
      lStack_410 = *(undefined8 *)(param_1 + 0x38);
      lStack_3f8 = *(undefined8 *)(param_1 + 0x50);
      lStack_400 = *(undefined8 *)(param_1 + 0x48);
      uStack_3e8 = (undefined6)*(undefined8 *)(param_1 + 0x60);
      uStack_3e2 = (undefined2)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x30);
      *(undefined8 *)(param_1 + 0xe0) = uStack_458;
      *(undefined8 *)(param_1 + 0xd8) = uStack_460;
      *(undefined8 *)(param_1 + 0xf0) = uStack_448;
      *(undefined8 *)(param_1 + 0xe8) = uStack_450;
      *(undefined8 *)(param_1 + 0x100) = uStack_438;
      *(undefined8 *)(param_1 + 0xf8) = uStack_440;
      *(undefined8 *)(param_1 + 0xa0) = uStack_498;
      *(undefined8 *)(param_1 + 0x98) = uStack_4a0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_488;
      *(undefined8 *)(param_1 + 0xa8) = uStack_490;
      *(undefined8 *)(param_1 + 0xc0) = uStack_478;
      *(undefined8 *)(param_1 + 0xb8) = uStack_480;
      *(undefined8 *)(param_1 + 0xd0) = uStack_468;
      *(undefined8 *)(param_1 + 200) = uStack_470;
      *(undefined8 *)(param_1 + 0x60) = uStack_4d8;
      *(long *)(param_1 + 0x58) = lStack_4e0;
      *(undefined8 *)(param_1 + 0x70) = uStack_4c8;
      *(undefined8 *)(param_1 + 0x68) = uStack_4d0;
      *(undefined8 *)(param_1 + 0x80) = uStack_4b8;
      *(undefined8 *)(param_1 + 0x78) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x90) = uStack_4a8;
      *(undefined8 *)(param_1 + 0x88) = uStack_4b0;
      *(long *)(param_1 + 0x30) = lStack_508;
      *(long *)(param_1 + 0x28) = lStack_510;
      *(long *)(param_1 + 0x40) = lStack_4f8;
      *(long *)(param_1 + 0x38) = lStack_500;
      uStack_340 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_430;
      *(long *)(param_1 + 0x50) = lStack_4e8;
      *(long *)(param_1 + 0x48) = lStack_4f0;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_420;
      goto LAB_1039fbd3c;
    }
  }
  uVar4 = 0x112fca690;
  puVar5 = &UNK_10dc3aa38;
  plVar2 = &lStack_290;
LAB_1039fbd3c:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fbf84; end: 1039fc4bb;  */

/* WARNING: Removing unreachable block (ram,0x0001039fc334) */

void FUN_1039fbf84(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x21;
  code *pcVar6;
  long lStack_670;
  long lStack_668;
  long lStack_660;
  long lStack_658;
  long lStack_650;
  long lStack_648;
  long lStack_640;
  long lStack_638;
  long lStack_630;
  long lStack_628;
  long lStack_620;
  undefined2 uStack_618;
  undefined6 uStack_616;
  undefined2 uStack_610;
  undefined6 uStack_60e;
  undefined2 uStack_608;
  undefined6 uStack_606;
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
  undefined1 uStack_590;
  long lStack_580;
  long lStack_578;
  long lStack_570;
  long lStack_568;
  long lStack_560;
  long lStack_558;
  long lStack_550;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
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
  undefined1 uStack_4a0;
  long lStack_490;
  long lStack_488;
  long lStack_480;
  long lStack_478;
  long lStack_470;
  long lStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
  long lStack_440;
  undefined2 uStack_438;
  undefined6 uStack_436;
  undefined2 uStack_430;
  undefined6 uStack_42e;
  undefined2 uStack_428;
  undefined6 uStack_426;
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
  undefined1 uStack_3b0;
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
  undefined2 uStack_348;
  undefined6 uStack_346;
  undefined2 uStack_340;
  undefined8 uStack_33e;
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
  undefined2 uStack_2d8;
  undefined6 uStack_2d6;
  undefined2 uStack_2d0;
  undefined8 uStack_2ce;
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
  undefined2 uStack_268;
  undefined6 uStack_266;
  undefined2 uStack_260;
  undefined8 uStack_25e;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_25e = 0;
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_266 = 0;
  lStack_270 = 0;
  lStack_298 = 0;
  lStack_2a0 = 0;
  lStack_288 = 0;
  lStack_290 = 0;
  lStack_2b8 = 0;
  lStack_2c0 = 0;
  lStack_2a8 = 0;
  lStack_2b0 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  lStack_218 = *(long *)(param_1 + 0x60);
  lStack_220 = *(long *)(param_1 + 0x58);
  lStack_208 = *(long *)(param_1 + 0x70);
  lStack_210 = *(long *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  lStack_200 = *(long *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  lStack_248 = *(long *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  lStack_238 = *(long *)(param_1 + 0x40);
  lStack_240 = *(long *)(param_1 + 0x38);
  lStack_228 = *(long *)(param_1 + 0x50);
  lStack_230 = *(long *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar2 = &lStack_250;
  func_0x000103a0db40();
  iVar1 = (int)plVar2;
  if (iVar1 != 1) {
    uStack_3c8 = uStack_98;
    uStack_3d0 = uStack_a0;
    uStack_3b8 = uStack_88;
    uStack_3c0 = uStack_90;
    uStack_3b0 = uStack_80;
    uStack_408 = uStack_d8;
    uStack_410 = uStack_e0;
    uStack_3f8 = uStack_c8;
    uStack_400 = uStack_d0;
    uStack_3e8 = uStack_b8;
    uStack_3f0 = uStack_c0;
    uStack_3d8 = uStack_a8;
    uStack_3e0 = uStack_b0;
    lStack_448 = uStack_118;
    lStack_450 = uStack_120;
    uStack_438 = (undefined2)uStack_108;
    uStack_436 = (undefined6)((ulong)uStack_108 >> 0x10);
    lStack_440 = uStack_110;
    uStack_428 = (undefined2)uStack_f8;
    uStack_426 = (undefined6)((ulong)uStack_f8 >> 0x10);
    uStack_430 = (undefined2)uStack_100;
    uStack_42e = (undefined6)((ulong)uStack_100 >> 0x10);
    uStack_418 = uStack_e8;
    uStack_420 = uStack_f0;
    lStack_488 = uStack_158;
    lStack_490 = lStack_160;
    lStack_478 = uStack_148;
    lStack_480 = uStack_150;
    lStack_468 = uStack_138;
    lStack_470 = uStack_140;
    lStack_458 = uStack_128;
    lStack_460 = uStack_130;
    plVar2 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar2 == 0xb) {
      plVar3 = &lStack_490;
      func_0x000103a0de7c();
      lStack_328 = 0;
      lStack_330 = 0;
      lStack_318 = 0;
      lStack_320 = 0;
      lStack_308 = 0;
      lStack_310 = 0;
      lStack_2f8 = 0;
      lStack_300 = 0;
      lStack_2e8 = 0;
      lStack_2f0 = 0;
      uStack_2d8 = 0;
      lStack_2e0 = 0;
      uStack_2ce = 0;
      uStack_2d6 = 0;
      uStack_2d0 = 0;
      uStack_4b8 = uStack_188;
      uStack_4c0 = uStack_190;
      uStack_4a8 = uStack_178;
      uStack_4b0 = uStack_180;
      uStack_4a0 = uStack_170;
      uStack_4f8 = uStack_1c8;
      uStack_500 = uStack_1d0;
      uStack_4e8 = uStack_1b8;
      uStack_4f0 = uStack_1c0;
      uStack_4d8 = uStack_1a8;
      uStack_4e0 = uStack_1b0;
      uStack_4c8 = uStack_198;
      uStack_4d0 = uStack_1a0;
      lStack_538 = lStack_208;
      lStack_540 = lStack_210;
      uStack_528 = uStack_1f8;
      lStack_530 = lStack_200;
      uStack_518 = uStack_1e8;
      uStack_520 = uStack_1f0;
      uStack_508 = uStack_1d8;
      uStack_510 = uStack_1e0;
      lStack_578 = lStack_248;
      lStack_580 = lStack_250;
      lStack_568 = lStack_238;
      lStack_570 = lStack_240;
      lStack_558 = lStack_228;
      lStack_560 = lStack_230;
      lStack_548 = lStack_218;
      lStack_550 = lStack_220;
      func_0x000103a0db60(&lStack_580,&lStack_670);
      plVar2 = &lStack_330;
      func_0x000103a17eac(plVar2,0x112fca698,&UNK_10dc3aa40);
      lStack_2a8 = plVar3[3];
      lStack_2b0 = plVar3[2];
      lStack_298 = plVar3[5];
      lStack_2a0 = plVar3[4];
      lStack_2b8 = plVar3[1];
      lStack_2c0 = *plVar3;
      lStack_278 = plVar3[9];
      lStack_280 = plVar3[8];
      lStack_270 = plVar3[10];
      uStack_25e = *(undefined8 *)((long)plVar3 + 0x62);
      lStack_288 = plVar3[7];
      lStack_290 = plVar3[6];
      uStack_260 = (undefined2)((ulong)*(undefined8 *)((long)plVar3 + 0x5a) >> 0x30);
      uStack_268 = (undefined2)plVar3[0xb];
      uStack_266 = (undefined6)((ulong)plVar3[0xb] >> 0x10);
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a13120();
  (*pcVar6)(&lStack_2c0,&UNK_1106be6c0,plVar2,param_3,param_4);
  if (unaff_x21 == 0) {
    lStack_358 = lStack_278;
    lStack_360 = lStack_280;
    lStack_350 = lStack_270;
    uStack_348 = uStack_268;
    uStack_33e = uStack_25e;
    uStack_346 = uStack_266;
    uStack_340 = uStack_260;
    lStack_398 = lStack_2b8;
    lStack_3a0 = lStack_2c0;
    lStack_388 = lStack_2a8;
    lStack_390 = lStack_2b0;
    lStack_378 = lStack_298;
    lStack_380 = lStack_2a0;
    lStack_368 = lStack_288;
    lStack_370 = lStack_290;
    lStack_328 = lStack_2b8;
    lStack_330 = lStack_2c0;
    lStack_318 = lStack_2a8;
    lStack_320 = lStack_2b0;
    uStack_2ce = uStack_25e;
    uStack_2d0 = uStack_260;
    lStack_308 = lStack_298;
    lStack_310 = lStack_2a0;
    lStack_2f8 = lStack_288;
    lStack_300 = lStack_290;
    lStack_2e8 = lStack_278;
    lStack_2f0 = lStack_280;
    uStack_2d8 = uStack_268;
    uStack_2d6 = uStack_266;
    lStack_2e0 = lStack_270;
    if (lStack_2c0 != 0) {
      uStack_428 = (undefined2)((ulong)uStack_25e >> 0x30);
      uStack_42e = (undefined6)uStack_25e;
      if (iVar1 == 1) {
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0de8c(&lStack_490,&lStack_580);
      }
      else {
        pcVar6 = *(code **)(param_4 + 8);
        lStack_448 = lStack_278;
        lStack_450 = lStack_280;
        uStack_438 = uStack_268;
        lStack_440 = lStack_270;
        uStack_436 = uStack_266;
        uStack_430 = uStack_260;
        lStack_488 = lStack_2b8;
        lStack_490 = lStack_2c0;
        lStack_478 = lStack_2a8;
        lStack_480 = lStack_2b0;
        lStack_468 = lStack_298;
        lStack_470 = lStack_2a0;
        lStack_458 = lStack_288;
        lStack_460 = lStack_290;
        func_0x000103a0de8c(&lStack_490,&lStack_580);
        (*pcVar6)(param_3,param_4);
      }
      func_0x000103a17eac(&lStack_2c0,0x112fca698,&UNK_10dc3aa40);
      lStack_628 = lStack_2e8;
      lStack_630 = lStack_2f0;
      uStack_618 = uStack_2d8;
      lStack_620 = lStack_2e0;
      uStack_60e = (undefined6)uStack_2ce;
      uStack_608 = (undefined2)((ulong)uStack_2ce >> 0x30);
      uStack_616 = uStack_2d6;
      uStack_610 = uStack_2d0;
      lStack_668 = lStack_328;
      lStack_670 = lStack_330;
      lStack_658 = lStack_318;
      lStack_660 = lStack_320;
      lStack_648 = lStack_308;
      lStack_650 = lStack_310;
      lStack_638 = lStack_2f8;
      lStack_640 = lStack_300;
      func_0x000103a0de80(&lStack_670);
      uStack_4b8 = uStack_5a8;
      uStack_4c0 = uStack_5b0;
      uStack_4a8 = uStack_598;
      uStack_4b0 = uStack_5a0;
      uStack_4a0 = uStack_590;
      uStack_4f8 = uStack_5e8;
      uStack_500 = uStack_5f0;
      uStack_4e8 = uStack_5d8;
      uStack_4f0 = uStack_5e0;
      uStack_4d8 = uStack_5c8;
      uStack_4e0 = uStack_5d0;
      uStack_4c8 = uStack_5b8;
      uStack_4d0 = uStack_5c0;
      uStack_528 = CONCAT62(uStack_616,uStack_618);
      lStack_538 = lStack_628;
      lStack_540 = lStack_630;
      lStack_530 = lStack_620;
      uStack_518 = CONCAT62(uStack_606,uStack_608);
      uStack_520 = CONCAT62(uStack_60e,uStack_610);
      uStack_508 = uStack_5f8;
      uStack_510 = uStack_600;
      lStack_578 = lStack_668;
      lStack_580 = lStack_670;
      lStack_568 = lStack_658;
      lStack_570 = lStack_660;
      lStack_558 = lStack_648;
      lStack_560 = lStack_650;
      lStack_548 = lStack_638;
      lStack_550 = lStack_640;
      func_0x000103a0db9c(&lStack_580);
      uStack_3d8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_3e0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_3c8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_3d0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_3b8 = *(undefined8 *)(param_1 + 0x100);
      uStack_3c0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_418 = *(undefined8 *)(param_1 + 0xa0);
      uStack_420 = *(undefined8 *)(param_1 + 0x98);
      uStack_408 = *(undefined8 *)(param_1 + 0xb0);
      uStack_410 = *(undefined8 *)(param_1 + 0xa8);
      uStack_3f8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_400 = *(undefined8 *)(param_1 + 0xb8);
      uStack_3e8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_3f0 = *(undefined8 *)(param_1 + 200);
      lStack_458 = *(undefined8 *)(param_1 + 0x60);
      lStack_460 = *(undefined8 *)(param_1 + 0x58);
      lStack_448 = *(undefined8 *)(param_1 + 0x70);
      lStack_450 = *(undefined8 *)(param_1 + 0x68);
      lStack_440 = *(undefined8 *)(param_1 + 0x78);
      uStack_438 = (undefined2)*(undefined8 *)(param_1 + 0x80);
      uStack_436 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x80) >> 0x10);
      uStack_428 = (undefined2)*(undefined8 *)(param_1 + 0x90);
      uStack_426 = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x90) >> 0x10);
      uStack_430 = (undefined2)*(undefined8 *)(param_1 + 0x88);
      uStack_42e = (undefined6)((ulong)*(undefined8 *)(param_1 + 0x88) >> 0x10);
      lStack_488 = *(undefined8 *)(param_1 + 0x30);
      lStack_490 = *(long *)(param_1 + 0x28);
      lStack_478 = *(undefined8 *)(param_1 + 0x40);
      lStack_480 = *(undefined8 *)(param_1 + 0x38);
      lStack_468 = *(undefined8 *)(param_1 + 0x50);
      lStack_470 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_4c8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_4d0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_4b8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_4c0;
      *(undefined8 *)(param_1 + 0x100) = uStack_4a8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_4b0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_508;
      *(undefined8 *)(param_1 + 0x98) = uStack_510;
      *(undefined8 *)(param_1 + 0xb0) = uStack_4f8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_500;
      *(undefined8 *)(param_1 + 0xc0) = uStack_4e8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_4f0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_4d8;
      *(undefined8 *)(param_1 + 200) = uStack_4e0;
      *(long *)(param_1 + 0x60) = lStack_548;
      *(long *)(param_1 + 0x58) = lStack_550;
      *(long *)(param_1 + 0x70) = lStack_538;
      *(long *)(param_1 + 0x68) = lStack_540;
      *(undefined8 *)(param_1 + 0x80) = uStack_528;
      *(long *)(param_1 + 0x78) = lStack_530;
      *(undefined8 *)(param_1 + 0x90) = uStack_518;
      *(undefined8 *)(param_1 + 0x88) = uStack_520;
      *(long *)(param_1 + 0x30) = lStack_578;
      *(long *)(param_1 + 0x28) = lStack_580;
      *(long *)(param_1 + 0x40) = lStack_568;
      *(long *)(param_1 + 0x38) = lStack_570;
      uStack_3b0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_4a0;
      *(long *)(param_1 + 0x50) = lStack_558;
      *(long *)(param_1 + 0x48) = lStack_560;
      uVar4 = 0x112fc9888;
      puVar5 = &UNK_10dc38d08;
      plVar2 = &lStack_490;
      goto LAB_1039fc250;
    }
  }
  uVar4 = 0x112fca698;
  puVar5 = &UNK_10dc3aa40;
  plVar2 = &lStack_2c0;
LAB_1039fc250:
  func_0x000103a17eac(plVar2,uVar4,puVar5);
  return;
}



/* Entry: 1039fc4bc; end: 1039fc8c7;  */

/* WARNING: Removing unreachable block (ram,0x0001039fc728) */

void FUN_1039fc4bc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  long unaff_x21;
  code *pcVar6;
  undefined8 uStack_528;
  undefined8 uStack_520;
  char cStack_518;
  undefined7 uStack_517;
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
  undefined1 uStack_448;
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
  undefined1 uStack_360;
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
  undefined1 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  char cStack_258;
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
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  uStack_260 = 0;
  uStack_268 = 0;
  cStack_258 = '\x03';
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  uStack_250 = *(undefined8 *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  uStack_160 = *(undefined8 *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  puVar5 = &uStack_250;
  func_0x000103a0db40();
  iVar4 = (int)puVar5;
  if (iVar4 != 1) {
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_270 = uStack_80;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_348 = uStack_158;
    uStack_350 = uStack_160;
    uStack_338 = uStack_148;
    uStack_340 = uStack_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    uStack_318 = uStack_128;
    uStack_320 = uStack_130;
    puVar5 = &uStack_160;
    func_0x000103a0db54();
    if ((int)puVar5 == 0xc) {
      puVar5 = &uStack_350;
      func_0x000103a0dec0();
      uVar1 = *puVar5;
      uVar2 = puVar5[1];
      cVar3 = *(char *)(puVar5 + 2);
      uStack_438 = uStack_248;
      uStack_440 = uStack_250;
      uStack_428 = uStack_238;
      uStack_430 = uStack_240;
      uStack_3f8 = uStack_208;
      uStack_400 = uStack_210;
      uStack_3e8 = uStack_1f8;
      uStack_3f0 = uStack_200;
      uStack_418 = uStack_228;
      uStack_420 = uStack_230;
      uStack_408 = uStack_218;
      uStack_410 = uStack_220;
      uStack_3b8 = uStack_1c8;
      uStack_3c0 = uStack_1d0;
      uStack_3a8 = uStack_1b8;
      uStack_3b0 = uStack_1c0;
      uStack_3d8 = uStack_1e8;
      uStack_3e0 = uStack_1f0;
      uStack_3c8 = uStack_1d8;
      uStack_3d0 = uStack_1e0;
      uStack_360 = uStack_170;
      uStack_378 = uStack_188;
      uStack_380 = uStack_190;
      uStack_368 = uStack_178;
      uStack_370 = uStack_180;
      uStack_398 = uStack_1a8;
      uStack_3a0 = uStack_1b0;
      uStack_388 = uStack_198;
      uStack_390 = uStack_1a0;
      func_0x000103a0db60(&uStack_440,&uStack_528);
      puVar5 = (undefined8 *)0x0;
      func_0x000103a17c94(0,0,3);
      uStack_268 = uVar1;
      uStack_260 = uVar2;
      cStack_258 = cVar3;
    }
  }
  pcVar6 = *(code **)(param_4 + 0x198);
  func_0x000103a1321c();
  (*pcVar6)(&uStack_268,&UNK_1106be760,puVar5,param_3,param_4);
  cVar3 = cStack_258;
  uVar2 = uStack_260;
  uVar1 = uStack_268;
  if ((unaff_x21 == 0) && (cStack_258 != '\x03')) {
    if (iVar4 == 1) {
      func_0x00010006c00c();
    }
    else {
      pcVar6 = *(code **)(param_4 + 8);
      func_0x00010006c00c();
      (*pcVar6)(param_3,param_4);
    }
    func_0x000103a17c94(uStack_268,uStack_260,cStack_258);
    uStack_528 = uVar1;
    uStack_520 = uVar2;
    cStack_518 = cVar3;
    func_0x000103a0dec4(&uStack_528);
    uStack_378 = uStack_460;
    uStack_380 = uStack_468;
    uStack_368 = uStack_450;
    uStack_370 = uStack_458;
    uStack_360 = uStack_448;
    uStack_3b8 = uStack_4a0;
    uStack_3c0 = uStack_4a8;
    uStack_3a8 = uStack_490;
    uStack_3b0 = uStack_498;
    uStack_398 = uStack_480;
    uStack_3a0 = uStack_488;
    uStack_388 = uStack_470;
    uStack_390 = uStack_478;
    uStack_3f8 = uStack_4e0;
    uStack_400 = uStack_4e8;
    uStack_3e8 = uStack_4d0;
    uStack_3f0 = uStack_4d8;
    uStack_3d8 = uStack_4c0;
    uStack_3e0 = uStack_4c8;
    uStack_3c8 = uStack_4b0;
    uStack_3d0 = uStack_4b8;
    uStack_430 = CONCAT71(uStack_517,cStack_518);
    uStack_438 = uStack_520;
    uStack_440 = uStack_528;
    uStack_428 = uStack_510;
    uStack_418 = uStack_500;
    uStack_420 = uStack_508;
    uStack_408 = uStack_4f0;
    uStack_410 = uStack_4f8;
    func_0x000103a0db9c(&uStack_440);
    uStack_298 = *(undefined8 *)(param_1 + 0xe0);
    uStack_2a0 = *(undefined8 *)(param_1 + 0xd8);
    uStack_288 = *(undefined8 *)(param_1 + 0xf0);
    uStack_290 = *(undefined8 *)(param_1 + 0xe8);
    uStack_278 = *(undefined8 *)(param_1 + 0x100);
    uStack_280 = *(undefined8 *)(param_1 + 0xf8);
    uStack_2d8 = *(undefined8 *)(param_1 + 0xa0);
    uStack_2e0 = *(undefined8 *)(param_1 + 0x98);
    uStack_2c8 = *(undefined8 *)(param_1 + 0xb0);
    uStack_2d0 = *(undefined8 *)(param_1 + 0xa8);
    uStack_2b8 = *(undefined8 *)(param_1 + 0xc0);
    uStack_2c0 = *(undefined8 *)(param_1 + 0xb8);
    uStack_2a8 = *(undefined8 *)(param_1 + 0xd0);
    uStack_2b0 = *(undefined8 *)(param_1 + 200);
    uStack_318 = *(undefined8 *)(param_1 + 0x60);
    uStack_320 = *(undefined8 *)(param_1 + 0x58);
    uStack_308 = *(undefined8 *)(param_1 + 0x70);
    uStack_310 = *(undefined8 *)(param_1 + 0x68);
    uStack_2f8 = *(undefined8 *)(param_1 + 0x80);
    uStack_300 = *(undefined8 *)(param_1 + 0x78);
    uStack_2e8 = *(undefined8 *)(param_1 + 0x90);
    uStack_2f0 = *(undefined8 *)(param_1 + 0x88);
    uStack_348 = *(undefined8 *)(param_1 + 0x30);
    uStack_350 = *(undefined8 *)(param_1 + 0x28);
    uStack_338 = *(undefined8 *)(param_1 + 0x40);
    uStack_340 = *(undefined8 *)(param_1 + 0x38);
    uStack_328 = *(undefined8 *)(param_1 + 0x50);
    uStack_330 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0xe0) = uStack_388;
    *(undefined8 *)(param_1 + 0xd8) = uStack_390;
    *(undefined8 *)(param_1 + 0xf0) = uStack_378;
    *(undefined8 *)(param_1 + 0xe8) = uStack_380;
    *(undefined8 *)(param_1 + 0x100) = uStack_368;
    *(undefined8 *)(param_1 + 0xf8) = uStack_370;
    *(undefined8 *)(param_1 + 0xa0) = uStack_3c8;
    *(undefined8 *)(param_1 + 0x98) = uStack_3d0;
    *(undefined8 *)(param_1 + 0xb0) = uStack_3b8;
    *(undefined8 *)(param_1 + 0xa8) = uStack_3c0;
    *(undefined8 *)(param_1 + 0xc0) = uStack_3a8;
    *(undefined8 *)(param_1 + 0xb8) = uStack_3b0;
    *(undefined8 *)(param_1 + 0xd0) = uStack_398;
    *(undefined8 *)(param_1 + 200) = uStack_3a0;
    *(undefined8 *)(param_1 + 0x60) = uStack_408;
    *(undefined8 *)(param_1 + 0x58) = uStack_410;
    *(undefined8 *)(param_1 + 0x70) = uStack_3f8;
    *(undefined8 *)(param_1 + 0x68) = uStack_400;
    *(undefined8 *)(param_1 + 0x80) = uStack_3e8;
    *(undefined8 *)(param_1 + 0x78) = uStack_3f0;
    *(undefined8 *)(param_1 + 0x90) = uStack_3d8;
    *(undefined8 *)(param_1 + 0x88) = uStack_3e0;
    *(undefined8 *)(param_1 + 0x30) = uStack_438;
    *(undefined8 *)(param_1 + 0x28) = uStack_440;
    *(undefined8 *)(param_1 + 0x40) = uStack_428;
    *(undefined8 *)(param_1 + 0x38) = uStack_430;
    uStack_270 = *(undefined1 *)(param_1 + 0x108);
    *(undefined1 *)(param_1 + 0x108) = uStack_360;
    *(undefined8 *)(param_1 + 0x50) = uStack_418;
    *(undefined8 *)(param_1 + 0x48) = uStack_420;
    func_0x000103a17eac(&uStack_350,0x112fc9888,&UNK_10dc38d08);
  }
  else {
    func_0x000103a17c94(uStack_268,uStack_260,cStack_258);
  }
  return;
}



/* Entry: 1039fc8c8; end: 1039fcce7;  */

/* WARNING: Removing unreachable block (ram,0x0001039fcb74) */

void FUN_1039fc8c8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
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
  undefined1 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_360;
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
  undefined1 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
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
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  uStack_260 = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  uStack_250 = *(undefined8 *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  uStack_160 = *(undefined8 *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = &uStack_250;
  func_0x000103a0db40();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_270 = uStack_80;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_348 = uStack_158;
    uStack_350 = uStack_160;
    uStack_338 = uStack_148;
    uStack_340 = uStack_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    uStack_318 = uStack_128;
    uStack_320 = uStack_130;
    puVar2 = &uStack_160;
    func_0x000103a0db54();
    if ((int)puVar2 == 0xd) {
      puVar2 = &uStack_350;
      func_0x000103a0ded0();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_3f8 = uStack_208;
      uStack_400 = uStack_210;
      uStack_3e8 = uStack_1f8;
      uStack_3f0 = uStack_200;
      uStack_418 = uStack_228;
      uStack_420 = uStack_230;
      uStack_408 = uStack_218;
      uStack_410 = uStack_220;
      uStack_3b8 = uStack_1c8;
      uStack_3c0 = uStack_1d0;
      uStack_3a8 = uStack_1b8;
      uStack_3b0 = uStack_1c0;
      uStack_3d8 = uStack_1e8;
      uStack_3e0 = uStack_1f0;
      uStack_3c8 = uStack_1d8;
      uStack_3d0 = uStack_1e0;
      uStack_360 = uStack_170;
      uStack_378 = uStack_188;
      uStack_380 = uStack_190;
      uStack_368 = uStack_178;
      uStack_370 = uStack_180;
      uStack_398 = uStack_1a8;
      uStack_3a0 = uStack_1b0;
      uStack_388 = uStack_198;
      uStack_390 = uStack_1a0;
      uStack_438 = uStack_248;
      uStack_440 = uStack_250;
      uStack_428 = uStack_238;
      lStack_430 = uStack_240;
      func_0x000103a0db60(&uStack_440,&uStack_528);
      puVar2 = (undefined8 *)0x0;
      func_0x000103a17d14(0,0,0);
      uStack_268 = uVar5;
      uStack_260 = uVar6;
      lStack_258 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103a13318();
  (*pcVar4)(&uStack_268,&UNK_1106be7e0,puVar2,param_3,param_4);
  lVar3 = lStack_258;
  uVar6 = uStack_260;
  uVar5 = uStack_268;
  if (unaff_x21 == 0) {
    if (lStack_258 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      func_0x000103a17d14(uStack_268,uStack_260,lStack_258);
      uStack_528 = uVar5;
      uStack_520 = uVar6;
      lStack_518 = lVar3;
      func_0x000103a0ded4(&uStack_528);
      uStack_378 = uStack_460;
      uStack_380 = uStack_468;
      uStack_368 = uStack_450;
      uStack_370 = uStack_458;
      uStack_360 = uStack_448;
      uStack_3b8 = uStack_4a0;
      uStack_3c0 = uStack_4a8;
      uStack_3a8 = uStack_490;
      uStack_3b0 = uStack_498;
      uStack_398 = uStack_480;
      uStack_3a0 = uStack_488;
      uStack_388 = uStack_470;
      uStack_390 = uStack_478;
      uStack_3f8 = uStack_4e0;
      uStack_400 = uStack_4e8;
      uStack_3e8 = uStack_4d0;
      uStack_3f0 = uStack_4d8;
      uStack_3d8 = uStack_4c0;
      uStack_3e0 = uStack_4c8;
      uStack_3c8 = uStack_4b0;
      uStack_3d0 = uStack_4b8;
      uStack_438 = uStack_520;
      uStack_440 = uStack_528;
      uStack_428 = uStack_510;
      lStack_430 = lStack_518;
      uStack_418 = uStack_500;
      uStack_420 = uStack_508;
      uStack_408 = uStack_4f0;
      uStack_410 = uStack_4f8;
      func_0x000103a0db9c(&uStack_440);
      uStack_298 = *(undefined8 *)(param_1 + 0xe0);
      uStack_2a0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_288 = *(undefined8 *)(param_1 + 0xf0);
      uStack_290 = *(undefined8 *)(param_1 + 0xe8);
      uStack_278 = *(undefined8 *)(param_1 + 0x100);
      uStack_280 = *(undefined8 *)(param_1 + 0xf8);
      uStack_2d8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x98);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2b0 = *(undefined8 *)(param_1 + 200);
      uStack_318 = *(undefined8 *)(param_1 + 0x60);
      uStack_320 = *(undefined8 *)(param_1 + 0x58);
      uStack_308 = *(undefined8 *)(param_1 + 0x70);
      uStack_310 = *(undefined8 *)(param_1 + 0x68);
      uStack_2f8 = *(undefined8 *)(param_1 + 0x80);
      uStack_300 = *(undefined8 *)(param_1 + 0x78);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x88);
      uStack_348 = *(undefined8 *)(param_1 + 0x30);
      uStack_350 = *(undefined8 *)(param_1 + 0x28);
      uStack_338 = *(undefined8 *)(param_1 + 0x40);
      uStack_340 = *(undefined8 *)(param_1 + 0x38);
      uStack_328 = *(undefined8 *)(param_1 + 0x50);
      uStack_330 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_388;
      *(undefined8 *)(param_1 + 0xd8) = uStack_390;
      *(undefined8 *)(param_1 + 0xf0) = uStack_378;
      *(undefined8 *)(param_1 + 0xe8) = uStack_380;
      *(undefined8 *)(param_1 + 0x100) = uStack_368;
      *(undefined8 *)(param_1 + 0xf8) = uStack_370;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_398;
      *(undefined8 *)(param_1 + 200) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x60) = uStack_408;
      *(undefined8 *)(param_1 + 0x58) = uStack_410;
      *(undefined8 *)(param_1 + 0x70) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x68) = uStack_400;
      *(undefined8 *)(param_1 + 0x80) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x90) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e0;
      *(undefined8 *)(param_1 + 0x30) = uStack_438;
      *(undefined8 *)(param_1 + 0x28) = uStack_440;
      *(undefined8 *)(param_1 + 0x40) = uStack_428;
      *(long *)(param_1 + 0x38) = lStack_430;
      uStack_270 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_360;
      *(undefined8 *)(param_1 + 0x50) = uStack_418;
      *(undefined8 *)(param_1 + 0x48) = uStack_420;
      func_0x000103a17eac(&uStack_350,0x112fc9888,&UNK_10dc38d08);
      return;
    }
    lVar3 = 0;
  }
  func_0x000103a17d14(uStack_268,uStack_260,lVar3);
  return;
}



/* Entry: 1039fcce8; end: 1039fd3af;  */

/* WARNING: Removing unreachable block (ram,0x0001039fd210) */

void FUN_1039fcce8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
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
  undefined1 uStack_748;
  undefined7 uStack_747;
  undefined1 uStack_740;
  undefined7 uStack_73f;
  undefined1 uStack_738;
  undefined7 uStack_737;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined1 uStack_700;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined8 uStack_620;
  undefined8 uStack_618;
  undefined1 uStack_610;
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
  undefined1 uStack_568;
  undefined7 uStack_567;
  undefined1 uStack_560;
  undefined7 uStack_55f;
  undefined1 uStack_558;
  undefined7 uStack_557;
  undefined8 uStack_550;
  undefined8 uStack_548;
  undefined8 uStack_540;
  undefined8 uStack_538;
  undefined8 uStack_530;
  undefined8 uStack_528;
  undefined1 uStack_520;
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
  undefined1 uStack_478;
  undefined7 uStack_477;
  undefined1 uStack_470;
  undefined8 uStack_46f;
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
  undefined1 uStack_3c8;
  undefined7 uStack_3c7;
  undefined1 uStack_3c0;
  undefined8 uStack_3bf;
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
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined8 uStack_30f;
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
  undefined1 uStack_268;
  undefined7 uStack_267;
  undefined1 uStack_260;
  undefined8 uStack_25f;
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
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  puVar4 = &uStack_7e0;
  func_0x000103a17ca8(&uStack_300);
  uStack_328 = uStack_278;
  uStack_330 = uStack_280;
  uStack_318 = uStack_268;
  uStack_320 = uStack_270;
  uStack_30f = uStack_25f;
  uStack_317 = uStack_267;
  uStack_310 = uStack_260;
  uStack_368 = uStack_2b8;
  uStack_370 = uStack_2c0;
  uStack_358 = uStack_2a8;
  uStack_360 = uStack_2b0;
  uStack_338 = uStack_288;
  uStack_340 = uStack_290;
  uStack_348 = uStack_298;
  uStack_350 = uStack_2a0;
  uStack_3a8 = uStack_2f8;
  uStack_3b0 = uStack_300;
  uStack_398 = uStack_2e8;
  uStack_3a0 = uStack_2f0;
  uStack_378 = uStack_2c8;
  uStack_380 = uStack_2d0;
  uStack_388 = uStack_2d8;
  uStack_390 = uStack_2e0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  uStack_250 = *(undefined8 *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  uStack_160 = *(undefined8 *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = &uStack_250;
  func_0x000103a0db40();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_538 = uStack_98;
    uStack_540 = uStack_a0;
    uStack_528 = uStack_88;
    uStack_530 = uStack_90;
    uStack_520 = uStack_80;
    uStack_578 = uStack_d8;
    uStack_580 = uStack_e0;
    uStack_568 = (undefined1)uStack_c8;
    uStack_567 = (undefined7)((ulong)uStack_c8 >> 8);
    uStack_570 = uStack_d0;
    uStack_558 = (undefined1)uStack_b8;
    uStack_557 = (undefined7)((ulong)uStack_b8 >> 8);
    uStack_560 = (undefined1)uStack_c0;
    uStack_55f = (undefined7)((ulong)uStack_c0 >> 8);
    uStack_548 = uStack_a8;
    uStack_550 = uStack_b0;
    uStack_5b8 = uStack_118;
    uStack_5c0 = uStack_120;
    uStack_5a8 = uStack_108;
    uStack_5b0 = uStack_110;
    uStack_598 = uStack_f8;
    uStack_5a0 = uStack_100;
    uStack_588 = uStack_e8;
    uStack_590 = uStack_f0;
    uStack_5f8 = uStack_158;
    uStack_600 = uStack_160;
    uStack_5e8 = uStack_148;
    uStack_5f0 = uStack_150;
    uStack_5d8 = uStack_138;
    uStack_5e0 = uStack_140;
    uStack_5c8 = uStack_128;
    uStack_5d0 = uStack_130;
    puVar3 = &uStack_160;
    func_0x000103a0db54();
    if ((int)puVar3 == 0xe) {
      puVar3 = &uStack_600;
      func_0x000103a0dee0();
      uStack_3c8 = uStack_318;
      uStack_3d0 = uStack_320;
      uStack_3bf = uStack_30f;
      uStack_3c7 = uStack_317;
      uStack_3c0 = uStack_310;
      uStack_418 = uStack_368;
      uStack_420 = uStack_370;
      uStack_408 = uStack_358;
      uStack_410 = uStack_360;
      uStack_3e8 = uStack_338;
      uStack_3f0 = uStack_340;
      uStack_3d8 = uStack_328;
      uStack_3e0 = uStack_330;
      uStack_3f8 = uStack_348;
      uStack_400 = uStack_350;
      uStack_458 = uStack_3a8;
      uStack_460 = uStack_3b0;
      uStack_448 = uStack_398;
      uStack_450 = uStack_3a0;
      uStack_438 = uStack_388;
      uStack_440 = uStack_390;
      uStack_428 = uStack_378;
      uStack_430 = uStack_380;
      uStack_628 = uStack_188;
      uStack_630 = uStack_190;
      uStack_618 = uStack_178;
      uStack_620 = uStack_180;
      uStack_610 = uStack_170;
      uStack_668 = uStack_1c8;
      uStack_670 = uStack_1d0;
      uStack_658 = uStack_1b8;
      uStack_660 = uStack_1c0;
      uStack_648 = uStack_1a8;
      uStack_650 = uStack_1b0;
      uStack_638 = uStack_198;
      uStack_640 = uStack_1a0;
      uStack_6a8 = uStack_208;
      uStack_6b0 = uStack_210;
      uStack_698 = uStack_1f8;
      uStack_6a0 = uStack_200;
      uStack_688 = uStack_1e8;
      uStack_690 = uStack_1f0;
      uStack_678 = uStack_1d8;
      uStack_680 = uStack_1e0;
      uStack_6e8 = uStack_248;
      uStack_6f0 = uStack_250;
      uStack_6d8 = uStack_238;
      uStack_6e0 = uStack_240;
      uStack_6c8 = uStack_228;
      uStack_6d0 = uStack_230;
      uStack_6b8 = uStack_218;
      uStack_6c0 = uStack_220;
      func_0x000103a0db60(&uStack_6f0,&uStack_7e0);
      func_0x000103a17eac(&uStack_460,0x112fca6a0,&UNK_10dc3aa48);
      uStack_7c8 = puVar3[3];
      uStack_7d0 = puVar3[2];
      uStack_7b8 = puVar3[5];
      uStack_7c0 = puVar3[4];
      uStack_7d8 = puVar3[1];
      uStack_7e0 = *puVar3;
      uStack_788 = puVar3[0xb];
      uStack_790 = puVar3[10];
      uStack_778 = puVar3[0xd];
      uStack_780 = puVar3[0xc];
      uStack_7a8 = puVar3[7];
      uStack_7b0 = puVar3[6];
      uStack_798 = puVar3[9];
      uStack_7a0 = puVar3[8];
      uStack_758 = puVar3[0x11];
      uStack_760 = puVar3[0x10];
      uStack_750 = puVar3[0x12];
      uStack_768 = puVar3[0xf];
      uStack_770 = puVar3[0xe];
      uStack_73f = (undefined7)*(undefined8 *)((long)puVar3 + 0xa1);
      uStack_738 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0xa1) >> 0x38);
      uStack_740 = (undefined1)((ulong)*(undefined8 *)((long)puVar3 + 0x99) >> 0x38);
      uStack_748 = (undefined1)puVar3[0x13];
      uStack_747 = (undefined7)((ulong)puVar3[0x13] >> 8);
      func_0x000103a17cc8(&uStack_7e0);
      uStack_328 = uStack_758;
      uStack_330 = uStack_760;
      uStack_318 = uStack_748;
      uStack_320 = uStack_750;
      uStack_30f = CONCAT17(uStack_738,uStack_73f);
      uStack_317 = uStack_747;
      uStack_310 = uStack_740;
      uStack_368 = uStack_798;
      uStack_370 = uStack_7a0;
      uStack_358 = uStack_788;
      uStack_360 = uStack_790;
      uStack_338 = uStack_768;
      uStack_340 = uStack_770;
      uStack_348 = uStack_778;
      uStack_350 = uStack_780;
      uStack_3a8 = uStack_7d8;
      uStack_3b0 = uStack_7e0;
      uStack_398 = uStack_7c8;
      uStack_3a0 = uStack_7d0;
      uStack_378 = uStack_7a8;
      uStack_380 = uStack_7b0;
      uStack_388 = uStack_7b8;
      uStack_390 = uStack_7c0;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000103a13414();
  (*pcVar7)(&uStack_3b0,&UNK_1106be8f0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_488 = uStack_328;
    uStack_490 = uStack_330;
    uStack_478 = uStack_318;
    uStack_480 = uStack_320;
    uStack_46f = uStack_30f;
    uStack_477 = uStack_317;
    uStack_470 = uStack_310;
    uStack_4c8 = uStack_368;
    uStack_4d0 = uStack_370;
    uStack_4b8 = uStack_358;
    uStack_4c0 = uStack_360;
    uStack_4a8 = uStack_348;
    uStack_4b0 = uStack_350;
    uStack_498 = uStack_338;
    uStack_4a0 = uStack_340;
    uStack_508 = uStack_3a8;
    uStack_510 = uStack_3b0;
    uStack_4f8 = uStack_398;
    uStack_500 = uStack_3a0;
    uStack_4e8 = uStack_388;
    uStack_4f0 = uStack_390;
    uStack_4d8 = uStack_378;
    uStack_4e0 = uStack_380;
    uStack_3e8 = uStack_338;
    uStack_3f0 = uStack_340;
    uStack_3d8 = uStack_328;
    uStack_3e0 = uStack_330;
    uStack_3c8 = uStack_318;
    uStack_3d0 = uStack_320;
    uStack_3bf = uStack_30f;
    uStack_3c7 = uStack_317;
    uStack_3c0 = uStack_310;
    uStack_418 = uStack_368;
    uStack_420 = uStack_370;
    uStack_408 = uStack_358;
    uStack_410 = uStack_360;
    uStack_3f8 = uStack_348;
    uStack_400 = uStack_350;
    uStack_458 = uStack_3a8;
    uStack_460 = uStack_3b0;
    uStack_448 = uStack_398;
    uStack_450 = uStack_3a0;
    uStack_438 = uStack_388;
    uStack_440 = uStack_390;
    uStack_428 = uStack_378;
    uStack_430 = uStack_380;
    iVar1 = (int)&uStack_510;
    func_0x000100d65134();
    if (iVar1 != 1) {
      uStack_558 = (undefined1)((ulong)uStack_46f >> 0x38);
      uStack_55f = (undefined7)uStack_46f;
      if ((int)puVar2 == 1) {
        uStack_578 = uStack_488;
        uStack_580 = uStack_490;
        uStack_568 = uStack_478;
        uStack_570 = uStack_480;
        uStack_567 = uStack_477;
        uStack_560 = uStack_470;
        uStack_5b8 = uStack_4c8;
        uStack_5c0 = uStack_4d0;
        uStack_5a8 = uStack_4b8;
        uStack_5b0 = uStack_4c0;
        uStack_598 = uStack_4a8;
        uStack_5a0 = uStack_4b0;
        uStack_588 = uStack_498;
        uStack_590 = uStack_4a0;
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_5e8 = uStack_4f8;
        uStack_5f0 = uStack_500;
        uStack_5d8 = uStack_4e8;
        uStack_5e0 = uStack_4f0;
        uStack_5c8 = uStack_4d8;
        uStack_5d0 = uStack_4e0;
        func_0x000103a0def0(&uStack_600,&uStack_6f0);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_578 = uStack_488;
        uStack_580 = uStack_490;
        uStack_568 = uStack_478;
        uStack_570 = uStack_480;
        uStack_567 = uStack_477;
        uStack_560 = uStack_470;
        uStack_5b8 = uStack_4c8;
        uStack_5c0 = uStack_4d0;
        uStack_5a8 = uStack_4b8;
        uStack_5b0 = uStack_4c0;
        uStack_598 = uStack_4a8;
        uStack_5a0 = uStack_4b0;
        uStack_588 = uStack_498;
        uStack_590 = uStack_4a0;
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_5e8 = uStack_4f8;
        uStack_5f0 = uStack_500;
        uStack_5d8 = uStack_4e8;
        uStack_5e0 = uStack_4f0;
        uStack_5c8 = uStack_4d8;
        uStack_5d0 = uStack_4e0;
        func_0x000103a0def0(&uStack_600,&uStack_6f0);
        (*pcVar7)(param_3,param_4);
      }
      func_0x000103a17eac(&uStack_3b0,0x112fca6a0,&UNK_10dc3aa48);
      uStack_758 = uStack_3d8;
      uStack_760 = uStack_3e0;
      uStack_748 = uStack_3c8;
      uStack_750 = uStack_3d0;
      uStack_73f = (undefined7)uStack_3bf;
      uStack_738 = (undefined1)((ulong)uStack_3bf >> 0x38);
      uStack_747 = uStack_3c7;
      uStack_740 = uStack_3c0;
      uStack_798 = uStack_418;
      uStack_7a0 = uStack_420;
      uStack_788 = uStack_408;
      uStack_790 = uStack_410;
      uStack_778 = uStack_3f8;
      uStack_780 = uStack_400;
      uStack_768 = uStack_3e8;
      uStack_770 = uStack_3f0;
      uStack_7d8 = uStack_458;
      uStack_7e0 = uStack_460;
      uStack_7c8 = uStack_448;
      uStack_7d0 = uStack_450;
      uStack_7b8 = uStack_438;
      uStack_7c0 = uStack_440;
      uStack_7a8 = uStack_428;
      uStack_7b0 = uStack_430;
      func_0x000103a0dee4(&uStack_7e0);
      uStack_628 = uStack_718;
      uStack_630 = uStack_720;
      uStack_618 = uStack_708;
      uStack_620 = uStack_710;
      uStack_610 = uStack_700;
      uStack_658 = CONCAT71(uStack_747,uStack_748);
      uStack_668 = uStack_758;
      uStack_670 = uStack_760;
      uStack_660 = uStack_750;
      uStack_648 = CONCAT71(uStack_737,uStack_738);
      uStack_650 = CONCAT71(uStack_73f,uStack_740);
      uStack_638 = uStack_728;
      uStack_640 = uStack_730;
      uStack_6a8 = uStack_798;
      uStack_6b0 = uStack_7a0;
      uStack_698 = uStack_788;
      uStack_6a0 = uStack_790;
      uStack_688 = uStack_778;
      uStack_690 = uStack_780;
      uStack_678 = uStack_768;
      uStack_680 = uStack_770;
      uStack_6e8 = uStack_7d8;
      uStack_6f0 = uStack_7e0;
      uStack_6d8 = uStack_7c8;
      uStack_6e0 = uStack_7d0;
      uStack_6c8 = uStack_7b8;
      uStack_6d0 = uStack_7c0;
      uStack_6b8 = uStack_7a8;
      uStack_6c0 = uStack_7b0;
      func_0x000103a0db9c(&uStack_6f0);
      uStack_548 = *(undefined8 *)(param_1 + 0xe0);
      uStack_550 = *(undefined8 *)(param_1 + 0xd8);
      uStack_538 = *(undefined8 *)(param_1 + 0xf0);
      uStack_540 = *(undefined8 *)(param_1 + 0xe8);
      uStack_528 = *(undefined8 *)(param_1 + 0x100);
      uStack_530 = *(undefined8 *)(param_1 + 0xf8);
      uStack_588 = *(undefined8 *)(param_1 + 0xa0);
      uStack_590 = *(undefined8 *)(param_1 + 0x98);
      uStack_578 = *(undefined8 *)(param_1 + 0xb0);
      uStack_580 = *(undefined8 *)(param_1 + 0xa8);
      uStack_570 = *(undefined8 *)(param_1 + 0xb8);
      uStack_568 = (undefined1)*(undefined8 *)(param_1 + 0xc0);
      uStack_567 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xc0) >> 8);
      uStack_558 = (undefined1)*(undefined8 *)(param_1 + 0xd0);
      uStack_557 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0xd0) >> 8);
      uStack_560 = (undefined1)*(undefined8 *)(param_1 + 200);
      uStack_55f = (undefined7)((ulong)*(undefined8 *)(param_1 + 200) >> 8);
      uStack_5c8 = *(undefined8 *)(param_1 + 0x60);
      uStack_5d0 = *(undefined8 *)(param_1 + 0x58);
      uStack_5b8 = *(undefined8 *)(param_1 + 0x70);
      uStack_5c0 = *(undefined8 *)(param_1 + 0x68);
      uStack_5a8 = *(undefined8 *)(param_1 + 0x80);
      uStack_5b0 = *(undefined8 *)(param_1 + 0x78);
      uStack_598 = *(undefined8 *)(param_1 + 0x90);
      uStack_5a0 = *(undefined8 *)(param_1 + 0x88);
      uStack_5f8 = *(undefined8 *)(param_1 + 0x30);
      uStack_600 = *(undefined8 *)(param_1 + 0x28);
      uStack_5e8 = *(undefined8 *)(param_1 + 0x40);
      uStack_5f0 = *(undefined8 *)(param_1 + 0x38);
      uStack_5d8 = *(undefined8 *)(param_1 + 0x50);
      uStack_5e0 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_638;
      *(undefined8 *)(param_1 + 0xd8) = uStack_640;
      *(undefined8 *)(param_1 + 0xf0) = uStack_628;
      *(undefined8 *)(param_1 + 0xe8) = uStack_630;
      *(undefined8 *)(param_1 + 0x100) = uStack_618;
      *(undefined8 *)(param_1 + 0xf8) = uStack_620;
      *(undefined8 *)(param_1 + 0xa0) = uStack_678;
      *(undefined8 *)(param_1 + 0x98) = uStack_680;
      *(undefined8 *)(param_1 + 0xb0) = uStack_668;
      *(undefined8 *)(param_1 + 0xa8) = uStack_670;
      *(undefined8 *)(param_1 + 0xc0) = uStack_658;
      *(undefined8 *)(param_1 + 0xb8) = uStack_660;
      *(undefined8 *)(param_1 + 0xd0) = uStack_648;
      *(undefined8 *)(param_1 + 200) = uStack_650;
      *(undefined8 *)(param_1 + 0x60) = uStack_6b8;
      *(undefined8 *)(param_1 + 0x58) = uStack_6c0;
      *(undefined8 *)(param_1 + 0x70) = uStack_6a8;
      *(undefined8 *)(param_1 + 0x68) = uStack_6b0;
      *(undefined8 *)(param_1 + 0x80) = uStack_698;
      *(undefined8 *)(param_1 + 0x78) = uStack_6a0;
      *(undefined8 *)(param_1 + 0x90) = uStack_688;
      *(undefined8 *)(param_1 + 0x88) = uStack_690;
      *(undefined8 *)(param_1 + 0x30) = uStack_6e8;
      *(undefined8 *)(param_1 + 0x28) = uStack_6f0;
      *(undefined8 *)(param_1 + 0x40) = uStack_6d8;
      *(undefined8 *)(param_1 + 0x38) = uStack_6e0;
      uStack_520 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_610;
      *(undefined8 *)(param_1 + 0x50) = uStack_6c8;
      *(undefined8 *)(param_1 + 0x48) = uStack_6d0;
      uVar5 = 0x112fc9888;
      puVar6 = &UNK_10dc38d08;
      puVar2 = &uStack_600;
      goto LAB_1039fd144;
    }
  }
  uVar5 = 0x112fca6a0;
  puVar6 = &UNK_10dc3aa48;
  puVar2 = &uStack_3b0;
LAB_1039fd144:
  func_0x000103a17eac(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1039fd3b0; end: 1039fd883;  */

/* WARNING: Removing unreachable block (ram,0x0001039fd6e4) */

void FUN_1039fd3b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined4 uVar6;
  ushort uVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  long unaff_x21;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  undefined8 uStack_530;
  undefined4 uStack_528;
  undefined1 uStack_524;
  undefined1 uStack_523;
  undefined2 uStack_522;
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
  undefined1 uStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
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
  undefined1 uStack_380;
  long lStack_370;
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
  undefined1 uStack_290;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  undefined6 uStack_268;
  undefined2 uStack_262;
  undefined4 uStack_260;
  ushort uStack_25c;
  long lStack_250;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_260 = 0;
  uStack_25c = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  uStack_268 = 0;
  uStack_262 = 0;
  lStack_270 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar9 = &lStack_250;
  func_0x000103a0db40();
  iVar8 = (int)plVar9;
  if (iVar8 != 1) {
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    uStack_290 = uStack_80;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_328 = uStack_118;
    uStack_330 = uStack_120;
    uStack_318 = uStack_108;
    uStack_320 = uStack_110;
    uStack_308 = uStack_f8;
    uStack_310 = uStack_100;
    uStack_2f8 = uStack_e8;
    uStack_300 = uStack_f0;
    uStack_368 = uStack_158;
    lStack_370 = lStack_160;
    uStack_358 = uStack_148;
    uStack_360 = uStack_150;
    uStack_348 = uStack_138;
    uStack_350 = uStack_140;
    uStack_338 = uStack_128;
    uStack_340 = uStack_130;
    plVar9 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar9 == 0xf) {
      plVar9 = &lStack_370;
      func_0x000103a0df24();
      lVar10 = plVar9[2];
      lVar1 = plVar9[3];
      lVar5 = plVar9[4];
      bVar2 = *(byte *)((long)plVar9 + 0x24);
      bVar3 = *(byte *)((long)plVar9 + 0x25);
      lVar13 = plVar9[1];
      lVar12 = *plVar9;
      lStack_458 = uStack_248;
      lStack_460 = lStack_250;
      uStack_448 = uStack_238;
      lStack_450 = uStack_240;
      uStack_418 = uStack_208;
      uStack_420 = uStack_210;
      uStack_408 = uStack_1f8;
      uStack_410 = uStack_200;
      uStack_438 = uStack_228;
      uStack_440 = uStack_230;
      uStack_428 = uStack_218;
      uStack_430 = uStack_220;
      uStack_3d8 = uStack_1c8;
      uStack_3e0 = uStack_1d0;
      uStack_3c8 = uStack_1b8;
      uStack_3d0 = uStack_1c0;
      uStack_3f8 = uStack_1e8;
      uStack_400 = uStack_1f0;
      uStack_3e8 = uStack_1d8;
      uStack_3f0 = uStack_1e0;
      uStack_380 = uStack_170;
      uStack_398 = uStack_188;
      uStack_3a0 = uStack_190;
      uStack_388 = uStack_178;
      uStack_390 = uStack_180;
      uStack_3b8 = uStack_1a8;
      uStack_3c0 = uStack_1b0;
      uStack_3a8 = uStack_198;
      uStack_3b0 = uStack_1a0;
      func_0x000103a0db60(&lStack_460,&lStack_548);
      plVar9 = (long *)0x0;
      func_0x000103a17ccc(0,0,0,0,0);
      uStack_268 = (undefined6)lVar1;
      uStack_262 = (undefined2)((ulong)lVar1 >> 0x30);
      lStack_280 = lVar12;
      lStack_278 = lVar13;
      lStack_270 = lVar10;
      uStack_260 = (int)lVar5;
      uStack_25c = (ushort)(((ulong)bVar3 << 0x28) >> 0x20) | (ushort)bVar2;
    }
  }
  pcVar11 = *(code **)(param_4 + 0x198);
  func_0x000103a13510();
  (*pcVar11)(&lStack_280,&UNK_1106bea30,plVar9,param_3,param_4);
  uVar7 = uStack_25c;
  uVar6 = uStack_260;
  lVar5 = lStack_270;
  lVar1 = lStack_278;
  lVar10 = lStack_280;
  uVar4 = CONCAT26(uStack_262,uStack_268);
  if (unaff_x21 == 0) {
    if (lStack_280 != 0) {
      if (iVar8 == 1) {
        func_0x000107c61434(lStack_280);
        func_0x000107c61434(lVar1);
        func_0x00010006c00c(lVar5,uVar4);
      }
      else {
        pcVar11 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_280);
        func_0x000107c61434(lVar1);
        func_0x00010006c00c(lVar5,uVar4);
        (*pcVar11)(param_3,param_4);
      }
      func_0x000103a17ccc(lStack_280,lStack_278,lStack_270,CONCAT26(uStack_262,uStack_268),
                          (ulong)CONCAT24(uStack_25c,uStack_260));
      lStack_548 = lVar10;
      lStack_540 = lVar1;
      lStack_538 = lVar5;
      uStack_528 = uVar6;
      uStack_530 = uVar4;
      uStack_524 = (char)uVar7;
      uStack_523 = (char)(uVar7 >> 8);
      func_0x000103a0df28(&lStack_548);
      uStack_398 = uStack_480;
      uStack_3a0 = uStack_488;
      uStack_388 = uStack_470;
      uStack_390 = uStack_478;
      uStack_380 = uStack_468;
      uStack_3d8 = uStack_4c0;
      uStack_3e0 = uStack_4c8;
      uStack_3c8 = uStack_4b0;
      uStack_3d0 = uStack_4b8;
      uStack_3b8 = uStack_4a0;
      uStack_3c0 = uStack_4a8;
      uStack_3a8 = uStack_490;
      uStack_3b0 = uStack_498;
      uStack_418 = uStack_500;
      uStack_420 = uStack_508;
      uStack_408 = uStack_4f0;
      uStack_410 = uStack_4f8;
      uStack_3f8 = uStack_4e0;
      uStack_400 = uStack_4e8;
      uStack_3e8 = uStack_4d0;
      uStack_3f0 = uStack_4d8;
      lStack_458 = lStack_540;
      lStack_460 = lStack_548;
      uStack_448 = uStack_530;
      lStack_450 = lStack_538;
      uStack_440 = CONCAT26(uStack_522,CONCAT15(uStack_523,CONCAT14(uStack_524,uStack_528)));
      uStack_438 = uStack_520;
      uStack_428 = uStack_510;
      uStack_430 = uStack_518;
      func_0x000103a0db9c(&lStack_460);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_2b0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_298 = *(undefined8 *)(param_1 + 0x100);
      uStack_2a0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_2f8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_300 = *(undefined8 *)(param_1 + 0x98);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2d8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2d0 = *(undefined8 *)(param_1 + 200);
      uStack_338 = *(undefined8 *)(param_1 + 0x60);
      uStack_340 = *(undefined8 *)(param_1 + 0x58);
      uStack_328 = *(undefined8 *)(param_1 + 0x70);
      uStack_330 = *(undefined8 *)(param_1 + 0x68);
      uStack_318 = *(undefined8 *)(param_1 + 0x80);
      uStack_320 = *(undefined8 *)(param_1 + 0x78);
      uStack_308 = *(undefined8 *)(param_1 + 0x90);
      uStack_310 = *(undefined8 *)(param_1 + 0x88);
      uStack_368 = *(undefined8 *)(param_1 + 0x30);
      lStack_370 = *(long *)(param_1 + 0x28);
      uStack_358 = *(undefined8 *)(param_1 + 0x40);
      uStack_360 = *(undefined8 *)(param_1 + 0x38);
      uStack_348 = *(undefined8 *)(param_1 + 0x50);
      uStack_350 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_398;
      *(undefined8 *)(param_1 + 0xe8) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x100) = uStack_388;
      *(undefined8 *)(param_1 + 0xf8) = uStack_390;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x98) = uStack_3f0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3d8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3b8;
      *(undefined8 *)(param_1 + 200) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x60) = uStack_428;
      *(undefined8 *)(param_1 + 0x58) = uStack_430;
      *(undefined8 *)(param_1 + 0x70) = uStack_418;
      *(undefined8 *)(param_1 + 0x68) = uStack_420;
      *(undefined8 *)(param_1 + 0x80) = uStack_408;
      *(undefined8 *)(param_1 + 0x78) = uStack_410;
      *(undefined8 *)(param_1 + 0x90) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x88) = uStack_400;
      *(long *)(param_1 + 0x30) = lStack_458;
      *(long *)(param_1 + 0x28) = lStack_460;
      *(undefined8 *)(param_1 + 0x40) = uStack_448;
      *(long *)(param_1 + 0x38) = lStack_450;
      uStack_290 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_380;
      *(undefined8 *)(param_1 + 0x50) = uStack_438;
      *(undefined8 *)(param_1 + 0x48) = uStack_440;
      func_0x000103a17eac(&lStack_370,0x112fc9888,&UNK_10dc38d08);
      return;
    }
    lVar10 = 0;
  }
  func_0x000103a17ccc(lVar10,lStack_278,lStack_270,uVar4,(ulong)CONCAT24(uStack_25c,uStack_260));
  return;
}



/* Entry: 1039fd884; end: 1039fd917;  */

void FUN_1039fd884(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = param_2 + 0x10;
  func_0x000107c61428(lVar1,auStack_58,0x21,0);
  pcVar2 = *(code **)(param_4 + 0x198);
  func_0x000103a1360c();
  (*pcVar2)(param_2 + 0x10,&UNK_1106beac0,lVar1,param_3,param_4);
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 1039fd918; end: 1039fdd37;  */

/* WARNING: Removing unreachable block (ram,0x0001039fdbc4) */

void FUN_1039fd918(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
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
  undefined1 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_360;
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
  undefined1 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
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
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  uStack_260 = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  uStack_250 = *(undefined8 *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  uStack_160 = *(undefined8 *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = &uStack_250;
  func_0x000103a0db40();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_270 = uStack_80;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_348 = uStack_158;
    uStack_350 = uStack_160;
    uStack_338 = uStack_148;
    uStack_340 = uStack_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    uStack_318 = uStack_128;
    uStack_320 = uStack_130;
    puVar2 = &uStack_160;
    func_0x000103a0db54();
    if ((int)puVar2 == 0x10) {
      puVar2 = &uStack_350;
      func_0x000103a0df54();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_3f8 = uStack_208;
      uStack_400 = uStack_210;
      uStack_3e8 = uStack_1f8;
      uStack_3f0 = uStack_200;
      uStack_418 = uStack_228;
      uStack_420 = uStack_230;
      uStack_408 = uStack_218;
      uStack_410 = uStack_220;
      uStack_3b8 = uStack_1c8;
      uStack_3c0 = uStack_1d0;
      uStack_3a8 = uStack_1b8;
      uStack_3b0 = uStack_1c0;
      uStack_3d8 = uStack_1e8;
      uStack_3e0 = uStack_1f0;
      uStack_3c8 = uStack_1d8;
      uStack_3d0 = uStack_1e0;
      uStack_360 = uStack_170;
      uStack_378 = uStack_188;
      uStack_380 = uStack_190;
      uStack_368 = uStack_178;
      uStack_370 = uStack_180;
      uStack_398 = uStack_1a8;
      uStack_3a0 = uStack_1b0;
      uStack_388 = uStack_198;
      uStack_390 = uStack_1a0;
      uStack_438 = uStack_248;
      uStack_440 = uStack_250;
      uStack_428 = uStack_238;
      lStack_430 = uStack_240;
      func_0x000103a0db60(&uStack_440,&uStack_528);
      puVar2 = (undefined8 *)0x0;
      func_0x000103a17d14(0,0,0);
      uStack_268 = uVar5;
      uStack_260 = uVar6;
      lStack_258 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103a13708();
  (*pcVar4)(&uStack_268,&UNK_1106beb48,puVar2,param_3,param_4);
  lVar3 = lStack_258;
  uVar6 = uStack_260;
  uVar5 = uStack_268;
  if (unaff_x21 == 0) {
    if (lStack_258 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      func_0x000103a17d14(uStack_268,uStack_260,lStack_258);
      uStack_528 = uVar5;
      uStack_520 = uVar6;
      lStack_518 = lVar3;
      func_0x000103a0df58(&uStack_528);
      uStack_378 = uStack_460;
      uStack_380 = uStack_468;
      uStack_368 = uStack_450;
      uStack_370 = uStack_458;
      uStack_360 = uStack_448;
      uStack_3b8 = uStack_4a0;
      uStack_3c0 = uStack_4a8;
      uStack_3a8 = uStack_490;
      uStack_3b0 = uStack_498;
      uStack_398 = uStack_480;
      uStack_3a0 = uStack_488;
      uStack_388 = uStack_470;
      uStack_390 = uStack_478;
      uStack_3f8 = uStack_4e0;
      uStack_400 = uStack_4e8;
      uStack_3e8 = uStack_4d0;
      uStack_3f0 = uStack_4d8;
      uStack_3d8 = uStack_4c0;
      uStack_3e0 = uStack_4c8;
      uStack_3c8 = uStack_4b0;
      uStack_3d0 = uStack_4b8;
      uStack_438 = uStack_520;
      uStack_440 = uStack_528;
      uStack_428 = uStack_510;
      lStack_430 = lStack_518;
      uStack_418 = uStack_500;
      uStack_420 = uStack_508;
      uStack_408 = uStack_4f0;
      uStack_410 = uStack_4f8;
      func_0x000103a0db9c(&uStack_440);
      uStack_298 = *(undefined8 *)(param_1 + 0xe0);
      uStack_2a0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_288 = *(undefined8 *)(param_1 + 0xf0);
      uStack_290 = *(undefined8 *)(param_1 + 0xe8);
      uStack_278 = *(undefined8 *)(param_1 + 0x100);
      uStack_280 = *(undefined8 *)(param_1 + 0xf8);
      uStack_2d8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x98);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2b0 = *(undefined8 *)(param_1 + 200);
      uStack_318 = *(undefined8 *)(param_1 + 0x60);
      uStack_320 = *(undefined8 *)(param_1 + 0x58);
      uStack_308 = *(undefined8 *)(param_1 + 0x70);
      uStack_310 = *(undefined8 *)(param_1 + 0x68);
      uStack_2f8 = *(undefined8 *)(param_1 + 0x80);
      uStack_300 = *(undefined8 *)(param_1 + 0x78);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x88);
      uStack_348 = *(undefined8 *)(param_1 + 0x30);
      uStack_350 = *(undefined8 *)(param_1 + 0x28);
      uStack_338 = *(undefined8 *)(param_1 + 0x40);
      uStack_340 = *(undefined8 *)(param_1 + 0x38);
      uStack_328 = *(undefined8 *)(param_1 + 0x50);
      uStack_330 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_388;
      *(undefined8 *)(param_1 + 0xd8) = uStack_390;
      *(undefined8 *)(param_1 + 0xf0) = uStack_378;
      *(undefined8 *)(param_1 + 0xe8) = uStack_380;
      *(undefined8 *)(param_1 + 0x100) = uStack_368;
      *(undefined8 *)(param_1 + 0xf8) = uStack_370;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_398;
      *(undefined8 *)(param_1 + 200) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x60) = uStack_408;
      *(undefined8 *)(param_1 + 0x58) = uStack_410;
      *(undefined8 *)(param_1 + 0x70) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x68) = uStack_400;
      *(undefined8 *)(param_1 + 0x80) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x90) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e0;
      *(undefined8 *)(param_1 + 0x30) = uStack_438;
      *(undefined8 *)(param_1 + 0x28) = uStack_440;
      *(undefined8 *)(param_1 + 0x40) = uStack_428;
      *(long *)(param_1 + 0x38) = lStack_430;
      uStack_270 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_360;
      *(undefined8 *)(param_1 + 0x50) = uStack_418;
      *(undefined8 *)(param_1 + 0x48) = uStack_420;
      func_0x000103a17eac(&uStack_350,0x112fc9888,&UNK_10dc38d08);
      return;
    }
    lVar3 = 0;
  }
  func_0x000103a17d14(uStack_268,uStack_260,lVar3);
  return;
}



/* Entry: 1039fdd38; end: 1039fe157;  */

/* WARNING: Removing unreachable block (ram,0x0001039fdfe4) */

void FUN_1039fdd38(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uStack_528;
  undefined8 uStack_520;
  long lStack_518;
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
  undefined1 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  long lStack_430;
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
  undefined1 uStack_360;
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
  undefined1 uStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  long lStack_258;
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
  undefined1 uStack_170;
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
  undefined1 uStack_80;
  
  uStack_260 = 0;
  uStack_268 = 0;
  lStack_258 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  uStack_250 = *(undefined8 *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  uStack_160 = *(undefined8 *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = &uStack_250;
  func_0x000103a0db40();
  iVar1 = (int)puVar2;
  if (iVar1 != 1) {
    uStack_288 = uStack_98;
    uStack_290 = uStack_a0;
    uStack_278 = uStack_88;
    uStack_280 = uStack_90;
    uStack_270 = uStack_80;
    uStack_2c8 = uStack_d8;
    uStack_2d0 = uStack_e0;
    uStack_2b8 = uStack_c8;
    uStack_2c0 = uStack_d0;
    uStack_2a8 = uStack_b8;
    uStack_2b0 = uStack_c0;
    uStack_298 = uStack_a8;
    uStack_2a0 = uStack_b0;
    uStack_308 = uStack_118;
    uStack_310 = uStack_120;
    uStack_2f8 = uStack_108;
    uStack_300 = uStack_110;
    uStack_2e8 = uStack_f8;
    uStack_2f0 = uStack_100;
    uStack_2d8 = uStack_e8;
    uStack_2e0 = uStack_f0;
    uStack_348 = uStack_158;
    uStack_350 = uStack_160;
    uStack_338 = uStack_148;
    uStack_340 = uStack_150;
    uStack_328 = uStack_138;
    uStack_330 = uStack_140;
    uStack_318 = uStack_128;
    uStack_320 = uStack_130;
    puVar2 = &uStack_160;
    func_0x000103a0db54();
    if ((int)puVar2 == 0x11) {
      puVar2 = &uStack_350;
      func_0x000103a0df84();
      uVar6 = puVar2[1];
      uVar5 = *puVar2;
      lVar3 = puVar2[2];
      uStack_3f8 = uStack_208;
      uStack_400 = uStack_210;
      uStack_3e8 = uStack_1f8;
      uStack_3f0 = uStack_200;
      uStack_418 = uStack_228;
      uStack_420 = uStack_230;
      uStack_408 = uStack_218;
      uStack_410 = uStack_220;
      uStack_3b8 = uStack_1c8;
      uStack_3c0 = uStack_1d0;
      uStack_3a8 = uStack_1b8;
      uStack_3b0 = uStack_1c0;
      uStack_3d8 = uStack_1e8;
      uStack_3e0 = uStack_1f0;
      uStack_3c8 = uStack_1d8;
      uStack_3d0 = uStack_1e0;
      uStack_360 = uStack_170;
      uStack_378 = uStack_188;
      uStack_380 = uStack_190;
      uStack_368 = uStack_178;
      uStack_370 = uStack_180;
      uStack_398 = uStack_1a8;
      uStack_3a0 = uStack_1b0;
      uStack_388 = uStack_198;
      uStack_390 = uStack_1a0;
      uStack_438 = uStack_248;
      uStack_440 = uStack_250;
      uStack_428 = uStack_238;
      lStack_430 = uStack_240;
      func_0x000103a0db60(&uStack_440,&uStack_528);
      puVar2 = (undefined8 *)0x0;
      func_0x000103a17d14(0,0,0);
      uStack_268 = uVar5;
      uStack_260 = uVar6;
      lStack_258 = lVar3;
    }
  }
  pcVar4 = *(code **)(param_4 + 0x198);
  func_0x000103a13804();
  (*pcVar4)(&uStack_268,&UNK_1106bebc8,puVar2,param_3,param_4);
  lVar3 = lStack_258;
  uVar6 = uStack_260;
  uVar5 = uStack_268;
  if (unaff_x21 == 0) {
    if (lStack_258 != 0) {
      if (iVar1 == 1) {
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
      }
      else {
        pcVar4 = *(code **)(param_4 + 8);
        func_0x00010006c00c();
        func_0x000107c6157c(lVar3);
        (*pcVar4)(param_3,param_4);
      }
      func_0x000103a17d14(uStack_268,uStack_260,lStack_258);
      uStack_528 = uVar5;
      uStack_520 = uVar6;
      lStack_518 = lVar3;
      func_0x000103a0df88(&uStack_528);
      uStack_378 = uStack_460;
      uStack_380 = uStack_468;
      uStack_368 = uStack_450;
      uStack_370 = uStack_458;
      uStack_360 = uStack_448;
      uStack_3b8 = uStack_4a0;
      uStack_3c0 = uStack_4a8;
      uStack_3a8 = uStack_490;
      uStack_3b0 = uStack_498;
      uStack_398 = uStack_480;
      uStack_3a0 = uStack_488;
      uStack_388 = uStack_470;
      uStack_390 = uStack_478;
      uStack_3f8 = uStack_4e0;
      uStack_400 = uStack_4e8;
      uStack_3e8 = uStack_4d0;
      uStack_3f0 = uStack_4d8;
      uStack_3d8 = uStack_4c0;
      uStack_3e0 = uStack_4c8;
      uStack_3c8 = uStack_4b0;
      uStack_3d0 = uStack_4b8;
      uStack_438 = uStack_520;
      uStack_440 = uStack_528;
      uStack_428 = uStack_510;
      lStack_430 = lStack_518;
      uStack_418 = uStack_500;
      uStack_420 = uStack_508;
      uStack_408 = uStack_4f0;
      uStack_410 = uStack_4f8;
      func_0x000103a0db9c(&uStack_440);
      uStack_298 = *(undefined8 *)(param_1 + 0xe0);
      uStack_2a0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_288 = *(undefined8 *)(param_1 + 0xf0);
      uStack_290 = *(undefined8 *)(param_1 + 0xe8);
      uStack_278 = *(undefined8 *)(param_1 + 0x100);
      uStack_280 = *(undefined8 *)(param_1 + 0xf8);
      uStack_2d8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_2e0 = *(undefined8 *)(param_1 + 0x98);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2d0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2b0 = *(undefined8 *)(param_1 + 200);
      uStack_318 = *(undefined8 *)(param_1 + 0x60);
      uStack_320 = *(undefined8 *)(param_1 + 0x58);
      uStack_308 = *(undefined8 *)(param_1 + 0x70);
      uStack_310 = *(undefined8 *)(param_1 + 0x68);
      uStack_2f8 = *(undefined8 *)(param_1 + 0x80);
      uStack_300 = *(undefined8 *)(param_1 + 0x78);
      uStack_2e8 = *(undefined8 *)(param_1 + 0x90);
      uStack_2f0 = *(undefined8 *)(param_1 + 0x88);
      uStack_348 = *(undefined8 *)(param_1 + 0x30);
      uStack_350 = *(undefined8 *)(param_1 + 0x28);
      uStack_338 = *(undefined8 *)(param_1 + 0x40);
      uStack_340 = *(undefined8 *)(param_1 + 0x38);
      uStack_328 = *(undefined8 *)(param_1 + 0x50);
      uStack_330 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_388;
      *(undefined8 *)(param_1 + 0xd8) = uStack_390;
      *(undefined8 *)(param_1 + 0xf0) = uStack_378;
      *(undefined8 *)(param_1 + 0xe8) = uStack_380;
      *(undefined8 *)(param_1 + 0x100) = uStack_368;
      *(undefined8 *)(param_1 + 0xf8) = uStack_370;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3b8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3c0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_398;
      *(undefined8 *)(param_1 + 200) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x60) = uStack_408;
      *(undefined8 *)(param_1 + 0x58) = uStack_410;
      *(undefined8 *)(param_1 + 0x70) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x68) = uStack_400;
      *(undefined8 *)(param_1 + 0x80) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x78) = uStack_3f0;
      *(undefined8 *)(param_1 + 0x90) = uStack_3d8;
      *(undefined8 *)(param_1 + 0x88) = uStack_3e0;
      *(undefined8 *)(param_1 + 0x30) = uStack_438;
      *(undefined8 *)(param_1 + 0x28) = uStack_440;
      *(undefined8 *)(param_1 + 0x40) = uStack_428;
      *(long *)(param_1 + 0x38) = lStack_430;
      uStack_270 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_360;
      *(undefined8 *)(param_1 + 0x50) = uStack_418;
      *(undefined8 *)(param_1 + 0x48) = uStack_420;
      func_0x000103a17eac(&uStack_350,0x112fc9888,&UNK_10dc38d08);
      return;
    }
    lVar3 = 0;
  }
  func_0x000103a17d14(uStack_268,uStack_260,lVar3);
  return;
}



/* Entry: 1039fe158; end: 1039fe5db;  */

/* WARNING: Removing unreachable block (ram,0x0001039fe454) */

void FUN_1039fe158(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  undefined1 uVar3;
  int iVar4;
  long *plVar5;
  long lVar6;
  long unaff_x21;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lStack_548;
  long lStack_540;
  long lStack_538;
  long lStack_530;
  undefined1 uStack_528;
  undefined7 uStack_527;
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
  undefined1 uStack_468;
  long lStack_460;
  long lStack_458;
  long lStack_450;
  long lStack_448;
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
  undefined1 uStack_380;
  long lStack_370;
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
  undefined1 uStack_290;
  long lStack_280;
  long lStack_278;
  long lStack_270;
  long lStack_268;
  undefined1 uStack_260;
  long lStack_250;
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
  undefined1 uStack_170;
  long lStack_160;
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
  undefined1 uStack_80;
  
  uStack_260 = 0;
  lStack_278 = 0;
  lStack_280 = 0;
  lStack_268 = 0;
  lStack_270 = 0;
  uStack_198 = *(undefined8 *)(param_1 + 0xe0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_188 = *(undefined8 *)(param_1 + 0xf0);
  uStack_190 = *(undefined8 *)(param_1 + 0xe8);
  uStack_178 = *(undefined8 *)(param_1 + 0x100);
  uStack_180 = *(undefined8 *)(param_1 + 0xf8);
  uStack_170 = *(undefined1 *)(param_1 + 0x108);
  uStack_1d8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1c8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1d0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_1b0 = *(undefined8 *)(param_1 + 200);
  uStack_218 = *(undefined8 *)(param_1 + 0x60);
  uStack_220 = *(undefined8 *)(param_1 + 0x58);
  uStack_208 = *(undefined8 *)(param_1 + 0x70);
  uStack_210 = *(undefined8 *)(param_1 + 0x68);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x80);
  uStack_200 = *(undefined8 *)(param_1 + 0x78);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x88);
  uStack_248 = *(undefined8 *)(param_1 + 0x30);
  lStack_250 = *(long *)(param_1 + 0x28);
  uStack_238 = *(undefined8 *)(param_1 + 0x40);
  uStack_240 = *(undefined8 *)(param_1 + 0x38);
  uStack_228 = *(undefined8 *)(param_1 + 0x50);
  uStack_230 = *(undefined8 *)(param_1 + 0x48);
  uStack_a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_98 = *(undefined8 *)(param_1 + 0xf0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xe8);
  uStack_88 = *(undefined8 *)(param_1 + 0x100);
  uStack_90 = *(undefined8 *)(param_1 + 0xf8);
  uStack_80 = *(undefined1 *)(param_1 + 0x108);
  uStack_e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_c0 = *(undefined8 *)(param_1 + 200);
  uStack_128 = *(undefined8 *)(param_1 + 0x60);
  uStack_130 = *(undefined8 *)(param_1 + 0x58);
  uStack_118 = *(undefined8 *)(param_1 + 0x70);
  uStack_120 = *(undefined8 *)(param_1 + 0x68);
  uStack_108 = *(undefined8 *)(param_1 + 0x80);
  uStack_110 = *(undefined8 *)(param_1 + 0x78);
  uStack_f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_100 = *(undefined8 *)(param_1 + 0x88);
  uStack_158 = *(undefined8 *)(param_1 + 0x30);
  lStack_160 = *(long *)(param_1 + 0x28);
  uStack_148 = *(undefined8 *)(param_1 + 0x40);
  uStack_150 = *(undefined8 *)(param_1 + 0x38);
  uStack_138 = *(undefined8 *)(param_1 + 0x50);
  uStack_140 = *(undefined8 *)(param_1 + 0x48);
  plVar5 = &lStack_250;
  func_0x000103a0db40();
  iVar4 = (int)plVar5;
  if (iVar4 != 1) {
    uStack_2a8 = uStack_98;
    uStack_2b0 = uStack_a0;
    uStack_298 = uStack_88;
    uStack_2a0 = uStack_90;
    uStack_290 = uStack_80;
    uStack_2e8 = uStack_d8;
    uStack_2f0 = uStack_e0;
    uStack_2d8 = uStack_c8;
    uStack_2e0 = uStack_d0;
    uStack_2c8 = uStack_b8;
    uStack_2d0 = uStack_c0;
    uStack_2b8 = uStack_a8;
    uStack_2c0 = uStack_b0;
    uStack_328 = uStack_118;
    uStack_330 = uStack_120;
    uStack_318 = uStack_108;
    uStack_320 = uStack_110;
    uStack_308 = uStack_f8;
    uStack_310 = uStack_100;
    uStack_2f8 = uStack_e8;
    uStack_300 = uStack_f0;
    uStack_368 = uStack_158;
    lStack_370 = lStack_160;
    uStack_358 = uStack_148;
    uStack_360 = uStack_150;
    uStack_348 = uStack_138;
    uStack_350 = uStack_140;
    uStack_338 = uStack_128;
    uStack_340 = uStack_130;
    plVar5 = &lStack_160;
    func_0x000103a0db54();
    if ((int)plVar5 == 0x12) {
      plVar5 = &lStack_370;
      func_0x000103a0df94();
      lVar6 = plVar5[2];
      lVar1 = plVar5[3];
      lVar2 = plVar5[4];
      lVar9 = plVar5[1];
      lVar8 = *plVar5;
      uStack_418 = uStack_208;
      uStack_420 = uStack_210;
      uStack_408 = uStack_1f8;
      uStack_410 = uStack_200;
      uStack_438 = uStack_228;
      uStack_440 = uStack_230;
      uStack_428 = uStack_218;
      uStack_430 = uStack_220;
      uStack_3d8 = uStack_1c8;
      uStack_3e0 = uStack_1d0;
      uStack_3c8 = uStack_1b8;
      uStack_3d0 = uStack_1c0;
      uStack_3f8 = uStack_1e8;
      uStack_400 = uStack_1f0;
      uStack_3e8 = uStack_1d8;
      uStack_3f0 = uStack_1e0;
      uStack_380 = uStack_170;
      uStack_398 = uStack_188;
      uStack_3a0 = uStack_190;
      uStack_388 = uStack_178;
      uStack_390 = uStack_180;
      uStack_3b8 = uStack_1a8;
      uStack_3c0 = uStack_1b0;
      uStack_3a8 = uStack_198;
      uStack_3b0 = uStack_1a0;
      lStack_458 = uStack_248;
      lStack_460 = lStack_250;
      lStack_448 = uStack_238;
      lStack_450 = uStack_240;
      func_0x000103a0db60(&lStack_460,&lStack_548);
      plVar5 = (long *)0x0;
      func_0x000103a17d40(0,0,0,0,0);
      lStack_280 = lVar8;
      lStack_278 = lVar9;
      lStack_270 = lVar6;
      lStack_268 = lVar1;
      uStack_260 = (char)lVar2;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000103a13900();
  (*pcVar7)(&lStack_280,&UNK_1106bec48,plVar5,param_3,param_4);
  uVar3 = uStack_260;
  lVar8 = lStack_268;
  lVar2 = lStack_270;
  lVar1 = lStack_278;
  lVar6 = lStack_280;
  if (unaff_x21 == 0) {
    if (lStack_280 != 0) {
      if (iVar4 == 1) {
        func_0x000107c61434(lStack_280);
        func_0x000107c61434(lVar1);
        func_0x00010006c00c(lVar2,lVar8);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        func_0x000107c61434(lStack_280);
        func_0x000107c61434(lVar1);
        func_0x00010006c00c(lVar2,lVar8);
        (*pcVar7)(param_3,param_4);
      }
      func_0x000103a17d40(lStack_280,lStack_278,lStack_270,lStack_268,uStack_260);
      lStack_548 = lVar6;
      lStack_540 = lVar1;
      lStack_538 = lVar2;
      lStack_530 = lVar8;
      uStack_528 = uVar3;
      func_0x000103a0df98(&lStack_548);
      uStack_398 = uStack_480;
      uStack_3a0 = uStack_488;
      uStack_388 = uStack_470;
      uStack_390 = uStack_478;
      uStack_380 = uStack_468;
      uStack_3d8 = uStack_4c0;
      uStack_3e0 = uStack_4c8;
      uStack_3c8 = uStack_4b0;
      uStack_3d0 = uStack_4b8;
      uStack_3b8 = uStack_4a0;
      uStack_3c0 = uStack_4a8;
      uStack_3a8 = uStack_490;
      uStack_3b0 = uStack_498;
      uStack_418 = uStack_500;
      uStack_420 = uStack_508;
      uStack_408 = uStack_4f0;
      uStack_410 = uStack_4f8;
      uStack_3f8 = uStack_4e0;
      uStack_400 = uStack_4e8;
      uStack_3e8 = uStack_4d0;
      uStack_3f0 = uStack_4d8;
      lStack_458 = lStack_540;
      lStack_460 = lStack_548;
      lStack_448 = lStack_530;
      lStack_450 = lStack_538;
      uStack_440 = CONCAT71(uStack_527,uStack_528);
      uStack_438 = uStack_520;
      uStack_428 = uStack_510;
      uStack_430 = uStack_518;
      func_0x000103a0db9c(&lStack_460);
      uStack_2b8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_2c0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_2a8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_2b0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_298 = *(undefined8 *)(param_1 + 0x100);
      uStack_2a0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_2f8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_300 = *(undefined8 *)(param_1 + 0x98);
      uStack_2e8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_2f0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_2d8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_2e0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_2c8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_2d0 = *(undefined8 *)(param_1 + 200);
      uStack_338 = *(undefined8 *)(param_1 + 0x60);
      uStack_340 = *(undefined8 *)(param_1 + 0x58);
      uStack_328 = *(undefined8 *)(param_1 + 0x70);
      uStack_330 = *(undefined8 *)(param_1 + 0x68);
      uStack_318 = *(undefined8 *)(param_1 + 0x80);
      uStack_320 = *(undefined8 *)(param_1 + 0x78);
      uStack_308 = *(undefined8 *)(param_1 + 0x90);
      uStack_310 = *(undefined8 *)(param_1 + 0x88);
      uStack_368 = *(undefined8 *)(param_1 + 0x30);
      lStack_370 = *(long *)(param_1 + 0x28);
      uStack_358 = *(undefined8 *)(param_1 + 0x40);
      uStack_360 = *(undefined8 *)(param_1 + 0x38);
      uStack_348 = *(undefined8 *)(param_1 + 0x50);
      uStack_350 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_3a8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_3b0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_398;
      *(undefined8 *)(param_1 + 0xe8) = uStack_3a0;
      *(undefined8 *)(param_1 + 0x100) = uStack_388;
      *(undefined8 *)(param_1 + 0xf8) = uStack_390;
      *(undefined8 *)(param_1 + 0xa0) = uStack_3e8;
      *(undefined8 *)(param_1 + 0x98) = uStack_3f0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_3d8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_3e0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_3c8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_3d0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_3b8;
      *(undefined8 *)(param_1 + 200) = uStack_3c0;
      *(undefined8 *)(param_1 + 0x60) = uStack_428;
      *(undefined8 *)(param_1 + 0x58) = uStack_430;
      *(undefined8 *)(param_1 + 0x70) = uStack_418;
      *(undefined8 *)(param_1 + 0x68) = uStack_420;
      *(undefined8 *)(param_1 + 0x80) = uStack_408;
      *(undefined8 *)(param_1 + 0x78) = uStack_410;
      *(undefined8 *)(param_1 + 0x90) = uStack_3f8;
      *(undefined8 *)(param_1 + 0x88) = uStack_400;
      *(long *)(param_1 + 0x30) = lStack_458;
      *(long *)(param_1 + 0x28) = lStack_460;
      *(long *)(param_1 + 0x40) = lStack_448;
      *(long *)(param_1 + 0x38) = lStack_450;
      uStack_290 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_380;
      *(undefined8 *)(param_1 + 0x50) = uStack_438;
      *(undefined8 *)(param_1 + 0x48) = uStack_440;
      func_0x000103a17eac(&lStack_370,0x112fc9888,&UNK_10dc38d08);
      return;
    }
    lVar6 = 0;
  }
  func_0x000103a17d40(lVar6,lStack_278,lStack_270,lStack_268,uStack_260);
  return;
}



/* Entry: 1039fe5dc; end: 1039fecd7;  */

/* WARNING: Removing unreachable block (ram,0x0001039feb2c) */

void FUN_1039fe5dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
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
  undefined1 uStack_750;
  undefined8 uStack_740;
  undefined8 uStack_738;
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined1 uStack_660;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
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
  undefined1 uStack_570;
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
  undefined1 uStack_150;
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
  undefined1 uStack_60;
  
  puVar4 = &uStack_830;
  func_0x000103a17d88(&uStack_2f8);
  uStack_318 = uStack_250;
  uStack_320 = uStack_258;
  uStack_308 = uStack_240;
  uStack_310 = uStack_248;
  uStack_300 = uStack_238;
  uStack_358 = uStack_290;
  uStack_360 = uStack_298;
  uStack_348 = uStack_280;
  uStack_350 = uStack_288;
  uStack_328 = uStack_260;
  uStack_330 = uStack_268;
  uStack_338 = uStack_270;
  uStack_340 = uStack_278;
  uStack_398 = uStack_2d0;
  uStack_3a0 = uStack_2d8;
  uStack_388 = uStack_2c0;
  uStack_390 = uStack_2c8;
  uStack_368 = uStack_2a0;
  uStack_370 = uStack_2a8;
  uStack_378 = uStack_2b0;
  uStack_380 = uStack_2b8;
  uStack_3a8 = uStack_2e0;
  uStack_3b0 = uStack_2e8;
  uStack_3b8 = uStack_2f0;
  uStack_3c0 = uStack_2f8;
  uStack_178 = *(undefined8 *)(param_1 + 0xe0);
  uStack_180 = *(undefined8 *)(param_1 + 0xd8);
  uStack_168 = *(undefined8 *)(param_1 + 0xf0);
  uStack_170 = *(undefined8 *)(param_1 + 0xe8);
  uStack_158 = *(undefined8 *)(param_1 + 0x100);
  uStack_160 = *(undefined8 *)(param_1 + 0xf8);
  uStack_150 = *(undefined1 *)(param_1 + 0x108);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_198 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_188 = *(undefined8 *)(param_1 + 0xd0);
  uStack_190 = *(undefined8 *)(param_1 + 200);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_200 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_228 = *(undefined8 *)(param_1 + 0x30);
  uStack_230 = *(undefined8 *)(param_1 + 0x28);
  uStack_218 = *(undefined8 *)(param_1 + 0x40);
  uStack_220 = *(undefined8 *)(param_1 + 0x38);
  uStack_208 = *(undefined8 *)(param_1 + 0x50);
  uStack_210 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = *(undefined8 *)(param_1 + 0xe0);
  uStack_90 = *(undefined8 *)(param_1 + 0xd8);
  uStack_78 = *(undefined8 *)(param_1 + 0xf0);
  uStack_80 = *(undefined8 *)(param_1 + 0xe8);
  uStack_68 = *(undefined8 *)(param_1 + 0x100);
  uStack_70 = *(undefined8 *)(param_1 + 0xf8);
  uStack_60 = *(undefined1 *)(param_1 + 0x108);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a0 = *(undefined8 *)(param_1 + 200);
  uStack_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_110 = *(undefined8 *)(param_1 + 0x58);
  uStack_f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  uStack_e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_e0 = *(undefined8 *)(param_1 + 0x88);
  uStack_138 = *(undefined8 *)(param_1 + 0x30);
  uStack_140 = *(undefined8 *)(param_1 + 0x28);
  uStack_128 = *(undefined8 *)(param_1 + 0x40);
  uStack_130 = *(undefined8 *)(param_1 + 0x38);
  uStack_118 = *(undefined8 *)(param_1 + 0x50);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = &uStack_230;
  func_0x000103a0db40();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_588 = uStack_78;
    uStack_590 = uStack_80;
    uStack_578 = uStack_68;
    uStack_580 = uStack_70;
    uStack_570 = uStack_60;
    uStack_5c8 = uStack_b8;
    uStack_5d0 = uStack_c0;
    uStack_5b8 = uStack_a8;
    uStack_5c0 = uStack_b0;
    uStack_5a8 = uStack_98;
    uStack_5b0 = uStack_a0;
    uStack_598 = uStack_88;
    uStack_5a0 = uStack_90;
    uStack_608 = uStack_f8;
    uStack_610 = uStack_100;
    uStack_5f8 = uStack_e8;
    uStack_600 = uStack_f0;
    uStack_5e8 = uStack_d8;
    uStack_5f0 = uStack_e0;
    uStack_5d8 = uStack_c8;
    uStack_5e0 = uStack_d0;
    uStack_648 = uStack_138;
    uStack_650 = uStack_140;
    uStack_638 = uStack_128;
    uStack_640 = uStack_130;
    uStack_628 = uStack_118;
    uStack_630 = uStack_120;
    uStack_618 = uStack_108;
    uStack_620 = uStack_110;
    puVar3 = &uStack_140;
    func_0x000103a0db54();
    if ((int)puVar3 == 0x13) {
      puVar3 = &uStack_650;
      func_0x000103a0dfa4();
      uStack_3e8 = uStack_318;
      uStack_3f0 = uStack_320;
      uStack_3d8 = uStack_308;
      uStack_3e0 = uStack_310;
      uStack_3d0 = uStack_300;
      uStack_418 = uStack_348;
      uStack_420 = uStack_350;
      uStack_3f8 = uStack_328;
      uStack_400 = uStack_330;
      uStack_408 = uStack_338;
      uStack_410 = uStack_340;
      uStack_468 = uStack_398;
      uStack_470 = uStack_3a0;
      uStack_458 = uStack_388;
      uStack_460 = uStack_390;
      uStack_438 = uStack_368;
      uStack_440 = uStack_370;
      uStack_428 = uStack_358;
      uStack_430 = uStack_360;
      uStack_448 = uStack_378;
      uStack_450 = uStack_380;
      uStack_488 = uStack_3b8;
      uStack_490 = uStack_3c0;
      uStack_478 = uStack_3a8;
      uStack_480 = uStack_3b0;
      uStack_678 = uStack_168;
      uStack_680 = uStack_170;
      uStack_668 = uStack_158;
      uStack_670 = uStack_160;
      uStack_660 = uStack_150;
      uStack_6b8 = uStack_1a8;
      uStack_6c0 = uStack_1b0;
      uStack_6a8 = uStack_198;
      uStack_6b0 = uStack_1a0;
      uStack_698 = uStack_188;
      uStack_6a0 = uStack_190;
      uStack_688 = uStack_178;
      uStack_690 = uStack_180;
      uStack_6f8 = uStack_1e8;
      uStack_700 = uStack_1f0;
      uStack_6e8 = uStack_1d8;
      uStack_6f0 = uStack_1e0;
      uStack_6d8 = uStack_1c8;
      uStack_6e0 = uStack_1d0;
      uStack_6c8 = uStack_1b8;
      uStack_6d0 = uStack_1c0;
      uStack_738 = uStack_228;
      uStack_740 = uStack_230;
      uStack_728 = uStack_218;
      uStack_730 = uStack_220;
      uStack_718 = uStack_208;
      uStack_720 = uStack_210;
      uStack_708 = uStack_1f8;
      uStack_710 = uStack_200;
      func_0x000103a0db60(&uStack_740,&uStack_830);
      func_0x000103a17eac(&uStack_490,0x112fca6a8,&UNK_10dc3aa50);
      uStack_828 = puVar3[1];
      uStack_830 = *puVar3;
      uStack_7f8 = puVar3[7];
      uStack_800 = puVar3[6];
      uStack_7e8 = puVar3[9];
      uStack_7f0 = puVar3[8];
      uStack_818 = puVar3[3];
      uStack_820 = puVar3[2];
      uStack_808 = puVar3[5];
      uStack_810 = puVar3[4];
      uStack_7b8 = puVar3[0xf];
      uStack_7c0 = puVar3[0xe];
      uStack_7a8 = puVar3[0x11];
      uStack_7b0 = puVar3[0x10];
      uStack_7d8 = puVar3[0xb];
      uStack_7e0 = puVar3[10];
      uStack_7c8 = puVar3[0xd];
      uStack_7d0 = puVar3[0xc];
      uStack_788 = puVar3[0x15];
      uStack_790 = puVar3[0x14];
      uStack_778 = puVar3[0x17];
      uStack_780 = puVar3[0x16];
      uStack_770 = puVar3[0x18];
      uStack_798 = puVar3[0x13];
      uStack_7a0 = puVar3[0x12];
      func_0x000103a17dac(&uStack_830);
      uStack_318 = uStack_788;
      uStack_320 = uStack_790;
      uStack_308 = uStack_778;
      uStack_310 = uStack_780;
      uStack_300 = uStack_770;
      uStack_358 = uStack_7c8;
      uStack_360 = uStack_7d0;
      uStack_348 = uStack_7b8;
      uStack_350 = uStack_7c0;
      uStack_328 = uStack_798;
      uStack_330 = uStack_7a0;
      uStack_338 = uStack_7a8;
      uStack_340 = uStack_7b0;
      uStack_398 = uStack_808;
      uStack_3a0 = uStack_810;
      uStack_388 = uStack_7f8;
      uStack_390 = uStack_800;
      uStack_368 = uStack_7d8;
      uStack_370 = uStack_7e0;
      uStack_378 = uStack_7e8;
      uStack_380 = uStack_7f0;
      uStack_3a8 = uStack_818;
      uStack_3b0 = uStack_820;
      uStack_3b8 = uStack_828;
      uStack_3c0 = uStack_830;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000103a139fc();
  (*pcVar7)(&uStack_3c0,&UNK_1106becd0,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_4b8 = uStack_318;
    uStack_4c0 = uStack_320;
    uStack_4a8 = uStack_308;
    uStack_4b0 = uStack_310;
    uStack_4f8 = uStack_358;
    uStack_500 = uStack_360;
    uStack_4e8 = uStack_348;
    uStack_4f0 = uStack_350;
    uStack_4d8 = uStack_338;
    uStack_4e0 = uStack_340;
    uStack_4c8 = uStack_328;
    uStack_4d0 = uStack_330;
    uStack_538 = uStack_398;
    uStack_540 = uStack_3a0;
    uStack_528 = uStack_388;
    uStack_530 = uStack_390;
    uStack_518 = uStack_378;
    uStack_520 = uStack_380;
    uStack_508 = uStack_368;
    uStack_510 = uStack_370;
    uStack_558 = uStack_3b8;
    uStack_560 = uStack_3c0;
    uStack_548 = uStack_3a8;
    uStack_550 = uStack_3b0;
    uStack_3e8 = uStack_318;
    uStack_3f0 = uStack_320;
    uStack_3d8 = uStack_308;
    uStack_3e0 = uStack_310;
    uStack_438 = uStack_368;
    uStack_440 = uStack_370;
    uStack_428 = uStack_358;
    uStack_430 = uStack_360;
    uStack_418 = uStack_348;
    uStack_420 = uStack_350;
    uStack_3f8 = uStack_328;
    uStack_400 = uStack_330;
    uStack_408 = uStack_338;
    uStack_410 = uStack_340;
    uStack_468 = uStack_398;
    uStack_470 = uStack_3a0;
    uStack_458 = uStack_388;
    uStack_460 = uStack_390;
    uStack_448 = uStack_378;
    uStack_450 = uStack_380;
    uStack_4a0 = uStack_300;
    uStack_3d0 = uStack_300;
    uStack_488 = uStack_3b8;
    uStack_490 = uStack_3c0;
    uStack_478 = uStack_3a8;
    uStack_480 = uStack_3b0;
    iVar1 = (int)&uStack_560;
    func_0x000100d65134();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_5a8 = uStack_4b8;
        uStack_5b0 = uStack_4c0;
        uStack_598 = uStack_4a8;
        uStack_5a0 = uStack_4b0;
        uStack_590 = uStack_4a0;
        uStack_5e8 = uStack_4f8;
        uStack_5f0 = uStack_500;
        uStack_5d8 = uStack_4e8;
        uStack_5e0 = uStack_4f0;
        uStack_5c8 = uStack_4d8;
        uStack_5d0 = uStack_4e0;
        uStack_5b8 = uStack_4c8;
        uStack_5c0 = uStack_4d0;
        uStack_628 = uStack_538;
        uStack_630 = uStack_540;
        uStack_618 = uStack_528;
        uStack_620 = uStack_530;
        uStack_608 = uStack_518;
        uStack_610 = uStack_520;
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_648 = uStack_558;
        uStack_650 = uStack_560;
        uStack_638 = uStack_548;
        uStack_640 = uStack_550;
        func_0x000103a0dfb4(&uStack_650,&uStack_740);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_5a8 = uStack_4b8;
        uStack_5b0 = uStack_4c0;
        uStack_598 = uStack_4a8;
        uStack_5a0 = uStack_4b0;
        uStack_590 = uStack_4a0;
        uStack_5e8 = uStack_4f8;
        uStack_5f0 = uStack_500;
        uStack_5d8 = uStack_4e8;
        uStack_5e0 = uStack_4f0;
        uStack_5c8 = uStack_4d8;
        uStack_5d0 = uStack_4e0;
        uStack_5b8 = uStack_4c8;
        uStack_5c0 = uStack_4d0;
        uStack_628 = uStack_538;
        uStack_630 = uStack_540;
        uStack_618 = uStack_528;
        uStack_620 = uStack_530;
        uStack_608 = uStack_518;
        uStack_610 = uStack_520;
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_648 = uStack_558;
        uStack_650 = uStack_560;
        uStack_638 = uStack_548;
        uStack_640 = uStack_550;
        func_0x000103a0dfb4(&uStack_650,&uStack_740);
        (*pcVar7)(param_3,param_4);
      }
      func_0x000103a17eac(&uStack_3c0,0x112fca6a8,&UNK_10dc3aa50);
      uStack_788 = uStack_3e8;
      uStack_790 = uStack_3f0;
      uStack_778 = uStack_3d8;
      uStack_780 = uStack_3e0;
      uStack_770 = uStack_3d0;
      uStack_7c8 = uStack_428;
      uStack_7d0 = uStack_430;
      uStack_7b8 = uStack_418;
      uStack_7c0 = uStack_420;
      uStack_7a8 = uStack_408;
      uStack_7b0 = uStack_410;
      uStack_798 = uStack_3f8;
      uStack_7a0 = uStack_400;
      uStack_808 = uStack_468;
      uStack_810 = uStack_470;
      uStack_7f8 = uStack_458;
      uStack_800 = uStack_460;
      uStack_7e8 = uStack_448;
      uStack_7f0 = uStack_450;
      uStack_7d8 = uStack_438;
      uStack_7e0 = uStack_440;
      uStack_828 = uStack_488;
      uStack_830 = uStack_490;
      uStack_818 = uStack_478;
      uStack_820 = uStack_480;
      func_0x000103a0dfa8(&uStack_830);
      uStack_678 = uStack_768;
      uStack_680 = uStack_770;
      uStack_668 = uStack_758;
      uStack_670 = uStack_760;
      uStack_660 = uStack_750;
      uStack_6b8 = uStack_7a8;
      uStack_6c0 = uStack_7b0;
      uStack_6a8 = uStack_798;
      uStack_6b0 = uStack_7a0;
      uStack_698 = uStack_788;
      uStack_6a0 = uStack_790;
      uStack_688 = uStack_778;
      uStack_690 = uStack_780;
      uStack_6f8 = uStack_7e8;
      uStack_700 = uStack_7f0;
      uStack_6e8 = uStack_7d8;
      uStack_6f0 = uStack_7e0;
      uStack_6d8 = uStack_7c8;
      uStack_6e0 = uStack_7d0;
      uStack_6c8 = uStack_7b8;
      uStack_6d0 = uStack_7c0;
      uStack_738 = uStack_828;
      uStack_740 = uStack_830;
      uStack_728 = uStack_818;
      uStack_730 = uStack_820;
      uStack_718 = uStack_808;
      uStack_720 = uStack_810;
      uStack_708 = uStack_7f8;
      uStack_710 = uStack_800;
      func_0x000103a0db9c(&uStack_740);
      uStack_598 = *(undefined8 *)(param_1 + 0xe0);
      uStack_5a0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_588 = *(undefined8 *)(param_1 + 0xf0);
      uStack_590 = *(undefined8 *)(param_1 + 0xe8);
      uStack_578 = *(undefined8 *)(param_1 + 0x100);
      uStack_580 = *(undefined8 *)(param_1 + 0xf8);
      uStack_5d8 = *(undefined8 *)(param_1 + 0xa0);
      uStack_5e0 = *(undefined8 *)(param_1 + 0x98);
      uStack_5c8 = *(undefined8 *)(param_1 + 0xb0);
      uStack_5d0 = *(undefined8 *)(param_1 + 0xa8);
      uStack_5b8 = *(undefined8 *)(param_1 + 0xc0);
      uStack_5c0 = *(undefined8 *)(param_1 + 0xb8);
      uStack_5a8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_5b0 = *(undefined8 *)(param_1 + 200);
      uStack_618 = *(undefined8 *)(param_1 + 0x60);
      uStack_620 = *(undefined8 *)(param_1 + 0x58);
      uStack_608 = *(undefined8 *)(param_1 + 0x70);
      uStack_610 = *(undefined8 *)(param_1 + 0x68);
      uStack_5f8 = *(undefined8 *)(param_1 + 0x80);
      uStack_600 = *(undefined8 *)(param_1 + 0x78);
      uStack_5e8 = *(undefined8 *)(param_1 + 0x90);
      uStack_5f0 = *(undefined8 *)(param_1 + 0x88);
      uStack_648 = *(undefined8 *)(param_1 + 0x30);
      uStack_650 = *(undefined8 *)(param_1 + 0x28);
      uStack_638 = *(undefined8 *)(param_1 + 0x40);
      uStack_640 = *(undefined8 *)(param_1 + 0x38);
      uStack_628 = *(undefined8 *)(param_1 + 0x50);
      uStack_630 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_688;
      *(undefined8 *)(param_1 + 0xd8) = uStack_690;
      *(undefined8 *)(param_1 + 0xf0) = uStack_678;
      *(undefined8 *)(param_1 + 0xe8) = uStack_680;
      *(undefined8 *)(param_1 + 0x100) = uStack_668;
      *(undefined8 *)(param_1 + 0xf8) = uStack_670;
      *(undefined8 *)(param_1 + 0xa0) = uStack_6c8;
      *(undefined8 *)(param_1 + 0x98) = uStack_6d0;
      *(undefined8 *)(param_1 + 0xb0) = uStack_6b8;
      *(undefined8 *)(param_1 + 0xa8) = uStack_6c0;
      *(undefined8 *)(param_1 + 0xc0) = uStack_6a8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_6b0;
      *(undefined8 *)(param_1 + 0xd0) = uStack_698;
      *(undefined8 *)(param_1 + 200) = uStack_6a0;
      *(undefined8 *)(param_1 + 0x60) = uStack_708;
      *(undefined8 *)(param_1 + 0x58) = uStack_710;
      *(undefined8 *)(param_1 + 0x70) = uStack_6f8;
      *(undefined8 *)(param_1 + 0x68) = uStack_700;
      *(undefined8 *)(param_1 + 0x80) = uStack_6e8;
      *(undefined8 *)(param_1 + 0x78) = uStack_6f0;
      *(undefined8 *)(param_1 + 0x90) = uStack_6d8;
      *(undefined8 *)(param_1 + 0x88) = uStack_6e0;
      *(undefined8 *)(param_1 + 0x30) = uStack_738;
      *(undefined8 *)(param_1 + 0x28) = uStack_740;
      *(undefined8 *)(param_1 + 0x40) = uStack_728;
      *(undefined8 *)(param_1 + 0x38) = uStack_730;
      uStack_570 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_660;
      *(undefined8 *)(param_1 + 0x50) = uStack_718;
      *(undefined8 *)(param_1 + 0x48) = uStack_720;
      uVar5 = 0x112fc9888;
      puVar6 = &UNK_10dc38d08;
      puVar2 = &uStack_650;
      goto LAB_1039fea58;
    }
  }
  uVar5 = 0x112fca6a8;
  puVar6 = &UNK_10dc3aa50;
  puVar2 = &uStack_3c0;
LAB_1039fea58:
  func_0x000103a17eac(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1039fecd8; end: 1039ff403;  */

/* WARNING: Removing unreachable block (ram,0x0001039ff254) */

void FUN_1039fecd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x21;
  code *pcVar7;
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
  undefined1 uStack_7a0;
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
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined8 uStack_710;
  undefined8 uStack_708;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined1 uStack_6b0;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
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
  undefined1 uStack_5c0;
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
  undefined1 uStack_150;
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
  undefined1 uStack_60;
  
  puVar4 = &uStack_880;
  func_0x000103a17db0(&uStack_310);
  uStack_348 = uStack_268;
  uStack_350 = uStack_270;
  uStack_338 = uStack_258;
  uStack_340 = uStack_260;
  uStack_328 = uStack_248;
  uStack_330 = uStack_250;
  uStack_318 = uStack_238;
  uStack_320 = uStack_240;
  uStack_388 = uStack_2a8;
  uStack_390 = uStack_2b0;
  uStack_378 = uStack_298;
  uStack_380 = uStack_2a0;
  uStack_368 = uStack_288;
  uStack_370 = uStack_290;
  uStack_358 = uStack_278;
  uStack_360 = uStack_280;
  uStack_3c8 = uStack_2e8;
  uStack_3d0 = uStack_2f0;
  uStack_3b8 = uStack_2d8;
  uStack_3c0 = uStack_2e0;
  uStack_3a8 = uStack_2c8;
  uStack_3b0 = uStack_2d0;
  uStack_398 = uStack_2b8;
  uStack_3a0 = uStack_2c0;
  uStack_3e8 = uStack_308;
  uStack_3f0 = uStack_310;
  uStack_3d8 = uStack_2f8;
  uStack_3e0 = uStack_300;
  uStack_178 = *(undefined8 *)(param_1 + 0xe0);
  uStack_180 = *(undefined8 *)(param_1 + 0xd8);
  uStack_168 = *(undefined8 *)(param_1 + 0xf0);
  uStack_170 = *(undefined8 *)(param_1 + 0xe8);
  uStack_158 = *(undefined8 *)(param_1 + 0x100);
  uStack_160 = *(undefined8 *)(param_1 + 0xf8);
  uStack_150 = *(undefined1 *)(param_1 + 0x108);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_198 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_188 = *(undefined8 *)(param_1 + 0xd0);
  uStack_190 = *(undefined8 *)(param_1 + 200);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_200 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_228 = *(undefined8 *)(param_1 + 0x30);
  uStack_230 = *(undefined8 *)(param_1 + 0x28);
  uStack_218 = *(undefined8 *)(param_1 + 0x40);
  uStack_220 = *(undefined8 *)(param_1 + 0x38);
  uStack_208 = *(undefined8 *)(param_1 + 0x50);
  uStack_210 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = *(undefined8 *)(param_1 + 0xe0);
  uStack_90 = *(undefined8 *)(param_1 + 0xd8);
  uStack_78 = *(undefined8 *)(param_1 + 0xf0);
  uStack_80 = *(undefined8 *)(param_1 + 0xe8);
  uStack_68 = *(undefined8 *)(param_1 + 0x100);
  uStack_70 = *(undefined8 *)(param_1 + 0xf8);
  uStack_60 = *(undefined1 *)(param_1 + 0x108);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a0 = *(undefined8 *)(param_1 + 200);
  uStack_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_110 = *(undefined8 *)(param_1 + 0x58);
  uStack_f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  uStack_e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_e0 = *(undefined8 *)(param_1 + 0x88);
  uStack_138 = *(undefined8 *)(param_1 + 0x30);
  uStack_140 = *(undefined8 *)(param_1 + 0x28);
  uStack_128 = *(undefined8 *)(param_1 + 0x40);
  uStack_130 = *(undefined8 *)(param_1 + 0x38);
  uStack_118 = *(undefined8 *)(param_1 + 0x50);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  puVar2 = &uStack_230;
  func_0x000103a0db40();
  puVar3 = puVar2;
  if ((int)puVar2 != 1) {
    uStack_5d8 = uStack_78;
    uStack_5e0 = uStack_80;
    uStack_5c8 = uStack_68;
    uStack_5d0 = uStack_70;
    uStack_5c0 = uStack_60;
    uStack_618 = uStack_b8;
    uStack_620 = uStack_c0;
    uStack_608 = uStack_a8;
    uStack_610 = uStack_b0;
    uStack_5f8 = uStack_98;
    uStack_600 = uStack_a0;
    uStack_5e8 = uStack_88;
    uStack_5f0 = uStack_90;
    uStack_658 = uStack_f8;
    uStack_660 = uStack_100;
    uStack_648 = uStack_e8;
    uStack_650 = uStack_f0;
    uStack_638 = uStack_d8;
    uStack_640 = uStack_e0;
    uStack_628 = uStack_c8;
    uStack_630 = uStack_d0;
    uStack_698 = uStack_138;
    uStack_6a0 = uStack_140;
    uStack_688 = uStack_128;
    uStack_690 = uStack_130;
    uStack_678 = uStack_118;
    uStack_680 = uStack_120;
    uStack_668 = uStack_108;
    uStack_670 = uStack_110;
    puVar3 = &uStack_140;
    func_0x000103a0db54();
    if ((int)puVar3 == 0x14) {
      puVar3 = &uStack_6a0;
      func_0x000103a0dfe8();
      uStack_428 = uStack_348;
      uStack_430 = uStack_350;
      uStack_418 = uStack_338;
      uStack_420 = uStack_340;
      uStack_408 = uStack_328;
      uStack_410 = uStack_330;
      uStack_3f8 = uStack_318;
      uStack_400 = uStack_320;
      uStack_468 = uStack_388;
      uStack_470 = uStack_390;
      uStack_458 = uStack_378;
      uStack_460 = uStack_380;
      uStack_448 = uStack_368;
      uStack_450 = uStack_370;
      uStack_438 = uStack_358;
      uStack_440 = uStack_360;
      uStack_4a8 = uStack_3c8;
      uStack_4b0 = uStack_3d0;
      uStack_498 = uStack_3b8;
      uStack_4a0 = uStack_3c0;
      uStack_488 = uStack_3a8;
      uStack_490 = uStack_3b0;
      uStack_478 = uStack_398;
      uStack_480 = uStack_3a0;
      uStack_4c8 = uStack_3e8;
      uStack_4d0 = uStack_3f0;
      uStack_4b8 = uStack_3d8;
      uStack_4c0 = uStack_3e0;
      uStack_6c8 = uStack_168;
      uStack_6d0 = uStack_170;
      uStack_6b8 = uStack_158;
      uStack_6c0 = uStack_160;
      uStack_6b0 = uStack_150;
      uStack_708 = uStack_1a8;
      uStack_710 = uStack_1b0;
      uStack_6f8 = uStack_198;
      uStack_700 = uStack_1a0;
      uStack_6e8 = uStack_188;
      uStack_6f0 = uStack_190;
      uStack_6d8 = uStack_178;
      uStack_6e0 = uStack_180;
      uStack_748 = uStack_1e8;
      uStack_750 = uStack_1f0;
      uStack_738 = uStack_1d8;
      uStack_740 = uStack_1e0;
      uStack_728 = uStack_1c8;
      uStack_730 = uStack_1d0;
      uStack_718 = uStack_1b8;
      uStack_720 = uStack_1c0;
      uStack_788 = uStack_228;
      uStack_790 = uStack_230;
      uStack_778 = uStack_218;
      uStack_780 = uStack_220;
      uStack_768 = uStack_208;
      uStack_770 = uStack_210;
      uStack_758 = uStack_1f8;
      uStack_760 = uStack_200;
      func_0x000103a0db60(&uStack_790,&uStack_880);
      func_0x000103a17eac(&uStack_4d0,0x112fca6b0,&UNK_10dc3aa58);
      uStack_878 = puVar3[1];
      uStack_880 = *puVar3;
      uStack_868 = puVar3[3];
      uStack_870 = puVar3[2];
      uStack_838 = puVar3[9];
      uStack_840 = puVar3[8];
      uStack_828 = puVar3[0xb];
      uStack_830 = puVar3[10];
      uStack_858 = puVar3[5];
      uStack_860 = puVar3[4];
      uStack_848 = puVar3[7];
      uStack_850 = puVar3[6];
      uStack_7f8 = puVar3[0x11];
      uStack_800 = puVar3[0x10];
      uStack_7e8 = puVar3[0x13];
      uStack_7f0 = puVar3[0x12];
      uStack_818 = puVar3[0xd];
      uStack_820 = puVar3[0xc];
      uStack_808 = puVar3[0xf];
      uStack_810 = puVar3[0xe];
      uStack_7b8 = puVar3[0x19];
      uStack_7c0 = puVar3[0x18];
      uStack_7a8 = puVar3[0x1b];
      uStack_7b0 = puVar3[0x1a];
      uStack_7d8 = puVar3[0x15];
      uStack_7e0 = puVar3[0x14];
      uStack_7c8 = puVar3[0x17];
      uStack_7d0 = puVar3[0x16];
      func_0x000103a17e28(&uStack_880);
      uStack_348 = uStack_7d8;
      uStack_350 = uStack_7e0;
      uStack_338 = uStack_7c8;
      uStack_340 = uStack_7d0;
      uStack_328 = uStack_7b8;
      uStack_330 = uStack_7c0;
      uStack_318 = uStack_7a8;
      uStack_320 = uStack_7b0;
      uStack_388 = uStack_818;
      uStack_390 = uStack_820;
      uStack_378 = uStack_808;
      uStack_380 = uStack_810;
      uStack_368 = uStack_7f8;
      uStack_370 = uStack_800;
      uStack_358 = uStack_7e8;
      uStack_360 = uStack_7f0;
      uStack_3c8 = uStack_858;
      uStack_3d0 = uStack_860;
      uStack_3b8 = uStack_848;
      uStack_3c0 = uStack_850;
      uStack_3a8 = uStack_838;
      uStack_3b0 = uStack_840;
      uStack_398 = uStack_828;
      uStack_3a0 = uStack_830;
      uStack_3e8 = uStack_878;
      uStack_3f0 = uStack_880;
      uStack_3d8 = uStack_868;
      uStack_3e0 = uStack_870;
      puVar3 = puVar4;
    }
  }
  pcVar7 = *(code **)(param_4 + 0x198);
  func_0x000103a13b28();
  (*pcVar7)(&uStack_3f0,&UNK_1106bed70,puVar3,param_3,param_4);
  if (unaff_x21 == 0) {
    uStack_508 = uStack_348;
    uStack_510 = uStack_350;
    uStack_4f8 = uStack_338;
    uStack_500 = uStack_340;
    uStack_4e8 = uStack_328;
    uStack_4f0 = uStack_330;
    uStack_4d8 = uStack_318;
    uStack_4e0 = uStack_320;
    uStack_548 = uStack_388;
    uStack_550 = uStack_390;
    uStack_538 = uStack_378;
    uStack_540 = uStack_380;
    uStack_528 = uStack_368;
    uStack_530 = uStack_370;
    uStack_518 = uStack_358;
    uStack_520 = uStack_360;
    uStack_588 = uStack_3c8;
    uStack_590 = uStack_3d0;
    uStack_578 = uStack_3b8;
    uStack_580 = uStack_3c0;
    uStack_568 = uStack_3a8;
    uStack_570 = uStack_3b0;
    uStack_558 = uStack_398;
    uStack_560 = uStack_3a0;
    uStack_5a8 = uStack_3e8;
    uStack_5b0 = uStack_3f0;
    uStack_598 = uStack_3d8;
    uStack_5a0 = uStack_3e0;
    uStack_428 = uStack_348;
    uStack_430 = uStack_350;
    uStack_418 = uStack_338;
    uStack_420 = uStack_340;
    uStack_408 = uStack_328;
    uStack_410 = uStack_330;
    uStack_3f8 = uStack_318;
    uStack_400 = uStack_320;
    uStack_468 = uStack_388;
    uStack_470 = uStack_390;
    uStack_458 = uStack_378;
    uStack_460 = uStack_380;
    uStack_448 = uStack_368;
    uStack_450 = uStack_370;
    uStack_438 = uStack_358;
    uStack_440 = uStack_360;
    uStack_4a8 = uStack_3c8;
    uStack_4b0 = uStack_3d0;
    uStack_498 = uStack_3b8;
    uStack_4a0 = uStack_3c0;
    uStack_488 = uStack_3a8;
    uStack_490 = uStack_3b0;
    uStack_478 = uStack_398;
    uStack_480 = uStack_3a0;
    uStack_4c8 = uStack_3e8;
    uStack_4d0 = uStack_3f0;
    uStack_4b8 = uStack_3d8;
    uStack_4c0 = uStack_3e0;
    iVar1 = (int)&uStack_5b0;
    func_0x000103a17df8();
    if (iVar1 != 1) {
      if ((int)puVar2 == 1) {
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_5e8 = uStack_4f8;
        uStack_5f0 = uStack_500;
        uStack_5d8 = uStack_4e8;
        uStack_5e0 = uStack_4f0;
        uStack_5c8 = uStack_4d8;
        uStack_5d0 = uStack_4e0;
        uStack_638 = uStack_548;
        uStack_640 = uStack_550;
        uStack_628 = uStack_538;
        uStack_630 = uStack_540;
        uStack_618 = uStack_528;
        uStack_620 = uStack_530;
        uStack_608 = uStack_518;
        uStack_610 = uStack_520;
        uStack_678 = uStack_588;
        uStack_680 = uStack_590;
        uStack_668 = uStack_578;
        uStack_670 = uStack_580;
        uStack_658 = uStack_568;
        uStack_660 = uStack_570;
        uStack_648 = uStack_558;
        uStack_650 = uStack_560;
        uStack_698 = uStack_5a8;
        uStack_6a0 = uStack_5b0;
        uStack_688 = uStack_598;
        uStack_690 = uStack_5a0;
        func_0x000103a0dff8(&uStack_6a0,&uStack_790);
      }
      else {
        pcVar7 = *(code **)(param_4 + 8);
        uStack_5f8 = uStack_508;
        uStack_600 = uStack_510;
        uStack_5e8 = uStack_4f8;
        uStack_5f0 = uStack_500;
        uStack_5d8 = uStack_4e8;
        uStack_5e0 = uStack_4f0;
        uStack_5c8 = uStack_4d8;
        uStack_5d0 = uStack_4e0;
        uStack_638 = uStack_548;
        uStack_640 = uStack_550;
        uStack_628 = uStack_538;
        uStack_630 = uStack_540;
        uStack_618 = uStack_528;
        uStack_620 = uStack_530;
        uStack_608 = uStack_518;
        uStack_610 = uStack_520;
        uStack_678 = uStack_588;
        uStack_680 = uStack_590;
        uStack_668 = uStack_578;
        uStack_670 = uStack_580;
        uStack_658 = uStack_568;
        uStack_660 = uStack_570;
        uStack_648 = uStack_558;
        uStack_650 = uStack_560;
        uStack_698 = uStack_5a8;
        uStack_6a0 = uStack_5b0;
        uStack_688 = uStack_598;
        uStack_690 = uStack_5a0;
        func_0x000103a0dff8(&uStack_6a0,&uStack_790);
        (*pcVar7)(param_3,param_4);
      }
      func_0x000103a17eac(&uStack_3f0,0x112fca6b0,&UNK_10dc3aa58);
      uStack_7d8 = uStack_428;
      uStack_7e0 = uStack_430;
      uStack_7c8 = uStack_418;
      uStack_7d0 = uStack_420;
      uStack_7b8 = uStack_408;
      uStack_7c0 = uStack_410;
      uStack_7a8 = uStack_3f8;
      uStack_7b0 = uStack_400;
      uStack_818 = uStack_468;
      uStack_820 = uStack_470;
      uStack_808 = uStack_458;
      uStack_810 = uStack_460;
      uStack_7f8 = uStack_448;
      uStack_800 = uStack_450;
      uStack_7e8 = uStack_438;
      uStack_7f0 = uStack_440;
      uStack_858 = uStack_4a8;
      uStack_860 = uStack_4b0;
      uStack_848 = uStack_498;
      uStack_850 = uStack_4a0;
      uStack_838 = uStack_488;
      uStack_840 = uStack_490;
      uStack_828 = uStack_478;
      uStack_830 = uStack_480;
      uStack_878 = uStack_4c8;
      uStack_880 = uStack_4d0;
      uStack_868 = uStack_4b8;
      uStack_870 = uStack_4c0;
      func_0x000103a0dfec(&uStack_880);
      uStack_6c8 = uStack_7b8;
      uStack_6d0 = uStack_7c0;
      uStack_6b8 = uStack_7a8;
      uStack_6c0 = uStack_7b0;
      uStack_6b0 = uStack_7a0;
      uStack_708 = uStack_7f8;
      uStack_710 = uStack_800;
      uStack_6f8 = uStack_7e8;
      uStack_700 = uStack_7f0;
      uStack_6e8 = uStack_7d8;
      uStack_6f0 = uStack_7e0;
      uStack_6d8 = uStack_7c8;
      uStack_6e0 = uStack_7d0;
      uStack_748 = uStack_838;
      uStack_750 = uStack_840;
      uStack_738 = uStack_828;
      uStack_740 = uStack_830;
      uStack_728 = uStack_818;
      uStack_730 = uStack_820;
      uStack_718 = uStack_808;
      uStack_720 = uStack_810;
      uStack_788 = uStack_878;
      uStack_790 = uStack_880;
      uStack_778 = uStack_868;
      uStack_780 = uStack_870;
      uStack_768 = uStack_858;
      uStack_770 = uStack_860;
      uStack_758 = uStack_848;
      uStack_760 = uStack_850;
      func_0x000103a0db9c(&uStack_790);
      uStack_5e8 = *(undefined8 *)(param_1 + 0xe0);
      uStack_5f0 = *(undefined8 *)(param_1 + 0xd8);
      uStack_5d8 = *(undefined8 *)(param_1 + 0xf0);
      uStack_5e0 = *(undefined8 *)(param_1 + 0xe8);
      uStack_5c8 = *(undefined8 *)(param_1 + 0x100);
      uStack_5d0 = *(undefined8 *)(param_1 + 0xf8);
      uStack_628 = *(undefined8 *)(param_1 + 0xa0);
      uStack_630 = *(undefined8 *)(param_1 + 0x98);
      uStack_618 = *(undefined8 *)(param_1 + 0xb0);
      uStack_620 = *(undefined8 *)(param_1 + 0xa8);
      uStack_608 = *(undefined8 *)(param_1 + 0xc0);
      uStack_610 = *(undefined8 *)(param_1 + 0xb8);
      uStack_5f8 = *(undefined8 *)(param_1 + 0xd0);
      uStack_600 = *(undefined8 *)(param_1 + 200);
      uStack_668 = *(undefined8 *)(param_1 + 0x60);
      uStack_670 = *(undefined8 *)(param_1 + 0x58);
      uStack_658 = *(undefined8 *)(param_1 + 0x70);
      uStack_660 = *(undefined8 *)(param_1 + 0x68);
      uStack_648 = *(undefined8 *)(param_1 + 0x80);
      uStack_650 = *(undefined8 *)(param_1 + 0x78);
      uStack_638 = *(undefined8 *)(param_1 + 0x90);
      uStack_640 = *(undefined8 *)(param_1 + 0x88);
      uStack_698 = *(undefined8 *)(param_1 + 0x30);
      uStack_6a0 = *(undefined8 *)(param_1 + 0x28);
      uStack_688 = *(undefined8 *)(param_1 + 0x40);
      uStack_690 = *(undefined8 *)(param_1 + 0x38);
      uStack_678 = *(undefined8 *)(param_1 + 0x50);
      uStack_680 = *(undefined8 *)(param_1 + 0x48);
      *(undefined8 *)(param_1 + 0xe0) = uStack_6d8;
      *(undefined8 *)(param_1 + 0xd8) = uStack_6e0;
      *(undefined8 *)(param_1 + 0xf0) = uStack_6c8;
      *(undefined8 *)(param_1 + 0xe8) = uStack_6d0;
      *(undefined8 *)(param_1 + 0x100) = uStack_6b8;
      *(undefined8 *)(param_1 + 0xf8) = uStack_6c0;
      *(undefined8 *)(param_1 + 0xa0) = uStack_718;
      *(undefined8 *)(param_1 + 0x98) = uStack_720;
      *(undefined8 *)(param_1 + 0xb0) = uStack_708;
      *(undefined8 *)(param_1 + 0xa8) = uStack_710;
      *(undefined8 *)(param_1 + 0xc0) = uStack_6f8;
      *(undefined8 *)(param_1 + 0xb8) = uStack_700;
      *(undefined8 *)(param_1 + 0xd0) = uStack_6e8;
      *(undefined8 *)(param_1 + 200) = uStack_6f0;
      *(undefined8 *)(param_1 + 0x60) = uStack_758;
      *(undefined8 *)(param_1 + 0x58) = uStack_760;
      *(undefined8 *)(param_1 + 0x70) = uStack_748;
      *(undefined8 *)(param_1 + 0x68) = uStack_750;
      *(undefined8 *)(param_1 + 0x80) = uStack_738;
      *(undefined8 *)(param_1 + 0x78) = uStack_740;
      *(undefined8 *)(param_1 + 0x90) = uStack_728;
      *(undefined8 *)(param_1 + 0x88) = uStack_730;
      *(undefined8 *)(param_1 + 0x30) = uStack_788;
      *(undefined8 *)(param_1 + 0x28) = uStack_790;
      *(undefined8 *)(param_1 + 0x40) = uStack_778;
      *(undefined8 *)(param_1 + 0x38) = uStack_780;
      uStack_5c0 = *(undefined1 *)(param_1 + 0x108);
      *(undefined1 *)(param_1 + 0x108) = uStack_6b0;
      *(undefined8 *)(param_1 + 0x50) = uStack_768;
      *(undefined8 *)(param_1 + 0x48) = uStack_770;
      uVar5 = 0x112fc9888;
      puVar6 = &UNK_10dc38d08;
      puVar2 = &uStack_6a0;
      goto LAB_1039ff180;
    }
  }
  uVar5 = 0x112fca6b0;
  puVar6 = &UNK_10dc3aa58;
  puVar2 = &uStack_3f0;
LAB_1039ff180:
  func_0x000103a17eac(puVar2,uVar5,puVar6);
  return;
}



/* Entry: 1039ff404; end: 1039fff3b;  */

void FUN_1039ff404(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined8 *puVar2;
  long unaff_x21;
  undefined1 auStack_5e8 [232];
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
  undefined1 uStack_420;
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
  undefined1 uStack_330;
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
  undefined1 uStack_240;
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
  undefined1 uStack_150;
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
  undefined1 uStack_60;
  
  uStack_178 = *(undefined8 *)(param_1 + 0xe0);
  uStack_180 = *(undefined8 *)(param_1 + 0xd8);
  uStack_168 = *(undefined8 *)(param_1 + 0xf0);
  uStack_170 = *(undefined8 *)(param_1 + 0xe8);
  uStack_158 = *(undefined8 *)(param_1 + 0x100);
  uStack_160 = *(undefined8 *)(param_1 + 0xf8);
  uStack_150 = *(undefined1 *)(param_1 + 0x108);
  uStack_1b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_198 = *(undefined8 *)(param_1 + 0xc0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_188 = *(undefined8 *)(param_1 + 0xd0);
  uStack_190 = *(undefined8 *)(param_1 + 200);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_200 = *(undefined8 *)(param_1 + 0x58);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_228 = *(undefined8 *)(param_1 + 0x30);
  uStack_230 = *(undefined8 *)(param_1 + 0x28);
  uStack_218 = *(undefined8 *)(param_1 + 0x40);
  uStack_220 = *(undefined8 *)(param_1 + 0x38);
  uStack_208 = *(undefined8 *)(param_1 + 0x50);
  uStack_210 = *(undefined8 *)(param_1 + 0x48);
  uStack_88 = *(undefined8 *)(param_1 + 0xe0);
  uStack_90 = *(undefined8 *)(param_1 + 0xd8);
  uStack_78 = *(undefined8 *)(param_1 + 0xf0);
  uStack_80 = *(undefined8 *)(param_1 + 0xe8);
  uStack_68 = *(undefined8 *)(param_1 + 0x100);
  uStack_70 = *(undefined8 *)(param_1 + 0xf8);
  uStack_60 = *(undefined1 *)(param_1 + 0x108);
  uStack_c8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_d0 = *(undefined8 *)(param_1 + 0x98);
  uStack_b8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_c0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_a8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_98 = *(undefined8 *)(param_1 + 0xd0);
  uStack_a0 = *(undefined8 *)(param_1 + 200);
  uStack_108 = *(undefined8 *)(param_1 + 0x60);
  uStack_110 = *(undefined8 *)(param_1 + 0x58);
  uStack_f8 = *(undefined8 *)(param_1 + 0x70);
  uStack_100 = *(undefined8 *)(param_1 + 0x68);
  uStack_e8 = *(undefined8 *)(param_1 + 0x80);
  uStack_f0 = *(undefined8 *)(param_1 + 0x78);
  uStack_d8 = *(undefined8 *)(param_1 + 0x90);
  uStack_e0 = *(undefined8 *)(param_1 + 0x88);
  uStack_138 = *(undefined8 *)(param_1 + 0x30);
  uStack_140 = *(undefined8 *)(param_1 + 0x28);
  uStack_128 = *(undefined8 *)(param_1 + 0x40);
  uStack_130 = *(undefined8 *)(param_1 + 0x38);
  uStack_118 = *(undefined8 *)(param_1 + 0x50);
  uStack_120 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_230;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    puVar2 = &uStack_140;
    func_0x000103a0db54();
    switch((ulong)puVar2 & 0xffffffff) {
    case 0:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_1039fff3c(param_1,param_2,param_3,param_4);
      break;
    case 1:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a000e8(param_1,param_2,param_3,param_4);
      break;
    case 2:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a002a0(param_1,param_2,param_3,param_4);
      break;
    case 3:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a00450(param_1,param_2,param_3,param_4);
      break;
    case 4:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a00608(param_1,param_2,param_3,param_4);
      break;
    case 5:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a007b8(param_1,param_2,param_3,param_4);
      break;
    case 6:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a00970(param_1,param_2,param_3,param_4);
      break;
    case 7:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a00b20(param_1,param_2,param_3,param_4);
      break;
    case 8:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a00cd8(param_1,param_2,param_3,param_4);
      break;
    case 9:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a00e88(param_1,param_2,param_3,param_4);
      break;
    case 10:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a01040(param_1,param_2,param_3,param_4);
      break;
    case 0xb:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a011f0(param_1,param_2,param_3,param_4);
      break;
    case 0xc:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a013a8(param_1,param_2,param_3,param_4);
      break;
    case 0xd:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a01548(param_1,param_2,param_3,param_4);
      break;
    case 0xe:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a016e8(param_1,param_2,param_3,param_4);
      break;
    case 0xf:
      uStack_258 = uStack_168;
      uStack_260 = uStack_170;
      uStack_248 = uStack_158;
      uStack_250 = uStack_160;
      uStack_240 = uStack_150;
      uStack_298 = uStack_1a8;
      uStack_2a0 = uStack_1b0;
      uStack_288 = uStack_198;
      uStack_290 = uStack_1a0;
      uStack_278 = uStack_188;
      uStack_280 = uStack_190;
      uStack_268 = uStack_178;
      uStack_270 = uStack_180;
      uStack_2d8 = uStack_1e8;
      uStack_2e0 = uStack_1f0;
      uStack_2c8 = uStack_1d8;
      uStack_2d0 = uStack_1e0;
      uStack_2b8 = uStack_1c8;
      uStack_2c0 = uStack_1d0;
      uStack_2a8 = uStack_1b8;
      uStack_2b0 = uStack_1c0;
      uStack_318 = uStack_228;
      uStack_320 = uStack_230;
      uStack_308 = uStack_218;
      uStack_310 = uStack_220;
      uStack_2f8 = uStack_208;
      uStack_300 = uStack_210;
      uStack_2e8 = uStack_1f8;
      uStack_2f0 = uStack_200;
      func_0x000103a0db60(&uStack_320,&uStack_410);
      FUN_103a018b0(param_1,param_2,param_3,param_4);
      break;
    default:
      goto LAB_1039ffbdc;
    }
    puVar2 = &uStack_230;
    if (unaff_x21 != 0) goto code_r0x0001039fff18;
    func_0x000103a17eac(puVar2,0x112fc9888,&UNK_10dc38d08);
  }
LAB_1039ffbdc:
  FUN_103a01a58(param_1,param_2,param_3,param_4);
  if (unaff_x21 != 0) {
    return;
  }
  uStack_358 = *(undefined8 *)(param_1 + 0xe0);
  uStack_360 = *(undefined8 *)(param_1 + 0xd8);
  uStack_348 = *(undefined8 *)(param_1 + 0xf0);
  uStack_350 = *(undefined8 *)(param_1 + 0xe8);
  uStack_338 = *(undefined8 *)(param_1 + 0x100);
  uStack_340 = *(undefined8 *)(param_1 + 0xf8);
  uStack_330 = *(undefined1 *)(param_1 + 0x108);
  uStack_398 = *(undefined8 *)(param_1 + 0xa0);
  uStack_3a0 = *(undefined8 *)(param_1 + 0x98);
  uStack_388 = *(undefined8 *)(param_1 + 0xb0);
  uStack_390 = *(undefined8 *)(param_1 + 0xa8);
  uStack_378 = *(undefined8 *)(param_1 + 0xc0);
  uStack_380 = *(undefined8 *)(param_1 + 0xb8);
  uStack_368 = *(undefined8 *)(param_1 + 0xd0);
  uStack_370 = *(undefined8 *)(param_1 + 200);
  uStack_3d8 = *(undefined8 *)(param_1 + 0x60);
  uStack_3e0 = *(undefined8 *)(param_1 + 0x58);
  uStack_3c8 = *(undefined8 *)(param_1 + 0x70);
  uStack_3d0 = *(undefined8 *)(param_1 + 0x68);
  uStack_3b8 = *(undefined8 *)(param_1 + 0x80);
  uStack_3c0 = *(undefined8 *)(param_1 + 0x78);
  uStack_3a8 = *(undefined8 *)(param_1 + 0x90);
  uStack_3b0 = *(undefined8 *)(param_1 + 0x88);
  uStack_408 = *(undefined8 *)(param_1 + 0x30);
  uStack_410 = *(undefined8 *)(param_1 + 0x28);
  uStack_3f8 = *(undefined8 *)(param_1 + 0x40);
  uStack_400 = *(undefined8 *)(param_1 + 0x38);
  uStack_3e8 = *(undefined8 *)(param_1 + 0x50);
  uStack_3f0 = *(undefined8 *)(param_1 + 0x48);
  uStack_268 = *(undefined8 *)(param_1 + 0xe0);
  uStack_270 = *(undefined8 *)(param_1 + 0xd8);
  uStack_258 = *(undefined8 *)(param_1 + 0xf0);
  uStack_260 = *(undefined8 *)(param_1 + 0xe8);
  uStack_248 = *(undefined8 *)(param_1 + 0x100);
  uStack_250 = *(undefined8 *)(param_1 + 0xf8);
  uStack_240 = *(undefined1 *)(param_1 + 0x108);
  uStack_2a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_2b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_298 = *(undefined8 *)(param_1 + 0xb0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_288 = *(undefined8 *)(param_1 + 0xc0);
  uStack_290 = *(undefined8 *)(param_1 + 0xb8);
  uStack_278 = *(undefined8 *)(param_1 + 0xd0);
  uStack_280 = *(undefined8 *)(param_1 + 200);
  uStack_2e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_2d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_2e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_2c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_2d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_2b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_2c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_318 = *(undefined8 *)(param_1 + 0x30);
  uStack_320 = *(undefined8 *)(param_1 + 0x28);
  uStack_308 = *(undefined8 *)(param_1 + 0x40);
  uStack_310 = *(undefined8 *)(param_1 + 0x38);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_300 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_410;
  func_0x000103a0db40();
  if (iVar1 == 1) {
    return;
  }
  iVar1 = (int)&uStack_320;
  func_0x000103a0db54();
  if (iVar1 < 0x12) {
    if (iVar1 == 0x10) {
      uStack_438 = uStack_348;
      uStack_440 = uStack_350;
      uStack_428 = uStack_338;
      uStack_430 = uStack_340;
      uStack_420 = uStack_330;
      uStack_478 = uStack_388;
      uStack_480 = uStack_390;
      uStack_468 = uStack_378;
      uStack_470 = uStack_380;
      uStack_458 = uStack_368;
      uStack_460 = uStack_370;
      uStack_448 = uStack_358;
      uStack_450 = uStack_360;
      uStack_4b8 = uStack_3c8;
      uStack_4c0 = uStack_3d0;
      uStack_4a8 = uStack_3b8;
      uStack_4b0 = uStack_3c0;
      uStack_498 = uStack_3a8;
      uStack_4a0 = uStack_3b0;
      uStack_488 = uStack_398;
      uStack_490 = uStack_3a0;
      uStack_4f8 = uStack_408;
      uStack_500 = uStack_410;
      uStack_4e8 = uStack_3f8;
      uStack_4f0 = uStack_400;
      uStack_4d8 = uStack_3e8;
      uStack_4e0 = uStack_3f0;
      uStack_4c8 = uStack_3d8;
      uStack_4d0 = uStack_3e0;
      func_0x000103a0db60(&uStack_500,auStack_5e8);
      FUN_103a01b08(param_1,param_2,param_3,param_4);
    }
    else {
      if (iVar1 != 0x11) {
        return;
      }
      uStack_438 = uStack_348;
      uStack_440 = uStack_350;
      uStack_428 = uStack_338;
      uStack_430 = uStack_340;
      uStack_420 = uStack_330;
      uStack_478 = uStack_388;
      uStack_480 = uStack_390;
      uStack_468 = uStack_378;
      uStack_470 = uStack_380;
      uStack_458 = uStack_368;
      uStack_460 = uStack_370;
      uStack_448 = uStack_358;
      uStack_450 = uStack_360;
      uStack_4b8 = uStack_3c8;
      uStack_4c0 = uStack_3d0;
      uStack_4a8 = uStack_3b8;
      uStack_4b0 = uStack_3c0;
      uStack_498 = uStack_3a8;
      uStack_4a0 = uStack_3b0;
      uStack_488 = uStack_398;
      uStack_490 = uStack_3a0;
      uStack_4f8 = uStack_408;
      uStack_500 = uStack_410;
      uStack_4e8 = uStack_3f8;
      uStack_4f0 = uStack_400;
      uStack_4d8 = uStack_3e8;
      uStack_4e0 = uStack_3f0;
      uStack_4c8 = uStack_3d8;
      uStack_4d0 = uStack_3e0;
      func_0x000103a0db60(&uStack_500,auStack_5e8);
      FUN_103a01ca8(param_1,param_2,param_3,param_4);
    }
  }
  else if (iVar1 == 0x12) {
    uStack_438 = uStack_348;
    uStack_440 = uStack_350;
    uStack_428 = uStack_338;
    uStack_430 = uStack_340;
    uStack_420 = uStack_330;
    uStack_478 = uStack_388;
    uStack_480 = uStack_390;
    uStack_468 = uStack_378;
    uStack_470 = uStack_380;
    uStack_458 = uStack_368;
    uStack_460 = uStack_370;
    uStack_448 = uStack_358;
    uStack_450 = uStack_360;
    uStack_4b8 = uStack_3c8;
    uStack_4c0 = uStack_3d0;
    uStack_4a8 = uStack_3b8;
    uStack_4b0 = uStack_3c0;
    uStack_498 = uStack_3a8;
    uStack_4a0 = uStack_3b0;
    uStack_488 = uStack_398;
    uStack_490 = uStack_3a0;
    uStack_4f8 = uStack_408;
    uStack_500 = uStack_410;
    uStack_4e8 = uStack_3f8;
    uStack_4f0 = uStack_400;
    uStack_4d8 = uStack_3e8;
    uStack_4e0 = uStack_3f0;
    uStack_4c8 = uStack_3d8;
    uStack_4d0 = uStack_3e0;
    func_0x000103a0db60(&uStack_500,auStack_5e8);
    FUN_103a01e48(param_1,param_2,param_3,param_4);
  }
  else if (iVar1 == 0x13) {
    uStack_438 = uStack_348;
    uStack_440 = uStack_350;
    uStack_428 = uStack_338;
    uStack_430 = uStack_340;
    uStack_420 = uStack_330;
    uStack_478 = uStack_388;
    uStack_480 = uStack_390;
    uStack_468 = uStack_378;
    uStack_470 = uStack_380;
    uStack_458 = uStack_368;
    uStack_460 = uStack_370;
    uStack_448 = uStack_358;
    uStack_450 = uStack_360;
    uStack_4b8 = uStack_3c8;
    uStack_4c0 = uStack_3d0;
    uStack_4a8 = uStack_3b8;
    uStack_4b0 = uStack_3c0;
    uStack_498 = uStack_3a8;
    uStack_4a0 = uStack_3b0;
    uStack_488 = uStack_398;
    uStack_490 = uStack_3a0;
    uStack_4f8 = uStack_408;
    uStack_500 = uStack_410;
    uStack_4e8 = uStack_3f8;
    uStack_4f0 = uStack_400;
    uStack_4d8 = uStack_3e8;
    uStack_4e0 = uStack_3f0;
    uStack_4c8 = uStack_3d8;
    uStack_4d0 = uStack_3e0;
    func_0x000103a0db60(&uStack_500,auStack_5e8);
    FUN_103a01fe8(param_1,param_2,param_3,param_4);
  }
  else {
    if (iVar1 != 0x14) {
      return;
    }
    uStack_438 = uStack_348;
    uStack_440 = uStack_350;
    uStack_428 = uStack_338;
    uStack_430 = uStack_340;
    uStack_420 = uStack_330;
    uStack_478 = uStack_388;
    uStack_480 = uStack_390;
    uStack_468 = uStack_378;
    uStack_470 = uStack_380;
    uStack_458 = uStack_368;
    uStack_460 = uStack_370;
    uStack_448 = uStack_358;
    uStack_450 = uStack_360;
    uStack_4b8 = uStack_3c8;
    uStack_4c0 = uStack_3d0;
    uStack_4a8 = uStack_3b8;
    uStack_4b0 = uStack_3c0;
    uStack_498 = uStack_3a8;
    uStack_4a0 = uStack_3b0;
    uStack_488 = uStack_398;
    uStack_490 = uStack_3a0;
    uStack_4f8 = uStack_408;
    uStack_500 = uStack_410;
    uStack_4e8 = uStack_3f8;
    uStack_4f0 = uStack_400;
    uStack_4d8 = uStack_3e8;
    uStack_4e0 = uStack_3f0;
    uStack_4c8 = uStack_3d8;
    uStack_4d0 = uStack_3e0;
    func_0x000103a0db60(&uStack_500,auStack_5e8);
    FUN_103a021b8(param_1,param_2,param_3,param_4);
  }
  puVar2 = &uStack_410;
code_r0x0001039fff18:
  func_0x000103a17eac(puVar2,0x112fc9888,&UNK_10dc38d08);
  return;
}



/* Entry: 1039fff3c; end: 103a000e7;  */

void FUN_1039fff3c(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined6 uStack_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0) {
      puVar2 = &uStack_310;
      func_0x000103a0db5c();
      uStack_358 = puVar2[1];
      uStack_360 = *puVar2;
      uStack_348 = puVar2[3];
      uStack_350 = puVar2[2];
      uStack_338 = puVar2[5];
      uStack_340 = puVar2[4];
      uStack_330 = puVar2[6];
      uStack_320 = (undefined6)((ulong)*(undefined8 *)((long)puVar2 + 0x3e) >> 0x10);
      uStack_328 = (undefined6)puVar2[7];
      uStack_322 = (undefined2)((ulong)puVar2[7] >> 0x30);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a1264c();
      (*pcVar3)(&uStack_360,1,&UNK_1106bdfe0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a000e8);
  (*pcVar3)();
}



/* Entry: 103a000e8; end: 103a0029f;  */

void FUN_103a000e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined8 uStack_31e;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 1) {
      puVar2 = &uStack_310;
      func_0x000103a0dbd4();
      uStack_378 = puVar2[1];
      uStack_380 = *puVar2;
      uStack_368 = puVar2[3];
      uStack_370 = puVar2[2];
      uStack_358 = puVar2[5];
      uStack_360 = puVar2[4];
      uStack_348 = puVar2[7];
      uStack_350 = puVar2[6];
      uStack_338 = puVar2[9];
      uStack_340 = puVar2[8];
      uStack_330 = puVar2[10];
      uStack_31e = *(undefined8 *)((long)puVar2 + 0x62);
      uStack_320 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x5a) >> 0x30);
      uStack_328 = (undefined2)puVar2[0xb];
      uStack_326 = (undefined6)((ulong)puVar2[0xb] >> 0x10);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12748();
      (*pcVar3)(&uStack_380,2,&UNK_1106be080,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a002a0);
  (*pcVar3)();
}



/* Entry: 103a002a0; end: 103a0044f;  */

void FUN_103a002a0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined6 uStack_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 2) {
      puVar2 = &uStack_310;
      func_0x000103a0dc18();
      uStack_358 = puVar2[1];
      uStack_360 = *puVar2;
      uStack_348 = puVar2[3];
      uStack_350 = puVar2[2];
      uStack_338 = puVar2[5];
      uStack_340 = puVar2[4];
      uStack_330 = puVar2[6];
      uStack_320 = (undefined6)((ulong)*(undefined8 *)((long)puVar2 + 0x3e) >> 0x10);
      uStack_328 = (undefined6)puVar2[7];
      uStack_322 = (undefined2)((ulong)puVar2[7] >> 0x30);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12844();
      (*pcVar3)(&uStack_360,3,&UNK_1106be120,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a00450);
  (*pcVar3)();
}



/* Entry: 103a00450; end: 103a00607;  */

void FUN_103a00450(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined8 uStack_31e;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 3) {
      puVar2 = &uStack_310;
      func_0x000103a0dc5c();
      uStack_378 = puVar2[1];
      uStack_380 = *puVar2;
      uStack_368 = puVar2[3];
      uStack_370 = puVar2[2];
      uStack_358 = puVar2[5];
      uStack_360 = puVar2[4];
      uStack_348 = puVar2[7];
      uStack_350 = puVar2[6];
      uStack_338 = puVar2[9];
      uStack_340 = puVar2[8];
      uStack_330 = puVar2[10];
      uStack_31e = *(undefined8 *)((long)puVar2 + 0x62);
      uStack_320 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x5a) >> 0x30);
      uStack_328 = (undefined2)puVar2[0xb];
      uStack_326 = (undefined6)((ulong)puVar2[0xb] >> 0x10);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12940();
      (*pcVar3)(&uStack_380,4,&UNK_1106be1c0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a00608);
  (*pcVar3)();
}



/* Entry: 103a00608; end: 103a007b7;  */

void FUN_103a00608(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined6 uStack_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 4) {
      puVar2 = &uStack_310;
      func_0x000103a0dca0();
      uStack_358 = puVar2[1];
      uStack_360 = *puVar2;
      uStack_348 = puVar2[3];
      uStack_350 = puVar2[2];
      uStack_338 = puVar2[5];
      uStack_340 = puVar2[4];
      uStack_330 = puVar2[6];
      uStack_320 = (undefined6)((ulong)*(undefined8 *)((long)puVar2 + 0x3e) >> 0x10);
      uStack_328 = (undefined6)puVar2[7];
      uStack_322 = (undefined2)((ulong)puVar2[7] >> 0x30);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12a3c();
      (*pcVar3)(&uStack_360,5,&UNK_1106be260,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a007b8);
  (*pcVar3)();
}



/* Entry: 103a007b8; end: 103a0096f;  */

void FUN_103a007b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined8 uStack_31e;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 5) {
      puVar2 = &uStack_310;
      func_0x000103a0dce4();
      uStack_378 = puVar2[1];
      uStack_380 = *puVar2;
      uStack_368 = puVar2[3];
      uStack_370 = puVar2[2];
      uStack_358 = puVar2[5];
      uStack_360 = puVar2[4];
      uStack_348 = puVar2[7];
      uStack_350 = puVar2[6];
      uStack_338 = puVar2[9];
      uStack_340 = puVar2[8];
      uStack_330 = puVar2[10];
      uStack_31e = *(undefined8 *)((long)puVar2 + 0x62);
      uStack_320 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x5a) >> 0x30);
      uStack_328 = (undefined2)puVar2[0xb];
      uStack_326 = (undefined6)((ulong)puVar2[0xb] >> 0x10);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12b38();
      (*pcVar3)(&uStack_380,6,&UNK_1106be300,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a00970);
  (*pcVar3)();
}



/* Entry: 103a00970; end: 103a00b1f;  */

void FUN_103a00970(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined6 uStack_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 6) {
      puVar2 = &uStack_310;
      func_0x000103a0dd28();
      uStack_358 = puVar2[1];
      uStack_360 = *puVar2;
      uStack_348 = puVar2[3];
      uStack_350 = puVar2[2];
      uStack_338 = puVar2[5];
      uStack_340 = puVar2[4];
      uStack_330 = puVar2[6];
      uStack_320 = (undefined6)((ulong)*(undefined8 *)((long)puVar2 + 0x3e) >> 0x10);
      uStack_328 = (undefined6)puVar2[7];
      uStack_322 = (undefined2)((ulong)puVar2[7] >> 0x30);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12c34();
      (*pcVar3)(&uStack_360,7,&UNK_1106be3a0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a00b20);
  (*pcVar3)();
}



/* Entry: 103a00b20; end: 103a00cd7;  */

void FUN_103a00b20(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined8 uStack_31e;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 7) {
      puVar2 = &uStack_310;
      func_0x000103a0dd6c();
      uStack_378 = puVar2[1];
      uStack_380 = *puVar2;
      uStack_368 = puVar2[3];
      uStack_370 = puVar2[2];
      uStack_358 = puVar2[5];
      uStack_360 = puVar2[4];
      uStack_348 = puVar2[7];
      uStack_350 = puVar2[6];
      uStack_338 = puVar2[9];
      uStack_340 = puVar2[8];
      uStack_330 = puVar2[10];
      uStack_31e = *(undefined8 *)((long)puVar2 + 0x62);
      uStack_320 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x5a) >> 0x30);
      uStack_328 = (undefined2)puVar2[0xb];
      uStack_326 = (undefined6)((ulong)puVar2[0xb] >> 0x10);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12d30();
      (*pcVar3)(&uStack_380,8,&UNK_1106be440,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a00cd8);
  (*pcVar3)();
}



/* Entry: 103a00cd8; end: 103a00e87;  */

void FUN_103a00cd8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined6 uStack_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 8) {
      puVar2 = &uStack_310;
      func_0x000103a0ddb0();
      uStack_358 = puVar2[1];
      uStack_360 = *puVar2;
      uStack_348 = puVar2[3];
      uStack_350 = puVar2[2];
      uStack_338 = puVar2[5];
      uStack_340 = puVar2[4];
      uStack_330 = puVar2[6];
      uStack_320 = (undefined6)((ulong)*(undefined8 *)((long)puVar2 + 0x3e) >> 0x10);
      uStack_328 = (undefined6)puVar2[7];
      uStack_322 = (undefined2)((ulong)puVar2[7] >> 0x30);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12e2c();
      (*pcVar3)(&uStack_360,9,&UNK_1106be4e0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a00e88);
  (*pcVar3)();
}



/* Entry: 103a00e88; end: 103a0103f;  */

void FUN_103a00e88(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined8 uStack_31e;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 9) {
      puVar2 = &uStack_310;
      func_0x000103a0ddf4();
      uStack_378 = puVar2[1];
      uStack_380 = *puVar2;
      uStack_368 = puVar2[3];
      uStack_370 = puVar2[2];
      uStack_358 = puVar2[5];
      uStack_360 = puVar2[4];
      uStack_348 = puVar2[7];
      uStack_350 = puVar2[6];
      uStack_338 = puVar2[9];
      uStack_340 = puVar2[8];
      uStack_330 = puVar2[10];
      uStack_31e = *(undefined8 *)((long)puVar2 + 0x62);
      uStack_320 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x5a) >> 0x30);
      uStack_328 = (undefined2)puVar2[0xb];
      uStack_326 = (undefined6)((ulong)puVar2[0xb] >> 0x10);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a12f28();
      (*pcVar3)(&uStack_380,10,&UNK_1106be580,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a01040);
  (*pcVar3)();
}



/* Entry: 103a01040; end: 103a011ef;  */

void FUN_103a01040(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 uStack_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined6 uStack_328;
  undefined2 uStack_322;
  undefined6 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 10) {
      puVar2 = &uStack_310;
      func_0x000103a0de38();
      uStack_358 = puVar2[1];
      uStack_360 = *puVar2;
      uStack_348 = puVar2[3];
      uStack_350 = puVar2[2];
      uStack_338 = puVar2[5];
      uStack_340 = puVar2[4];
      uStack_330 = puVar2[6];
      uStack_320 = (undefined6)((ulong)*(undefined8 *)((long)puVar2 + 0x3e) >> 0x10);
      uStack_328 = (undefined6)puVar2[7];
      uStack_322 = (undefined2)((ulong)puVar2[7] >> 0x30);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13024();
      (*pcVar3)(&uStack_360,0xb,&UNK_1106be620,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a011f0);
  (*pcVar3)();
}



/* Entry: 103a011f0; end: 103a013a7;  */

void FUN_103a011f0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined2 uStack_328;
  undefined6 uStack_326;
  undefined2 uStack_320;
  undefined8 uStack_31e;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0xb) {
      puVar2 = &uStack_310;
      func_0x000103a0de7c();
      uStack_378 = puVar2[1];
      uStack_380 = *puVar2;
      uStack_368 = puVar2[3];
      uStack_370 = puVar2[2];
      uStack_358 = puVar2[5];
      uStack_360 = puVar2[4];
      uStack_348 = puVar2[7];
      uStack_350 = puVar2[6];
      uStack_338 = puVar2[9];
      uStack_340 = puVar2[8];
      uStack_330 = puVar2[10];
      uStack_31e = *(undefined8 *)((long)puVar2 + 0x62);
      uStack_320 = (undefined2)((ulong)*(undefined8 *)((long)puVar2 + 0x5a) >> 0x30);
      uStack_328 = (undefined2)puVar2[0xb];
      uStack_326 = (undefined6)((ulong)puVar2[0xb] >> 0x10);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13120();
      (*pcVar3)(&uStack_380,0xc,&UNK_1106be6c0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a013a8);
  (*pcVar3)();
}



/* Entry: 103a013a8; end: 103a01547;  */

void FUN_103a013a8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0xc) {
      puVar2 = &uStack_310;
      func_0x000103a0dec0();
      uStack_320 = *(undefined1 *)(puVar2 + 2);
      uStack_328 = puVar2[1];
      uStack_330 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a1321c();
      (*pcVar3)(&uStack_330,0xd,&UNK_1106be760,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a01548);
  (*pcVar3)();
}



/* Entry: 103a01548; end: 103a016e7;  */

void FUN_103a01548(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0xd) {
      puVar2 = &uStack_310;
      func_0x000103a0ded0();
      uStack_320 = puVar2[2];
      uStack_328 = puVar2[1];
      uStack_330 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13318();
      (*pcVar3)(&uStack_330,0xe,&UNK_1106be7e0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a016e8);
  (*pcVar3)();
}



/* Entry: 103a016e8; end: 103a018af;  */

void FUN_103a016e8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_328;
  undefined7 uStack_327;
  undefined1 uStack_320;
  undefined8 uStack_31f;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0xe) {
      puVar2 = &uStack_310;
      func_0x000103a0dee0();
      uStack_3b8 = puVar2[1];
      uStack_3c0 = *puVar2;
      uStack_3a8 = puVar2[3];
      uStack_3b0 = puVar2[2];
      uStack_398 = puVar2[5];
      uStack_3a0 = puVar2[4];
      uStack_388 = puVar2[7];
      uStack_390 = puVar2[6];
      uStack_378 = puVar2[9];
      uStack_380 = puVar2[8];
      uStack_368 = puVar2[0xb];
      uStack_370 = puVar2[10];
      uStack_358 = puVar2[0xd];
      uStack_360 = puVar2[0xc];
      uStack_348 = puVar2[0xf];
      uStack_350 = puVar2[0xe];
      uStack_338 = puVar2[0x11];
      uStack_340 = puVar2[0x10];
      uStack_330 = puVar2[0x12];
      uStack_31f = *(undefined8 *)((long)puVar2 + 0xa1);
      uStack_320 = (undefined1)((ulong)*(undefined8 *)((long)puVar2 + 0x99) >> 0x38);
      uStack_328 = (undefined1)puVar2[0x13];
      uStack_327 = (undefined7)((ulong)puVar2[0x13] >> 8);
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13414();
      (*pcVar3)(&uStack_3c0,0xf,&UNK_1106be8f0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a018b0);
  (*pcVar3)();
}



/* Entry: 103a018b0; end: 103a01a57;  */

void FUN_103a018b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined4 uStack_320;
  undefined2 uStack_31c;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0xf) {
      puVar2 = &uStack_310;
      func_0x000103a0df24();
      uStack_320 = *(undefined4 *)(puVar2 + 4);
      uStack_31c = *(undefined2 *)((long)puVar2 + 0x24);
      uStack_338 = puVar2[1];
      uStack_340 = *puVar2;
      uStack_328 = puVar2[3];
      uStack_330 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13510();
      (*pcVar3)(&uStack_340,0x10,&UNK_1106bea30,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a01a58);
  (*pcVar3)();
}



/* Entry: 103a01a58; end: 103a01b07;  */

void FUN_103a01a58(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ushort uVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  undefined1 uStack_5f;
  undefined1 auStack_58 [24];
  
  lVar2 = param_1 + 0x10;
  func_0x000107c61428(lVar2,auStack_58,0,0);
  uVar1 = *(ushort *)(param_1 + 0x20);
  if ((uVar1 & 0xff) != 3) {
    uStack_68 = *(undefined8 *)(param_1 + 0x18);
    uStack_70 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = (undefined1)uVar1;
    uStack_5f = (undefined1)(uVar1 >> 8);
    pcVar3 = *(code **)(param_4 + 0x88);
    func_0x000103a1360c();
    (*pcVar3)(&uStack_70,0x11,&UNK_1106beac0,lVar2,param_3,param_4);
  }
  return;
}



/* Entry: 103a01b08; end: 103a01ca7;  */

void FUN_103a01b08(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0x10) {
      puVar2 = &uStack_310;
      func_0x000103a0df54();
      uStack_320 = puVar2[2];
      uStack_328 = puVar2[1];
      uStack_330 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13708();
      (*pcVar3)(&uStack_330,0x12,&UNK_1106beb48,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a01ca8);
  (*pcVar3)();
}



/* Entry: 103a01ca8; end: 103a01e47;  */

void FUN_103a01ca8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0x11) {
      puVar2 = &uStack_310;
      func_0x000103a0df84();
      uStack_320 = puVar2[2];
      uStack_328 = puVar2[1];
      uStack_330 = *puVar2;
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13804();
      (*pcVar3)(&uStack_330,0x13,&UNK_1106bebc8,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a01e48);
  (*pcVar3)();
}



/* Entry: 103a01e48; end: 103a01fe7;  */

void FUN_103a01e48(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 uStack_330;
  undefined8 uStack_328;
  undefined1 uStack_320;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0x12) {
      puVar2 = &uStack_310;
      func_0x000103a0df94();
      uStack_320 = *(undefined1 *)(puVar2 + 4);
      uStack_338 = puVar2[1];
      uStack_340 = *puVar2;
      uStack_328 = puVar2[3];
      uStack_330 = puVar2[2];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13900();
      (*pcVar3)(&uStack_340,0x14,&UNK_1106bec48,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a01fe8);
  (*pcVar3)();
}



/* Entry: 103a01fe8; end: 103a021b7;  */

void FUN_103a01fe8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0x13) {
      puVar2 = &uStack_310;
      func_0x000103a0dfa4();
      uStack_3d8 = puVar2[1];
      uStack_3e0 = *puVar2;
      uStack_3c8 = puVar2[3];
      uStack_3d0 = puVar2[2];
      uStack_3b8 = puVar2[5];
      uStack_3c0 = puVar2[4];
      uStack_3a8 = puVar2[7];
      uStack_3b0 = puVar2[6];
      uStack_398 = puVar2[9];
      uStack_3a0 = puVar2[8];
      uStack_388 = puVar2[0xb];
      uStack_390 = puVar2[10];
      uStack_378 = puVar2[0xd];
      uStack_380 = puVar2[0xc];
      uStack_368 = puVar2[0xf];
      uStack_370 = puVar2[0xe];
      uStack_358 = puVar2[0x11];
      uStack_360 = puVar2[0x10];
      uStack_348 = puVar2[0x13];
      uStack_350 = puVar2[0x12];
      uStack_338 = puVar2[0x15];
      uStack_340 = puVar2[0x14];
      uStack_328 = puVar2[0x17];
      uStack_330 = puVar2[0x16];
      uStack_320 = puVar2[0x18];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a139fc();
      (*pcVar3)(&uStack_3e0,0x15,&UNK_1106becd0,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a021b8);
  (*pcVar3)();
}



/* Entry: 103a021b8; end: 103a0237f;  */

void FUN_103a021b8(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  int iVar1;
  undefined8 *puVar2;
  code *pcVar3;
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
  undefined1 uStack_230;
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
  undefined1 uStack_140;
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
  undefined1 uStack_50;
  
  uStack_168 = *(undefined8 *)(param_1 + 0xe0);
  uStack_170 = *(undefined8 *)(param_1 + 0xd8);
  uStack_158 = *(undefined8 *)(param_1 + 0xf0);
  uStack_160 = *(undefined8 *)(param_1 + 0xe8);
  uStack_148 = *(undefined8 *)(param_1 + 0x100);
  uStack_150 = *(undefined8 *)(param_1 + 0xf8);
  uStack_140 = *(undefined1 *)(param_1 + 0x108);
  uStack_1a8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_1b0 = *(undefined8 *)(param_1 + 0x98);
  uStack_198 = *(undefined8 *)(param_1 + 0xb0);
  uStack_1a0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_188 = *(undefined8 *)(param_1 + 0xc0);
  uStack_190 = *(undefined8 *)(param_1 + 0xb8);
  uStack_178 = *(undefined8 *)(param_1 + 0xd0);
  uStack_180 = *(undefined8 *)(param_1 + 200);
  uStack_1e8 = *(undefined8 *)(param_1 + 0x60);
  uStack_1f0 = *(undefined8 *)(param_1 + 0x58);
  uStack_1d8 = *(undefined8 *)(param_1 + 0x70);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x68);
  uStack_1c8 = *(undefined8 *)(param_1 + 0x80);
  uStack_1d0 = *(undefined8 *)(param_1 + 0x78);
  uStack_1b8 = *(undefined8 *)(param_1 + 0x90);
  uStack_1c0 = *(undefined8 *)(param_1 + 0x88);
  uStack_218 = *(undefined8 *)(param_1 + 0x30);
  uStack_220 = *(undefined8 *)(param_1 + 0x28);
  uStack_208 = *(undefined8 *)(param_1 + 0x40);
  uStack_210 = *(undefined8 *)(param_1 + 0x38);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x50);
  uStack_200 = *(undefined8 *)(param_1 + 0x48);
  uStack_78 = *(undefined8 *)(param_1 + 0xe0);
  uStack_80 = *(undefined8 *)(param_1 + 0xd8);
  uStack_68 = *(undefined8 *)(param_1 + 0xf0);
  uStack_70 = *(undefined8 *)(param_1 + 0xe8);
  uStack_58 = *(undefined8 *)(param_1 + 0x100);
  uStack_60 = *(undefined8 *)(param_1 + 0xf8);
  uStack_50 = *(undefined1 *)(param_1 + 0x108);
  uStack_b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_98 = *(undefined8 *)(param_1 + 0xc0);
  uStack_a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_88 = *(undefined8 *)(param_1 + 0xd0);
  uStack_90 = *(undefined8 *)(param_1 + 200);
  uStack_f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_100 = *(undefined8 *)(param_1 + 0x58);
  uStack_e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_128 = *(undefined8 *)(param_1 + 0x30);
  uStack_130 = *(undefined8 *)(param_1 + 0x28);
  uStack_118 = *(undefined8 *)(param_1 + 0x40);
  uStack_120 = *(undefined8 *)(param_1 + 0x38);
  uStack_108 = *(undefined8 *)(param_1 + 0x50);
  uStack_110 = *(undefined8 *)(param_1 + 0x48);
  iVar1 = (int)&uStack_220;
  func_0x000103a0db40();
  if (iVar1 != 1) {
    uStack_248 = uStack_68;
    uStack_250 = uStack_70;
    uStack_238 = uStack_58;
    uStack_240 = uStack_60;
    uStack_230 = uStack_50;
    uStack_288 = uStack_a8;
    uStack_290 = uStack_b0;
    uStack_278 = uStack_98;
    uStack_280 = uStack_a0;
    uStack_268 = uStack_88;
    uStack_270 = uStack_90;
    uStack_258 = uStack_78;
    uStack_260 = uStack_80;
    uStack_2c8 = uStack_e8;
    uStack_2d0 = uStack_f0;
    uStack_2b8 = uStack_d8;
    uStack_2c0 = uStack_e0;
    uStack_2a8 = uStack_c8;
    uStack_2b0 = uStack_d0;
    uStack_298 = uStack_b8;
    uStack_2a0 = uStack_c0;
    uStack_308 = uStack_128;
    uStack_310 = uStack_130;
    uStack_2f8 = uStack_118;
    uStack_300 = uStack_120;
    uStack_2e8 = uStack_108;
    uStack_2f0 = uStack_110;
    uStack_2d8 = uStack_f8;
    uStack_2e0 = uStack_100;
    iVar1 = (int)&uStack_130;
    func_0x000103a0db54();
    if (iVar1 == 0x14) {
      puVar2 = &uStack_310;
      func_0x000103a0dfe8();
      uStack_3e8 = puVar2[1];
      uStack_3f0 = *puVar2;
      uStack_3d8 = puVar2[3];
      uStack_3e0 = puVar2[2];
      uStack_3c8 = puVar2[5];
      uStack_3d0 = puVar2[4];
      uStack_3b8 = puVar2[7];
      uStack_3c0 = puVar2[6];
      uStack_3a8 = puVar2[9];
      uStack_3b0 = puVar2[8];
      uStack_398 = puVar2[0xb];
      uStack_3a0 = puVar2[10];
      uStack_388 = puVar2[0xd];
      uStack_390 = puVar2[0xc];
      uStack_378 = puVar2[0xf];
      uStack_380 = puVar2[0xe];
      uStack_368 = puVar2[0x11];
      uStack_370 = puVar2[0x10];
      uStack_358 = puVar2[0x13];
      uStack_360 = puVar2[0x12];
      uStack_348 = puVar2[0x15];
      uStack_350 = puVar2[0x14];
      uStack_338 = puVar2[0x17];
      uStack_340 = puVar2[0x16];
      uStack_328 = puVar2[0x19];
      uStack_330 = puVar2[0x18];
      uStack_318 = puVar2[0x1b];
      uStack_320 = puVar2[0x1a];
      pcVar3 = *(code **)(param_4 + 0x88);
      func_0x000103a13b28();
      (*pcVar3)(&uStack_3f0,0x16,&UNK_1106bed70,puVar2,param_3,param_4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103a02380);
  (*pcVar3)();
}



/* Entry: 103a02380; end: 103a02943;  */

undefined8 FUN_103a02380(long param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined1 auStack_9c8 [232];
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
  undefined1 uStack_800;
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
  undefined8 uStack_730;
  undefined8 uStack_728;
  undefined8 uStack_720;
  undefined8 uStack_718;
  undefined1 uStack_710;
  undefined8 uStack_700;
  undefined8 uStack_6f8;
  undefined8 uStack_6f0;
  undefined8 uStack_6e8;
  undefined8 uStack_6e0;
  undefined8 uStack_6d8;
  undefined8 uStack_6d0;
  undefined8 uStack_6c8;
  undefined8 uStack_6c0;
  undefined8 uStack_6b8;
  undefined8 uStack_6b0;
  undefined8 uStack_6a8;
  undefined8 uStack_6a0;
  undefined8 uStack_698;
  undefined8 uStack_690;
  undefined8 uStack_688;
  undefined8 uStack_680;
  undefined8 uStack_678;
  undefined8 uStack_670;
  undefined8 uStack_668;
  undefined8 uStack_660;
  undefined8 uStack_658;
  undefined8 uStack_650;
  undefined8 uStack_648;
  undefined8 uStack_640;
  undefined8 uStack_638;
  undefined8 uStack_630;
  undefined8 uStack_628;
  undefined1 uStack_620;
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
  undefined1 uStack_450;
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
  undefined1 uStack_368;
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
  undefined1 uStack_280;
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
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined1 uStack_190;
  undefined1 auStack_180 [24];
  undefined1 auStack_168 [24];
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
  undefined1 uStack_70;
  
  func_0x000107c61428(param_1 + 0x10,auStack_168,0,0);
  func_0x000107c61428(param_2 + 0x10,auStack_180,0,0);
  uVar1 = *(ulong *)(param_1 + 0x10);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar5 = *(ushort *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar4 = *(undefined8 *)(param_2 + 0x18);
  uVar6 = *(ushort *)(param_2 + 0x20);
  if ((uVar5 & 0xff) == 3) {
    if ((uVar6 & 0xff) != 3) {
LAB_103a02434:
      FUN_1039f7ef0(uVar1,uVar3,uVar5);
      FUN_1039f7ef0(uVar2,uVar4,uVar6);
      FUN_1039f83f8(uVar1,uVar3,uVar5);
      FUN_1039f83f8(uVar2,uVar4,uVar6);
      return 0;
    }
    FUN_1039f7ef0(uVar1,uVar3,uVar5);
    FUN_1039f7ef0(uVar2,uVar4,uVar6);
    FUN_1039f83f8(uVar1,uVar3,uVar5);
  }
  else {
    if ((uVar6 & 0xff) == 3) goto LAB_103a02434;
    FUN_1039f7ef0(uVar1,uVar3,uVar5);
    FUN_1039f7ef0(uVar2,uVar4,uVar6);
    uVar9 = uVar1;
    func_0x000103a0dad0(uVar1,uVar3,uVar5,uVar2,uVar4,uVar6);
    FUN_1039f83f8(uVar2,uVar4,uVar6);
    FUN_1039f83f8(uVar1,uVar3,uVar5);
    if ((uVar9 & 1) == 0) {
      return 0;
    }
  }
  uStack_2a8 = *(undefined8 *)(param_1 + 0xe0);
  uStack_2b0 = *(undefined8 *)(param_1 + 0xd8);
  uStack_298 = *(undefined8 *)(param_1 + 0xf0);
  uStack_2a0 = *(undefined8 *)(param_1 + 0xe8);
  iVar8 = (int)&uStack_448;
  uStack_288 = *(undefined8 *)(param_1 + 0x100);
  uStack_290 = *(undefined8 *)(param_1 + 0xf8);
  uStack_280 = *(undefined1 *)(param_1 + 0x108);
  uStack_2e8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_2f0 = *(undefined8 *)(param_1 + 0x98);
  uStack_2d8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_2e0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_2c8 = *(undefined8 *)(param_1 + 0xc0);
  uStack_2d0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_2b8 = *(undefined8 *)(param_1 + 0xd0);
  uStack_2c0 = *(undefined8 *)(param_1 + 200);
  uStack_328 = *(undefined8 *)(param_1 + 0x60);
  uStack_330 = *(undefined8 *)(param_1 + 0x58);
  uStack_318 = *(undefined8 *)(param_1 + 0x70);
  uStack_320 = *(undefined8 *)(param_1 + 0x68);
  uStack_308 = *(undefined8 *)(param_1 + 0x80);
  uStack_310 = *(undefined8 *)(param_1 + 0x78);
  uStack_2f8 = *(undefined8 *)(param_1 + 0x90);
  uStack_300 = *(undefined8 *)(param_1 + 0x88);
  uStack_358 = *(undefined8 *)(param_1 + 0x30);
  uStack_360 = *(undefined8 *)(param_1 + 0x28);
  uStack_348 = *(undefined8 *)(param_1 + 0x40);
  uStack_350 = *(undefined8 *)(param_1 + 0x38);
  uStack_338 = *(undefined8 *)(param_1 + 0x50);
  uStack_340 = *(undefined8 *)(param_1 + 0x48);
  uStack_478 = *(undefined8 *)(param_1 + 0xe0);
  uStack_480 = *(undefined8 *)(param_1 + 0xd8);
  uStack_468 = *(undefined8 *)(param_1 + 0xf0);
  uStack_470 = *(undefined8 *)(param_1 + 0xe8);
  uStack_458 = *(undefined8 *)(param_1 + 0x100);
  uStack_460 = *(undefined8 *)(param_1 + 0xf8);
  uStack_450 = *(undefined1 *)(param_1 + 0x108);
  uStack_4b8 = *(undefined8 *)(param_1 + 0xa0);
  uStack_4c0 = *(undefined8 *)(param_1 + 0x98);
  uStack_4a8 = *(undefined8 *)(param_1 + 0xb0);
  uStack_4b0 = *(undefined8 *)(param_1 + 0xa8);
  uStack_498 = *(undefined8 *)(param_1 + 0xc0);
  uStack_4a0 = *(undefined8 *)(param_1 + 0xb8);
  uStack_488 = *(undefined8 *)(param_1 + 0xd0);
  uStack_490 = *(undefined8 *)(param_1 + 200);
  uStack_4f8 = *(undefined8 *)(param_1 + 0x60);
  uStack_500 = *(undefined8 *)(param_1 + 0x58);
  uStack_4e8 = *(undefined8 *)(param_1 + 0x70);
  uStack_4f0 = *(undefined8 *)(param_1 + 0x68);
  uStack_4d8 = *(undefined8 *)(param_1 + 0x80);
  uStack_4e0 = *(undefined8 *)(param_1 + 0x78);
  uStack_4c8 = *(undefined8 *)(param_1 + 0x90);
  uStack_4d0 = *(undefined8 *)(param_1 + 0x88);
  uStack_528 = *(undefined8 *)(param_1 + 0x30);
  uStack_530 = *(undefined8 *)(param_1 + 0x28);
  uStack_518 = *(undefined8 *)(param_1 + 0x40);
  uStack_520 = *(undefined8 *)(param_1 + 0x38);
  uStack_508 = *(undefined8 *)(param_1 + 0x50);
  uStack_510 = *(undefined8 *)(param_1 + 0x48);
  uStack_1b8 = *(undefined8 *)(param_2 + 0xe0);
  uStack_1c0 = *(undefined8 *)(param_2 + 0xd8);
  uStack_1a8 = *(undefined8 *)(param_2 + 0xf0);
  uStack_1b0 = *(undefined8 *)(param_2 + 0xe8);
  uStack_198 = *(undefined8 *)(param_2 + 0x100);
  uStack_1a0 = *(undefined8 *)(param_2 + 0xf8);
  uStack_190 = *(undefined1 *)(param_2 + 0x108);
  uStack_1f8 = *(undefined8 *)(param_2 + 0xa0);
  uStack_200 = *(undefined8 *)(param_2 + 0x98);
  uStack_1e8 = *(undefined8 *)(param_2 + 0xb0);
  uStack_1f0 = *(undefined8 *)(param_2 + 0xa8);
  uStack_1d8 = *(undefined8 *)(param_2 + 0xc0);
  uStack_1e0 = *(undefined8 *)(param_2 + 0xb8);
  uStack_1c8 = *(undefined8 *)(param_2 + 0xd0);
  uStack_1d0 = *(undefined8 *)(param_2 + 200);
  uStack_238 = *(undefined8 *)(param_2 + 0x60);
  uStack_240 = *(undefined8 *)(param_2 + 0x58);
  uStack_228 = *(undefined8 *)(param_2 + 0x70);
  uStack_230 = *(undefined8 *)(param_2 + 0x68);
  uStack_218 = *(undefined8 *)(param_2 + 0x80);
  uStack_220 = *(undefined8 *)(param_2 + 0x78);
  uStack_208 = *(undefined8 *)(param_2 + 0x90);
  uStack_210 = *(undefined8 *)(param_2 + 0x88);
  uStack_268 = *(undefined8 *)(param_2 + 0x30);
  uStack_270 = *(undefined8 *)(param_2 + 0x28);
  uStack_258 = *(undefined8 *)(param_2 + 0x40);
  uStack_260 = *(undefined8 *)(param_2 + 0x38);
  uStack_248 = *(undefined8 *)(param_2 + 0x50);
  uStack_250 = *(undefined8 *)(param_2 + 0x48);
  uStack_390 = *(undefined8 *)(param_2 + 0xe0);
  uStack_398 = *(undefined8 *)(param_2 + 0xd8);
  uStack_380 = *(undefined8 *)(param_2 + 0xf0);
  uStack_388 = *(undefined8 *)(param_2 + 0xe8);
  uStack_370 = *(undefined8 *)(param_2 + 0x100);
  uStack_378 = *(undefined8 *)(param_2 + 0xf8);
  uStack_3d0 = *(undefined8 *)(param_2 + 0xa0);
  uStack_3d8 = *(undefined8 *)(param_2 + 0x98);
  uStack_3c0 = *(undefined8 *)(param_2 + 0xb0);
  uStack_3c8 = *(undefined8 *)(param_2 + 0xa8);
  uStack_3b0 = *(undefined8 *)(param_2 + 0xc0);
  uStack_3b8 = *(undefined8 *)(param_2 + 0xb8);
  uStack_3a0 = *(undefined8 *)(param_2 + 0xd0);
  uStack_3a8 = *(undefined8 *)(param_2 + 200);
  uStack_410 = *(undefined8 *)(param_2 + 0x60);
  uStack_418 = *(undefined8 *)(param_2 + 0x58);
  uStack_400 = *(undefined8 *)(param_2 + 0x70);
  uStack_408 = *(undefined8 *)(param_2 + 0x68);
  uStack_3f0 = *(undefined8 *)(param_2 + 0x80);
  uStack_3f8 = *(undefined8 *)(param_2 + 0x78);
  uStack_3e0 = *(undefined8 *)(param_2 + 0x90);
  uStack_3e8 = *(undefined8 *)(param_2 + 0x88);
  uStack_420 = *(undefined8 *)(param_2 + 0x50);
  uStack_428 = *(undefined8 *)(param_2 + 0x48);
  uStack_368 = *(undefined1 *)(param_2 + 0x108);
  uStack_440 = *(undefined8 *)(param_2 + 0x30);
  uStack_448 = *(undefined8 *)(param_2 + 0x28);
  uStack_430 = *(undefined8 *)(param_2 + 0x40);
  uStack_438 = *(undefined8 *)(param_2 + 0x38);
  iVar7 = (int)&uStack_530;
  func_0x000103a0db40();
  if (iVar7 == 1) {
    func_0x000103a0db40();
    if (iVar8 == 1) {
      uStack_638 = uStack_468;
      uStack_640 = uStack_470;
      uStack_628 = uStack_458;
      uStack_630 = uStack_460;
      uStack_620 = uStack_450;
      uStack_678 = uStack_4a8;
      uStack_680 = uStack_4b0;
      uStack_668 = uStack_498;
      uStack_670 = uStack_4a0;
      uStack_658 = uStack_488;
      uStack_660 = uStack_490;
      uStack_648 = uStack_478;
      uStack_650 = uStack_480;
      uStack_6b8 = uStack_4e8;
      uStack_6c0 = uStack_4f0;
      uStack_6a8 = uStack_4d8;
      uStack_6b0 = uStack_4e0;
      uStack_698 = uStack_4c8;
      uStack_6a0 = uStack_4d0;
      uStack_688 = uStack_4b8;
      uStack_690 = uStack_4c0;
      uStack_6f8 = uStack_528;
      uStack_700 = uStack_530;
      uStack_6e8 = uStack_518;
      uStack_6f0 = uStack_520;
      uStack_6d8 = uStack_508;
      uStack_6e0 = uStack_510;
      uStack_6c8 = uStack_4f8;
      uStack_6d0 = uStack_500;
      func_0x000103a11d64(&uStack_360,&uStack_150,0x112fc9888,&UNK_10dc38d08);
      func_0x000103a11d64(&uStack_270,&uStack_150,0x112fc9888,&UNK_10dc38d08);
      func_0x000103a17eac(&uStack_700,0x112fc9888,&UNK_10dc38d08);
      return 1;
    }
  }
  else {
    uStack_728 = uStack_468;
    uStack_730 = uStack_470;
    uStack_718 = uStack_458;
    uStack_720 = uStack_460;
    uStack_710 = uStack_450;
    uStack_768 = uStack_4a8;
    uStack_770 = uStack_4b0;
    uStack_758 = uStack_498;
    uStack_760 = uStack_4a0;
    uStack_748 = uStack_488;
    uStack_750 = uStack_490;
    uStack_738 = uStack_478;
    uStack_740 = uStack_480;
    uStack_7a8 = uStack_4e8;
    uStack_7b0 = uStack_4f0;
    uStack_798 = uStack_4d8;
    uStack_7a0 = uStack_4e0;
    uStack_788 = uStack_4c8;
    uStack_790 = uStack_4d0;
    uStack_778 = uStack_4b8;
    uStack_780 = uStack_4c0;
    uStack_7e8 = uStack_528;
    uStack_7f0 = uStack_530;
    uStack_7d8 = uStack_518;
    uStack_7e0 = uStack_520;
    uStack_7c8 = uStack_508;
    uStack_7d0 = uStack_510;
    uStack_7b8 = uStack_4f8;
    uStack_7c0 = uStack_500;
    func_0x000103a0db40();
    if (iVar8 != 1) {
      uStack_818 = uStack_380;
      uStack_820 = uStack_388;
      uStack_808 = uStack_370;
      uStack_810 = uStack_378;
      uStack_858 = uStack_3c0;
      uStack_860 = uStack_3c8;
      uStack_848 = uStack_3b0;
      uStack_850 = uStack_3b8;
      uStack_838 = uStack_3a0;
      uStack_840 = uStack_3a8;
      uStack_828 = uStack_390;
      uStack_830 = uStack_398;
      uStack_898 = uStack_400;
      uStack_8a0 = uStack_408;
      uStack_888 = uStack_3f0;
      uStack_890 = uStack_3f8;
      uStack_878 = uStack_3e0;
      uStack_880 = uStack_3e8;
      uStack_868 = uStack_3d0;
      uStack_870 = uStack_3d8;
      uStack_8d8 = uStack_440;
      uStack_8e0 = uStack_448;
      uStack_8c8 = uStack_430;
      uStack_8d0 = uStack_438;
      uStack_8b8 = uStack_420;
      uStack_8c0 = uStack_428;
      uStack_8a8 = uStack_410;
      uStack_8b0 = uStack_418;
      uStack_638 = uStack_380;
      uStack_640 = uStack_388;
      uStack_628 = uStack_370;
      uStack_630 = uStack_378;
      uStack_678 = uStack_3c0;
      uStack_680 = uStack_3c8;
      uStack_668 = uStack_3b0;
      uStack_670 = uStack_3b8;
      uStack_658 = uStack_3a0;
      uStack_660 = uStack_3a8;
      uStack_648 = uStack_390;
      uStack_650 = uStack_398;
      uStack_6b8 = uStack_400;
      uStack_6c0 = uStack_408;
      uStack_6a8 = uStack_3f0;
      uStack_6b0 = uStack_3f8;
      uStack_698 = uStack_3e0;
      uStack_6a0 = uStack_3e8;
      uStack_688 = uStack_3d0;
      uStack_690 = uStack_3d8;
      uStack_6f8 = uStack_440;
      uStack_700 = uStack_448;
      uStack_6e8 = uStack_430;
      uStack_6f0 = uStack_438;
      uStack_6d8 = uStack_420;
      uStack_6e0 = uStack_428;
      uStack_6c8 = uStack_410;
      uStack_6d0 = uStack_418;
      uStack_98 = uStack_738;
      uStack_a0 = uStack_740;
      uStack_88 = uStack_728;
      uStack_90 = uStack_730;
      uStack_78 = uStack_718;
      uStack_80 = uStack_720;
      uStack_d8 = uStack_778;
      uStack_e0 = uStack_780;
      uStack_c8 = uStack_768;
      uStack_d0 = uStack_770;
      uStack_b8 = uStack_758;
      uStack_c0 = uStack_760;
      uStack_a8 = uStack_748;
      uStack_b0 = uStack_750;
      uStack_118 = uStack_7b8;
      uStack_120 = uStack_7c0;
      uStack_108 = uStack_7a8;
      uStack_110 = uStack_7b0;
      uStack_f8 = uStack_798;
      uStack_100 = uStack_7a0;
      uStack_e8 = uStack_788;
      uStack_f0 = uStack_790;
      uStack_148 = uStack_7e8;
      uStack_150 = uStack_7f0;
      uStack_138 = uStack_7d8;
      uStack_140 = uStack_7e0;
      uStack_800 = uStack_368;
      uStack_620 = uStack_368;
      uStack_70 = uStack_710;
      uStack_128 = uStack_7c8;
      uStack_130 = uStack_7d0;
      func_0x000103a11d64(&uStack_360,auStack_9c8,0x112fc9888,&UNK_10dc38d08);
      func_0x000103a11d64(&uStack_270,auStack_9c8,0x112fc9888,&UNK_10dc38d08);
      puVar10 = &uStack_150;
      func_0x000103a10384(puVar10,&uStack_700);
      func_0x000103a17eac(&uStack_8e0,0x112fc9888,&UNK_10dc38d08);
      func_0x000103a17eac(&uStack_530,0x112fc9888,&UNK_10dc38d08);
      if (((ulong)puVar10 & 1) == 0) {
        return 0;
      }
      return 1;
    }
  }
  func_0x000107c610b4(&uStack_700,&uStack_530,0x1c9);
  func_0x000103a11d64(&uStack_360,&uStack_150,0x112fc9888,&UNK_10dc38d08);
  func_0x000103a11d64(&uStack_270,&uStack_150,0x112fc9888,&UNK_10dc38d08);
  func_0x000103a17eac(&uStack_700,0x112fca6c8,&UNK_10dc3ab58);
  return 0;
}



/* Entry: 103a02944; end: 103a0298f;  */

void FUN_103a02944(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1039f7f04();
  func_0x000107c61538();
  param_1[1] = 0xc000000000000000;
  *param_1 = 0;
  param_1[2] = uVar1;
  return;
}



/* Entry: 103a02990; end: 103a029cf;  */

void FUN_103a02990(void)

{
  FUN_1039f844c();
  return;
}



/* Entry: 103a029d0; end: 103a02a07;  */

uint FUN_103a029d0(long param_1,long param_2)

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
  func_0x000103a17c14();
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



/* Entry: 103a02a08; end: 103a02a13;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a02a08(long *param_1)

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
    FUN_103a02380(uVar25,uVar26);
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



/* Entry: 103a02a14; end: 103a02ab3;  */

/* WARNING: Possible PIC construction at 0x000103a02a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103a02a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103a02a64) */
/* WARNING: Removing unreachable block (ram,0x000103a02a74) */

void FUN_103a02a14(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000112fc9a90 != -1) {
    func_0x000107c61568(0x112fc9a90,FUN_1039f8114);
  }
  uVar5 = uRam000000011380c790;
  uVar4 = uRam000000011380c788;
  uVar3 = uRam000000011380c780;
  uVar2 = uRam000000011380c778;
  uVar1 = uRam000000011380c770;
  *param_1 = uRam000000011380c768;
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



/* Entry: 103a02ab4; end: 103a02ac7;  */

void FUN_103a02ab4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0x112fca5f8;
  uStack_18 = param_1;
  func_0x0001000285a8(0x112fca5f8,&UNK_10dc3a6d8);
  func_0x000107c5fb20(&uStack_18,uVar1);
  return;
}



/* Entry: 103a02ac8; end: 103a02aff;  */

/* WARNING: Removing unreachable block (ram,0x0001045837e8) */

void FUN_103a02ac8(undefined8 *param_1,undefined8 param_2)

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
  func_0x000103a12550();
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



/* Entry: 103a02b00; end: 103a02b0b;  */

/* WARNING: Possible PIC construction at 0x000100e263a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e2653c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000100e26634: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100e26540) */
/* WARNING: Removing unreachable block (ram,0x000100e263ac) */
/* WARNING: Removing unreachable block (ram,0x000100e263b0) */
/* WARNING: Removing unreachable block (ram,0x000100e26638) */
/* WARNING: Removing unreachable block (ram,0x000100e26644) */
/* WARNING: Type propagation algorithm not settling */

byte * FUN_103a02b00(undefined8 *param_1,long *param_2)

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
    FUN_103a02380(uVar25,uVar26);
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



/* Entry: 103a02b0c; end: 103a02b53;  */

void FUN_103a02b0c(void)

{
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  func_0x00010458e1d8(&uStack_40,&UNK_10dc3a9b0,0x34,2);
  uRam000000011380c7a0 = uStack_38;
  uRam000000011380c798 = uStack_40;
  uRam000000011380c7b0 = uStack_28;
  uRam000000011380c7a8 = uStack_30;
  uRam000000011380c7c0 = uStack_18;
  uRam000000011380c7b8 = uStack_20;
  return;
}



/* Entry: 103a02b54; end: 103a02c7f;  */

void FUN_103a02b54(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  
  pcVar4 = *(code **)(param_3 + 0x10);
  lVar1 = param_2;
  lVar2 = param_3;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while (((uint)lVar2 & 0xff) != 1) {
      if (lVar1 < 5) {
        if (2 < lVar1) {
          if (lVar1 == 3) {
            pcVar3 = *(code **)(param_3 + 0x20);
          }
          else {
            if (lVar1 != 4) goto LAB_103a02c5c;
            pcVar3 = *(code **)(param_3 + 0x20);
          }
          goto LAB_103a02c4c;
        }
        if (lVar1 == 1) {
          pcVar3 = *(code **)(param_3 + 0x20);
          goto LAB_103a02c4c;
        }
        if (lVar1 == 2) {
          pcVar3 = *(code **)(param_3 + 0x20);
          goto LAB_103a02c4c;
        }
      }
      else {
        if (lVar1 < 7) {
          if (lVar1 == 5) {
            pcVar3 = *(code **)(param_3 + 0x20);
          }
          else {
            if (lVar1 != 6) goto LAB_103a02c5c;
            pcVar3 = *(code **)(param_3 + 0x28);
          }
        }
        else if (lVar1 == 7) {
          pcVar3 = *(code **)(param_3 + 0x28);
        }
        else {
          if (lVar1 != 8) goto LAB_103a02c5c;
          pcVar3 = *(code **)(param_3 + 0x140);
        }
LAB_103a02c4c:
        (*pcVar3)();
      }
LAB_103a02c5c:
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar4)();
    }
  }
  return;
}



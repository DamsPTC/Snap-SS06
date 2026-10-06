/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 00194168; end: 00194207;  */

void FUN_00194168(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af26c8 != -1) {
    _swift_once(0xaf26c8,FUN_00193e48);
  }
  uVar5 = uRam0000000000b656d8;
  uVar4 = uRam0000000000b656d0;
  uVar3 = uRam0000000000b656c8;
  uVar2 = uRam0000000000b656c0;
  uVar1 = uRam0000000000b656b8;
  *param_1 = uRam0000000000b656b0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00194208; end: 00194243;  */

void FUN_00194208(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf26e8;
  uStack_18 = param_1;
  func_0x000115a8(0xaf26e8,&UNK_007e0178);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00194244; end: 00194253;  */

void FUN_00194244(void)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  lVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(&uStack_70,0);
  uStack_98 = uStack_48;
  uStack_a0 = uStack_50;
  uStack_88 = uStack_38;
  uStack_90 = uStack_40;
  uStack_80 = uStack_30;
  uStack_b8 = uStack_68;
  uStack_c0 = uStack_70;
  uStack_a8 = uStack_58;
  uStack_b0 = uStack_60;
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_00194048;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_00194060;
  }
  else {
    if (uVar4 != 2) goto LAB_00194060;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_00194048:
    if (lVar5 == lVar6) goto LAB_00194060;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_c0,lVar1,uVar2);
LAB_00194060:
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_38 = uStack_88;
  uStack_40 = uStack_90;
  uStack_30 = uStack_80;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00194254; end: 00194297;  */

void FUN_00194254(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  func_0x001931a8(auStack_68,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00194298; end: 001942ab;  */

void FUN_00194298(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  byte *pbVar12;
  byte *pbVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong *unaff_x20;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar10 = *param_1;
  pbVar12 = (byte *)param_1[1];
  lVar14 = *param_2;
  uVar9 = param_2[1];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar12 >> 0x20);
  uVar15 = uVar3 >> 0x1e;
  uVar4 = (uint)(uVar9 >> 0x20);
  uVar18 = uVar4 >> 0x1e;
  iVar6 = (int)lVar10;
  if ((ulong)pbVar12 >> 0x3e == 3) {
    uVar17 = 0;
    if ((((lVar10 != 0) || (pbVar12 != (byte *)0xc000000000000000)) || (uVar9 >> 0x3e < 3)) ||
       ((uVar17 = 0, lVar14 != 0 || (uVar9 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar15 == 0) {
        uVar17 = (ulong)pbVar12 >> 0x30 & 0xff;
      }
      else {
        iVar16 = (int)((ulong)lVar10 >> 0x20);
        if (SBORROW4(iVar16,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar17 = (ulong)(iVar16 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar18 != 2) {
        uVar9 = (ulong)(uVar17 == 0);
        goto LAB_00038af8;
      }
      uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar17 != uVar19) {
LAB_0003899c:
        uVar9 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar15 == 2) {
        uVar17 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
        if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar17 = 0;
      if (1 < uVar18) goto LAB_00038898;
LAB_000388cc:
      if (uVar18 == 0) {
        uVar19 = uVar9 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar16 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar16,(int)lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar17 != (long)(iVar16 - (int)lVar14)) goto LAB_0003899c;
    }
    if (0 < (long)uVar17) {
      if (uVar15 < 2) {
        if (uVar15 == 0) {
          abStack_70[0] = (byte)lVar10;
          abStack_70[1] = (byte)((ulong)lVar10 >> 8);
          abStack_70[2] = (byte)((ulong)lVar10 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar10 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar10 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar10 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar10 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar10 >> 0x38);
          abStack_70[8] = (byte)pbVar12;
          abStack_70[9] = (byte)((ulong)pbVar12 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar12 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar12 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar12 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar12 >> 0x28);
          pbVar12 = abStack_70 + ((ulong)pbVar12 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar9 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar6;
        lVar7 = (lVar10 >> 0x20) - lVar20;
        if (lVar10 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar10 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar10 = 0;
        }
        else {
          lVar8 = lVar10;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          lVar10 = (lVar20 - lVar8) + lVar10;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar10 != 0) {
            if (lVar7 <= lVar8) {
              lVar8 = lVar7;
            }
            pbVar13 = (byte *)(lVar8 + lVar10);
            goto LAB_00038aec;
          }
        }
        pbVar13 = (byte *)0x0;
      }
      else {
        if (uVar15 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar12 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar20 = *(long *)(lVar10 + 0x10);
        lVar8 = *(long *)(lVar10 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar7 = lVar10;
        if (lVar10 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          lVar10 = (lVar20 - lVar7) + lVar10;
        }
        lVar2 = lVar8 - lVar20;
        if (SBORROW8(lVar8,lVar20)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar10 == 0) {
          pbVar13 = (byte *)0x0;
        }
        else {
          if (lVar2 <= lVar7) {
            lVar7 = lVar2;
          }
          pbVar13 = (byte *)(lVar7 + lVar10);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar12 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar10,pbVar13,lVar14,uVar9);
      uVar9 = (ulong)abStack_70[0];
      pbVar12 = pbVar13;
      goto LAB_00038af8;
    }
  }
  uVar9 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return;
  }
  ___stack_chk_fail();
  lVar10 = (long)pbVar12 - uVar9;
  if (SBORROW8((long)pbVar12,uVar9)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar19 = *unaff_x20;
  uVar17 = uVar19 & 0xffffffffffffff8;
  lVar7 = uVar17 + 0x20 + uVar9 * 8;
  uVar11 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  _swift_arrayDestroy(lVar7,lVar10,uVar11);
  lVar20 = lVar14 - lVar10;
  if (SBORROW8(lVar14,lVar10)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar20 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar17 + 0x10);
      lVar10 = uVar9 - (long)pbVar12;
    }
    else {
      uVar9 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar9 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar10 = uVar9 - (long)pbVar12;
    }
    if (SBORROW8(uVar9,(long)pbVar12)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar9 = lVar7 + lVar14 * 8;
    uVar1 = uVar17 + 0x20 + (long)pbVar12 * 8;
    if (uVar9 != uVar1 || uVar1 + lVar10 * 8 <= uVar9) {
      _memmove(uVar9,uVar1,lVar10 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar9 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar9 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar9,lVar20)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar17 + 0x10) = uVar9 + lVar20;
  }
  if (0 < lVar14) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return;
}



/* Entry: 001942ac; end: 001942cf;  */

void FUN_001942ac(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001942d0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001942d0; end: 0019430f;  */

void FUN_001942d0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e00c8;
  _swift_getWitnessTable(&UNK_007e00c8,&UNK_009b3908);
  puRam0000000000af26d0 = puVar1;
  return;
}



/* Entry: 00194310; end: 0019433b;  */

void FUN_00194310(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019433c();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000eba20();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019433c; end: 0019437b;  */

void FUN_0019433c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e00f0;
  _swift_getWitnessTable(&UNK_007e00f0,&UNK_009b3908);
  puRam0000000000af26d8 = puVar1;
  return;
}



/* Entry: 0019437c; end: 0019437f;  */

void FUN_0019437c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0130;
  _swift_getWitnessTable(&UNK_007e0130,&UNK_009b3908);
  puRam0000000000af26e0 = puVar1;
  return;
}



/* Entry: 00194380; end: 001943bf;  */

void FUN_00194380(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0130;
  _swift_getWitnessTable(&UNK_007e0130,&UNK_009b3908);
  puRam0000000000af26e0 = puVar1;
  return;
}



/* Entry: 001943c0; end: 001943fb;  */

undefined8 * FUN_001943c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  func_0x00023304(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return param_1;
}



/* Entry: 001943fc; end: 00194407;  */

void FUN_001943fc(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(*param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00194408; end: 0019444b;  */

undefined8 * FUN_00194408(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  func_0x00023304(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar4);
  return param_1;
}



/* Entry: 0019444c; end: 00194483;  */

undefined8 * FUN_0019444c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 00194484; end: 00194553;  */

int FUN_00194484(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 2) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 00194554; end: 0019457b;  */

void FUN_00194554(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 0019457c; end: 0019458f;  */

undefined8 FUN_0019457c(void)

{
  return 0x19458c;
}



/* Entry: 00194590; end: 001945c3;  */

undefined1  [16] FUN_00194590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 001945c4; end: 001945f7;  */

void FUN_001945c4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001945f8; end: 00194633;  */

undefined1  [16] FUN_001945f8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x194608;
  return auVar1;
}



/* Entry: 00194634; end: 001946f3;  */

void FUN_00194634(void)

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
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e0288,8,&uStack_48,&lStack_40);
  puRam0000000000b656e8 = puStack_38;
  lRam0000000000b656e0 = lStack_40;
  puRam0000000000b656f8 = puStack_28;
  puRam0000000000b656f0 = puStack_30;
  puRam0000000000b65708 = puStack_18;
  puRam0000000000b65700 = puStack_20;
  return;
}



/* Entry: 001946f4; end: 00194793;  */

void FUN_001946f4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af26f0 != -1) {
    _swift_once(0xaf26f0,FUN_00194634);
  }
  uVar5 = uRam0000000000b65708;
  uVar4 = uRam0000000000b65700;
  uVar3 = uRam0000000000b656f8;
  uVar2 = uRam0000000000b656f0;
  uVar1 = uRam0000000000b656e8;
  *param_1 = uRam0000000000b656e0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00194794; end: 00194817;  */

void FUN_00194794(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x160))();
    }
  }
  return;
}



/* Entry: 00194818; end: 001948f7;  */

void FUN_00194818(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)(param_2 + 0x10);
  if (lVar6 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(lVar6);
    puVar7 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar7[-1];
      uVar2 = *puVar7;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar7 = puVar7 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  uVar3 = (uint)(param_4 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_001948cc;
    }
    lVar6 = (long)(int)param_3;
    lVar5 = param_3 >> 0x20;
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    lVar6 = *(long *)(param_3 + 0x10);
    lVar5 = *(long *)(param_3 + 0x18);
  }
  if (lVar6 == lVar5) {
    return;
  }
LAB_001948cc:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}



/* Entry: 001948f8; end: 0019496f;  */

void FUN_001948f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) == 0) ||
     ((**(code **)(param_6 + 0x100))(param_2,1,param_5,param_6), unaff_x21 == 0)) {
    FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 00194970; end: 00194973;  */

ulong FUN_00194970(long param_1,long param_2,byte *param_3,long param_4,long param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != *(long *)(param_4 + 0x10)) {
    return 0;
  }
  if (lVar15 != 0 && param_1 != param_4) {
    plVar17 = (long *)(param_4 + 0x28);
    plVar19 = (long *)(param_1 + 0x28);
    do {
      uVar11 = plVar19[-1];
      if ((uVar11 != plVar17[-1] || *plVar19 != *plVar17) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar11 & 1) == 0)) {
        return 0;
      }
      plVar17 = plVar17 + 2;
      plVar19 = plVar19 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  if ((ulong)param_3 >> 0x3e == 3) {
    uVar11 = 0;
    if ((((param_2 != 0) || (param_3 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar11 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar9 == 0) {
        uVar11 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)((ulong)param_2 >> 0x20);
        if (SBORROW4(iVar10,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar11 = (ulong)(iVar10 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar12 == 0) {
        uVar13 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar10 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar10,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar11 != (long)(iVar10 - (int)param_5)) goto LAB_0003899c;
    }
    else {
      if (uVar9 == 2) {
        uVar11 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar11 = 0;
      if (uVar12 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar12 != 2) {
        uVar11 = (ulong)(uVar11 == 0);
        goto LAB_00038af8;
      }
      uVar13 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar11 != uVar13) {
LAB_0003899c:
        uVar11 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar11) {
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          abStack_70[0] = (byte)param_2;
          abStack_70[1] = (byte)((ulong)param_2 >> 8);
          abStack_70[2] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_2 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_2 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_2 >> 0x38);
          abStack_70[8] = (byte)param_3;
          abStack_70[9] = (byte)((ulong)param_3 >> 8);
          abStack_70[10] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_3 >> 0x28);
          param_3 = abStack_70 + ((ulong)param_3 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar11 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar18 = (long)iVar5;
        lVar15 = (param_2 >> 0x20) - lVar18;
        if (param_2 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_2 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_2 = 0;
        }
        else {
          lVar6 = param_2;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_2 = (lVar18 - lVar6) + param_2;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_2 != 0) {
            if (lVar15 <= lVar6) {
              lVar6 = lVar15;
            }
            pbVar8 = (byte *)(lVar6 + param_2);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
      }
      else {
        if (uVar9 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_3 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar18 = *(long *)(param_2 + 0x10);
        lVar6 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar15 = param_2;
        if (param_2 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_2 = (lVar18 - lVar15) + param_2;
        }
        lVar1 = lVar6 - lVar18;
        if (SBORROW8(lVar6,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar15) {
            lVar15 = lVar1;
          }
          pbVar8 = (byte *)(lVar15 + param_2);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_3 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_2,pbVar8,param_5,param_6);
      uVar11 = (ulong)abStack_70[0];
      param_3 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar11 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar15 = (long)param_3 - uVar11;
  if (SBORROW8((long)param_3,uVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar11 = uVar14 + 0x20 + uVar11 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar11;
  _swift_arrayDestroy(uVar11,lVar15,uVar7);
  lVar18 = param_5 - lVar15;
  if (SBORROW8(param_5,lVar15)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar18 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar14 + 0x10);
      lVar15 = uVar13 - (long)param_3;
    }
    else {
      uVar13 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar15 = uVar13 - (long)param_3;
    }
    if (SBORROW8(uVar13,(long)param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar11 = uVar11 + param_5 * 8;
    uVar13 = uVar14 + 0x20 + (long)param_3 * 8;
    if (uVar11 != uVar13 || uVar13 + lVar15 * 8 <= uVar11) {
      _memmove(uVar11,uVar13,lVar15 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar13 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar18)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar13 + lVar18;
  }
  if (param_5 < 1) {
    return uVar13;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00194974; end: 00194a1b;  */

/* WARNING: Removing unreachable block (ram,0x001949dc) */

void FUN_00194974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00194818(&uStack_d0,param_1,param_2,param_3);
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



/* Entry: 00194a1c; end: 00194a53;  */

void FUN_00194a1c(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 00194a54; end: 00194a83;  */

undefined1  [16] FUN_00194a54(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00194a84; end: 00194ab7;  */

void FUN_00194a84(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00194ab8; end: 00194acb;  */

undefined1  [16] FUN_00194ab8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x194ac8;
  return auVar1;
}



/* Entry: 00194acc; end: 00194b03;  */

void FUN_00194acc(void)

{
  FUN_00194794();
  return;
}



/* Entry: 00194b04; end: 00194ba3;  */

void FUN_00194b04(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af26f0 != -1) {
    _swift_once(0xaf26f0,FUN_00194634);
  }
  uVar5 = uRam0000000000b65708;
  uVar4 = uRam0000000000b65700;
  uVar3 = uRam0000000000b656f8;
  uVar2 = uRam0000000000b656f0;
  uVar1 = uRam0000000000b656e8;
  *param_1 = uRam0000000000b656e0;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00194ba4; end: 00194bdf;  */

void FUN_00194ba4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2710;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2710,&UNK_007e0280);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00194be0; end: 00194d9f;  */

/* WARNING: Removing unreachable block (ram,0x00194c44) */

void FUN_00194be0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
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
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
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
  FUN_00194818(&uStack_d0,uVar1,uVar2,uVar3);
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



/* Entry: 00194da0; end: 00194dbb;  */

ulong FUN_00194da0(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  long lVar10;
  byte *pbVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  ulong *unaff_x20;
  long lVar18;
  ulong uVar19;
  long *plVar20;
  long lVar21;
  long *plVar22;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar6 = *param_1;
  lVar7 = param_1[1];
  pbVar11 = (byte *)param_1[2];
  lVar21 = *param_2;
  lVar10 = param_2[1];
  uVar12 = param_2[2];
  lVar18 = *(long *)(lVar6 + 0x10);
  if (lVar18 != *(long *)(lVar21 + 0x10)) {
    return 0;
  }
  if (lVar18 != 0 && lVar6 != lVar21) {
    plVar20 = (long *)(lVar21 + 0x28);
    plVar22 = (long *)(lVar6 + 0x28);
    do {
      uVar15 = plVar22[-1];
      if ((uVar15 != plVar20[-1] || *plVar22 != *plVar20) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar15 & 1) == 0)) {
        return 0;
      }
      plVar20 = plVar20 + 2;
      plVar22 = plVar22 + 2;
      lVar18 = lVar18 + -1;
    } while (lVar18 != 0);
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar13 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar12 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  iVar5 = (int)lVar7;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar15 = 0;
    if ((((lVar7 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar12 >> 0x3e < 3)) ||
       ((uVar15 = 0, lVar10 != 0 || (uVar12 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar13 == 0) {
        uVar15 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar14 = (int)((ulong)lVar7 >> 0x20);
        if (SBORROW4(iVar14,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar15 = (ulong)(iVar14 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar16 == 0) {
        uVar17 = uVar12 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar14 = (int)((ulong)lVar10 >> 0x20);
      if (SBORROW4(iVar14,(int)lVar10)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar15 != (long)(iVar14 - (int)lVar10)) goto LAB_0003899c;
    }
    else {
      if (uVar13 == 2) {
        uVar15 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
        if (SBORROW8(*(long *)(lVar7 + 0x18),*(long *)(lVar7 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar15 = 0;
      if (uVar16 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar16 != 2) {
        uVar12 = (ulong)(uVar15 == 0);
        goto LAB_00038af8;
      }
      uVar17 = *(long *)(lVar10 + 0x18) - *(long *)(lVar10 + 0x10);
      if (SBORROW8(*(long *)(lVar10 + 0x18),*(long *)(lVar10 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar15 != uVar17) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar15) {
      if (uVar13 < 2) {
        if (uVar13 == 0) {
          abStack_70[0] = (byte)lVar7;
          abStack_70[1] = (byte)((ulong)lVar7 >> 8);
          abStack_70[2] = (byte)((ulong)lVar7 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar7 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar7 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar7 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar7 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar7 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar21 = (long)iVar5;
        lVar6 = (lVar7 >> 0x20) - lVar21;
        if (lVar7 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar7 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar7 = 0;
        }
        else {
          lVar18 = lVar7;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar18)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar7 = (lVar21 - lVar18) + lVar7;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar7 != 0) {
            if (lVar6 <= lVar18) {
              lVar18 = lVar6;
            }
            pbVar9 = (byte *)(lVar18 + lVar7);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar13 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          pbVar11 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar21 = *(long *)(lVar7 + 0x10);
        lVar18 = *(long *)(lVar7 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar7;
        if (lVar7 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar7 = (lVar21 - lVar6) + lVar7;
        }
        lVar1 = lVar18 - lVar21;
        if (SBORROW8(lVar18,lVar21)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar7 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + lVar7);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar7,pbVar9,lVar10,uVar12);
      uVar12 = (ulong)abStack_70[0];
      pbVar11 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar7 = (long)pbVar11 - uVar12;
  if (SBORROW8((long)pbVar11,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar17 = uVar19 & 0xffffffffffffff8;
  uVar12 = uVar17 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar15 = uVar12;
  _swift_arrayDestroy(uVar12,lVar7,uVar8);
  lVar6 = lVar10 - lVar7;
  if (SBORROW8(lVar10,lVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar17 + 0x10);
      lVar7 = uVar15 - (long)pbVar11;
    }
    else {
      uVar15 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar7 = uVar15 - (long)pbVar11;
    }
    if (SBORROW8(uVar15,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + lVar10 * 8;
    uVar15 = uVar17 + 0x20 + (long)pbVar11 * 8;
    if (uVar12 != uVar15 || uVar15 + lVar7 * 8 <= uVar12) {
      _memmove(uVar12,uVar15,lVar7 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar15 = *(ulong *)(uVar17 + 0x10);
    }
    else {
      uVar15 = uVar17;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar15 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar15,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar17 + 0x10) = uVar15 + lVar6;
  }
  if (lVar10 < 1) {
    return uVar15;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00194dbc; end: 00194e7f;  */

ulong FUN_00194dbc(long param_1,long param_2,byte *param_3,long param_4,long param_5,ulong param_6)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  undefined8 uVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long *plVar19;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  lVar15 = *(long *)(param_1 + 0x10);
  if (lVar15 != *(long *)(param_4 + 0x10)) {
    return 0;
  }
  if (lVar15 != 0 && param_1 != param_4) {
    plVar17 = (long *)(param_4 + 0x28);
    plVar19 = (long *)(param_1 + 0x28);
    do {
      uVar11 = plVar19[-1];
      if ((uVar11 != plVar17[-1] || *plVar19 != *plVar17) &&
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (), (uVar11 & 1) == 0)) {
        return 0;
      }
      plVar17 = plVar17 + 2;
      plVar19 = plVar19 + 2;
      lVar15 = lVar15 + -1;
    } while (lVar15 != 0);
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  if ((ulong)param_3 >> 0x3e == 3) {
    uVar11 = 0;
    if ((((param_2 != 0) || (param_3 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar11 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar9 == 0) {
        uVar11 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)((ulong)param_2 >> 0x20);
        if (SBORROW4(iVar10,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar11 = (ulong)(iVar10 - iVar5);
      }
joined_r0x000389b8:
      if (1 < uVar3 >> 0x1e) goto LAB_00038898;
LAB_000388cc:
      if (uVar12 == 0) {
        uVar13 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar10 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar10,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar11 != (long)(iVar10 - (int)param_5)) goto LAB_0003899c;
    }
    else {
      if (uVar9 == 2) {
        uVar11 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar11 = 0;
      if (uVar12 < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar12 != 2) {
        uVar11 = (ulong)(uVar11 == 0);
        goto LAB_00038af8;
      }
      uVar13 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar11 != uVar13) {
LAB_0003899c:
        uVar11 = 0;
        goto LAB_00038af8;
      }
    }
    if (0 < (long)uVar11) {
      if (uVar9 < 2) {
        if (uVar9 == 0) {
          abStack_70[0] = (byte)param_2;
          abStack_70[1] = (byte)((ulong)param_2 >> 8);
          abStack_70[2] = (byte)((ulong)param_2 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_2 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_2 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_2 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_2 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_2 >> 0x38);
          abStack_70[8] = (byte)param_3;
          abStack_70[9] = (byte)((ulong)param_3 >> 8);
          abStack_70[10] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_3 >> 0x28);
          param_3 = abStack_70 + ((ulong)param_3 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar11 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar18 = (long)iVar5;
        lVar15 = (param_2 >> 0x20) - lVar18;
        if (param_2 >> 0x20 < lVar18) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_2 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_2 = 0;
        }
        else {
          lVar6 = param_2;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_2 = (lVar18 - lVar6) + param_2;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_2 != 0) {
            if (lVar15 <= lVar6) {
              lVar6 = lVar15;
            }
            pbVar8 = (byte *)(lVar6 + param_2);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
      }
      else {
        if (uVar9 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_3 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar18 = *(long *)(param_2 + 0x10);
        lVar6 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar15 = param_2;
        if (param_2 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar18,lVar15)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_2 = (lVar18 - lVar15) + param_2;
        }
        lVar1 = lVar6 - lVar18;
        if (SBORROW8(lVar6,lVar18)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar15) {
            lVar15 = lVar1;
          }
          pbVar8 = (byte *)(lVar15 + param_2);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_3 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_2,pbVar8,param_5,param_6);
      uVar11 = (ulong)abStack_70[0];
      param_3 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar11 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar11;
  }
  ___stack_chk_fail();
  lVar15 = (long)param_3 - uVar11;
  if (SBORROW8((long)param_3,uVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar14 = uVar16 & 0xffffffffffffff8;
  uVar11 = uVar14 + 0x20 + uVar11 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar13 = uVar11;
  _swift_arrayDestroy(uVar11,lVar15,uVar7);
  lVar18 = param_5 - lVar15;
  if (SBORROW8(param_5,lVar15)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar18 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar14 + 0x10);
      lVar15 = uVar13 - (long)param_3;
    }
    else {
      uVar13 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar15 = uVar13 - (long)param_3;
    }
    if (SBORROW8(uVar13,(long)param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar11 = uVar11 + param_5 * 8;
    uVar13 = uVar14 + 0x20 + (long)param_3 * 8;
    if (uVar11 != uVar13 || uVar13 + lVar15 * 8 <= uVar11) {
      _memmove(uVar11,uVar13,lVar15 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar13 = *(ulong *)(uVar14 + 0x10);
    }
    else {
      uVar13 = uVar14;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar13 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar13,lVar18)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar14 + 0x10) = uVar13 + lVar18;
  }
  if (param_5 < 1) {
    return uVar13;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
  (*pcVar4)();
}



/* Entry: 00194e80; end: 00194ea3;  */

void FUN_00194e80(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00194ea4();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 00194ea4; end: 00194ee3;  */

void FUN_00194ea4(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af26f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e01c8;
  _swift_getWitnessTable(&UNK_007e01c8,&UNK_009b3a88);
  puRam0000000000af26f8 = puVar1;
  return;
}



/* Entry: 00194ee4; end: 00194f0f;  */

void FUN_00194ee4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_00194f10();
  *(long *)(param_1 + 8) = lVar1;
  func_0x000eba60();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 00194f10; end: 00194f4f;  */

void FUN_00194f10(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e01f0;
  _swift_getWitnessTable(&UNK_007e01f0,&UNK_009b3a88);
  puRam0000000000af2700 = puVar1;
  return;
}



/* Entry: 00194f50; end: 00194f53;  */

void FUN_00194f50(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0230;
  _swift_getWitnessTable(&UNK_007e0230,&UNK_009b3a88);
  puRam0000000000af2708 = puVar1;
  return;
}



/* Entry: 00194f54; end: 00194f93;  */

void FUN_00194f54(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2708 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0230;
  _swift_getWitnessTable(&UNK_007e0230,&UNK_009b3a88);
  puRam0000000000af2708 = puVar1;
  return;
}



/* Entry: 00194f94; end: 00194f97;  */

undefined8 * FUN_00194f94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 00194f98; end: 00194fbf;  */

void FUN_00194f98(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[2];
  uVar2 = (uint)(uVar1 >> 0x3e);
  if (uVar2 != 1) {
    if (uVar2 != 2) {
      return;
    }
    _swift_release(param_1[1]);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar1 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00194fc0; end: 00195067;  */

undefined8 * FUN_00194fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  uVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  return param_1;
}



/* Entry: 00195068; end: 001950ab;  */

undefined8 * FUN_00195068(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[1];
  uVar1 = param_1[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  FUN_00023358(uVar2,uVar1);
  return param_1;
}



/* Entry: 001950ac; end: 0019515f;  */

int FUN_001950ac(ulong *param_1,int param_2)

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



/* Entry: 00195160; end: 0019518f;  */

undefined1  [16] FUN_00195160(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  _swift_bridgeObjectRetain(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Entry: 00195190; end: 001951c3;  */

void FUN_00195190(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(unaff_x20[1]);
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  return;
}



/* Entry: 001951c4; end: 001951d7;  */

undefined8 FUN_001951c4(void)

{
  return 0x1951d4;
}



/* Entry: 001951d8; end: 0019520b;  */

undefined1  [16]
FUN_001951d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_3,param_4);
  auVar1._8_8_ = param_4;
  auVar1._0_8_ = param_3;
  return auVar1;
}



/* Entry: 0019520c; end: 0019523f;  */

void FUN_0019520c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 00195240; end: 0019527b;  */

undefined1  [16] FUN_00195240(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x195250;
  return auVar1;
}



/* Entry: 0019527c; end: 0019533b;  */

void FUN_0019527c(void)

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
  FUN_0011ae80();
  _swift_allocObject();
  puStack_20 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_30 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_28 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_18 = puStack_20;
  uStack_48 = 0;
  lStack_40 = lVar1;
  FUN_000de3ec(&UNK_007e03a8,0xc,&uStack_48,&lStack_40);
  puRam0000000000b65718 = puStack_38;
  lRam0000000000b65710 = lStack_40;
  puRam0000000000b65728 = puStack_28;
  puRam0000000000b65720 = puStack_30;
  puRam0000000000b65738 = puStack_18;
  puRam0000000000b65730 = puStack_20;
  return;
}



/* Entry: 0019533c; end: 001953db;  */

void FUN_0019533c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2718 != -1) {
    _swift_once(0xaf2718,FUN_0019527c);
  }
  uVar5 = uRam0000000000b65738;
  uVar4 = uRam0000000000b65730;
  uVar3 = uRam0000000000b65728;
  uVar2 = uRam0000000000b65720;
  uVar1 = uRam0000000000b65718;
  *param_1 = uRam0000000000b65710;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 001953dc; end: 0019545f;  */

void FUN_001953dc(undefined8 param_1,long param_2,long param_3)

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



/* Entry: 00195460; end: 001954e7;  */

void FUN_00195460(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
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
    FUN_0013ad2c(param_1,param_4,param_5,param_6,param_7);
  }
  return;
}



/* Entry: 001954e8; end: 001955c3;  */

ulong FUN_001954e8(ulong param_1,long param_2,long param_3,byte *param_4,ulong param_5,long param_6,
                  long param_7,ulong param_8)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  byte *pbVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (((param_1 != param_5) || (param_2 != param_6)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_1,param_2,param_5,param_6,0), (param_1 & 1) == 0)) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_8 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_3;
  if ((ulong)param_4 >> 0x3e == 3) {
    uVar12 = 0;
    if (((param_3 != 0) || (param_4 != (byte *)0xc000000000000000)) ||
       ((param_8 >> 0x3e < 3 || ((uVar12 = 0, param_7 != 0 || (param_8 != 0xc000000000000000))))))
    goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_4 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_3 >> 0x20);
        if (SBORROW4(iVar11,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar12 = (ulong)(iVar11 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar13 != 2) {
        uVar12 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(param_7 + 0x18) - *(long *)(param_7 + 0x10);
      if (SBORROW8(*(long *)(param_7 + 0x18),*(long *)(param_7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar12 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(param_3 + 0x18) - *(long *)(param_3 + 0x10);
        if (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar12 = 0;
      if (1 < uVar13) goto LAB_00038898;
LAB_000388cc:
      if (uVar13 == 0) {
        uVar14 = param_8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_7 >> 0x20);
      if (SBORROW4(iVar11,(int)param_7)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_7)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)param_3;
          abStack_70[1] = (byte)((ulong)param_3 >> 8);
          abStack_70[2] = (byte)((ulong)param_3 >> 0x10);
          abStack_70[3] = (byte)((ulong)param_3 >> 0x18);
          abStack_70[4] = (byte)((ulong)param_3 >> 0x20);
          abStack_70[5] = (byte)((ulong)param_3 >> 0x28);
          abStack_70[6] = (byte)((ulong)param_3 >> 0x30);
          abStack_70[7] = (byte)((ulong)param_3 >> 0x38);
          abStack_70[8] = (byte)param_4;
          abStack_70[9] = (byte)((ulong)param_4 >> 8);
          abStack_70[10] = (byte)((ulong)param_4 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)param_4 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)param_4 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)param_4 >> 0x28);
          param_4 = abStack_70 + ((ulong)param_4 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_3 >> 0x20) - lVar17;
        if (param_3 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (param_3 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          param_3 = 0;
        }
        else {
          lVar7 = param_3;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar7) + param_3;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_3 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_3);
            goto LAB_00038aec;
          }
        }
        pbVar9 = (byte *)0x0;
      }
      else {
        if (uVar10 != 2) {
          abStack_70[8] = 0;
          abStack_70[9] = 0;
          abStack_70[10] = 0;
          abStack_70[0xb] = 0;
          abStack_70[0xc] = 0;
          abStack_70[0xd] = 0;
          abStack_70[0] = 0;
          abStack_70[1] = 0;
          abStack_70[2] = 0;
          abStack_70[3] = 0;
          abStack_70[4] = 0;
          abStack_70[5] = 0;
          abStack_70[6] = 0;
          abStack_70[7] = 0;
          param_4 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_3 + 0x10);
        lVar7 = *(long *)(param_3 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_3;
        if (param_3 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_3 = (lVar17 - lVar6) + param_3;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_3 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_3);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_4 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_3,pbVar9,param_7,param_8);
      uVar12 = (ulong)abStack_70[0];
      param_4 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_4 - uVar12;
  if (SBORROW8((long)param_4,uVar12)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar16 = *unaff_x20;
  uVar15 = uVar16 & 0xffffffffffffff8;
  uVar12 = uVar15 + 0x20 + uVar12 * 8;
  uVar8 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar14 = uVar12;
  _swift_arrayDestroy(uVar12,lVar6,uVar8);
  lVar17 = param_7 - lVar6;
  if (SBORROW8(param_7,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_4;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_4;
    }
    if (SBORROW8(uVar14,(long)param_4)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_7 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_4 * 8;
    if (uVar12 != uVar14 || uVar14 + lVar6 * 8 <= uVar12) {
      _memmove(uVar12,uVar14,lVar6 << 3);
    }
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar15 + 0x10) = uVar14 + lVar17;
  }
  if (0 < param_7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001955c4; end: 001955f7;  */

void FUN_001955c4(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 001955f8; end: 00195627;  */

undefined1  [16] FUN_001955f8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x10);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x10),
                  *(undefined8 *)(unaff_x20 + 0x18));
  return auVar1;
}



/* Entry: 00195628; end: 0019565b;  */

void FUN_00195628(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Entry: 0019565c; end: 0019566f;  */

undefined1  [16] FUN_0019565c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = 0x19566c;
  return auVar1;
}



/* Entry: 00195670; end: 001956a7;  */

void FUN_00195670(void)

{
  FUN_001953dc();
  return;
}



/* Entry: 001956a8; end: 00195747;  */

void FUN_001956a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2718 != -1) {
    _swift_once(0xaf2718,FUN_0019527c);
  }
  uVar5 = uRam0000000000b65738;
  uVar4 = uRam0000000000b65730;
  uVar3 = uRam0000000000b65728;
  uVar2 = uRam0000000000b65720;
  uVar1 = uRam0000000000b65718;
  *param_1 = uRam0000000000b65710;
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
                    /* WARNING: Could not recover jumptable at 0x0077b254. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_0099b978)(uVar5);
  return;
}



/* Entry: 00195748; end: 00195783;  */

void FUN_00195748(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2738;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2738,&UNK_007e03a0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00195784; end: 001957df;  */

void FUN_00195784(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x00192fb8(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001957e0; end: 001957eb;  */

void FUN_001957e0(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  ulong *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  uVar2 = *unaff_x20;
  uVar4 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uVar5 = unaff_x20[3];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uVar1 = uVar2 & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(&uStack_90,uVar2,uVar4);
  }
  uVar6 = (uint)(uVar5 >> 0x20);
  uVar7 = uVar6 >> 0x1e;
  if (uVar6 >> 0x1e < 2) {
    if (uVar7 != 0) {
      lVar8 = (long)(int)uVar3;
      lVar9 = (long)uVar3 >> 0x20;
      goto LAB_0014e16c;
    }
    if ((uVar5 & 0xff000000000000) == 0) goto LAB_0014e184;
  }
  else {
    if (uVar7 != 2) goto LAB_0014e184;
    lVar8 = *(long *)(uVar3 + 0x10);
    lVar9 = *(long *)(uVar3 + 0x18);
LAB_0014e16c:
    if (lVar8 == lVar9) goto LAB_0014e184;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,uVar3,uVar5);
LAB_0014e184:
  param_1[5] = uStack_68;
  param_1[4] = uStack_70;
  param_1[7] = uStack_58;
  param_1[6] = uStack_60;
  param_1[8] = uStack_50;
  param_1[1] = uStack_88;
  *param_1 = uStack_90;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  return;
}



/* Entry: 001957ec; end: 001958bb;  */

void FUN_001957ec(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x00192fb8(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001958bc; end: 001958df;  */

void FUN_001958bc(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_001958e0();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 001958e0; end: 0019591f;  */

void FUN_001958e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2720 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e02e8;
  _swift_getWitnessTable(&UNK_007e02e8,&UNK_009b3c08);
  puRam0000000000af2720 = puVar1;
  return;
}



/* Entry: 00195920; end: 0019594b;  */

void FUN_00195920(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019594c();
  *(long *)(param_1 + 8) = lVar1;
  FUN_00145594();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019594c; end: 0019598b;  */

void FUN_0019594c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2728 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0310;
  _swift_getWitnessTable(&UNK_007e0310,&UNK_009b3c08);
  puRam0000000000af2728 = puVar1;
  return;
}



/* Entry: 0019598c; end: 0019598f;  */

void FUN_0019598c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0350;
  _swift_getWitnessTable(&UNK_007e0350,&UNK_009b3c08);
  puRam0000000000af2730 = puVar1;
  return;
}



/* Entry: 00195990; end: 001959cf;  */

void FUN_00195990(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2730 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0350;
  _swift_getWitnessTable(&UNK_007e0350,&UNK_009b3c08);
  puRam0000000000af2730 = puVar1;
  return;
}



/* Entry: 001959d0; end: 00195a23;  */

long FUN_001959d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 00195a24; end: 00195ad3;  */

undefined8 * FUN_00195a24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  uVar2 = param_2[3];
  _swift_bridgeObjectRetain();
  func_0x00023304(uVar1,uVar2);
  param_1[2] = uVar1;
  param_1[3] = uVar2;
  return param_1;
}



/* Entry: 00195ad4; end: 00195b17;  */

undefined8 * FUN_00195ad4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[2];
  uVar2 = param_1[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  FUN_00023358(uVar1,uVar2);
  return param_1;
}



/* Entry: 00195b18; end: 00195be7;  */

int FUN_00195b18(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 00195be8; end: 00195c0b;  */

void FUN_00195be8(void)

{
  FUN_0019aad0(PTR___swiftEmptyArrayStorage_0099b8f0);
  return;
}



/* Entry: 00195c0c; end: 00195c33;  */

undefined1  [16] FUN_00195c0c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 00195c34; end: 00195cd7;  */

void FUN_00195c34(void)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf2780;
  func_0x000115a8(0xaf2780,&UNK_007e03c0);
  _swift_initStaticObject();
  uRam0000000000b65740 = uVar1;
  return;
}



/* Entry: 00195cd8; end: 00195d1b;  */

void FUN_00195cd8(undefined8 *param_1)

{
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}



/* Entry: 00195d1c; end: 00195d5b;  */

void FUN_00195d1c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0xaf2780;
  func_0x000115a8(0xaf2780,&UNK_007e03c0);
  _swift_initStaticObject();
  *param_1 = uVar1;
  return;
}



/* Entry: 00195d5c; end: 00195d97;  */

void FUN_00195d5c(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  *(bool *)(param_1 + 1) = lVar1 == 0;
  *(undefined1 *)((long)param_1 + 9) = 0;
  return;
}



/* Entry: 00195d98; end: 00195e67;  */

void FUN_00195d98(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar3 = *unaff_x20;
  cVar2 = *(char *)(unaff_x20 + 1);
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0;
  if (cVar2 != '\x01') {
    uVar1 = uVar3;
  }
  __ss6HasherV8_combineyySuF(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00195e68; end: 00195ec3;  */

bool FUN_00195e68(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  
  if ((char)param_1[1] == '\x01') {
    lVar2 = 0;
  }
  else {
    lVar2 = *param_1;
  }
  lVar1 = 0;
  if ((char)param_2[1] != '\x01') {
    lVar1 = *param_2;
  }
  return lVar2 == lVar1;
}



/* Entry: 00195ec4; end: 00195f13;  */

undefined8 FUN_00195ec4(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_000f2290(uVar1,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return uVar1;
}



/* Entry: 00195f14; end: 00195f67;  */

void FUN_00195f14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = param_3;
  *(undefined1 *)(unaff_x20 + 3) = param_4;
  return;
}



/* Entry: 00195f68; end: 00195fc3;  */

undefined8 FUN_00195f68(void)

{
  return 0x195f78;
}



/* Entry: 00195fc4; end: 00196007;  */

void FUN_00195fc4(undefined8 param_1,ulong param_2)

{
  undefined8 *unaff_x20;
  
  FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2 & 0xff;
  unaff_x20[2] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 00196008; end: 00196067;  */

code * FUN_00196008(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *unaff_x20;
  
  param_1[2] = unaff_x20;
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    uVar1 = 0;
    uVar2 = 1;
  }
  else {
    uVar2 = *(undefined1 *)(unaff_x20 + 1);
    uVar1 = *unaff_x20;
    if (((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03) != 0 ||
        (*(byte *)(unaff_x20 + 3) & 0x3f) != 0) {
      uVar1 = 0;
      uVar2 = 1;
    }
  }
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = uVar2;
  return FUN_00196068;
}



/* Entry: 00196068; end: 001960af;  */

void FUN_00196068(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  puVar2 = (undefined8 *)param_1[2];
  uVar3 = *param_1;
  bVar1 = *(byte *)(param_1 + 1);
  FUN_000f2330(*puVar2,puVar2[1],puVar2[2],*(undefined1 *)(puVar2 + 3));
  *puVar2 = uVar3;
  puVar2[1] = (ulong)bVar1;
  puVar2[2] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}



/* Entry: 001960b0; end: 001960f3;  */

undefined8 FUN_001960b0(void)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    return 0;
  }
  uVar1 = *unaff_x20;
  if (((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) !=
      1) {
    uVar1 = 0;
  }
  return uVar1;
}



/* Entry: 001960f4; end: 00196133;  */

void FUN_001960f4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[2] = 0x1000000000000000;
  unaff_x20[1] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 00196134; end: 00196187;  */

code * FUN_00196134(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  param_1[1] = unaff_x20;
  if (((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (uVar1 = 0, *(byte *)(unaff_x20 + 3) != 0xff)) &&
     (uVar1 = *unaff_x20,
     ((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) !=
     1)) {
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return FUN_00196188;
}



/* Entry: 00196188; end: 00196237;  */

void FUN_00196188(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  FUN_000f2330(*puVar2,puVar2[1],puVar2[2],*(undefined1 *)(puVar2 + 3));
  *puVar2 = uVar1;
  puVar2[2] = 0x1000000000000000;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}



/* Entry: 00196238; end: 00196303;  */

void FUN_00196238(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  unaff_x20[2] = 0x2000000000000000;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 00196304; end: 001963b7;  */

void FUN_00196304(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_1[1];
  puVar3 = (undefined8 *)param_1[2];
  uVar7 = *param_1;
  uVar2 = *puVar3;
  uVar4 = puVar3[1];
  uVar6 = puVar3[2];
  uVar5 = *(undefined1 *)(puVar3 + 3);
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar1);
    FUN_000f2330(uVar2,uVar4,uVar6,uVar5);
    *puVar3 = uVar7;
    puVar3[1] = uVar1;
    puVar3[2] = 0x2000000000000000;
    *(undefined1 *)(puVar3 + 3) = 0;
                    /* WARNING: Could not recover jumptable at 0x0077b23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_0099b968)(uVar1);
    return;
  }
  FUN_000f2330(uVar2,uVar4,uVar6,uVar5);
  *puVar3 = uVar7;
  puVar3[1] = uVar1;
  puVar3[2] = 0x2000000000000000;
  *(undefined1 *)(puVar3 + 3) = 0;
  return;
}



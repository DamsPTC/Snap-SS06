/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001aa5d4; end: 001aa647;  */

void FUN_001aa5d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((param_1 == 0) || ((**(code **)(param_6 + 0x10))(1,param_5,param_6), unaff_x21 == 0)) {
    FUN_0013ad2c(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001aa648; end: 001aa65b;  */

ulong FUN_001aa648(double param_1,double param_2,long param_3,byte *param_4,long param_5,
                  ulong param_6)

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
  
  if (param_1 != param_2) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_3;
  if ((ulong)param_4 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_3 != 0) || (param_4 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
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
      uVar14 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
        uVar14 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar11,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_5)) goto LAB_0003899c;
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
      FUN_000382a0(abStack_70,param_3,pbVar9,param_5,param_6);
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
  lVar17 = param_5 - lVar6;
  if (SBORROW8(param_5,lVar6)) {
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
    uVar12 = uVar12 + param_5 * 8;
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
  if (0 < param_5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001aa65c; end: 001aa6b7;  */

void FUN_001aa65c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014db98(param_1,auStack_78,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001aa6b8; end: 001aa6f7;  */

void FUN_001aa6b8(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0xc000000000000000;
  return;
}



/* Entry: 001aa6f8; end: 001aa72f;  */

void FUN_001aa6f8(void)

{
  FUN_001aa550();
  return;
}



/* Entry: 001aa730; end: 001aa7cf;  */

void FUN_001aa730(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c38 != -1) {
    _swift_once(0xaf2c38,0x1aa45c);
  }
  uVar5 = uRam0000000000b65a08;
  uVar4 = uRam0000000000b65a00;
  uVar3 = uRam0000000000b659f8;
  uVar2 = uRam0000000000b659f0;
  uVar1 = uRam0000000000b659e8;
  *param_1 = uRam0000000000b659e0;
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



/* Entry: 001aa7d0; end: 001aa7e3;  */

void FUN_001aa7d0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d98;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d98,&UNK_007e1f00);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001aa7e4; end: 001aa83b;  */

void FUN_001aa7e4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014db98(uVar3,auStack_78,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001aa83c; end: 001aa847;  */

void FUN_001aa83c(undefined8 *param_1)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  double *unaff_x20;
  double dVar7;
  double dVar8;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  dVar8 = *unaff_x20;
  dVar1 = unaff_x20[1];
  dVar2 = unaff_x20[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (dVar8 != 0.0) {
    __ss6HasherV8_combineyySuF(1);
    dVar7 = 0.0;
    if (dVar8 != 0.0) {
      dVar7 = dVar8;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar7);
  }
  uVar3 = (uint)((ulong)dVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)SUB84(dVar1,0);
      lVar6 = (long)dVar1 >> 0x20;
      goto LAB_0014dc40;
    }
    if (((ulong)dVar2 & 0xff000000000000) == 0) goto LAB_0014dc50;
  }
  else {
    if (uVar4 != 2) goto LAB_0014dc50;
    lVar5 = *(long *)((long)dVar1 + 0x10);
    lVar6 = *(long *)((long)dVar1 + 0x18);
LAB_0014dc40:
    if (lVar5 == lVar6) goto LAB_0014dc50;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90);
LAB_0014dc50:
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



/* Entry: 001aa848; end: 001aa89b;  */

void FUN_001aa848(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_0014db98(uVar3,auStack_78,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001aa89c; end: 001aa8fb;  */

ulong FUN_001aa89c(double *param_1,double *param_2)

{
  double dVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  double dVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong *unaff_x20;
  ulong uVar20;
  long lVar21;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  dVar13 = param_2[1];
  dVar1 = param_2[2];
  dVar9 = param_1[1];
  pbVar11 = (byte *)param_1[2];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar3 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar3 >> 0x1e;
  uVar4 = (uint)((ulong)dVar1 >> 0x20);
  uVar17 = uVar4 >> 0x1e;
  iVar6 = SUB84(dVar9,0);
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((dVar9 != 0.0) || (pbVar11 != (byte *)0xc000000000000000)) || ((ulong)dVar1 >> 0x3e < 3))
       || ((uVar16 = 0, dVar13 != 0.0 || (dVar1 != -2.0)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar3 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)dVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar6)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar5)();
        }
        uVar16 = (ulong)(iVar15 - iVar6);
      }
joined_r0x000389b8:
      if (uVar4 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar16 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)((long)dVar13 + 0x18) - *(long *)((long)dVar13 + 0x10);
      if (SBORROW8(*(long *)((long)dVar13 + 0x18),*(long *)((long)dVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar5)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar16 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)((long)dVar9 + 0x18) - *(long *)((long)dVar9 + 0x10);
        if (SBORROW8(*(long *)((long)dVar9 + 0x18),*(long *)((long)dVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar5)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = (ulong)dVar1 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)dVar13 >> 0x20);
      if (SBORROW4(iVar15,SUB84(dVar13,0))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar5)();
      }
      if (uVar16 != (long)(iVar15 - SUB84(dVar13,0))) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = SUB81(dVar9,0);
          abStack_70[1] = (byte)((ulong)dVar9 >> 8);
          abStack_70[2] = (byte)((ulong)dVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)dVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)dVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)dVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)dVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)dVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar16 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar21 = (long)iVar6;
        dVar7 = (double)(((long)dVar9 >> 0x20) - lVar21);
        if ((long)dVar9 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (dVar9 == 0.0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          dVar9 = 0.0;
        }
        else {
          dVar8 = dVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,(long)dVar8)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar5)();
          }
          dVar9 = (double)((lVar21 - (long)dVar8) + (long)dVar9);
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (dVar9 != 0.0) {
            if ((long)dVar7 <= (long)dVar8) {
              dVar8 = dVar7;
            }
            pbVar12 = (byte *)((long)dVar8 + (long)dVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
        lVar21 = *(long *)((long)dVar9 + 0x10);
        lVar2 = *(long *)((long)dVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        dVar7 = dVar9;
        if (dVar9 != 0.0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar21,(long)dVar7)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar5)();
          }
          dVar9 = (double)((lVar21 - (long)dVar7) + (long)dVar9);
        }
        dVar8 = (double)(lVar2 - lVar21);
        if (SBORROW8(lVar2,lVar21)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar5)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (dVar9 == 0.0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if ((long)dVar8 <= (long)dVar7) {
            dVar7 = dVar8;
          }
          pbVar12 = (byte *)((long)dVar7 + (long)dVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,dVar9,pbVar12,dVar13,dVar1);
      uVar16 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar16 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar16;
  }
  ___stack_chk_fail();
  lVar21 = (long)pbVar11 - uVar16;
  if (SBORROW8((long)pbVar11,uVar16)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar5)();
  }
  uVar20 = *unaff_x20;
  uVar19 = uVar20 & 0xffffffffffffff8;
  uVar16 = uVar19 + 0x20 + uVar16 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar18 = uVar16;
  _swift_arrayDestroy(uVar16,lVar21,uVar10);
  lVar2 = (long)dVar13 - lVar21;
  if (SBORROW8((long)dVar13,lVar21)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar5)();
  }
  if (lVar2 != 0) {
    if (uVar20 >> 0x3e == 0) {
      uVar18 = *(ulong *)(uVar19 + 0x10);
      lVar21 = uVar18 - (long)pbVar11;
    }
    else {
      uVar18 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar18 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar21 = uVar18 - (long)pbVar11;
    }
    if (SBORROW8(uVar18,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar5)();
    }
    uVar16 = uVar16 + (long)dVar13 * 8;
    uVar18 = uVar19 + 0x20 + (long)pbVar11 * 8;
    if (uVar16 != uVar18 || uVar18 + lVar21 * 8 <= uVar16) {
      _memmove(uVar16,uVar18,lVar21 << 3);
    }
    if (uVar20 >> 0x3e == 0) {
      uVar18 = *(ulong *)(uVar19 + 0x10);
    }
    else {
      uVar18 = uVar19;
      if ((uVar20 & 0x8000000000000000) != 0) {
        uVar18 = uVar20;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar18,lVar2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar5)();
    }
    *(ulong *)(uVar19 + 0x10) = uVar18 + lVar2;
  }
  if (0 < (long)dVar13) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar5)();
  }
  return uVar18;
}



/* Entry: 001aa8fc; end: 001aa93b;  */

undefined8 FUN_001aa8fc(void)

{
  if (lRam0000000000af2c40 != -1) {
    _swift_once(0xaf2c40,0x1aa8e8);
  }
  return 0xb65a10;
}



/* Entry: 001aa93c; end: 001aa9db;  */

void FUN_001aa93c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c40 != -1) {
    _swift_once(0xaf2c40,0x1aa8e8);
  }
  uVar5 = uRam0000000000b65a38;
  uVar4 = uRam0000000000b65a30;
  uVar3 = uRam0000000000b65a28;
  uVar2 = uRam0000000000b65a20;
  uVar1 = uRam0000000000b65a18;
  *param_1 = uRam0000000000b65a10;
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



/* Entry: 001aa9dc; end: 001aaa5f;  */

void FUN_001aa9dc(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x18))();
    }
  }
  return;
}



/* Entry: 001aaa60; end: 001aaad3;  */

void FUN_001aaa60(int param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((param_1 == 0) || ((**(code **)(param_6 + 8))(1,param_5,param_6), unaff_x21 == 0)) {
    FUN_0013ad2c(param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001aaad4; end: 001aaae7;  */

ulong FUN_001aaad4(float param_1,float param_2,long param_3,byte *param_4,long param_5,ulong param_6
                  )

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
  
  if (param_1 != param_2) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_4 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_3;
  if ((ulong)param_4 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_3 != 0) || (param_4 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
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
      uVar14 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
        uVar14 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar11,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_5)) goto LAB_0003899c;
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
      FUN_000382a0(abStack_70,param_3,pbVar9,param_5,param_6);
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
  lVar17 = param_5 - lVar6;
  if (SBORROW8(param_5,lVar6)) {
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
    uVar12 = uVar12 + param_5 * 8;
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
  if (0 < param_5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001aaae8; end: 001aab43;  */

void FUN_001aaae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0014dc80(param_1,auStack_78,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001aab44; end: 001aab73;  */

void FUN_001aab44(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 4) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}



/* Entry: 001aab74; end: 001aaba3;  */

undefined1  [16] FUN_001aab74(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 001aaba4; end: 001aabd7;  */

void FUN_001aaba4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 001aabd8; end: 001aabeb;  */

undefined1  [16] FUN_001aabd8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x1aabe8;
  return auVar1;
}



/* Entry: 001aabec; end: 001aac23;  */

void FUN_001aabec(void)

{
  FUN_001aa9dc();
  return;
}



/* Entry: 001aac24; end: 001aacc3;  */

void FUN_001aac24(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c40 != -1) {
    _swift_once(0xaf2c40,0x1aa8e8);
  }
  uVar5 = uRam0000000000b65a38;
  uVar4 = uRam0000000000b65a30;
  uVar3 = uRam0000000000b65a28;
  uVar2 = uRam0000000000b65a20;
  uVar1 = uRam0000000000b65a18;
  *param_1 = uRam0000000000b65a10;
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



/* Entry: 001aacc4; end: 001aacd7;  */

void FUN_001aacc4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d90;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d90,&UNK_007e1ef8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001aacd8; end: 001aad2f;  */

void FUN_001aacd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *unaff_x20;
  undefined4 uVar3;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  func_0x0014dc80(uVar3,auStack_78,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001aad30; end: 001aad3b;  */

void FUN_001aad30(undefined8 *param_1)

{
  double dVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  float *unaff_x20;
  float fVar7;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  fVar7 = *unaff_x20;
  lVar6 = *(long *)(unaff_x20 + 2);
  uVar2 = *(ulong *)(unaff_x20 + 4);
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (fVar7 != 0.0) {
    __ss6HasherV8_combineyySuF(1);
    dVar1 = 0.0;
    if (fVar7 != 0.0) {
      dVar1 = (double)fVar7;
    }
    __ss6HasherV8_combineyys6UInt64VF(dVar1);
  }
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar6;
      lVar6 = lVar6 >> 0x20;
      goto LAB_0014dd28;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0014dd38;
  }
  else {
    if (uVar4 != 2) goto LAB_0014dd38;
    lVar5 = *(long *)(lVar6 + 0x10);
    lVar6 = *(long *)(lVar6 + 0x18);
LAB_0014dd28:
    if (lVar5 == lVar6) goto LAB_0014dd38;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90);
LAB_0014dd38:
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



/* Entry: 001aad3c; end: 001aad8f;  */

void FUN_001aad3c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 *unaff_x20;
  undefined4 uVar3;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  func_0x0014dc80(uVar3,auStack_78,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001aad90; end: 001aadef;  */

ulong FUN_001aad90(float *param_1,float *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar13 = *(long *)(param_2 + 2);
  uVar8 = *(ulong *)(param_2 + 4);
  lVar9 = *(long *)(param_1 + 2);
  pbVar11 = *(byte **)(param_1 + 4);
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar16 - (long)pbVar11;
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar16 - (long)pbVar11;
    }
    if (SBORROW8(uVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar16 = uVar18 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar16 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar16;
}



/* Entry: 001aadf0; end: 001aae2f;  */

undefined8 FUN_001aadf0(void)

{
  if (lRam0000000000af2c48 != -1) {
    _swift_once(0xaf2c48,0x1aaddc);
  }
  return 0xb65a40;
}



/* Entry: 001aae30; end: 001aaecf;  */

void FUN_001aae30(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c48 != -1) {
    _swift_once(0xaf2c48,0x1aaddc);
  }
  uVar5 = uRam0000000000b65a68;
  uVar4 = uRam0000000000b65a60;
  uVar3 = uRam0000000000b65a58;
  uVar2 = uRam0000000000b65a50;
  uVar1 = uRam0000000000b65a48;
  *param_1 = uRam0000000000b65a40;
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



/* Entry: 001aaed0; end: 001aaf53;  */

void FUN_001aaed0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x60))();
    }
  }
  return;
}



/* Entry: 001aaf54; end: 001aafc7;  */

void FUN_001aaf54(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((param_2 == 0) || ((**(code **)(param_6 + 0x20))(param_2,1,param_5,param_6), unaff_x21 == 0))
  {
    FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001aafc8; end: 001ab02f;  */

ulong FUN_001aafc8(long param_1,long param_2,byte *param_3,long param_4,long param_5,ulong param_6)

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
  
  if (param_1 != param_4) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  if ((ulong)param_3 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_2 != 0) || (param_3 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_2 >> 0x20);
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
      uVar14 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
        uVar12 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
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
        uVar14 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar11,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_5)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
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
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_2 >> 0x20) - lVar17;
        if (param_2 >> 0x20 < lVar17) {
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
          lVar7 = param_2;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar7) + param_2;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_2 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_2);
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
          param_3 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_2;
        if (param_2 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar6) + param_2;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_2);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_3 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_2,pbVar9,param_5,param_6);
      uVar12 = (ulong)abStack_70[0];
      param_3 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_3 - uVar12;
  if (SBORROW8((long)param_3,uVar12)) {
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
  lVar17 = param_5 - lVar6;
  if (SBORROW8(param_5,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_3;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_3;
    }
    if (SBORROW8(uVar14,(long)param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_5 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_3 * 8;
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
  if (0 < param_5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001ab030; end: 001ab067;  */

void FUN_001ab030(void)

{
  FUN_001aaed0();
  return;
}



/* Entry: 001ab068; end: 001ab107;  */

void FUN_001ab068(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c48 != -1) {
    _swift_once(0xaf2c48,0x1aaddc);
  }
  uVar5 = uRam0000000000b65a68;
  uVar4 = uRam0000000000b65a60;
  uVar3 = uRam0000000000b65a58;
  uVar2 = uRam0000000000b65a50;
  uVar1 = uRam0000000000b65a48;
  *param_1 = uRam0000000000b65a40;
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



/* Entry: 001ab108; end: 001ab17f;  */

void FUN_001ab108(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d88;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d88,&UNK_007e1ef0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001ab180; end: 001ab1bf;  */

undefined8 FUN_001ab180(void)

{
  if (lRam0000000000af2c50 != -1) {
    _swift_once(0xaf2c50,0x1ab16c);
  }
  return 0xb65a70;
}



/* Entry: 001ab1c0; end: 001ab25f;  */

void FUN_001ab1c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c50 != -1) {
    _swift_once(0xaf2c50,0x1ab16c);
  }
  uVar5 = uRam0000000000b65a98;
  uVar4 = uRam0000000000b65a90;
  uVar3 = uRam0000000000b65a88;
  uVar2 = uRam0000000000b65a80;
  uVar1 = uRam0000000000b65a78;
  *param_1 = uRam0000000000b65a70;
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



/* Entry: 001ab260; end: 001ab2e3;  */

void FUN_001ab260(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x90))();
    }
  }
  return;
}



/* Entry: 001ab2e4; end: 001ab357;  */

void FUN_001ab2e4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if ((param_2 == 0) || ((**(code **)(param_6 + 0x30))(param_2,1,param_5,param_6), unaff_x21 == 0))
  {
    FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001ab358; end: 001ab437;  */

void FUN_001ab358(long param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
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
  if (param_1 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(param_1);
  }
  uVar1 = (uint)(param_3 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 != 0) {
      lVar3 = (long)(int)param_2;
      lVar4 = param_2 >> 0x20;
      goto LAB_001ab3ec;
    }
    if ((param_3 & 0xff000000000000) == 0) goto LAB_001ab404;
  }
  else {
    if (uVar2 != 2) goto LAB_001ab404;
    lVar3 = *(long *)(param_2 + 0x10);
    lVar4 = *(long *)(param_2 + 0x18);
LAB_001ab3ec:
    if (lVar3 == lVar4) goto LAB_001ab404;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_d0,param_2,param_3);
LAB_001ab404:
  uStack_58 = uStack_a8;
  uStack_60 = uStack_b0;
  uStack_48 = uStack_98;
  uStack_50 = uStack_a0;
  uStack_40 = uStack_90;
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_68 = uStack_b8;
  uStack_70 = uStack_c0;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ab438; end: 001ab467;  */

undefined1  [16] FUN_001ab438(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008b8ed0;
  auVar1._0_8_ = 0xd00000000000001b;
  return auVar1;
}



/* Entry: 001ab468; end: 001ab49f;  */

void FUN_001ab468(void)

{
  FUN_001ab260();
  return;
}



/* Entry: 001ab4a0; end: 001ab53f;  */

void FUN_001ab4a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c50 != -1) {
    _swift_once(0xaf2c50,0x1ab16c);
  }
  uVar5 = uRam0000000000b65a98;
  uVar4 = uRam0000000000b65a90;
  uVar3 = uRam0000000000b65a88;
  uVar2 = uRam0000000000b65a80;
  uVar1 = uRam0000000000b65a78;
  *param_1 = uRam0000000000b65a70;
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



/* Entry: 001ab540; end: 001ab55f;  */

void FUN_001ab540(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d80;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d80,&UNK_007e1ee8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001ab560; end: 001ab5bb;  */

void FUN_001ab560(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*param_3)(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ab5bc; end: 001ab5d3;  */

void FUN_001ab5bc(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  lVar5 = *unaff_x20;
  lVar1 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (lVar5 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(lVar5);
  }
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_0014ddfc;
    }
    if ((uVar3 & 0xff000000000000) == 0) goto LAB_0014de14;
  }
  else {
    if (uVar4 != 2) goto LAB_0014de14;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_0014ddfc:
    if (lVar5 == lVar6) goto LAB_0014de14;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar3);
LAB_0014de14:
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



/* Entry: 001ab5d4; end: 001ab62b;  */

void FUN_001ab5d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *in_x3;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*in_x3)(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ab62c; end: 001ab68b;  */

ulong FUN_001ab62c(long *param_1,long *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar13 = param_2[1];
  uVar8 = param_2[2];
  lVar9 = param_1[1];
  pbVar11 = (byte *)param_1[2];
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar16 - (long)pbVar11;
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar16 - (long)pbVar11;
    }
    if (SBORROW8(uVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar16 = uVar18 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar16 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar16;
}



/* Entry: 001ab68c; end: 001ab6cb;  */

undefined8 FUN_001ab68c(void)

{
  if (lRam0000000000af2c58 != -1) {
    _swift_once(0xaf2c58,0x1ab678);
  }
  return 0xb65aa0;
}



/* Entry: 001ab6cc; end: 001ab76b;  */

void FUN_001ab6cc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c58 != -1) {
    _swift_once(0xaf2c58,0x1ab678);
  }
  uVar5 = uRam0000000000b65ac8;
  uVar4 = uRam0000000000b65ac0;
  uVar3 = uRam0000000000b65ab8;
  uVar2 = uRam0000000000b65ab0;
  uVar1 = uRam0000000000b65aa8;
  *param_1 = uRam0000000000b65aa0;
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



/* Entry: 001ab76c; end: 001ab7ef;  */

void FUN_001ab76c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x48))();
    }
  }
  return;
}



/* Entry: 001ab7f0; end: 001ab863;  */

void FUN_001ab7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if (((int)param_2 == 0) ||
     ((**(code **)(param_6 + 0x18))(param_2,1,param_5,param_6), unaff_x21 == 0)) {
    FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001ab864; end: 001ab8d7;  */

ulong FUN_001ab864(int param_1,long param_2,byte *param_3,int param_4,long param_5,ulong param_6)

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
  
  if (param_1 != param_4) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  if ((ulong)param_3 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_2 != 0) || (param_3 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_2 >> 0x20);
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
      uVar14 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
        uVar12 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
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
        uVar14 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar11,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_5)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
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
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_2 >> 0x20) - lVar17;
        if (param_2 >> 0x20 < lVar17) {
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
          lVar7 = param_2;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar7) + param_2;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_2 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_2);
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
          param_3 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_2;
        if (param_2 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar6) + param_2;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_2);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_3 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_2,pbVar9,param_5,param_6);
      uVar12 = (ulong)abStack_70[0];
      param_3 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_3 - uVar12;
  if (SBORROW8((long)param_3,uVar12)) {
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
  lVar17 = param_5 - lVar6;
  if (SBORROW8(param_5,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_3;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_3;
    }
    if (SBORROW8(uVar14,(long)param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_5 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_3 * 8;
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
  if (0 < param_5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001ab8d8; end: 001ab90f;  */

void FUN_001ab8d8(void)

{
  FUN_001ab76c();
  return;
}



/* Entry: 001ab910; end: 001ab9af;  */

void FUN_001ab910(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c58 != -1) {
    _swift_once(0xaf2c58,0x1ab678);
  }
  uVar5 = uRam0000000000b65ac8;
  uVar4 = uRam0000000000b65ac0;
  uVar3 = uRam0000000000b65ab8;
  uVar2 = uRam0000000000b65ab0;
  uVar1 = uRam0000000000b65aa8;
  *param_1 = uRam0000000000b65aa0;
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



/* Entry: 001ab9b0; end: 001aba27;  */

void FUN_001ab9b0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d78;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d78,&UNK_007e1ee0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001aba28; end: 001aba67;  */

undefined8 FUN_001aba28(void)

{
  if (lRam0000000000af2c60 != -1) {
    _swift_once(0xaf2c60,0x1aba14);
  }
  return 0xb65ad0;
}



/* Entry: 001aba68; end: 001abb07;  */

void FUN_001aba68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c60 != -1) {
    _swift_once(0xaf2c60,0x1aba14);
  }
  uVar5 = uRam0000000000b65af8;
  uVar4 = uRam0000000000b65af0;
  uVar3 = uRam0000000000b65ae8;
  uVar2 = uRam0000000000b65ae0;
  uVar1 = uRam0000000000b65ad8;
  *param_1 = uRam0000000000b65ad0;
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



/* Entry: 001abb08; end: 001abb8b;  */

void FUN_001abb08(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x78))();
    }
  }
  return;
}



/* Entry: 001abb8c; end: 001abbff;  */

void FUN_001abb8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if (((int)param_2 == 0) ||
     ((**(code **)(param_6 + 0x28))(param_2,1,param_5,param_6), unaff_x21 == 0)) {
    FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001abc00; end: 001abc0b;  */

void FUN_001abc00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*(code *)0x14df1c)(auStack_78,param_1,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001abc0c; end: 001abc6b;  */

void FUN_001abc0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*param_4)(auStack_78,param_1,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001abc6c; end: 001abc9b;  */

undefined1  [16] FUN_001abc6c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008b8eb0;
  auVar1._0_8_ = 0xd00000000000001b;
  return auVar1;
}



/* Entry: 001abc9c; end: 001abcd3;  */

void FUN_001abc9c(void)

{
  FUN_001abb08();
  return;
}



/* Entry: 001abcd4; end: 001abd73;  */

void FUN_001abcd4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c60 != -1) {
    _swift_once(0xaf2c60,0x1aba14);
  }
  uVar5 = uRam0000000000b65af8;
  uVar4 = uRam0000000000b65af0;
  uVar3 = uRam0000000000b65ae8;
  uVar2 = uRam0000000000b65ae0;
  uVar1 = uRam0000000000b65ad8;
  *param_1 = uRam0000000000b65ad0;
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



/* Entry: 001abd74; end: 001abd93;  */

void FUN_001abd74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d70;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d70,&UNK_007e1ed8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001abd94; end: 001abdef;  */

void FUN_001abd94(undefined8 param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  (*param_3)(auStack_78,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001abdf0; end: 001abe07;  */

void FUN_001abdf0(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  
  iVar3 = *unaff_x20;
  lVar1 = *(long *)(unaff_x20 + 2);
  uVar2 = *(ulong *)(unaff_x20 + 4);
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_50 = param_1[8];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  if (iVar3 != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys6UInt64VF(iVar3);
  }
  uVar4 = (uint)(uVar2 >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)lVar1;
      lVar7 = lVar1 >> 0x20;
      goto LAB_0014dfac;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0014dfc4;
  }
  else {
    if (uVar5 != 2) goto LAB_0014dfc4;
    lVar6 = *(long *)(lVar1 + 0x10);
    lVar7 = *(long *)(lVar1 + 0x18);
LAB_0014dfac:
    if (lVar6 == lVar7) goto LAB_0014dfc4;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar2);
LAB_0014dfc4:
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



/* Entry: 001abe08; end: 001abe5f;  */

void FUN_001abe08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  code *in_x3;
  undefined4 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 2);
  uVar2 = *(undefined8 *)(unaff_x20 + 4);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  (*in_x3)(auStack_78,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001abe60; end: 001abebf;  */

ulong FUN_001abe60(int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar13 = *(long *)(param_2 + 2);
  uVar8 = *(ulong *)(param_2 + 4);
  lVar9 = *(long *)(param_1 + 2);
  pbVar11 = *(byte **)(param_1 + 4);
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar16 - (long)pbVar11;
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar16 - (long)pbVar11;
    }
    if (SBORROW8(uVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar16 = uVar18 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar16 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar16;
}



/* Entry: 001abec0; end: 001abeff;  */

undefined8 FUN_001abec0(void)

{
  if (lRam0000000000af2c68 != -1) {
    _swift_once(0xaf2c68,0x1abeac);
  }
  return 0xb65b00;
}



/* Entry: 001abf00; end: 001abf9f;  */

void FUN_001abf00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c68 != -1) {
    _swift_once(0xaf2c68,0x1abeac);
  }
  uVar5 = uRam0000000000b65b28;
  uVar4 = uRam0000000000b65b20;
  uVar3 = uRam0000000000b65b18;
  uVar2 = uRam0000000000b65b10;
  uVar1 = uRam0000000000b65b08;
  *param_1 = uRam0000000000b65b00;
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



/* Entry: 001abfa0; end: 001ac023;  */

void FUN_001abfa0(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 == 1) {
      (**(code **)(param_3 + 0x138))();
    }
  }
  return;
}



/* Entry: 001ac024; end: 001ac097;  */

void FUN_001ac024(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  long unaff_x21;
  
  if (((param_2 & 1) == 0) || ((**(code **)(param_6 + 0x68))(1,1,param_5,param_6), unaff_x21 == 0))
  {
    FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}



/* Entry: 001ac098; end: 001ac0bb;  */

ulong FUN_001ac098(uint param_1,long param_2,byte *param_3,uint param_4,long param_5,ulong param_6)

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
  
  if (((param_1 ^ param_4) & 1) != 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(param_6 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  if ((ulong)param_3 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((param_2 != 0) || (param_3 != (byte *)0xc000000000000000)) || (param_6 >> 0x3e < 3)) ||
       ((uVar12 = 0, param_5 != 0 || (param_6 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)param_3 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)((ulong)param_2 >> 0x20);
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
      uVar14 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
      if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
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
        uVar12 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
        if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
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
        uVar14 = param_6 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)param_5 >> 0x20);
      if (SBORROW4(iVar11,(int)param_5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)param_5)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
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
          uVar12 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        lVar6 = (param_2 >> 0x20) - lVar17;
        if (param_2 >> 0x20 < lVar17) {
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
          lVar7 = param_2;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar7) + param_2;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (param_2 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar9 = (byte *)(lVar7 + param_2);
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
          param_3 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(param_2 + 0x10);
        lVar7 = *(long *)(param_2 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = param_2;
        if (param_2 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          param_2 = (lVar17 - lVar6) + param_2;
        }
        lVar1 = lVar7 - lVar17;
        if (SBORROW8(lVar7,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (param_2 == 0) {
          pbVar9 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar9 = (byte *)(lVar6 + param_2);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)param_3 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,param_2,pbVar9,param_5,param_6);
      uVar12 = (ulong)abStack_70[0];
      param_3 = pbVar9;
      goto LAB_00038af8;
    }
  }
  uVar12 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar12;
  }
  ___stack_chk_fail();
  lVar6 = (long)param_3 - uVar12;
  if (SBORROW8((long)param_3,uVar12)) {
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
  lVar17 = param_5 - lVar6;
  if (SBORROW8(param_5,lVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar17 != 0) {
    if (uVar16 >> 0x3e == 0) {
      uVar14 = *(ulong *)(uVar15 + 0x10);
      lVar6 = uVar14 - (long)param_3;
    }
    else {
      uVar14 = uVar15;
      if ((uVar16 & 0x8000000000000000) != 0) {
        uVar14 = uVar16;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar6 = uVar14 - (long)param_3;
    }
    if (SBORROW8(uVar14,(long)param_3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar12 = uVar12 + param_5 * 8;
    uVar14 = uVar15 + 0x20 + (long)param_3 * 8;
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
  if (0 < param_5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar14;
}



/* Entry: 001ac0bc; end: 001ac117;  */

void FUN_001ac0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014dff4(auStack_78,param_1,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ac118; end: 001ac15b;  */

void FUN_001ac118(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xc000000000000000;
  *(undefined8 *)(param_1 + 8) = 0;
  return;
}



/* Entry: 001ac15c; end: 001ac193;  */

void FUN_001ac15c(void)

{
  FUN_001abfa0();
  return;
}



/* Entry: 001ac194; end: 001ac233;  */

void FUN_001ac194(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c68 != -1) {
    _swift_once(0xaf2c68,0x1abeac);
  }
  uVar5 = uRam0000000000b65b28;
  uVar4 = uRam0000000000b65b20;
  uVar3 = uRam0000000000b65b18;
  uVar2 = uRam0000000000b65b10;
  uVar1 = uRam0000000000b65b08;
  *param_1 = uRam0000000000b65b00;
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



/* Entry: 001ac234; end: 001ac247;  */

void FUN_001ac234(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d68;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d68,&UNK_007e1ed0);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001ac248; end: 001ac27b;  */

void FUN_001ac248(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 001ac27c; end: 001ac2d3;  */

void FUN_001ac27c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014dff4(auStack_78,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ac2d4; end: 001ac2df;  */

void FUN_001ac2d4(undefined8 *param_1)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  byte *unaff_x20;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  lVar1 = *(long *)(unaff_x20 + 8);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uStack_58 = param_1[5];
  uStack_60 = param_1[4];
  uStack_48 = param_1[7];
  uStack_50 = param_1[6];
  uStack_40 = param_1[8];
  uStack_78 = param_1[1];
  uStack_80 = *param_1;
  uStack_68 = param_1[3];
  uStack_70 = param_1[2];
  if ((*unaff_x20 & 1) != 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyys5UInt8VF(1);
  }
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_0014e07c;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_0014e094;
  }
  else {
    if (uVar4 != 2) goto LAB_0014e094;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_0014e07c:
    if (lVar5 == lVar6) goto LAB_0014e094;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_80,lVar1,uVar2);
LAB_0014e094:
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



/* Entry: 001ac2e0; end: 001ac333;  */

void FUN_001ac2e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(unaff_x20 + 8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  FUN_0014dff4(auStack_78,uVar3,uVar1,uVar2);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ac334; end: 001ac393;  */

ulong FUN_001ac334(char *param_1,char *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  byte *pbVar11;
  byte *pbVar12;
  long lVar13;
  uint uVar14;
  int iVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  ulong *unaff_x20;
  ulong uVar19;
  long lVar20;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  if (*param_1 != *param_2) {
    return 0;
  }
  lVar13 = *(long *)(param_2 + 8);
  uVar8 = *(ulong *)(param_2 + 0x10);
  lVar9 = *(long *)(param_1 + 8);
  pbVar11 = *(byte **)(param_1 + 0x10);
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar11 >> 0x20);
  uVar14 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar8 >> 0x20);
  uVar17 = uVar3 >> 0x1e;
  iVar5 = (int)lVar9;
  if ((ulong)pbVar11 >> 0x3e == 3) {
    uVar16 = 0;
    if ((((lVar9 != 0) || (pbVar11 != (byte *)0xc000000000000000)) || (uVar8 >> 0x3e < 3)) ||
       ((uVar16 = 0, lVar13 != 0 || (uVar8 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar14 == 0) {
        uVar16 = (ulong)pbVar11 >> 0x30 & 0xff;
      }
      else {
        iVar15 = (int)((ulong)lVar9 >> 0x20);
        if (SBORROW4(iVar15,iVar5)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b38);
          (*pcVar4)();
        }
        uVar16 = (ulong)(iVar15 - iVar5);
      }
joined_r0x000389b8:
      if (uVar3 >> 0x1e < 2) goto LAB_000388cc;
LAB_00038898:
      if (uVar17 != 2) {
        uVar8 = (ulong)(uVar16 == 0);
        goto LAB_00038af8;
      }
      uVar18 = *(long *)(lVar13 + 0x18) - *(long *)(lVar13 + 0x10);
      if (SBORROW8(*(long *)(lVar13 + 0x18),*(long *)(lVar13 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar16 != uVar18) {
LAB_0003899c:
        uVar8 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar14 == 2) {
        uVar16 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
        if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b34);
          (*pcVar4)();
        }
        goto joined_r0x000389b8;
      }
      uVar16 = 0;
      if (1 < uVar17) goto LAB_00038898;
LAB_000388cc:
      if (uVar17 == 0) {
        uVar18 = uVar8 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar15 = (int)((ulong)lVar13 >> 0x20);
      if (SBORROW4(iVar15,(int)lVar13)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar16 != (long)(iVar15 - (int)lVar13)) goto LAB_0003899c;
    }
    if (0 < (long)uVar16) {
      if (uVar14 < 2) {
        if (uVar14 == 0) {
          abStack_70[0] = (byte)lVar9;
          abStack_70[1] = (byte)((ulong)lVar9 >> 8);
          abStack_70[2] = (byte)((ulong)lVar9 >> 0x10);
          abStack_70[3] = (byte)((ulong)lVar9 >> 0x18);
          abStack_70[4] = (byte)((ulong)lVar9 >> 0x20);
          abStack_70[5] = (byte)((ulong)lVar9 >> 0x28);
          abStack_70[6] = (byte)((ulong)lVar9 >> 0x30);
          abStack_70[7] = (byte)((ulong)lVar9 >> 0x38);
          abStack_70[8] = (byte)pbVar11;
          abStack_70[9] = (byte)((ulong)pbVar11 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar11 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar11 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar11 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar11 >> 0x28);
          pbVar11 = abStack_70 + ((ulong)pbVar11 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar8 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar20 = (long)iVar5;
        lVar6 = (lVar9 >> 0x20) - lVar20;
        if (lVar9 >> 0x20 < lVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (lVar9 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          lVar9 = 0;
        }
        else {
          lVar7 = lVar9;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar7)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar7) + lVar9;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (lVar9 != 0) {
            if (lVar6 <= lVar7) {
              lVar7 = lVar6;
            }
            pbVar12 = (byte *)(lVar7 + lVar9);
            goto LAB_00038aec;
          }
        }
        pbVar12 = (byte *)0x0;
      }
      else {
        if (uVar14 != 2) {
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
        lVar20 = *(long *)(lVar9 + 0x10);
        lVar7 = *(long *)(lVar9 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        lVar6 = lVar9;
        if (lVar9 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar20,lVar6)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          lVar9 = (lVar20 - lVar6) + lVar9;
        }
        lVar1 = lVar7 - lVar20;
        if (SBORROW8(lVar7,lVar20)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (lVar9 == 0) {
          pbVar12 = (byte *)0x0;
        }
        else {
          if (lVar1 <= lVar6) {
            lVar6 = lVar1;
          }
          pbVar12 = (byte *)(lVar6 + lVar9);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar11 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,lVar9,pbVar12,lVar13,uVar8);
      uVar8 = (ulong)abStack_70[0];
      pbVar11 = pbVar12;
      goto LAB_00038af8;
    }
  }
  uVar8 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar8;
  }
  ___stack_chk_fail();
  lVar9 = (long)pbVar11 - uVar8;
  if (SBORROW8((long)pbVar11,uVar8)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar19 = *unaff_x20;
  uVar18 = uVar19 & 0xffffffffffffff8;
  uVar8 = uVar18 + 0x20 + uVar8 * 8;
  uVar10 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar16 = uVar8;
  _swift_arrayDestroy(uVar8,lVar9,uVar10);
  lVar6 = lVar13 - lVar9;
  if (SBORROW8(lVar13,lVar9)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar6 != 0) {
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
      lVar9 = uVar16 - (long)pbVar11;
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar9 = uVar16 - (long)pbVar11;
    }
    if (SBORROW8(uVar16,(long)pbVar11)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar8 = uVar8 + lVar13 * 8;
    uVar16 = uVar18 + 0x20 + (long)pbVar11 * 8;
    if (uVar8 != uVar16 || uVar16 + lVar9 * 8 <= uVar8) {
      _memmove(uVar8,uVar16,lVar9 << 3);
    }
    if (uVar19 >> 0x3e == 0) {
      uVar16 = *(ulong *)(uVar18 + 0x10);
    }
    else {
      uVar16 = uVar18;
      if ((uVar19 & 0x8000000000000000) != 0) {
        uVar16 = uVar19;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar16,lVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar18 + 0x10) = uVar16 + lVar6;
  }
  if (0 < lVar13) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar16;
}



/* Entry: 001ac394; end: 001ac3d3;  */

undefined8 FUN_001ac394(void)

{
  if (lRam0000000000af2c70 != -1) {
    _swift_once(0xaf2c70,0x1ac380);
  }
  return 0xb65b30;
}



/* Entry: 001ac3d4; end: 001ac473;  */

void FUN_001ac3d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c70 != -1) {
    _swift_once(0xaf2c70,0x1ac380);
  }
  uVar5 = uRam0000000000b65b58;
  uVar4 = uRam0000000000b65b50;
  uVar3 = uRam0000000000b65b48;
  uVar2 = uRam0000000000b65b40;
  uVar1 = uRam0000000000b65b38;
  *param_1 = uRam0000000000b65b30;
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



/* Entry: 001ac474; end: 001ac4f7;  */

void FUN_001ac474(undefined8 param_1,long param_2,long param_3)

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



/* Entry: 001ac4f8; end: 001ac57f;  */

void FUN_001ac4f8(undefined8 param_1,ulong param_2,ulong param_3,undefined8 param_4,
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



/* Entry: 001ac580; end: 001ac65b;  */

ulong FUN_001ac580(ulong param_1,long param_2,long param_3,byte *param_4,ulong param_5,long param_6,
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



/* Entry: 001ac65c; end: 001ac6a3;  */

void FUN_001ac65c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  param_1[3] = 0xc000000000000000;
  param_1[2] = 0;
  return;
}



/* Entry: 001ac6a4; end: 001ac6db;  */

void FUN_001ac6a4(void)

{
  FUN_001ac474();
  return;
}



/* Entry: 001ac6dc; end: 001ac77b;  */

void FUN_001ac6dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2c70 != -1) {
    _swift_once(0xaf2c70,0x1ac380);
  }
  uVar5 = uRam0000000000b65b58;
  uVar4 = uRam0000000000b65b50;
  uVar3 = uRam0000000000b65b48;
  uVar2 = uRam0000000000b65b40;
  uVar1 = uRam0000000000b65b38;
  *param_1 = uRam0000000000b65b30;
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



/* Entry: 001ac77c; end: 001ac78f;  */

void FUN_001ac77c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2d60;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2d60,&UNK_007e1ec8);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 001ac790; end: 001ac7eb;  */

void FUN_001ac790(void)

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
  func_0x00192fbc(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ac7ec; end: 001ac7f7;  */

void FUN_001ac7ec(undefined8 *param_1)

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



/* Entry: 001ac7f8; end: 001ac8c7;  */

void FUN_001ac7f8(void)

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
  func_0x00192fbc(auStack_78,uVar1,uVar3,uVar2,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001ac8c8; end: 001ac903;  */

undefined * FUN_001ac8c8(void)

{
  return &UNK_009b4d10;
}



/* Entry: 001ac904; end: 001ac99b;  */

void FUN_001ac904(undefined8 param_1,long *param_2,undefined8 *param_3,undefined8 *param_4)

{
  long lVar1;
  undefined8 uStack_68;
  long lStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  
  lVar1 = 0;
  FUN_0011ae80();
  _swift_allocObject();
  puStack_40 = PTR___swiftEmptyArrayStorage_0099b8f0;
  *(undefined **)(lVar1 + 0x10) = PTR___swiftEmptyArrayStorage_0099b8f0;
  puStack_58 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_50 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_48 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  puStack_38 = puStack_40;
  uStack_68 = 0;
  lStack_60 = lVar1;
  FUN_000de3ec(&UNK_007e1f08,8,&uStack_68,&lStack_60);
  param_2[1] = (long)puStack_58;
  *param_2 = lStack_60;
  param_3[1] = puStack_48;
  *param_3 = puStack_50;
  param_4[1] = puStack_38;
  *param_4 = puStack_40;
  return;
}



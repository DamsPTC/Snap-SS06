/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 001963b8; end: 001963fb;  */

byte FUN_001963b8(void)

{
  byte *unaff_x20;
  
  if ((((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (unaff_x20[0x18] == 0xff)) {
    return 0;
  }
  return ((uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3c) & 0xfffffc03 | (unaff_x20[0x18] & 0x3f) << 2)
         == 3 & *unaff_x20;
}



/* Entry: 001963fc; end: 0019643b;  */

void FUN_001963fc(ulong param_1)

{
  ulong *unaff_x20;
  
  FUN_000f2330(*unaff_x20,unaff_x20[1],unaff_x20[2],(char)unaff_x20[3]);
  *unaff_x20 = param_1 & 1;
  unaff_x20[2] = 0x3000000000000000;
  unaff_x20[1] = 0;
  *(undefined1 *)(unaff_x20 + 3) = 0;
  return;
}



/* Entry: 0019643c; end: 00196493;  */

code * FUN_0019643c(undefined8 *param_1)

{
  byte bVar1;
  undefined8 *unaff_x20;
  
  *param_1 = unaff_x20;
  if ((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
     (*(byte *)(unaff_x20 + 3) == 0xff)) {
    bVar1 = 0;
  }
  else {
    bVar1 = ((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 |
            (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) == 3 & (byte)*unaff_x20;
  }
  *(byte *)(param_1 + 1) = bVar1;
  return FUN_00196494;
}



/* Entry: 00196494; end: 001964d7;  */

void FUN_00196494(undefined8 *param_1)

{
  byte bVar1;
  ulong *puVar2;
  
  puVar2 = (ulong *)*param_1;
  bVar1 = *(byte *)(param_1 + 1);
  FUN_000f2330(*puVar2,puVar2[1],puVar2[2],(char)puVar2[3]);
  *puVar2 = (ulong)bVar1;
  puVar2[2] = 0x3000000000000000;
  puVar2[1] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  return;
}



/* Entry: 001964d8; end: 001965af;  */

void FUN_001964d8(void)

{
  undefined8 *unaff_x20;
  ulong uVar1;
  
  uVar1 = unaff_x20[2];
  if (((((uVar1 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
      (*(byte *)(unaff_x20 + 3) == 0xff)) ||
     (((uint)(uVar1 >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) != 4)) {
    FUN_0019aad0(PTR___swiftEmptyArrayStorage_0099b8f0);
  }
  else {
    FUN_000f22b4(*unaff_x20,unaff_x20[1],uVar1);
  }
  return;
}



/* Entry: 001965b0; end: 00196653;  */

undefined1  [16] FUN_001965b0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  
  param_1[3] = unaff_x20;
  puVar1 = (undefined *)*unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  if (((((uVar2 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) &&
      (*(byte *)(unaff_x20 + 3) == 0xff)) ||
     (((uint)(uVar2 >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) != 4)) {
    puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
    FUN_0019aad0();
    uVar3 = 0;
    uVar2 = 0xc000000000000000;
  }
  else {
    FUN_000f22b4(puVar1,uVar3,uVar2);
  }
  *param_1 = puVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_00196654;
  return auVar4;
}



/* Entry: 00196654; end: 0019671f;  */

void FUN_00196654(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  puVar5 = (undefined8 *)param_1[3];
  uVar3 = *puVar5;
  uVar6 = puVar5[1];
  uVar9 = puVar5[2];
  uVar7 = *(undefined1 *)(puVar5 + 3);
  if ((param_2 & 1) == 0) {
    FUN_000f2330(uVar3,uVar6,uVar9,uVar7);
    *puVar5 = uVar1;
    puVar5[1] = uVar4;
    puVar5[2] = uVar2;
    *(undefined1 *)(puVar5 + 3) = 1;
    return;
  }
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar4,uVar2);
  FUN_000f2330(uVar3,uVar6,uVar9,uVar7);
  *puVar5 = uVar1;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2;
  *(undefined1 *)(puVar5 + 3) = 1;
  _swift_bridgeObjectRelease(uVar1);
  uVar8 = (uint)(uVar2 >> 0x3e);
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      return;
    }
    _swift_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00196720; end: 00196887;  */

undefined * FUN_00196720(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  
  puVar1 = (undefined *)*unaff_x20;
  puVar2 = PTR___swiftEmptyArrayStorage_0099b8f0;
  if (((((unaff_x20[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(unaff_x20 + 3) != 0xff)) &&
     (((uint)((ulong)unaff_x20[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(unaff_x20 + 3) & 0x3f) << 2) ==
      5)) {
    FUN_000f22b4(puVar1,unaff_x20[1]);
    puVar2 = puVar1;
  }
  return puVar2;
}



/* Entry: 00196888; end: 00196963;  */

void FUN_00196888(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined8 uVar9;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  uVar2 = param_1[2];
  puVar5 = (undefined8 *)param_1[3];
  uVar3 = *puVar5;
  uVar6 = puVar5[1];
  uVar9 = puVar5[2];
  uVar7 = *(undefined1 *)(puVar5 + 3);
  if ((param_2 & 1) == 0) {
    FUN_000f2330(uVar3,uVar6,uVar9,uVar7);
    *puVar5 = uVar1;
    puVar5[1] = uVar4;
    puVar5[2] = uVar2 | 0x1000000000000000;
    *(undefined1 *)(puVar5 + 3) = 1;
    return;
  }
  _swift_bridgeObjectRetain(uVar1);
  func_0x00023304(uVar4,uVar2);
  FUN_000f2330(uVar3,uVar6,uVar9,uVar7);
  *puVar5 = uVar1;
  puVar5[1] = uVar4;
  puVar5[2] = uVar2 | 0x1000000000000000;
  *(undefined1 *)(puVar5 + 3) = 1;
  _swift_bridgeObjectRelease(uVar1);
  uVar8 = (uint)(uVar2 >> 0x3e);
  if (uVar8 != 1) {
    if (uVar8 != 2) {
      return;
    }
    _swift_release(uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x0077b524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_0099bb20)(uVar2 & 0x3fffffffffffffff);
  return;
}



/* Entry: 00196964; end: 00196993;  */

undefined1  [16] FUN_00196964(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 00196994; end: 001969c7;  */

void FUN_00196994(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 001969c8; end: 001969df;  */

undefined1  [16] FUN_001969c8(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x1969d8;
  return auVar1;
}



/* Entry: 001969e0; end: 00196a9f;  */

ulong FUN_001969e0(ulong param_1,long param_2,byte *param_3,undefined8 param_4,long param_5,
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
  
  FUN_00199188(param_1,param_4);
  if ((param_1 & 1) == 0) {
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



/* Entry: 00196aa0; end: 00196ac7;  */

double FUN_00196aa0(double *param_1,double *param_2)

{
  double dVar1;
  double dVar2;
  uint uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  uint uVar8;
  uint uVar9;
  
  dVar4 = *param_1;
  dVar5 = param_1[1];
  dVar6 = param_1[2];
  dVar1 = *param_2;
  dVar2 = param_2[1];
  dVar7 = param_2[2];
  uVar9 = (uint)((ulong)dVar6 >> 0x3c) & 3 | (*(byte *)(param_1 + 3) & 0x3f) << 2;
  uVar8 = (uint)*(byte *)(param_2 + 3);
  uVar3 = (uint)((ulong)dVar7 >> 0x20);
  if (uVar9 < 3) {
    if (uVar9 == 0) {
      if ((uVar3 >> 0x1c & 3) == 0 && (*(byte *)(param_2 + 3) & 0x3f) == 0) {
        dVar6 = 0.0;
        if (((ulong)dVar5 & 0xff) != 1) {
          dVar6 = dVar4;
        }
        if (((ulong)dVar2 & 0xff) == 1) {
          if (dVar6 != 0.0) goto LAB_0019adc8;
        }
        else if (dVar6 != dVar1) goto LAB_0019adc8;
LAB_0019adb8:
        uVar9 = 1;
        goto LAB_0019adcc;
      }
    }
    else {
      if (uVar9 == 1) {
        uVar9 = (uint)(dVar4 == dVar1);
        if ((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) != 1) {
          uVar9 = 0;
        }
        goto LAB_0019adcc;
      }
      if ((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) == 2) {
        if ((dVar4 != dVar1) || (dVar5 != dVar2)) {
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
          )(dVar4,dVar5,dVar1,dVar2,0);
          return dVar4;
        }
        goto LAB_0019adb8;
      }
    }
  }
  else {
    if (uVar9 == 3) {
      uVar9 = SUB84(dVar1,0) ^ SUB84(dVar4,0) ^ 1;
      if ((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) != 3) {
        uVar9 = 0;
      }
      goto LAB_0019adcc;
    }
    if (uVar9 == 4) {
      if (((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) == 4) &&
         (FUN_00199188(dVar4,dVar1), ((ulong)dVar4 & 1) != 0)) {
        FUN_00038814(dVar5,dVar6,dVar2,dVar7);
joined_r0x0019adb4:
        if (((ulong)dVar5 & 1) != 0) goto LAB_0019adb8;
      }
    }
    else if (((uVar3 >> 0x1c & 3 | (uVar8 & 0x3f) << 2) == 5) &&
            (FUN_00146270(dVar4,dVar1), ((ulong)dVar4 & 1) != 0)) {
      FUN_00038814(dVar5,(ulong)dVar6 & 0xcfffffffffffffff,dVar2,(ulong)dVar7 & 0xcfffffffffffffff);
      goto joined_r0x0019adb4;
    }
  }
LAB_0019adc8:
  uVar9 = 0;
LAB_0019adcc:
  return (double)(ulong)(uVar9 & 1);
}



/* Entry: 00196ac8; end: 00196aef;  */

void FUN_00196ac8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  _swift_bridgeObjectRelease(*unaff_x20);
  *unaff_x20 = param_1;
  return;
}



/* Entry: 00196af0; end: 00196b03;  */

undefined8 FUN_00196af0(void)

{
  return 0x196b00;
}



/* Entry: 00196b04; end: 00196b37;  */

undefined1  [16] FUN_00196b04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  func_0x00023304(param_2,param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Entry: 00196b38; end: 00196b6b;  */

void FUN_00196b38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00196b6c; end: 00196b7f;  */

undefined1  [16] FUN_00196b6c(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x196b7c;
  return auVar1;
}



/* Entry: 00196b80; end: 00196c3f;  */

void FUN_00196b80(void)

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
  FUN_000de3ec(&UNK_007e08ba,0xe,&uStack_48,&lStack_40);
  puRam0000000000b65758 = puStack_38;
  lRam0000000000b65750 = lStack_40;
  puRam0000000000b65768 = puStack_28;
  puRam0000000000b65760 = puStack_30;
  puRam0000000000b65778 = puStack_18;
  puRam0000000000b65770 = puStack_20;
  return;
}



/* Entry: 00196c40; end: 00196d7f;  */

void FUN_00196c40(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2788 != -1) {
    _swift_once(0xaf2788,FUN_00196b80);
  }
  uVar5 = uRam0000000000b65778;
  uVar4 = uRam0000000000b65770;
  uVar3 = uRam0000000000b65768;
  uVar2 = uRam0000000000b65760;
  uVar1 = uRam0000000000b65758;
  *param_1 = uRam0000000000b65750;
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



/* Entry: 00196d80; end: 00196da7;  */

undefined * FUN_00196d80(void)

{
  return &UNK_009b3c80;
}



/* Entry: 00196da8; end: 00196e67;  */

void FUN_00196da8(void)

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
  FUN_000de3ec(&UNK_007e08b0,9,&uStack_48,&lStack_40);
  puRam0000000000b65788 = puStack_38;
  lRam0000000000b65780 = lStack_40;
  puRam0000000000b65798 = puStack_28;
  puRam0000000000b65790 = puStack_30;
  puRam0000000000b657a8 = puStack_18;
  puRam0000000000b657a0 = puStack_20;
  return;
}



/* Entry: 00196e68; end: 00196f07;  */

void FUN_00196e68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2790 != -1) {
    _swift_once(0xaf2790,FUN_00196da8);
  }
  uVar5 = uRam0000000000b657a8;
  uVar4 = uRam0000000000b657a0;
  uVar3 = uRam0000000000b65798;
  uVar2 = uRam0000000000b65790;
  uVar1 = uRam0000000000b65788;
  *param_1 = uRam0000000000b65780;
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



/* Entry: 00196f08; end: 00196fdf;  */

/* WARNING: Removing unreachable block (ram,0x00196fdc) */

void FUN_00196f08(undefined8 param_1,long param_2,long param_3)

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
        pcVar4 = *(code **)(param_3 + 0x1c8);
        FUN_0019ade0();
        func_0x000ebce0();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00196fe0; end: 001970a7;  */

void FUN_00196fe0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  code *pcVar3;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_6 + 0x1a8);
    uVar1 = param_1;
    FUN_0019ade0();
    uVar2 = uVar1;
    func_0x000ebce0();
    (*pcVar3)(param_2,1,&UNK_009ac930,&UNK_009b4018,&PTR_DAT_009ac748,uVar1,uVar2,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 001970a8; end: 00197103;  */

void FUN_001970a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_78 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_78,0);
  FUN_0014d9bc(auStack_78,param_1,param_2,param_3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00197104; end: 0019713b;  */

void FUN_00197104(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  FUN_0019aad0();
  *param_1 = puVar1;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 0019713c; end: 0019716b;  */

undefined1  [16] FUN_0019713c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x80000000008b8e70;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Entry: 0019716c; end: 001971a3;  */

void FUN_0019716c(void)

{
  FUN_00196f08();
  return;
}



/* Entry: 001971a4; end: 00197243;  */

void FUN_001971a4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af2790 != -1) {
    _swift_once(0xaf2790,FUN_00196da8);
  }
  uVar5 = uRam0000000000b657a8;
  uVar4 = uRam0000000000b657a0;
  uVar3 = uRam0000000000b65798;
  uVar2 = uRam0000000000b65790;
  uVar1 = uRam0000000000b65788;
  *param_1 = uRam0000000000b65780;
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



/* Entry: 00197244; end: 00197257;  */

void FUN_00197244(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2828;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2828,&UNK_007e0838);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00197258; end: 001972af;  */

void FUN_00197258(void)

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
  FUN_0014d9bc(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 001972b0; end: 001972bb;  */

void FUN_001972b0(undefined8 *param_1)

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
  if (*(long *)(lVar5 + 0x10) != 0) {
    __ss6HasherV8_combineyySuF(1);
    FUN_001a75d4(&uStack_90,lVar5);
  }
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_0014da50;
    }
    if ((uVar3 & 0xff000000000000) == 0) goto LAB_0014da68;
  }
  else {
    if (uVar4 != 2) goto LAB_0014da68;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_0014da50:
    if (lVar5 == lVar6) goto LAB_0014da68;
  }
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(&uStack_90,lVar1,uVar3);
LAB_0014da68:
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



/* Entry: 001972bc; end: 0019730f;  */

void FUN_001972bc(void)

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
  FUN_0014d9bc(auStack_78,uVar1,uVar2,uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 00197310; end: 00197343;  */

ulong FUN_00197310(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar12 = *param_1;
  uVar6 = param_1[1];
  pbVar15 = (byte *)param_1[2];
  lVar9 = param_2[1];
  uVar16 = param_2[2];
  FUN_00199188(uVar12,*param_2);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
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
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
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
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
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
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 00197344; end: 00197403;  */

void FUN_00197344(void)

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
  FUN_000de3ec(&UNK_007e0860,0x4f,&uStack_48,&lStack_40);
  puRam0000000000b657b8 = puStack_38;
  lRam0000000000b657b0 = lStack_40;
  puRam0000000000b657c8 = puStack_28;
  puRam0000000000b657c0 = puStack_30;
  puRam0000000000b657d8 = puStack_18;
  puRam0000000000b657d0 = puStack_20;
  return;
}



/* Entry: 00197404; end: 001974a3;  */

void FUN_00197404(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af27a0 != -1) {
    _swift_once(0xaf27a0,FUN_00197344);
  }
  uVar5 = uRam0000000000b657d8;
  uVar4 = uRam0000000000b657d0;
  uVar3 = uRam0000000000b657c8;
  uVar2 = uRam0000000000b657c0;
  uVar1 = uRam0000000000b657b8;
  *param_1 = uRam0000000000b657b0;
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



/* Entry: 001974a4; end: 001975df;  */

/* WARNING: Removing unreachable block (ram,0x001975b0) */
/* WARNING: Removing unreachable block (ram,0x00197594) */
/* WARNING: Removing unreachable block (ram,0x00197544) */
/* WARNING: Removing unreachable block (ram,0x00197578) */

void FUN_001974a4(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  code *pcVar3;
  
  pcVar3 = *(code **)(param_3 + 0x10);
  while ((lVar1 = param_2, lVar2 = param_3, (*pcVar3)(), unaff_x21 == 0 &&
         (((uint)lVar2 & 0xff) != 1))) {
    if (lVar1 < 4) {
      if (lVar1 == 1) {
        FUN_001975e0(param_1);
      }
      else if (lVar1 == 2) {
        FUN_00197758(param_1);
      }
      else if (lVar1 == 3) {
        FUN_001978b4(param_1);
      }
    }
    else if (lVar1 == 4) {
      FUN_00197a28(param_1);
    }
    else if (lVar1 == 5) {
      FUN_00197b78();
    }
    else if (lVar1 == 6) {
      FUN_00197d08();
    }
  }
  return;
}



/* Entry: 001975e0; end: 00197757;  */

void FUN_001975e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long unaff_x21;
  code *pcVar8;
  ulong uVar9;
  undefined8 uStack_70;
  undefined2 uStack_68;
  
  uStack_70 = 0;
  uStack_68 = 0x100;
  pcVar8 = *(code **)(param_4 + 0x188);
  FUN_0019bd7c();
  (*pcVar8)(&uStack_70,&UNK_009b3f20,param_1,param_3,param_4);
  uVar5 = uStack_70;
  if ((unaff_x21 == 0) && (uStack_68._1_1_ != '\x01')) {
    uVar7 = (ulong)(byte)uStack_68;
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar9 = param_2[2];
    cVar3 = *(char *)(param_2 + 3);
    if ((((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
      FUN_000f2290(uVar1,uVar2,uVar9,0xff);
      FUN_000f2330(uVar1,uVar2,uVar9,0xff);
    }
    else {
      FUN_000f2290(uVar1,uVar2,uVar9,cVar3);
      FUN_000f2330(uVar1,uVar2,uVar9,cVar3);
      FUN_000f2330(0,0,0x3000000000000000,0xff);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    *param_2 = uVar5;
    param_2[1] = uVar7;
    param_2[2] = 0;
    uVar4 = *(undefined1 *)(param_2 + 3);
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_000f2330(uVar1,uVar2,uVar6,uVar4);
  }
  return;
}



/* Entry: 00197758; end: 001978b3;  */

void FUN_00197758(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x21;
  ulong uVar7;
  undefined8 uStack_70;
  char cStack_68;
  
  uStack_70 = 0;
  cStack_68 = '\x01';
  (**(code **)(param_4 + 0x38))(&uStack_70,param_3,param_4);
  uVar5 = uStack_70;
  if ((unaff_x21 == 0) && (cStack_68 != '\x01')) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar7 = param_2[2];
    cVar3 = *(char *)(param_2 + 3);
    if ((((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
      FUN_000f2290(uVar1,uVar2,uVar7,0xff);
      FUN_000f2330(uVar1,uVar2,uVar7,0xff);
    }
    else {
      FUN_000f2290(uVar1,uVar2,uVar7,cVar3);
      FUN_000f2330(uVar1,uVar2,uVar7,cVar3);
      FUN_000f2330(0,0,0x3000000000000000,0xff);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar6 = param_2[2];
    *param_2 = uVar5;
    param_2[2] = 0x1000000000000000;
    param_2[1] = 0;
    uVar4 = *(undefined1 *)(param_2 + 3);
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_000f2330(uVar1,uVar2,uVar6,uVar4);
  }
  return;
}



/* Entry: 001978b4; end: 00197a27;  */

void FUN_001978b4(undefined8 param_1,undefined8 *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x21;
  ulong uVar8;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = 0;
  uStack_70 = 0;
  (**(code **)(param_4 + 0x158))(&uStack_70,param_3,param_4);
  lVar6 = lStack_68;
  uVar5 = uStack_70;
  if (unaff_x21 == 0) {
    if (lStack_68 != 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar8 = param_2[2];
      cVar3 = *(char *)(param_2 + 3);
      if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
        FUN_000f2290(uVar1,uVar2,uVar8,0xff);
        FUN_000f2330(uVar1,uVar2,uVar8,0xff);
      }
      else {
        _swift_bridgeObjectRetain(lStack_68);
        FUN_000f2290(uVar1,uVar2,uVar8,cVar3);
        FUN_000f2330(uVar1,uVar2,uVar8,cVar3);
        FUN_000f2330(0,0,0x3000000000000000,0xff);
        (**(code **)(param_4 + 8))(param_3,param_4);
        _swift_bridgeObjectRelease(lVar6);
      }
      uVar1 = *param_2;
      uVar2 = param_2[1];
      uVar7 = param_2[2];
      *param_2 = uVar5;
      param_2[1] = lVar6;
      param_2[2] = 0x2000000000000000;
      uVar4 = *(undefined1 *)(param_2 + 3);
      *(undefined1 *)(param_2 + 3) = 0;
      FUN_000f2330(uVar1,uVar2,uVar7,uVar4);
    }
  }
  else {
    _swift_bridgeObjectRelease(lStack_68);
  }
  return;
}



/* Entry: 00197a28; end: 00197b77;  */

void FUN_00197a28(undefined8 param_1,ulong *param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  char cVar3;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  byte bStack_51;
  
  bStack_51 = 2;
  (**(code **)(param_4 + 0x140))(&bStack_51,param_3,param_4);
  if ((unaff_x21 == 0) && (uVar4 = (ulong)bStack_51, bStack_51 != 2)) {
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar5 = param_2[2];
    cVar3 = (char)param_2[3];
    if ((((uVar5 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cVar3 == -1)) {
      FUN_000f2290(uVar1,uVar2,uVar5,0xff);
      FUN_000f2330(uVar1,uVar2,uVar5,0xff);
    }
    else {
      FUN_000f2290(uVar1,uVar2,uVar5,cVar3);
      FUN_000f2330(uVar1,uVar2,uVar5,cVar3);
      FUN_000f2330(0,0,0x3000000000000000,0xff);
      (**(code **)(param_4 + 8))(param_3,param_4);
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    uVar5 = param_2[2];
    *param_2 = uVar4 & 1;
    param_2[2] = 0x3000000000000000;
    param_2[1] = 0;
    uVar4 = param_2[3];
    *(undefined1 *)(param_2 + 3) = 0;
    FUN_000f2330(uVar1,uVar2,uVar5,(char)uVar4);
  }
  return;
}



/* Entry: 00197b78; end: 00197d07;  */

/* WARNING: Removing unreachable block (ram,0x00197cb0) */

void FUN_00197b78(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  long lVar7;
  uint uVar8;
  long unaff_x21;
  ulong uVar9;
  code *pcVar10;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar9 = param_1[2];
  bVar5 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar8 = (uint)*(byte *)(param_1 + 3);
  plVar6 = param_1;
  if ((!bVar5 || uVar8 != 0xff) && ((uint)(uVar9 >> 0x3c) & 0xfffffc03 | (uVar8 & 0x3f) << 2) == 4)
  {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_000f22b4(lVar1,lVar3,uVar9);
    plVar6 = (long *)0x0;
    FUN_0019bdbc(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar9;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x000ebbe0();
  (*pcVar10)(&lStack_78,&UNK_009b3f98,plVar6,param_3,param_4);
  uVar9 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (bVar5 && uVar8 == 0xff) {
      _swift_bridgeObjectRetain();
      func_0x00023304(lVar3,uVar9);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00023304(lVar3,uVar9);
      (*pcVar10)(param_3,param_4);
    }
    FUN_0019bdbc(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar7 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar9;
    lVar1 = param_1[3];
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_000f2330(lVar2,lVar4,lVar7,(char)lVar1);
  }
  else {
    FUN_0019bdbc(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 00197d08; end: 00197e9b;  */

/* WARNING: Removing unreachable block (ram,0x00197e40) */

void FUN_00197d08(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  bool bVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  long unaff_x21;
  code *pcVar10;
  long lStack_78;
  long lStack_70;
  ulong uStack_68;
  
  uStack_68 = 0;
  lStack_78 = 0;
  lStack_70 = 0;
  uVar7 = param_1[2];
  bVar5 = ((uVar7 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uVar9 = (uint)*(byte *)(param_1 + 3);
  plVar6 = param_1;
  if ((!bVar5 || uVar9 != 0xff) && ((uint)(uVar7 >> 0x3c) & 0xfffffc03 | (uVar9 & 0x3f) << 2) == 5)
  {
    lVar1 = *param_1;
    lVar3 = param_1[1];
    FUN_000f22b4(lVar1,lVar3);
    plVar6 = (long *)0x0;
    FUN_0019bdbc(0,0,0);
    lStack_78 = lVar1;
    lStack_70 = lVar3;
    uStack_68 = uVar7 & 0xcfffffffffffffff;
  }
  pcVar10 = *(code **)(param_4 + 0x198);
  func_0x000ebb60();
  (*pcVar10)(&lStack_78,&UNK_009b4128,plVar6,param_3,param_4);
  uVar7 = uStack_68;
  lVar3 = lStack_70;
  lVar1 = lStack_78;
  if ((unaff_x21 == 0) && (lStack_78 != 0)) {
    if (bVar5 && uVar9 == 0xff) {
      _swift_bridgeObjectRetain();
      func_0x00023304(lVar3,uVar7);
    }
    else {
      pcVar10 = *(code **)(param_4 + 8);
      _swift_bridgeObjectRetain();
      func_0x00023304(lVar3,uVar7);
      (*pcVar10)(param_3,param_4);
    }
    FUN_0019bdbc(lStack_78,lStack_70,uStack_68);
    lVar2 = *param_1;
    lVar4 = param_1[1];
    lVar8 = param_1[2];
    *param_1 = lVar1;
    param_1[1] = lVar3;
    param_1[2] = uVar7 | 0x1000000000000000;
    lVar1 = param_1[3];
    *(undefined1 *)(param_1 + 3) = 1;
    FUN_000f2330(lVar2,lVar4,lVar8,(char)lVar1);
  }
  else {
    FUN_0019bdbc(lStack_78,lStack_70,uStack_68);
  }
  return;
}



/* Entry: 00197e9c; end: 001980c7;  */

void FUN_00197e9c(undefined8 *param_1)

{
  ulong uVar1;
  ulong uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar8 = unaff_x20[2];
  bVar3 = (byte)unaff_x20[3];
  if ((((uVar8 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) || (bVar3 != 0xff)) {
    uVar4 = (uint)(uVar8 >> 0x3c) & 0xfffffc03 | (bVar3 & 0x3f) << 2;
    if (uVar4 < 3) {
      if (uVar4 == 0) {
        FUN_000f2330(uVar1,uVar2,uVar8,bVar3);
        __ss6HasherV8_combineyySuF(1);
        uVar8 = 0;
        if ((uVar2 & 0xff) != 1) {
          uVar8 = uVar1;
        }
        __ss6HasherV8_combineyySuF(uVar8);
      }
      else if (uVar4 == 1) {
        FUN_000f2330(uVar1,uVar2,uVar8,bVar3);
        __ss6HasherV8_combineyySuF(2);
        uVar2 = 0;
        if ((uVar1 & 0x7fffffffffffffff) != 0) {
          uVar2 = uVar1;
        }
        __ss6HasherV8_combineyys6UInt64VF(uVar2);
      }
      else {
        __ss6HasherV8_combineyySuF(3);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
      }
    }
    else if (uVar4 == 3) {
      FUN_000f2330(uVar1,uVar2,uVar8,bVar3);
      __ss6HasherV8_combineyySuF(4);
      __ss6HasherV8_combineyys5UInt8VF((uint)uVar1 & 1);
    }
    else if (uVar4 == 4) {
      FUN_001a1d5c();
      if (unaff_x21 != 0) {
        return;
      }
    }
    else {
      __ss6HasherV8_combineyySuF(6);
      uStack_78 = param_1[5];
      uStack_80 = param_1[4];
      uStack_68 = param_1[7];
      uStack_70 = param_1[6];
      uStack_60 = param_1[8];
      uStack_98 = param_1[1];
      uStack_a0 = *param_1;
      uStack_88 = param_1[3];
      uStack_90 = param_1[2];
      FUN_000f22b4(uVar1,uVar2,uVar8,bVar3);
      FUN_00198bac(&uStack_a0,uVar1,uVar2,uVar8 & 0xcfffffffffffffff);
      if (unaff_x21 != 0) {
        _swift_errorRelease();
      }
      FUN_000f2330(uVar1,uVar2,uVar8,bVar3);
      param_1[5] = uStack_78;
      param_1[4] = uStack_80;
      param_1[7] = uStack_68;
      param_1[6] = uStack_70;
      param_1[8] = uStack_60;
      param_1[1] = uStack_98;
      *param_1 = uStack_a0;
      param_1[3] = uStack_88;
      param_1[2] = uStack_90;
    }
  }
  uVar1 = unaff_x20[4];
  uVar4 = (uint)(unaff_x20[5] >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 == 0) {
      if ((unaff_x20[5] & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_00197f9c;
    }
    lVar6 = (long)(int)uVar1;
    lVar7 = (long)uVar1 >> 0x20;
  }
  else {
    if (uVar5 != 2) {
      return;
    }
    lVar6 = *(long *)(uVar1 + 0x10);
    lVar7 = *(long *)(uVar1 + 0x18);
  }
  if (lVar6 == lVar7) {
    return;
  }
LAB_00197f9c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1);
  return;
}



/* Entry: 001980c8; end: 001981ab;  */

void FUN_001980c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((((*(ulong *)(unaff_x20 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
     (*(byte *)(unaff_x20 + 0x18) != 0xff)) {
    uVar1 = (uint)(*(ulong *)(unaff_x20 + 0x10) >> 0x3c) & 0xfffffc03 |
            (*(byte *)(unaff_x20 + 0x18) & 0x3f) << 2;
    if (uVar1 < 3) {
      if (uVar1 == 0) {
        FUN_001981ac();
      }
      else if (uVar1 == 1) {
        FUN_00198254();
      }
      else {
        FUN_001982bc();
      }
    }
    else if (uVar1 == 3) {
      FUN_00198328();
    }
    else if (uVar1 == 4) {
      FUN_0019838c();
    }
    else {
      FUN_0019843c();
    }
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013ad2c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),param_2,
               param_3);
  return;
}



/* Entry: 001981ac; end: 00198253;  */

void FUN_001981ac(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_50;
  undefined1 uStack_48;
  
  uStack_50 = *param_1;
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)((ulong)param_1[2] >> 0x3c) & 0xfffffc03) == 0 && (*(byte *)(param_1 + 3) & 0x3f) == 0)
     ) {
    uStack_48 = (undefined1)param_1[1];
    pcVar1 = *(code **)(param_4 + 0x80);
    FUN_0019bd7c();
    (*pcVar1)(&uStack_50,1,&UNK_009b3f20,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x198254);
  (*pcVar1)();
}



/* Entry: 00198254; end: 001982bb;  */

void FUN_00198254(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)((ulong)param_1[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 1))
  {
    (**(code **)(param_4 + 0x10))(*param_1,2,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1982bc);
  (*pcVar1)();
}



/* Entry: 001982bc; end: 00198327;  */

void FUN_001982bc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((param_1[2] ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)((ulong)param_1[2] >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 2))
  {
    (**(code **)(param_4 + 0x70))(*param_1,param_1[1],3,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x198328);
  (*pcVar1)();
}



/* Entry: 00198328; end: 0019838b;  */

void FUN_00198328(byte *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((((*(ulong *)(param_1 + 0x10) ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (param_1[0x18] != 0xff)) &&
     (((uint)(*(ulong *)(param_1 + 0x10) >> 0x3c) & 0xfffffc03 | (param_1[0x18] & 0x3f) << 2) == 3))
  {
    (**(code **)(param_4 + 0x68))(*param_1 & 1,4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x19838c);
  (*pcVar1)();
}



/* Entry: 0019838c; end: 0019843b;  */

void FUN_0019838c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)(uStack_50 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 4)) {
    uStack_50 = uStack_50 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000ebbe0();
    (*pcVar1)(&uStack_60,5,&UNK_009b3f98,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x19843c);
  (*pcVar1)();
}



/* Entry: 0019843c; end: 001984eb;  */

void FUN_0019843c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uStack_60;
  undefined8 uStack_58;
  ulong uStack_50;
  
  uStack_58 = param_1[1];
  uStack_60 = *param_1;
  uStack_50 = param_1[2];
  if (((((uStack_50 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) ||
      (*(byte *)(param_1 + 3) != 0xff)) &&
     (((uint)(uStack_50 >> 0x3c) & 0xfffffc03 | (*(byte *)(param_1 + 3) & 0x3f) << 2) == 5)) {
    uStack_50 = uStack_50 & 0xcfffffffffffffff;
    pcVar1 = *(code **)(param_4 + 0x88);
    func_0x000ebb60();
    (*pcVar1)(&uStack_60,6,&UNK_009b4128,param_1,param_3,param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1984ec);
  (*pcVar1)();
}



/* Entry: 001984ec; end: 001984ef;  */

uint FUN_001984ec(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  ulong uVar9;
  
  uVar10 = *param_1;
  uStack_78 = (undefined1)param_1[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  cStack_68 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  cVar5 = cStack_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar11 = *param_2;
  uStack_98 = (undefined1)param_2[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_2 + 0x11);
  cStack_88 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x11) >> 0x38);
  cVar4 = cStack_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_2 + 9);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,uStack_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,uStack_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_a0 = uVar11;
  uStack_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_68 == -1)) {
    if (bVar6 && cStack_88 == -1) {
      FUN_0019c014(&uStack_80,auStack_c0,0xaefe20,&UNK_007e0850);
      FUN_0019c014(&uStack_a0,auStack_c0,0xaefe20,&UNK_007e0850);
      FUN_000f2330(uVar10,uVar2,uVar3,0xff);
LAB_0019aff4:
      uVar9 = param_1[4];
      FUN_00038814(uVar9,param_1[5],param_2[4],param_2[5]);
      uVar7 = (uint)uVar9;
      goto LAB_0019b000;
    }
LAB_0019aefc:
    FUN_0019c014(&uStack_80,auStack_c0,0xaefe20,&UNK_007e0850);
    FUN_0019c014(&uStack_a0,auStack_c0,0xaefe20,&UNK_007e0850);
    FUN_000f2330(uVar10,uVar2,uVar3,cVar5);
    FUN_000f2330(uVar11,uVar1,uVar9,cVar4);
  }
  else {
    if (bVar6 && cStack_88 == -1) goto LAB_0019aefc;
    FUN_0019c014(&uStack_80,auStack_c0,0xaefe20,&UNK_007e0850);
    FUN_0019c014(&uStack_a0,auStack_c0,0xaefe20,&UNK_007e0850);
    uVar8 = uVar10;
    FUN_0019ac28(uVar10,uVar2,uVar3,cVar5,uVar11,uVar1,uVar9,cVar4);
    FUN_000f2330(uVar11,uVar1,uVar9,cVar4);
    FUN_000f2330(uVar10,uVar2,uVar3,cVar5);
    if ((uVar8 & 1) != 0) goto LAB_0019aff4;
  }
  uVar7 = 0;
LAB_0019b000:
  return uVar7 & 1;
}



/* Entry: 001984f0; end: 0019857f;  */

/* WARNING: Removing unreachable block (ram,0x00198540) */

void FUN_001984f0(void)

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
  FUN_00197e9c(&uStack_d0);
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



/* Entry: 00198580; end: 001985bf;  */

void FUN_00198580(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0x3000000000000000;
  *(undefined1 *)(param_1 + 3) = 0xff;
  param_1[5] = 0xc000000000000000;
  param_1[4] = 0;
  return;
}



/* Entry: 001985c0; end: 001985ef;  */

undefined1  [16] FUN_001985c0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x20),
                  *(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Entry: 001985f0; end: 00198623;  */

void FUN_001985f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  return;
}



/* Entry: 00198624; end: 00198637;  */

undefined1  [16] FUN_00198624(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 0x20;
  auVar1._0_8_ = 0x198634;
  return auVar1;
}



/* Entry: 00198638; end: 0019864b;  */

void FUN_00198638(void)

{
  FUN_001974a4();
  return;
}



/* Entry: 0019864c; end: 00198683;  */

void FUN_0019864c(void)

{
  FUN_001980c8();
  return;
}



/* Entry: 00198684; end: 00198723;  */

void FUN_00198684(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af27a0 != -1) {
    _swift_once(0xaf27a0,FUN_00197344);
  }
  uVar5 = uRam0000000000b657d8;
  uVar4 = uRam0000000000b657d0;
  uVar3 = uRam0000000000b657c8;
  uVar2 = uRam0000000000b657c0;
  uVar1 = uRam0000000000b657b8;
  *param_1 = uRam0000000000b657b0;
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



/* Entry: 00198724; end: 0019875f;  */

void FUN_00198724(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2820;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2820,&UNK_007e0830);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00198760; end: 0019892b;  */

/* WARNING: Removing unreachable block (ram,0x001987c4) */

void FUN_00198760(void)

{
  undefined8 *unaff_x20;
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
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uStack_58 = unaff_x20[1];
  uStack_60 = *unaff_x20;
  uStack_48 = unaff_x20[3];
  uStack_50 = unaff_x20[2];
  uStack_38 = unaff_x20[5];
  uStack_40 = unaff_x20[4];
  __ss6HasherV5_seedABSi_tcfC(&uStack_b0,0);
  uStack_d8 = uStack_88;
  uStack_e0 = uStack_90;
  uStack_c8 = uStack_78;
  uStack_d0 = uStack_80;
  uStack_c0 = uStack_70;
  uStack_f8 = uStack_a8;
  uStack_100 = uStack_b0;
  uStack_e8 = uStack_98;
  uStack_f0 = uStack_a0;
  FUN_00197e9c(&uStack_100);
  uStack_78 = uStack_c8;
  uStack_80 = uStack_d0;
  uStack_70 = uStack_c0;
  uStack_98 = uStack_e8;
  uStack_a0 = uStack_f0;
  uStack_88 = uStack_d8;
  uStack_90 = uStack_e0;
  uStack_a8 = uStack_f8;
  uStack_b0 = uStack_100;
  __ss6HasherV9_finalizeSiyF();
  return;
}



/* Entry: 0019892c; end: 0019896f;  */

uint FUN_0019892c(undefined8 *param_1,undefined8 *param_2)

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
  FUN_0019ae20(&uStack_70,&uStack_40);
  return uVar1 & 1;
}



/* Entry: 00198970; end: 00198997;  */

undefined * FUN_00198970(void)

{
  return &UNK_009b3ca0;
}



/* Entry: 00198998; end: 00198a57;  */

void FUN_00198998(void)

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
  FUN_000de3ec(&UNK_007e0840,9,&uStack_48,&lStack_40);
  puRam0000000000b657e8 = puStack_38;
  lRam0000000000b657e0 = lStack_40;
  puRam0000000000b657f8 = puStack_28;
  puRam0000000000b657f0 = puStack_30;
  puRam0000000000b65808 = puStack_18;
  puRam0000000000b65800 = puStack_20;
  return;
}



/* Entry: 00198a58; end: 00198af7;  */

void FUN_00198a58(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af27a8 != -1) {
    _swift_once(0xaf27a8,FUN_00198998);
  }
  uVar5 = uRam0000000000b65808;
  uVar4 = uRam0000000000b65800;
  uVar3 = uRam0000000000b657f8;
  uVar2 = uRam0000000000b657f0;
  uVar1 = uRam0000000000b657e8;
  *param_1 = uRam0000000000b657e0;
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



/* Entry: 00198af8; end: 00198bab;  */

/* WARNING: Removing unreachable block (ram,0x00198ba8) */

void FUN_00198af8(undefined8 param_1,long param_2,long param_3)

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
        func_0x000ebce0();
        (*pcVar4)();
      }
      lVar1 = param_2;
      lVar2 = param_3;
      (*pcVar3)();
    }
  }
  return;
}



/* Entry: 00198bac; end: 00198c43;  */

void FUN_00198bac(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  long unaff_x21;
  
  if ((*(long *)(param_2 + 0x10) != 0) && (FUN_001a0638(param_2,1), unaff_x21 != 0)) {
    return;
  }
  uVar1 = (uint)(param_4 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      if ((param_4 & 0xff000000000000) == 0) {
        return;
      }
      goto LAB_00198c1c;
    }
    lVar3 = (long)(int)param_3;
    lVar4 = param_3 >> 0x20;
  }
  else {
    if (uVar2 != 2) {
      return;
    }
    lVar3 = *(long *)(param_3 + 0x10);
    lVar4 = *(long *)(param_3 + 0x18);
  }
  if (lVar3 == lVar4) {
    return;
  }
LAB_00198c1c:
  __s10Foundation4DataV4hash4intoys6HasherVz_tF(param_1,param_3,param_4);
  return;
}



/* Entry: 00198c44; end: 00198cdf;  */

void FUN_00198c44(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  long unaff_x21;
  code *pcVar2;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    pcVar2 = *(code **)(param_6 + 0x118);
    uVar1 = param_1;
    func_0x000ebce0();
    (*pcVar2)(param_2,1,&UNK_009b4018,uVar1,param_5,param_6);
    if (unaff_x21 != 0) {
      return;
    }
  }
  FUN_0013ad2c(param_1,param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 00198ce0; end: 00198d87;  */

/* WARNING: Removing unreachable block (ram,0x00198d48) */

void FUN_00198ce0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  FUN_00198bac(&uStack_d0,param_1,param_2,param_3);
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



/* Entry: 00198d88; end: 00198dbf;  */

void FUN_00198d88(undefined8 *param_1)

{
  *param_1 = PTR___swiftEmptyArrayStorage_0099b8f0;
  param_1[2] = 0xc000000000000000;
  param_1[1] = 0;
  return;
}



/* Entry: 00198dc0; end: 00198def;  */

undefined1  [16] FUN_00198dc0(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  func_0x00023304(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                  *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Entry: 00198df0; end: 00198e23;  */

void FUN_00198df0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_00023358(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Entry: 00198e24; end: 00198e37;  */

undefined1  [16] FUN_00198e24(void)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + 8;
  auVar1._0_8_ = 0x198e34;
  return auVar1;
}



/* Entry: 00198e38; end: 00198e6f;  */

void FUN_00198e38(void)

{
  FUN_00198af8();
  return;
}



/* Entry: 00198e70; end: 00198f0f;  */

void FUN_00198e70(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (lRam0000000000af27a8 != -1) {
    _swift_once(0xaf27a8,FUN_00198998);
  }
  uVar5 = uRam0000000000b65808;
  uVar4 = uRam0000000000b65800;
  uVar3 = uRam0000000000b657f8;
  uVar2 = uRam0000000000b657f0;
  uVar1 = uRam0000000000b657e8;
  *param_1 = uRam0000000000b657e0;
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



/* Entry: 00198f10; end: 00198f23;  */

void FUN_00198f10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_18;
  
  uVar1 = 0xaf2818;
  uStack_18 = param_1;
  func_0x000115a8(0xaf2818,&UNK_007e0828);
  __sSS10reflectingSSx_tclufC(&uStack_18,uVar1);
  return;
}



/* Entry: 00198f24; end: 00198f57;  */

void FUN_00198f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000115a8(param_3,param_4);
  __sSS10reflectingSSx_tclufC(&uStack_18,param_3);
  return;
}



/* Entry: 00198f58; end: 00199117;  */

/* WARNING: Removing unreachable block (ram,0x00198fbc) */

void FUN_00198f58(void)

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
  FUN_00198bac(&uStack_d0,uVar1,uVar2,uVar3);
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



/* Entry: 00199118; end: 00199123;  */

ulong FUN_00199118(ulong *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar12 = *param_1;
  uVar6 = param_1[1];
  pbVar15 = (byte *)param_1[2];
  lVar9 = param_2[1];
  uVar16 = param_2[2];
  FUN_00146270(uVar12,*param_2);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
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
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
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
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
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
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 00199124; end: 00199187;  */

ulong FUN_00199124(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  ulong uVar6;
  undefined8 uVar7;
  byte *pbVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  ulong uVar12;
  uint uVar13;
  ulong uVar14;
  ulong *unaff_x20;
  byte *pbVar15;
  ulong uVar16;
  long lVar17;
  byte bStack_71;
  byte abStack_70 [24];
  long lStack_58;
  
  uVar12 = *param_1;
  uVar6 = param_1[1];
  pbVar15 = (byte *)param_1[2];
  lVar9 = param_2[1];
  uVar16 = param_2[2];
  (*param_5)(uVar12,*param_2);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  lStack_58 = *(long *)PTR____stack_chk_guard_00999f88;
  uVar2 = (uint)((ulong)pbVar15 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  uVar3 = (uint)(uVar16 >> 0x20);
  uVar13 = uVar3 >> 0x1e;
  iVar5 = (int)uVar6;
  if ((ulong)pbVar15 >> 0x3e == 3) {
    uVar12 = 0;
    if ((((uVar6 != 0) || (pbVar15 != (byte *)0xc000000000000000)) || (uVar16 >> 0x3e < 3)) ||
       ((uVar12 = 0, lVar9 != 0 || (uVar16 != 0xc000000000000000)))) goto joined_r0x000389b8;
  }
  else {
    if (uVar2 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar12 = (ulong)pbVar15 >> 0x30 & 0xff;
      }
      else {
        iVar11 = (int)(uVar6 >> 0x20);
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
        uVar6 = (ulong)(uVar12 == 0);
        goto LAB_00038af8;
      }
      uVar14 = *(long *)(lVar9 + 0x18) - *(long *)(lVar9 + 0x10);
      if (SBORROW8(*(long *)(lVar9 + 0x18),*(long *)(lVar9 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x388b0);
        (*pcVar4)();
      }
LAB_000388d4:
      if (uVar12 != uVar14) {
LAB_0003899c:
        uVar6 = 0;
        goto LAB_00038af8;
      }
    }
    else {
      if (uVar10 == 2) {
        uVar12 = *(long *)(uVar6 + 0x18) - *(long *)(uVar6 + 0x10);
        if (SBORROW8(*(long *)(uVar6 + 0x18),*(long *)(uVar6 + 0x10))) {
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
        uVar14 = uVar16 >> 0x30 & 0xff;
        goto LAB_000388d4;
      }
      iVar11 = (int)((ulong)lVar9 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar9)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x38b30);
        (*pcVar4)();
      }
      if (uVar12 != (long)(iVar11 - (int)lVar9)) goto LAB_0003899c;
    }
    if (0 < (long)uVar12) {
      if (uVar10 < 2) {
        if (uVar10 == 0) {
          abStack_70[0] = (byte)uVar6;
          abStack_70[1] = (byte)(uVar6 >> 8);
          abStack_70[2] = (byte)(uVar6 >> 0x10);
          abStack_70[3] = (byte)(uVar6 >> 0x18);
          abStack_70[4] = (byte)(uVar6 >> 0x20);
          abStack_70[5] = (byte)(uVar6 >> 0x28);
          abStack_70[6] = (byte)(uVar6 >> 0x30);
          abStack_70[7] = (byte)(uVar6 >> 0x38);
          abStack_70[8] = (byte)pbVar15;
          abStack_70[9] = (byte)((ulong)pbVar15 >> 8);
          abStack_70[10] = (byte)((ulong)pbVar15 >> 0x10);
          abStack_70[0xb] = (byte)((ulong)pbVar15 >> 0x18);
          abStack_70[0xc] = (byte)((ulong)pbVar15 >> 0x20);
          abStack_70[0xd] = (byte)((ulong)pbVar15 >> 0x28);
          pbVar15 = abStack_70 + ((ulong)pbVar15 >> 0x30 & 0xff);
LAB_00038aa8:
          FUN_000382a0(&bStack_71,abStack_70);
          uVar6 = (ulong)bStack_71;
          goto LAB_00038af8;
        }
        lVar17 = (long)iVar5;
        uVar12 = ((long)uVar6 >> 0x20) - lVar17;
        if ((long)uVar6 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b3c);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        if (uVar6 == 0) {
          __s10Foundation13__DataStorageC7_lengthSivg();
          uVar6 = 0;
        }
        else {
          uVar14 = uVar6;
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b48);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar14) + uVar6;
          __s10Foundation13__DataStorageC7_lengthSivg();
          if (uVar6 != 0) {
            if ((long)uVar12 <= (long)uVar14) {
              uVar14 = uVar12;
            }
            pbVar8 = (byte *)(uVar14 + uVar6);
            goto LAB_00038aec;
          }
        }
        pbVar8 = (byte *)0x0;
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
          pbVar15 = abStack_70;
          goto LAB_00038aa8;
        }
        lVar17 = *(long *)(uVar6 + 0x10);
        lVar1 = *(long *)(uVar6 + 0x18);
        __s10Foundation13__DataStorageC6_bytesSvSgvg();
        uVar12 = uVar6;
        if (uVar6 != 0) {
          __s10Foundation13__DataStorageC7_offsetSivg();
          if (SBORROW8(lVar17,uVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x38b44);
            (*pcVar4)();
          }
          uVar6 = (lVar17 - uVar12) + uVar6;
        }
        uVar14 = lVar1 - lVar17;
        if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x38b40);
          (*pcVar4)();
        }
        __s10Foundation13__DataStorageC7_lengthSivg();
        if (uVar6 == 0) {
          pbVar8 = (byte *)0x0;
        }
        else {
          if ((long)uVar14 <= (long)uVar12) {
            uVar12 = uVar14;
          }
          pbVar8 = (byte *)(uVar12 + uVar6);
        }
      }
LAB_00038aec:
      unaff_x20 = (ulong *)((ulong)pbVar15 & 0x3fffffffffffffff);
      FUN_000382a0(abStack_70,uVar6,pbVar8,lVar9,uVar16);
      uVar6 = (ulong)abStack_70[0];
      pbVar15 = pbVar8;
      goto LAB_00038af8;
    }
  }
  uVar6 = 1;
LAB_00038af8:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_58) {
    return uVar6;
  }
  ___stack_chk_fail();
  lVar17 = (long)pbVar15 - uVar6;
  if (SBORROW8((long)pbVar15,uVar6)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c34);
    (*pcVar4)();
  }
  uVar14 = *unaff_x20;
  uVar16 = uVar14 & 0xffffffffffffff8;
  uVar6 = uVar16 + 0x20 + uVar6 * 8;
  uVar7 = 0;
  FUN_00039114(0,0xae68f0,&PTR_PTR_00ac2838);
  uVar12 = uVar6;
  _swift_arrayDestroy(uVar6,lVar17,uVar7);
  lVar1 = lVar9 - lVar17;
  if (SBORROW8(lVar9,lVar17)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c38);
    (*pcVar4)();
  }
  if (lVar1 != 0) {
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
      lVar17 = uVar12 - (long)pbVar15;
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
      lVar17 = uVar12 - (long)pbVar15;
    }
    if (SBORROW8(uVar12,(long)pbVar15)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c50);
      (*pcVar4)();
    }
    uVar6 = uVar6 + lVar9 * 8;
    uVar12 = uVar16 + 0x20 + (long)pbVar15 * 8;
    if (uVar6 != uVar12 || uVar12 + lVar17 * 8 <= uVar6) {
      _memmove(uVar6,uVar12,lVar17 << 3);
    }
    if (uVar14 >> 0x3e == 0) {
      uVar12 = *(ulong *)(uVar16 + 0x10);
    }
    else {
      uVar12 = uVar16;
      if ((uVar14 & 0x8000000000000000) != 0) {
        uVar12 = uVar14;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (SCARRY8(uVar12,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x38c54);
      (*pcVar4)();
    }
    *(ulong *)(uVar16 + 0x10) = uVar12 + lVar1;
  }
  if (0 < lVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x38c58);
    (*pcVar4)();
  }
  return uVar12;
}



/* Entry: 00199188; end: 0019aacf;  */

undefined * FUN_00199188(long param_1,long param_2)

{
  byte bVar1;
  long *plVar2;
  ulong *puVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  byte bVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uint uVar21;
  undefined1 uVar22;
  uint uVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  code *pcVar30;
  bool bVar31;
  double dVar32;
  double dVar33;
  long lVar34;
  double dVar35;
  double dVar36;
  undefined *puVar37;
  undefined *puVar38;
  byte *pbVar39;
  long lVar40;
  double dVar41;
  long lVar42;
  uint uVar43;
  ulong uVar44;
  ulong uVar45;
  double *pdVar46;
  ulong uVar47;
  undefined8 *puVar48;
  int iVar49;
  ulong uVar50;
  int iVar51;
  int iVar52;
  undefined8 *puVar53;
  byte bVar54;
  byte bVar55;
  uint uVar56;
  long lVar57;
  undefined *puVar58;
  undefined8 uVar59;
  int iVar60;
  double dVar61;
  double dVar62;
  ulong uStack_128;
  uint uStack_114;
  byte bStack_d9;
  byte abStack_d8 [24];
  byte abStack_c0 [14];
  undefined2 uStack_b2;
  double dStack_b0;
  byte bStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  byte bStack_88;
  long lStack_80;
  undefined1 uVar17;
  undefined1 uVar18;
  undefined1 uVar19;
  undefined1 uVar20;
  
  lStack_80 = *(long *)PTR____stack_chk_guard_00999f88;
  if (param_1 == param_2) {
    puVar37 = (undefined *)((long)&MACH_HEADER.magic + 1);
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar50 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uStack_128 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uStack_128 = ~(-1L << (uVar50 & 0x3f));
      }
      uStack_128 = uStack_128 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar40 = 0;
LAB_0019923c:
      do {
        if (uStack_128 == 0) {
          do {
            lVar57 = lVar40 + 1;
            if (SCARRY8(lVar40,1)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x19a5ac);
              (*pcVar30)();
            }
            if ((long)(uVar50 + 0x3f >> 6) <= lVar57) goto LAB_0019a418;
            uStack_128 = ((ulong *)(param_1 + 0x40))[lVar57];
            lVar40 = lVar40 + 1;
          } while (uStack_128 == 0);
          uVar44 = (uStack_128 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_128 & 0x5555555555555555) << 1;
          uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
          uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
          uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
          uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
          uStack_128 = uStack_128 - 1 & uStack_128;
        }
        else {
          uVar44 = (uStack_128 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uStack_128 & 0x5555555555555555) << 1;
          uVar44 = (uVar44 & 0xcccccccccccccccc) >> 2 | (uVar44 & 0x3333333333333333) << 2;
          uVar44 = (uVar44 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar44 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar44 = (uVar44 & 0xff00ff00ff00ff00) >> 8 | (uVar44 & 0xff00ff00ff00ff) << 8;
          uVar44 = (uVar44 & 0xffff0000ffff0000) >> 0x10 | (uVar44 & 0xffff0000ffff) << 0x10;
          uVar44 = uVar44 >> 0x20 | uVar44 << 0x20;
          uStack_128 = uStack_128 - 1 & uStack_128;
          lVar57 = lVar40;
        }
        uVar45 = LZCOUNT(uVar44) | lVar57 << 6;
        plVar2 = (long *)(*(long *)(param_1 + 0x30) + uVar45 * 0x10);
        lVar40 = *plVar2;
        uVar44 = plVar2[1];
        pdVar46 = (double *)(*(long *)(param_1 + 0x38) + uVar45 * 0x30);
        dVar4 = *pdVar46;
        dVar9 = pdVar46[1];
        dVar62 = pdVar46[2];
        bVar55 = *(byte *)(pdVar46 + 3);
        dVar5 = pdVar46[4];
        dVar10 = pdVar46[5];
        _swift_bridgeObjectRetain(uVar44);
        FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
        func_0x00023304(dVar5,dVar10);
        if (uVar44 == 0) {
LAB_0019a418:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          puVar37 = (undefined *)((long)&MACH_HEADER.magic + 1);
          goto LAB_0019a930;
        }
        uVar45 = uVar44;
        FUN_000202c0();
        _swift_bridgeObjectRelease(uVar44);
        if ((uVar45 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_000f2330(dVar4,dVar9,dVar62,bVar55);
          FUN_00023358(dVar5,dVar10);
          goto LAB_0019a92c;
        }
        pdVar46 = (double *)(*(long *)(param_2 + 0x38) + lVar40 * 0x30);
        dVar6 = *pdVar46;
        dVar11 = pdVar46[1];
        dVar61 = pdVar46[2];
        bVar14 = *(byte *)(pdVar46 + 3);
        dVar35 = pdVar46[4];
        dVar41 = pdVar46[5];
        abStack_c0[0] = SUB81(dVar6,0);
        abStack_c0[1] = (byte)((ulong)dVar6 >> 8);
        abStack_c0[2] = (byte)((ulong)dVar6 >> 0x10);
        abStack_c0[3] = (byte)((ulong)dVar6 >> 0x18);
        abStack_c0[4] = (byte)((ulong)dVar6 >> 0x20);
        abStack_c0[5] = (byte)((ulong)dVar6 >> 0x28);
        abStack_c0[6] = (byte)((ulong)dVar6 >> 0x30);
        abStack_c0[7] = (byte)((ulong)dVar6 >> 0x38);
        abStack_c0[8] = SUB81(dVar11,0);
        bVar24 = abStack_c0[8];
        abStack_c0[9] = (byte)((ulong)dVar11 >> 8);
        bVar25 = abStack_c0[9];
        abStack_c0[10] = (byte)((ulong)dVar11 >> 0x10);
        bVar26 = abStack_c0[10];
        abStack_c0[0xb] = (byte)((ulong)dVar11 >> 0x18);
        bVar27 = abStack_c0[0xb];
        abStack_c0[0xc] = (byte)((ulong)dVar11 >> 0x20);
        bVar28 = abStack_c0[0xc];
        abStack_c0[0xd] = (byte)((ulong)dVar11 >> 0x28);
        bVar29 = abStack_c0[0xd];
        uStack_b2 = (undefined2)((ulong)dVar11 >> 0x30);
        bVar31 = (((ulong)dVar62 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
        dStack_b0 = dVar61;
        bStack_a8 = bVar14;
        dStack_a0 = dVar4;
        dStack_98 = dVar9;
        dStack_90 = dVar62;
        bStack_88 = bVar55;
        if (((((ulong)dVar61 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (bVar14 == 0xff))
        {
          if (bVar31 && bVar55 == 0xff) {
            FUN_000f2290(dVar6,dVar11,dVar61,0xff);
            func_0x00023304(dVar35,dVar41);
            FUN_000f2290(dVar6,dVar11,dVar61,0xff);
            FUN_000f2290(dVar4,dVar9,dVar62,0xff);
            uStack_114 = 0xff;
            bVar54 = 0xff;
            goto LAB_00199f64;
          }
LAB_0019a4c8:
          FUN_000f2290(dVar6,dVar11,dVar61);
          FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
          FUN_000f2330(dVar4,dVar9,dVar62,bVar55);
          FUN_00023358(dVar5,dVar10);
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          func_0x0019bdf0(abStack_c0);
          goto LAB_0019a92c;
        }
        if (bVar31 && bVar55 == 0xff) {
          bVar55 = 0xff;
          goto LAB_0019a4c8;
        }
        uVar21 = (uint)((ulong)dVar61 >> 0x20);
        uVar43 = uVar21 >> 0x1c & 0xfffffc03 | (bVar14 & 0x3f) << 2;
        uStack_114 = (uint)bVar55;
        uVar56 = (uint)bVar55;
        uVar23 = (uint)((ulong)dVar62 >> 0x20);
        bVar54 = bVar14;
        if (2 < uVar43) {
          if (uVar43 == 3) {
            if ((uVar23 >> 0x1c & 0xfffffc03 | (uStack_114 & 0x3f) << 2) == 3) {
              FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
              func_0x00023304(dVar35,dVar41);
              FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
              FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
              if (((SUB84(dVar6,0) ^ SUB84(dVar4,0)) & 1) == 0) goto LAB_00199f64;
              goto LAB_0019a8ac;
            }
            FUN_000f2290(dVar6,dVar11,dVar61);
            func_0x00023304(dVar35,dVar41);
            FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
            FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
LAB_0019a79c:
            FUN_000f2330(dVar4,dVar9,dVar62,bVar55);
            goto LAB_0019a8ac;
          }
          uVar56 = uVar23 >> 0x1c & 0xfffffc03 | (uVar56 & 0x3f) << 2;
          uVar15 = (undefined1)((ulong)dVar61 >> 8);
          uVar16 = (undefined1)((ulong)dVar61 >> 0x10);
          uVar17 = (undefined1)((ulong)dVar61 >> 0x18);
          uVar18 = (undefined1)((ulong)dVar61 >> 0x20);
          uVar19 = (undefined1)((ulong)dVar61 >> 0x28);
          bVar1 = (byte)((ulong)dVar61 >> 0x30);
          uVar20 = (undefined1)((ulong)dVar11 >> 0x30);
          uVar22 = (undefined1)((ulong)dVar11 >> 0x38);
          iVar51 = SUB84(dVar11,0);
          iVar60 = (int)((ulong)dVar11 >> 0x20);
          iVar52 = SUB84(dVar9,0);
          iVar49 = (int)((ulong)dVar9 >> 0x20);
          lVar40 = (long)dVar11 >> 0x20;
          if (uVar43 != 4) {
            if (uVar56 == 5) {
              FUN_000f2290(dVar6,dVar11,dVar61);
              func_0x00023304(dVar35,dVar41);
              FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
              FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
              dVar32 = dVar6;
              FUN_00146270(dVar6,dVar4);
              if (((ulong)dVar32 & 1) == 0) {
                FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                FUN_00023358(dVar5,dVar10);
                FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
                FUN_00023358(dVar35,dVar41);
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
LAB_0019a9e4:
                FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
              }
              else {
                uVar43 = uVar21 >> 0x1e;
                if ((ulong)dVar61 >> 0x3e == 3) {
                  uVar44 = 0;
                  if ((((dVar11 != 0.0 || ((ulong)dVar61 & 0xcfffffffffffffff) != 0xc000000000000000
                        ) || (ulong)dVar62 >> 0x3e < 3) || (dVar9 != 0.0)) ||
                     (dVar33 = 0.0, ((ulong)dVar62 & 0xcfffffffffffffff) != 0xc000000000000000))
                  goto LAB_00199af4;
LAB_00199bdc:
                  FUN_000f2330(dVar4,dVar33,dVar62,uStack_114);
                  goto LAB_00199f64;
                }
                if (uVar21 >> 0x1e < 2) {
                  if (uVar43 == 0) {
                    uVar44 = (ulong)dVar61 >> 0x30 & 0xff;
                  }
                  else {
                    if (SBORROW4(iVar60,iVar51)) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x19aaa0);
                      (*pcVar30)();
                    }
                    uVar44 = (ulong)(iVar60 - iVar51);
                  }
                }
                else if (uVar43 == 2) {
                  uVar44 = *(long *)((long)dVar11 + 0x18) - *(long *)((long)dVar11 + 0x10);
                  if (SBORROW8(*(long *)((long)dVar11 + 0x18),*(long *)((long)dVar11 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x19aaac);
                    (*pcVar30)();
                  }
                }
                else {
                  uVar44 = 0;
                }
LAB_00199af4:
                dVar33 = dVar9;
                if (1 < uVar23 >> 0x1e) {
                  if (uVar23 >> 0x1e == 2) {
                    uVar45 = *(long *)((long)dVar9 + 0x18) - *(long *)((long)dVar9 + 0x10);
                    if (SBORROW8(*(long *)((long)dVar9 + 0x18),*(long *)((long)dVar9 + 0x10))) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa9c);
                      (*pcVar30)();
                    }
                    goto LAB_00199b30;
                  }
                  if (uVar44 == 0) goto LAB_00199bdc;
LAB_0019a96c:
                  FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                  FUN_00023358(dVar5,dVar10);
                  FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
                  FUN_00023358(dVar35,dVar41);
                  _swift_bridgeObjectRelease(param_2);
                  _swift_bridgeObjectRelease_n(param_1,2);
                  goto LAB_0019a9e4;
                }
                if (uVar23 >> 0x1e == 0) {
                  uVar45 = (ulong)dVar62 >> 0x30 & 0xff;
                }
                else {
                  if (SBORROW4(iVar49,iVar52)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa98);
                    (*pcVar30)();
                  }
                  uVar45 = (ulong)(iVar49 - iVar52);
                }
LAB_00199b30:
                if (uVar44 != uVar45) goto LAB_0019a96c;
                if ((long)uVar44 < 1) goto LAB_00199bdc;
                if (uVar43 < 2) {
                  if (uVar43 != 0) {
                    lVar42 = (long)iVar51;
                    if (lVar40 < lVar42) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x19aab4);
                      (*pcVar30)();
                    }
                    __s10Foundation13__DataStorageC6_bytesSvSgvg();
                    if (dVar32 == 0.0) {
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      lVar34 = 0;
                    }
                    else {
                      dVar33 = dVar32;
                      __s10Foundation13__DataStorageC7_offsetSivg();
                      if (SBORROW8(lVar42,(long)dVar33)) {
                    /* WARNING: Does not return */
                        pcVar30 = (code *)SoftwareBreakpoint(1,0x19aacc);
                        (*pcVar30)();
                      }
                      lVar34 = (lVar42 - (long)dVar33) + (long)dVar32;
                      __s10Foundation13__DataStorageC7_lengthSivg();
                      if (lVar34 != 0) {
                        if (lVar40 - lVar42 <= (long)dVar33) {
                          dVar33 = (double)(lVar40 - lVar42);
                        }
                        lVar40 = (long)dVar33 + lVar34;
                        goto LAB_00199eb8;
                      }
                    }
                    lVar40 = 0;
                    goto LAB_00199eb8;
                  }
                  pbVar39 = abStack_d8 + bVar1;
                  abStack_d8[0] = bVar24;
                  abStack_d8[1] = bVar25;
                  abStack_d8[2] = bVar26;
                  abStack_d8[3] = bVar27;
                  abStack_d8[4] = bVar28;
                  abStack_d8[5] = bVar29;
                  abStack_d8[6] = uVar20;
                  abStack_d8[7] = uVar22;
                  abStack_d8[8] = SUB81(dVar61,0);
                  abStack_d8[9] = uVar15;
                  abStack_d8[10] = uVar16;
                  abStack_d8[0xb] = uVar17;
                  abStack_d8[0xc] = uVar18;
                  abStack_d8[0xd] = uVar19;
LAB_00199d6c:
                  FUN_000382a0(&bStack_d9,abStack_d8,pbVar39,dVar9);
                  FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = bStack_d9;
                }
                else {
                  if (uVar43 != 2) {
                    abStack_d8[8] = 0;
                    abStack_d8[9] = 0;
                    abStack_d8[10] = 0;
                    abStack_d8[0xb] = 0;
                    abStack_d8[0xc] = 0;
                    abStack_d8[0xd] = 0;
                    abStack_d8[0] = 0;
                    abStack_d8[1] = 0;
                    abStack_d8[2] = 0;
                    abStack_d8[3] = 0;
                    abStack_d8[4] = 0;
                    abStack_d8[5] = 0;
                    abStack_d8[6] = 0;
                    abStack_d8[7] = 0;
                    pbVar39 = abStack_d8;
                    goto LAB_00199d6c;
                  }
                  lVar40 = *(long *)((long)dVar11 + 0x10);
                  lVar42 = *(long *)((long)dVar11 + 0x18);
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (dVar32 == 0.0) {
                    lVar34 = 0;
                  }
                  else {
                    dVar33 = dVar32;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar40,(long)dVar33)) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x19aac4);
                      (*pcVar30)();
                    }
                    lVar34 = (lVar40 - (long)dVar33) + (long)dVar32;
                    dVar32 = dVar33;
                  }
                  dVar33 = (double)(lVar42 - lVar40);
                  if (SBORROW8(lVar42,lVar40)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x19aab8);
                    (*pcVar30)();
                  }
                  __s10Foundation13__DataStorageC7_lengthSivg();
                  if (lVar34 == 0) {
                    lVar40 = 0;
                  }
                  else {
                    if ((long)dVar33 <= (long)dVar32) {
                      dVar32 = dVar33;
                    }
                    lVar40 = (long)dVar32 + lVar34;
                  }
LAB_00199eb8:
                  FUN_000382a0(abStack_d8,lVar34,lVar40,dVar9,(ulong)dVar62 & 0xcfffffffffffffff);
                  FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = abStack_d8[0];
                }
                if ((bVar55 & 1) != 0) goto LAB_00199f64;
                FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                FUN_00023358(dVar5,dVar10);
                FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
                FUN_00023358(dVar35,dVar41);
                _swift_bridgeObjectRelease(param_2);
                _swift_bridgeObjectRelease_n(param_1,2);
              }
              FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
            }
            else {
              FUN_000f2290(dVar6,dVar11,dVar61);
              FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
              FUN_000f2330(dVar4,dVar9,dVar62,bVar55);
              FUN_00023358(dVar5,dVar10);
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease_n(param_1,2);
              FUN_000f2330(dVar4,dVar9,dVar62,bVar55);
              FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
            }
            goto LAB_0019a92c;
          }
          if (uVar56 != 4) {
            FUN_000f2290(dVar6,dVar11,dVar61);
            func_0x00023304(dVar35,dVar41);
            FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
            FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
            goto LAB_0019a79c;
          }
          FUN_000f2290(dVar6,dVar11,dVar61);
          func_0x00023304(dVar35,dVar41);
          FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
          FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
          dVar32 = dVar6;
          FUN_00199188(dVar6,dVar4);
          if (((ulong)dVar32 & 1) == 0) {
            FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
            goto LAB_0019a8ac;
          }
          uVar43 = uVar21 >> 0x1e;
          if ((ulong)dVar61 >> 0x3e == 3) {
            uVar44 = 0;
            if ((((dVar11 != 0.0 || dVar61 != -2.0) || (ulong)dVar62 >> 0x3e < 3) || (dVar9 != 0.0))
               || (dVar62 != -2.0)) goto LAB_00199968;
            dVar33 = 0.0;
            dVar36 = -2.0;
LAB_00199a94:
            FUN_000f2330(dVar4,dVar33,dVar36,uStack_114);
            goto LAB_00199f64;
          }
          if (uVar21 >> 0x1e < 2) {
            if (uVar43 == 0) {
              uVar44 = (ulong)dVar61 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar60,iVar51)) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x19aaa8);
                (*pcVar30)();
              }
              uVar44 = (ulong)(iVar60 - iVar51);
            }
          }
          else if (uVar43 == 2) {
            uVar44 = *(long *)((long)dVar11 + 0x18) - *(long *)((long)dVar11 + 0x10);
            if (SBORROW8(*(long *)((long)dVar11 + 0x18),*(long *)((long)dVar11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x19aaa4);
              (*pcVar30)();
            }
          }
          else {
            uVar44 = 0;
          }
LAB_00199968:
          dVar33 = dVar9;
          dVar36 = dVar62;
          if (uVar23 >> 0x1e < 2) {
            if (uVar23 >> 0x1e == 0) {
              uVar45 = (ulong)dVar62 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar49,iVar52)) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa94);
                (*pcVar30)();
              }
              uVar45 = (ulong)(iVar49 - iVar52);
            }
LAB_001999a8:
            if (uVar44 == uVar45) {
              if ((long)uVar44 < 1) goto LAB_00199a94;
              if (uVar43 < 2) {
                if (uVar43 == 0) {
                  abStack_d8[0] = bVar24;
                  abStack_d8[1] = bVar25;
                  abStack_d8[2] = bVar26;
                  abStack_d8[3] = bVar27;
                  abStack_d8[4] = bVar28;
                  abStack_d8[5] = bVar29;
                  abStack_d8[6] = uVar20;
                  abStack_d8[7] = uVar22;
                  abStack_d8[8] = SUB81(dVar61,0);
                  abStack_d8[9] = uVar15;
                  abStack_d8[10] = uVar16;
                  abStack_d8[0xb] = uVar17;
                  abStack_d8[0xc] = uVar18;
                  abStack_d8[0xd] = uVar19;
                  FUN_000382a0(&bStack_d9,abStack_d8,abStack_d8 + bVar1,dVar9,dVar62);
                  FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = bStack_d9;
                }
                else {
                  lVar42 = (long)iVar51;
                  if (lVar40 < lVar42) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x19aab0);
                    (*pcVar30)();
                  }
                  __s10Foundation13__DataStorageC6_bytesSvSgvg();
                  if (dVar32 == 0.0) {
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    lVar34 = 0;
LAB_00199efc:
                    lVar40 = 0;
                  }
                  else {
                    dVar33 = dVar32;
                    __s10Foundation13__DataStorageC7_offsetSivg();
                    if (SBORROW8(lVar42,(long)dVar33)) {
                    /* WARNING: Does not return */
                      pcVar30 = (code *)SoftwareBreakpoint(1,0x19aac8);
                      (*pcVar30)();
                    }
                    lVar34 = (lVar42 - (long)dVar33) + (long)dVar32;
                    __s10Foundation13__DataStorageC7_lengthSivg();
                    if (lVar34 == 0) goto LAB_00199efc;
                    if (lVar40 - lVar42 <= (long)dVar33) {
                      dVar33 = (double)(lVar40 - lVar42);
                    }
                    lVar40 = (long)dVar33 + lVar34;
                  }
                  FUN_000382a0(abStack_d8,lVar34,lVar40,dVar9,dVar62);
                  FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                  bVar55 = abStack_d8[0];
                }
              }
              else if (uVar43 == 2) {
                lVar40 = *(long *)((long)dVar11 + 0x10);
                lVar42 = *(long *)((long)dVar11 + 0x18);
                __s10Foundation13__DataStorageC6_bytesSvSgvg();
                if (dVar32 == 0.0) {
                  lVar34 = 0;
                }
                else {
                  dVar33 = dVar32;
                  __s10Foundation13__DataStorageC7_offsetSivg();
                  if (SBORROW8(lVar40,(long)dVar33)) {
                    /* WARNING: Does not return */
                    pcVar30 = (code *)SoftwareBreakpoint(1,0x19aac0);
                    (*pcVar30)();
                  }
                  lVar34 = (lVar40 - (long)dVar33) + (long)dVar32;
                  dVar32 = dVar33;
                }
                dVar33 = (double)(lVar42 - lVar40);
                if (SBORROW8(lVar42,lVar40)) {
                    /* WARNING: Does not return */
                  pcVar30 = (code *)SoftwareBreakpoint(1,0x19aabc);
                  (*pcVar30)();
                }
                __s10Foundation13__DataStorageC7_lengthSivg();
                if (lVar34 == 0) {
                  lVar40 = 0;
                }
                else {
                  if ((long)dVar33 <= (long)dVar32) {
                    dVar32 = dVar33;
                  }
                  lVar40 = (long)dVar32 + lVar34;
                }
                FUN_000382a0(abStack_d8,lVar34,lVar40,dVar9,dVar62);
                FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                bVar55 = abStack_d8[0];
              }
              else {
                abStack_d8[8] = 0;
                abStack_d8[9] = 0;
                abStack_d8[10] = 0;
                abStack_d8[0xb] = 0;
                abStack_d8[0xc] = 0;
                abStack_d8[0xd] = 0;
                abStack_d8[0] = 0;
                abStack_d8[1] = 0;
                abStack_d8[2] = 0;
                abStack_d8[3] = 0;
                abStack_d8[4] = 0;
                abStack_d8[5] = 0;
                abStack_d8[6] = 0;
                abStack_d8[7] = 0;
                FUN_000382a0(&bStack_d9,abStack_d8,abStack_d8,dVar9,dVar62);
                FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
                bVar55 = bStack_d9;
              }
              if ((bVar55 & 1) != 0) goto LAB_00199f64;
              goto LAB_0019a8ac;
            }
          }
          else {
            if (uVar23 >> 0x1e == 2) {
              uVar45 = *(long *)((long)dVar9 + 0x18) - *(long *)((long)dVar9 + 0x10);
              if (SBORROW8(*(long *)((long)dVar9 + 0x18),*(long *)((long)dVar9 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa90);
                (*pcVar30)();
              }
              goto LAB_001999a8;
            }
            if (uVar44 == 0) goto LAB_00199a94;
          }
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
LAB_0019a8ac:
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
          FUN_00023358(dVar5,dVar10);
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          FUN_00023358(dVar35,dVar41);
          break;
        }
        if (uVar43 == 0) {
          if ((uVar23 >> 0x1c & 0xfffffc03) != 0 || (bVar55 & 0x3f) != 0) {
LAB_0019a530:
            FUN_000f2290(dVar6,dVar11,dVar61);
            func_0x00023304(dVar35,dVar41);
            FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
            FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
            goto LAB_0019a79c;
          }
          dVar32 = 0.0;
          if (((ulong)dVar11 & 0xff) != 1) {
            dVar32 = dVar6;
          }
          if (((ulong)dVar9 & 0xff) == 1) {
            if (dVar32 == 0.0) {
LAB_001997f0:
              FUN_000f2290(dVar6,dVar11,dVar61);
              func_0x00023304(dVar35,dVar41);
              FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
              FUN_000f2290(dVar4,dVar9,dVar62,uStack_114);
              goto LAB_00199f64;
            }
          }
          else if (dVar32 == dVar4) goto LAB_001997f0;
          FUN_000f2290(dVar6,dVar11,dVar61);
          func_0x00023304(dVar35,dVar41);
          FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
          FUN_000f2290(dVar4,dVar9,dVar62,uStack_114);
          goto LAB_0019a8ac;
        }
        if (uVar43 == 1) {
          if ((uVar23 >> 0x1c & 0xfffffc03 | (uVar56 & 0x3f) << 2) == 1) {
            FUN_000f2290(dVar6,dVar11,dVar61);
            func_0x00023304(dVar35,dVar41);
            FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
            FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
            if (dVar6 == dVar4) goto LAB_00199f64;
          }
          else {
            FUN_000f2290(dVar6,dVar11,dVar61);
            func_0x00023304(dVar35,dVar41);
            FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
            FUN_000f2290(dVar4,dVar9,dVar62,bVar55);
            FUN_000f2330(dVar4,dVar9,dVar62,bVar55);
          }
          goto LAB_0019a8ac;
        }
        if ((uVar23 >> 0x1c & 0xfffffc03 | (uVar56 & 0x3f) << 2) != 2) goto LAB_0019a530;
        if (dVar6 == dVar4 && dVar11 == dVar9) {
          FUN_000f2290(dVar4,dVar9,dVar61);
          func_0x00023304(dVar35,dVar41);
          FUN_000f2290(dVar4,dVar9,dVar61,bVar14);
          FUN_000f2290(dVar4,dVar9,dVar62,uStack_114);
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
        }
        else {
          dVar32 = dVar6;
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (dVar6,dVar11,dVar4,dVar9,0);
          FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
          func_0x00023304(dVar35,dVar41);
          FUN_000f2290(dVar6,dVar11,dVar61,bVar14);
          FUN_000f2290(dVar4,dVar9,dVar62,uStack_114);
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
          if (((ulong)dVar32 & 1) == 0) goto LAB_0019a8ac;
        }
LAB_00199f64:
        dVar32 = dVar6;
        FUN_000f2330(dVar6,dVar11,dVar61,bVar54);
        uVar21 = (uint)((ulong)dVar41 >> 0x20);
        uVar43 = uVar21 >> 0x1e;
        uVar23 = (uint)((ulong)dVar10 >> 0x20);
        uVar56 = uVar23 >> 0x1e;
        iVar60 = SUB84(dVar35,0);
        lVar40 = lVar57;
        if ((ulong)dVar41 >> 0x3e == 3) {
          uVar44 = 0;
          if ((((dVar35 != 0.0 || dVar41 != -2.0) || (ulong)dVar10 >> 0x3e < 3) || (dVar5 != 0.0))
             || (dVar10 != -2.0)) goto joined_r0x0019a000;
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
          FUN_00023358(0,0xc000000000000000);
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          dVar35 = 0.0;
          dVar41 = -2.0;
LAB_0019a184:
          FUN_00023358(dVar35,dVar41);
          goto LAB_0019923c;
        }
        if (uVar21 >> 0x1e < 2) {
          if (uVar43 == 0) {
            uVar44 = (ulong)dVar41 >> 0x30 & 0xff;
          }
          else {
            iVar49 = (int)((ulong)dVar35 >> 0x20);
            if (SBORROW4(iVar49,iVar60)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa78);
              (*pcVar30)();
            }
            uVar44 = (ulong)(iVar49 - iVar60);
          }
joined_r0x0019a000:
          if (uVar23 >> 0x1e < 2) goto LAB_0019a038;
LAB_0019a004:
          if (uVar56 == 2) {
            uVar45 = *(long *)((long)dVar5 + 0x18) - *(long *)((long)dVar5 + 0x10);
            if (SBORROW8(*(long *)((long)dVar5 + 0x18),*(long *)((long)dVar5 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa74);
              (*pcVar30)();
            }
            goto LAB_0019a05c;
          }
          if (uVar44 == 0) goto LAB_0019a148;
LAB_0019a46c:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
          FUN_00023358(dVar5,dVar10);
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          FUN_00023358(dVar35,dVar41);
          goto LAB_0019a92c;
        }
        if (uVar43 == 2) {
          uVar44 = *(long *)((long)dVar35 + 0x18) - *(long *)((long)dVar35 + 0x10);
          if (SBORROW8(*(long *)((long)dVar35 + 0x18),*(long *)((long)dVar35 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa7c);
            (*pcVar30)();
          }
          goto joined_r0x0019a000;
        }
        uVar44 = 0;
        if (1 < uVar56) goto LAB_0019a004;
LAB_0019a038:
        if (uVar56 == 0) {
          uVar45 = (ulong)dVar10 >> 0x30 & 0xff;
        }
        else {
          iVar49 = (int)((ulong)dVar5 >> 0x20);
          if (SBORROW4(iVar49,SUB84(dVar5,0))) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa70);
            (*pcVar30)();
          }
          uVar45 = (ulong)(iVar49 - SUB84(dVar5,0));
        }
LAB_0019a05c:
        if (uVar44 != uVar45) goto LAB_0019a46c;
        if ((long)uVar44 < 1) {
LAB_0019a148:
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
          FUN_00023358(dVar5,dVar10);
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          goto LAB_0019a184;
        }
        if (uVar43 < 2) {
          if (uVar43 == 0) {
            abStack_c0[0] = SUB81(dVar35,0);
            abStack_c0[1] = (byte)((ulong)dVar35 >> 8);
            abStack_c0[2] = (byte)((ulong)dVar35 >> 0x10);
            abStack_c0[3] = (byte)((ulong)dVar35 >> 0x18);
            abStack_c0[4] = (byte)((ulong)dVar35 >> 0x20);
            abStack_c0[5] = (byte)((ulong)dVar35 >> 0x28);
            abStack_c0[6] = (byte)((ulong)dVar35 >> 0x30);
            abStack_c0[7] = (byte)((ulong)dVar35 >> 0x38);
            abStack_c0[8] = SUB81(dVar41,0);
            abStack_c0[9] = (byte)((ulong)dVar41 >> 8);
            abStack_c0[10] = (byte)((ulong)dVar41 >> 0x10);
            abStack_c0[0xb] = (byte)((ulong)dVar41 >> 0x18);
            abStack_c0[0xc] = (byte)((ulong)dVar41 >> 0x20);
            abStack_c0[0xd] = (byte)((ulong)dVar41 >> 0x28);
            FUN_000382a0(abStack_d8,abStack_c0,abStack_c0 + ((ulong)dVar41 >> 0x30 & 0xff),dVar5,
                         dVar10);
            FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
            FUN_00023358(dVar35,dVar41);
            goto LAB_0019a2f4;
          }
          lVar57 = (long)iVar60;
          dVar33 = (double)(((long)dVar35 >> 0x20) - lVar57);
          if ((long)dVar35 >> 0x20 < lVar57) {
                    /* WARNING: Does not return */
            pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa80);
            (*pcVar30)();
          }
          __s10Foundation13__DataStorageC6_bytesSvSgvg();
          if (dVar32 == 0.0) {
            __s10Foundation13__DataStorageC7_lengthSivg();
            lVar57 = 0;
            lVar42 = 0;
          }
          else {
            dVar36 = dVar32;
            __s10Foundation13__DataStorageC7_offsetSivg();
            if (SBORROW8(lVar57,(long)dVar36)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa8c);
              (*pcVar30)();
            }
            lVar57 = (lVar57 - (long)dVar36) + (long)dVar32;
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (lVar57 == 0) {
              lVar42 = 0;
            }
            else {
              if ((long)dVar33 <= (long)dVar36) {
                dVar36 = dVar33;
              }
              lVar42 = (long)dVar36 + lVar57;
            }
          }
          FUN_000382a0(abStack_c0,lVar57,lVar42,dVar5,dVar10);
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          FUN_00023358(dVar35,dVar41);
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
LAB_0019a3fc:
          FUN_00023358(dVar5,dVar10);
          bVar55 = abStack_c0[0];
        }
        else {
          if (uVar43 == 2) {
            lVar57 = *(long *)((long)dVar35 + 0x10);
            lVar42 = *(long *)((long)dVar35 + 0x18);
            __s10Foundation13__DataStorageC6_bytesSvSgvg();
            dVar33 = dVar32;
            if (dVar32 != 0.0) {
              __s10Foundation13__DataStorageC7_offsetSivg();
              if (SBORROW8(lVar57,(long)dVar33)) {
                    /* WARNING: Does not return */
                pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa88);
                (*pcVar30)();
              }
              dVar32 = (double)((lVar57 - (long)dVar33) + (long)dVar32);
            }
            dVar36 = (double)(lVar42 - lVar57);
            if (SBORROW8(lVar42,lVar57)) {
                    /* WARNING: Does not return */
              pcVar30 = (code *)SoftwareBreakpoint(1,0x19aa84);
              (*pcVar30)();
            }
            __s10Foundation13__DataStorageC7_lengthSivg();
            if (dVar32 == 0.0) {
              lVar57 = 0;
            }
            else {
              if ((long)dVar36 <= (long)dVar33) {
                dVar33 = dVar36;
              }
              lVar57 = (long)dVar33 + (long)dVar32;
            }
            FUN_000382a0(abStack_c0,dVar32,lVar57,dVar5,dVar10);
            FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
            FUN_00023358(dVar35,dVar41);
            FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
            goto LAB_0019a3fc;
          }
          abStack_c0[8] = 0;
          abStack_c0[9] = 0;
          abStack_c0[10] = 0;
          abStack_c0[0xb] = 0;
          abStack_c0[0xc] = 0;
          abStack_c0[0xd] = 0;
          abStack_c0[0] = 0;
          abStack_c0[1] = 0;
          abStack_c0[2] = 0;
          abStack_c0[3] = 0;
          abStack_c0[4] = 0;
          abStack_c0[5] = 0;
          abStack_c0[6] = 0;
          abStack_c0[7] = 0;
          FUN_000382a0(abStack_d8,abStack_c0,abStack_c0,dVar5,dVar10);
          FUN_000f2330(dVar6,dVar11,dVar61,bVar14);
          FUN_00023358(dVar35,dVar41);
LAB_0019a2f4:
          FUN_000f2330(dVar4,dVar9,dVar62,uStack_114);
          FUN_00023358(dVar5,dVar10);
          bVar55 = abStack_d8[0];
        }
      } while ((bVar55 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_0019a92c:
    puVar37 = (undefined *)0x0;
  }
LAB_0019a930:
  if (*(long *)PTR____stack_chk_guard_00999f88 == lStack_80) {
    return puVar37;
  }
  ___stack_chk_fail();
  puVar58 = *(undefined **)(puVar37 + 0x10);
  puVar38 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar58 != (undefined *)0x0) {
    func_0x000115a8(0xaf0390,&UNK_007da350);
    puVar38 = puVar58;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar53 = (undefined8 *)(puVar37 + 0x30);
    do {
      uVar50 = puVar53[-2];
      uVar44 = puVar53[-1];
      uVar7 = *puVar53;
      uVar12 = puVar53[1];
      uVar59 = puVar53[2];
      uVar15 = *(undefined1 *)(puVar53 + 3);
      uVar8 = puVar53[4];
      uVar13 = puVar53[5];
      _swift_bridgeObjectRetain(uVar44);
      FUN_000f2290(uVar7,uVar12,uVar59,uVar15);
      func_0x00023304(uVar8,uVar13);
      uVar45 = uVar50;
      uVar47 = uVar44;
      FUN_000202c0();
      if ((uVar47 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x19ac24);
        (*pcVar30)();
      }
      uVar47 = uVar45 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar38 + uVar47 + 0x40) =
           *(ulong *)(puVar38 + uVar47 + 0x40) | 1L << (uVar45 & 0x3f);
      puVar3 = (ulong *)(*(long *)(puVar38 + 0x30) + uVar45 * 0x10);
      *puVar3 = uVar50;
      puVar3[1] = uVar44;
      puVar48 = (undefined8 *)(*(long *)(puVar38 + 0x38) + uVar45 * 0x30);
      *puVar48 = uVar7;
      puVar48[1] = uVar12;
      puVar48[2] = uVar59;
      *(undefined1 *)(puVar48 + 3) = uVar15;
      puVar48[4] = uVar8;
      puVar48[5] = uVar13;
      if (SCARRY8(*(long *)(puVar38 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar30 = (code *)SoftwareBreakpoint(1,0x19ac28);
        (*pcVar30)();
      }
      puVar53 = puVar53 + 8;
      *(long *)(puVar38 + 0x10) = *(long *)(puVar38 + 0x10) + 1;
      puVar58 = puVar58 + -1;
    } while (puVar58 != (undefined *)0x0);
    _swift_release(puVar38);
  }
  return puVar38;
}



/* Entry: 0019aad0; end: 0019ac27;  */

undefined * FUN_0019aad0(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 uVar8;
  code *pcVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  
  puVar15 = *(undefined **)(param_1 + 0x10);
  puVar10 = PTR___swiftEmptyDictionarySingleton_0099b8f8;
  if (puVar15 != (undefined *)0x0) {
    func_0x000115a8(0xaf0390,&UNK_007da350);
    puVar10 = puVar15;
    __ss18_DictionaryStorageC8allocate8capacityAByxq_GSi_tFZ();
    _swift_retain();
    puVar14 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar14[-2];
      uVar5 = puVar14[-1];
      uVar3 = *puVar14;
      uVar6 = puVar14[1];
      uVar16 = puVar14[2];
      uVar8 = *(undefined1 *)(puVar14 + 3);
      uVar4 = puVar14[4];
      uVar7 = puVar14[5];
      _swift_bridgeObjectRetain(uVar5);
      FUN_000f2290(uVar3,uVar6,uVar16,uVar8);
      func_0x00023304(uVar4,uVar7);
      uVar11 = uVar2;
      uVar12 = uVar5;
      FUN_000202c0();
      if ((uVar12 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x19ac24);
        (*pcVar9)();
      }
      uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar10 + uVar12 + 0x40) =
           *(ulong *)(puVar10 + uVar12 + 0x40) | 1L << (uVar11 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar10 + 0x30) + uVar11 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar5;
      puVar13 = (undefined8 *)(*(long *)(puVar10 + 0x38) + uVar11 * 0x30);
      *puVar13 = uVar3;
      puVar13[1] = uVar6;
      puVar13[2] = uVar16;
      *(undefined1 *)(puVar13 + 3) = uVar8;
      puVar13[4] = uVar4;
      puVar13[5] = uVar7;
      if (SCARRY8(*(long *)(puVar10 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x19ac28);
        (*pcVar9)();
      }
      puVar14 = puVar14 + 8;
      *(long *)(puVar10 + 0x10) = *(long *)(puVar10 + 0x10) + 1;
      puVar15 = puVar15 + -1;
    } while (puVar15 != (undefined *)0x0);
    _swift_release(puVar10);
  }
  return puVar10;
}



/* Entry: 0019ac28; end: 0019addf;  */

double FUN_0019ac28(double param_1,ulong param_2,ulong param_3,uint param_4,double param_5,
                   ulong param_6,ulong param_7,uint param_8)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_3 >> 0x3c) & 3 | (param_4 & 0x3f) << 2;
  uVar2 = (uint)(param_7 >> 0x20);
  if (uVar3 < 3) {
    if (uVar3 == 0) {
      if ((uVar2 >> 0x1c & 3) == 0 && (param_8 & 0x3f) == 0) {
        dVar1 = 0.0;
        if ((param_2 & 0xff) != 1) {
          dVar1 = param_1;
        }
        if ((param_6 & 0xff) == 1) {
          if (dVar1 != 0.0) goto LAB_0019adc8;
        }
        else if (dVar1 != param_5) goto LAB_0019adc8;
LAB_0019adb8:
        uVar3 = 1;
        goto LAB_0019adcc;
      }
    }
    else {
      if (uVar3 == 1) {
        uVar3 = (uint)(param_1 == param_5);
        if ((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) != 1) {
          uVar3 = 0;
        }
        goto LAB_0019adcc;
      }
      if ((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) == 2) {
        if ((param_1 != param_5) || (param_2 != param_6)) {
                    /* WARNING: Could not recover jumptable at 0x00778f98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)
            PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_0099b6b8
          )(param_1,param_2,param_5,param_6,0);
          return param_1;
        }
        goto LAB_0019adb8;
      }
    }
  }
  else {
    if (uVar3 == 3) {
      uVar3 = SUB84(param_5,0) ^ SUB84(param_1,0) ^ 1;
      if ((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) != 3) {
        uVar3 = 0;
      }
      goto LAB_0019adcc;
    }
    if (uVar3 == 4) {
      if (((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) == 4) &&
         (FUN_00199188(param_1,param_5), ((ulong)param_1 & 1) != 0)) {
        FUN_00038814(param_2,param_3,param_6,param_7);
joined_r0x0019adb4:
        if ((param_2 & 1) != 0) goto LAB_0019adb8;
      }
    }
    else if (((uVar2 >> 0x1c & 3 | (param_8 & 0x3f) << 2) == 5) &&
            (FUN_00146270(param_1,param_5), ((ulong)param_1 & 1) != 0)) {
      FUN_00038814(param_2,param_3 & 0xcfffffffffffffff,param_6,param_7 & 0xcfffffffffffffff);
      goto joined_r0x0019adb4;
    }
  }
LAB_0019adc8:
  uVar3 = 0;
LAB_0019adcc:
  return (double)(ulong)(uVar3 & 1);
}



/* Entry: 0019ade0; end: 0019ae1f;  */

void FUN_0019ade0(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af2798 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0648;
  _swift_getWitnessTable(&UNK_007e0648,&UNK_009b4018);
  puRam0000000000af2798 = puVar1;
  return;
}



/* Entry: 0019ae20; end: 0019b023;  */

uint FUN_0019ae20(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  char cVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar10;
  undefined8 uVar11;
  undefined1 auStack_c0 [32];
  undefined8 uStack_a0;
  undefined1 uStack_98;
  undefined7 uStack_97;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  char cStack_88;
  ulong uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined7 uStack_6f;
  char cStack_68;
  ulong uVar9;
  
  uVar10 = *param_1;
  uStack_78 = (undefined1)param_1[1];
  uStack_6f = (undefined7)*(undefined8 *)((long)param_1 + 0x11);
  cStack_68 = (char)((ulong)*(undefined8 *)((long)param_1 + 0x11) >> 0x38);
  cVar5 = cStack_68;
  uStack_77 = (undefined7)*(undefined8 *)((long)param_1 + 9);
  uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 9) >> 0x38);
  uVar11 = *param_2;
  uStack_98 = (undefined1)param_2[1];
  uStack_8f = (undefined7)*(undefined8 *)((long)param_2 + 0x11);
  cStack_88 = (char)((ulong)*(undefined8 *)((long)param_2 + 0x11) >> 0x38);
  cVar4 = cStack_88;
  uStack_97 = (undefined7)*(undefined8 *)((long)param_2 + 9);
  uStack_90 = (undefined1)((ulong)*(undefined8 *)((long)param_2 + 9) >> 0x38);
  uVar2 = CONCAT71(uStack_77,uStack_78);
  uVar3 = CONCAT71(uStack_6f,uStack_70);
  uVar1 = CONCAT71(uStack_97,uStack_98);
  uVar9 = CONCAT71(uStack_8f,uStack_90);
  bVar6 = ((uVar9 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0;
  uStack_a0 = uVar11;
  uStack_80 = uVar10;
  if ((((uVar3 ^ 0xffffffffffffffff) & 0x3000000000000000) == 0) && (cStack_68 == -1)) {
    if (bVar6 && cStack_88 == -1) {
      FUN_0019c014(&uStack_80,auStack_c0,0xaefe20,&UNK_007e0850);
      FUN_0019c014(&uStack_a0,auStack_c0,0xaefe20,&UNK_007e0850);
      FUN_000f2330(uVar10,uVar2,uVar3,0xff);
LAB_0019aff4:
      uVar9 = param_1[4];
      FUN_00038814(uVar9,param_1[5],param_2[4],param_2[5]);
      uVar7 = (uint)uVar9;
      goto LAB_0019b000;
    }
LAB_0019aefc:
    FUN_0019c014(&uStack_80,auStack_c0,0xaefe20,&UNK_007e0850);
    FUN_0019c014(&uStack_a0,auStack_c0,0xaefe20,&UNK_007e0850);
    FUN_000f2330(uVar10,uVar2,uVar3,cVar5);
    FUN_000f2330(uVar11,uVar1,uVar9,cVar4);
  }
  else {
    if (bVar6 && cStack_88 == -1) goto LAB_0019aefc;
    FUN_0019c014(&uStack_80,auStack_c0,0xaefe20,&UNK_007e0850);
    FUN_0019c014(&uStack_a0,auStack_c0,0xaefe20,&UNK_007e0850);
    uVar8 = uVar10;
    FUN_0019ac28(uVar10,uVar2,uVar3,cVar5,uVar11,uVar1,uVar9,cVar4);
    FUN_000f2330(uVar11,uVar1,uVar9,cVar4);
    FUN_000f2330(uVar10,uVar2,uVar3,cVar5);
    if ((uVar8 & 1) != 0) goto LAB_0019aff4;
  }
  uVar7 = 0;
LAB_0019b000:
  return uVar7 & 1;
}



/* Entry: 0019b024; end: 0019b037;  */

void FUN_0019b024(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019b038();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0x19b078)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019b038; end: 0019b0b7;  */

void FUN_0019b038(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0460;
  _swift_getWitnessTable(&UNK_007e0460,&UNK_009b3f20);
  puRam0000000000af27b0 = puVar1;
  return;
}



/* Entry: 0019b0b8; end: 0019b0bb;  */

void FUN_0019b0b8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af27c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaf27c8;
  FUN_00016c74(0xaf27c8,&UNK_007e03e8);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000af27c0 = puVar2;
  return;
}



/* Entry: 0019b0bc; end: 0019b10b;  */

void FUN_0019b0bc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000000af27c0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xaf27c8;
  FUN_00016c74(0xaf27c8,&UNK_007e03e8);
  puVar2 = PTR___sSayxGSlsMc_0099b208;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_0099b208,uVar1);
  puRam0000000000af27c0 = puVar2;
  return;
}



/* Entry: 0019b10c; end: 0019b10f;  */

void FUN_0019b10c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e04a0;
  _swift_getWitnessTable(&UNK_007e04a0,&UNK_009b3f20);
  puRam0000000000af27d0 = puVar1;
  return;
}



/* Entry: 0019b110; end: 0019b14f;  */

void FUN_0019b110(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e04a0;
  _swift_getWitnessTable(&UNK_007e04a0,&UNK_009b3f20);
  puRam0000000000af27d0 = puVar1;
  return;
}



/* Entry: 0019b150; end: 0019b173;  */

void FUN_0019b150(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019b174();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 0019b174; end: 0019b1b3;  */

void FUN_0019b174(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0548;
  _swift_getWitnessTable(&UNK_007e0548,&UNK_009b3f98);
  puRam0000000000af27d8 = puVar1;
  return;
}



/* Entry: 0019b1b4; end: 0019b1c7;  */

void FUN_0019b1b4(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_0019b1c8();
  *(long *)(param_1 + 8) = lVar1;
  (*(code *)0xebbe0)();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Entry: 0019b1c8; end: 0019b207;  */

void FUN_0019b1c8(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27e0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e0570;
  _swift_getWitnessTable(&UNK_007e0570,&UNK_009b3f98);
  puRam0000000000af27e0 = puVar1;
  return;
}



/* Entry: 0019b208; end: 0019b20b;  */

void FUN_0019b208(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e05b0;
  _swift_getWitnessTable(&UNK_007e05b0,&UNK_009b3f98);
  puRam0000000000af27e8 = puVar1;
  return;
}



/* Entry: 0019b20c; end: 0019b24b;  */

void FUN_0019b20c(void)

{
  undefined *puVar1;
  
  if (puRam0000000000af27e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_007e05b0;
  _swift_getWitnessTable(&UNK_007e05b0,&UNK_009b3f98);
  puRam0000000000af27e8 = puVar1;
  return;
}



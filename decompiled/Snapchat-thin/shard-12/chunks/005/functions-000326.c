/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 109179894; end: 109179b5f;  */

void FUN_109179894(double *param_1,long param_2,uint param_3)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  bVar1 = *(byte *)(param_2 + 8);
  dVar2 = *(double *)(param_2 + (long)(int)(param_3 & 1 ^ (int)param_3 >> 1) * 8 + 0x18);
  dVar3 = *(double *)(param_2 + (long)((int)param_3 >> 1) * 8 + 0x28);
  if (bVar1 < 2) {
    dVar5 = 1.0;
    dVar4 = dVar3;
    if (bVar1 == 0) goto LAB_10917992c;
    if (bVar1 == 1) {
      dVar5 = -dVar2;
      dVar2 = 1.0;
      goto LAB_10917992c;
    }
  }
  else {
    if (bVar1 == 2) {
      dVar5 = -dVar2;
      dVar2 = -dVar3;
      dVar4 = 1.0;
      goto LAB_10917992c;
    }
    if (bVar1 == 3) {
      dVar4 = -dVar2;
      dVar5 = -1.0;
      dVar2 = -dVar3;
      goto LAB_10917992c;
    }
    if (bVar1 == 4) {
      dVar4 = -dVar2;
      dVar2 = -1.0;
      dVar5 = dVar3;
      goto LAB_10917992c;
    }
  }
  dVar4 = -1.0;
  dVar5 = dVar3;
LAB_10917992c:
  *param_1 = dVar5;
  param_1[1] = dVar2;
  param_1[2] = dVar4;
  return;
}



/* Entry: 109179b60; end: 109179dab;  */

undefined8 * FUN_109179b60(long param_1,undefined8 *param_2)

{
  double *pdVar1;
  uint uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  bool bVar6;
  undefined8 *puVar7;
  uint *puVar8;
  long lVar9;
  ulong uVar10;
  bool bVar11;
  undefined *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  ulong uVar15;
  uint *puVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  undefined8 uStack_90;
  undefined8 uStack_88;
  uint *puStack_80;
  long lStack_78;
  undefined8 *puStack_70;
  uint *puStack_68;
  undefined1 *puStack_60;
  undefined8 uStack_58;
  undefined1 auStack_44 [4];
  uint uStack_40;
  uint uStack_3c;
  long lStack_38;
  
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  *(undefined8 *)(param_1 + 0xb) = *param_2;
  puVar8 = &uStack_40;
  puVar7 = param_2;
  FUN_10917ac28(param_2,puVar8,&uStack_3c,auStack_44);
  *(char *)(param_1 + 8) = (char)puVar7;
  *(undefined1 *)(param_1 + 10) = auStack_44[0];
  puVar7 = param_2;
  func_0x00010917a700();
  lVar9 = 0;
  *(char *)(param_1 + 9) = (char)puVar7;
  iVar5 = 1 << (ulong)(0x1eU - (int)puVar7 & 0x1f);
  puVar16 = &uStack_40;
  bVar6 = true;
  do {
    bVar11 = bVar6;
    uVar2 = *puVar16 & -iVar5;
    dVar17 = (double)(int)uVar2 / 1073741824.0;
    dVar18 = (1.0 - dVar17) * (1.0 - dVar17) * -4.0 + 1.0;
    if (0.5 <= dVar17) {
      dVar18 = dVar17 * dVar17 * 4.0 + -1.0;
    }
    dVar19 = (double)(int)(uVar2 + iVar5) / 1073741824.0;
    pdVar1 = (double *)(param_1 + 0x18 + lVar9 * 0x10);
    dVar17 = (1.0 - dVar19) * (1.0 - dVar19) * -4.0 + 1.0;
    if (0.5 <= dVar19) {
      dVar17 = dVar19 * dVar19 * 4.0 + -1.0;
    }
    *pdVar1 = dVar18 * 0.3333333333333333;
    pdVar1[1] = dVar17 * 0.3333333333333333;
    lVar9 = 1;
    puVar16 = &uStack_3c;
    bVar6 = false;
  } while (bVar11);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return puVar7;
  }
  ___stack_chk_fail();
  uStack_58 = 0x109179ca0;
  uVar15 = *(ulong *)((long)puVar7 + 0xb);
  if ((uVar15 & 1) == 0) {
    puStack_80 = &uStack_3c;
    lStack_78 = param_1;
    puStack_70 = param_2;
    puStack_68 = &uStack_3c;
    puStack_60 = &stack0xfffffffffffffff0;
    func_0x00010917aef4(&uStack_90);
    lVar9 = 0;
    uVar10 = *(ulong *)((long)puVar7 + 0xb);
    uVar10 = (uVar10 - (uVar10 & -uVar10)) + ((uVar10 & -uVar10) >> 2);
    uVar3 = *(undefined1 *)(puVar7 + 1);
    bVar4 = *(byte *)((long)puVar7 + 10);
    puVar12 = &UNK_10dfba070;
    puVar13 = (undefined4 *)&UNK_10dfba0b0;
    do {
      *(undefined1 *)((long)puVar8 + lVar9 + 8) = uVar3;
      *(char *)((long)puVar8 + lVar9 + 9) = *(char *)((long)puVar7 + 9) + '\x01';
      *(byte *)((long)puVar8 + lVar9 + 10) = bVar4 ^ (byte)*puVar13;
      bVar4 = *(byte *)((long)puVar7 + 10);
      uVar2 = *(uint *)(puVar12 + (long)(char)bVar4 * 0x10);
      *(ulong *)((long)puVar8 + lVar9 + 0xb) = uVar10;
      iVar5 = (int)uVar2 >> 1;
      uVar14 = (ulong)uVar2 & 1;
      *(undefined8 *)((long)puVar8 + (long)iVar5 * 8 + lVar9 + 0x18) = puVar7[(long)iVar5 + 3];
      *(undefined8 *)((long)puVar8 + lVar9 + (long)iVar5 * -8 + 0x20) = uStack_90;
      *(undefined8 *)((long)puVar8 + uVar14 * 8 + lVar9 + 0x28) = puVar7[uVar14 + 5];
      *(undefined8 *)((long)puVar8 + (ulong)((uint)uVar14 ^ 1) * 8 + lVar9 + 0x28) = uStack_88;
      uVar10 = uVar10 + (uVar10 & -uVar10) * 2;
      lVar9 = lVar9 + 0x38;
      puVar12 = puVar12 + 4;
      puVar13 = puVar13 + 1;
    } while (lVar9 != 0xe0);
  }
  return (undefined8 *)(ulong)((uVar15 & 1) == 0);
}



/* Entry: 109179dac; end: 109179df3;  */

void FUN_109179dac(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x38;
  __Znwm();
  *puVar1 = &PTR_DAT_110adec90;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  puVar1[6] = *(undefined8 *)(param_1 + 0x30);
  puVar1[5] = uVar2;
  return;
}



/* Entry: 109179df4; end: 109179f6f;  */

void FUN_109179df4(undefined8 *param_1,long param_2)

{
  byte bVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  double dStack_60;
  double dStack_58;
  double dStack_50;
  
  dVar3 = (*(double *)(param_2 + 0x18) + *(double *)(param_2 + 0x20)) * 0.5;
  dVar4 = (*(double *)(param_2 + 0x28) + *(double *)(param_2 + 0x30)) * 0.5;
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 < 2) {
    dVar6 = 1.0;
    dVar5 = dVar4;
    if (bVar1 == 0) goto LAB_109179eac;
    if (bVar1 == 1) {
      dVar6 = -dVar3;
      dVar3 = 1.0;
      goto LAB_109179eac;
    }
  }
  else {
    if (bVar1 == 2) {
      dVar6 = -dVar3;
      dVar3 = -dVar4;
      dVar5 = 1.0;
      goto LAB_109179eac;
    }
    if (bVar1 == 3) {
      dVar5 = -dVar3;
      dVar6 = -1.0;
      dVar3 = -dVar4;
      goto LAB_109179eac;
    }
    if (bVar1 == 4) {
      dVar5 = -dVar3;
      dVar3 = -1.0;
      dVar6 = dVar4;
      goto LAB_109179eac;
    }
  }
  dVar5 = -1.0;
  dVar6 = dVar4;
LAB_109179eac:
  iVar2 = 0;
  *param_1 = &PTR_FUN_110adec28;
  dVar7 = dVar3 * dVar3 + dVar6 * dVar6 + dVar5 * dVar5;
  dVar8 = SQRT(dVar7);
  dVar4 = 1.0 / dVar8;
  if (dVar7 == 0.0) {
    dVar4 = dVar8;
  }
  param_1[1] = dVar6 * dVar4;
  param_1[2] = dVar3 * dVar4;
  param_1[3] = dVar5 * dVar4;
  param_1[4] = 0;
  do {
    FUN_109179894(&dStack_60,param_2,iVar2);
    dVar3 = dStack_58 * dStack_58 + dStack_60 * dStack_60 + dStack_50 * dStack_50;
    dVar4 = SQRT(dVar3);
    dStack_70 = 1.0 / dVar4;
    if (dVar3 == 0.0) {
      dStack_70 = dVar4;
    }
    dStack_80 = dStack_60 * dStack_70;
    dStack_78 = dStack_58 * dStack_70;
    dStack_70 = dStack_50 * dStack_70;
    FUN_109179074(param_1,&dStack_80);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 4);
  return;
}



/* Entry: 109179f70; end: 10917a4eb;  */

void FUN_109179f70(undefined8 *param_1,long param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  double *pdVar7;
  double *pdVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  double dStack_90;
  double dStack_88;
  
  if (*(char *)(param_2 + 9) < '\x01') {
    if ((bRam00000001137317f8 & 1) == 0) {
      iVar6 = 0x137317f8;
      ___cxa_guard_acquire();
      if (iVar6 != 0) {
        dVar9 = 0.5773502691896257;
        _asin();
        dRam00000001137317f0 = dVar9;
        ___cxa_guard_release(0x1137317f8);
      }
    }
    dVar9 = dRam00000001137317f0;
    bVar2 = *(byte *)(param_2 + 8);
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        *param_1 = &PTR_FUN_110aded28;
        uStack_98 = 0x3fe921fb54442d18;
        uStack_a0 = 0xbfe921fb54442d18;
        param_1[2] = 0x3fe921fb54442d18;
        param_1[1] = 0xbfe921fb54442d18;
        goto LAB_10917a490;
      }
      if (bVar2 == 1) {
        *param_1 = &PTR_FUN_110aded28;
        param_1[2] = 0x3fe921fb54442d18;
        param_1[1] = 0xbfe921fb54442d18;
        uStack_98 = 0x4002d97c7f3321d2;
        uStack_a0 = 0x3fe921fb54442d18;
        goto LAB_10917a490;
      }
    }
    else {
      if (bVar2 == 2) {
        *param_1 = &PTR_FUN_110aded28;
        param_1[1] = dVar9;
        param_1[3] = 0xc00921fb54442d18;
        param_1[2] = 0x3ff921fb54442d18;
        param_1[4] = 0x400921fb54442d18;
        return;
      }
      if (bVar2 == 3) {
        *param_1 = &PTR_FUN_110aded28;
        param_1[2] = 0x3fe921fb54442d18;
        param_1[1] = 0xbfe921fb54442d18;
        uStack_98 = 0xc002d97c7f3321d2;
        uStack_a0 = 0x4002d97c7f3321d2;
        goto LAB_10917a490;
      }
      if (bVar2 == 4) {
        *param_1 = &PTR_FUN_110aded28;
        param_1[2] = 0x3fe921fb54442d18;
        param_1[1] = 0xbfe921fb54442d18;
        uStack_98 = 0xbfe921fb54442d18;
        uStack_a0 = 0xc002d97c7f3321d2;
        goto LAB_10917a490;
      }
    }
    dVar9 = -dRam00000001137317f0;
    *param_1 = &PTR_FUN_110aded28;
    param_1[1] = 0xbff921fb54442d18;
    param_1[2] = dVar9;
  }
  else {
    pdVar7 = (double *)(param_2 + 0x18);
    pdVar8 = (double *)(param_2 + 0x28);
    dVar9 = *pdVar7 + *(double *)(param_2 + 0x20);
    dVar12 = *pdVar8 + *(double *)(param_2 + 0x30);
    bVar2 = *(byte *)(param_2 + 8);
    uVar3 = bVar2 - 3;
    bVar4 = dVar12 < 0.0;
    if (bVar2 < 2) {
      bVar4 = dVar12 != 0.0 && dVar12 >= 0.0;
    }
    bVar5 = dVar9 < 0.0;
    if (uVar3 < 2) {
      bVar5 = 0.0 < dVar9;
    }
    uVar1 = (uint)bVar5;
    if (uVar3 < 2) {
      bVar4 = dVar12 < 0.0;
    }
    uVar3 = (uint)bVar4;
    dVar9 = pdVar7[uVar1];
    dVar12 = pdVar8[uVar3];
    if (bVar2 < 2) {
      dVar10 = dVar12;
      if (bVar2 == 0) {
        dVar13 = 1.0;
        _atan2(dVar12,SQRT(dVar9 * dVar9 + 1.0));
        dVar14 = pdVar7[uVar1 ^ 1];
        dVar15 = pdVar8[uVar3 ^ 1];
        dVar11 = dVar15;
        dVar16 = dVar14;
      }
      else if (bVar2 == 1) {
        _atan2(dVar12,SQRT(dVar9 * dVar9 + 1.0));
        dVar14 = pdVar7[uVar1 ^ 1];
        dVar15 = pdVar8[uVar3 ^ 1];
        dVar13 = -dVar14;
        dVar11 = dVar15;
        dVar16 = 1.0;
      }
      else {
LAB_10917a1dc:
        dVar10 = -1.0;
        _atan2(0xbff0000000000000,SQRT(dVar9 * dVar9 + dVar12 * dVar12));
        dVar14 = pdVar7[uVar1 ^ 1];
        dVar15 = pdVar8[uVar3 ^ 1];
        dVar11 = -1.0;
        dVar13 = dVar15;
        dVar16 = dVar14;
      }
    }
    else if (bVar2 == 2) {
      dVar10 = 1.0;
      _atan2(0x3ff0000000000000,SQRT(dVar12 * dVar12 + dVar9 * dVar9));
      dVar14 = pdVar7[uVar1 ^ 1];
      dVar15 = pdVar8[uVar3 ^ 1];
      dVar13 = -dVar14;
      dVar11 = 1.0;
      dVar16 = -dVar15;
    }
    else if (bVar2 == 3) {
      dVar10 = -dVar9;
      _atan2(dVar10,SQRT(dVar12 * dVar12 + 1.0));
      dVar14 = pdVar7[uVar1 ^ 1];
      dVar15 = pdVar8[uVar3 ^ 1];
      dVar13 = -1.0;
      dVar11 = -dVar14;
      dVar16 = -dVar15;
    }
    else {
      if (bVar2 != 4) goto LAB_10917a1dc;
      dVar10 = -dVar9;
      _atan2(dVar10,SQRT(dVar12 * dVar12 + 1.0));
      dVar14 = pdVar7[uVar1 ^ 1];
      dVar15 = pdVar8[uVar3 ^ 1];
      dVar11 = -dVar14;
      dVar13 = dVar15;
      dVar16 = -1.0;
    }
    _atan2(dVar11,SQRT(dVar16 * dVar16 + dVar13 * dVar13));
    dVar13 = dVar10;
    if (dVar10 <= dVar11) {
      dVar13 = dVar11;
      dVar11 = dVar10;
    }
    if (dVar11 <= dVar13) {
      dVar13 = dVar13 + 4.440892098500626e-16;
      dVar11 = dVar11 + -4.440892098500626e-16;
    }
    dVar10 = -1.5707963267948966;
    if (-1.5707963267948966 <= dVar11) {
      dVar10 = dVar11;
    }
    dVar11 = 1.5707963267948966;
    if (dVar13 <= 1.5707963267948966) {
      dVar11 = dVar13;
    }
    if ((dVar10 != -1.5707963267948966) && (dVar11 != 1.5707963267948966)) {
      dVar13 = dVar12;
      if (bVar2 < 2) {
        if (bVar2 == 0) {
          dVar15 = 1.0;
          dVar13 = 1.0;
        }
        else if (bVar2 == 1) {
          dVar12 = -dVar9;
          dVar9 = 1.0;
          _atan2(0x3ff0000000000000,dVar12);
          dVar13 = -dVar14;
          dVar14 = 1.0;
          goto LAB_10917a410;
        }
LAB_10917a408:
        _atan2(dVar9,dVar15);
      }
      else if (bVar2 == 2) {
        dVar13 = -dVar9;
        dVar9 = -dVar15;
        _atan2(dVar9,dVar13);
        dVar13 = -dVar14;
        dVar14 = -dVar12;
      }
      else {
        if (bVar2 != 3) {
          if (bVar2 == 4) {
            dVar14 = -1.0;
            dVar9 = -1.0;
          }
          goto LAB_10917a408;
        }
        dVar9 = -dVar15;
        _atan2(dVar9,0xbff0000000000000);
        dVar14 = -dVar12;
        dVar13 = -1.0;
      }
LAB_10917a410:
      _atan2(dVar14,dVar13);
      dVar12 = 3.141592653589793;
      if (dVar9 != -3.141592653589793) {
        dVar12 = dVar9;
      }
      dStack_90 = 3.141592653589793;
      if (dVar14 != -3.141592653589793) {
        dStack_90 = dVar14;
      }
      dVar9 = (dStack_90 + 3.141592653589793) - (dVar12 + -3.141592653589793);
      if (0.0 <= dStack_90 - dVar12) {
        dVar9 = dStack_90 - dVar12;
      }
      dStack_88 = dVar12;
      if (dVar9 <= 3.141592653589793) {
        dStack_88 = dStack_90;
        dStack_90 = dVar12;
      }
      FUN_1091781a0(&uStack_a0,0x3cc0000000000000,&dStack_90);
      *param_1 = &PTR_FUN_110aded28;
      param_1[1] = dVar10;
      param_1[2] = dVar11;
      goto LAB_10917a490;
    }
    *param_1 = &PTR_FUN_110aded28;
    param_1[1] = dVar10;
    param_1[2] = dVar11;
  }
  uStack_98 = 0x400921fb54442d18;
  uStack_a0 = 0xc00921fb54442d18;
LAB_10917a490:
  param_1[4] = uStack_98;
  param_1[3] = uStack_a0;
  return;
}



/* Entry: 10917a4ec; end: 10917a65b;  */

bool FUN_10917a4ec(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(param_2 + 0xb);
  uVar2 = *(ulong *)(param_1 + 0xb);
  return uVar1 - (uVar1 - 1 & (uVar1 ^ 0xffffffffffffffff)) <= (uVar2 - 1 | uVar2) &&
         uVar2 - (uVar2 - 1 & (uVar2 ^ 0xffffffffffffffff)) <= (uVar1 - 1 | uVar1);
}



/* Entry: 10917a65c; end: 10917a6f7;  */

undefined1 * FUN_10917a65c(void)

{
  undefined1 *puVar1;
  undefined1 auStack_31 [9];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  FUN_1091797b4(auStack_31,&UNK_10f55a301,0x8b);
  func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a2e7,0xd);
  puVar1 = auStack_31;
  FUN_109179870(puVar1);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_28) {
    return puVar1;
  }
  ___stack_chk_fail();
  FUN_109179870(auStack_31);
  __Unwind_Resume(puVar1);
  return (undefined1 *)0x0;
}



/* Entry: 10917a6f8; end: 10917a76f;  */

undefined8 FUN_10917a6f8(void)

{
  return 0;
}



/* Entry: 10917a770; end: 10917a84b;  */

undefined8 *** FUN_10917a770(undefined8 ***param_1,undefined8 ***param_2)

{
  ulong uVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  undefined8 **ppuVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 ***unaff_x20;
  undefined8 **ppuStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  undefined1 uStack_60;
  long lStack_58;
  char acStack_2a [10];
  
  lVar12 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = *param_2;
  lVar15 = 0xf;
  do {
    acStack_2a[lVar15 + 1] = (&UNK_10f55a4f0)[(ulong)ppuVar13 & 0xf];
    ppuVar13 = (undefined8 **)((ulong)ppuVar13 >> 4);
    uVar1 = lVar15 + 1;
    lVar15 = lVar15 + -1;
  } while (1 < uVar1);
  lVar15 = 0xf;
  do {
    lVar14 = lVar15;
    if (lVar14 == -1) {
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
        puVar6 = &UNK_10f55a335;
        func_0x00010002b82c(param_1,&UNK_10f55a335);
        func_0x000107c613d0(puVar6);
        func_0x000107c60c50();
        return unaff_x20;
      }
      goto LAB_10917a848;
    }
    lVar15 = lVar14 + -1;
  } while (acStack_2a[lVar14 + 1] == '0');
  func_0x000107c28234(param_1,acStack_2a + 1,lVar14 + 1);
  param_2 = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar12) {
    return param_1;
  }
LAB_10917a848:
  ___stack_chk_fail();
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  ppuVar13 = (undefined8 **)(long)(char)*(byte *)((long)param_2 + 0x17);
  if ((long)ppuVar13 < 0) {
    ppuVar13 = param_2[1];
    if ((undefined8 **)0x10 < ppuVar13) goto LAB_10917a8a4;
    param_2 = (undefined8 ***)*param_2;
  }
  else if (0x10 < *(byte *)((long)param_2 + 0x17)) {
LAB_10917a8a4:
    pppuVar5 = (undefined8 ***)0x0;
    goto LAB_10917a8f0;
  }
  uStack_60 = 0;
  uStack_68 = 0x3030303030303030;
  puStack_70 = (ulong *)0x3030303030303030;
  _memcpy(&puStack_70,param_2);
  ppuStack_78 = (ulong **)0x0;
  pppuVar4 = (undefined8 ***)&puStack_70;
  param_2 = &ppuStack_78;
  ppuVar13 = (undefined8 **)0x10;
  _strtoull();
  pppuVar5 = (undefined8 ***)0x0;
  if (ppuStack_78 != &puStack_70) {
    pppuVar5 = pppuVar4;
  }
LAB_10917a8f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_58) {
    ___stack_chk_fail();
    _pthread_once(0x1132cb770,FUN_10917b534);
    uVar7 = (uint)*(ushort *)
                   ((ulong)((uint)pppuVar5 & 1 | ((uint)((ulong)param_2 >> 0x1c) & 0xf) << 6 |
                           ((uint)((ulong)ppuVar13 >> 0x1c) & 0xf) << 2) * 2 + 0x113731800);
    uVar16 = (uint)ppuVar13;
    uVar8 = (uint)*(ushort *)
                   ((ulong)((uint)((ulong)param_2 >> 0x12) & 0x3c0 | uVar16 >> 0x16 & 0x3c |
                           uVar7 & 3) * 2 + 0x113731800);
    uVar9 = (uint)*(ushort *)
                   ((ulong)((uint)((ulong)param_2 >> 0xe) & 0x3c0 | uVar16 >> 0x12 & 0x3c |
                           uVar8 & 3) * 2 + 0x113731800);
    uVar2 = *(ushort *)
             ((ulong)((uint)((ulong)param_2 >> 10) & 0x3c0 | uVar16 >> 0xe & 0x3c | uVar9 & 3) * 2 +
             0x113731800);
    uVar3 = *(ushort *)
             ((ulong)((uint)((ulong)param_2 >> 6) & 0x3c0 | uVar16 >> 10 & 0x3c | uVar2 & 3) * 2 +
             0x113731800);
    uVar10 = (uint)*(ushort *)
                    ((ulong)((uint)((ulong)param_2 >> 2) & 0x3c0 | uVar16 >> 6 & 0x3c | uVar3 & 3) *
                     2 + 0x113731800);
    uVar11 = (uint)*(ushort *)
                    ((ulong)(((uint)param_2 & 0xf0) << 2 | uVar16 >> 2 & 0x3c | uVar10 & 3) * 2 +
                    0x113731800);
    return (undefined8 ***)
           ((ulong)((uVar7 & 0x3fc) << 0x16 | (uint)pppuVar5 << 0x1c | (uVar8 & 0xfffc) << 0xe |
                    (uVar9 & 0xfffc) << 6 | (uint)(uVar2 >> 2)) << 0x21 |
            (ulong)((uVar10 & 0xfffc) << 0xe | (uint)(uVar3 >> 2) << 0x18 | (uVar11 & 0xfffc) << 6 |
                   (uint)(*(ushort *)
                           ((ulong)(((uint)param_2 & 0xf) << 6 | (uVar16 & 0xf) << 2 | uVar11 & 3) *
                            2 + 0x113731800) >> 2)) << 1 | 1);
  }
  return pppuVar5;
}



/* Entry: 10917a84c; end: 10917a91b;  */

undefined8 * FUN_10917a84c(undefined8 **param_1)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined8 *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puVar5 = (undefined8 *)(long)(char)*(byte *)((long)param_1 + 0x17);
  if ((long)puVar5 < 0) {
    puVar5 = param_1[1];
    if ((undefined8 *)0x10 < puVar5) goto LAB_10917a8a4;
    param_1 = (undefined8 **)*param_1;
  }
  else if (0x10 < *(byte *)((long)param_1 + 0x17)) {
LAB_10917a8a4:
    puVar4 = (undefined8 *)0x0;
    goto LAB_10917a8f0;
  }
  uStack_30 = 0;
  uStack_38 = 0x3030303030303030;
  uStack_40 = 0x3030303030303030;
  _memcpy(&uStack_40,param_1);
  puStack_48 = (undefined8 *)0x0;
  puVar3 = &uStack_40;
  param_1 = &puStack_48;
  puVar5 = (undefined8 *)0x10;
  _strtoull();
  puVar4 = (undefined8 *)0x0;
  if (puStack_48 != &uStack_40) {
    puVar4 = puVar3;
  }
LAB_10917a8f0:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    _pthread_once(0x1132cb770,FUN_10917b534);
    uVar6 = (uint)*(ushort *)
                   ((ulong)((uint)puVar4 & 1 | ((uint)((ulong)param_1 >> 0x1c) & 0xf) << 6 |
                           ((uint)((ulong)puVar5 >> 0x1c) & 0xf) << 2) * 2 + 0x113731800);
    uVar11 = (uint)puVar5;
    uVar7 = (uint)*(ushort *)
                   ((ulong)((uint)((ulong)param_1 >> 0x12) & 0x3c0 | uVar11 >> 0x16 & 0x3c |
                           uVar6 & 3) * 2 + 0x113731800);
    uVar8 = (uint)*(ushort *)
                   ((ulong)((uint)((ulong)param_1 >> 0xe) & 0x3c0 | uVar11 >> 0x12 & 0x3c |
                           uVar7 & 3) * 2 + 0x113731800);
    uVar1 = *(ushort *)
             ((ulong)((uint)((ulong)param_1 >> 10) & 0x3c0 | uVar11 >> 0xe & 0x3c | uVar8 & 3) * 2 +
             0x113731800);
    uVar2 = *(ushort *)
             ((ulong)((uint)((ulong)param_1 >> 6) & 0x3c0 | uVar11 >> 10 & 0x3c | uVar1 & 3) * 2 +
             0x113731800);
    uVar9 = (uint)*(ushort *)
                   ((ulong)((uint)((ulong)param_1 >> 2) & 0x3c0 | uVar11 >> 6 & 0x3c | uVar2 & 3) *
                    2 + 0x113731800);
    uVar10 = (uint)*(ushort *)
                    ((ulong)(((uint)param_1 & 0xf0) << 2 | uVar11 >> 2 & 0x3c | uVar9 & 3) * 2 +
                    0x113731800);
    return (undefined8 *)
           ((ulong)((uVar6 & 0x3fc) << 0x16 | (uint)puVar4 << 0x1c | (uVar7 & 0xfffc) << 0xe |
                    (uVar8 & 0xfffc) << 6 | (uint)(uVar1 >> 2)) << 0x21 |
            (ulong)((uVar9 & 0xfffc) << 0xe | (uint)(uVar2 >> 2) << 0x18 | (uVar10 & 0xfffc) << 6 |
                   (uint)(*(ushort *)
                           ((ulong)(((uint)param_1 & 0xf) << 6 | (uVar11 & 0xf) << 2 | uVar10 & 3) *
                            2 + 0x113731800) >> 2)) << 1 | 1);
  }
  return puVar4;
}



/* Entry: 10917a91c; end: 10917aa57;  */

ulong FUN_10917a91c(uint param_1,ulong param_2,ulong param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  _pthread_once(0x1132cb770,FUN_10917b534);
  uVar3 = (uint)*(ushort *)
                 ((ulong)(param_1 & 1 | ((uint)(param_2 >> 0x1c) & 0xf) << 6 |
                         ((uint)(param_3 >> 0x1c) & 0xf) << 2) * 2 + 0x113731800);
  uVar8 = (uint)param_3;
  uVar4 = (uint)*(ushort *)
                 ((ulong)((uint)(param_2 >> 0x12) & 0x3c0 | uVar8 >> 0x16 & 0x3c | uVar3 & 3) * 2 +
                 0x113731800);
  uVar5 = (uint)*(ushort *)
                 ((ulong)((uint)(param_2 >> 0xe) & 0x3c0 | uVar8 >> 0x12 & 0x3c | uVar4 & 3) * 2 +
                 0x113731800);
  uVar1 = *(ushort *)
           ((ulong)((uint)(param_2 >> 10) & 0x3c0 | uVar8 >> 0xe & 0x3c | uVar5 & 3) * 2 +
           0x113731800);
  uVar2 = *(ushort *)
           ((ulong)((uint)(param_2 >> 6) & 0x3c0 | uVar8 >> 10 & 0x3c | uVar1 & 3) * 2 + 0x113731800
           );
  uVar6 = (uint)*(ushort *)
                 ((ulong)((uint)(param_2 >> 2) & 0x3c0 | uVar8 >> 6 & 0x3c | uVar2 & 3) * 2 +
                 0x113731800);
  uVar7 = (uint)*(ushort *)
                 ((ulong)(((uint)param_2 & 0xf0) << 2 | uVar8 >> 2 & 0x3c | uVar6 & 3) * 2 +
                 0x113731800);
  return (ulong)((uVar3 & 0x3fc) << 0x16 | param_1 << 0x1c | (uVar4 & 0xfffc) << 0xe |
                 (uVar5 & 0xfffc) << 6 | (uint)(uVar1 >> 2)) << 0x21 |
         (ulong)((uVar6 & 0xfffc) << 0xe | (uint)(uVar2 >> 2) << 0x18 | (uVar7 & 0xfffc) << 6 |
                (uint)(*(ushort *)
                        ((ulong)(((uint)param_2 & 0xf) << 6 | (uVar8 & 0xf) << 2 | uVar7 & 3) * 2 +
                        0x113731800) >> 2)) << 1 | 1;
}



/* Entry: 10917aa58; end: 10917abbf;  */

ulong FUN_10917aa58(double *param_1)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  dVar12 = *param_1;
  dVar13 = param_1[1];
  dVar14 = param_1[2];
  uVar4 = 2;
  uVar5 = 0;
  if (ABS(dVar12) <= ABS(dVar14)) {
    uVar5 = uVar4;
  }
  if (ABS(dVar14) < ABS(dVar13)) {
    uVar4 = 1;
  }
  if (ABS(dVar12) <= ABS(dVar13)) {
    uVar5 = uVar4;
  }
  uVar4 = uVar5 + 3;
  if (0.0 <= param_1[uVar5]) {
    uVar4 = uVar5;
  }
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      dVar15 = dVar13 / dVar12;
      dVar13 = dVar14 / dVar12;
      goto LAB_10917ab1c;
    }
    dVar3 = dVar12;
    dVar15 = dVar13;
    if (uVar4 == 1) {
      dVar15 = -dVar12 / dVar13;
      dVar13 = dVar14 / dVar13;
      goto LAB_10917ab1c;
    }
  }
  else {
    dVar3 = dVar13;
    dVar15 = dVar12;
    if (uVar4 != 2) {
      if (uVar4 == 3) {
        dVar15 = dVar14 / dVar12;
        dVar13 = dVar13 / dVar12;
        goto LAB_10917ab1c;
      }
      dVar3 = dVar12;
      dVar15 = dVar13;
      if (uVar4 == 4) {
        dVar15 = dVar14 / dVar13;
        dVar13 = -dVar12 / dVar13;
        goto LAB_10917ab1c;
      }
    }
  }
  dVar15 = -dVar15 / dVar14;
  dVar13 = -dVar3 / dVar14;
LAB_10917ab1c:
  dVar12 = SQRT(dVar15 * -3.0 + 1.0) * -0.5 + 1.0;
  if (0.0 <= dVar15) {
    dVar12 = SQRT(dVar15 * 3.0 + 1.0) * 0.5;
  }
  dVar14 = SQRT(dVar13 * -3.0 + 1.0) * -0.5 + 1.0;
  if (0.0 <= dVar13) {
    dVar14 = SQRT(dVar13 * 3.0 + 1.0) * 0.5;
  }
  dVar12 = dVar12 * 1073741824.0 + -0.5;
  dVar13 = -0.5;
  if (0.0 <= dVar12) {
    dVar13 = 0.5;
  }
  uVar5 = (uint)(dVar12 + dVar13);
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (0x3ffffffe < (int)uVar5) {
    uVar5 = 0x3fffffff;
  }
  dVar12 = dVar14 * 1073741824.0 + -0.5;
  dVar13 = -0.5;
  if (0.0 <= dVar12) {
    dVar13 = 0.5;
  }
  uVar6 = (uint)(dVar12 + dVar13);
  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  if (0x3ffffffe < (int)uVar6) {
    uVar6 = 0x3fffffff;
  }
  _pthread_once(0x1132cb770,FUN_10917b534);
  uVar7 = (uint)*(ushort *)
                 ((ulong)(uVar4 & 1 | (uVar5 >> 0x1c) << 6 | (uVar6 >> 0x1c) << 2) * 2 + 0x113731800
                 );
  uVar8 = (uint)*(ushort *)
                 ((ulong)(uVar5 >> 0x12 & 0x3c0 | uVar6 >> 0x16 & 0x3c | uVar7 & 3) * 2 +
                 0x113731800);
  uVar9 = (uint)*(ushort *)
                 ((ulong)(uVar5 >> 0xe & 0x3c0 | uVar6 >> 0x12 & 0x3c | uVar8 & 3) * 2 + 0x113731800
                 );
  uVar1 = *(ushort *)
           ((ulong)(uVar5 >> 10 & 0x3c0 | uVar6 >> 0xe & 0x3c | uVar9 & 3) * 2 + 0x113731800);
  uVar2 = *(ushort *)
           ((ulong)(uVar5 >> 6 & 0x3c0 | uVar6 >> 10 & 0x3c | uVar1 & 3) * 2 + 0x113731800);
  uVar10 = (uint)*(ushort *)
                  ((ulong)(uVar5 >> 2 & 0x3c0 | uVar6 >> 6 & 0x3c | uVar2 & 3) * 2 + 0x113731800);
  uVar11 = (uint)*(ushort *)
                  ((ulong)((uVar5 & 0xf0) << 2 | uVar6 >> 2 & 0x3c | uVar10 & 3) * 2 + 0x113731800);
  return (ulong)((uVar7 & 0x3fc) << 0x16 | uVar4 << 0x1c | (uVar8 & 0xfffc) << 0xe |
                 (uVar9 & 0xfffc) << 6 | (uint)(uVar1 >> 2)) << 0x21 |
         (ulong)((uVar10 & 0xfffc) << 0xe | (uint)(uVar2 >> 2) << 0x18 | (uVar11 & 0xfffc) << 6 |
                (uint)(*(ushort *)
                        ((ulong)((uVar5 & 0xf) << 6 | (uVar6 & 0xf) << 2 | uVar11 & 3) * 2 +
                        0x113731800) >> 2)) << 1 | 1;
}



/* Entry: 10917abc0; end: 10917ac27;  */

void FUN_10917abc0(double *param_1)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_48;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  double dStack_28;
  
  dVar4 = *param_1;
  dStack_30 = param_1[1];
  dStack_28 = dVar4;
  _cos();
  dVar1 = dStack_30;
  _cos();
  dVar2 = dStack_30;
  _sin();
  dVar3 = dStack_28;
  _sin();
  dStack_48 = dVar4 * dVar1;
  dStack_40 = dVar4 * dVar2;
  dStack_38 = dVar3;
  FUN_10917aa58(&dStack_48);
  return;
}



/* Entry: 10917ac28; end: 10917adb7;  */

ulong FUN_10917ac28(ulong *param_1,int *param_2,int *param_3,uint *param_4)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  
  _pthread_once(0x1132cb770,FUN_10917b534);
  uVar10 = *param_1;
  uVar1 = *(ushort *)((uVar10 >> 0x37 & 0x3c | uVar10 >> 0x3d & 1) * 2 + 0x113732000);
  uVar8 = (uint)(uVar10 >> 0x20);
  uVar2 = *(ushort *)((ulong)(uVar8 >> 0xf & 0x3fc | uVar1 & 3) * 2 + 0x113732000);
  uVar3 = *(ushort *)((ulong)(uVar8 >> 7 & 0x3fc | uVar2 & 3) * 2 + 0x113732000);
  uVar4 = *(ushort *)((ulong)((uint)(uVar10 >> 0x1f) & 0x3fc | uVar3 & 3) * 2 + 0x113732000);
  uVar5 = *(ushort *)((ulong)((uint)(uVar10 >> 0x17) & 0x3fc | uVar4 & 3) * 2 + 0x113732000);
  uVar9 = (uint)uVar10;
  uVar6 = *(ushort *)((ulong)(uVar5 & 3 | (uVar9 >> 0x11 & 0xff) << 2) * 2 + 0x113732000);
  uVar7 = *(ushort *)((ulong)(uVar6 & 3 | (uVar9 >> 9 & 0xff) << 2) * 2 + 0x113732000);
  uVar8 = (uint)(uVar7 >> 2);
  uVar7 = *(ushort *)((ulong)((uVar9 & 0x1fe) << 1 | uVar7 & 3) * 2 + 0x113732000);
  *param_2 = (uVar2 & 0x3fc0) * 0x40000 + (uint)(uVar1 >> 6) * 0x10000000 +
             (uVar3 & 0xffc0) * 0x4000 + (uVar4 & 0xffc0) * 0x400 + (uVar5 & 0xffc0) * 0x40 +
             (uVar6 & 0xffc0) * 4 + (uVar8 & 0x3ff0) + (uint)(uVar7 >> 6);
  *param_3 = ((uVar1 & 0x3c) << 0x1a | (uVar2 >> 2 & 0xf) << 0x18 | (uVar3 >> 2 & 0xf) << 0x14 |
              (uVar4 >> 2 & 0xf) << 0x10 | (uVar5 >> 2 & 0xf) << 0xc | (uVar6 >> 2 & 0xf) << 8 |
             (uVar8 & 0xf) << 4) + (uVar7 >> 2 & 0xf);
  if (param_4 != (uint *)0x0) {
    *param_4 = uVar7 & 3 ^ (uint)((-uVar10 & uVar10 & 0x1111111111111110) != 0);
  }
  return uVar10 >> 0x3d;
}



/* Entry: 10917adb8; end: 10917afbb;  */

void FUN_10917adb8(double *param_1,ulong *param_2)

{
  int iVar1;
  int iVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  int iStack_28;
  uint uStack_24;
  
  iVar2 = (int)param_2;
  FUN_10917ac28(iVar2,&uStack_24,&iStack_28,0);
  iVar1 = ((uStack_24 ^ (uint)*param_2 >> 2) & 1) << 1;
  if ((*param_2 & 1) != 0) {
    iVar1 = 1;
  }
  dVar3 = (double)(int)(iVar1 + uStack_24 * 2) / 2147483648.0;
  dVar5 = 1.0;
  dVar4 = (1.0 - dVar3) * (1.0 - dVar3) * -4.0 + 1.0;
  if (0.5 <= dVar3) {
    dVar4 = dVar3 * dVar3 * 4.0 + -1.0;
  }
  dVar4 = dVar4 * 0.3333333333333333;
  dVar6 = (double)(iVar1 + iStack_28 * 2) / 2147483648.0;
  dVar3 = (1.0 - dVar6) * (1.0 - dVar6) * -4.0 + 1.0;
  if (0.5 <= dVar6) {
    dVar3 = dVar6 * dVar6 * 4.0 + -1.0;
  }
  dVar3 = dVar3 * 0.3333333333333333;
  if (iVar2 < 2) {
    if (iVar2 == 0) goto LAB_10917aedc;
    if (iVar2 == 1) {
      dVar5 = -dVar4;
      dVar4 = 1.0;
      goto LAB_10917aedc;
    }
  }
  else {
    if (iVar2 == 2) {
      dVar5 = -dVar4;
      dVar4 = -dVar3;
      dVar3 = 1.0;
      goto LAB_10917aedc;
    }
    if (iVar2 == 3) {
      dVar6 = -dVar3;
      dVar3 = -dVar4;
      dVar5 = -1.0;
      dVar4 = dVar6;
      goto LAB_10917aedc;
    }
    if (iVar2 == 4) {
      dVar6 = -dVar4;
      dVar4 = -1.0;
      dVar5 = dVar3;
      dVar3 = dVar6;
      goto LAB_10917aedc;
    }
  }
  dVar5 = dVar3;
  dVar3 = -1.0;
LAB_10917aedc:
  *param_1 = dVar5;
  param_1[1] = dVar4;
  param_1[2] = dVar3;
  return;
}



/* Entry: 10917afbc; end: 10917b1a3;  */

ulong FUN_10917afbc(int param_1,uint param_2,uint param_3)

{
  ushort uVar1;
  ushort uVar2;
  double dVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  
  if (0x7fffffff < param_2) {
    param_2 = 0xffffffff;
  }
  if (0x3fffffff < (int)param_2) {
    param_2 = 0x40000000;
  }
  if (0x7fffffff < param_3) {
    param_3 = 0xffffffff;
  }
  if (0x3fffffff < (int)param_3) {
    param_3 = 0x40000000;
  }
  dVar12 = (double)(int)(param_2 * 2 + -0x3fffffff) / 1073741824.0;
  dVar14 = (double)(int)(param_3 * 2 + -0x3fffffff) / 1073741824.0;
  if (param_1 < 2) {
    dVar13 = 1.0;
    dVar15 = dVar14;
    if (param_1 != 0) {
      if (param_1 == 1) {
        dVar13 = -dVar12;
        dVar12 = 1.0;
      }
      else {
LAB_10917b064:
        dVar15 = -1.0;
        dVar13 = dVar14;
      }
    }
  }
  else if (param_1 == 2) {
    dVar13 = -dVar12;
    dVar12 = -dVar14;
    dVar15 = 1.0;
  }
  else if (param_1 == 3) {
    dVar15 = -dVar12;
    dVar13 = -1.0;
    dVar12 = -dVar14;
  }
  else {
    if (param_1 != 4) goto LAB_10917b064;
    dVar15 = -dVar12;
    dVar12 = -1.0;
    dVar13 = dVar14;
  }
  uVar4 = 2;
  uVar5 = 0;
  if (ABS(dVar13) <= ABS(dVar15)) {
    uVar5 = uVar4;
  }
  if (ABS(dVar15) < ABS(dVar12)) {
    uVar4 = 1;
  }
  if (ABS(dVar13) <= ABS(dVar12)) {
    uVar5 = uVar4;
  }
  uVar4 = uVar5 + 3;
  if (0.0 <= *(double *)(&stack0xffffffffffffffe8 + (ulong)uVar5 * 8)) {
    uVar4 = uVar5;
  }
  if (uVar4 < 2) {
    if (uVar4 == 0) {
      dVar14 = dVar12 / dVar13;
      dVar13 = dVar15 / dVar13;
      goto LAB_10917b138;
    }
    dVar3 = dVar13;
    dVar14 = dVar12;
    if (uVar4 == 1) {
      dVar14 = -dVar13;
      dVar13 = dVar15;
LAB_10917b0f8:
      dVar14 = dVar14 / dVar12;
      dVar13 = dVar13 / dVar12;
      goto LAB_10917b138;
    }
  }
  else {
    dVar3 = dVar12;
    dVar14 = dVar13;
    if (uVar4 != 2) {
      if (uVar4 == 3) {
        dVar14 = dVar15 / dVar13;
        dVar13 = dVar12 / dVar13;
        goto LAB_10917b138;
      }
      dVar3 = dVar13;
      dVar14 = dVar12;
      if (uVar4 == 4) {
        dVar13 = -dVar13;
        dVar14 = dVar15;
        goto LAB_10917b0f8;
      }
    }
  }
  dVar14 = -dVar14 / dVar15;
  dVar13 = -dVar3 / dVar15;
LAB_10917b138:
  dVar12 = (dVar14 + 1.0) * 0.5 * 1073741824.0 + -0.5;
  dVar14 = -0.5;
  if (0.0 <= dVar12) {
    dVar14 = 0.5;
  }
  uVar5 = (uint)(dVar12 + dVar14);
  uVar5 = uVar5 & ((int)uVar5 >> 0x1f ^ 0xffffffffU);
  if (0x3ffffffe < (int)uVar5) {
    uVar5 = 0x3fffffff;
  }
  dVar12 = (dVar13 + 1.0) * 0.5 * 1073741824.0 + -0.5;
  dVar14 = -0.5;
  if (0.0 <= dVar12) {
    dVar14 = 0.5;
  }
  uVar6 = (uint)(dVar12 + dVar14);
  uVar6 = uVar6 & ((int)uVar6 >> 0x1f ^ 0xffffffffU);
  if (0x3ffffffe < (int)uVar6) {
    uVar6 = 0x3fffffff;
  }
  _pthread_once(0x1132cb770,FUN_10917b534);
  uVar7 = (uint)*(ushort *)
                 ((ulong)(uVar4 & 1 | (uVar5 >> 0x1c) << 6 | (uVar6 >> 0x1c) << 2) * 2 + 0x113731800
                 );
  uVar8 = (uint)*(ushort *)
                 ((ulong)(uVar5 >> 0x12 & 0x3c0 | uVar6 >> 0x16 & 0x3c | uVar7 & 3) * 2 +
                 0x113731800);
  uVar9 = (uint)*(ushort *)
                 ((ulong)(uVar5 >> 0xe & 0x3c0 | uVar6 >> 0x12 & 0x3c | uVar8 & 3) * 2 + 0x113731800
                 );
  uVar1 = *(ushort *)
           ((ulong)(uVar5 >> 10 & 0x3c0 | uVar6 >> 0xe & 0x3c | uVar9 & 3) * 2 + 0x113731800);
  uVar2 = *(ushort *)
           ((ulong)(uVar5 >> 6 & 0x3c0 | uVar6 >> 10 & 0x3c | uVar1 & 3) * 2 + 0x113731800);
  uVar10 = (uint)*(ushort *)
                  ((ulong)(uVar5 >> 2 & 0x3c0 | uVar6 >> 6 & 0x3c | uVar2 & 3) * 2 + 0x113731800);
  uVar11 = (uint)*(ushort *)
                  ((ulong)((uVar5 & 0xf0) << 2 | uVar6 >> 2 & 0x3c | uVar10 & 3) * 2 + 0x113731800);
  return (ulong)((uVar7 & 0x3fc) << 0x16 | uVar4 << 0x1c | (uVar8 & 0xfffc) << 0xe |
                 (uVar9 & 0xfffc) << 6 | (uint)(uVar1 >> 2)) << 0x21 |
         (ulong)((uVar10 & 0xfffc) << 0xe | (uint)(uVar2 >> 2) << 0x18 | (uVar11 & 0xfffc) << 6 |
                (uint)(*(ushort *)
                        ((ulong)((uVar5 & 0xf) << 6 | (uVar6 & 0xf) << 2 | uVar11 & 3) * 2 +
                        0x113731800) >> 2)) << 1 | 1;
}



/* Entry: 10917b1a4; end: 10917b2d7;  */

void FUN_10917b1a4(ulong param_1,ulong *param_2)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  int iStack_58;
  int iStack_54;
  
  uVar2 = param_1;
  func_0x00010917a700();
  iVar1 = 1 << (ulong)(0x1eU - (int)uVar2 & 0x1f);
  FUN_10917ac28(param_1,&iStack_54,&iStack_58,0);
  uVar3 = param_1;
  if (iStack_58 - iVar1 < 0) {
    FUN_10917afbc();
  }
  else {
    FUN_10917a91c();
  }
  uVar4 = 1L << ((ulong)((int)uVar2 * -2 + 0x3c) & 0x3f);
  uVar5 = -uVar4;
  *param_2 = uVar3 & uVar5 | uVar4;
  uVar2 = param_1;
  if (iStack_54 + iVar1 < 0x40000000) {
    FUN_10917a91c();
  }
  else {
    FUN_10917afbc(param_1,iStack_54 + iVar1,iStack_58);
  }
  param_2[1] = uVar2 & uVar5 | uVar4;
  uVar2 = param_1;
  if (iStack_58 + iVar1 < 0x40000000) {
    FUN_10917a91c();
  }
  else {
    FUN_10917afbc(param_1,iStack_54);
  }
  param_2[2] = uVar2 & uVar5 | uVar4;
  if (iStack_54 - iVar1 < 0) {
    FUN_10917afbc(param_1,iStack_54 - iVar1,iStack_58);
  }
  else {
    FUN_10917a91c();
  }
  param_2[3] = param_1 & uVar5 | uVar4;
  return;
}



/* Entry: 10917b2d8; end: 10917b473;  */

void FUN_10917b2d8(ulong *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uStack_70;
  uint uStack_68;
  uint uStack_64;
  
  puVar8 = param_1;
  FUN_10917ac28(param_1,&uStack_64,&uStack_68,0);
  uVar3 = 1 << (ulong)(0x1dU - param_2 & 0x1f);
  iVar4 = 2 << (ulong)(0x1dU - param_2 & 0x1f);
  bVar6 = (uStack_64 & uVar3) != 0;
  bVar5 = iVar4 <= (int)uStack_64;
  if (bVar6) {
    bVar5 = (int)(uStack_64 + iVar4) < 0x40000000;
  }
  iVar1 = -iVar4;
  if (bVar6) {
    iVar1 = iVar4;
  }
  bVar7 = (uStack_68 & uVar3) != 0;
  bVar6 = iVar4 <= (int)uStack_68;
  if (bVar7) {
    bVar6 = (int)(uStack_68 + iVar4) < 0x40000000;
  }
  iVar2 = -iVar4;
  if (bVar7) {
    iVar2 = iVar4;
  }
  uVar10 = 1L << ((ulong)(param_2 * -2 + 0x3c) & 0x3f);
  uVar11 = -uVar10;
  uStack_70 = *param_1 & uVar11 | uVar10;
  FUN_10917b474(param_3,&uStack_70);
  puVar9 = puVar8;
  if (bVar5) {
    FUN_10917a91c();
  }
  else {
    FUN_10917afbc(puVar8,iVar1 + uStack_64,uStack_68);
  }
  uStack_70 = (ulong)puVar9 & uVar11 | uVar10;
  FUN_10917b474(param_3,&uStack_70);
  puVar9 = puVar8;
  if (bVar6) {
    FUN_10917a91c();
  }
  else {
    FUN_10917afbc(puVar8,uStack_64,iVar2 + uStack_68);
  }
  uStack_70 = (ulong)puVar9 & uVar11 | uVar10;
  FUN_10917b474(param_3,&uStack_70);
  if (bVar5 || bVar6) {
    if ((bool)(bVar5 & bVar6)) {
      FUN_10917a91c();
    }
    else {
      FUN_10917afbc(puVar8,iVar1 + uStack_64,iVar2 + uStack_68);
    }
    uStack_70 = (ulong)puVar8 & uVar11 | uVar10;
    FUN_10917b474(param_3,&uStack_70);
  }
  return;
}



/* Entry: 10917b474; end: 10917b533;  */

/* WARNING: Removing unreachable block (ram,0x00010917b5e4) */

void FUN_10917b474(long *param_1,undefined8 *param_2)

{
  int iVar1;
  uint uVar2;
  short sVar3;
  ulong *puVar4;
  undefined8 in_x6;
  undefined8 in_x7;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  int iVar13;
  uint uVar14;
  
  puVar4 = (ulong *)(param_1 + 2);
  puVar10 = (undefined8 *)param_1[1];
  if (puVar10 < (undefined8 *)*puVar4) {
    puVar12 = puVar10 + 1;
    *puVar10 = *param_2;
  }
  else {
    lVar11 = (long)puVar10 - *param_1;
    uVar7 = (lVar11 >> 3) + 1;
    if (uVar7 >> 0x3d != 0) {
      FUN_10917b6f4();
      FUN_10917b5b0(0,0,0,0,0,0,in_x6,in_x7,&stack0xfffffffffffffff0,FUN_10917b534);
      FUN_10917b5b0(0,0,0,1,0,1);
      FUN_10917b5b0(0,0,0,2,0,2);
      uVar7 = 3;
      uVar14 = 0;
      uVar9 = 0;
      iVar13 = 0;
      iVar1 = 1;
      do {
        uVar9 = uVar9 << 1;
        lVar11 = uVar7 * 0x10;
        FUN_10917b5b0(iVar1,((int)*(uint *)(&UNK_10dfba070 + lVar11) >> 1) + iVar13 * 2,
                      uVar9 | *(uint *)(&UNK_10dfba070 + lVar11) & 1,3,uVar14 << 2,(uint)uVar7 ^ 1);
        FUN_10917b5b0(iVar1,((int)*(uint *)(&UNK_10dfba074 + lVar11) >> 1) + iVar13 * 2,
                      uVar9 | *(uint *)(&UNK_10dfba074 + lVar11) & 1,3,uVar14 << 2 | 1,uVar7);
        FUN_10917b5b0(iVar1,((int)*(uint *)(&UNK_10dfba078 + lVar11) >> 1) + iVar13 * 2,
                      uVar9 | *(uint *)(&UNK_10dfba078 + lVar11) & 1,3,uVar14 << 2 | 2,uVar7);
        iVar13 = ((int)*(uint *)(&UNK_10dfba07c + lVar11) >> 1) + iVar13 * 2;
        uVar9 = uVar9 | *(uint *)(&UNK_10dfba07c + lVar11) & 1;
        uVar14 = uVar14 << 2 | 3;
        uVar2 = (uint)uVar7 ^ 3;
        uVar7 = (ulong)uVar2;
        iVar1 = iVar1 + 1;
      } while (iVar1 != 5);
      sVar3 = (short)uVar2;
      uVar9 = iVar13 * 0x40 + uVar9 * 4;
      *(short *)((long)(int)(uVar9 | 3) * 2 + 0x113731800) = sVar3 + (short)uVar14 * 4;
      *(short *)((long)(int)(uVar14 << 2 | 3) * 2 + 0x113732000) = (short)uVar9 + sVar3;
      return;
    }
    uVar5 = (long)*puVar4 - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar7) {
      uVar6 = uVar7;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_10917b708();
    puVar10 = (undefined8 *)((long)puVar4 + lVar11);
    lVar8 = (long)puVar10 - (param_1[1] - *param_1);
    puVar12 = puVar10 + 1;
    *puVar10 = *param_2;
    _memcpy(lVar8);
    lVar11 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar12;
    param_1[2] = (long)(puVar4 + uVar6);
    if (lVar11 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar12;
  return;
}



/* Entry: 10917b534; end: 10917b5af;  */

/* WARNING: Removing unreachable block (ram,0x00010917b5e4) */

void FUN_10917b534(void)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  short sVar4;
  ulong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  
  FUN_10917b5b0(0,0,0,0,0,0);
  FUN_10917b5b0(0,0,0,1,0,1);
  FUN_10917b5b0(0,0,0,2,0,2);
  uVar5 = 3;
  uVar8 = 0;
  uVar6 = 0;
  iVar7 = 0;
  iVar2 = 1;
  do {
    uVar6 = uVar6 << 1;
    lVar1 = uVar5 * 0x10;
    FUN_10917b5b0(iVar2,((int)*(uint *)(&UNK_10dfba070 + lVar1) >> 1) + iVar7 * 2,
                  uVar6 | *(uint *)(&UNK_10dfba070 + lVar1) & 1,3,uVar8 << 2,(uint)uVar5 ^ 1);
    FUN_10917b5b0(iVar2,((int)*(uint *)(&UNK_10dfba074 + lVar1) >> 1) + iVar7 * 2,
                  uVar6 | *(uint *)(&UNK_10dfba074 + lVar1) & 1,3,uVar8 << 2 | 1,uVar5);
    FUN_10917b5b0(iVar2,((int)*(uint *)(&UNK_10dfba078 + lVar1) >> 1) + iVar7 * 2,
                  uVar6 | *(uint *)(&UNK_10dfba078 + lVar1) & 1,3,uVar8 << 2 | 2,uVar5);
    iVar7 = ((int)*(uint *)(&UNK_10dfba07c + lVar1) >> 1) + iVar7 * 2;
    uVar6 = uVar6 | *(uint *)(&UNK_10dfba07c + lVar1) & 1;
    uVar8 = uVar8 << 2 | 3;
    uVar3 = (uint)uVar5 ^ 3;
    uVar5 = (ulong)uVar3;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 5);
  sVar4 = (short)uVar3;
  uVar6 = iVar7 * 0x40 + uVar6 * 4;
  *(short *)((long)(int)(uVar6 | 3) * 2 + 0x113731800) = sVar4 + (short)uVar8 * 4;
  *(short *)((long)(int)(uVar8 << 2 | 3) * 2 + 0x113732000) = (short)uVar6 + sVar4;
  return;
}



/* Entry: 10917b5b0; end: 10917b6f3;  */

void FUN_10917b5b0(int param_1,int param_2,uint param_3,undefined8 param_4,uint param_5,
                  ulong param_6)

{
  long lVar1;
  uint uVar2;
  
  if (param_1 != 4) {
    param_1 = param_1 + 1;
    do {
      param_3 = param_3 << 1;
      lVar1 = (param_6 & 0xffffffff) * 0x10;
      FUN_10917b5b0(param_1,((int)*(uint *)(&UNK_10dfba070 + lVar1) >> 1) + param_2 * 2,
                    param_3 | *(uint *)(&UNK_10dfba070 + lVar1) & 1,param_4,param_5 << 2,
                    (uint)param_6 ^ 1);
      FUN_10917b5b0(param_1,((int)*(uint *)(&UNK_10dfba074 + lVar1) >> 1) + param_2 * 2,
                    param_3 | *(uint *)(&UNK_10dfba074 + lVar1) & 1,param_4,param_5 << 2 | 1,param_6
                   );
      FUN_10917b5b0(param_1,((int)*(uint *)(&UNK_10dfba078 + lVar1) >> 1) + param_2 * 2,
                    param_3 | *(uint *)(&UNK_10dfba078 + lVar1) & 1,param_4,param_5 << 2 | 2,param_6
                   );
      param_2 = ((int)*(uint *)(&UNK_10dfba07c + lVar1) >> 1) + param_2 * 2;
      param_3 = param_3 | *(uint *)(&UNK_10dfba07c + lVar1) & 1;
      param_5 = param_5 << 2 | 3;
      param_6 = (ulong)((uint)param_6 ^ 3);
      param_1 = param_1 + 1;
    } while (param_1 != 5);
  }
  uVar2 = param_2 * 0x40 + param_3 * 4;
  *(short *)((long)(int)(uVar2 | (uint)param_4) * 2 + 0x113731800) =
       (short)param_6 + (short)param_5 * 4;
  *(short *)((long)(int)((uint)param_4 | param_5 << 2) * 2 + 0x113732000) =
       (short)uVar2 + (short)param_6;
  return;
}



/* Entry: 10917b6f4; end: 10917b707;  */

void FUN_10917b6f4(undefined8 param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong *puStack_88;
  ulong *puStack_80;
  undefined8 uStack_78;
  
  plVar2 = (long *)&UNK_10f55a348;
  func_0x000104bd47e8();
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  plVar3 = plVar2;
  (**(code **)(*plVar2 + 0x10))();
  if (0 < (int)plVar3) {
    iVar7 = 0;
    do {
      puStack_88 = (ulong *)0x0;
      puStack_80 = (ulong *)0x0;
      uStack_78 = 0;
      plVar3 = plVar2;
      (**(code **)(*plVar2 + 0x18))(plVar2,iVar7);
      plVar5 = plVar2;
      (**(code **)(*plVar2 + 0x20))(plVar2,iVar7);
      FUN_10917b8dc(plVar3,plVar5,1,&puStack_88);
      iVar1 = (int)plVar3;
      if ((int)plVar2[4] <= (int)plVar3) {
        iVar1 = (int)plVar2[4];
      }
      *(int *)(plVar2 + 4) = iVar1;
      puVar8 = puStack_88;
      if (puStack_88 != puStack_80) {
        do {
          uVar9 = *puVar8;
          puVar4 = (undefined8 *)0x28;
          __Znwm();
          *(ulong *)((long)puVar4 + 0x1c) = uVar9;
          *(int *)((long)puVar4 + 0x24) = iVar7;
          plVar5 = (long *)plVar2[2];
          plVar3 = plVar2 + 2;
          while (plVar6 = plVar3, plVar5 != (long *)0x0) {
            while (plVar3 = plVar5, *(ulong *)((long)plVar3 + 0x1c) <= uVar9) {
              plVar5 = (long *)plVar3[1];
              if ((long *)plVar3[1] == (long *)0x0) {
                plVar6 = plVar3 + 1;
                goto LAB_10917b82c;
              }
            }
            plVar5 = (long *)*plVar3;
          }
LAB_10917b82c:
          *puVar4 = 0;
          puVar4[1] = 0;
          puVar4[2] = plVar3;
          *plVar6 = (long)puVar4;
          if (*(long *)plVar2[1] != 0) {
            plVar2[1] = *(long *)plVar2[1];
          }
          func_0x000107c27be4(plVar2[2]);
          plVar2[3] = plVar2[3] + 1;
          puVar8 = puVar8 + 1;
        } while (puVar8 != puStack_80);
      }
      if (puStack_88 != (ulong *)0x0) {
        puStack_80 = puStack_88;
        __ZdlPv(puStack_88);
      }
      iVar7 = iVar7 + 1;
      plVar3 = plVar2;
      (**(code **)(*plVar2 + 0x10))();
    } while (iVar7 < (int)plVar3);
  }
  *(undefined1 *)((long)plVar2 + 0x24) = 1;
  return;
}



/* Entry: 10917b708; end: 10917b73b;  */

void FUN_10917b708(long *param_1,ulong param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puStack_78;
  ulong *puStack_70;
  undefined8 uStack_68;
  
  if (param_2 >> 0x3d == 0) {
    __Znwm(param_2 << 3);
    return;
  }
  func_0x000104bd35f4();
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if (0 < (int)plVar2) {
    iVar6 = 0;
    do {
      puStack_78 = (ulong *)0x0;
      puStack_70 = (ulong *)0x0;
      uStack_68 = 0;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,iVar6);
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x20))(param_1,iVar6);
      FUN_10917b8dc(plVar2,plVar4,1,&puStack_78);
      iVar1 = (int)plVar2;
      if ((int)param_1[4] <= (int)plVar2) {
        iVar1 = (int)param_1[4];
      }
      *(int *)(param_1 + 4) = iVar1;
      puVar7 = puStack_78;
      if (puStack_78 != puStack_70) {
        do {
          uVar8 = *puVar7;
          puVar3 = (undefined8 *)0x28;
          __Znwm();
          *(ulong *)((long)puVar3 + 0x1c) = uVar8;
          *(int *)((long)puVar3 + 0x24) = iVar6;
          plVar4 = (long *)param_1[2];
          plVar2 = param_1 + 2;
          while (plVar5 = plVar2, plVar4 != (long *)0x0) {
            while (plVar2 = plVar4, *(ulong *)((long)plVar2 + 0x1c) <= uVar8) {
              plVar4 = (long *)plVar2[1];
              if ((long *)plVar2[1] == (long *)0x0) {
                plVar5 = plVar2 + 1;
                goto LAB_10917b82c;
              }
            }
            plVar4 = (long *)*plVar2;
          }
LAB_10917b82c:
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = plVar2;
          *plVar5 = (long)puVar3;
          if (*(long *)param_1[1] != 0) {
            param_1[1] = *(long *)param_1[1];
          }
          func_0x000107c27be4(param_1[2]);
          param_1[3] = param_1[3] + 1;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puStack_70);
      }
      if (puStack_78 != (ulong *)0x0) {
        puStack_70 = puStack_78;
        __ZdlPv(puStack_78);
      }
      iVar6 = iVar6 + 1;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x10))();
    } while (iVar6 < (int)plVar2);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}



/* Entry: 10917b73c; end: 10917b8db;  */

void FUN_10917b73c(long *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  plVar2 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if (0 < (int)plVar2) {
    iVar6 = 0;
    do {
      puStack_58 = (ulong *)0x0;
      puStack_50 = (ulong *)0x0;
      uStack_48 = 0;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,iVar6);
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x20))(param_1,iVar6);
      FUN_10917b8dc(plVar2,plVar4,1,&puStack_58);
      iVar1 = (int)plVar2;
      if ((int)param_1[4] <= (int)plVar2) {
        iVar1 = (int)param_1[4];
      }
      *(int *)(param_1 + 4) = iVar1;
      puVar7 = puStack_58;
      if (puStack_58 != puStack_50) {
        do {
          uVar8 = *puVar7;
          puVar3 = (undefined8 *)0x28;
          __Znwm();
          *(ulong *)((long)puVar3 + 0x1c) = uVar8;
          *(int *)((long)puVar3 + 0x24) = iVar6;
          plVar4 = (long *)param_1[2];
          plVar2 = param_1 + 2;
          while (plVar5 = plVar2, plVar4 != (long *)0x0) {
            while (plVar2 = plVar4, *(ulong *)((long)plVar2 + 0x1c) <= uVar8) {
              plVar4 = (long *)plVar2[1];
              if ((long *)plVar2[1] == (long *)0x0) {
                plVar5 = plVar2 + 1;
                goto LAB_10917b82c;
              }
            }
            plVar4 = (long *)*plVar2;
          }
LAB_10917b82c:
          *puVar3 = 0;
          puVar3[1] = 0;
          puVar3[2] = plVar2;
          *plVar5 = (long)puVar3;
          if (*(long *)param_1[1] != 0) {
            param_1[1] = *(long *)param_1[1];
          }
          func_0x000107c27be4(param_1[2]);
          param_1[3] = param_1[3] + 1;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puStack_50);
      }
      if (puStack_58 != (ulong *)0x0) {
        puStack_50 = puStack_58;
        __ZdlPv(puStack_58);
      }
      iVar6 = iVar6 + 1;
      plVar2 = param_1;
      (**(code **)(*param_1 + 0x10))();
    } while (iVar6 < (int)plVar2);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}



/* Entry: 10917b8dc; end: 10917bcbb;  */

undefined8 *****
FUN_10917b8dc(double param_1,double ****param_2,double ****param_3,ulong param_4,undefined8 *param_5
             )

{
  int iVar1;
  double ****ppppdVar2;
  undefined8 *****pppppuVar3;
  undefined8 ****ppppuVar4;
  uint uVar5;
  ulong uVar6;
  double ****ppppdVar7;
  double ****ppppdVar8;
  double ****ppppdVar9;
  double dVar10;
  undefined1 auVar11 [16];
  double ***pppdVar12;
  double ***pppdVar13;
  double dVar14;
  double dVar15;
  double ***pppdVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  undefined8 ***pppuStack_c8;
  double dStack_c0;
  double dStack_b8;
  undefined8 ***pppuStack_b0;
  double dStack_a8;
  double dStack_a0;
  double ***pppdStack_98;
  double dStack_90;
  double dStack_88;
  undefined8 ***pppuStack_80;
  double dStack_78;
  double dStack_70;
  undefined8 ****ppppuStack_68;
  
  param_5[1] = *param_5;
  FUN_109177f90();
  if (param_1 * 1.02 <= 0.0) {
    if ((param_4 & 1) == 0) {
      uVar5 = 0x1e;
      goto LAB_10917bb54;
    }
LAB_10917bb40:
    ppppuStack_68 = (double ****)0x40000000000000;
    uVar5 = 0x1e;
  }
  else {
    _frexp(0.9428090415820635 / (param_1 * 1.02),&pppuStack_80);
    iVar1 = (int)pppuStack_80;
    if ((int)pppuStack_80 < 2) {
      iVar1 = 1;
    }
    if (0x1e < iVar1) {
      iVar1 = 0x1f;
    }
    uVar5 = iVar1 - 1;
    if ((param_4 & 1) == 0) {
LAB_10917bb54:
      ppppdVar7 = param_2;
      FUN_10917aa58();
      ppppdVar8 = param_3;
      FUN_10917aa58();
      if (((ulong)ppppdVar8 ^ (ulong)ppppdVar7) >> 0x3d == 0) {
        for (; ppppuStack_68 = ppppdVar7, ppppdVar7 != ppppdVar8;
            ppppdVar7 = (double ****)
                        ((ulong)ppppdVar7 & ((ulong)ppppdVar7 & -(long)ppppdVar7) * -4 |
                        ((ulong)ppppdVar7 & -(long)ppppdVar7) << 2)) {
          ppppdVar8 = (double ****)
                      ((ulong)ppppdVar8 & ((ulong)ppppdVar8 & -(long)ppppdVar8) * -4 |
                      ((ulong)ppppdVar8 & -(long)ppppdVar8) << 2);
        }
      }
      else {
        ppppuStack_68 = (double ****)0xffffffffffffffff;
      }
    }
    else {
      if (uVar5 == 0x1e) goto LAB_10917bb40;
      pppdVar12 = *param_2;
      pppdVar13 = param_2[1];
      pppdVar16 = param_2[2];
      dVar14 = ((double)*param_3 - (double)pppdVar12) * 0.01;
      dVar15 = ((double)param_3[1] - (double)pppdVar13) * 0.01;
      dVar17 = ((double)param_3[2] - (double)pppdVar16) * 0.01;
      dVar18 = -((double)pppdVar13 * dVar17) + (double)pppdVar16 * dVar15;
      dVar19 = -((double)pppdVar16 * dVar14) + (double)pppdVar12 * dVar17;
      dVar20 = -((double)pppdVar12 * dVar15) + (double)pppdVar13 * dVar14;
      dVar21 = dVar19 * dVar19 + dVar18 * dVar18 + dVar20 * dVar20;
      dVar22 = SQRT(dVar21);
      dVar10 = 1.0 / dVar22;
      if (dVar21 == 0.0) {
        dVar10 = dVar22;
      }
      dVar21 = param_1 * dVar18 * dVar10 * 0.01;
      dVar19 = param_1 * dVar19 * dVar10 * 0.01;
      dVar18 = param_1 * dVar20 * dVar10 * 0.01;
      dVar10 = (double)*param_3 + dVar14;
      dStack_c0 = (double)param_3[1] + dVar15;
      dStack_b8 = (double)param_3[2] + dVar17;
      pppuStack_80 = (undefined8 ***)(((double)pppdVar12 - dVar14) - dVar21);
      dStack_78 = ((double)pppdVar13 - dVar15) - dVar19;
      dStack_70 = ((double)pppdVar16 - dVar17) - dVar18;
      pppdStack_98 = (double ***)(((double)pppdVar12 - dVar14) + dVar21);
      dStack_90 = ((double)pppdVar13 - dVar15) + dVar19;
      dStack_88 = ((double)pppdVar16 - dVar17) + dVar18;
      pppuStack_b0 = (undefined8 ***)(dVar10 - dVar21);
      dStack_a8 = dStack_c0 - dVar19;
      dStack_a0 = dStack_b8 - dVar18;
      pppuStack_c8 = (undefined8 ***)(dVar10 + dVar21);
      dStack_c0 = dStack_c0 + dVar19;
      dStack_b8 = dStack_b8 + dVar18;
      ppppdVar7 = (double ****)&pppuStack_80;
      FUN_10917aa58();
      ppppdVar8 = &pppdStack_98;
      FUN_10917aa58();
      ppppdVar9 = (double ****)&pppuStack_b0;
      FUN_10917aa58();
      ppppdVar2 = (double ****)&pppuStack_c8;
      FUN_10917aa58();
      uVar6 = (ulong)ppppdVar7 >> 0x3d;
      ppppuStack_68 = (double ****)0xffffffffffffffff;
      if ((((uVar6 == (ulong)ppppdVar8 >> 0x3d) && (uVar6 == (ulong)ppppdVar9 >> 0x3d)) &&
          (uVar6 == (ulong)ppppdVar2 >> 0x3d)) &&
         (((ppppdVar7 != ppppdVar8 || (ppppdVar7 != ppppdVar9)) ||
          (ppppuStack_68 = ppppdVar7, ppppdVar7 != ppppdVar2)))) {
        do {
          do {
            ppppdVar7 = (double ****)
                        ((ulong)ppppdVar7 & ((ulong)ppppdVar7 & -(long)ppppdVar7) * -4 |
                        ((ulong)ppppdVar7 & -(long)ppppdVar7) << 2);
            ppppdVar8 = (double ****)
                        ((ulong)ppppdVar8 & ((ulong)ppppdVar8 & -(long)ppppdVar8) * -4 |
                        ((ulong)ppppdVar8 & -(long)ppppdVar8) << 2);
            ppppdVar9 = (double ****)
                        ((ulong)ppppdVar9 & ((ulong)ppppdVar9 & -(long)ppppdVar9) * -4 |
                        ((ulong)ppppdVar9 & -(long)ppppdVar9) << 2);
            ppppdVar2 = (double ****)
                        ((ulong)ppppdVar2 & ((ulong)ppppdVar2 & -(long)ppppdVar2) * -4 |
                        ((ulong)ppppdVar2 & -(long)ppppdVar2) << 2);
          } while (ppppdVar7 != ppppdVar8);
        } while ((ppppdVar7 != ppppdVar9) || (ppppuStack_68 = ppppdVar7, ppppdVar7 != ppppdVar2));
      }
    }
    if ((double ****)ppppuStack_68 == (double ****)0xffffffffffffffff) {
      if (uVar5 == 0) {
        uVar6 = 0x1000000000000000;
        ppppuStack_68 = (undefined8 ****)0xffffffffffffffff;
        do {
          FUN_10917c418(param_5,uVar6);
          uVar6 = uVar6 + (uVar6 & -uVar6) * 2;
        } while (uVar6 != 0xd000000000000000);
        return (undefined8 *****)0x0;
      }
      goto LAB_10917bbe4;
    }
  }
  ppppuVar4 = ppppuStack_68;
  pppppuVar3 = &ppppuStack_68;
  func_0x00010917a700();
  if ((int)(uVar5 - 2) <= (int)pppppuVar3) {
    FUN_10917c418(param_5,ppppuVar4);
    return pppppuVar3;
  }
LAB_10917bbe4:
  dStack_70 = ((double)param_2[2] + (double)param_3[2]) * 0.5;
  auVar11 = NEON_fmov(0x3fe0000000000000,8);
  dVar14 = ((double)*param_2 + (double)*param_3) * auVar11._0_8_;
  dStack_78 = ((double)param_2[1] + (double)param_3[1]) * auVar11._8_8_;
  dVar15 = dStack_78 * dStack_78 + dVar14 * dVar14 + dStack_70 * dStack_70;
  dVar17 = SQRT(dVar15);
  dVar10 = 1.0 / dVar17;
  if (dVar15 == 0.0) {
    dVar10 = dVar17;
  }
  pppuStack_80 = (undefined8 ***)(dVar14 * dVar10);
  dStack_78 = dStack_78 * dVar10;
  dStack_70 = dStack_70 * dVar10;
  if (0x1c < uVar5) {
    uVar5 = 0x1d;
  }
  ppppuVar4 = &pppuStack_80;
  FUN_10917aa58();
  pppdStack_98 = (double ***)ppppuVar4;
  FUN_10917b2d8(&pppdStack_98,(undefined8 *****)(ulong)uVar5,param_5);
  return (undefined8 *****)(ulong)uVar5;
}



/* Entry: 10917bcbc; end: 10917bd17;  */

void FUN_10917bcbc(long *param_1,int param_2)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  int iVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong *puStack_58;
  ulong *puStack_50;
  undefined8 uStack_48;
  
  if ((((*(byte *)((long)param_1 + 0x24) & 1) != 0) ||
      (plVar3 = param_1, (**(code **)(*param_1 + 0x10))(), (int)plVar3 < 0x65)) ||
     ((int)param_1[5] + param_2 < 0x1f)) {
    return;
  }
  plVar3 = param_1;
  (**(code **)(*param_1 + 0x10))();
  if (0 < (int)plVar3) {
    iVar6 = 0;
    do {
      puStack_58 = (ulong *)0x0;
      puStack_50 = (ulong *)0x0;
      uStack_48 = 0;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x18))(param_1,iVar6);
      plVar4 = param_1;
      (**(code **)(*param_1 + 0x20))(param_1,iVar6);
      FUN_10917b8dc(plVar3,plVar4,1,&puStack_58);
      iVar1 = (int)plVar3;
      if ((int)param_1[4] <= (int)plVar3) {
        iVar1 = (int)param_1[4];
      }
      *(int *)(param_1 + 4) = iVar1;
      puVar7 = puStack_58;
      if (puStack_58 != puStack_50) {
        do {
          uVar8 = *puVar7;
          puVar2 = (undefined8 *)0x28;
          __Znwm();
          *(ulong *)((long)puVar2 + 0x1c) = uVar8;
          *(int *)((long)puVar2 + 0x24) = iVar6;
          plVar4 = (long *)param_1[2];
          plVar3 = param_1 + 2;
          while (plVar5 = plVar3, plVar4 != (long *)0x0) {
            while (plVar3 = plVar4, *(ulong *)((long)plVar3 + 0x1c) <= uVar8) {
              plVar4 = (long *)plVar3[1];
              if ((long *)plVar3[1] == (long *)0x0) {
                plVar5 = plVar3 + 1;
                goto LAB_10917b82c;
              }
            }
            plVar4 = (long *)*plVar3;
          }
LAB_10917b82c:
          *puVar2 = 0;
          puVar2[1] = 0;
          puVar2[2] = plVar3;
          *plVar5 = (long)puVar2;
          if (*(long *)param_1[1] != 0) {
            param_1[1] = *(long *)param_1[1];
          }
          func_0x000107c27be4(param_1[2]);
          param_1[3] = param_1[3] + 1;
          puVar7 = puVar7 + 1;
        } while (puVar7 != puStack_50);
      }
      if (puStack_58 != (ulong *)0x0) {
        puStack_50 = puStack_58;
        __ZdlPv(puStack_58);
      }
      iVar6 = iVar6 + 1;
      plVar3 = param_1;
      (**(code **)(*param_1 + 0x10))();
    } while (iVar6 < (int)plVar3);
  }
  *(undefined1 *)((long)param_1 + 0x24) = 1;
  return;
}



/* Entry: 10917bd18; end: 10917c417;  */

void FUN_10917bd18(long param_1,double *param_2,double *param_3,undefined8 *param_4)

{
  long *plVar1;
  int *piVar2;
  int iVar3;
  byte bVar4;
  undefined8 **ppuVar5;
  long *plVar6;
  bool bVar7;
  uint uVar8;
  ulong *puVar9;
  long *plVar10;
  long *plVar11;
  undefined8 **ppuVar12;
  ulong uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  long lVar16;
  double *pdVar17;
  ulong uVar18;
  int *piVar19;
  int *piVar20;
  ulong uVar21;
  int iVar22;
  int *piVar23;
  long *plVar24;
  undefined8 *puVar25;
  long *plVar26;
  long *plVar27;
  long lVar28;
  long *plVar29;
  ulong *puVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  ulong *puStack_248;
  ulong *puStack_240;
  undefined8 uStack_238;
  undefined **ppuStack_230;
  undefined8 uStack_225;
  long *plStack_1f8;
  double dStack_1f0;
  double dStack_1e8;
  double dStack_1e0;
  undefined8 *puStack_1d0;
  undefined8 *puStack_1c8;
  undefined1 auStack_1c5 [5];
  long lStack_1c0;
  double adStack_f0 [13];
  long lStack_88;
  
  lStack_88 = *(long *)PTR____stack_chk_guard_11034bdc0;
  puStack_248 = (ulong *)0x0;
  puStack_240 = (ulong *)0x0;
  uStack_238 = 0;
  FUN_10917b8dc(param_2,param_3,0,&puStack_248);
  iVar22 = *(int *)(param_1 + 0x20);
  puStack_1c8 = (undefined8 *)0x0;
  lStack_1c0 = 0;
  puVar9 = puStack_248;
  puStack_1d0 = &stack0xfffffffffffffe38;
  if (puStack_248 != puStack_240) {
    do {
      puVar30 = puVar9;
      func_0x00010917a700();
      uVar8 = (uint)puVar30;
      while (iVar22 < (int)uVar8) {
        uVar8 = (int)puVar30 - 1;
        puVar30 = (ulong *)(ulong)uVar8;
        uVar13 = 1L << ((ulong)(uVar8 * -2 + 0x3c) & 0x3f);
        uVar13 = *puVar9 & -uVar13 | uVar13;
        puVar15 = &stack0xfffffffffffffe38;
        puVar14 = puStack_1c8;
        while (puVar25 = puVar15, puVar14 != (undefined8 *)0x0) {
          while (puVar25 = puVar14, *(ulong *)((long)puVar25 + 0x19) <= uVar13) {
            if (uVar13 <= *(ulong *)((long)puVar25 + 0x19)) goto LAB_10917be60;
            puVar14 = (undefined8 *)puVar25[1];
            if ((undefined8 *)puVar25[1] == (undefined8 *)0x0) {
              puVar15 = puVar25 + 1;
              goto LAB_10917be18;
            }
          }
          puVar15 = puVar25;
          puVar14 = (undefined8 *)*puVar25;
        }
LAB_10917be18:
        puVar14 = (undefined8 *)0x28;
        __Znwm();
        *(ulong *)((long)puVar14 + 0x19) = uVar13;
        *puVar14 = 0;
        puVar14[1] = 0;
        puVar14[2] = puVar25;
        *puVar15 = puVar14;
        if ((undefined8 *)*puStack_1d0 != (undefined8 *)0x0) {
          puStack_1d0 = (undefined8 *)*puStack_1d0;
        }
        func_0x000107c27be4(puStack_1c8);
        lStack_1c0 = lStack_1c0 + 1;
      }
LAB_10917be60:
      puVar9 = puVar9 + 1;
      puVar15 = puStack_1d0;
    } while (puVar9 != puStack_240);
    while ((undefined8 **)puVar15 != &stack0xfffffffffffffe38) {
      plVar10 = *(long **)((long)puVar15 + 0x19);
      plVar29 = (long *)(param_1 + 8);
      FUN_10917c5f4();
      while (plVar29 != plVar10) {
        FUN_108eb62c4(param_4,(long)plVar29 + 0x24);
        plVar27 = (long *)plVar29[1];
        plVar24 = plVar29;
        if ((long *)plVar29[1] == (long *)0x0) {
          do {
            plVar29 = (long *)plVar24[2];
            bVar7 = plVar24 != (long *)*plVar29;
            plVar24 = plVar29;
          } while (bVar7);
        }
        else {
          do {
            plVar29 = plVar27;
            plVar27 = (long *)*plVar29;
          } while ((long *)*plVar29 != (long *)0x0);
        }
      }
      puVar14 = (undefined8 *)puVar15[1];
      puVar25 = puVar15;
      if ((undefined8 *)puVar15[1] == (undefined8 *)0x0) {
        do {
          puVar15 = (undefined8 *)puVar25[2];
          bVar7 = puVar25 != (undefined8 *)*puVar15;
          puVar25 = puVar15;
        } while (bVar7);
      }
      else {
        do {
          puVar15 = puVar14;
          puVar14 = (undefined8 *)*puVar15;
        } while ((undefined8 *)*puVar15 != (undefined8 *)0x0);
      }
    }
  }
  func_0x00010917c5bc(puStack_1c8);
  if (puStack_248 != puStack_240) {
    plVar29 = (long *)(param_1 + 0x10);
    do {
      puStack_240 = puStack_240 + -1;
      plStack_1f8 = (long *)*puStack_240;
      plVar10 = (long *)*plVar29;
      if (plVar10 != (long *)0x0) {
        uVar13 = (long)plStack_1f8 - 1U & ((ulong)plStack_1f8 ^ 0xffffffffffffffff);
        plVar24 = plVar10;
        plVar27 = plVar29;
        do {
          lVar16 = 8;
          if ((long)plStack_1f8 - uVar13 <= *(ulong *)((long)plVar24 + 0x1c)) {
            lVar16 = 0;
            plVar27 = plVar24;
          }
          plVar24 = *(long **)((long)plVar24 + lVar16);
        } while (plVar24 != (long *)0x0);
        plVar24 = plVar29;
        do {
          lVar16 = 0;
          plVar1 = plVar10;
          if (*(ulong *)((long)plVar10 + 0x1c) <= uVar13 + (long)plStack_1f8) {
            lVar16 = 8;
            plVar1 = plVar24;
          }
          plVar10 = *(long **)((long)plVar10 + lVar16);
          plVar24 = plVar1;
        } while (plVar10 != (long *)0x0);
        if (plVar27 != plVar1) {
          iVar22 = 0;
          plVar10 = plVar27;
LAB_10917bfdc:
          FUN_108eb62c4(param_4,(long)plVar10 + 0x24);
          iVar22 = iVar22 + 1;
          if ((iVar22 != 0x10) || (((ulong)plStack_1f8 & 1) != 0)) goto LAB_10917bffc;
          param_4[1] = param_4[1] + -0x40;
          plVar10 = (long *)(param_1 + 8);
          plVar11 = plStack_1f8;
          FUN_10917c5f4();
          plVar24 = plVar10;
          while (plVar24 != plVar11) {
            FUN_108eb62c4(param_4,(long)plVar24 + 0x24);
            plVar6 = (long *)plVar24[1];
            plVar26 = plVar24;
            if ((long *)plVar24[1] == (long *)0x0) {
              do {
                plVar24 = (long *)plVar26[2];
                bVar7 = plVar26 != (long *)*plVar24;
                plVar26 = plVar24;
              } while (bVar7);
            }
            else {
              do {
                plVar24 = plVar6;
                plVar6 = (long *)*plVar24;
              } while ((long *)*plVar24 != (long *)0x0);
            }
          }
          if ((plVar27 != plVar10) || (plVar1 != plVar11)) {
            lVar16 = 0;
            do {
              *(undefined ***)((long)&puStack_1d0 + lVar16) = &PTR_DAT_110adec90;
              *(undefined8 *)(auStack_1c5 + lVar16) = 0;
              lVar16 = lVar16 + 0x38;
            } while (lVar16 != 0xe0);
            ppuStack_230 = &PTR_DAT_110adec90;
            uStack_225 = 0;
            FUN_109179b60(&ppuStack_230,&plStack_1f8);
            func_0x000109179ca0(&ppuStack_230,&puStack_1d0);
            lVar16 = 0;
            do {
              lVar28 = 0;
              adStack_f0[9] = 0.0;
              adStack_f0[8] = 0.0;
              adStack_f0[0xb] = 0.0;
              adStack_f0[10] = 0.0;
              adStack_f0[5] = 0.0;
              adStack_f0[4] = 0.0;
              adStack_f0[7] = 0.0;
              adStack_f0[6] = 0.0;
              adStack_f0[1] = 0.0;
              adStack_f0[0] = 0.0;
              adStack_f0[3] = 0.0;
              adStack_f0[2] = 0.0;
              pdVar17 = adStack_f0 + 2;
              do {
                FUN_109179894(&dStack_1f0,&puStack_1d0 + lVar16 * 7,lVar28);
                dVar32 = dStack_1e8 * dStack_1e8 + dStack_1f0 * dStack_1f0 + dStack_1e0 * dStack_1e0
                ;
                dVar33 = SQRT(dVar32);
                dVar31 = 1.0 / dVar33;
                if (dVar32 == 0.0) {
                  dVar31 = dVar33;
                }
                pdVar17[-1] = dStack_1e8 * dVar31;
                pdVar17[-2] = dStack_1f0 * dVar31;
                *pdVar17 = dStack_1e0 * dVar31;
                lVar28 = lVar28 + 1;
                pdVar17 = pdVar17 + 3;
              } while (lVar28 != 4);
              dVar32 = param_2[1];
              dVar31 = param_2[2];
              dVar33 = *param_2;
              dVar34 = *param_3;
              dVar35 = param_3[1];
              dVar36 = param_3[2];
              uVar13 = 1;
              pdVar17 = adStack_f0 + 2;
              do {
                dVar38 = pdVar17[-2];
                dVar40 = pdVar17[-1];
                dVar39 = *pdVar17;
                dVar37 = dVar35 * (-(dVar39 * dVar33) + dVar38 * dVar31) +
                         dVar34 * (-(dVar40 * dVar31) + dVar39 * dVar32) +
                         dVar36 * (-(dVar38 * dVar32) + dVar40 * dVar33);
                if (ABS(dVar37) < 1e-14) {
LAB_10917c2cc:
                  adStack_f0[0] = *(double *)(auStack_1c5 + lVar16 * 0x38);
                  FUN_10917b474(&puStack_248,adStack_f0);
                  break;
                }
                uVar21 = uVar13 & 3;
                dVar41 = adStack_f0[uVar21 * 3];
                dVar42 = adStack_f0[uVar21 * 3 + 1];
                dVar43 = adStack_f0[uVar21 * 3 + 2];
                dVar44 = dVar32 * (-(dVar43 * dVar34) + dVar41 * dVar36) +
                         dVar33 * (-(dVar42 * dVar36) + dVar43 * dVar35) +
                         dVar31 * (-(dVar41 * dVar35) + dVar42 * dVar34);
                if ((ABS(dVar44) < 1e-14) ||
                   ((0.0 <= dVar37 * dVar44 &&
                    (((dVar44 = (dVar38 * -dVar36 + dVar34 * dVar39) * dVar42 +
                                dVar41 * (dVar39 * -dVar35 + dVar36 * dVar40) +
                                dVar43 * (dVar40 * -dVar34 + dVar35 * dVar38), ABS(dVar44) < 1e-14
                      || (dVar38 = dVar40 * (dVar41 * -dVar31 + dVar33 * dVar43) +
                                   dVar38 * (dVar43 * -dVar32 + dVar31 * dVar42) +
                                   dVar39 * (dVar42 * -dVar33 + dVar32 * dVar41),
                         ABS(dVar38) < 1e-14)) ||
                     ((0.0 <= dVar37 * dVar44 && (0.0 <= dVar37 * dVar38)))))))) goto LAB_10917c2cc;
                pdVar17 = pdVar17 + 3;
                uVar13 = uVar13 + 1;
              } while (uVar13 != 5);
              lVar16 = lVar16 + 1;
            } while (lVar16 != 4);
          }
        }
      }
LAB_10917c2ec:
    } while (puStack_248 != puStack_240);
  }
  lVar16 = param_4[1];
  ppuVar12 = &puStack_1d0;
  __ZNSt3__16__sortIRNS_6__lessIiiEEPiEEvT0_S5_T_(*param_4,lVar16,ppuVar12);
  piVar23 = (int *)*param_4;
  piVar2 = (int *)param_4[1];
  if (piVar23 != piVar2) {
    piVar20 = piVar23 + 1;
    do {
      piVar19 = piVar20;
      if (piVar19 == piVar2) goto LAB_10917c380;
      piVar20 = piVar19 + 1;
    } while (piVar19[-1] != *piVar19);
    piVar23 = piVar19 + -1;
    iVar22 = piVar19[-1];
    for (; piVar20 != piVar2; piVar20 = piVar20 + 1) {
      iVar3 = *piVar20;
      if (iVar22 != iVar3) {
        piVar23 = piVar23 + 1;
        *piVar23 = iVar3;
      }
      iVar22 = iVar3;
    }
    piVar23 = piVar23 + 1;
  }
  if ((long)piVar2 - (long)piVar23 != 0) {
    lVar16 = (long)piVar23 + ((long)piVar2 - (long)piVar23);
    ppuVar5 = (undefined8 **)((long)piVar2 - lVar16);
    if (ppuVar5 != (undefined8 **)0x0) {
      ppuVar12 = ppuVar5;
      _memmove(piVar23,lVar16,ppuVar5);
    }
    param_4[1] = (long)piVar23 + (long)ppuVar5;
  }
LAB_10917c380:
  puVar9 = puStack_248;
  if (puStack_248 != (ulong *)0x0) {
    puStack_240 = puStack_248;
    __ZdlPv();
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_88) {
    return;
  }
  ___stack_chk_fail();
  if (puStack_248 != (ulong *)0x0) {
    puStack_240 = puStack_248;
    __ZdlPv();
  }
  __Unwind_Resume();
  puVar30 = puVar9 + 2;
  plVar29 = (long *)puVar9[1];
  if (plVar29 < (long *)*puVar30) {
    plVar10 = plVar29 + 1;
    *plVar29 = lVar16;
  }
  else {
    lVar28 = (long)plVar29 - *puVar9;
    uVar13 = (lVar28 >> 3) + 1;
    if (uVar13 >> 0x3d != 0) {
      FUN_10917b6f4();
      FUN_10917bcbc(*puVar30,1);
      plVar29 = (long *)*puVar30;
      bVar4 = *(byte *)((long)plVar29 + 0x24);
      *(byte *)(puVar30 + 1) = bVar4 ^ 1;
      if ((bVar4 & 1) == 0) {
        *(int *)(plVar29 + 5) = (int)plVar29[5] + 1;
        *(undefined4 *)((long)puVar30 + 0xc) = 0;
        (**(code **)(*plVar29 + 0x10))();
        *(int *)(puVar30 + 2) = (int)plVar29;
      }
      else {
        puVar9 = puVar30 + 3;
        puVar30[4] = *puVar9;
        FUN_10917bd18(plVar29,lVar16,ppuVar12,puVar9);
        *(undefined4 *)(puVar30 + 6) = 0;
        if ((undefined4 *)*puVar9 != (undefined4 *)puVar30[4]) {
          *(undefined4 *)((long)puVar30 + 0xc) = *(undefined4 *)*puVar9;
        }
      }
      return;
    }
    uVar18 = (long)*puVar30 - *puVar9;
    uVar21 = (long)uVar18 >> 2;
    if (uVar21 <= uVar13) {
      uVar21 = uVar13;
    }
    if (0x7ffffffffffffff7 < uVar18) {
      uVar21 = 0x1fffffffffffffff;
    }
    FUN_10917b708();
    plVar29 = (long *)((long)puVar30 + lVar28);
    uVar18 = (long)plVar29 - (puVar9[1] - *puVar9);
    plVar10 = plVar29 + 1;
    *plVar29 = lVar16;
    _memcpy(uVar18);
    uVar13 = *puVar9;
    *puVar9 = uVar18;
    puVar9[1] = (ulong)plVar10;
    puVar9[2] = (ulong)(puVar30 + uVar21);
    if (uVar13 != 0) {
      __ZdlPv();
    }
  }
  puVar9[1] = (ulong)plVar10;
  return;
LAB_10917bffc:
  plVar24 = (long *)plVar10[1];
  plVar11 = plVar10;
  if ((long *)plVar10[1] == (long *)0x0) {
    do {
      plVar10 = (long *)plVar11[2];
      bVar7 = plVar11 != (long *)*plVar10;
      plVar11 = plVar10;
    } while (bVar7);
  }
  else {
    do {
      plVar10 = plVar24;
      plVar24 = (long *)*plVar10;
    } while ((long *)*plVar10 != (long *)0x0);
  }
  if (plVar10 == plVar1) goto LAB_10917c2ec;
  goto LAB_10917bfdc;
}



/* Entry: 10917c418; end: 10917c4d7;  */

void FUN_10917c418(long *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long *plVar11;
  
  plVar3 = param_1 + 2;
  puVar9 = (undefined8 *)param_1[1];
  if (puVar9 < (undefined8 *)*plVar3) {
    puVar10 = puVar9 + 1;
    *puVar9 = param_2;
  }
  else {
    lVar7 = (long)puVar9 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_10917b6f4();
      FUN_10917bcbc(*plVar3,1);
      plVar4 = (long *)*plVar3;
      bVar2 = *(byte *)((long)plVar4 + 0x24);
      *(byte *)(plVar3 + 1) = bVar2 ^ 1;
      if ((bVar2 & 1) == 0) {
        *(int *)(plVar4 + 5) = (int)plVar4[5] + 1;
        *(undefined4 *)((long)plVar3 + 0xc) = 0;
        (**(code **)(*plVar4 + 0x10))();
        *(int *)(plVar3 + 2) = (int)plVar4;
      }
      else {
        plVar11 = plVar3 + 3;
        plVar3[4] = *plVar11;
        FUN_10917bd18(plVar4,param_2,param_3,plVar11);
        *(undefined4 *)(plVar3 + 6) = 0;
        if ((undefined4 *)*plVar11 != (undefined4 *)plVar3[4]) {
          *(undefined4 *)((long)plVar3 + 0xc) = *(undefined4 *)*plVar11;
        }
      }
      return;
    }
    uVar5 = *plVar3 - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_10917b708();
    puVar9 = (undefined8 *)((long)plVar3 + lVar7);
    lVar8 = (long)puVar9 - (param_1[1] - *param_1);
    puVar10 = puVar9 + 1;
    *puVar9 = param_2;
    _memcpy(lVar8);
    lVar7 = *param_1;
    *param_1 = lVar8;
    param_1[1] = (long)puVar10;
    param_1[2] = (long)(plVar3 + uVar6);
    if (lVar7 != 0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar10;
  return;
}



/* Entry: 10917c4d8; end: 10917c57b;  */

void FUN_10917c4d8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  long *plVar2;
  long *plVar3;
  
  FUN_10917bcbc(*param_1,1);
  plVar2 = (long *)*param_1;
  bVar1 = *(byte *)((long)plVar2 + 0x24);
  *(byte *)(param_1 + 1) = bVar1 ^ 1;
  if ((bVar1 & 1) == 0) {
    *(int *)(plVar2 + 5) = (int)plVar2[5] + 1;
    *(undefined4 *)((long)param_1 + 0xc) = 0;
    (**(code **)(*plVar2 + 0x10))();
    *(int *)(param_1 + 2) = (int)plVar2;
  }
  else {
    plVar3 = param_1 + 3;
    param_1[4] = *plVar3;
    FUN_10917bd18(plVar2,param_2,param_3,plVar3);
    *(undefined4 *)(param_1 + 6) = 0;
    if ((undefined4 *)*plVar3 != (undefined4 *)param_1[4]) {
      *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)*plVar3;
    }
  }
  return;
}



/* Entry: 10917c57c; end: 10917c5f3;  */

void FUN_10917c57c(undefined8 param_1,undefined8 *param_2)

{
  if (param_2 != (undefined8 *)0x0) {
    FUN_10917c57c(param_1,*param_2);
    FUN_10917c57c(param_1,param_2[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___ZdlPv_110352258)(param_2);
    return;
  }
  return;
}



/* Entry: 10917c5f4; end: 10917c687;  */

undefined1  [16] FUN_10917c5f4(long param_1,ulong param_2)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  undefined1 auVar6 [16];
  
  plVar2 = (long *)(param_1 + 8);
  plVar4 = (long *)*(long *)(param_1 + 8);
  do {
    plVar3 = plVar2;
    if (plVar4 == (long *)0x0) goto LAB_10917c62c;
    plVar5 = plVar4;
    if (*(ulong *)((long)plVar4 + 0x1c) <= param_2) {
      if (param_2 <= *(ulong *)((long)plVar4 + 0x1c)) {
        plVar2 = plVar4;
        for (plVar5 = (long *)*plVar4; plVar5 != (long *)0x0;
            plVar5 = *(long **)((long)plVar5 + lVar1)) {
          lVar1 = 8;
          if (param_2 <= *(ulong *)((long)plVar5 + 0x1c)) {
            lVar1 = 0;
            plVar2 = plVar5;
          }
        }
        for (plVar4 = (long *)plVar4[1]; plVar4 != (long *)0x0;
            plVar4 = *(long **)((long)plVar4 + lVar1)) {
          lVar1 = 0;
          plVar5 = plVar4;
          if (*(ulong *)((long)plVar4 + 0x1c) <= param_2) {
            lVar1 = 8;
            plVar5 = plVar3;
          }
          plVar3 = plVar5;
        }
LAB_10917c62c:
        auVar6._8_8_ = plVar3;
        auVar6._0_8_ = plVar2;
        return auVar6;
      }
      plVar5 = plVar4 + 1;
      plVar4 = plVar2;
    }
    plVar2 = plVar4;
    plVar4 = (long *)*plVar5;
  } while( true );
}



/* Entry: 10917c688; end: 10917c8b3;  */

void FUN_10917c688(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double *pdVar1;
  double *pdVar2;
  double *extraout_x8;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_128;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double adStack_50 [3];
  long lStack_38;
  
  pdVar1 = adStack_50;
  lStack_38 = *(long *)PTR____stack_chk_guard_11034bdc0;
  dVar4 = *param_1;
  dVar3 = *param_2;
  if (((dVar4 != dVar3) || (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) {
    dVar6 = *param_3;
    dVar5 = *param_4;
    if (((dVar6 != dVar5) || (param_3[1] != param_4[1])) || (param_3[2] != param_4[2])) {
      if (((dVar4 == dVar5) && (param_1[1] == param_4[1])) && (param_1[2] == param_4[2])) {
        FUN_109178580(adStack_50,param_1);
        param_4 = param_3;
        param_3 = param_2;
      }
      else if (((dVar3 == dVar6) && (param_2[1] == param_3[1])) && (param_2[2] == param_3[2])) {
        FUN_109178580(adStack_50,param_2);
        param_3 = param_1;
        param_1 = param_2;
      }
      else if (((dVar4 == dVar6) && (param_1[1] == param_3[1])) && (param_1[2] == param_3[2])) {
        FUN_109178580(adStack_50,param_1);
        param_3 = param_2;
      }
      else {
        if (((dVar3 != dVar5) || (param_2[1] != param_4[1])) || (param_2[2] != param_4[2])) {
          FUN_1091797b4(adStack_50,&UNK_10f55a34f,0x39);
          param_2 = (double *)&UNK_10f55a388;
          param_3 = (double *)0x2e;
          func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738);
          FUN_10917d224(adStack_50);
          goto LAB_10917c864;
        }
        FUN_109178580(adStack_50,param_2);
        param_4 = param_3;
        param_3 = param_1;
        param_1 = param_2;
      }
      FUN_109178fdc();
      param_2 = param_4;
      param_4 = param_1;
      goto LAB_10917c868;
    }
  }
LAB_10917c864:
  pdVar1 = (double *)0x0;
LAB_10917c868:
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_38) {
    return;
  }
  ___stack_chk_fail();
  FUN_10917d224(adStack_50);
  __Unwind_Resume();
  FUN_109178658(&dStack_f0);
  dVar3 = dStack_e8 * dStack_e8 + dStack_f0 * dStack_f0 + dStack_e0 * dStack_e0;
  dVar4 = SQRT(dVar3);
  dStack_c0 = 1.0 / dVar4;
  if (dVar3 == 0.0) {
    dStack_c0 = dVar4;
  }
  dStack_d0 = dStack_f0 * dStack_c0;
  dStack_c8 = dStack_e8 * dStack_c0;
  dStack_c0 = dStack_e0 * dStack_c0;
  FUN_109178658(&dStack_110,param_3,param_4);
  dVar3 = dStack_108 * dStack_108 + dStack_110 * dStack_110 + dStack_100 * dStack_100;
  dVar4 = SQRT(dVar3);
  dStack_e0 = 1.0 / dVar4;
  if (dVar3 == 0.0) {
    dStack_e0 = dVar4;
  }
  dStack_f0 = dStack_110 * dStack_e0;
  dStack_e8 = dStack_108 * dStack_e0;
  dStack_e0 = dStack_100 * dStack_e0;
  FUN_109178658(&dStack_128,&dStack_d0,&dStack_f0);
  dVar4 = dStack_120 * dStack_120 + dStack_128 * dStack_128 + dStack_118 * dStack_118;
  dVar5 = SQRT(dVar4);
  dVar3 = 1.0 / dVar5;
  if (dVar4 == 0.0) {
    dVar3 = dVar5;
  }
  dVar5 = dStack_128 * dVar3;
  dVar4 = dStack_120 * dVar3;
  dVar3 = dStack_118 * dVar3;
  if (dVar4 * (pdVar1[1] + param_2[1] + param_3[1] + param_4[1]) +
      (*pdVar1 + *param_2 + *param_3 + *param_4) * dVar5 +
      (pdVar1[2] + param_2[2] + param_3[2] + param_4[2]) * dVar3 < 0.0) {
    dVar5 = -dVar5;
    dVar4 = -dVar4;
    dVar3 = -dVar3;
  }
  pdVar2 = pdVar1;
  dStack_110 = dVar5;
  dStack_108 = dVar4;
  dStack_100 = dVar3;
  FUN_109178fdc(pdVar1,&dStack_110,param_2,&dStack_d0);
  if (((int)pdVar2 == 0) ||
     (pdVar2 = param_3, FUN_109178fdc(param_3,&dStack_110,param_4,&dStack_f0), (int)pdVar2 == 0)) {
    dStack_128 = 10.0;
    *extraout_x8 = dVar5;
    extraout_x8[1] = dVar4;
    extraout_x8[2] = dVar3;
    pdVar2 = param_3;
    FUN_109178fdc(param_3,pdVar1,param_4,&dStack_f0);
    if ((int)pdVar2 != 0) {
      FUN_10917cb44(&dStack_110,pdVar1,&dStack_128,extraout_x8);
    }
    pdVar2 = param_3;
    FUN_109178fdc(param_3,param_2,param_4,&dStack_f0);
    if ((int)pdVar2 != 0) {
      FUN_10917cb44(&dStack_110,param_2,&dStack_128,extraout_x8);
    }
    pdVar2 = pdVar1;
    FUN_109178fdc(pdVar1,param_3,param_2,&dStack_d0);
    if ((int)pdVar2 != 0) {
      FUN_10917cb44(&dStack_110,param_3,&dStack_128,extraout_x8);
    }
    FUN_109178fdc(pdVar1,param_4,param_2,&dStack_d0);
    if ((int)pdVar1 != 0) {
      FUN_10917cb44(&dStack_110,param_4,&dStack_128,extraout_x8);
    }
  }
  else {
    *extraout_x8 = dVar5;
    extraout_x8[1] = dVar4;
    extraout_x8[2] = dVar3;
  }
  return;
}



/* Entry: 10917c8b4; end: 10917cb43;  */

void FUN_10917c8b4(double *param_1,double *param_2,double *param_3,double *param_4,double *param_5)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_80;
  double dStack_78;
  double dStack_70;
  
  FUN_109178658(&dStack_a0);
  dVar2 = dStack_98 * dStack_98 + dStack_a0 * dStack_a0 + dStack_90 * dStack_90;
  dVar3 = SQRT(dVar2);
  dStack_70 = 1.0 / dVar3;
  if (dVar2 == 0.0) {
    dStack_70 = dVar3;
  }
  dStack_80 = dStack_a0 * dStack_70;
  dStack_78 = dStack_98 * dStack_70;
  dStack_70 = dStack_90 * dStack_70;
  FUN_109178658(&dStack_c0,param_4,param_5);
  dVar2 = dStack_b8 * dStack_b8 + dStack_c0 * dStack_c0 + dStack_b0 * dStack_b0;
  dVar3 = SQRT(dVar2);
  dStack_90 = 1.0 / dVar3;
  if (dVar2 == 0.0) {
    dStack_90 = dVar3;
  }
  dStack_a0 = dStack_c0 * dStack_90;
  dStack_98 = dStack_b8 * dStack_90;
  dStack_90 = dStack_b0 * dStack_90;
  FUN_109178658(&dStack_d8,&dStack_80,&dStack_a0);
  dVar3 = dStack_d0 * dStack_d0 + dStack_d8 * dStack_d8 + dStack_c8 * dStack_c8;
  dVar4 = SQRT(dVar3);
  dVar2 = 1.0 / dVar4;
  if (dVar3 == 0.0) {
    dVar2 = dVar4;
  }
  dVar4 = dStack_d8 * dVar2;
  dVar3 = dStack_d0 * dVar2;
  dVar2 = dStack_c8 * dVar2;
  if (dVar3 * (param_2[1] + param_3[1] + param_4[1] + param_5[1]) +
      (*param_2 + *param_3 + *param_4 + *param_5) * dVar4 +
      (param_2[2] + param_3[2] + param_4[2] + param_5[2]) * dVar2 < 0.0) {
    dVar4 = -dVar4;
    dVar3 = -dVar3;
    dVar2 = -dVar2;
  }
  pdVar1 = param_2;
  dStack_c0 = dVar4;
  dStack_b8 = dVar3;
  dStack_b0 = dVar2;
  FUN_109178fdc(param_2,&dStack_c0,param_3,&dStack_80);
  if (((int)pdVar1 == 0) ||
     (pdVar1 = param_4, FUN_109178fdc(param_4,&dStack_c0,param_5,&dStack_a0), (int)pdVar1 == 0)) {
    dStack_d8 = 10.0;
    *param_1 = dVar4;
    param_1[1] = dVar3;
    param_1[2] = dVar2;
    pdVar1 = param_4;
    FUN_109178fdc(param_4,param_2,param_5,&dStack_a0);
    if ((int)pdVar1 != 0) {
      FUN_10917cb44(&dStack_c0,param_2,&dStack_d8,param_1);
    }
    pdVar1 = param_4;
    FUN_109178fdc(param_4,param_3,param_5,&dStack_a0);
    if ((int)pdVar1 != 0) {
      FUN_10917cb44(&dStack_c0,param_3,&dStack_d8,param_1);
    }
    pdVar1 = param_2;
    FUN_109178fdc(param_2,param_4,param_3,&dStack_80);
    if ((int)pdVar1 != 0) {
      FUN_10917cb44(&dStack_c0,param_4,&dStack_d8,param_1);
    }
    FUN_109178fdc(param_2,param_5,param_3,&dStack_80);
    if ((int)param_2 != 0) {
      FUN_10917cb44(&dStack_c0,param_5,&dStack_d8,param_1);
    }
  }
  else {
    *param_1 = dVar4;
    param_1[1] = dVar3;
    param_1[2] = dVar2;
  }
  return;
}



/* Entry: 10917cb44; end: 10917cbd3;  */

void FUN_10917cb44(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = *param_2;
  dVar1 = param_2[1];
  dVar3 = param_1[2] - param_2[2];
  dVar3 = (param_1[1] - dVar1) * (param_1[1] - dVar1) + (*param_1 - dVar2) * (*param_1 - dVar2) +
          dVar3 * dVar3;
  if ((dVar3 < *param_3) ||
     ((dVar3 == *param_3 &&
      ((dVar2 < *param_4 ||
       ((dVar2 <= *param_4 &&
        ((dVar1 < param_4[1] || ((dVar1 <= param_4[1] && (param_2[2] < param_4[2])))))))))))) {
    *param_3 = dVar3;
    *param_4 = *param_2;
    param_4[1] = param_2[1];
    param_4[2] = param_2[2];
  }
  return;
}



/* Entry: 10917cbd4; end: 10917cce7;  */

void FUN_10917cbd4(double *param_1,double *param_2,double *param_3,double *param_4)

{
  double dVar1;
  undefined8 uVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  
  dVar6 = param_4[1];
  dVar5 = param_4[2];
  dVar3 = param_1[1];
  dVar1 = param_1[2];
  dVar7 = *param_4;
  dVar4 = *param_1;
  if ((-(dVar5 * dVar4) + dVar7 * dVar1) * param_2[1] +
      *param_2 * (-(dVar6 * dVar1) + dVar5 * dVar3) +
      param_2[2] * (-(dVar7 * dVar3) + dVar6 * dVar4) <= 0.0) {
    dVar8 = param_3[1];
    dVar9 = param_3[2];
  }
  else {
    dVar8 = param_3[1];
    dVar9 = param_3[2];
    if (0.0 < (-(dVar1 * dVar7) + dVar4 * dVar5) * dVar8 +
              *param_3 * (-(dVar3 * dVar5) + dVar1 * dVar6) +
              dVar9 * (-(dVar4 * dVar6) + dVar3 * dVar7)) {
      uVar2 = NEON_fminnm(ABS(dVar3 * dVar6 + dVar7 * dVar4 + dVar5 * dVar1) /
                          SQRT(dVar6 * dVar6 + dVar7 * dVar7 + dVar5 * dVar5),0x3ff0000000000000);
      _asin(uVar2);
      return;
    }
  }
  dVar5 = dVar4 - *param_2;
  dVar6 = dVar3 - param_2[1];
  dVar7 = dVar1 - param_2[2];
  dVar5 = dVar6 * dVar6 + dVar5 * dVar5 + dVar7 * dVar7;
  dVar4 = dVar4 - *param_3;
  dVar1 = (dVar3 - dVar8) * (dVar3 - dVar8) + dVar4 * dVar4 + (dVar1 - dVar9) * (dVar1 - dVar9);
  if (dVar5 <= dVar1) {
    dVar1 = dVar5;
  }
  uVar2 = NEON_fminnm(SQRT(dVar1) * 0.5,0x3ff0000000000000);
  _asin(uVar2);
  return;
}



/* Entry: 10917cce8; end: 10917cdb3;  */

ulong FUN_10917cce8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                   undefined8 param_5)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  uint uVar4;
  
  uVar3 = param_3;
  FUN_109178fdc(param_3,param_5,param_4,param_2);
  if ((int)uVar3 != 0) {
    uVar2 = param_1;
    func_0x0001091786d4(param_1,param_2,param_4);
    uVar3 = param_3;
    func_0x0001091786d4(param_3,param_2,param_1);
    uVar4 = 1;
    if ((uint)uVar2 < 0x80000000) {
      uVar4 = 2;
    }
    uVar1 = ~(uint)uVar2 >> 0x1f;
    if (-1 < (int)uVar3) {
      uVar1 = uVar4;
    }
    func_0x0001091786d4(param_4,param_2,param_3);
    if (0 < (int)param_4) {
      uVar1 = uVar1 + 1;
    }
    return (ulong)(1 < uVar1);
  }
  return uVar3;
}



/* Entry: 10917cdb4; end: 10917cf13;  */

undefined4
FUN_10917cdb4(double *param_1,undefined8 param_2,double *param_3,double *param_4,double *param_5)

{
  undefined4 uVar1;
  double *pdVar2;
  
  if (((((*param_1 == *param_4) && (param_1[1] == param_4[1])) && (param_1[2] == param_4[2])) &&
      ((*param_3 == *param_5 && (param_3[1] == param_5[1])))) && (param_3[2] == param_5[2])) {
    uVar1 = 0;
  }
  else {
    pdVar2 = param_1;
    FUN_109178fdc(param_1,param_3,param_5,param_2);
    if ((int)pdVar2 == 0) {
      pdVar2 = param_1;
      FUN_109178fdc(param_1,param_4,param_5,param_2);
      if (((ulong)pdVar2 & 1) == 0) {
        FUN_109178fdc(param_1,param_4,param_3,param_2);
        uVar1 = 3;
        if ((int)param_1 != 0) {
          uVar1 = 4;
        }
      }
      else {
        uVar1 = 2;
      }
    }
    else {
      pdVar2 = param_5;
      FUN_109178fdc(param_5,param_4,param_1,param_2);
      if (((ulong)pdVar2 & 1) == 0) {
        if (*param_3 == *param_5) {
          uVar1 = 3;
          if ((param_3[1] == param_5[1]) && (uVar1 = 2, param_3[2] != param_5[2])) {
            uVar1 = 3;
          }
        }
        else {
          uVar1 = 3;
        }
      }
      else {
        uVar1 = 1;
      }
    }
  }
  return uVar1;
}



/* Entry: 10917cf14; end: 10917d023;  */

undefined4 FUN_10917cf14(long *param_1,double *param_2)

{
  int iVar1;
  undefined4 uVar2;
  double *pdVar3;
  long lVar4;
  double *pdVar5;
  int iVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  
  pdVar3 = (double *)param_1[5];
  dVar8 = -(param_2[1] * pdVar3[2]) + param_2[2] * pdVar3[1];
  dVar10 = -(param_2[2] * *pdVar3) + *param_2 * pdVar3[2];
  dVar9 = -(*param_2 * pdVar3[1]) + param_2[1] * *pdVar3;
  pdVar5 = (double *)param_1[1];
  dVar7 = dVar10 * pdVar5[1] + *pdVar5 * dVar8 + pdVar5[2] * dVar9;
  iVar6 = -(uint)(dVar7 < -8e-16);
  if (8e-16 < dVar7) {
    iVar6 = 1;
  }
  if (iVar6 == 0) {
    FUN_109178740(pdVar3,param_2);
    iVar6 = (int)pdVar3;
  }
  if ((int)param_1[6] + iVar6 == 0) {
    pdVar3 = (double *)*param_1;
    dVar7 = dVar10 * pdVar3[1] + *pdVar3 * dVar8 + pdVar3[2] * dVar9;
    iVar1 = -(uint)(dVar7 < -8e-16);
    if (8e-16 < dVar7) {
      iVar1 = 1;
    }
    if (iVar1 == 0) {
      lVar4 = param_1[5];
      FUN_109178740(lVar4,param_2);
      iVar1 = (int)lVar4;
      iVar6 = (int)param_1[6];
    }
    else {
      iVar6 = -iVar6;
    }
    uVar2 = 0xffffffff;
    if (iVar1 == iVar6) {
      uVar2 = 1;
    }
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}



/* Entry: 10917d024; end: 10917d223;  */

void FUN_10917d024(long *param_1,double *param_2)

{
  double *pdVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  undefined **ppuStack_b0;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  double dStack_80;
  double dStack_78;
  long lStack_70;
  long lStack_68;
  double dStack_60;
  double dStack_58;
  
  dVar8 = param_2[1];
  dVar2 = param_2[2];
  dVar7 = *param_2;
  _atan2(dVar2,SQRT(dVar8 * dVar8 + dVar7 * dVar7));
  _atan2(dVar8,dVar7);
  dStack_60 = dVar2;
  dStack_58 = dVar8;
  if ((double)param_1[4] <= (double)param_1[5]) {
    dVar7 = (double)param_1[1];
    dStack_a0 = dVar7;
    dStack_a8 = dVar2;
    if (dVar7 <= dVar2) {
      dStack_a0 = dVar2;
      dStack_a8 = dVar7;
    }
    dStack_90 = 3.141592653589793;
    if ((double)param_1[2] != -3.141592653589793) {
      dStack_90 = (double)param_1[2];
    }
    dVar7 = 3.141592653589793;
    if (dVar8 != -3.141592653589793) {
      dVar7 = dVar8;
    }
    dVar3 = (dVar7 + 3.141592653589793) - (dStack_90 + -3.141592653589793);
    if (0.0 <= dVar7 - dStack_90) {
      dVar3 = dVar7 - dStack_90;
    }
    dStack_98 = dVar7;
    if (dVar3 <= 3.141592653589793) {
      dStack_98 = dStack_90;
    }
    ppuStack_b0 = &PTR_FUN_110aded28;
    if (dVar3 <= 3.141592653589793) {
      dStack_90 = dVar7;
    }
    FUN_10917d374(&dStack_88,param_1 + 3,&ppuStack_b0);
    dVar3 = dStack_78;
    dVar7 = dStack_80;
    param_1[4] = (long)dStack_80;
    param_1[6] = lStack_70;
    param_1[5] = (long)dStack_78;
    param_1[7] = lStack_68;
    pdVar1 = (double *)*param_1;
    FUN_109178658(&dStack_88,pdVar1,param_2);
    dVar5 = dStack_80 + dStack_78 * -0.0;
    dVar6 = dStack_78 * 0.0 - dStack_88;
    dVar4 = dStack_80 * -0.0 + dStack_88 * 0.0;
    dVar9 = dVar6 * pdVar1[1] + *pdVar1 * dVar5 + pdVar1[2] * dVar4;
    if (dVar9 * (dVar6 * param_2[1] + *param_2 * dVar5 + param_2[2] * dVar4) < 0.0) {
      dVar4 = ABS(dStack_78 /
                  SQRT(dStack_80 * dStack_80 + dStack_88 * dStack_88 + dStack_78 * dStack_78));
      _acos();
      if (0.0 <= dVar9) {
        if (-dVar4 <= dVar7) {
          dVar7 = -dVar4;
        }
        param_1[4] = (long)dVar7;
      }
      else {
        if (dVar3 <= dVar4) {
          dVar3 = dVar4;
        }
        param_1[5] = (long)dVar3;
      }
      if (1.5707963267948954 <= dVar4) {
        param_1[7] = 0x400921fb54442d18;
        param_1[6] = -0x3ff6de04abbbd2e8;
      }
    }
  }
  else {
    func_0x00010917d334(param_1 + 3,&dStack_60);
  }
  *param_1 = (long)param_2;
  param_1[1] = (long)dVar2;
  param_1[2] = (long)dVar8;
  return;
}



/* Entry: 10917d224; end: 10917d25f;  */

undefined8 FUN_10917d224(undefined8 param_1)

{
  func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a3b7,1);
  return param_1;
}



/* Entry: 10917d260; end: 10917d263;  */

void FUN_10917d260(void)

{
  return;
}



/* Entry: 10917d264; end: 10917d2a3;  */

void FUN_10917d264(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)0x28;
  __Znwm();
  *puVar1 = &PTR_FUN_110aded28;
  uVar2 = *(undefined8 *)(param_1 + 8);
  puVar1[2] = *(undefined8 *)(param_1 + 0x10);
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar1[4] = *(undefined8 *)(param_1 + 0x20);
  puVar1[3] = uVar2;
  return;
}



/* Entry: 10917d2a4; end: 10917d373;  */

bool FUN_10917d2a4(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  
  if ((*(double *)(param_2 + 8) <= *(double *)(param_2 + 0x10)) &&
     ((*(double *)(param_2 + 8) < *(double *)(param_1 + 8) ||
      (*(double *)(param_1 + 0x10) < *(double *)(param_2 + 0x10))))) {
    return false;
  }
  dVar5 = *(double *)(param_1 + 0x18);
  dVar4 = *(double *)(param_1 + 0x20);
  dVar6 = *(double *)(param_2 + 0x18);
  dVar3 = *(double *)(param_2 + 0x20);
  if (dVar5 <= dVar4) {
    if (dVar3 < dVar6) {
      if (dVar4 - dVar5 != 6.283185307179586) {
        return dVar6 - dVar3 == 6.283185307179586;
      }
      return true;
    }
  }
  else if (dVar6 <= dVar3) {
    bVar1 = false;
    bVar2 = false;
    if (dVar6 < dVar5) {
      bVar1 = false;
      bVar2 = true;
      if (!NAN(dVar3) && !NAN(dVar4)) {
        bVar1 = dVar3 == dVar4;
        bVar2 = dVar4 <= dVar3;
      }
    }
    if (bVar2 && !bVar1) {
      return false;
    }
    return dVar5 - dVar4 != 6.283185307179586;
  }
  if (dVar6 < dVar5) {
    return false;
  }
  return dVar3 <= dVar4;
}



/* Entry: 10917d374; end: 10917d3fb;  */

void FUN_10917d374(undefined8 *param_1,long param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  dVar2 = *(double *)(param_2 + 8);
  dVar1 = *(double *)(param_2 + 0x10);
  dVar3 = *(double *)(param_3 + 8);
  dVar5 = *(double *)(param_3 + 0x10);
  dVar4 = dVar3;
  dVar6 = dVar5;
  if ((dVar2 <= dVar1) && (dVar4 = dVar2, dVar6 = dVar1, dVar3 <= dVar5)) {
    if (dVar2 <= dVar3) {
      dVar3 = dVar2;
    }
    dVar4 = dVar3;
    dVar6 = dVar5;
    if (dVar5 <= dVar1) {
      dVar6 = dVar1;
    }
  }
  FUN_1091782dc(&uStack_40,param_2 + 0x18,param_3 + 0x18);
  *param_1 = &PTR_FUN_110aded28;
  param_1[1] = dVar4;
  param_1[2] = dVar6;
  param_1[4] = uStack_38;
  param_1[3] = uStack_40;
  return;
}



/* Entry: 10917d3fc; end: 10917d60f;  */

void FUN_10917d3fc(undefined8 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dStack_a8;
  double dStack_a0;
  double dStack_98;
  double dStack_90;
  double dStack_88;
  
  dVar5 = *(double *)(param_2 + 8);
  dVar4 = *(double *)(param_2 + 0x10);
  if (dVar5 <= dVar4) {
    dVar8 = dVar5 + dVar4;
    if (0.0 <= dVar8) {
      dVar4 = -dVar5;
    }
    uVar7 = 0xbff0000000000000;
    if (0.0 <= dVar8) {
      uVar7 = 0x3ff0000000000000;
    }
    dVar5 = 2.0;
    if (dVar4 + 1.5707963267948966 < 3.141592653589793) {
      dVar5 = (dVar4 + 1.5707963267948966) * 0.5;
      _sin();
      dVar5 = dVar5 * (dVar5 + dVar5);
    }
    dVar9 = *(double *)(param_2 + 0x18);
    dVar10 = *(double *)(param_2 + 0x20);
    dVar6 = dVar10 - dVar9;
    dVar4 = dVar6;
    _remainder(dVar6,0x401921fb54442d18);
    if ((0.0 <= dVar4) && (dVar6 < 6.283185307179586)) {
      dVar4 = (dVar9 + dVar10) * 0.5;
      lVar1 = 8;
      if (0.0 < dVar4) {
        lVar1 = 0;
      }
      dStack_88 = dVar4 + *(double *)(&UNK_10ddd0980 + lVar1);
      if (dVar9 <= dVar10) {
        dStack_88 = dVar4;
      }
      dVar8 = dVar8 * 0.5;
      dStack_a8 = dVar8;
      _cos();
      dVar4 = dStack_88;
      _cos();
      dVar6 = dStack_88;
      _sin();
      dVar9 = dStack_a8;
      _sin();
      uVar3 = 0;
      *param_1 = &PTR_FUN_110adec28;
      param_1[1] = dVar8 * dVar4;
      param_1[2] = dVar8 * dVar6;
      param_1[3] = dVar9;
      param_1[4] = 0;
      do {
        dVar9 = ((double *)(param_2 + 8))[uVar3 >> 1];
        uVar2 = (uint)uVar3;
        dStack_90 = ((double *)(param_2 + 0x18))[uVar2 & 1 ^ uVar2 >> 1];
        dStack_88 = dVar9;
        _cos();
        dVar4 = dStack_90;
        _cos();
        dVar8 = dStack_90;
        _sin();
        dVar6 = dStack_88;
        _sin();
        dStack_a8 = dVar9 * dVar4;
        dStack_a0 = dVar9 * dVar8;
        dStack_98 = dVar6;
        FUN_109179074(param_1,&dStack_a8);
        uVar3 = (ulong)(uVar2 + 1);
      } while (uVar2 + 1 != 4);
      if ((double)param_1[4] < dVar5) {
        return;
      }
    }
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = &PTR_FUN_110adec28;
    param_1[3] = uVar7;
    param_1[4] = dVar5;
  }
  else {
    *param_1 = &PTR_FUN_110adec28;
    param_1[1] = 0x3ff0000000000000;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0xbff0000000000000;
  }
  return;
}



/* Entry: 10917d610; end: 10917d62f;  */

void FUN_10917d610(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110aded28;
  uVar1 = *(undefined8 *)(param_2 + 8);
  param_1[2] = *(undefined8 *)(param_2 + 0x10);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  param_1[4] = *(undefined8 *)(param_2 + 0x20);
  param_1[3] = uVar1;
  return;
}



/* Entry: 10917d630; end: 10917d75f;  */

void FUN_10917d630(undefined8 param_1,long *param_2)

{
  undefined1 auStack_48 [40];
  
  (**(code **)(*param_2 + 0x20))(auStack_48,param_2);
  FUN_10917d2a4(param_1,auStack_48);
  return;
}



/* Entry: 10917d760; end: 10917d7f3;  */

uint FUN_10917d760(long param_1,long param_2)

{
  byte bVar1;
  bool bVar2;
  byte *pbVar3;
  undefined8 uVar4;
  double dVar5;
  undefined8 uVar6;
  double dVar7;
  double dVar8;
  
  pbVar3 = *(byte **)(param_2 + 8);
  bVar1 = *pbVar3;
  *(byte **)(param_2 + 8) = pbVar3 + 1;
  if (1 < bVar1) {
    return 0;
  }
  uVar4 = *(undefined8 *)(pbVar3 + 1);
  *(byte **)(param_2 + 8) = pbVar3 + 9;
  uVar6 = *(undefined8 *)(pbVar3 + 9);
  *(byte **)(param_2 + 8) = pbVar3 + 0x11;
  *(undefined8 *)(param_1 + 8) = uVar4;
  *(undefined8 *)(param_1 + 0x10) = uVar6;
  dVar5 = *(double *)(pbVar3 + 0x11);
  *(byte **)(param_2 + 8) = pbVar3 + 0x19;
  dVar7 = *(double *)(pbVar3 + 0x19);
  *(byte **)(param_2 + 8) = pbVar3 + 0x21;
  bVar2 = false;
  if ((dVar7 != 3.141592653589793) && (bVar2 = false, !NAN(dVar5))) {
    bVar2 = dVar5 == -3.141592653589793;
  }
  dVar8 = 3.141592653589793;
  if (!bVar2) {
    dVar8 = dVar5;
  }
  bVar2 = true;
  if ((dVar7 == -3.141592653589793) && (bVar2 = false, !NAN(dVar5))) {
    bVar2 = dVar5 == 3.141592653589793;
  }
  dVar5 = 3.141592653589793;
  if (bVar2) {
    dVar5 = dVar7;
  }
  *(double *)(param_1 + 0x18) = dVar8;
  *(double *)(param_1 + 0x20) = dVar5;
  return (uint)~(*(int *)(param_2 + 0x10) - (int)(pbVar3 + 0x21)) >> 0x1f;
}



/* Entry: 10917d7f4; end: 10917d8bf;  */

bool FUN_10917d7f4(long param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = param_2[1];
  dVar3 = param_2[2];
  dVar4 = *param_2;
  _atan2(dVar3,SQRT(dVar5 * dVar5 + dVar4 * dVar4));
  _atan2(dVar5,dVar4);
  if ((*(double *)(param_1 + 8) <= dVar3) && (dVar3 <= *(double *)(param_1 + 0x10))) {
    dVar3 = 3.141592653589793;
    if (dVar5 != -3.141592653589793) {
      dVar3 = dVar5;
    }
    dVar4 = *(double *)(param_1 + 0x18);
    dVar5 = *(double *)(param_1 + 0x20);
    if (dVar4 <= dVar5) {
      if (dVar4 <= dVar3) {
        return dVar3 <= dVar5;
      }
    }
    else {
      bVar1 = false;
      bVar2 = false;
      if (dVar3 < dVar4) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(dVar3) && !NAN(dVar5)) {
          bVar1 = dVar3 == dVar5;
          bVar2 = dVar5 <= dVar3;
        }
      }
      if (!bVar2 || bVar1) {
        return dVar4 - dVar5 != 6.283185307179586;
      }
    }
  }
  return false;
}



/* Entry: 10917d8c0; end: 10917d917;  */

void FUN_10917d8c0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10917d918; end: 10917da07;  */

undefined8 * FUN_10917d918(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aded90;
  *(undefined4 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  param_1[4] = &PTR_FUN_110aded28;
  param_1[6] = 0x3ff921fb54442d18;
  param_1[5] = 0xbff921fb54442d18;
  param_1[8] = 0x400921fb54442d18;
  param_1[7] = 0xc00921fb54442d18;
  param_1[0xc] = 0;
  param_1[0xb] = param_1 + 0xc;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0xe) = 0x1e;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[10] = &PTR_FUN_110adedf8;
  param_1[0x10] = param_1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = param_1 + 0x13;
  FUN_10917da08();
  return param_1;
}



/* Entry: 10917da08; end: 10917db57;  */

void FUN_10917da08(long param_1,long *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auVar3 [16];
  double dVar4;
  undefined8 uVar5;
  double dVar6;
  double dVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  double dVar15;
  undefined8 uVar16;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  
  *(undefined4 *)(param_1 + 0x70) = 0x1e;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  puVar12 = (undefined8 *)(param_1 + 0x60);
  FUN_10917c57c(param_1 + 0x58,*puVar12);
  *(undefined8 **)(param_1 + 0x58) = puVar12;
  *puVar12 = 0;
  puVar12 = (undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  func_0x0001091804f4(param_1 + 0x90,*puVar12);
  *puVar12 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 **)(param_1 + 0x90) = puVar12;
  if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x10) != 0)) {
    __ZdaPv();
  }
  lVar9 = *param_2;
  lVar8 = param_2[1] - lVar9;
  iVar10 = (int)(lVar8 / 0x18);
  *(int *)(param_1 + 8) = iVar10;
  if (lVar8 == 0) {
    *(undefined8 *)(param_1 + 0x10) = 0;
  }
  else {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = (long)iVar10;
    lVar13 = ((long)iVar10 * 2 + (long)iVar10) * 8;
    lVar8 = lVar13;
    if (SUB168(auVar3 * ZEXT816(0x18),8) != 0) {
      lVar8 = -1;
    }
    __Znam();
    if (iVar10 != 0) {
      _bzero(lVar8,((lVar13 - 0x18U) / 0x18) * 0x18 + 0x18);
    }
    *(long *)(param_1 + 0x10) = lVar8;
    _memcpy(lVar8,lVar9,lVar13);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  *(undefined8 *)(param_1 + 0x30) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x28) = 0xbff921fb54442d18;
  *(undefined8 *)(param_1 + 0x40) = 0x400921fb54442d18;
  *(undefined8 *)(param_1 + 0x38) = 0xc00921fb54442d18;
  FUN_10917db94(param_1);
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_88 = &PTR_FUN_110aded28;
  uStack_78 = 0;
  uStack_80 = 0x3ff0000000000000;
  dStack_68 = -3.141592653589793;
  dStack_70 = 3.141592653589793;
  iVar10 = *(int *)(param_1 + 8);
  if (-1 < iVar10) {
    iVar11 = 0;
    do {
      iVar2 = iVar11;
      if (-1 < iVar11 - iVar10) {
        iVar2 = iVar11 - iVar10;
      }
      FUN_10917d024(auStack_a0,*(long *)(param_1 + 0x10) + (long)iVar2 * 0x18);
      iVar10 = *(int *)(param_1 + 8);
      bVar1 = iVar11 < iVar10;
      iVar11 = iVar11 + 1;
    } while (bVar1);
  }
  dVar7 = dStack_68;
  dVar6 = dStack_70;
  uVar5 = uStack_78;
  uVar14 = uStack_80;
  *(undefined8 *)(param_1 + 0x30) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x28) = 0xbff921fb54442d18;
  *(undefined8 *)(param_1 + 0x40) = 0x400921fb54442d18;
  *(undefined8 *)(param_1 + 0x38) = 0xc00921fb54442d18;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0x3ff0000000000000;
  lVar9 = param_1;
  FUN_10917e38c(param_1,&uStack_b8);
  dVar15 = 3.141592653589793;
  dVar4 = -3.141592653589793;
  if ((int)lVar9 == 0) {
    dVar15 = dVar7;
    dVar4 = dVar6;
  }
  uVar16 = uVar14;
  if (dVar15 - dVar4 == 6.283185307179586) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xbff0000000000000;
    lVar8 = param_1;
    FUN_10917e38c(param_1,&uStack_b8);
    uVar16 = 0xbff921fb54442d18;
    if ((int)lVar8 == 0) {
      uVar16 = uVar14;
    }
  }
  uVar14 = 0x3ff921fb54442d18;
  if ((int)lVar9 == 0) {
    uVar14 = uVar5;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar16;
  *(undefined8 *)(param_1 + 0x30) = uVar14;
  *(double *)(param_1 + 0x38) = dVar4;
  *(double *)(param_1 + 0x40) = dVar15;
  return;
}



/* Entry: 10917db58; end: 10917db93;  */

undefined8 * FUN_10917db58(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110adee70;
  FUN_10917c57c(param_1 + 1,param_1[2]);
  return param_1;
}



/* Entry: 10917db94; end: 10917dc37;  */

void FUN_10917db94(long param_1)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  undefined1 auStack_58 [24];
  
  *(undefined1 *)(param_1 + 0x48) = 0;
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = 1 - iVar1;
  lVar5 = *(long *)(param_1 + 0x10);
  if (1 < iVar1) {
    iVar2 = 1;
  }
  lVar4 = lVar5 + (long)iVar2 * 0x18;
  FUN_109178580(auStack_58,lVar4);
  iVar2 = 2;
  if (iVar1 < 3) {
    iVar2 = 2 - iVar1;
  }
  puVar3 = auStack_58;
  FUN_109178fdc(puVar3,lVar5 + (ulong)(-iVar1 & (-iVar1 >> 0x1f ^ 0xffffffffU)) * 0x18,
                lVar5 + (long)iVar2 * 0x18,lVar4);
  lVar5 = param_1;
  FUN_10917e38c(param_1,lVar4);
  if ((int)puVar3 != (int)lVar5) {
    *(undefined1 *)(param_1 + 0x48) = 1;
  }
  return;
}



/* Entry: 10917dc38; end: 10917dd9f;  */

void FUN_10917dc38(long param_1)

{
  bool bVar1;
  int iVar2;
  double dVar3;
  undefined8 uVar4;
  double dVar5;
  double dVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  double dVar12;
  undefined8 uVar13;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined **ppuStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  double dStack_70;
  double dStack_68;
  
  uStack_98 = 0;
  uStack_90 = 0;
  ppuStack_88 = &PTR_FUN_110aded28;
  uStack_78 = 0;
  uStack_80 = 0x3ff0000000000000;
  dStack_68 = -3.141592653589793;
  dStack_70 = 3.141592653589793;
  iVar9 = *(int *)(param_1 + 8);
  if (-1 < iVar9) {
    iVar10 = 0;
    do {
      iVar2 = iVar10;
      if (-1 < iVar10 - iVar9) {
        iVar2 = iVar10 - iVar9;
      }
      FUN_10917d024(auStack_a0,*(long *)(param_1 + 0x10) + (long)iVar2 * 0x18);
      iVar9 = *(int *)(param_1 + 8);
      bVar1 = iVar10 < iVar9;
      iVar10 = iVar10 + 1;
    } while (bVar1);
  }
  dVar6 = dStack_68;
  dVar5 = dStack_70;
  uVar4 = uStack_78;
  uVar11 = uStack_80;
  *(undefined8 *)(param_1 + 0x30) = 0x3ff921fb54442d18;
  *(undefined8 *)(param_1 + 0x28) = 0xbff921fb54442d18;
  *(undefined8 *)(param_1 + 0x40) = 0x400921fb54442d18;
  *(undefined8 *)(param_1 + 0x38) = 0xc00921fb54442d18;
  uStack_b8 = 0;
  uStack_b0 = 0;
  uStack_a8 = 0x3ff0000000000000;
  lVar7 = param_1;
  FUN_10917e38c(param_1,&uStack_b8);
  dVar12 = 3.141592653589793;
  dVar3 = -3.141592653589793;
  if ((int)lVar7 == 0) {
    dVar12 = dVar6;
    dVar3 = dVar5;
  }
  uVar13 = uVar11;
  if (dVar12 - dVar3 == 6.283185307179586) {
    uStack_b8 = 0;
    uStack_b0 = 0;
    uStack_a8 = 0xbff0000000000000;
    lVar8 = param_1;
    FUN_10917e38c(param_1,&uStack_b8);
    uVar13 = 0xbff921fb54442d18;
    if ((int)lVar8 == 0) {
      uVar13 = uVar11;
    }
  }
  uVar11 = 0x3ff921fb54442d18;
  if ((int)lVar7 == 0) {
    uVar11 = uVar4;
  }
  *(undefined8 *)(param_1 + 0x28) = uVar13;
  *(undefined8 *)(param_1 + 0x30) = uVar11;
  *(double *)(param_1 + 0x38) = dVar3;
  *(double *)(param_1 + 0x40) = dVar12;
  return;
}



/* Entry: 10917dda0; end: 10917e387;  */

undefined8 FUN_10917dda0(long param_1)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  double *pdVar4;
  double **ppdVar5;
  int iVar6;
  ulong uVar7;
  double *pdVar8;
  long *plVar9;
  int iVar10;
  long *plVar11;
  ulong uVar12;
  long *plVar13;
  undefined8 uVar14;
  double *pdVar15;
  double *pdVar16;
  long lVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  long *plVar22;
  long *unaff_x27;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double *pdStack_120;
  double *pdStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double *pdStack_f8;
  uint uStack_f0;
  double dStack_e8;
  undefined8 uStack_e0;
  double dStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  int iStack_b8;
  long lStack_b0;
  long *plStack_a8;
  long *plStack_a0;
  long lStack_98;
  float fStack_90;
  
  uVar7 = (ulong)*(uint *)(param_1 + 8);
  if ((int)*(uint *)(param_1 + 8) < 3) {
    return 0;
  }
  pdVar8 = (double *)(*(long *)(param_1 + 0x10) + 0x10);
  do {
    if (1e-15 < ABS(pdVar8[-1] * pdVar8[-1] + pdVar8[-2] * pdVar8[-2] + *pdVar8 * *pdVar8 + -1.0)) {
      return 0;
    }
    uVar7 = uVar7 - 1;
    pdVar8 = pdVar8 + 3;
  } while (uVar7 != 0);
  plVar22 = (long *)0x0;
  lVar17 = 0;
  plStack_a8 = (long *)0x0;
  lStack_b0 = 0;
  lStack_98 = 0;
  plStack_a0 = (long *)0x0;
  fStack_90 = 1.0;
  do {
    lVar3 = lStack_98;
    lVar1 = lStack_b0;
    pdVar8 = (double *)(*(long *)(param_1 + 0x10) + lVar17 * 0x18);
    dVar23 = *pdVar8;
    dVar24 = pdVar8[1];
    dVar25 = pdVar8[2];
    lStack_d0 = CONCAT44(lStack_d0._4_4_,(int)lVar17);
    plVar9 = &lStack_98;
    dStack_e8 = dVar23;
    uStack_e0 = dVar24;
    dStack_d8 = dVar25;
    FUN_10917845c(plVar9,&dStack_e8);
    if (plVar22 != (long *)0x0) {
      uVar7 = (long)plVar22 - 1;
      uVar20 = (uint)plVar22;
      if (((ulong)plVar22 & uVar7) == 0) {
        unaff_x27 = (long *)((ulong)(uVar20 - 1) & (ulong)plVar9);
      }
      else {
        unaff_x27 = plVar9;
        if (plVar22 <= plVar9) {
          uVar18 = 0;
          if (uVar20 != 0) {
            uVar18 = (uint)plVar9 / uVar20;
          }
          unaff_x27 = (long *)(ulong)((uint)plVar9 - uVar18 * uVar20);
        }
      }
      plVar11 = *(long **)(lVar1 + (long)unaff_x27 * 8);
      if (plVar11 != (long *)0x0) {
        do {
          while( true ) {
            plVar11 = (long *)*plVar11;
            if (plVar11 == (long *)0x0) goto LAB_10917df20;
            plVar13 = (long *)plVar11[1];
            if (plVar13 != plVar9) break;
            if ((((double)plVar11[2] == dVar23) && ((double)plVar11[3] == dVar24)) &&
               ((double)plVar11[4] == dVar25)) {
              uVar14 = 0;
              goto LAB_10917e310;
            }
          }
          if (((ulong)plVar22 & uVar7) == 0) {
            plVar13 = (long *)((ulong)plVar13 & uVar7);
          }
          else if (plVar22 <= plVar13) {
            uVar12 = 0;
            if (plVar22 != (long *)0x0) {
              uVar12 = (ulong)plVar13 / (ulong)plVar22;
            }
            plVar13 = (long *)((long)plVar13 - uVar12 * (long)plVar22);
          }
        } while (plVar13 == unaff_x27);
      }
    }
LAB_10917df20:
    plVar11 = (long *)0x30;
    __Znwm();
    *plVar11 = 0;
    plVar11[1] = (long)plVar9;
    plVar11[2] = (long)dVar23;
    plVar11[3] = (long)dVar24;
    plVar11[4] = (long)dVar25;
    *(int *)(plVar11 + 5) = (int)lVar17;
    if ((plVar22 == (long *)0x0) || (fStack_90 * (float)plVar22 < (float)(lVar3 + 1))) {
      uVar7 = 1;
      if ((long *)0x2 < plVar22) {
        uVar7 = (ulong)(((ulong)plVar22 & (long)plVar22 - 1U) != 0);
      }
      uVar7 = uVar7 | (long)plVar22 << 1;
      uVar12 = (ulong)((float)(lVar3 + 1) / fStack_90);
      if (uVar7 <= uVar12) {
        uVar7 = uVar12;
      }
      FUN_10918057c(&lStack_b0,uVar7);
      plVar22 = plStack_a8;
      if (((ulong)plStack_a8 & (long)plStack_a8 - 1U) == 0) {
        unaff_x27 = (long *)((ulong)((int)plStack_a8 - 1) & (ulong)plVar9);
      }
      else {
        unaff_x27 = plVar9;
        if (plStack_a8 <= plVar9) {
          uVar7 = 0;
          if (plStack_a8 != (long *)0x0) {
            uVar7 = (ulong)plVar9 / (ulong)plStack_a8;
          }
          unaff_x27 = (long *)((long)plVar9 - uVar7 * (long)plStack_a8);
        }
      }
    }
    plVar9 = *(long **)(lStack_b0 + (long)unaff_x27 * 8);
    if (plVar9 == (long *)0x0) {
      *plVar11 = (long)plStack_a0;
      *(long ***)(lStack_b0 + (long)unaff_x27 * 8) = &plStack_a0;
      plStack_a0 = plVar11;
      if (*plVar11 != 0) {
        plVar9 = *(long **)(*plVar11 + 8);
        if (((ulong)plVar22 & (long)plVar22 - 1U) == 0) {
          plVar9 = (long *)((ulong)plVar9 & (long)plVar22 - 1U);
        }
        else if (plVar22 <= plVar9) {
          uVar7 = 0;
          if (plVar22 != (long *)0x0) {
            uVar7 = (ulong)plVar9 / (ulong)plVar22;
          }
          plVar9 = (long *)((long)plVar9 - uVar7 * (long)plVar22);
        }
        *(long **)(lStack_b0 + (long)plVar9 * 8) = plVar11;
      }
    }
    else {
      *plVar11 = *plVar9;
      *plVar9 = (long)plVar11;
    }
    lStack_98 = lStack_98 + 1;
    lVar17 = lVar17 + 1;
  } while (lVar17 < *(int *)(param_1 + 8));
  dVar23 = (double)(param_1 + 0x50);
  FUN_10917bcbc(dVar23);
  lStack_d0 = 0;
  lStack_c8 = 0;
  uStack_c0 = 0;
  uVar7 = (ulong)*(uint *)(param_1 + 8);
  dStack_e8 = dVar23;
  if (0 < (int)*(uint *)(param_1 + 8)) {
    lVar17 = 0;
LAB_10917e084:
    pdVar8 = *(double **)(param_1 + 0x10);
    pdVar15 = pdVar8 + lVar17 * 3;
    lVar1 = lVar17 + 1;
    iVar6 = (int)uVar7;
    iVar21 = (int)lVar1;
    iVar10 = iVar21 - iVar6;
    iVar19 = iVar21;
    if (iVar6 <= iVar21) {
      iVar19 = iVar10;
    }
    pdVar16 = pdVar8 + (long)iVar19 * 3;
    dVar24 = pdVar15[2] * -pdVar16[1] + pdVar16[2] * pdVar15[1];
    dVar25 = *pdVar15 * -pdVar16[2] + *pdVar16 * pdVar15[2];
    dVar26 = -*pdVar16 * pdVar15[1] + pdVar16[1] * *pdVar15;
    dVar23 = pdVar8[1] * dVar25 + *pdVar8 * dVar24 + pdVar8[2] * dVar26;
    iVar19 = -(uint)(dVar23 < -8e-16);
    if (8e-16 < dVar23) {
      iVar19 = 1;
    }
    pdStack_120 = pdVar15;
    pdStack_118 = pdVar16;
    dStack_110 = dVar24;
    dStack_108 = dVar25;
    dStack_100 = dVar26;
    pdStack_f8 = pdVar8;
    if (iVar19 == 0) {
      pdVar8 = pdVar15;
      FUN_109178740(pdVar15,pdVar16);
      iVar19 = (int)pdVar8;
      iVar6 = *(int *)(param_1 + 8);
      pdVar8 = *(double **)(param_1 + 0x10);
      iVar10 = iVar21 - iVar6;
    }
    uVar20 = -iVar19;
    iVar19 = (int)lVar17;
    if (iVar6 <= iVar19) {
      iVar19 = iVar19 - iVar6;
    }
    if (-1 < iVar10) {
      iVar21 = iVar10;
    }
    uStack_f0 = uVar20;
    FUN_10917c4d8(&dStack_e8,pdVar8 + (long)iVar19 * 3,pdVar8 + (long)iVar21 * 3);
    iVar19 = -2;
    uVar7 = (ulong)uStack_e0 & 0xff;
LAB_10917e164:
    iVar21 = uStack_e0._4_4_;
    if ((uVar7 & 1) == 0) {
      if ((ulong)(lStack_c8 - lStack_d0 >> 2) <= (ulong)(long)iStack_b8) goto LAB_10917e2d8;
    }
    else if (dStack_d8._0_4_ <= uStack_e0._4_4_) goto LAB_10917e2d8;
    if (lVar1 < uStack_e0._4_4_) {
      iVar6 = *(int *)(param_1 + 8);
      lVar17 = *(long *)(param_1 + 0x10);
      if (iVar19 != uStack_e0._4_4_) {
        iVar19 = uStack_e0._4_4_;
        if (iVar6 <= uStack_e0._4_4_) {
          iVar19 = uStack_e0._4_4_ - iVar6;
        }
        pdStack_f8 = (double *)(lVar17 + (long)iVar19 * 0x18);
        dVar23 = dVar25 * pdStack_f8[1] + *pdStack_f8 * dVar24 + pdStack_f8[2] * dVar26;
        iVar19 = -(uint)(dVar23 < -8e-16);
        if (8e-16 < dVar23) {
          iVar19 = 1;
        }
        if (iVar19 == 0) {
          pdVar8 = pdVar15;
          FUN_109178740(pdVar15,pdVar16);
          iVar19 = (int)pdVar8;
          iVar6 = *(int *)(param_1 + 8);
          lVar17 = *(long *)(param_1 + 0x10);
        }
        uVar20 = -iVar19;
        uStack_f0 = uVar20;
      }
      iVar19 = iVar21 + 1;
      iVar10 = iVar19 - iVar6;
      if (iVar19 < iVar6) {
        iVar10 = iVar21 + 1;
      }
      pdVar8 = (double *)(lVar17 + (long)iVar10 * 0x18);
      dVar23 = dVar25 * pdVar8[1] + *pdVar8 * dVar24 + pdVar8[2] * dVar26;
      uVar18 = -(uint)(dVar23 < -8e-16);
      if (8e-16 < dVar23) {
        uVar18 = 1;
      }
      if (uVar18 == 0) {
        pdVar4 = pdVar15;
        FUN_109178740(pdVar15,pdVar16,pdVar8);
        uVar18 = (uint)pdVar4;
      }
      if (uVar18 + uVar20 == 0 || (uVar18 & uVar20) == 0) {
        uVar20 = -uVar18;
        pdStack_f8 = pdVar8;
        uStack_f0 = uVar20;
      }
      else {
        ppdVar5 = &pdStack_120;
        FUN_10917cf14(ppdVar5,pdVar8);
        uVar20 = -uVar18;
        pdStack_f8 = pdVar8;
        uStack_f0 = uVar20;
        if (0 < (int)ppdVar5) {
          uVar14 = 0;
          goto LAB_10917e2f8;
        }
      }
    }
    uVar12 = (ulong)uStack_e0 & 0xff;
    if ((char)uStack_e0 != '\x01') goto LAB_10917e2a8;
    iVar21 = uStack_e0._4_4_ + 1;
    goto LAB_10917e2cc;
  }
  uVar14 = 1;
LAB_10917e310:
  func_0x000109180534(&lStack_b0);
  return uVar14;
LAB_10917e2d8:
  uVar7 = (ulong)*(int *)(param_1 + 8);
  lVar17 = lVar1;
  if ((long)uVar7 <= lVar1) goto code_r0x00010917e2e4;
  goto LAB_10917e084;
code_r0x00010917e2e4:
  uVar14 = 1;
LAB_10917e2f8:
  if (lStack_d0 != 0) {
    lStack_c8 = lStack_d0;
    __ZdlPv();
  }
  goto LAB_10917e310;
LAB_10917e2a8:
  uVar7 = 0;
  uVar2 = (long)iStack_b8 + 1;
  iStack_b8 = (int)uVar2;
  if (uVar2 < (ulong)(lStack_c8 - lStack_d0 >> 2)) {
    iVar21 = *(int *)(lStack_d0 + uVar2 * 4);
LAB_10917e2cc:
    uStack_e0 = (double)CONCAT44(iVar21,(undefined4)uStack_e0);
    uVar7 = uVar12;
  }
  goto LAB_10917e164;
}



/* Entry: 10917e388; end: 10917e38b;  */

undefined8 * FUN_10917e388(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aded90;
  if ((*(char *)(param_1 + 3) == '\x01') && (param_1[2] != 0)) {
    __ZdaPv();
  }
  func_0x0001091804f4(param_1 + 0x12,param_1[0x13]);
  param_1[10] = &PTR_DAT_110adee70;
  FUN_10917c57c(param_1 + 0xb,param_1[0xc]);
  return param_1;
}



/* Entry: 10917e38c; end: 10917e80f;  */

uint FUN_10917e38c(long param_1,double *param_2)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined8 **ppuVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  long lVar11;
  double *pdVar12;
  double *pdVar13;
  uint uVar14;
  uint uVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  long lStack_110;
  byte bStack_108;
  int iStack_104;
  int iStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  double *pdStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double *pdStack_b0;
  uint uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 *puVar6;
  
  iVar3 = (int)param_1 + 0x20;
  FUN_10917d7f4();
  if (iVar3 == 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = (uint)*(byte *)(param_1 + 0x48);
    uStack_98 = 0x3feffbb2817d5fad;
    uStack_a0 = 0x3f72b579b431bee4;
    uStack_90 = 0x3fa06d338a2f992d;
    iVar8 = *(int *)(param_1 + 8);
    pdVar12 = (double *)
              (*(long *)(param_1 + 0x10) + (ulong)(-iVar8 & (-iVar8 >> 0x1f ^ 0xffffffffU)) * 0x18);
    puStack_d8 = &uStack_a0;
    dVar17 = param_2[1] * -0.032083140009307655 + param_2[2] * 0.9994747666450984;
    dVar18 = param_2[2] * -0.0045675996835681 + *param_2 * 0.032083140009307655;
    dVar19 = *param_2 * -0.9994747666450984 + param_2[1] * 0.0045675996835681;
    dVar16 = pdVar12[1] * dVar18 + *pdVar12 * dVar17 + pdVar12[2] * dVar19;
    iVar3 = -(uint)(dVar16 < -8e-16);
    if (8e-16 < dVar16) {
      iVar3 = 1;
    }
    pdStack_d0 = param_2;
    dStack_c8 = dVar17;
    dStack_c0 = dVar18;
    dStack_b8 = dVar19;
    pdStack_b0 = pdVar12;
    if (iVar3 == 0) {
      puVar6 = &uStack_a0;
      FUN_109178740(puVar6,param_2,pdVar12);
      iVar3 = (int)puVar6;
      iVar8 = *(int *)(param_1 + 8);
    }
    uVar15 = -iVar3;
    uStack_a8 = uVar15;
    if (1999 < iVar8) {
      lStack_110 = param_1 + 0x50;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      FUN_10917c4d8(dVar17,&lStack_110,&uStack_a0,param_2);
      iVar3 = -2;
      bVar10 = bStack_108;
LAB_10917e5f0:
      iVar8 = iStack_104;
      if ((bVar10 & 1) == 0) {
        if ((ulong)(lStack_f0 - lStack_f8 >> 2) <= (ulong)(long)iStack_e0) goto LAB_10917e7b8;
      }
      else if (iStack_100 <= iStack_104) goto LAB_10917e7b8;
      iVar9 = *(int *)(param_1 + 8);
      lVar11 = *(long *)(param_1 + 0x10);
      pdVar13 = pdVar12;
      if (iVar3 != iStack_104 + -1) {
        iVar3 = iStack_104;
        if (iVar9 <= iStack_104) {
          iVar3 = iStack_104 - iVar9;
        }
        pdVar13 = (double *)(lVar11 + (long)iVar3 * 0x18);
        dVar16 = dVar18 * pdVar13[1] + *pdVar13 * dVar17 + pdVar13[2] * dVar19;
        iVar3 = -(uint)(dVar16 < -8e-16);
        if (8e-16 < dVar16) {
          iVar3 = 1;
        }
        pdStack_b0 = pdVar13;
        if (iVar3 == 0) {
          puVar6 = &uStack_a0;
          FUN_109178740(puVar6,param_2,pdVar13);
          iVar3 = (int)puVar6;
          iVar9 = *(int *)(param_1 + 8);
          lVar11 = *(long *)(param_1 + 0x10);
        }
        uVar15 = -iVar3;
        uStack_a8 = uVar15;
      }
      iVar3 = (iVar8 + 1) - iVar9;
      if (iVar8 + 1 < iVar9) {
        iVar3 = iVar8 + 1;
      }
      pdVar12 = (double *)(lVar11 + (long)iVar3 * 0x18);
      dVar16 = dVar18 * pdVar12[1] + *pdVar12 * dVar17 + pdVar12[2] * dVar19;
      uVar4 = -(uint)(dVar16 < -8e-16);
      if (8e-16 < dVar16) {
        uVar4 = 1;
      }
      if (uVar4 == 0) {
        puVar6 = &uStack_a0;
        FUN_109178740(puVar6,param_2,pdVar12);
        uVar4 = (uint)puVar6;
      }
      if (uVar4 == 0 || uVar4 != -uVar15) {
        if ((uVar4 & uVar15) == 0) {
LAB_10917e744:
          uStack_a8 = -uVar4;
          puVar6 = &uStack_a0;
          pdStack_b0 = pdVar12;
          FUN_10917c688(puVar6,param_2,pdVar13,pdVar12);
          uVar5 = (uint)puVar6;
        }
        else {
          ppuVar7 = &puStack_d8;
          FUN_10917cf14(ppuVar7,pdVar12);
          uStack_a8 = -uVar4;
          if ((int)ppuVar7 < 0) {
            uVar5 = 0;
            pdStack_b0 = pdVar12;
          }
          else {
            if ((int)ppuVar7 == 0) goto LAB_10917e744;
            uVar5 = 1;
            pdStack_b0 = pdVar12;
          }
        }
      }
      else {
        uVar5 = 0;
        uStack_a8 = -uVar4;
        pdStack_b0 = pdVar12;
      }
      uVar15 = -uVar4;
      uVar14 = uVar14 ^ uVar5;
      iVar3 = iVar8;
      if (bStack_108 == 1) {
        iStack_104 = iStack_104 + 1;
        bVar10 = bStack_108;
      }
      else {
        uVar2 = (long)iStack_e0 + 1;
        iStack_e0 = (int)uVar2;
        bVar10 = 0;
        if (uVar2 < (ulong)(lStack_f0 - lStack_f8 >> 2)) {
          iStack_104 = *(int *)(lStack_f8 + uVar2 * 4);
          bVar10 = bStack_108;
        }
      }
      goto LAB_10917e5f0;
    }
    if (0 < iVar8) {
      iVar3 = 1;
      do {
        iVar9 = iVar3;
        if (-1 < iVar3 - iVar8) {
          iVar9 = iVar3 - iVar8;
        }
        pdVar13 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar9 * 0x18);
        dVar16 = dVar18 * pdVar13[1] + *pdVar13 * dVar17 + pdVar13[2] * dVar19;
        uVar4 = -(uint)(dVar16 < -8e-16);
        if (8e-16 < dVar16) {
          uVar4 = 1;
        }
        if (uVar4 == 0) {
          puVar6 = &uStack_a0;
          FUN_109178740(puVar6,param_2,pdVar13);
          uVar4 = (uint)puVar6;
        }
        if (uVar4 == 0 || uVar4 != -uVar15) {
          if ((uVar4 & uVar15) == 0) {
LAB_10917e588:
            uStack_a8 = -uVar4;
            puVar6 = &uStack_a0;
            pdStack_b0 = pdVar13;
            FUN_10917c688(puVar6,param_2,pdVar12,pdVar13);
            uVar5 = (uint)puVar6;
          }
          else {
            ppuVar7 = &puStack_d8;
            FUN_10917cf14(ppuVar7,pdVar13);
            uStack_a8 = -uVar4;
            if ((int)ppuVar7 < 0) {
              uVar5 = 0;
              pdStack_b0 = pdVar13;
            }
            else {
              if ((int)ppuVar7 == 0) goto LAB_10917e588;
              uVar5 = 1;
              pdStack_b0 = pdVar13;
            }
          }
        }
        else {
          uVar5 = 0;
          uStack_a8 = -uVar4;
          pdStack_b0 = pdVar13;
        }
        uVar15 = -uVar4;
        uVar14 = uVar14 ^ uVar5;
        iVar8 = *(int *)(param_1 + 8);
        bVar1 = iVar3 < iVar8;
        pdVar12 = pdVar13;
        iVar3 = iVar3 + 1;
      } while (bVar1);
    }
  }
LAB_10917e7c4:
  return uVar14 & 1;
LAB_10917e7b8:
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  goto LAB_10917e7c4;
}



/* Entry: 10917e810; end: 10917e997;  */

undefined8 * FUN_10917e810(undefined8 *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  double *pdVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dStack_70;
  double dStack_68;
  double dStack_60;
  
  *param_1 = &PTR_FUN_110aded90;
  (**(code **)(*param_2 + 0x20))(param_1 + 4,param_2);
  param_1[0xc] = 0;
  param_1[0xb] = param_1 + 0xc;
  *(undefined4 *)(param_1 + 0xe) = 0x1e;
  *(undefined1 *)((long)param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  param_1[0xd] = 0;
  param_1[10] = &PTR_FUN_110adedf8;
  param_1[0x10] = param_1;
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0x13] = 0;
  param_1[0x12] = param_1 + 0x13;
  param_1[0x14] = 0;
  *(undefined4 *)(param_1 + 1) = 4;
  puVar1 = (undefined8 *)0x60;
  __Znam();
  lVar2 = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
  puVar1[0xb] = 0;
  puVar1[10] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0.0;
  param_1[2] = puVar1;
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  pdVar3 = (double *)(puVar1 + 2);
  do {
    FUN_109179894(&dStack_70,param_2,lVar2);
    dVar4 = dStack_68 * dStack_68 + dStack_70 * dStack_70 + dStack_60 * dStack_60;
    dVar6 = SQRT(dVar4);
    dVar5 = 1.0 / dVar6;
    if (dVar4 == 0.0) {
      dVar5 = dVar6;
    }
    pdVar3[-1] = dStack_68 * dVar5;
    pdVar3[-2] = dStack_70 * dVar5;
    *pdVar3 = dStack_60 * dVar5;
    lVar2 = lVar2 + 1;
    pdVar3 = pdVar3 + 3;
  } while (lVar2 != 4);
  *(undefined1 *)(param_1 + 3) = 1;
  FUN_10917db94(param_1);
  FUN_10917dc38(param_1);
  return param_1;
}



/* Entry: 10917e998; end: 10917ea03;  */

undefined8 * FUN_10917e998(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110aded90;
  if ((*(char *)(param_1 + 3) == '\x01') && (param_1[2] != 0)) {
    __ZdaPv();
  }
  func_0x0001091804f4(param_1 + 0x12,param_1[0x13]);
  param_1[10] = &PTR_DAT_110adee70;
  FUN_10917c57c(param_1 + 0xb,param_1[0xc]);
  return param_1;
}



/* Entry: 10917ea04; end: 10917ea17;  */

void FUN_10917ea04(void)

{
  FUN_10917e998();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 10917ea18; end: 10917eb5b;  */

undefined8 * FUN_10917ea18(long param_1)

{
  uint uVar1;
  undefined1 auVar2 [16];
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  
  puVar3 = (undefined8 *)0xa8;
  __Znwm();
  *puVar3 = &PTR_FUN_110aded90;
  uVar1 = *(uint *)(param_1 + 8);
  *(uint *)(puVar3 + 1) = uVar1;
  lVar5 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1) *
          8;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = (long)(int)uVar1;
  lVar4 = lVar5;
  if (SUB168(auVar2 * ZEXT816(0x18),8) != 0) {
    lVar4 = -1;
  }
  __Znam();
  if (uVar1 != 0) {
    _bzero(lVar4,((lVar5 - 0x18U) / 0x18) * 0x18 + 0x18);
  }
  puVar3[2] = lVar4;
  *(undefined1 *)(puVar3 + 3) = 1;
  puVar3[4] = &PTR_FUN_110aded28;
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  puVar3[6] = *(undefined8 *)(param_1 + 0x30);
  puVar3[5] = uVar6;
  uVar6 = *(undefined8 *)(param_1 + 0x38);
  puVar3[8] = *(undefined8 *)(param_1 + 0x40);
  puVar3[7] = uVar6;
  *(undefined1 *)(puVar3 + 9) = *(undefined1 *)(param_1 + 0x48);
  *(undefined4 *)((long)puVar3 + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(puVar3 + 0xe) = 0x1e;
  *(undefined1 *)((long)puVar3 + 0x74) = 0;
  *(undefined4 *)(puVar3 + 0xf) = 0;
  puVar3[0xc] = 0;
  puVar3[0xd] = 0;
  puVar3[10] = &PTR_FUN_110adedf8;
  puVar3[0xb] = puVar3 + 0xc;
  puVar3[0x10] = puVar3;
  *(undefined4 *)(puVar3 + 0x11) = 0;
  puVar3[0x14] = 0;
  puVar3[0x13] = 0;
  puVar3[0x12] = puVar3 + 0x13;
  _memcpy(lVar4,*(undefined8 *)(param_1 + 0x10),lVar5);
  return puVar3;
}



/* Entry: 10917eb5c; end: 10917ede7;  */

int FUN_10917eb5c(long param_1,double *param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long *plVar5;
  bool bVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  double *pdVar12;
  long *plVar13;
  int iVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  double dVar17;
  double dVar18;
  
  iVar7 = *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x88) = iVar7 + 1;
  iVar14 = *(int *)(param_1 + 8);
  if ((iVar14 >= 10 && iVar7 != 0x12) && (iVar14 < 10 || 0x11 < iVar7)) {
    if (*(long *)(param_1 + 0xa0) == 0) {
      do {
        iVar7 = iVar14;
        if (*(int *)(param_1 + 8) <= iVar14) {
          iVar7 = iVar14 - *(int *)(param_1 + 8);
        }
        pdVar12 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar7 * 0x18);
        puVar15 = (undefined8 *)(param_1 + 0x98);
        puVar16 = (undefined8 *)(param_1 + 0x98);
        if (*(undefined8 **)(param_1 + 0x98) != (undefined8 *)0x0) {
          puVar4 = *(undefined8 **)(param_1 + 0x98);
          do {
            while (puVar8 = puVar4, puVar15 = puVar8, (double)puVar8[4] <= *pdVar12) {
              if (*pdVar12 <= (double)puVar8[4]) {
                if (pdVar12[1] < (double)puVar8[5]) break;
                if (pdVar12[1] <= (double)puVar8[5]) {
                  if (pdVar12[2] < (double)puVar8[6]) break;
                  if (pdVar12[2] <= (double)puVar8[6]) goto LAB_10917ed04;
                }
              }
              puVar4 = (undefined8 *)puVar8[1];
              if ((undefined8 *)puVar8[1] == (undefined8 *)0x0) {
                puVar16 = puVar8 + 1;
                goto LAB_10917eca4;
              }
            }
            puVar4 = (undefined8 *)*puVar8;
            puVar16 = puVar8;
          } while ((undefined8 *)*puVar8 != (undefined8 *)0x0);
        }
LAB_10917eca4:
        puVar8 = (undefined8 *)0x40;
        __Znwm();
        puVar8[4] = *pdVar12;
        puVar8[5] = pdVar12[1];
        puVar8[6] = pdVar12[2];
        *(undefined4 *)(puVar8 + 7) = 0;
        *puVar8 = 0;
        puVar8[1] = 0;
        puVar8[2] = puVar15;
        *puVar16 = puVar8;
        if (**(long **)(param_1 + 0x90) != 0) {
          *(long *)(param_1 + 0x90) = **(long **)(param_1 + 0x90);
        }
        func_0x000107c27be4(*(undefined8 *)(param_1 + 0x98),puVar8);
        *(long *)(param_1 + 0xa0) = *(long *)(param_1 + 0xa0) + 1;
LAB_10917ed04:
        *(int *)(puVar8 + 7) = iVar14;
        bVar6 = iVar14 != 0;
        iVar14 = iVar14 + -1;
      } while (bVar6 && iVar14 != 0);
    }
    plVar13 = (long *)(param_1 + 0x98);
    if ((long *)*plVar13 != (long *)0x0) {
      dVar18 = *param_2;
      dVar17 = param_2[1];
      plVar9 = plVar13;
      plVar5 = (long *)*plVar13;
      do {
        plVar10 = plVar5;
        if (dVar18 <= (double)plVar10[4]) {
          plVar11 = plVar10;
          if ((double)plVar10[4] <= dVar18) {
            if ((double)plVar10[5] < dVar17) goto LAB_10917ed34;
            if ((double)plVar10[5] <= dVar17) {
              lVar3 = 8;
              if (param_2[2] <= (double)plVar10[6]) {
                lVar3 = 0;
                plVar9 = plVar10;
              }
              plVar11 = (long *)((long)plVar10 + lVar3);
              plVar10 = plVar9;
            }
          }
        }
        else {
LAB_10917ed34:
          plVar11 = plVar10 + 1;
          plVar10 = plVar9;
        }
        plVar9 = plVar10;
        plVar5 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
      if (((plVar13 != plVar10) && ((double)plVar10[4] <= dVar18)) &&
         (((double)plVar10[4] < dVar18 ||
          (((double)plVar10[5] <= dVar17 &&
           (((double)plVar10[5] < dVar17 || ((double)plVar10[6] <= param_2[2])))))))) {
        return (int)plVar10[7];
      }
    }
  }
  else if (0 < iVar14) {
    iVar7 = 1;
    do {
      iVar1 = -iVar14 + iVar7;
      iVar2 = iVar7;
      if (-1 < iVar1) {
        iVar2 = iVar1;
      }
      pdVar12 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar2 * 0x18);
      if (((*pdVar12 == *param_2) && (pdVar12[1] == param_2[1])) && (pdVar12[2] == param_2[2])) {
        return iVar7;
      }
      iVar7 = iVar7 + 1;
    } while (-iVar14 + iVar7 != 1);
  }
  return -1;
}



/* Entry: 10917ede8; end: 10917ee4b;  */

bool FUN_10917ede8(long param_1)

{
  double dVar1;
  double dVar2;
  
  dVar1 = *(double *)(param_1 + 0x40) - *(double *)(param_1 + 0x38);
  dVar2 = dVar1 + 6.283185307179586;
  if (dVar2 <= 0.0) {
    dVar2 = -1.0;
  }
  if (0.0 <= dVar1) {
    dVar2 = dVar1;
  }
  if (dVar2 < 3.141592653589793) {
    return true;
  }
  FUN_10917ee4c();
  return -1e-14 <= dVar2;
}



/* Entry: 10917ee4c; end: 10917ef73;  */

double FUN_10917ee4c(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  double dVar11;
  double dVar12;
  int iStack_74;
  
  iVar3 = *(int *)(param_1 + 8);
  dVar11 = 0.0;
  if (2 < iVar3) {
    uVar10 = param_1;
    FUN_10917f4a8(0,param_1,&iStack_74);
    iVar6 = (int)uVar10;
    iVar5 = (iVar6 + iVar3) - iStack_74;
    iVar7 = 0;
    if (iVar3 != 0) {
      iVar7 = iVar5 / iVar3;
    }
    iVar5 = iVar5 - iVar7 * iVar3;
    lVar8 = *(long *)(param_1 + 0x10);
    if (iVar3 <= iVar5) {
      iVar5 = iVar5 - iVar3;
    }
    iVar7 = iVar6;
    if (iVar3 <= iVar6) {
      iVar7 = iVar6 - iVar3;
    }
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar4 = (iStack_74 + iVar6) / iVar3;
    }
    iVar6 = (iStack_74 + iVar6) - iVar4 * iVar3;
    if (iVar3 <= iVar6) {
      iVar6 = iVar6 - iVar3;
    }
    FUN_109178c04(lVar8 + (long)iVar5 * 0x18,lVar8 + (long)iVar7 * 0x18,lVar8 + (long)iVar6 * 0x18);
    uVar9 = iVar3 + 1;
    dVar12 = dVar11;
    do {
      iVar7 = (int)uVar10;
      uVar10 = (ulong)(uint)(iVar7 + iStack_74);
      iVar5 = iVar7;
      if (-1 < iVar7 - iVar3) {
        iVar5 = iVar7 - iVar3;
      }
      uVar1 = (iStack_74 - iVar3) + iVar7;
      uVar2 = iVar7 + iStack_74;
      if (-1 < (int)uVar1) {
        uVar2 = uVar1;
      }
      iVar6 = (iStack_74 * 2 - iVar3) + iVar7;
      iVar7 = iStack_74 * 2 + iVar7;
      if (-1 < iVar6) {
        iVar7 = iVar6;
      }
      FUN_109178c04(lVar8 + (long)iVar5 * 0x18,lVar8 + (long)(int)uVar2 * 0x18,
                    lVar8 + (long)iVar7 * 0x18);
      dVar12 = dVar12 + dVar11;
      uVar9 = uVar9 - 1;
    } while (2 < uVar9);
    dVar11 = dVar12 * (double)iStack_74;
  }
  return dVar11;
}



/* Entry: 10917ef74; end: 10917f02f;  */

double FUN_10917ef74(double param_1,ulong param_2)

{
  long lVar1;
  double dVar2;
  ulong uVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  uint uVar7;
  double *pdVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  long lVar15;
  int iVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dStack_160;
  double dStack_158;
  double dStack_150;
  double dStack_148;
  double dStack_140;
  double dStack_138;
  double dStack_130;
  double dStack_128;
  double dStack_120;
  undefined1 auStack_71 [9];
  long lStack_68;
  undefined1 auStack_31 [9];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_2 + 0x18) & 1) == 0) {
    FUN_1091797b4(auStack_31,&UNK_10f55a3b9,0x112);
    func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a3ee,0x1c);
    FUN_109179870(auStack_31);
  }
  uVar3 = param_2;
  FUN_10917ede8();
  if ((uVar3 & 1) == 0) {
    FUN_10917f030();
    uVar3 = param_2;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_109179870(auStack_31);
    __Unwind_Resume();
    lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
    if ((*(byte *)(uVar3 + 0x18) & 1) == 0) {
      FUN_1091797b4(auStack_71,&UNK_10f55a3b9,0x119);
      func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a3ee,0x1c);
      FUN_109179870(auStack_71);
    }
    *(undefined4 *)(uVar3 + 0x70) = 0x1e;
    *(undefined1 *)(uVar3 + 0x74) = 0;
    *(undefined4 *)(uVar3 + 0x78) = 0;
    puVar9 = (undefined8 *)(uVar3 + 0x60);
    FUN_10917c57c(uVar3 + 0x58,*puVar9);
    *(undefined8 **)(uVar3 + 0x58) = puVar9;
    *puVar9 = 0;
    puVar9 = (undefined8 *)(uVar3 + 0x98);
    *(undefined8 *)(uVar3 + 0x68) = 0;
    *(undefined4 *)(uVar3 + 0x88) = 0;
    func_0x0001091804f4(uVar3 + 0x90,*puVar9);
    *puVar9 = 0;
    *(undefined8 *)(uVar3 + 0xa0) = 0;
    *(undefined8 **)(uVar3 + 0x90) = puVar9;
    uVar4 = *(ulong *)(uVar3 + 0x10);
    pcVar5 = (code *)(uVar4 + (long)*(int *)(uVar3 + 8) * 0x18);
    func_0x000109180284();
    *(byte *)(uVar3 + 0x48) = *(byte *)(uVar3 + 0x48) ^ 1;
    dVar17 = *(double *)(uVar3 + 0x28);
    if ((dVar17 <= -1.5707963267948966) ||
       (dVar17 = *(double *)(uVar3 + 0x30), 1.5707963267948966 <= dVar17)) {
      FUN_10917dc38();
    }
    else {
      *(undefined8 *)(uVar3 + 0x30) = 0x3ff921fb54442d18;
      *(undefined8 *)(uVar3 + 0x28) = 0xbff921fb54442d18;
      dVar17 = -3.141592653589793;
      *(undefined8 *)(uVar3 + 0x40) = 0x400921fb54442d18;
      *(undefined8 *)(uVar3 + 0x38) = 0xc00921fb54442d18;
      uVar3 = uVar4;
    }
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
      ___stack_chk_fail();
      FUN_109179870(auStack_71);
      __Unwind_Resume();
      uVar11 = *(uint *)(uVar3 + 8);
      uVar4 = (ulong)uVar11;
      lVar6 = *(long *)(uVar3 + 0x10);
      uVar7 = -uVar11 & ((int)-uVar11 >> 0x1f ^ 0xffffffffU);
      pdVar8 = (double *)(lVar6 + (ulong)uVar7 * 0x18);
      dVar17 = *pdVar8;
      dStack_128 = pdVar8[1];
      dStack_120 = pdVar8[2];
      dStack_130 = dVar17;
      if ((int)uVar11 < 3) {
        dVar25 = 0.0;
      }
      else {
        lVar12 = 0;
        lVar6 = 0;
        dVar25 = 0.0;
        iVar14 = 1;
        do {
          dVar2 = dStack_120;
          dVar22 = dStack_128;
          dVar17 = dStack_130;
          iVar10 = (int)uVar4;
          lVar15 = *(long *)(uVar3 + 0x10);
          lVar1 = lVar15 + lVar12;
          dVar20 = *(double *)(lVar1 + 0x38);
          dVar19 = *(double *)(lVar1 + 0x40);
          dVar21 = *(double *)(lVar1 + 0x30);
          dVar18 = -(dStack_128 * dVar19) + dStack_120 * dVar20;
          dVar23 = -(dStack_120 * dVar21) + dStack_130 * dVar19;
          dVar24 = -(dStack_130 * dVar20) + dStack_128 * dVar21;
          dVar18 = SQRT(dVar23 * dVar23 + dVar18 * dVar18 + dVar24 * dVar24);
          _atan2(dVar18,dVar20 * dStack_128 + dStack_130 * dVar21 + dStack_120 * dVar19);
          iVar13 = (int)lVar6;
          iVar16 = iVar14;
          if (3.141582653589793 < dVar18) {
            dStack_148 = dVar17;
            dStack_140 = dVar22;
            dStack_138 = dVar2;
            pdVar8 = (double *)(lVar15 + (ulong)(-iVar10 & (-iVar10 >> 0x1f ^ 0xffffffffU)) * 0x18);
            dVar18 = *pdVar8;
            if (((dVar17 == dVar18) && (dVar18 = pdVar8[1], dVar22 == dVar18)) &&
               (dVar18 = pdVar8[2], dVar2 == dVar18)) {
              FUN_109178658(&dStack_160,pdVar8,lVar15 + lVar12 + 0x18);
              dVar17 = dStack_158 * dStack_158 + dStack_160 * dStack_160 + dStack_150 * dStack_150;
              dVar22 = SQRT(dVar17);
              dVar18 = 1.0 / dVar22;
              if (dVar17 == 0.0) {
                dVar18 = dVar22;
              }
              dStack_130 = dStack_160 * dVar18;
              dStack_128 = dStack_158 * dVar18;
              dVar18 = dStack_150 * dVar18;
              dStack_120 = dVar18;
            }
            else {
              FUN_109177f90(lVar15 + lVar12 + 0x18,pdVar8);
              iVar10 = *(int *)(uVar3 + 8);
              lVar15 = *(long *)(uVar3 + 0x10);
              pdVar8 = (double *)
                       (lVar15 + (ulong)(-iVar10 & (-iVar10 >> 0x1f ^ 0xffffffffU)) * 0x18);
              if (dVar18 < 3.141582653589793) {
                dStack_130 = *pdVar8;
                dStack_128 = pdVar8[1];
                dVar18 = pdVar8[2];
                dStack_120 = dVar18;
              }
              else {
                dVar18 = pdVar8[2] * -dStack_140 + dStack_138 * pdVar8[1];
                dStack_128 = *pdVar8 * -dStack_138 + dStack_148 * pdVar8[2];
                dStack_120 = -dStack_148 * pdVar8[1] + dStack_140 * *pdVar8;
                dStack_130 = dVar18;
                (*pcVar5)(pdVar8,&dStack_148,&dStack_130);
                dVar25 = dVar25 + dVar18;
                iVar10 = *(int *)(uVar3 + 8);
                lVar15 = *(long *)(uVar3 + 0x10);
              }
            }
            iVar10 = (iVar13 + 1) - iVar10;
            if (iVar10 < 0) {
              iVar10 = iVar13 + 1;
            }
            (*pcVar5)(&dStack_148,lVar15 + (long)iVar10 * 0x18,&dStack_130);
            dVar25 = dVar25 + dVar18;
            iVar10 = *(int *)(uVar3 + 8);
            lVar15 = *(long *)(uVar3 + 0x10);
            iVar16 = iVar13 + 1;
          }
          if (iVar10 <= iVar16) {
            iVar16 = iVar16 - iVar10;
          }
          iVar10 = (iVar13 + 2) - iVar10;
          iVar13 = iVar13 + 2;
          if (-1 < iVar10) {
            iVar13 = iVar10;
          }
          (*pcVar5)(&dStack_130,lVar15 + (long)iVar16 * 0x18,lVar15 + (long)iVar13 * 0x18);
          dVar25 = dVar25 + dVar18;
          uVar11 = *(uint *)(uVar3 + 8);
          uVar4 = (ulong)(int)uVar11;
          iVar14 = iVar14 + 1;
          lVar1 = lVar6 + 3;
          lVar6 = lVar6 + 1;
          lVar12 = lVar12 + 0x18;
        } while (lVar1 < (long)uVar4);
        lVar6 = *(long *)(uVar3 + 0x10);
        uVar7 = -uVar11 & ((int)-uVar11 >> 0x1f ^ 0xffffffffU);
        dVar17 = *(double *)(lVar6 + (ulong)uVar7 * 0x18);
      }
      lVar12 = lVar6 + (ulong)uVar7 * 0x18;
      if (((dStack_130 != dVar17) || (dVar17 = dStack_128, dStack_128 != *(double *)(lVar12 + 8)))
         || (dVar17 = dStack_120, dStack_120 != *(double *)(lVar12 + 0x10))) {
        (*pcVar5)(&dStack_130,lVar6 + (long)(int)uVar11 * 0x18 + -0x18);
        dVar25 = dVar25 + dVar17;
      }
      return dVar25;
    }
    return dVar17;
  }
  return param_1;
}



/* Entry: 10917f030; end: 10917f18b;  */

double FUN_10917f030(long param_1)

{
  long lVar1;
  double dVar2;
  long lVar3;
  code *pcVar4;
  uint uVar5;
  double *pdVar6;
  undefined8 *puVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  int iVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dStack_120;
  double dStack_118;
  double dStack_110;
  double dStack_108;
  double dStack_100;
  double dStack_f8;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  undefined1 auStack_31 [9];
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    FUN_1091797b4(auStack_31,&UNK_10f55a3b9,0x119);
    func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a3ee,0x1c);
    FUN_109179870(auStack_31);
  }
  *(undefined4 *)(param_1 + 0x70) = 0x1e;
  *(undefined1 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  puVar7 = (undefined8 *)(param_1 + 0x60);
  FUN_10917c57c(param_1 + 0x58,*puVar7);
  *(undefined8 **)(param_1 + 0x58) = puVar7;
  *puVar7 = 0;
  puVar7 = (undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 0x88) = 0;
  func_0x0001091804f4(param_1 + 0x90,*puVar7);
  *puVar7 = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 **)(param_1 + 0x90) = puVar7;
  lVar3 = *(long *)(param_1 + 0x10);
  pcVar4 = (code *)(lVar3 + (long)*(int *)(param_1 + 8) * 0x18);
  func_0x000109180284();
  *(byte *)(param_1 + 0x48) = *(byte *)(param_1 + 0x48) ^ 1;
  dVar16 = *(double *)(param_1 + 0x28);
  if ((dVar16 <= -1.5707963267948966) ||
     (dVar16 = *(double *)(param_1 + 0x30), 1.5707963267948966 <= dVar16)) {
    FUN_10917dc38();
  }
  else {
    *(undefined8 *)(param_1 + 0x30) = 0x3ff921fb54442d18;
    *(undefined8 *)(param_1 + 0x28) = 0xbff921fb54442d18;
    dVar16 = -3.141592653589793;
    *(undefined8 *)(param_1 + 0x40) = 0x400921fb54442d18;
    *(undefined8 *)(param_1 + 0x38) = 0xc00921fb54442d18;
    param_1 = lVar3;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_28) {
    ___stack_chk_fail();
    FUN_109179870(auStack_31);
    __Unwind_Resume();
    uVar9 = *(uint *)(param_1 + 8);
    uVar10 = (ulong)uVar9;
    lVar3 = *(long *)(param_1 + 0x10);
    uVar5 = -uVar9 & ((int)-uVar9 >> 0x1f ^ 0xffffffffU);
    pdVar6 = (double *)(lVar3 + (ulong)uVar5 * 0x18);
    dVar16 = *pdVar6;
    dStack_e8 = pdVar6[1];
    dStack_e0 = pdVar6[2];
    dStack_f0 = dVar16;
    if ((int)uVar9 < 3) {
      dVar24 = 0.0;
    }
    else {
      lVar11 = 0;
      lVar3 = 0;
      dVar24 = 0.0;
      iVar13 = 1;
      do {
        dVar2 = dStack_e0;
        dVar21 = dStack_e8;
        dVar16 = dStack_f0;
        iVar8 = (int)uVar10;
        lVar14 = *(long *)(param_1 + 0x10);
        lVar1 = lVar14 + lVar11;
        dVar19 = *(double *)(lVar1 + 0x38);
        dVar18 = *(double *)(lVar1 + 0x40);
        dVar20 = *(double *)(lVar1 + 0x30);
        dVar17 = -(dStack_e8 * dVar18) + dStack_e0 * dVar19;
        dVar22 = -(dStack_e0 * dVar20) + dStack_f0 * dVar18;
        dVar23 = -(dStack_f0 * dVar19) + dStack_e8 * dVar20;
        dVar17 = SQRT(dVar22 * dVar22 + dVar17 * dVar17 + dVar23 * dVar23);
        _atan2(dVar17,dVar19 * dStack_e8 + dStack_f0 * dVar20 + dStack_e0 * dVar18);
        iVar12 = (int)lVar3;
        iVar15 = iVar13;
        if (3.141582653589793 < dVar17) {
          dStack_108 = dVar16;
          dStack_100 = dVar21;
          dStack_f8 = dVar2;
          pdVar6 = (double *)(lVar14 + (ulong)(-iVar8 & (-iVar8 >> 0x1f ^ 0xffffffffU)) * 0x18);
          dVar17 = *pdVar6;
          if (((dVar16 == dVar17) && (dVar17 = pdVar6[1], dVar21 == dVar17)) &&
             (dVar17 = pdVar6[2], dVar2 == dVar17)) {
            FUN_109178658(&dStack_120,pdVar6,lVar14 + lVar11 + 0x18);
            dVar16 = dStack_118 * dStack_118 + dStack_120 * dStack_120 + dStack_110 * dStack_110;
            dVar21 = SQRT(dVar16);
            dVar17 = 1.0 / dVar21;
            if (dVar16 == 0.0) {
              dVar17 = dVar21;
            }
            dStack_f0 = dStack_120 * dVar17;
            dStack_e8 = dStack_118 * dVar17;
            dVar17 = dStack_110 * dVar17;
            dStack_e0 = dVar17;
          }
          else {
            FUN_109177f90(lVar14 + lVar11 + 0x18,pdVar6);
            iVar8 = *(int *)(param_1 + 8);
            lVar14 = *(long *)(param_1 + 0x10);
            pdVar6 = (double *)(lVar14 + (ulong)(-iVar8 & (-iVar8 >> 0x1f ^ 0xffffffffU)) * 0x18);
            if (dVar17 < 3.141582653589793) {
              dStack_f0 = *pdVar6;
              dStack_e8 = pdVar6[1];
              dVar17 = pdVar6[2];
              dStack_e0 = dVar17;
            }
            else {
              dVar17 = pdVar6[2] * -dStack_100 + dStack_f8 * pdVar6[1];
              dStack_e8 = *pdVar6 * -dStack_f8 + dStack_108 * pdVar6[2];
              dStack_e0 = -dStack_108 * pdVar6[1] + dStack_100 * *pdVar6;
              dStack_f0 = dVar17;
              (*pcVar4)(pdVar6,&dStack_108,&dStack_f0);
              dVar24 = dVar24 + dVar17;
              iVar8 = *(int *)(param_1 + 8);
              lVar14 = *(long *)(param_1 + 0x10);
            }
          }
          iVar8 = (iVar12 + 1) - iVar8;
          if (iVar8 < 0) {
            iVar8 = iVar12 + 1;
          }
          (*pcVar4)(&dStack_108,lVar14 + (long)iVar8 * 0x18,&dStack_f0);
          dVar24 = dVar24 + dVar17;
          iVar8 = *(int *)(param_1 + 8);
          lVar14 = *(long *)(param_1 + 0x10);
          iVar15 = iVar12 + 1;
        }
        if (iVar8 <= iVar15) {
          iVar15 = iVar15 - iVar8;
        }
        iVar8 = (iVar12 + 2) - iVar8;
        iVar12 = iVar12 + 2;
        if (-1 < iVar8) {
          iVar12 = iVar8;
        }
        (*pcVar4)(&dStack_f0,lVar14 + (long)iVar15 * 0x18,lVar14 + (long)iVar12 * 0x18);
        dVar24 = dVar24 + dVar17;
        uVar9 = *(uint *)(param_1 + 8);
        uVar10 = (ulong)(int)uVar9;
        iVar13 = iVar13 + 1;
        lVar1 = lVar3 + 3;
        lVar3 = lVar3 + 1;
        lVar11 = lVar11 + 0x18;
      } while (lVar1 < (long)uVar10);
      lVar3 = *(long *)(param_1 + 0x10);
      uVar5 = -uVar9 & ((int)-uVar9 >> 0x1f ^ 0xffffffffU);
      dVar16 = *(double *)(lVar3 + (ulong)uVar5 * 0x18);
    }
    lVar11 = lVar3 + (ulong)uVar5 * 0x18;
    if (((dStack_f0 != dVar16) || (dVar16 = dStack_e8, dStack_e8 != *(double *)(lVar11 + 8))) ||
       (dVar16 = dStack_e0, dStack_e0 != *(double *)(lVar11 + 0x10))) {
      (*pcVar4)(&dStack_f0,lVar3 + (long)(int)uVar9 * 0x18 + -0x18);
      dVar24 = dVar24 + dVar16;
    }
    return dVar24;
  }
  return dVar16;
}



/* Entry: 10917f18c; end: 10917f4a7;  */

double FUN_10917f18c(long param_1,code *param_2)

{
  long lVar1;
  double dVar2;
  long lVar3;
  uint uVar4;
  double *pdVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  long lVar12;
  int iVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dStack_e0;
  double dStack_d8;
  double dStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double dStack_b0;
  double dStack_a8;
  double dStack_a0;
  
  uVar7 = *(uint *)(param_1 + 8);
  uVar8 = (ulong)uVar7;
  lVar3 = *(long *)(param_1 + 0x10);
  uVar4 = -uVar7 & ((int)-uVar7 >> 0x1f ^ 0xffffffffU);
  pdVar5 = (double *)(lVar3 + (ulong)uVar4 * 0x18);
  dVar14 = *pdVar5;
  dStack_a8 = pdVar5[1];
  dStack_a0 = pdVar5[2];
  dStack_b0 = dVar14;
  if ((int)uVar7 < 3) {
    dVar22 = 0.0;
  }
  else {
    lVar9 = 0;
    lVar3 = 0;
    dVar22 = 0.0;
    iVar11 = 1;
    do {
      dVar2 = dStack_a0;
      dVar19 = dStack_a8;
      dVar14 = dStack_b0;
      iVar6 = (int)uVar8;
      lVar12 = *(long *)(param_1 + 0x10);
      lVar1 = lVar12 + lVar9;
      dVar17 = *(double *)(lVar1 + 0x38);
      dVar16 = *(double *)(lVar1 + 0x40);
      dVar18 = *(double *)(lVar1 + 0x30);
      dVar15 = -(dStack_a8 * dVar16) + dStack_a0 * dVar17;
      dVar20 = -(dStack_a0 * dVar18) + dStack_b0 * dVar16;
      dVar21 = -(dStack_b0 * dVar17) + dStack_a8 * dVar18;
      dVar15 = SQRT(dVar20 * dVar20 + dVar15 * dVar15 + dVar21 * dVar21);
      _atan2(dVar15,dVar17 * dStack_a8 + dStack_b0 * dVar18 + dStack_a0 * dVar16);
      iVar10 = (int)lVar3;
      iVar13 = iVar11;
      if (3.141582653589793 < dVar15) {
        dStack_c8 = dVar14;
        dStack_c0 = dVar19;
        dStack_b8 = dVar2;
        pdVar5 = (double *)(lVar12 + (ulong)(-iVar6 & (-iVar6 >> 0x1f ^ 0xffffffffU)) * 0x18);
        dVar15 = *pdVar5;
        if (((dVar14 == dVar15) && (dVar15 = pdVar5[1], dVar19 == dVar15)) &&
           (dVar15 = pdVar5[2], dVar2 == dVar15)) {
          FUN_109178658(&dStack_e0,pdVar5,lVar12 + lVar9 + 0x18);
          dVar14 = dStack_d8 * dStack_d8 + dStack_e0 * dStack_e0 + dStack_d0 * dStack_d0;
          dVar19 = SQRT(dVar14);
          dVar15 = 1.0 / dVar19;
          if (dVar14 == 0.0) {
            dVar15 = dVar19;
          }
          dStack_b0 = dStack_e0 * dVar15;
          dStack_a8 = dStack_d8 * dVar15;
          dVar15 = dStack_d0 * dVar15;
          dStack_a0 = dVar15;
        }
        else {
          FUN_109177f90(lVar12 + lVar9 + 0x18,pdVar5);
          iVar6 = *(int *)(param_1 + 8);
          lVar12 = *(long *)(param_1 + 0x10);
          pdVar5 = (double *)(lVar12 + (ulong)(-iVar6 & (-iVar6 >> 0x1f ^ 0xffffffffU)) * 0x18);
          if (dVar15 < 3.141582653589793) {
            dStack_b0 = *pdVar5;
            dStack_a8 = pdVar5[1];
            dVar15 = pdVar5[2];
            dStack_a0 = dVar15;
          }
          else {
            dVar15 = pdVar5[2] * -dStack_c0 + dStack_b8 * pdVar5[1];
            dStack_a8 = *pdVar5 * -dStack_b8 + dStack_c8 * pdVar5[2];
            dStack_a0 = -dStack_c8 * pdVar5[1] + dStack_c0 * *pdVar5;
            dStack_b0 = dVar15;
            (*param_2)(pdVar5,&dStack_c8,&dStack_b0);
            dVar22 = dVar22 + dVar15;
            iVar6 = *(int *)(param_1 + 8);
            lVar12 = *(long *)(param_1 + 0x10);
          }
        }
        iVar6 = (iVar10 + 1) - iVar6;
        if (iVar6 < 0) {
          iVar6 = iVar10 + 1;
        }
        (*param_2)(&dStack_c8,lVar12 + (long)iVar6 * 0x18,&dStack_b0);
        dVar22 = dVar22 + dVar15;
        iVar6 = *(int *)(param_1 + 8);
        lVar12 = *(long *)(param_1 + 0x10);
        iVar13 = iVar10 + 1;
      }
      if (iVar6 <= iVar13) {
        iVar13 = iVar13 - iVar6;
      }
      iVar6 = (iVar10 + 2) - iVar6;
      iVar10 = iVar10 + 2;
      if (-1 < iVar6) {
        iVar10 = iVar6;
      }
      (*param_2)(&dStack_b0,lVar12 + (long)iVar13 * 0x18,lVar12 + (long)iVar10 * 0x18);
      dVar22 = dVar22 + dVar15;
      uVar7 = *(uint *)(param_1 + 8);
      uVar8 = (ulong)(int)uVar7;
      iVar11 = iVar11 + 1;
      lVar1 = lVar3 + 3;
      lVar3 = lVar3 + 1;
      lVar9 = lVar9 + 0x18;
    } while (lVar1 < (long)uVar8);
    lVar3 = *(long *)(param_1 + 0x10);
    uVar4 = -uVar7 & ((int)-uVar7 >> 0x1f ^ 0xffffffffU);
    dVar14 = *(double *)(lVar3 + (ulong)uVar4 * 0x18);
  }
  lVar9 = lVar3 + (ulong)uVar4 * 0x18;
  if (((dStack_b0 != dVar14) || (dVar14 = dStack_a8, dStack_a8 != *(double *)(lVar9 + 8))) ||
     (dVar14 = dStack_a0, dStack_a0 != *(double *)(lVar9 + 0x10))) {
    (*param_2)(&dStack_b0,lVar3 + (long)(int)uVar7 * 0x18 + -0x18);
    dVar22 = dVar22 + dVar14;
  }
  return dVar22;
}



/* Entry: 10917f4a8; end: 10917f5cf;  */

ulong FUN_10917f4a8(long param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  undefined4 uVar5;
  long lVar6;
  double *pdVar7;
  ulong uVar8;
  double *pdVar9;
  
  uVar1 = *(uint *)(param_1 + 8);
  lVar6 = *(long *)(param_1 + 0x10);
  if ((int)uVar1 < 2) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    pdVar7 = (double *)(lVar6 + 0x28);
    uVar8 = 1;
    do {
      iVar2 = (int)uVar4;
      if ((int)uVar1 <= iVar2) {
        iVar2 = iVar2 - uVar1;
      }
      pdVar9 = (double *)(lVar6 + (long)iVar2 * 0x18);
      if (*pdVar9 <= pdVar7[-2]) {
        if (pdVar7[-2] <= *pdVar9) {
          if ((pdVar7[-1] < pdVar9[1]) || ((pdVar7[-1] <= pdVar9[1] && (*pdVar7 < pdVar9[2]))))
          goto LAB_10917f4e4;
        }
      }
      else {
LAB_10917f4e4:
        uVar4 = uVar8;
      }
      uVar8 = uVar8 + 1;
      pdVar7 = pdVar7 + 3;
    } while (uVar1 != uVar8);
  }
  uVar3 = (uint)uVar4;
  iVar2 = (uVar3 + 1) - uVar1;
  if ((int)(uVar3 + 1) < (int)uVar1) {
    iVar2 = uVar3 + 1;
  }
  pdVar7 = (double *)(lVar6 + (long)iVar2 * 0x18);
  uVar1 = uVar3 + uVar1;
  uVar8 = (ulong)uVar1;
  iVar2 = uVar1 - 1;
  if (-1 < (int)(uVar3 - 1)) {
    iVar2 = uVar3 - 1;
  }
  pdVar9 = (double *)(lVar6 + (long)iVar2 * 0x18);
  if (*pdVar9 <= *pdVar7) {
    if (*pdVar9 < *pdVar7) {
      uVar5 = 0xffffffff;
      goto LAB_10917f58c;
    }
    if (pdVar9[1] <= pdVar7[1]) {
      uVar5 = 0xffffffff;
      if (pdVar7[1] <= pdVar9[1]) {
        if (pdVar7[2] < pdVar9[2]) {
          uVar5 = 1;
          uVar1 = uVar3;
        }
        uVar8 = (ulong)uVar1;
      }
      goto LAB_10917f58c;
    }
  }
  uVar5 = 1;
  uVar8 = uVar4;
LAB_10917f58c:
  *param_2 = uVar5;
  return uVar8;
}



/* Entry: 10917f5d0; end: 10917f693;  */

long FUN_10917f5d0(long param_1,long param_2)

{
  long lVar1;
  double dVar2;
  double dVar3;
  double dStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_40;
  double dStack_38;
  double dStack_30;
  
  FUN_10917adb8(&dStack_f0,param_2 + 0xb);
  dVar2 = dStack_e8 * dStack_e8 + dStack_f0 * dStack_f0 + dStack_e0 * dStack_e0;
  dVar3 = SQRT(dVar2);
  dStack_30 = 1.0 / dVar3;
  if (dVar2 == 0.0) {
    dStack_30 = dVar3;
  }
  dStack_40 = dStack_f0 * dStack_30;
  dStack_38 = dStack_e8 * dStack_30;
  dStack_30 = dStack_e0 * dStack_30;
  lVar1 = param_1 + 0x20;
  FUN_10917d7f4(lVar1,&dStack_40);
  if ((int)lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_10917e810(&dStack_f0,param_2);
    FUN_10917f694(param_1,&dStack_f0);
    FUN_10917e998(&dStack_f0);
  }
  return param_1;
}



/* Entry: 10917f694; end: 10917f7e7;  */

void FUN_10917f694(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined1 auStack_68 [8];
  double dStack_60;
  double dStack_58;
  double dStack_50;
  double dStack_48;
  undefined **ppuStack_40;
  byte bStack_38;
  
  lVar1 = param_1 + 0x20;
  FUN_10917d2a4(lVar1,param_2 + 0x20);
  if (((int)lVar1 != 0) &&
     ((uVar2 = param_1,
      FUN_10917e38c(param_1,*(long *)(param_2 + 0x10) +
                            (ulong)(-*(int *)(param_2 + 8) &
                                   (-*(int *)(param_2 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
      (uVar2 & 1) != 0 ||
      (uVar2 = param_1,
      FUN_10917eb5c(param_1,*(long *)(param_2 + 0x10) +
                            (ulong)(-*(int *)(param_2 + 8) &
                                   (-*(int *)(param_2 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
      -1 < (int)uVar2)))) {
    ppuStack_40 = &PTR_FUN_110adeea8;
    bStack_38 = 0;
    uVar2 = param_1;
    FUN_10917fc04(param_1,param_2,&ppuStack_40);
    if (((uVar2 & 1) == 0) &&
       (((((bStack_38 & 1) == 0 &&
          (FUN_10917d374(auStack_68,param_1 + 0x20,param_2 + 0x20), dStack_60 == -1.5707963267948966
          )) && (dStack_58 == 1.5707963267948966)) &&
        ((dStack_48 - dStack_50 == 6.283185307179586 &&
         (lVar1 = param_2,
         FUN_10917e38c(param_2,*(long *)(param_1 + 0x10) +
                               (ulong)(-*(int *)(param_1 + 8) &
                                      (-*(int *)(param_1 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
         (int)lVar1 != 0)))))) {
      FUN_10917eb5c(param_2,*(long *)(param_1 + 0x10) +
                            (ulong)(-*(int *)(param_1 + 8) &
                                   (-*(int *)(param_1 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18);
    }
  }
  return;
}



/* Entry: 10917f7e8; end: 10917f877;  */

undefined1 * FUN_10917f7e8(long param_1,long *param_2)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 auStack_c8 [168];
  
  (**(code **)(*param_2 + 0x20))(auStack_c8,param_2);
  lVar1 = param_1 + 0x20;
  func_0x00010917d2dc(lVar1,auStack_c8);
  if ((int)lVar1 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    FUN_10917e810(auStack_c8,param_2);
    puVar2 = auStack_c8;
    FUN_10917f878(puVar2,param_1);
    FUN_10917e998(auStack_c8);
  }
  return puVar2;
}



/* Entry: 10917f878; end: 10917fa7b;  */

void FUN_10917f878(ulong param_1,ulong param_2)

{
  bool bVar1;
  long lVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  undefined **ppuStack_40;
  byte bStack_38;
  
  iVar4 = *(int *)(param_2 + 8);
  do {
    uVar5 = param_2;
    param_2 = param_1;
    bVar1 = *(int *)(param_2 + 8) < iVar4;
    param_1 = uVar5;
    iVar4 = *(int *)(param_2 + 8);
  } while (bVar1);
  lVar2 = param_2 + 0x20;
  func_0x00010917d2dc(lVar2,uVar5 + 0x20);
  if (((int)lVar2 != 0) &&
     ((uVar3 = param_2,
      FUN_10917e38c(param_2,*(long *)(uVar5 + 0x10) +
                            (ulong)(-*(int *)(uVar5 + 8) &
                                   (-*(int *)(uVar5 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
      (int)uVar3 == 0 ||
      (uVar3 = param_2,
      FUN_10917eb5c(param_2,*(long *)(uVar5 + 0x10) +
                            (ulong)(-*(int *)(uVar5 + 8) &
                                   (-*(int *)(uVar5 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
      -1 < (int)uVar3)))) {
    ppuStack_40 = &PTR_DAT_110adeef8;
    bStack_38 = 0;
    uVar3 = param_2;
    FUN_10917fc04(param_2,uVar5,&ppuStack_40);
    if (((uVar3 & 1) == 0) && ((bStack_38 & 1) == 0)) {
      lVar2 = uVar5 + 0x20;
      func_0x00010917d2a4(lVar2,param_2 + 0x20);
      if (((int)lVar2 != 0) &&
         (uVar3 = uVar5,
         FUN_10917e38c(uVar5,*(long *)(param_2 + 0x10) +
                             (ulong)(-*(int *)(param_2 + 8) &
                                    (-*(int *)(param_2 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
         (int)uVar3 != 0)) {
        FUN_10917eb5c(uVar5,*(long *)(param_2 + 0x10) +
                            (ulong)(-*(int *)(param_2 + 8) &
                                   (-*(int *)(param_2 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18);
      }
    }
  }
  return;
}



/* Entry: 10917fa7c; end: 10917fa83;  */

/* WARNING: Removing unreachable block (ram,0x00010917faf0) */

void FUN_10917fa7c(long param_1,long param_2)

{
  char *pcVar1;
  uint uVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined1 auVar6 [16];
  byte *pbVar7;
  long lVar8;
  long lVar9;
  
  pbVar7 = *(byte **)(param_2 + 8);
  bVar4 = *pbVar7;
  *(byte **)(param_2 + 8) = pbVar7 + 1;
  if (bVar4 < 2) {
    uVar3 = *(undefined4 *)(pbVar7 + 1);
    *(byte **)(param_2 + 8) = pbVar7 + 5;
    *(undefined4 *)(param_1 + 8) = uVar3;
    if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x10) != 0)) {
      __ZdaPv();
    }
    uVar2 = *(uint *)(param_1 + 8);
    lVar8 = ((-(ulong)(uVar2 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar2 << 1) + (long)(int)uVar2)
            * 8;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = (long)(int)uVar2;
    if (SUB168(auVar6 * ZEXT816(0x18),8) != 0) {
      lVar8 = -1;
    }
    __Znam();
    if (uVar2 != 0) {
      _bzero(lVar8,(((long)(int)uVar2 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18);
    }
    *(long *)(param_1 + 0x10) = lVar8;
    lVar9 = *(long *)(param_2 + 8);
    _memcpy(lVar8,lVar9,(long)(int)(uVar2 * 0x18));
    pcVar1 = (char *)(lVar9 + (int)(uVar2 * 0x18));
    *(char **)(param_2 + 8) = pcVar1;
    *(undefined1 *)(param_1 + 0x18) = 1;
    cVar5 = *pcVar1;
    *(char **)(param_2 + 8) = pcVar1 + 1;
    *(bool *)(param_1 + 0x48) = cVar5 != '\0';
    uVar3 = *(undefined4 *)(pcVar1 + 1);
    *(char **)(param_2 + 8) = pcVar1 + 5;
    *(undefined4 *)(param_1 + 0x4c) = uVar3;
    FUN_10917d760(param_1 + 0x20,param_2);
  }
  return;
}



/* Entry: 10917fa84; end: 10917fbfb;  */

void FUN_10917fa84(long param_1,long param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  undefined1 auVar5 [16];
  byte *pbVar6;
  long lVar7;
  char *pcVar8;
  undefined1 uVar9;
  long lVar10;
  
  pbVar6 = *(byte **)(param_2 + 8);
  bVar3 = *pbVar6;
  *(byte **)(param_2 + 8) = pbVar6 + 1;
  if (bVar3 < 2) {
    uVar2 = *(undefined4 *)(pbVar6 + 1);
    *(byte **)(param_2 + 8) = pbVar6 + 5;
    *(undefined4 *)(param_1 + 8) = uVar2;
    if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x10) != 0)) {
      __ZdaPv();
    }
    if (param_3 == 0) {
      uVar1 = *(uint *)(param_1 + 8);
      lVar7 = ((-(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1) + (long)(int)uVar1
              ) * 8;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (long)(int)uVar1;
      if (SUB168(auVar5 * ZEXT816(0x18),8) != 0) {
        lVar7 = -1;
      }
      __Znam();
      if (uVar1 != 0) {
        _bzero(lVar7,(((long)(int)uVar1 * 0x18 - 0x18U) / 0x18) * 0x18 + 0x18);
      }
      *(long *)(param_1 + 0x10) = lVar7;
      lVar10 = *(long *)(param_2 + 8);
      _memcpy(lVar7,lVar10,(long)(int)(uVar1 * 0x18));
      pcVar8 = (char *)(lVar10 + (int)(uVar1 * 0x18));
      uVar9 = 1;
    }
    else {
      uVar9 = 0;
      lVar7 = *(long *)(param_2 + 8);
      *(long *)(param_1 + 0x10) = lVar7;
      pcVar8 = (char *)(lVar7 + *(int *)(param_1 + 8) * 0x18);
    }
    *(char **)(param_2 + 8) = pcVar8;
    *(undefined1 *)(param_1 + 0x18) = uVar9;
    cVar4 = *pcVar8;
    *(char **)(param_2 + 8) = pcVar8 + 1;
    *(bool *)(param_1 + 0x48) = cVar4 != '\0';
    uVar2 = *(undefined4 *)(pcVar8 + 1);
    *(char **)(param_2 + 8) = pcVar8 + 5;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    FUN_10917d760(param_1 + 0x20,param_2);
  }
  return;
}



/* Entry: 10917fbfc; end: 10917fc03;  */

/* WARNING: Removing unreachable block (ram,0x00010917fb10) */
/* WARNING: Removing unreachable block (ram,0x00010917fb30) */
/* WARNING: Removing unreachable block (ram,0x00010917fb40) */
/* WARNING: Removing unreachable block (ram,0x00010917fb6c) */

void FUN_10917fbfc(long param_1,long param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  long lVar6;
  
  pbVar5 = *(byte **)(param_2 + 8);
  bVar3 = *pbVar5;
  *(byte **)(param_2 + 8) = pbVar5 + 1;
  if (bVar3 < 2) {
    uVar2 = *(undefined4 *)(pbVar5 + 1);
    *(byte **)(param_2 + 8) = pbVar5 + 5;
    *(undefined4 *)(param_1 + 8) = uVar2;
    if ((*(char *)(param_1 + 0x18) == '\x01') && (*(long *)(param_1 + 0x10) != 0)) {
      __ZdaPv();
    }
    lVar6 = *(long *)(param_2 + 8);
    *(long *)(param_1 + 0x10) = lVar6;
    pcVar1 = (char *)(lVar6 + *(int *)(param_1 + 8) * 0x18);
    *(char **)(param_2 + 8) = pcVar1;
    *(undefined1 *)(param_1 + 0x18) = 0;
    cVar4 = *pcVar1;
    *(char **)(param_2 + 8) = pcVar1 + 1;
    *(bool *)(param_1 + 0x48) = cVar4 != '\0';
    uVar2 = *(undefined4 *)(pcVar1 + 1);
    *(char **)(param_2 + 8) = pcVar1 + 5;
    *(undefined4 *)(param_1 + 0x4c) = uVar2;
    FUN_10917d760(param_1 + 0x20,param_2);
  }
  return;
}



/* Entry: 10917fc04; end: 10918002f;  */

uint FUN_10917fc04(long param_1,long param_2,long *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  double **ppdVar6;
  long *plVar7;
  double *pdVar8;
  double *pdVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  byte bVar13;
  int iVar14;
  long lVar15;
  long lVar16;
  double *pdVar17;
  uint unaff_w19;
  int iVar18;
  long lVar19;
  double *pdVar20;
  double *pdVar21;
  uint uVar22;
  int iVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double *pdStack_f8;
  double *pdStack_f0;
  double dStack_e8;
  double dStack_e0;
  double dStack_d8;
  double *pdStack_d0;
  uint uStack_c8;
  long lStack_c0;
  byte bStack_b8;
  int iStack_b4;
  int iStack_b0;
  long lStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  int iStack_90;
  
  FUN_10917bcbc(param_1 + 0x50,*(undefined4 *)(param_2 + 8));
  lStack_a8 = 0;
  lStack_a0 = 0;
  uStack_98 = 0;
  uVar12 = (ulong)*(uint *)(param_2 + 8);
  if (0 < (int)*(uint *)(param_2 + 8)) {
    lVar15 = 0;
    lStack_c0 = param_1 + 0x50;
LAB_10917fc78:
    pdVar8 = *(double **)(param_2 + 0x10);
    pdVar20 = pdVar8 + lVar15 * 3;
    lVar19 = lVar15 + 1;
    iVar10 = (int)uVar12;
    iVar23 = (int)lVar19;
    iVar14 = iVar23 - iVar10;
    iVar4 = iVar23;
    if (iVar10 <= iVar23) {
      iVar4 = iVar14;
    }
    pdVar21 = pdVar8 + (long)iVar4 * 3;
    dVar25 = pdVar20[2] * -pdVar21[1] + pdVar21[2] * pdVar20[1];
    dVar26 = *pdVar20 * -pdVar21[2] + *pdVar21 * pdVar20[2];
    dVar27 = -*pdVar21 * pdVar20[1] + pdVar21[1] * *pdVar20;
    dVar24 = pdVar8[1] * dVar26 + *pdVar8 * dVar25 + pdVar8[2] * dVar27;
    iVar4 = -(uint)(dVar24 < -8e-16);
    if (8e-16 < dVar24) {
      iVar4 = 1;
    }
    pdStack_f8 = pdVar20;
    pdStack_f0 = pdVar21;
    dStack_e8 = dVar25;
    dStack_e0 = dVar26;
    dStack_d8 = dVar27;
    pdStack_d0 = pdVar8;
    if (iVar4 == 0) {
      pdVar8 = pdVar20;
      FUN_109178740(pdVar20,pdVar21);
      iVar4 = (int)pdVar8;
      iVar10 = *(int *)(param_2 + 8);
      pdVar8 = *(double **)(param_2 + 0x10);
      iVar14 = iVar23 - iVar10;
    }
    uVar22 = -iVar4;
    iVar18 = (int)lVar15;
    iVar4 = iVar18;
    if (iVar10 <= iVar18) {
      iVar4 = iVar18 - iVar10;
    }
    iVar10 = iVar23;
    if (-1 < iVar14) {
      iVar10 = iVar14;
    }
    uStack_c8 = uVar22;
    FUN_10917c4d8(&lStack_c0,pdVar8 + (long)iVar4 * 3,pdVar8 + (long)iVar10 * 3);
    iVar4 = iVar18 + 2;
    iVar10 = -2;
    bVar13 = bStack_b8;
LAB_10917fd64:
    iVar14 = iStack_b4;
    if ((bVar13 & 1) == 0) {
      if ((ulong)(lStack_a0 - lStack_a8 >> 2) <= (ulong)(long)iStack_90) goto LAB_10917ff9c;
    }
    else if (iStack_b0 <= iStack_b4) goto LAB_10917ff9c;
    iVar11 = *(int *)(param_1 + 8);
    lVar15 = *(long *)(param_1 + 0x10);
    if (iVar10 != iStack_b4 + -1) {
      iVar10 = iStack_b4;
      if (iVar11 <= iStack_b4) {
        iVar10 = iStack_b4 - iVar11;
      }
      pdStack_d0 = (double *)(lVar15 + (long)iVar10 * 0x18);
      dVar24 = dVar26 * pdStack_d0[1] + *pdStack_d0 * dVar25 + pdStack_d0[2] * dVar27;
      iVar10 = -(uint)(dVar24 < -8e-16);
      if (8e-16 < dVar24) {
        iVar10 = 1;
      }
      if (iVar10 == 0) {
        pdVar8 = pdVar20;
        FUN_109178740(pdVar20,pdVar21);
        iVar10 = (int)pdVar8;
        iVar11 = *(int *)(param_1 + 8);
        lVar15 = *(long *)(param_1 + 0x10);
      }
      uVar22 = -iVar10;
      uStack_c8 = uVar22;
    }
    iVar10 = iVar14 + 1;
    iVar3 = iVar10 - iVar11;
    if (iVar10 < iVar11) {
      iVar3 = iVar14 + 1;
    }
    pdVar8 = (double *)(lVar15 + (long)iVar3 * 0x18);
    dVar24 = dVar26 * pdVar8[1] + *pdVar8 * dVar25 + pdVar8[2] * dVar27;
    uVar5 = -(uint)(dVar24 < -8e-16);
    if (8e-16 < dVar24) {
      uVar5 = 1;
    }
    if (uVar5 == 0) {
      pdVar9 = pdVar20;
      FUN_109178740(pdVar20,pdVar21,pdVar8);
      uVar5 = (uint)pdVar9;
    }
    if (uVar5 == 0 || uVar5 != -uVar22) {
      if ((uVar5 & uVar22) == 0) {
LAB_10917fea4:
        uStack_c8 = -uVar5;
        iVar11 = *(int *)(param_1 + 8);
        lVar15 = *(long *)(param_1 + 0x10);
        if (iVar11 <= iVar10) {
          iVar10 = iVar10 - iVar11;
        }
        pdVar9 = (double *)(lVar15 + (long)iVar10 * 0x18);
        iVar3 = *(int *)(param_2 + 8);
        lVar16 = *(long *)(param_2 + 0x10);
        iVar10 = iVar23;
        if (iVar3 <= iVar23) {
          iVar10 = iVar23 - iVar3;
        }
        pdVar17 = (double *)(lVar16 + (long)iVar10 * 0x18);
        pdStack_d0 = pdVar8;
        if (((*pdVar9 == *pdVar17) && (pdVar9[1] == pdVar17[1])) && (pdVar9[2] == pdVar17[2])) {
          iVar10 = iVar14;
          if (iVar11 <= iVar14) {
            iVar10 = iVar14 - iVar11;
          }
          iVar1 = iVar14 + 2;
          if (iVar11 <= iVar1) {
            iVar1 = iVar1 - iVar11;
          }
          iVar11 = iVar18;
          if (iVar3 <= iVar18) {
            iVar11 = iVar18 - iVar3;
          }
          iVar2 = iVar4;
          if (iVar3 <= iVar4) {
            iVar2 = iVar4 - iVar3;
          }
          plVar7 = param_3;
          (**(code **)(*param_3 + 0x10))
                    (param_3,lVar15 + (long)iVar10 * 0x18,pdVar9,lVar15 + (long)iVar1 * 0x18,
                     lVar16 + (long)iVar11 * 0x18,lVar16 + (long)iVar2 * 0x18);
          if (((ulong)plVar7 & 1) != 0) {
            lVar19 = 0;
            goto LAB_10917ffc8;
          }
        }
      }
      else {
        ppdVar6 = &pdStack_f8;
        FUN_10917cf14(ppdVar6,pdVar8);
        uStack_c8 = -uVar5;
        pdStack_d0 = pdVar8;
        if (-1 < (int)ppdVar6) {
          if ((int)ppdVar6 == 0) goto LAB_10917fea4;
          lVar19 = 1;
LAB_10917ffc8:
          uVar22 = 1;
          goto LAB_10917ffcc;
        }
      }
    }
    else {
      uStack_c8 = -uVar5;
      pdStack_d0 = pdVar8;
    }
    uVar22 = -uVar5;
    iVar10 = iVar14;
    if (bStack_b8 == 1) {
      iStack_b4 = iStack_b4 + 1;
      bVar13 = bStack_b8;
    }
    else {
      uVar12 = (long)iStack_90 + 1;
      iStack_90 = (int)uVar12;
      bVar13 = 0;
      if (uVar12 < (ulong)(lStack_a0 - lStack_a8 >> 2)) {
        iStack_b4 = *(int *)(lStack_a8 + uVar12 * 4);
        bVar13 = bStack_b8;
      }
    }
    goto LAB_10917fd64;
  }
  uVar22 = 0;
LAB_10917ffdc:
  return unaff_w19 & uVar22;
LAB_10917ff9c:
  uVar12 = (ulong)*(int *)(param_2 + 8);
  lVar15 = lVar19;
  if ((long)uVar12 <= lVar19) goto code_r0x00010917ffac;
  goto LAB_10917fc78;
code_r0x00010917ffac:
  uVar22 = 0;
LAB_10917ffcc:
  unaff_w19 = (uint)lVar19;
  if (lStack_a8 != 0) {
    lStack_a0 = lStack_a8;
    __ZdlPv();
  }
  goto LAB_10917ffdc;
}



/* Entry: 109180030; end: 109180037;  */

void FUN_109180030(void)

{
  return;
}



/* Entry: 109180038; end: 10918011f;  */

void FUN_109180038(ulong param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  undefined **ppuStack_40;
  uint uStack_38;
  
  lVar1 = param_1 + 0x20;
  func_0x00010917d2dc(lVar1,param_2 + 0x20);
  if ((int)lVar1 != 0) {
    ppuStack_40 = &PTR_FUN_110adef38;
    uStack_38 = 0;
    uVar2 = param_1;
    FUN_10917fc04(param_1,param_2,&ppuStack_40);
    if (((((uVar2 & 1) == 0) && ((uStack_38 & 1) == 0)) && ((uStack_38 & 0x1000000) == 0)) &&
       ((uStack_38 & 0x10000) == 0)) {
      lVar1 = param_1 + 0x20;
      func_0x00010917d2a4(lVar1,param_2 + 0x20);
      if (((int)lVar1 != 0) &&
         (uVar2 = param_1,
         FUN_10917e38c(param_1,*(long *)(param_2 + 0x10) +
                               (ulong)(-*(int *)(param_2 + 8) &
                                      (-*(int *)(param_2 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18),
         (uVar2 & 1) == 0)) {
        FUN_10917eb5c(param_1,*(long *)(param_2 + 0x10) +
                              (ulong)(-*(int *)(param_2 + 8) &
                                     (-*(int *)(param_2 + 8) >> 0x1f ^ 0xffffffffU)) * 0x18);
      }
    }
  }
  return;
}



/* Entry: 109180120; end: 109180123;  */

void FUN_109180120(void)

{
  return;
}



/* Entry: 109180124; end: 109180217;  */

ulong FUN_109180124(long param_1,long param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 **ppuVar8;
  long lVar9;
  double *pdVar10;
  ulong uVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  byte bVar15;
  long lVar16;
  double *pdVar17;
  double *pdVar18;
  uint uVar19;
  uint uVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  long lStack_110;
  byte bStack_108;
  int iStack_104;
  int iStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  int iStack_e0;
  undefined8 *puStack_d8;
  double *pdStack_d0;
  double dStack_c8;
  double dStack_c0;
  double dStack_b8;
  double *pdStack_b0;
  uint uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar11 = param_1 + 0x20;
  FUN_10917d2a4(uVar11,param_2 + 0x20);
  if ((int)uVar11 == 0) {
    return uVar11;
  }
  iVar4 = 1 - *(int *)(param_2 + 8);
  if (1 < *(int *)(param_2 + 8)) {
    iVar4 = 1;
  }
  lVar16 = param_1;
  FUN_10917eb5c(param_1,*(long *)(param_2 + 0x10) + (long)iVar4 * 0x18);
  iVar4 = (int)lVar16;
  if (-1 < iVar4) {
    iVar12 = iVar4 + -1;
    iVar13 = *(int *)(param_1 + 8);
    lVar16 = *(long *)(param_1 + 0x10);
    if (iVar13 <= iVar12) {
      iVar12 = iVar12 - iVar13;
    }
    lVar14 = lVar16 + (long)iVar12 * 0x18;
    iVar12 = iVar4;
    if (iVar13 <= iVar4) {
      iVar12 = iVar4 - iVar13;
    }
    lVar9 = lVar16 + (long)iVar12 * 0x18;
    iVar12 = (iVar4 + 1) - iVar13;
    if (iVar4 + 1 < iVar13) {
      iVar12 = iVar4 + 1;
    }
    uVar11 = lVar16 + (long)iVar12 * 0x18;
    iVar12 = *(int *)(param_2 + 8);
    lVar16 = *(long *)(param_2 + 0x10) + (ulong)(-iVar12 & (-iVar12 >> 0x1f ^ 0xffffffffU)) * 0x18;
    iVar4 = 2;
    if (iVar12 < 3) {
      iVar4 = 2 - iVar12;
    }
    uVar6 = uVar11;
    FUN_109178fdc(uVar11,*(long *)(param_2 + 0x10) + (long)iVar4 * 0x18,lVar16,lVar9);
    if ((int)uVar6 != 0) {
      lVar5 = lVar14;
      func_0x0001091786d4(lVar14,lVar9,lVar16);
      uVar6 = uVar11;
      func_0x0001091786d4(uVar11,lVar9,lVar14);
      uVar19 = 1;
      if ((uint)lVar5 < 0x80000000) {
        uVar19 = 2;
      }
      uVar20 = ~(uint)lVar5 >> 0x1f;
      if (-1 < (int)uVar6) {
        uVar20 = uVar19;
      }
      func_0x0001091786d4(lVar16,lVar9,uVar11);
      if (0 < (int)lVar16) {
        uVar20 = uVar20 + 1;
      }
      return (ulong)(1 < uVar20);
    }
    return uVar6;
  }
  iVar4 = 1 - *(int *)(param_2 + 8);
  if (1 < *(int *)(param_2 + 8)) {
    iVar4 = 1;
  }
  pdVar10 = (double *)(*(long *)(param_2 + 0x10) + (long)iVar4 * 0x18);
  iVar4 = (int)param_1 + 0x20;
  FUN_10917d7f4();
  if (iVar4 == 0) {
    uVar19 = 0;
  }
  else {
    uVar19 = (uint)*(byte *)(param_1 + 0x48);
    uStack_98 = 0x3feffbb2817d5fad;
    uStack_a0 = 0x3f72b579b431bee4;
    uStack_90 = 0x3fa06d338a2f992d;
    iVar12 = *(int *)(param_1 + 8);
    pdVar17 = (double *)
              (*(long *)(param_1 + 0x10) + (ulong)(-iVar12 & (-iVar12 >> 0x1f ^ 0xffffffffU)) * 0x18
              );
    puStack_d8 = &uStack_a0;
    dVar22 = pdVar10[1] * -0.032083140009307655 + pdVar10[2] * 0.9994747666450984;
    dVar23 = pdVar10[2] * -0.0045675996835681 + *pdVar10 * 0.032083140009307655;
    dVar24 = *pdVar10 * -0.9994747666450984 + pdVar10[1] * 0.0045675996835681;
    dVar21 = pdVar17[1] * dVar23 + *pdVar17 * dVar22 + pdVar17[2] * dVar24;
    iVar4 = -(uint)(dVar21 < -8e-16);
    if (8e-16 < dVar21) {
      iVar4 = 1;
    }
    pdStack_d0 = pdVar10;
    dStack_c8 = dVar22;
    dStack_c0 = dVar23;
    dStack_b8 = dVar24;
    pdStack_b0 = pdVar17;
    if (iVar4 == 0) {
      puVar7 = &uStack_a0;
      FUN_109178740(puVar7,pdVar10,pdVar17);
      iVar4 = (int)puVar7;
      iVar12 = *(int *)(param_1 + 8);
    }
    uVar20 = -iVar4;
    uStack_a8 = uVar20;
    if (1999 < iVar12) {
      lStack_110 = param_1 + 0x50;
      lStack_f8 = 0;
      lStack_f0 = 0;
      uStack_e8 = 0;
      FUN_10917c4d8(dVar22,&lStack_110,&uStack_a0,pdVar10);
      iVar4 = -2;
      bVar15 = bStack_108;
LAB_10917e5f0:
      iVar12 = iStack_104;
      if ((bVar15 & 1) == 0) {
        if ((ulong)(lStack_f0 - lStack_f8 >> 2) <= (ulong)(long)iStack_e0) goto LAB_10917e7b8;
      }
      else if (iStack_100 <= iStack_104) goto LAB_10917e7b8;
      iVar13 = *(int *)(param_1 + 8);
      lVar16 = *(long *)(param_1 + 0x10);
      pdVar18 = pdVar17;
      if (iVar4 != iStack_104 + -1) {
        iVar4 = iStack_104;
        if (iVar13 <= iStack_104) {
          iVar4 = iStack_104 - iVar13;
        }
        pdVar18 = (double *)(lVar16 + (long)iVar4 * 0x18);
        dVar21 = dVar23 * pdVar18[1] + *pdVar18 * dVar22 + pdVar18[2] * dVar24;
        iVar4 = -(uint)(dVar21 < -8e-16);
        if (8e-16 < dVar21) {
          iVar4 = 1;
        }
        pdStack_b0 = pdVar18;
        if (iVar4 == 0) {
          puVar7 = &uStack_a0;
          FUN_109178740(puVar7,pdVar10,pdVar18);
          iVar4 = (int)puVar7;
          iVar13 = *(int *)(param_1 + 8);
          lVar16 = *(long *)(param_1 + 0x10);
        }
        uVar20 = -iVar4;
        uStack_a8 = uVar20;
      }
      iVar4 = (iVar12 + 1) - iVar13;
      if (iVar12 + 1 < iVar13) {
        iVar4 = iVar12 + 1;
      }
      pdVar17 = (double *)(lVar16 + (long)iVar4 * 0x18);
      dVar21 = dVar23 * pdVar17[1] + *pdVar17 * dVar22 + pdVar17[2] * dVar24;
      uVar2 = -(uint)(dVar21 < -8e-16);
      if (8e-16 < dVar21) {
        uVar2 = 1;
      }
      if (uVar2 == 0) {
        puVar7 = &uStack_a0;
        FUN_109178740(puVar7,pdVar10,pdVar17);
        uVar2 = (uint)puVar7;
      }
      if (uVar2 == 0 || uVar2 != -uVar20) {
        if ((uVar2 & uVar20) == 0) {
LAB_10917e744:
          uStack_a8 = -uVar2;
          puVar7 = &uStack_a0;
          pdStack_b0 = pdVar17;
          FUN_10917c688(puVar7,pdVar10,pdVar18,pdVar17);
          uVar3 = (uint)puVar7;
        }
        else {
          ppuVar8 = &puStack_d8;
          FUN_10917cf14(ppuVar8,pdVar17);
          uStack_a8 = -uVar2;
          if ((int)ppuVar8 < 0) {
            uVar3 = 0;
            pdStack_b0 = pdVar17;
          }
          else {
            if ((int)ppuVar8 == 0) goto LAB_10917e744;
            uVar3 = 1;
            pdStack_b0 = pdVar17;
          }
        }
      }
      else {
        uVar3 = 0;
        uStack_a8 = -uVar2;
        pdStack_b0 = pdVar17;
      }
      uVar20 = -uVar2;
      uVar19 = uVar19 ^ uVar3;
      iVar4 = iVar12;
      if (bStack_108 == 1) {
        iStack_104 = iStack_104 + 1;
        bVar15 = bStack_108;
      }
      else {
        uVar11 = (long)iStack_e0 + 1;
        iStack_e0 = (int)uVar11;
        bVar15 = 0;
        if (uVar11 < (ulong)(lStack_f0 - lStack_f8 >> 2)) {
          iStack_104 = *(int *)(lStack_f8 + uVar11 * 4);
          bVar15 = bStack_108;
        }
      }
      goto LAB_10917e5f0;
    }
    if (0 < iVar12) {
      iVar4 = 1;
      do {
        iVar13 = iVar4;
        if (-1 < iVar4 - iVar12) {
          iVar13 = iVar4 - iVar12;
        }
        pdVar18 = (double *)(*(long *)(param_1 + 0x10) + (long)iVar13 * 0x18);
        dVar21 = dVar23 * pdVar18[1] + *pdVar18 * dVar22 + pdVar18[2] * dVar24;
        uVar2 = -(uint)(dVar21 < -8e-16);
        if (8e-16 < dVar21) {
          uVar2 = 1;
        }
        if (uVar2 == 0) {
          puVar7 = &uStack_a0;
          FUN_109178740(puVar7,pdVar10,pdVar18);
          uVar2 = (uint)puVar7;
        }
        if (uVar2 == 0 || uVar2 != -uVar20) {
          if ((uVar2 & uVar20) == 0) {
LAB_10917e588:
            uStack_a8 = -uVar2;
            puVar7 = &uStack_a0;
            pdStack_b0 = pdVar18;
            FUN_10917c688(puVar7,pdVar10,pdVar17,pdVar18);
            uVar3 = (uint)puVar7;
          }
          else {
            ppuVar8 = &puStack_d8;
            FUN_10917cf14(ppuVar8,pdVar18);
            uStack_a8 = -uVar2;
            if ((int)ppuVar8 < 0) {
              uVar3 = 0;
              pdStack_b0 = pdVar18;
            }
            else {
              if ((int)ppuVar8 == 0) goto LAB_10917e588;
              uVar3 = 1;
              pdStack_b0 = pdVar18;
            }
          }
        }
        else {
          uVar3 = 0;
          uStack_a8 = -uVar2;
          pdStack_b0 = pdVar18;
        }
        uVar20 = -uVar2;
        uVar19 = uVar19 ^ uVar3;
        iVar12 = *(int *)(param_1 + 8);
        bVar1 = iVar4 < iVar12;
        pdVar17 = pdVar18;
        iVar4 = iVar4 + 1;
      } while (bVar1);
    }
  }
LAB_10917e7c4:
  return (ulong)(uVar19 & 1);
LAB_10917e7b8:
  if (lStack_f8 != 0) {
    lStack_f0 = lStack_f8;
    __ZdlPv();
  }
  goto LAB_10917e7c4;
}



/* Entry: 109180218; end: 109180253;  */

void FUN_109180218(undefined8 *param_1)

{
  *param_1 = &PTR_DAT_110adee70;
  FUN_10917c57c(param_1 + 1,param_1[2]);
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)(param_1);
  return;
}



/* Entry: 109180254; end: 1091802d3;  */

void FUN_109180254(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  *param_1 = &PTR_FUN_110aded28;
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  param_1[2] = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  param_1[4] = *(undefined8 *)(param_2 + 0x40);
  param_1[3] = uVar1;
  return;
}



/* Entry: 1091802d4; end: 10918030f;  */

void FUN_1091802d4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_10917cce8(param_2,param_3,param_4,param_5,param_6);
  *(byte *)(param_1 + 8) = (byte)param_2 ^ 1;
  return;
}



/* Entry: 109180310; end: 109180313;  */

void FUN_109180310(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109180314; end: 10918034b;  */

void FUN_109180314(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x00010917cd50(param_2,param_3,param_4,param_5,param_6);
  *(char *)(param_1 + 8) = (char)param_2;
  return;
}



/* Entry: 10918034c; end: 10918034f;  */

void FUN_10918034c(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}



/* Entry: 109180350; end: 1091803e3;  */

undefined8
FUN_109180350(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  
  FUN_10917cdb4(param_2,param_3,param_4,param_5,param_6);
  iVar3 = (int)param_2;
  if (iVar3 != 3) {
    bVar1 = *(byte *)(param_1 + 9);
    *(byte *)(param_1 + 9) = bVar1 | iVar3 == 1;
    bVar2 = *(byte *)(param_1 + 10);
    *(byte *)(param_1 + 10) = bVar2 | iVar3 == 2;
    if (((bVar2 & 1) == 0 && iVar3 != 2) || ((bVar1 & 1) == 0 && iVar3 != 1)) {
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) | iVar3 == 4;
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return 1;
}



/* Entry: 1091803e4; end: 109180463;  */

long * FUN_1091803e4(long param_1,long *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  plVar4 = (long *)(param_1 + 8);
  plVar5 = plVar4;
  if ((long *)*plVar4 != (long *)0x0) {
    iVar2 = *param_3;
    plVar6 = (long *)*plVar4;
    do {
      while( true ) {
        iVar3 = *(int *)((long)plVar6 + 0x1c);
        bVar1 = param_3[1] < (int)plVar6[4];
        if (iVar2 != iVar3) {
          bVar1 = iVar2 < iVar3;
        }
        plVar5 = plVar6;
        if (!bVar1) break;
        plVar7 = (long *)*plVar6;
        plVar4 = plVar6;
        plVar6 = plVar7;
        if (plVar7 == (long *)0x0) goto LAB_10918045c;
      }
      bVar1 = (int)plVar6[4] < param_3[1];
      if (iVar2 != iVar3) {
        bVar1 = iVar3 < iVar2;
      }
      if (!bVar1) break;
      plVar4 = plVar6 + 1;
      plVar6 = (long *)*plVar4;
    } while ((long *)*plVar4 != (long *)0x0);
  }
LAB_10918045c:
  *param_2 = (long)plVar5;
  return plVar4;
}



/* Entry: 109180464; end: 10918057b;  */

void FUN_109180464(long *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  *param_4 = 0;
  param_4[1] = 0;
  param_4[2] = param_2;
  *param_3 = param_4;
  if (*(long *)*param_1 != 0) {
    *param_1 = *(long *)*param_1;
  }
  func_0x000107c27be4(param_1[1],param_4);
  param_1[2] = param_1[2] + 1;
  return;
}



/* Entry: 10918057c; end: 10918077f;  */

long * FUN_10918057c(long *param_1,long *param_2)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  
  plVar3 = param_1;
  if ((long)param_2 - 1U == 0) {
    param_2 = (long *)0x2;
  }
  else if (((ulong)param_2 & (long)param_2 - 1U) != 0) {
    __ZNSt3__112__next_primeEm();
    plVar3 = param_2;
  }
  plVar10 = (long *)param_1[1];
  if (plVar10 < param_2) {
LAB_1091805c4:
    if (param_2 == (long *)0x0) {
      plVar3 = (long *)*param_1;
      *param_1 = 0;
      if (plVar3 != (long *)0x0) {
        __ZdlPv();
      }
      param_1[1] = 0;
    }
    else {
      if ((ulong)param_2 >> 0x3d != 0) {
        func_0x000104bd35f4();
        *param_1 = (long)&PTR_FUN_110adef78;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        param_1[4] = (long)&PTR_FUN_110aded28;
        param_1[6] = 0;
        param_1[5] = 0x3ff0000000000000;
        param_1[8] = -0x3ff6de04abbbd2e8;
        param_1[7] = 0x400921fb54442d18;
        *(undefined1 *)(param_1 + 9) = 1;
        FUN_10918080c();
        return param_1;
      }
      plVar10 = (long *)((long)param_2 << 3);
      __Znwm();
      lVar2 = *param_1;
      *param_1 = (long)plVar10;
      if (lVar2 != 0) {
        __ZdlPv();
        plVar10 = (long *)*param_1;
      }
      param_1[1] = (long)param_2;
      plVar3 = plVar10;
      _bzero(plVar10,(long *)((long)param_2 << 3));
      plVar5 = (long *)param_1[2];
      if (plVar5 != (long *)0x0) {
        plVar6 = (long *)plVar5[1];
        uVar4 = (long)param_2 - 1;
        if (((ulong)param_2 & uVar4) == 0) {
          plVar6 = (long *)((ulong)plVar6 & uVar4);
        }
        else if (param_2 <= plVar6) {
          uVar1 = 0;
          if (param_2 != (long *)0x0) {
            uVar1 = (ulong)plVar6 / (ulong)param_2;
          }
          plVar6 = (long *)((long)plVar6 - uVar1 * (long)param_2);
        }
        plVar10[(long)plVar6] = (long)(param_1 + 2);
        plVar7 = (long *)*plVar5;
        while (plVar7 != (long *)0x0) {
          plVar9 = (long *)plVar7[1];
          if (((ulong)param_2 & uVar4) == 0) {
            plVar9 = (long *)((ulong)plVar9 & uVar4);
          }
          else if (param_2 <= plVar9) {
            uVar1 = 0;
            if (param_2 != (long *)0x0) {
              uVar1 = (ulong)plVar9 / (ulong)param_2;
            }
            plVar9 = (long *)((long)plVar9 - uVar1 * (long)param_2);
          }
          plVar8 = plVar7;
          if (plVar9 != plVar6) {
            if (plVar10[(long)plVar9] == 0) {
              plVar10[(long)plVar9] = (long)plVar5;
              plVar6 = plVar9;
            }
            else {
              *plVar5 = *plVar7;
              *plVar7 = *(undefined8 *)plVar10[(long)plVar9];
              *(long **)plVar10[(long)plVar9] = plVar7;
              plVar8 = plVar5;
            }
          }
          plVar5 = plVar8;
          plVar7 = (long *)*plVar8;
        }
      }
    }
    return plVar3;
  }
  if (param_2 < plVar10) {
    plVar3 = (long *)(long)((float)(ulong)param_1[3] / *(float *)(param_1 + 4));
    if ((plVar10 < (long *)0x3) || (((ulong)plVar10 & (long)plVar10 - 1U) != 0)) {
      __ZNSt3__112__next_primeEm();
    }
    else if ((long *)0x1 < plVar3) {
      plVar3 = (long *)(1L << (-LZCOUNT((long)plVar3 + -1) & 0x3fU));
    }
    if (param_2 <= plVar3) {
      param_2 = plVar3;
    }
    if (param_2 < plVar10) goto LAB_1091805c4;
  }
  return plVar3;
}



/* Entry: 109180780; end: 10918080b;  */

undefined8 * FUN_109180780(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adef78;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = &PTR_FUN_110aded28;
  param_1[6] = 0;
  param_1[5] = 0x3ff0000000000000;
  param_1[8] = 0xc00921fb54442d18;
  param_1[7] = 0x400921fb54442d18;
  *(undefined1 *)(param_1 + 9) = 1;
  FUN_10918080c();
  return param_1;
}



/* Entry: 10918080c; end: 109180c8f;  */

ulong * FUN_10918080c(long param_1,ulong ***param_2)

{
  undefined *puVar1;
  ulong ***pppuVar2;
  ulong ***pppuVar3;
  ulong ***pppuVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong *puVar7;
  ulong *puVar8;
  ulong *puVar9;
  long ****pppplVar10;
  long ****pppplVar11;
  ulong **ppuVar12;
  ulong uVar13;
  int iVar14;
  ulong **ppuVar15;
  ulong uVar16;
  ulong uVar17;
  ulong ***unaff_x21;
  ulong *puVar18;
  long lVar19;
  ulong *puVar20;
  long ****unaff_x22;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long ***ppplStack_148;
  long ***ppplStack_140;
  long lStack_138;
  long ***ppplStack_130;
  ulong *puStack_128;
  undefined1 **ppuStack_120;
  code *pcStack_118;
  long ***ppplStack_110;
  ulong ***pppuStack_108;
  ulong ***pppuStack_100;
  ulong *puStack_f8;
  undefined1 *puStack_f0;
  code *pcStack_e8;
  long ***appplStack_d8 [5];
  ulong **ppuStack_b0;
  ulong *puStack_a8;
  undefined8 uStack_a0;
  ulong *puStack_98;
  ulong ***pppuStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  if ((cRam0000000113829bb8 == '\x01') &&
     (pppuVar2 = param_2, FUN_109181064(), ((ulong)pppuVar2 & 1) == 0)) {
    FUN_1091797b4(&pppuStack_90,&UNK_10f55a40b,0xdb);
    func_0x000107c2808c(PTR___ZNSt3__14cerrE_110346738,&UNK_10f55a443,0x1d);
    FUN_109179870(&pppuStack_90);
  }
  ppuVar12 = *(ulong ***)(param_1 + 8);
  *(ulong ***)(param_1 + 8) = *param_2;
  *param_2 = ppuVar12;
  ppuVar12 = *(ulong ***)(param_1 + 0x10);
  *(ulong ***)(param_1 + 0x10) = param_2[1];
  param_2[1] = ppuVar12;
  ppuVar12 = *(ulong ***)(param_1 + 0x18);
  *(ulong ***)(param_1 + 0x18) = param_2[2];
  param_2[2] = ppuVar12;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  lVar19 = *(long *)(param_1 + 8);
  uVar17 = *(long *)(param_1 + 0x10) - lVar19;
  if ((int)(uVar17 >> 3) < 1) {
    puStack_a8 = (ulong *)0x0;
    uStack_a0 = 0;
    ppuStack_b0 = &puStack_a8;
  }
  else {
    uVar16 = 0;
    iVar14 = 0;
    do {
      iVar14 = *(int *)(*(long *)(lVar19 + uVar16 * 8) + 8) + iVar14;
      uVar16 = uVar16 + 1;
    } while ((uVar17 >> 3 & 0x7fffffff) != uVar16);
    lVar22 = 0;
    *(int *)(param_1 + 0x4c) = iVar14;
    ppuStack_b0 = &puStack_a8;
    puStack_a8 = (ulong *)0x0;
    uStack_a0 = 0;
    do {
      unaff_x21 = *(ulong ****)(lVar19 + lVar22 * 8);
      appplStack_d8[0] = (long ***)0x0;
      pppuVar2 = &ppuStack_b0;
      pppuStack_90 = unaff_x21;
      FUN_109184570(pppuVar2,0,appplStack_d8);
      while( true ) {
        param_2 = pppuVar2 + 5;
        ppuVar12 = *param_2;
        pppuVar2 = pppuVar2 + 6;
        if (*pppuVar2 == ppuVar12) break;
        uVar17 = 0;
        while( true ) {
          unaff_x22 = (long ****)ppuVar12[uVar17];
          pppplVar10 = unaff_x22;
          FUN_109180124(unaff_x22,unaff_x21);
          if (((ulong)pppplVar10 & 1) != 0) break;
          uVar17 = uVar17 + 1;
          ppuVar12 = *param_2;
          if ((ulong)((long)*pppuVar2 - (long)ppuVar12 >> 3) <= uVar17) goto LAB_1091809a0;
        }
        pppuVar2 = &ppuStack_b0;
        appplStack_d8[0] = (long ***)unaff_x22;
        pppuStack_90 = unaff_x21;
        FUN_109184570(pppuVar2,unaff_x22,appplStack_d8);
      }
LAB_1091809a0:
      pppuVar3 = &ppuStack_b0;
      FUN_109184570(pppuVar3,unaff_x21,&pppuStack_90);
      ppuVar12 = *param_2;
      if (*pppuVar2 != ppuVar12) {
        unaff_x22 = (long ****)0x0;
        iVar14 = 0;
        do {
          puStack_98 = ppuVar12[(long)unaff_x22];
          pppuVar4 = pppuStack_90;
          FUN_109180124();
          if ((int)pppuVar4 == 0) {
            iVar14 = iVar14 + 1;
            ppuVar15 = *pppuVar2;
          }
          else {
            FUN_109180c90(pppuVar3 + 5,&puStack_98);
            ppuVar15 = *param_2 + (long)unaff_x22;
            lVar19 = (long)*pppuVar2 - (long)(ppuVar15 + 1);
            if (lVar19 != 0) {
              _memmove(ppuVar15,ppuVar15 + 1,lVar19);
            }
            ppuVar15 = (ulong **)((long)ppuVar15 + lVar19);
            *pppuVar2 = ppuVar15;
          }
          unaff_x22 = (long ****)(long)iVar14;
          ppuVar12 = *param_2;
          unaff_x21 = pppuVar3;
        } while (unaff_x22 < (long ****)((long)ppuVar15 - (long)ppuVar12 >> 3));
      }
      FUN_109180c90(param_2,&pppuStack_90);
      lVar22 = lVar22 + 1;
      lVar19 = *(long *)(param_1 + 8);
    } while (lVar22 < (int)((ulong)(*(long *)(param_1 + 0x10) - lVar19) >> 3));
  }
  *(long *)(param_1 + 0x10) = lVar19;
  pppplVar10 = (long ****)0x0;
  FUN_1091814d8(param_1,0,0xffffffff,&ppuStack_b0);
  puVar1 = PTR___ZNSt3__14cerrE_110346738;
  lVar19 = *(long *)(param_1 + 8);
  lVar22 = *(long *)(param_1 + 0x10);
  if ((cRam0000000113829bb8 == '\x01') && (0 < (int)((ulong)(lVar22 - lVar19) >> 3))) {
    lVar23 = 0;
    param_2 = (ulong ***)&UNK_10f55a40b;
    unaff_x22 = (long ****)&UNK_10f55a461;
    do {
      uVar17 = lVar22 - lVar19;
      if (0 < (int)(uVar17 >> 3)) {
        lVar24 = 0;
        do {
          if (lVar23 != lVar24) {
            uVar21 = *(undefined8 *)(lVar19 + lVar23 * 8);
            pppplVar10 = *(long *****)(lVar19 + lVar24 * 8);
            uVar5 = uVar21;
            FUN_109181578(uVar21,pppplVar10,&ppuStack_b0);
            FUN_109180124();
            if ((int)uVar5 != (int)uVar21) {
              FUN_1091797b4(&pppuStack_90,&UNK_10f55a40b,0xf3);
              pppplVar10 = unaff_x22;
              func_0x000107c2808c(puVar1,&UNK_10f55a461,0x5f);
              FUN_109179870(&pppuStack_90);
            }
          }
          lVar24 = lVar24 + 1;
          lVar19 = *(long *)(param_1 + 8);
          lVar22 = *(long *)(param_1 + 0x10);
          uVar17 = lVar22 - lVar19;
        } while (lVar24 < (int)(uVar17 >> 3));
      }
      lVar23 = lVar23 + 1;
      unaff_x21 = (ulong ***)puVar1;
    } while (lVar23 < (long)(uVar17 << 0x1d) >> 0x20);
  }
  *(undefined1 *)(param_1 + 0x49) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + 0x40) = 0xc00921fb54442d18;
  *(undefined8 *)(param_1 + 0x38) = 0x400921fb54442d18;
  if (0 < (int)((ulong)(lVar22 - lVar19) >> 3)) {
    param_2 = (ulong ***)0x0;
    unaff_x21 = (ulong ***)0x1;
    do {
      plVar6 = *(long **)(lVar19 + (long)param_2 * 8);
      if ((*(byte *)((long)plVar6 + 0x4c) & 1) == 0) {
        (**(code **)(*plVar6 + 0x20))(appplStack_d8);
        pppplVar10 = appplStack_d8;
        FUN_10917d374(&pppuStack_90,param_1 + 0x20);
        *(undefined8 *)(param_1 + 0x30) = uStack_80;
        *(undefined8 *)(param_1 + 0x28) = uStack_88;
        *(undefined8 *)(param_1 + 0x40) = uStack_70;
        *(undefined8 *)(param_1 + 0x38) = uStack_78;
        lVar19 = *(long *)(param_1 + 8);
        lVar22 = *(long *)(param_1 + 0x10);
      }
      else {
        *(undefined1 *)(param_1 + 0x49) = 1;
      }
      param_2 = (ulong ***)((long)param_2 + 1);
    } while ((long)param_2 < (long)(int)((ulong)(lVar22 - lVar19) >> 3));
  }
  puVar7 = puStack_a8;
  FUN_10918463c();
  if (*(long *)PTR____stack_chk_guard_11034bdc0 != lStack_68) {
    ___stack_chk_fail();
    FUN_109179870(&pppuStack_90);
    puVar8 = puVar7;
    __Unwind_Resume();
    pcStack_e8 = FUN_109180c90;
    ppuStack_120 = &puStack_f0;
    puVar9 = puVar8 + 2;
    puVar18 = (ulong *)puVar8[1];
    if (puVar18 < (ulong *)*puVar9) {
      puVar20 = puVar18 + 1;
      *puVar18 = (ulong)*pppplVar10;
    }
    else {
      lVar19 = (long)puVar18 - *puVar8;
      uVar17 = (lVar19 >> 3) + 1;
      ppplStack_110 = (long ***)unaff_x22;
      pppuStack_108 = unaff_x21;
      pppuStack_100 = param_2;
      puStack_f8 = puVar7;
      puStack_f0 = &stack0xfffffffffffffff0;
      if (uVar17 >> 0x3d != 0) {
        pppplVar11 = pppplVar10;
        FUN_109177ee4();
        pcStack_118 = FUN_109180d50;
        *puVar9 = (ulong)&PTR_FUN_110adef78;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar9[3] = 0;
        ppplStack_148 = (long ***)pppplVar11;
        ppplStack_140 = (long ***)unaff_x22;
        lStack_138 = lVar19;
        ppplStack_130 = (long ***)pppplVar10;
        puStack_128 = puVar8;
        (*(code *)(*pppplVar11)[4])(puVar9 + 4,pppplVar11);
        *(undefined2 *)(puVar9 + 9) = 0;
        *(undefined4 *)((long)puVar9 + 0x4c) = *(undefined4 *)(pppplVar11 + 1);
        FUN_109180c90(puVar9 + 1,&ppplStack_148);
        return puVar9;
      }
      uVar13 = (long)*puVar9 - *puVar8;
      uVar16 = (long)uVar13 >> 2;
      if (uVar16 <= uVar17) {
        uVar16 = uVar17;
      }
      if (0x7ffffffffffffff7 < uVar13) {
        uVar16 = 0x1fffffffffffffff;
      }
      FUN_109177ef8();
      puVar7 = (ulong *)((long)puVar9 + lVar19);
      puVar18 = puVar9 + uVar16;
      uVar17 = (long)puVar7 - (puVar8[1] - *puVar8);
      puVar20 = puVar7 + 1;
      *puVar7 = (ulong)*pppplVar10;
      _memcpy(uVar17);
      puVar9 = (ulong *)*puVar8;
      *puVar8 = uVar17;
      puVar8[1] = (ulong)puVar20;
      puVar8[2] = (ulong)puVar18;
      if (puVar9 != (ulong *)0x0) {
        __ZdlPv();
      }
    }
    puVar8[1] = (ulong)puVar20;
    return puVar9;
  }
  return puVar7;
}



/* Entry: 109180c90; end: 109180d4f;  */

ulong * FUN_109180c90(long *param_1,long *param_2)

{
  ulong uVar1;
  ulong *puVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plStack_68;
  
  puVar3 = (ulong *)(param_1 + 2);
  plVar6 = (long *)param_1[1];
  if (plVar6 < (long *)*puVar3) {
    plVar8 = plVar6 + 1;
    *plVar6 = *param_2;
  }
  else {
    lVar7 = (long)plVar6 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109177ee4();
      *puVar3 = (ulong)&PTR_FUN_110adef78;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      plStack_68 = param_2;
      (**(code **)(*param_2 + 0x20))(puVar3 + 4,param_2);
      *(undefined2 *)(puVar3 + 9) = 0;
      *(int *)((long)puVar3 + 0x4c) = (int)param_2[1];
      FUN_109180c90(puVar3 + 1,&plStack_68);
      return puVar3;
    }
    uVar4 = (long)*puVar3 - *param_1;
    uVar5 = (long)uVar4 >> 2;
    if (uVar5 <= uVar1) {
      uVar5 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar4) {
      uVar5 = 0x1fffffffffffffff;
    }
    FUN_109177ef8();
    plVar6 = (long *)((long)puVar3 + lVar7);
    puVar2 = puVar3 + uVar5;
    lVar7 = (long)plVar6 - (param_1[1] - *param_1);
    plVar8 = plVar6 + 1;
    *plVar6 = *param_2;
    _memcpy(lVar7);
    puVar3 = (ulong *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)plVar8;
    param_1[2] = (long)puVar2;
    if (puVar3 != (ulong *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)plVar8;
  return puVar3;
}



/* Entry: 109180d50; end: 109180deb;  */

undefined8 * FUN_109180d50(undefined8 *param_1,long *param_2)

{
  long *plStack_38;
  
  *param_1 = &PTR_FUN_110adef78;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  plStack_38 = param_2;
  (**(code **)(*param_2 + 0x20))(param_1 + 4,param_2);
  *(undefined2 *)(param_1 + 9) = 0;
  *(int *)((long)param_1 + 0x4c) = (int)param_2[1];
  FUN_109180c90(param_1 + 1,&plStack_38);
  return param_1;
}



/* Entry: 109180dec; end: 109180fa3;  */

long * FUN_109180dec(long *param_1,undefined8 param_2)

{
  ulong uVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  
  plVar2 = param_1 + 2;
  puVar8 = (undefined8 *)param_1[1];
  if (puVar8 < (undefined8 *)*plVar2) {
    puVar9 = puVar8 + 1;
    *puVar8 = param_2;
  }
  else {
    lVar7 = (long)puVar8 - *param_1;
    uVar1 = (lVar7 >> 3) + 1;
    if (uVar1 >> 0x3d != 0) {
      FUN_109177ee4();
      plVar3 = (long *)0x50;
      __Znwm();
      *plVar3 = (long)&PTR_FUN_110adef78;
      plVar3[1] = 0;
      plVar3[2] = 0;
      plVar3[3] = 0;
      plVar3[4] = (long)&PTR_FUN_110aded28;
      plVar3[6] = 0;
      plVar3[5] = 0x3ff0000000000000;
      plVar3[8] = -0x3ff6de04abbbd2e8;
      plVar3[7] = 0x400921fb54442d18;
      *(undefined2 *)(plVar3 + 9) = 1;
      *(undefined4 *)((long)plVar3 + 0x4c) = 0;
      lVar7 = plVar2[1];
      if (0 < (int)((ulong)(plVar2[2] - lVar7) >> 3)) {
        lVar10 = 0;
        do {
          plVar4 = *(long **)(lVar7 + lVar10 * 8);
          (**(code **)(*plVar4 + 0x10))();
          FUN_109180dec(plVar3 + 1,plVar4);
          lVar10 = lVar10 + 1;
          lVar7 = plVar2[1];
        } while (lVar10 < (int)((ulong)(plVar2[2] - lVar7) >> 3));
      }
      lVar7 = plVar2[5];
      plVar3[6] = plVar2[6];
      plVar3[5] = lVar7;
      lVar7 = plVar2[7];
      plVar3[8] = plVar2[8];
      plVar3[7] = lVar7;
      *(undefined1 *)(plVar3 + 9) = 1;
      *(undefined1 *)((long)plVar3 + 0x49) = *(undefined1 *)((long)plVar2 + 0x49);
      *(undefined4 *)((long)plVar3 + 0x4c) = *(undefined4 *)((long)plVar2 + 0x4c);
      return plVar3;
    }
    uVar5 = *plVar2 - *param_1;
    uVar6 = (long)uVar5 >> 2;
    if (uVar6 <= uVar1) {
      uVar6 = uVar1;
    }
    if (0x7ffffffffffffff7 < uVar5) {
      uVar6 = 0x1fffffffffffffff;
    }
    FUN_109177ef8();
    puVar8 = (undefined8 *)((long)plVar2 + lVar7);
    plVar3 = plVar2 + uVar6;
    lVar7 = (long)puVar8 - (param_1[1] - *param_1);
    puVar9 = puVar8 + 1;
    *puVar8 = param_2;
    _memcpy(lVar7);
    plVar2 = (long *)*param_1;
    *param_1 = lVar7;
    param_1[1] = (long)puVar9;
    param_1[2] = (long)plVar3;
    if (plVar2 != (long *)0x0) {
      __ZdlPv();
    }
  }
  param_1[1] = (long)puVar9;
  return plVar2;
}



/* Entry: 109180fa4; end: 109180ff3;  */

undefined8 * FUN_109180fa4(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adef78;
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_109180ff4(param_1 + 1);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109180ff4; end: 10918104b;  */

void FUN_109180ff4(long *param_1)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  
  lVar2 = *param_1;
  lVar3 = param_1[1];
  if (lVar3 != lVar2) {
    uVar4 = 0;
    do {
      plVar1 = *(long **)(lVar2 + uVar4 * 8);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 8))();
        lVar2 = *param_1;
        lVar3 = param_1[1];
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < (ulong)(lVar3 - lVar2 >> 3));
  }
  param_1[1] = lVar2;
  return;
}



/* Entry: 10918104c; end: 10918104f;  */

undefined8 * FUN_10918104c(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_110adef78;
  if (*(char *)(param_1 + 9) != '\0') {
    FUN_109180ff4(param_1 + 1);
  }
  if (param_1[1] != 0) {
    param_1[2] = param_1[1];
    __ZdlPv();
  }
  return param_1;
}



/* Entry: 109181050; end: 109181063;  */

void FUN_109181050(void)

{
  FUN_109180fa4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbd7b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ZdlPv_110352258)();
  return;
}


